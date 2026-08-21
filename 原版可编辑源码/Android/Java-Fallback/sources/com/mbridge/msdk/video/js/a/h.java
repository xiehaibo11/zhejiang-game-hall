package com.mbridge.msdk.video.js.a;

public final class h extends com.mbridge.msdk.video.js.a.a {
    private android.webkit.WebView a;
    private int b;

    public h(android.webkit.WebView r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            r1.a = r2
            return
    }

    @Override
    public final void a() {
            r4 = this;
            super.a()
            r0 = 1
            r4.b = r0
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            android.webkit.WebView r1 = r4.a
            java.lang.String r2 = "onSystemPause"
            java.lang.String r3 = ""
            r0.a(r1, r2, r3)
            return
    }

    @Override
    public final void a(int r1) {
            r0 = this;
            super.a(r1)
            r0.b = r1
            return
    }

    @Override
    public final void a(android.content.res.Configuration r4) {
            r3 = this;
            super.a(r4)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            int r4 = r4.orientation     // Catch: java.lang.Exception -> L30
            r1 = 2
            java.lang.String r2 = "orientation"
            if (r4 != r1) goto L15
            java.lang.String r4 = "landscape"
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L30
            goto L1a
        L15:
            java.lang.String r4 = "portrait"
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L30
        L1a:
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L30
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> L30
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r1)     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L30
            android.webkit.WebView r1 = r3.a     // Catch: java.lang.Exception -> L30
            r0.a(r1, r2, r4)     // Catch: java.lang.Exception -> L30
            goto L34
        L30:
            r4 = move-exception
            r4.printStackTrace()
        L34:
            return
    }

    @Override
    public final void b() {
            r4 = this;
            super.b()
            r0 = 0
            r4.b = r0
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            android.webkit.WebView r1 = r4.a
            java.lang.String r2 = "onSystemResume"
            java.lang.String r3 = ""
            r0.a(r1, r2, r3)
            return
    }

    @Override
    public final void c() {
            r4 = this;
            super.c()
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            android.webkit.WebView r1 = r4.a
            java.lang.String r2 = "onSystemDestory"
            java.lang.String r3 = ""
            r0.a(r1, r2, r3)
            return
    }

    @Override
    public final void g() {
            r4 = this;
            super.g()
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            android.webkit.WebView r1 = r4.a
            java.lang.String r2 = "onSystemBackPressed"
            java.lang.String r3 = ""
            r0.a(r1, r2, r3)
            return
    }

    @Override
    public final int h() {
            r1 = this;
            int r0 = r1.b
            return r0
    }
}
