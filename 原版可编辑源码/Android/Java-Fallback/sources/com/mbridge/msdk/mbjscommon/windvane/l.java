package com.mbridge.msdk.mbjscommon.windvane;

public final class l extends android.webkit.WebChromeClient {
    com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView a;
    private com.mbridge.msdk.mbjscommon.windvane.d b;

    public l(com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public final void a(com.mbridge.msdk.mbjscommon.windvane.d r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    public final boolean onConsoleMessage(android.webkit.ConsoleMessage r8) {
            r7 = this;
            android.webkit.ConsoleMessage$MessageLevel r0 = r8.messageLevel()
            android.webkit.ConsoleMessage$MessageLevel r1 = android.webkit.ConsoleMessage.MessageLevel.LOG
            if (r0 == r1) goto Ld
            boolean r8 = super.onConsoleMessage(r8)
            return r8
        Ld:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r7.a
            com.mbridge.msdk.mbjscommon.windvane.b r0 = r0.getJsBridge()
            if (r0 == 0) goto L7d
            if (r8 == 0) goto L7d
            java.lang.String r1 = r8.message()
            java.lang.String r2 = "wv_hybrid:"
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            r4 = 0
            if (r3 != 0) goto L7c
            java.lang.String r3 = "mv://"
            boolean r3 = r1.startsWith(r3)
            if (r3 == 0) goto L7c
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "onConsoleMessage: message.length() = "
            r3.append(r5)
            int r5 = r1.length()
            r3.append(r5)
            java.lang.String r5 = " "
            r3.append(r5)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            java.lang.String r6 = "H5_ENTRY"
            com.mbridge.msdk.foundation.tools.z.a(r6, r3)
            boolean r3 = r1.contains(r2)
            if (r3 == 0) goto L7d
            boolean r2 = r0.a(r2)
            if (r2 == 0) goto L7d
            int r8 = r1.lastIndexOf(r5)
            r2 = 1
            int r8 = r8 + r2
            java.lang.String r8 = r1.substring(r4, r8)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "message = "
            r1.append(r3)
            r1.append(r8)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r6, r1)
            r0.b(r8)
            return r2
        L7c:
            return r4
        L7d:
            boolean r8 = super.onConsoleMessage(r8)
            return r8
    }

    @Override
    public final boolean onJsPrompt(android.webkit.WebView r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, android.webkit.JsPromptResult r6) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r3 = ""
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "H5_ENTRY"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r1.a
            com.mbridge.msdk.mbjscommon.windvane.b r2 = r2.getJsBridge()
            if (r2 == 0) goto L2e
            if (r5 == 0) goto L2e
            boolean r5 = r2.a(r5)
            if (r5 == 0) goto L2e
            r2.b(r4)
            r6.confirm(r3)
            r2 = 1
            return r2
        L2e:
            r2 = 0
            return r2
    }

    @Override
    public final void onProgressChanged(android.webkit.WebView r2, int r3) {
            r1 = this;
            super.onProgressChanged(r2, r3)
            com.mbridge.msdk.mbjscommon.windvane.d r0 = r1.b
            if (r0 == 0) goto La
            r0.b(r2, r3)
        La:
            return
    }
}
