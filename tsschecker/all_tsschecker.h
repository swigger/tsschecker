//
//  all.h
//  tsschecker
//
//  Created by tihmstar on 26.01.16.
//  Copyright © 2016 tihmstar. All rights reserved.
//

#ifndef all_h
#define all_h

extern int idevicerestore_debug;

#define info(a ...) printf(a)
#define log(a ...) if (dbglog) printf(a)
#define warning(a ...) if (dbglog) printf("[WARNING] "), printf(a)
#define debug(a ...) if (idevicerestore_debug) printf(a)
#define error(a ...) printf("[Error] "),printf(a)

#define VERSION_COMMIT_COUNT "258"
#define VERSION_COMMIT_SHA "c862d7c457b63a18f05d35d6a8aa1379c4219936"


//statis assert
#define CASSERT(predicate, file) _impl_CASSERT_LINE(predicate,__LINE__,file)

#define _impl_PASTE(a,b) a##b
#define _impl_CASSERT_LINE(predicate, line, file) \
typedef char _impl_PASTE(assertion_failed_##file##_,line)[2*!!(predicate)-1];

#endif /* all_h */
