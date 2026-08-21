package com.tkay.expressad.video.signal.a;

public final class h extends com.tkay.expressad.video.signal.a.a {
    private static final java.lang.String g = "orientation";
    private static final java.lang.String h = "onSystemPause";
    private static final java.lang.String i = "onSystemResume";
    private static final java.lang.String j = "onSystemDestory";
    private static final java.lang.String k = "onSystemBackPressed";
    private static final java.lang.String l = "portrait";
    private static final java.lang.String m = "landscape";
    private android.webkit.WebView n;
    private int o;

    public h(android.webkit.WebView r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.o = r0
            r1.n = r2
            return
    }

    @Override
    public final void a() {
            r3 = this;
            super.a()
            r0 = 1
            r3.o = r0
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            android.webkit.WebView r0 = r3.n
            java.lang.String r1 = "onSystemPause"
            java.lang.String r2 = ""
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r1, r2)
            return
    }

    @Override
    public final void a(int r1) {
            r0 = this;
            super.a(r1)
            r0.o = r1
            return
    }

    @Override
    public final void a(android.content.res.Configuration r4) {
            r3 = this;
            super.a(r4)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2f
            r0.<init>()     // Catch: java.lang.Exception -> L2f
            int r4 = r4.orientation     // Catch: java.lang.Exception -> L2f
            r1 = 2
            java.lang.String r2 = "orientation"
            if (r4 != r1) goto L15
            java.lang.String r4 = "landscape"
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L2f
            goto L1a
        L15:
            java.lang.String r4 = "portrait"
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L2f
        L1a:
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L2f
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> L2f
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r1)     // Catch: java.lang.Exception -> L2f
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L2f
            android.webkit.WebView r0 = r3.n     // Catch: java.lang.Exception -> L2f
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r2, r4)     // Catch: java.lang.Exception -> L2f
            return
        L2f:
            r4 = move-exception
            r4.printStackTrace()
            return
    }

    @Override
    public final void b() {
            r3 = this;
            super.b()
            r0 = 0
            r3.o = r0
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            android.webkit.WebView r0 = r3.n
            java.lang.String r1 = "onSystemResume"
            java.lang.String r2 = ""
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r1, r2)
            return
    }

    @Override
    public final void c() {
            r3 = this;
            super.c()
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            android.webkit.WebView r0 = r3.n
            java.lang.String r1 = "onSystemDestory"
            java.lang.String r2 = ""
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r1, r2)
            return
    }

    @Override
    public final void g() {
            r3 = this;
            super.g()
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            android.webkit.WebView r0 = r3.n
            java.lang.String r1 = "onSystemBackPressed"
            java.lang.String r2 = ""
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r1, r2)
            return
    }

    @Override
    public final int h() {
            r1 = this;
            int r0 = r1.o
            return r0
    }
}
