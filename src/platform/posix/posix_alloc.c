//
// Copyright 2016 Garrett D'Amore <garrett@damore.org>
//
// This software is supplied under the terms of the MIT License, a
// copy of which should be located in the distribution where this
// file was obtained (LICENSE.txt).  A copy of the license may also be
// found online at https://opensource.org/licenses/MIT.
//

#include "core/nng_impl.h"

#ifdef PLATFORM_POSIX_ALLOC

#include <stdlib.h>

// POSIX memory allocation.  This is pretty much standard C.
void *
nni_alloc(size_t size)
{
	return (malloc(size));
}


void
nni_free(void *ptr, size_t size)
{
	NNI_ARG_UNUSED(size);
	free(ptr);
}


#endif
