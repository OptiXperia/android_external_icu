/*
*******************************************************************************
*
*   Copyright (C) 2002-2011, International Business Machines
*   Corporation and others.  All Rights Reserved.
*
*******************************************************************************
*
* File genrb.h
*
* Modification History:
*******************************************************************************
*/

#ifndef GENRB_H
#define GENRB_H

#include <stdio.h>
#include "unicode/utypes.h"
#include "unicode/putil.h"
#include "cmemory.h"
#include "cstring.h"
#include "filestrm.h"


#include "ucbuf.h"
#include "errmsg.h"
#include "parse.h"
#include "rbutil.h"
#include "reslist.h"


#include "toolutil.h"
#include "uoptions.h"

#include "unicode/ucol.h"
#include "unicode/uloc.h"

/* The version of genrb */
#define GENRB_VERSION "3.3"

U_CDECL_BEGIN

extern UBool gIncludeUnihanColl;
extern UBool gIncludeBig5HanColl;
extern UBool gIncludeGb2312HanColl;
extern UBool gIncludeZhuyinHanColl;

U_CAPI void processFile(
    const char *filename,
    const char* cp,
    const char *inputDir,
    const char *outputDir,
    const char *packageName,
    UBool omitBinaryCollation,
    UErrorCode *status);

U_CDECL_END

#endif
