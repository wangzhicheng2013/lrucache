/*************************************************************************
    > File Name: LRUCache.cpp
    > Author: wangzhicheng
    > Mail: 2363702560@qq.com 
    > Created Time: Sat 30 Sep 2017 08:42:13 PM AWST
 ************************************************************************/
#include "LRUCache.h"

namespace lrucache {
LRUCache::LRUCache(size_t cap):m_capacity(cap)
{
}
bool LRUCache::get(const string &key, string &val)
{
	if(m_nodelist.empty()) return false;
	if(m_nodelist.front().key == key)
	{
		val = m_nodelist.front().val;
		return true;
	}
	auto it = m_mapcache.find(key);
	if(it == end(m_mapcache)) return false;
	val = it->second->val;
	m_nodelist.splice(begin(m_nodelist), m_nodelist, it->second);	// move key to the front
	return true;
}
bool LRUCache::set(const string &key, const string &val)
{
	if(!m_nodelist.empty())
	{
		if(m_nodelist.front().key == key) return false;
		auto it = m_mapcache.find(key);
		if(it != end(m_mapcache)) return false;
	}
	m_nodelist.push_front(CacheNode(key, val));
	m_mapcache.insert(make_pair(key, begin(m_nodelist)));
	return true;
}

}

