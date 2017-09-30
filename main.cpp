/*************************************************************************
    > File Name: main.cpp
    > Author: wangzhicheng
    > Mail: 2363702560@qq.com 
    > Created Time: Sat 30 Sep 2017 08:44:08 PM AWST
 ************************************************************************/

#include "LRUCache.h"
#include "gtest/gtest.h"
#include <iostream>
using namespace lrucache;
static const size_t LEN = 10;
string keys[LEN] = {
	"ABCD00100HJXC!891",
	"OPBCD00100HJXC<8X1",
	"1CB>00100HJXC!091",
	"_+CD001D0HJXC!8M1",
	"AO:D00100HJXC!89?",
	"ABCD01100HJXC!891",
	"ABCD01Y00HJXC!89B",
	"2BCD01Y00HkXC!89B",
	"/BXD01Y00HkXC!89B",
	"ABXD01Y00HkXC!8UB"
};
string vals[LEN] = {
	"ABCD00100HJXC!891",
	"OPBCD00100HJXC<8X1",
	"1CB>00100HJXC!091",
	"_+CD001D0HJXC!8M1",
	"AO:D00100HJXC!89?",
	"ABCD01100HJXC!891",
	"ABCD01Y00HJXC!89B",
	"2BCD01Y00HkXC!89B",
	"/BXD01Y00HkXC!89B",
	"ABXD01Y00HkXC!8UB"
};
TEST(TESTLRUCACHE, FUNCTION)
{
	LRUCache cache;
	size_t i;
	string val;
	for(i = 0;i < LEN;i++)
	{
		EXPECT_TRUE(cache.set(keys[i], vals[i]));
	}
	for(i = 0;i < LEN;i++)
	{
		EXPECT_TRUE(cache.get(keys[i], val));
		EXPECT_EQ(keys[i], val);
	}

}
