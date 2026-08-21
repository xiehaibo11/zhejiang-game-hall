package com.tkay.expressad.atsignalcommon.windvane;

public class o extends android.webkit.WebChromeClient {
    private static final java.lang.String b = "H5_ENTRY";
    com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView a;
    private com.tkay.expressad.atsignalcommon.windvane.e c;

    public o(com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public final void a(com.tkay.expressad.atsignalcommon.windvane.e r1) {
            r0 = this;
            r0.c = r1
            return
    }

    @Override
    public boolean onConsoleMessage(android.webkit.ConsoleMessage r7) {
            r6 = this;
            android.webkit.ConsoleMessage$MessageLevel r0 = r7.messageLevel()
            android.webkit.ConsoleMessage$MessageLevel r1 = android.webkit.ConsoleMessage.MessageLevel.LOG
            if (r0 == r1) goto Ld
            boolean r7 = super.onConsoleMessage(r7)
            return r7
        Ld:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r6.a
            com.tkay.expressad.atsignalcommon.windvane.d r0 = r0.getSignalCommunication()
            if (r0 == 0) goto L5d
            if (r7 == 0) goto L5d
            java.lang.String r1 = r7.message()
            java.lang.String r2 = "wv_hybrid:"
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            r4 = 0
            if (r3 != 0) goto L5c
            java.lang.String r3 = "mv://"
            boolean r3 = r1.startsWith(r3)
            if (r3 == 0) goto L5c
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r5 = "onConsoleMessage: message.length() = "
            r3.<init>(r5)
            int r5 = r1.length()
            r3.append(r5)
            java.lang.String r5 = " "
            r3.append(r5)
            r3.append(r1)
            boolean r3 = r1.contains(r2)
            if (r3 == 0) goto L5d
            boolean r2 = r0.a(r2)
            if (r2 == 0) goto L5d
            int r7 = r1.lastIndexOf(r5)
            r2 = 1
            int r7 = r7 + r2
            java.lang.String r7 = r1.substring(r4, r7)
            r0.c(r7)
            return r2
        L5c:
            return r4
        L5d:
            boolean r7 = super.onConsoleMessage(r7)
            return r7
    }

    @Override
    public boolean onJsPrompt(android.webkit.WebView r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, android.webkit.JsPromptResult r5) {
            r0 = this;
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r0.a
            com.tkay.expressad.atsignalcommon.windvane.d r1 = r1.getSignalCommunication()
            if (r1 == 0) goto L22
            if (r4 == 0) goto L22
            boolean r2 = r1.a(r4)
            if (r2 == 0) goto L22
            r1.c(r3)
            java.lang.String r1 = ""
            r5.confirm(r1)
            r1 = 1
            return r1
        L22:
            r1 = 0
            return r1
    }

    @Override
    public void onProgressChanged(android.webkit.WebView r2, int r3) {
            r1 = this;
            super.onProgressChanged(r2, r3)
            com.tkay.expressad.atsignalcommon.windvane.e r0 = r1.c
            if (r0 == 0) goto La
            r0.onProgressChanged(r2, r3)
        La:
            return
    }
}
