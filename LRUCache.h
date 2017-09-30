/*************************************************************************
    > File Name: LRUCache.h
    > Author: wangzhicheng
    > Mail: 2363702560@qq.com 
    > Created Time: Sat 30 Sep 2017 08:42:13 PM AWST
	> Statement: a lru cache
 ************************************************************************/
#ifndef LRU_CACHE_H
#define LRU_CACHE_H
#include <list>
#include <unordered_map>
#include <map>
#include "CacheNode.h"

namespace lrucache {
using namespace cachenode;
class LRUCache
{
private:
	list<CacheNode>m_nodelist;
	typedef list<CacheNode>::iterator PosType;
	unordered_map<string, PosType>m_mapcache;	// high prior to map
//	map<string, PosType>m_mapcache;
	size_t m_capacity;
public:
	LRUCache(size_t = 1024);
	bool get(const string &key, string &val);
	bool set(const string &key, const string &val);
};
}
#endif

