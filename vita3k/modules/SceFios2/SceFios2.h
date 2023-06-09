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

BRIDGE_DECL(sceFiosArchiveGetDecompressorThreadCount)
BRIDGE_DECL(sceFiosArchiveGetMountBufferSize)
BRIDGE_DECL(sceFiosArchiveGetMountBufferSizeSync)
BRIDGE_DECL(sceFiosArchiveMount)
BRIDGE_DECL(sceFiosArchiveMountSync)
BRIDGE_DECL(sceFiosArchiveSetDecompressorThreadCount)
BRIDGE_DECL(sceFiosArchiveUnmount)
BRIDGE_DECL(sceFiosArchiveUnmountSync)
BRIDGE_DECL(sceFiosCacheContainsFileRangeSync)
BRIDGE_DECL(sceFiosCacheContainsFileSync)
BRIDGE_DECL(sceFiosCacheFlushFileRangeSync)
BRIDGE_DECL(sceFiosCacheFlushFileSync)
BRIDGE_DECL(sceFiosCacheFlushSync)
BRIDGE_DECL(sceFiosCachePrefetchFH)
BRIDGE_DECL(sceFiosCachePrefetchFHRange)
BRIDGE_DECL(sceFiosCachePrefetchFHRangeSync)
BRIDGE_DECL(sceFiosCachePrefetchFHSync)
BRIDGE_DECL(sceFiosCachePrefetchFile)
BRIDGE_DECL(sceFiosCachePrefetchFileRange)
BRIDGE_DECL(sceFiosCancelAllOps)
BRIDGE_DECL(sceFiosChangeStat)
BRIDGE_DECL(sceFiosChangeStatSync)
BRIDGE_DECL(sceFiosCloseAllFiles)
BRIDGE_DECL(sceFiosDHClose)
BRIDGE_DECL(sceFiosDHCloseSync)
BRIDGE_DECL(sceFiosDHGetPath)
BRIDGE_DECL(sceFiosDHOpen)
BRIDGE_DECL(sceFiosDHOpenSync)
BRIDGE_DECL(sceFiosDHRead)
BRIDGE_DECL(sceFiosDHReadSync)
BRIDGE_DECL(sceFiosDateFromComponents)
BRIDGE_DECL(sceFiosDateFromSceDateTime)
BRIDGE_DECL(sceFiosDateGetCurrent)
BRIDGE_DECL(sceFiosDateToComponents)
BRIDGE_DECL(sceFiosDateToSceDateTime)
BRIDGE_DECL(sceFiosDeallocatePassthruFH)
BRIDGE_DECL(sceFiosDebugDumpDH)
BRIDGE_DECL(sceFiosDebugDumpDate)
BRIDGE_DECL(sceFiosDebugDumpError)
BRIDGE_DECL(sceFiosDebugDumpFH)
BRIDGE_DECL(sceFiosDebugDumpOp)
BRIDGE_DECL(sceFiosDelete)
BRIDGE_DECL(sceFiosDeleteSync)
BRIDGE_DECL(sceFiosDevctl)
BRIDGE_DECL(sceFiosDevctlSync)
BRIDGE_DECL(sceFiosDirectoryCreate)
BRIDGE_DECL(sceFiosDirectoryCreateSync)
BRIDGE_DECL(sceFiosDirectoryCreateWithMode)
BRIDGE_DECL(sceFiosDirectoryCreateWithModeSync)
BRIDGE_DECL(sceFiosDirectoryDelete)
BRIDGE_DECL(sceFiosDirectoryDeleteSync)
BRIDGE_DECL(sceFiosDirectoryExists)
BRIDGE_DECL(sceFiosDirectoryExistsSync)
BRIDGE_DECL(sceFiosExists)
BRIDGE_DECL(sceFiosExistsSync)
BRIDGE_DECL(sceFiosFHClose)
BRIDGE_DECL(sceFiosFHCloseSync)
BRIDGE_DECL(sceFiosFHGetOpenParams)
BRIDGE_DECL(sceFiosFHGetPath)
BRIDGE_DECL(sceFiosFHGetSize)
BRIDGE_DECL(sceFiosFHIoctl)
BRIDGE_DECL(sceFiosFHIoctlSync)
BRIDGE_DECL(sceFiosFHOpen)
BRIDGE_DECL(sceFiosFHOpenSync)
BRIDGE_DECL(sceFiosFHOpenWithMode)
BRIDGE_DECL(sceFiosFHOpenWithModeSync)
BRIDGE_DECL(sceFiosFHPread)
BRIDGE_DECL(sceFiosFHPreadSync)
BRIDGE_DECL(sceFiosFHPreadv)
BRIDGE_DECL(sceFiosFHPreadvSync)
BRIDGE_DECL(sceFiosFHPwrite)
BRIDGE_DECL(sceFiosFHPwriteSync)
BRIDGE_DECL(sceFiosFHPwritev)
BRIDGE_DECL(sceFiosFHPwritevSync)
BRIDGE_DECL(sceFiosFHRead)
BRIDGE_DECL(sceFiosFHReadSync)
BRIDGE_DECL(sceFiosFHReadv)
BRIDGE_DECL(sceFiosFHReadvSync)
BRIDGE_DECL(sceFiosFHSeek)
BRIDGE_DECL(sceFiosFHStat)
BRIDGE_DECL(sceFiosFHStatSync)
BRIDGE_DECL(sceFiosFHSync)
BRIDGE_DECL(sceFiosFHSyncSync)
BRIDGE_DECL(sceFiosFHTell)
BRIDGE_DECL(sceFiosFHToFileno)
BRIDGE_DECL(sceFiosFHTruncate)
BRIDGE_DECL(sceFiosFHTruncateSync)
BRIDGE_DECL(sceFiosFHWrite)
BRIDGE_DECL(sceFiosFHWriteSync)
BRIDGE_DECL(sceFiosFHWritev)
BRIDGE_DECL(sceFiosFHWritevSync)
BRIDGE_DECL(sceFiosFileDelete)
BRIDGE_DECL(sceFiosFileDeleteSync)
BRIDGE_DECL(sceFiosFileExists)
BRIDGE_DECL(sceFiosFileExistsSync)
BRIDGE_DECL(sceFiosFileGetSize)
BRIDGE_DECL(sceFiosFileGetSizeSync)
BRIDGE_DECL(sceFiosFileRead)
BRIDGE_DECL(sceFiosFileReadSync)
BRIDGE_DECL(sceFiosFileTruncate)
BRIDGE_DECL(sceFiosFileTruncateSync)
BRIDGE_DECL(sceFiosFileWrite)
BRIDGE_DECL(sceFiosFileWriteSync)
BRIDGE_DECL(sceFiosFilenoToFH)
BRIDGE_DECL(sceFiosGetAllDHs)
BRIDGE_DECL(sceFiosGetAllFHs)
BRIDGE_DECL(sceFiosGetAllOps)
BRIDGE_DECL(sceFiosGetDefaultOpAttr)
BRIDGE_DECL(sceFiosGetGlobalDefaultOpAttr)
BRIDGE_DECL(sceFiosGetSuspendCount)
BRIDGE_DECL(sceFiosIOFilterAdd)
BRIDGE_DECL(sceFiosIOFilterCache)
BRIDGE_DECL(sceFiosIOFilterGetInfo)
BRIDGE_DECL(sceFiosIOFilterPsarcDearchiver)
BRIDGE_DECL(sceFiosIOFilterRemove)
BRIDGE_DECL(sceFiosInitialize)
BRIDGE_DECL(sceFiosIsIdle)
BRIDGE_DECL(sceFiosIsInitialized)
BRIDGE_DECL(sceFiosIsSuspended)
BRIDGE_DECL(sceFiosIsValidHandle)
BRIDGE_DECL(sceFiosOpCancel)
BRIDGE_DECL(sceFiosOpDelete)
BRIDGE_DECL(sceFiosOpGetActualCount)
BRIDGE_DECL(sceFiosOpGetAttr)
BRIDGE_DECL(sceFiosOpGetBuffer)
BRIDGE_DECL(sceFiosOpGetError)
BRIDGE_DECL(sceFiosOpGetOffset)
BRIDGE_DECL(sceFiosOpGetPath)
BRIDGE_DECL(sceFiosOpGetRequestCount)
BRIDGE_DECL(sceFiosOpIsCancelled)
BRIDGE_DECL(sceFiosOpIsDone)
BRIDGE_DECL(sceFiosOpReschedule)
BRIDGE_DECL(sceFiosOpRescheduleWithPriority)
BRIDGE_DECL(sceFiosOpSyncWait)
BRIDGE_DECL(sceFiosOpSyncWaitForIO)
BRIDGE_DECL(sceFiosOpWait)
BRIDGE_DECL(sceFiosOpWaitUntil)
BRIDGE_DECL(sceFiosOverlayAdd)
BRIDGE_DECL(sceFiosOverlayGetInfo)
BRIDGE_DECL(sceFiosOverlayGetList)
BRIDGE_DECL(sceFiosOverlayModify)
BRIDGE_DECL(sceFiosOverlayRemove)
BRIDGE_DECL(sceFiosOverlayResolveSync)
BRIDGE_DECL(sceFiosPathNormalize)
BRIDGE_DECL(sceFiosPathcmp)
BRIDGE_DECL(sceFiosPathncmp)
BRIDGE_DECL(sceFiosPrintf)
BRIDGE_DECL(sceFiosRename)
BRIDGE_DECL(sceFiosRenameSync)
BRIDGE_DECL(sceFiosResolve)
BRIDGE_DECL(sceFiosResolveSync)
BRIDGE_DECL(sceFiosResume)
BRIDGE_DECL(sceFiosSetGlobalDefaultOpAttr)
BRIDGE_DECL(sceFiosShutdownAndCancelOps)
BRIDGE_DECL(sceFiosStat)
BRIDGE_DECL(sceFiosStatSync)
BRIDGE_DECL(sceFiosStatisticsGet)
BRIDGE_DECL(sceFiosStatisticsPrint)
BRIDGE_DECL(sceFiosStatisticsReset)
BRIDGE_DECL(sceFiosSuspend)
BRIDGE_DECL(sceFiosSync)
BRIDGE_DECL(sceFiosSyncSync)
BRIDGE_DECL(sceFiosTerminate)
BRIDGE_DECL(sceFiosTimeGetCurrent)
BRIDGE_DECL(sceFiosTimeIntervalFromNanoseconds)
BRIDGE_DECL(sceFiosTimeIntervalToNanoseconds)
BRIDGE_DECL(sceFiosUpdateParameters)
BRIDGE_DECL(sceFiosVprintf)
