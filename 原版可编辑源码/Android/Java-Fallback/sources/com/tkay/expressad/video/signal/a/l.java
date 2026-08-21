package com.tkay.expressad.video.signal.a;

public final class l extends com.tkay.expressad.video.signal.a.e {
    private static final java.lang.String n = "onVideoStatusNotify";
    private static final java.lang.String o = "onJSClick";
    private static final java.lang.String p = "onVideoProgressNotify";
    private static final java.lang.String q = "webviewshow";
    private static final java.lang.String r = "showDataInfo";
    private static final java.lang.String s = "portrait";
    private static final java.lang.String t = "landscape";
    private android.webkit.WebView u;

    public l(android.webkit.WebView r1) {
            r0 = this;
            r0.<init>()
            r0.u = r1
            return
    }

    private static java.lang.String a(int r2, int r3) {
            if (r3 == 0) goto L1f
            float r2 = (float) r2
            float r0 = (float) r3
            float r2 = r2 / r0
            double r0 = (double) r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1b
            r2.<init>()     // Catch: java.lang.Throwable -> L1b
            java.lang.Double r0 = java.lang.Double.valueOf(r0)     // Catch: java.lang.Throwable -> L1b
            double r0 = com.tkay.expressad.foundation.h.t.a(r0)     // Catch: java.lang.Throwable -> L1b
            r2.append(r0)     // Catch: java.lang.Throwable -> L1b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1b
            return r2
        L1b:
            r2 = move-exception
            r2.printStackTrace()
        L1f:
            java.lang.String r2 = java.lang.String.valueOf(r3)
            return r2
    }

    @Override
    public final void a() {
            r1 = this;
            super.a()
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            android.webkit.WebView r0 = r1.u
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0)
            return
    }

    @Override
    public final void a(int r3) {
            r2 = this;
            super.a(r3)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L25
            r0.<init>()     // Catch: java.lang.Exception -> L25
            java.lang.String r1 = "status"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L25
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> L25
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Exception -> L25
            r0 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r0)     // Catch: java.lang.Exception -> L25
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L25
            android.webkit.WebView r0 = r2.u     // Catch: java.lang.Exception -> L25
            java.lang.String r1 = "onVideoStatusNotify"
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r1, r3)     // Catch: java.lang.Exception -> L25
            return
        L25:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    @Override
    public final void a(int r5, int r6, int r7, int r8) {
            r4 = this;
            super.a(r5, r6, r7, r8)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L46
            r0.<init>()     // Catch: java.lang.Exception -> L46
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L46
            r1.<init>()     // Catch: java.lang.Exception -> L46
            java.lang.String r2 = "landscape"
            r3 = 2
            if (r5 != r3) goto L16
            r5 = 1
            if (r6 == r5) goto L19
            goto L1b
        L16:
            if (r6 != r3) goto L19
            goto L1b
        L19:
            java.lang.String r2 = "portrait"
        L1b:
            java.lang.String r5 = "orientation"
            r1.put(r5, r2)     // Catch: java.lang.Exception -> L46
            java.lang.String r5 = "screen_width"
            r1.put(r5, r7)     // Catch: java.lang.Exception -> L46
            java.lang.String r5 = "screen_height"
            r1.put(r5, r8)     // Catch: java.lang.Exception -> L46
            java.lang.String r5 = "data"
            r0.put(r5, r1)     // Catch: java.lang.Exception -> L46
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L46
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L46
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r3)     // Catch: java.lang.Exception -> L46
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L46
            android.webkit.WebView r6 = r4.u     // Catch: java.lang.Exception -> L46
            java.lang.String r7 = "showDataInfo"
            com.tkay.expressad.atsignalcommon.windvane.j.a(r6, r7, r5)     // Catch: java.lang.Exception -> L46
            return
        L46:
            r5 = move-exception
            boolean r6 = com.tkay.expressad.b.a
            if (r6 == 0) goto L4e
            r5.printStackTrace()
        L4e:
            return
    }

    @Override
    public final void a(int r3, java.lang.String r4) {
            r2 = this;
            super.a(r3, r4)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2a
            r0.<init>()     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = "type"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L2a
            java.lang.String r3 = "pt"
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L2a
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> L2a
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Exception -> L2a
            r4 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r4)     // Catch: java.lang.Exception -> L2a
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L2a
            android.webkit.WebView r4 = r2.u     // Catch: java.lang.Exception -> L2a
            java.lang.String r0 = "onJSClick"
            com.tkay.expressad.atsignalcommon.windvane.j.a(r4, r0, r3)     // Catch: java.lang.Exception -> L2a
            return
        L2a:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    @Override
    public final void a(com.tkay.expressad.video.module.TkayVideoView.a r5) {
            r4 = this;
            super.a(r5)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L43
            r0.<init>()     // Catch: java.lang.Exception -> L43
            java.lang.String r1 = "progress"
            int r2 = r5.a     // Catch: java.lang.Exception -> L43
            int r3 = r5.b     // Catch: java.lang.Exception -> L43
            java.lang.String r2 = a(r2, r3)     // Catch: java.lang.Exception -> L43
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L43
            java.lang.String r1 = "time"
            int r2 = r5.a     // Catch: java.lang.Exception -> L43
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L43
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L43
            java.lang.String r1 = "duration"
            int r5 = r5.b     // Catch: java.lang.Exception -> L43
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Exception -> L43
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L43
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L43
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L43
            r0 = 2
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r0)     // Catch: java.lang.Exception -> L43
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L43
            android.webkit.WebView r0 = r4.u     // Catch: java.lang.Exception -> L43
            java.lang.String r1 = "onVideoProgressNotify"
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r1, r5)     // Catch: java.lang.Exception -> L43
            return
        L43:
            r5 = move-exception
            r5.printStackTrace()
            return
    }

    @Override
    public final void a(java.lang.Object r3) {
            r2 = this;
            super.a(r3)
            if (r3 == 0) goto L17
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L17
            java.lang.String r3 = r3.toString()
            byte[] r3 = r3.getBytes()
            r0 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r0)
            goto L19
        L17:
            java.lang.String r3 = ""
        L19:
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            android.webkit.WebView r0 = r2.u
            java.lang.String r1 = "webviewshow"
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r1, r3)
            return
    }
}
