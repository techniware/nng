//
// Copyright 2016 Garrett D'Amore <garrett@damore.org>
//
// This software is supplied under the terms of the MIT License, a
// copy of which should be located in the distribution where this
// file was obtained (LICENSE.txt).  A copy of the license may also be
// found online at https://opensource.org/licenses/MIT.
//

#ifndef CORE_MESSAGE_H
#define CORE_MESSAGE_H

// Internally used message API.  Again, this is not part of our public API.

extern int nni_msg_alloc(nni_msg **, size_t);
extern void nni_msg_free(nni_msg *);
extern int nni_msg_realloc(nni_msg *, size_t);
extern void *nni_msg_header(nni_msg *, size_t *);
extern void *nni_msg_body(nni_msg *, size_t *);
extern int nni_msg_append(nni_msg *, const void *, size_t);
extern int nni_msg_prepend(nni_msg *, const void *, size_t);
extern int nni_msg_append_header(nni_msg *, const void *, size_t);
extern int nni_msg_prepend_header(nni_msg *, const void *, size_t);
extern int nni_msg_trim(nni_msg *, size_t);
extern int nni_msg_trunc(nni_msg *, size_t);
extern int nni_msg_trim_header(nni_msg *, size_t);
extern int nni_msg_trunc_header(nni_msg *, size_t);
extern int nni_msg_pipe(nni_msg *, nni_pipe **);

#endif  // CORE_SOCKET_H
