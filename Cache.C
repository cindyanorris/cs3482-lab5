#include <iostream>
#include <string>
#include <assert.h>
#include "Cache.h"

/*
 * Cache constructor
 * Creates the twoD array of lines and initializes the
 * associativity, numSets, blockOffsetBits, setIndexBits,
 * and verbose data members.
 */
Cache::Cache(int32_t associativity, int32_t blockOffsetBits, 
             int32_t setIndexBits, bool verbose)
{
   //You will need to write the missing code
}

/*
 * Line constructor
 * Sets the tag to 0 and the valid bit to false (tag not valid)
 */
Cache::Line::Line()
{
   //This constructor is complete.
   tag = 0;
   valid = false;
}

/* You will need to determine what other methods you need and
 * add them.
 */
