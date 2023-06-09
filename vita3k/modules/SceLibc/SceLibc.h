// Vita3K emulator project
// Copyright (C) 2023 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#pragma once

#include <module/module.h>

BRIDGE_DECL(_Assert)
BRIDGE_DECL(_Btowc)
BRIDGE_DECL(_Exit)
BRIDGE_DECL(_FCbuild)
BRIDGE_DECL(_Fltrounds)
BRIDGE_DECL(_Iswctype)
BRIDGE_DECL(_Lockfilelock)
BRIDGE_DECL(_Locksyslock)
BRIDGE_DECL(_Mbtowc)
BRIDGE_DECL(_SCE_Assert)
BRIDGE_DECL(_Stod)
BRIDGE_DECL(_Stodx)
BRIDGE_DECL(_Stof)
BRIDGE_DECL(_Stofx)
BRIDGE_DECL(_Stold)
BRIDGE_DECL(_Stoldx)
BRIDGE_DECL(_Stoll)
BRIDGE_DECL(_Stollx)
BRIDGE_DECL(_Stolx)
BRIDGE_DECL(_Stoul)
BRIDGE_DECL(_Stoull)
BRIDGE_DECL(_Stoullx)
BRIDGE_DECL(_Stoulx)
BRIDGE_DECL(_Towctrans)
BRIDGE_DECL(_Unlockfilelock)
BRIDGE_DECL(_Unlocksyslock)
BRIDGE_DECL(_WStod)
BRIDGE_DECL(_WStof)
BRIDGE_DECL(_WStold)
BRIDGE_DECL(_WStoul)
BRIDGE_DECL(_Wctob)
BRIDGE_DECL(_Wctomb)
BRIDGE_DECL(__aeabi_atexit)
BRIDGE_DECL(__at_quick_exit)
BRIDGE_DECL(__cxa_atexit)
BRIDGE_DECL(__cxa_finalize)
BRIDGE_DECL(__cxa_guard_abort)
BRIDGE_DECL(__cxa_guard_acquire)
BRIDGE_DECL(__cxa_guard_release)
BRIDGE_DECL(__cxa_set_dso_handle_main)
BRIDGE_DECL(__set_exidx_main)
BRIDGE_DECL(__tls_get_addr)
BRIDGE_DECL(_sceLdTlsRegisterModuleInfo)
BRIDGE_DECL(_sceLdTlsUnregisterModuleInfo)
BRIDGE_DECL(_sceLibcErrnoLoc)
BRIDGE_DECL(abort)
BRIDGE_DECL(abort_handler_s)
BRIDGE_DECL(abs)
BRIDGE_DECL(asctime)
BRIDGE_DECL(asctime_s)
BRIDGE_DECL(atof)
BRIDGE_DECL(atoff)
BRIDGE_DECL(atoi)
BRIDGE_DECL(atol)
BRIDGE_DECL(atoll)
BRIDGE_DECL(bsearch)
BRIDGE_DECL(bsearch_s)
BRIDGE_DECL(btowc)
BRIDGE_DECL(c16rtomb)
BRIDGE_DECL(c32rtomb)
BRIDGE_DECL(calloc)
BRIDGE_DECL(clearerr)
BRIDGE_DECL(clock)
BRIDGE_DECL(ctime)
BRIDGE_DECL(ctime_s)
BRIDGE_DECL(difftime)
BRIDGE_DECL(div)
BRIDGE_DECL(exit)
BRIDGE_DECL(fclose)
BRIDGE_DECL(fdopen)
BRIDGE_DECL(feof)
BRIDGE_DECL(ferror)
BRIDGE_DECL(fflush)
BRIDGE_DECL(fgetc)
BRIDGE_DECL(fgetpos)
BRIDGE_DECL(fgets)
BRIDGE_DECL(fgetwc)
BRIDGE_DECL(fgetws)
BRIDGE_DECL(fileno)
BRIDGE_DECL(fopen)
BRIDGE_DECL(fopen_s)
BRIDGE_DECL(fprintf)
BRIDGE_DECL(fprintf_s)
BRIDGE_DECL(fputc)
BRIDGE_DECL(fputs)
BRIDGE_DECL(fputwc)
BRIDGE_DECL(fputws)
BRIDGE_DECL(fread)
BRIDGE_DECL(free)
BRIDGE_DECL(freopen)
BRIDGE_DECL(freopen_s)
BRIDGE_DECL(fscanf)
BRIDGE_DECL(fscanf_s)
BRIDGE_DECL(fseek)
BRIDGE_DECL(fsetpos)
BRIDGE_DECL(ftell)
BRIDGE_DECL(fwide)
BRIDGE_DECL(fwprintf)
BRIDGE_DECL(fwprintf_s)
BRIDGE_DECL(fwrite)
BRIDGE_DECL(fwscanf)
BRIDGE_DECL(fwscanf_s)
BRIDGE_DECL(getc)
BRIDGE_DECL(getchar)
BRIDGE_DECL(gets)
BRIDGE_DECL(gets_s)
BRIDGE_DECL(getwc)
BRIDGE_DECL(getwchar)
BRIDGE_DECL(gmtime)
BRIDGE_DECL(gmtime_s)
BRIDGE_DECL(ignore_handler_s)
BRIDGE_DECL(imaxabs)
BRIDGE_DECL(imaxdiv)
BRIDGE_DECL(isalnum)
BRIDGE_DECL(isalpha)
BRIDGE_DECL(isblank)
BRIDGE_DECL(iscntrl)
BRIDGE_DECL(isdigit)
BRIDGE_DECL(isgraph)
BRIDGE_DECL(islower)
BRIDGE_DECL(isprint)
BRIDGE_DECL(ispunct)
BRIDGE_DECL(isspace)
BRIDGE_DECL(isupper)
BRIDGE_DECL(iswalnum)
BRIDGE_DECL(iswalpha)
BRIDGE_DECL(iswblank)
BRIDGE_DECL(iswcntrl)
BRIDGE_DECL(iswctype)
BRIDGE_DECL(iswdigit)
BRIDGE_DECL(iswgraph)
BRIDGE_DECL(iswlower)
BRIDGE_DECL(iswprint)
BRIDGE_DECL(iswpunct)
BRIDGE_DECL(iswspace)
BRIDGE_DECL(iswupper)
BRIDGE_DECL(iswxdigit)
BRIDGE_DECL(isxdigit)
BRIDGE_DECL(labs)
BRIDGE_DECL(ldiv)
BRIDGE_DECL(llabs)
BRIDGE_DECL(lldiv)
BRIDGE_DECL(localtime)
BRIDGE_DECL(localtime_s)
BRIDGE_DECL(longjmp)
BRIDGE_DECL(malloc)
BRIDGE_DECL(malloc_stats)
BRIDGE_DECL(malloc_stats_fast)
BRIDGE_DECL(malloc_usable_size)
BRIDGE_DECL(mblen)
BRIDGE_DECL(mbrlen)
BRIDGE_DECL(mbrtoc16)
BRIDGE_DECL(mbrtoc32)
BRIDGE_DECL(mbrtowc)
BRIDGE_DECL(mbsinit)
BRIDGE_DECL(mbsrtowcs)
BRIDGE_DECL(mbsrtowcs_s)
BRIDGE_DECL(mbstowcs)
BRIDGE_DECL(mbstowcs_s)
BRIDGE_DECL(mbtowc)
BRIDGE_DECL(memalign)
BRIDGE_DECL(memchr)
BRIDGE_DECL(memcmp)
BRIDGE_DECL(memcpy)
BRIDGE_DECL(memcpy_s)
BRIDGE_DECL(memmove)
BRIDGE_DECL(memmove_s)
BRIDGE_DECL(memset)
BRIDGE_DECL(mktime)
BRIDGE_DECL(mspace_calloc)
BRIDGE_DECL(mspace_create)
BRIDGE_DECL(mspace_create_internal)
BRIDGE_DECL(mspace_create_with_flag)
BRIDGE_DECL(mspace_destroy)
BRIDGE_DECL(mspace_free)
BRIDGE_DECL(mspace_is_heap_empty)
BRIDGE_DECL(mspace_malloc)
BRIDGE_DECL(mspace_malloc_stats)
BRIDGE_DECL(mspace_malloc_stats_fast)
BRIDGE_DECL(mspace_malloc_usable_size)
BRIDGE_DECL(mspace_memalign)
BRIDGE_DECL(mspace_realloc)
BRIDGE_DECL(mspace_reallocalign)
BRIDGE_DECL(perror)
BRIDGE_DECL(printf)
BRIDGE_DECL(printf_s)
BRIDGE_DECL(putc)
BRIDGE_DECL(putchar)
BRIDGE_DECL(puts)
BRIDGE_DECL(putwc)
BRIDGE_DECL(putwchar)
BRIDGE_DECL(qsort)
BRIDGE_DECL(qsort_s)
BRIDGE_DECL(quick_exit)
BRIDGE_DECL(rand)
BRIDGE_DECL(rand_r)
BRIDGE_DECL(realloc)
BRIDGE_DECL(reallocalign)
BRIDGE_DECL(remove)
BRIDGE_DECL(rename)
BRIDGE_DECL(rewind)
BRIDGE_DECL(scanf)
BRIDGE_DECL(scanf_s)
BRIDGE_DECL(sceLibcFopenWithFD)
BRIDGE_DECL(sceLibcFopenWithFH)
BRIDGE_DECL(sceLibcGetFD)
BRIDGE_DECL(sceLibcGetFH)
BRIDGE_DECL(sceLibcSetHeapInitError)
BRIDGE_DECL(set_constraint_handler_s)
BRIDGE_DECL(setbuf)
BRIDGE_DECL(setjmp)
BRIDGE_DECL(setvbuf)
BRIDGE_DECL(snprintf)
BRIDGE_DECL(snprintf_s)
BRIDGE_DECL(snwprintf_s)
BRIDGE_DECL(sprintf)
BRIDGE_DECL(sprintf_s)
BRIDGE_DECL(srand)
BRIDGE_DECL(sscanf)
BRIDGE_DECL(sscanf_s)
BRIDGE_DECL(strcasecmp)
BRIDGE_DECL(strcat)
BRIDGE_DECL(strcat_s)
BRIDGE_DECL(strchr)
BRIDGE_DECL(strcmp)
BRIDGE_DECL(strcoll)
BRIDGE_DECL(strcpy)
BRIDGE_DECL(strcpy_s)
BRIDGE_DECL(strcspn)
BRIDGE_DECL(strdup)
BRIDGE_DECL(strerror)
BRIDGE_DECL(strerror_s)
BRIDGE_DECL(strerrorlen_s)
BRIDGE_DECL(strftime)
BRIDGE_DECL(strlen)
BRIDGE_DECL(strncasecmp)
BRIDGE_DECL(strncat)
BRIDGE_DECL(strncat_s)
BRIDGE_DECL(strncmp)
BRIDGE_DECL(strncpy)
BRIDGE_DECL(strncpy_s)
BRIDGE_DECL(strnlen_s)
BRIDGE_DECL(strpbrk)
BRIDGE_DECL(strrchr)
BRIDGE_DECL(strspn)
BRIDGE_DECL(strstr)
BRIDGE_DECL(strtod)
BRIDGE_DECL(strtof)
BRIDGE_DECL(strtoimax)
BRIDGE_DECL(strtok)
BRIDGE_DECL(strtok_r)
BRIDGE_DECL(strtok_s)
BRIDGE_DECL(strtol)
BRIDGE_DECL(strtold)
BRIDGE_DECL(strtoll)
BRIDGE_DECL(strtoul)
BRIDGE_DECL(strtoull)
BRIDGE_DECL(strtoumax)
BRIDGE_DECL(strxfrm)
BRIDGE_DECL(swprintf)
BRIDGE_DECL(swprintf_s)
BRIDGE_DECL(swscanf)
BRIDGE_DECL(swscanf_s)
BRIDGE_DECL(time)
BRIDGE_DECL(tolower)
BRIDGE_DECL(toupper)
BRIDGE_DECL(towctrans)
BRIDGE_DECL(towlower)
BRIDGE_DECL(towupper)
BRIDGE_DECL(ungetc)
BRIDGE_DECL(ungetwc)
BRIDGE_DECL(vfprintf)
BRIDGE_DECL(vfprintf_s)
BRIDGE_DECL(vfscanf)
BRIDGE_DECL(vfscanf_s)
BRIDGE_DECL(vfwprintf)
BRIDGE_DECL(vfwprintf_s)
BRIDGE_DECL(vfwscanf)
BRIDGE_DECL(vfwscanf_s)
BRIDGE_DECL(vprintf)
BRIDGE_DECL(vprintf_s)
BRIDGE_DECL(vscanf)
BRIDGE_DECL(vscanf_s)
BRIDGE_DECL(vsnprintf)
BRIDGE_DECL(vsnprintf_s)
BRIDGE_DECL(vsnwprintf_s)
BRIDGE_DECL(vsprintf)
BRIDGE_DECL(vsprintf_s)
BRIDGE_DECL(vsscanf)
BRIDGE_DECL(vsscanf_s)
BRIDGE_DECL(vswprintf)
BRIDGE_DECL(vswprintf_s)
BRIDGE_DECL(vswscanf)
BRIDGE_DECL(vswscanf_s)
BRIDGE_DECL(vwprintf)
BRIDGE_DECL(vwprintf_s)
BRIDGE_DECL(vwscanf)
BRIDGE_DECL(vwscanf_s)
BRIDGE_DECL(wcrtomb)
BRIDGE_DECL(wcrtomb_s)
BRIDGE_DECL(wcscat)
BRIDGE_DECL(wcscat_s)
BRIDGE_DECL(wcschr)
BRIDGE_DECL(wcscmp)
BRIDGE_DECL(wcscoll)
BRIDGE_DECL(wcscpy)
BRIDGE_DECL(wcscpy_s)
BRIDGE_DECL(wcscspn)
BRIDGE_DECL(wcsftime)
BRIDGE_DECL(wcslen)
BRIDGE_DECL(wcsncat)
BRIDGE_DECL(wcsncat_s)
BRIDGE_DECL(wcsncmp)
BRIDGE_DECL(wcsncpy)
BRIDGE_DECL(wcsncpy_s)
BRIDGE_DECL(wcsnlen_s)
BRIDGE_DECL(wcspbrk)
BRIDGE_DECL(wcsrchr)
BRIDGE_DECL(wcsrtombs)
BRIDGE_DECL(wcsrtombs_s)
BRIDGE_DECL(wcsspn)
BRIDGE_DECL(wcsstr)
BRIDGE_DECL(wcstod)
BRIDGE_DECL(wcstof)
BRIDGE_DECL(wcstoimax)
BRIDGE_DECL(wcstok)
BRIDGE_DECL(wcstok_s)
BRIDGE_DECL(wcstol)
BRIDGE_DECL(wcstold)
BRIDGE_DECL(wcstoll)
BRIDGE_DECL(wcstombs)
BRIDGE_DECL(wcstombs_s)
BRIDGE_DECL(wcstoul)
BRIDGE_DECL(wcstoull)
BRIDGE_DECL(wcstoumax)
BRIDGE_DECL(wcsxfrm)
BRIDGE_DECL(wctob)
BRIDGE_DECL(wctomb)
BRIDGE_DECL(wctomb_s)
BRIDGE_DECL(wctrans)
BRIDGE_DECL(wctype)
BRIDGE_DECL(wmemchr)
BRIDGE_DECL(wmemcmp)
BRIDGE_DECL(wmemcpy)
BRIDGE_DECL(wmemcpy_s)
BRIDGE_DECL(wmemmove)
BRIDGE_DECL(wmemmove_s)
BRIDGE_DECL(wmemset)
BRIDGE_DECL(wprintf)
BRIDGE_DECL(wprintf_s)
BRIDGE_DECL(wscanf)
BRIDGE_DECL(wscanf_s)
