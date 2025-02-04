// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IOS_WEB_WEB_VIEW_WK_WEB_VIEW_UTIL_H_
#define IOS_WEB_WEB_VIEW_WK_WEB_VIEW_UTIL_H_

#import <WebKit/WebKit.h>

namespace web {
// Returns true if a SafeBrowsing warning is currently displayed within
// |web_view|.
bool IsSafeBrowsingWarningDisplayedInWebView(WKWebView* web_view);

// Returns true if workaround for loading restricted URLs should be applied.
// TODO(crbug.com/954332): Remove this workaround when
// https://bugs.webkit.org/show_bug.cgi?id=196930 is fixed.
bool RequiresContentFilterBlockingWorkaround();
}  // namespace web

#endif  // IOS_WEB_WEB_VIEW_WK_WEB_VIEW_UTIL_H_
