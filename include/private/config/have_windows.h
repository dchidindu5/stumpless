/* SPDX-License-Identifier: Apache-2.0 */

/*
* Copyright 2018-2020 Joel E. Anderson
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef __STUMPLESS_PRIVATE_CONFIG_HAVE_WINDOWS_H
#  define __STUMPLESS_PRIVATE_CONFIG_HAVE_WINDOWS_H

#  include <stdbool.h>
#  include <stddef.h>
#  include "private/windows_wrapper.h"

bool
windows_compare_exchange_bool( LONG volatile *b,
                               LONG expected,
                               LONG replacement );

bool
windows_compare_exchange_ptr( PVOID volatile *p,
                              const void *expected,
                              PVOID replacement );

void
windows_destroy_mutex( const CRITICAL_SECTION *mutex );

int
windows_gethostname( char *buffer, size_t namelen );

size_t
windows_getpagesize( void );

int
windows_getpid( void );

void
windows_init_mutex( LPCRITICAL_SECTION mutex );

void
windows_lock_mutex( const CRITICAL_SECTION *mutex );

void
windows_unlock_mutex( const CRITICAL_SECTION *mutex );

#endif /* __STUMPLESS_PRIVATE_CONFIG_HAVE_WINDOWS_H */