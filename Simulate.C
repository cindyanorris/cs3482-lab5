#include <fstream>
#include <iostream>
#include <string>
#include <assert.h>
#include "Cache.h"
#include "Simulate.h"

/* Simulate
 * Initializes the hits, misses, evictions, and verbose
 * data members.
 * Create the cache object that will be used in the
 * simulation.
 */
Simulate::Simulate(int32_t associativity, int32_t blockOffsetBits, 
                   int32_t setIndexBits, bool verbose)
{
   //This method is complete
   hits = misses = evictions = 0;
   cacheP = new Cache(associativity, blockOffsetBits, setIndexBits, verbose);
   this->verbose = verbose;
}

/*
 * run
 * Opens the file of addresses and uses each address of a data item
 * to perform a cache access.  The addresses are formatted as follows:
I 0400d7d4,8
 M 0421c7f0,4
 L 04f6b868,8
 S 7ff0005c8,8

Each line denotes one or two memory accesses. The format of each line is

[space]operation address,size

The operation field denotes the type of memory access: 
I denotes an instruction load, L a data load, S a data store, and M a 
data modify (i.e., a data load  followed by a data store, thus two 
sequential accesses to cache). There is never a space before an I. 
There is always a space before each M, L, and S. The address field 
specifies a 64-bit hexadecimal memory address. The size field specifies 
the number of bytes accessed by the operation.  The size
field and instruction (I) addresses can be ignored.

This method will use an address to access the cache
and update the hits, misses, and evictions data members.
*/
void Simulate::run(std::string filename)
{
   //You will need to write this.
   //It will call methods in the Cache class that you
   //will also have to write.
}

/*
 * printSummary
 * Prints the number of hits, misses, and evictions both
 * to stdout and to a file to support automatic testing
 */
void Simulate::printSummary()
{
   //This method is complete
   std::fstream fs;
   printf("hits:%d misses:%d evictions:%d\n", hits, misses, evictions);
   fs.open(".csim_results", std::fstream::out);
   assert(fs.is_open());
   fs << hits << " " << misses << " " << evictions <<"\n";;
   fs.close();
}

/* You will need to determine what other methods you need and
 * add them.
 */
