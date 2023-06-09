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

BRIDGE_DECL(sceCameraImportDialogAbort)
BRIDGE_DECL(sceCameraImportDialogGetResult)
BRIDGE_DECL(sceCameraImportDialogGetStatus)
BRIDGE_DECL(sceCameraImportDialogInit)
BRIDGE_DECL(sceCameraImportDialogTerm)
BRIDGE_DECL(sceCommonDialogGetWorkerThreadId)
BRIDGE_DECL(sceCommonDialogIsRunning)
BRIDGE_DECL(sceCommonDialogSetConfigParam)
BRIDGE_DECL(sceCommonDialogUpdate)
BRIDGE_DECL(sceCompanionUtilDialogAbort)
BRIDGE_DECL(sceCompanionUtilDialogGetResult)
BRIDGE_DECL(sceCompanionUtilDialogGetStatus)
BRIDGE_DECL(sceCompanionUtilDialogInit)
BRIDGE_DECL(sceCompanionUtilDialogTerm)
BRIDGE_DECL(sceCrossControllerDialogAbort)
BRIDGE_DECL(sceCrossControllerDialogGetResult)
BRIDGE_DECL(sceCrossControllerDialogGetStatus)
BRIDGE_DECL(sceCrossControllerDialogInit)
BRIDGE_DECL(sceCrossControllerDialogTerm)
BRIDGE_DECL(sceImeDialogAbort)
BRIDGE_DECL(sceImeDialogGetResult)
BRIDGE_DECL(sceImeDialogGetStatus)
BRIDGE_DECL(sceImeDialogInit)
BRIDGE_DECL(sceImeDialogTerm)
BRIDGE_DECL(sceMsgDialogAbort)
BRIDGE_DECL(sceMsgDialogClose)
BRIDGE_DECL(sceMsgDialogGetResult)
BRIDGE_DECL(sceMsgDialogGetStatus)
BRIDGE_DECL(sceMsgDialogInit)
BRIDGE_DECL(sceMsgDialogProgressBarInc)
BRIDGE_DECL(sceMsgDialogProgressBarSetMsg)
BRIDGE_DECL(sceMsgDialogProgressBarSetValue)
BRIDGE_DECL(sceMsgDialogTerm)
BRIDGE_DECL(sceNetCheckDialogAbort)
BRIDGE_DECL(sceNetCheckDialogGetPS3ConnectInfo)
BRIDGE_DECL(sceNetCheckDialogGetResult)
BRIDGE_DECL(sceNetCheckDialogGetStatus)
BRIDGE_DECL(sceNetCheckDialogInit)
BRIDGE_DECL(sceNetCheckDialogTerm)
BRIDGE_DECL(sceNpFriendList2DialogAbort)
BRIDGE_DECL(sceNpFriendList2DialogGetResult)
BRIDGE_DECL(sceNpFriendList2DialogGetStatus)
BRIDGE_DECL(sceNpFriendList2DialogInit)
BRIDGE_DECL(sceNpFriendList2DialogTerm)
BRIDGE_DECL(sceNpFriendListDialogAbort)
BRIDGE_DECL(sceNpFriendListDialogGetResult)
BRIDGE_DECL(sceNpFriendListDialogGetStatus)
BRIDGE_DECL(sceNpFriendListDialogInit)
BRIDGE_DECL(sceNpFriendListDialogTerm)
BRIDGE_DECL(sceNpMessageDialogAbort)
BRIDGE_DECL(sceNpMessageDialogGetResult)
BRIDGE_DECL(sceNpMessageDialogGetStatus)
BRIDGE_DECL(sceNpMessageDialogInit)
BRIDGE_DECL(sceNpMessageDialogTerm)
BRIDGE_DECL(sceNpProfileDialogAbort)
BRIDGE_DECL(sceNpProfileDialogGetResult)
BRIDGE_DECL(sceNpProfileDialogGetStatus)
BRIDGE_DECL(sceNpProfileDialogInit)
BRIDGE_DECL(sceNpProfileDialogTerm)
BRIDGE_DECL(sceNpSnsFacebookDialogAbort)
BRIDGE_DECL(sceNpSnsFacebookDialogGetResult)
BRIDGE_DECL(sceNpSnsFacebookDialogGetResultLongToken)
BRIDGE_DECL(sceNpSnsFacebookDialogGetStatus)
BRIDGE_DECL(sceNpSnsFacebookDialogInit)
BRIDGE_DECL(sceNpSnsFacebookDialogTerm)
BRIDGE_DECL(sceNpTrophySetupDialogAbort)
BRIDGE_DECL(sceNpTrophySetupDialogGetResult)
BRIDGE_DECL(sceNpTrophySetupDialogGetStatus)
BRIDGE_DECL(sceNpTrophySetupDialogInit)
BRIDGE_DECL(sceNpTrophySetupDialogTerm)
BRIDGE_DECL(scePhotoImportDialogAbort)
BRIDGE_DECL(scePhotoImportDialogGetResult)
BRIDGE_DECL(scePhotoImportDialogGetStatus)
BRIDGE_DECL(scePhotoImportDialogInit)
BRIDGE_DECL(scePhotoImportDialogTerm)
BRIDGE_DECL(scePhotoReviewDialogAbort)
BRIDGE_DECL(scePhotoReviewDialogGetResult)
BRIDGE_DECL(scePhotoReviewDialogGetStatus)
BRIDGE_DECL(scePhotoReviewDialogInit)
BRIDGE_DECL(scePhotoReviewDialogTerm)
BRIDGE_DECL(scePspSaveDataDialogContinue)
BRIDGE_DECL(scePspSaveDataDialogGetResult)
BRIDGE_DECL(scePspSaveDataDialogInit)
BRIDGE_DECL(scePspSaveDataDialogTerm)
BRIDGE_DECL(sceRemoteOSKDialogAbort)
BRIDGE_DECL(sceRemoteOSKDialogGetResult)
BRIDGE_DECL(sceRemoteOSKDialogGetStatus)
BRIDGE_DECL(sceRemoteOSKDialogInit)
BRIDGE_DECL(sceRemoteOSKDialogTerm)
BRIDGE_DECL(sceSaveDataDialogAbort)
BRIDGE_DECL(sceSaveDataDialogContinue)
BRIDGE_DECL(sceSaveDataDialogFinish)
BRIDGE_DECL(sceSaveDataDialogGetResult)
BRIDGE_DECL(sceSaveDataDialogGetStatus)
BRIDGE_DECL(sceSaveDataDialogGetSubStatus)
BRIDGE_DECL(sceSaveDataDialogInit)
BRIDGE_DECL(sceSaveDataDialogProgressBarInc)
BRIDGE_DECL(sceSaveDataDialogProgressBarSetValue)
BRIDGE_DECL(sceSaveDataDialogSubClose)
BRIDGE_DECL(sceSaveDataDialogTerm)
BRIDGE_DECL(sceStoreCheckoutDialogAbort)
BRIDGE_DECL(sceStoreCheckoutDialogGetResult)
BRIDGE_DECL(sceStoreCheckoutDialogGetStatus)
BRIDGE_DECL(sceStoreCheckoutDialogInit)
BRIDGE_DECL(sceStoreCheckoutDialogTerm)
BRIDGE_DECL(sceTwDialogAbort)
BRIDGE_DECL(sceTwDialogGetResult)
BRIDGE_DECL(sceTwDialogGetStatus)
BRIDGE_DECL(sceTwDialogInit)
BRIDGE_DECL(sceTwDialogTerm)
BRIDGE_DECL(sceTwLoginDialogAbort)
BRIDGE_DECL(sceTwLoginDialogGetResult)
BRIDGE_DECL(sceTwLoginDialogGetStatus)
BRIDGE_DECL(sceTwLoginDialogTerm)
BRIDGE_DECL(sceVideoImportDialogAbort)
BRIDGE_DECL(sceVideoImportDialogGetResult)
BRIDGE_DECL(sceVideoImportDialogGetStatus)
BRIDGE_DECL(sceVideoImportDialogInit)
BRIDGE_DECL(sceVideoImportDialogTerm)
