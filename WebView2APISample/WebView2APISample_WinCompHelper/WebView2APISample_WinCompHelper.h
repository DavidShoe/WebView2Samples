// Copyright (C) Microsoft Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once
#include <d2d1_1helper.h>

struct __declspec(uuid("358033FD-2E44-4742-8277-0B61CC139A92")) IWinCompHelper : IUnknown
{
    STDMETHOD(CreateCompositor)() = 0;
    STDMETHOD(BuildVisualTree)(HWND hostWindow, IUnknown** visual) = 0;
    STDMETHOD(UpdateSizeAndPosition)(POINT webViewOffset, SIZE webViewSize) = 0;
    STDMETHOD(ApplyMatrix)(D2D1_MATRIX_4X4_F matrix) = 0;
    STDMETHOD(DestroyVisualTree)() = 0;
};

extern "C" HRESULT CreateWinCompHelper(
    IWinCompHelper** wincompHelper);
