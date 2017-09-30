#ifndef CACHE_NODE_H
#define CACHE_NODE_H
#include <string>
namespace cachenode {
using namespace std;
class CacheNode
{
public:
	string key;
	string val;
public:
	CacheNode(const string &_key, const string &_val):key(_key), val(_val)
	{
	}
};
}
#endif
