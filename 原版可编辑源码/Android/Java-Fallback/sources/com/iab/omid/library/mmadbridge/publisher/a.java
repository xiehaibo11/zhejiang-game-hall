package com.iab.omid.library.mmadbridge.publisher;

public class a extends com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher {
    public a(android.webkit.WebView r3) {
            r2 = this;
            r2.<init>()
            if (r3 == 0) goto L17
            android.webkit.WebSettings r0 = r3.getSettings()
            boolean r0 = r0.getJavaScriptEnabled()
            if (r0 != 0) goto L17
            android.webkit.WebSettings r0 = r3.getSettings()
            r1 = 1
            r0.setJavaScriptEnabled(r1)
        L17:
            r2.a(r3)
            return
    }
}
