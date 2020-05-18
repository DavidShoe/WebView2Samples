// Copyright (C) Microsoft Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

#pragma warning( push  )
#pragma warning( disable: 6319  )
#pragma warning( disable: 6011  )
#pragma warning( disable: 6285  )
#include <wil/com.h>
#include <wil/resource.h>
#include <wil/result.h>
#include <wrl.h>
#pragma warning( pop )

#pragma warning( push  )
#pragma warning( disable: 26812  )
#include "webview2experimental.h"
#pragma warning( pop )

#include "Webview2EnvironmentOptions.h"
