package com.mbridge.msdk.video.js.a;

public final class l extends com.mbridge.msdk.video.js.a.e {
    private android.webkit.WebView a;

    public l(android.webkit.WebView r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    private java.lang.String a(int r4, int r5) {
            r3 = this;
            java.lang.String r0 = ""
            if (r5 == 0) goto L24
            float r4 = (float) r4
            float r1 = (float) r5
            float r4 = r4 / r1
            double r1 = (double) r4
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L20
            r4.<init>()     // Catch: java.lang.Throwable -> L20
            java.lang.Double r1 = java.lang.Double.valueOf(r1)     // Catch: java.lang.Throwable -> L20
            double r1 = com.mbridge.msdk.foundation.tools.ae.a(r1)     // Catch: java.lang.Throwable -> L20
            r4.append(r1)     // Catch: java.lang.Throwable -> L20
            r4.append(r0)     // Catch: java.lang.Throwable -> L20
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L20
            return r4
        L20:
            r4 = move-exception
            r4.printStackTrace()
        L24:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            return r4
    }

    @Override
    public final void a(int r4) {
            r3 = this;
            super.a(r4)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L26
            r0.<init>()     // Catch: java.lang.Exception -> L26
            java.lang.String r1 = "status"
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L26
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L26
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> L26
            r0 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r0)     // Catch: java.lang.Exception -> L26
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L26
            android.webkit.WebView r1 = r3.a     // Catch: java.lang.Exception -> L26
            java.lang.String r2 = "onVideoStatusNotify"
            r0.a(r1, r2, r4)     // Catch: java.lang.Exception -> L26
            goto L2a
        L26:
            r4 = move-exception
            r4.printStackTrace()
        L2a:
            return
    }

    @Override
    public final void a(int r5, int r6, int r7, int r8) {
            r4 = this;
            super.a(r5, r6, r7, r8)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L47
            r0.<init>()     // Catch: java.lang.Exception -> L47
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L47
            r1.<init>()     // Catch: java.lang.Exception -> L47
            java.lang.String r2 = "landscape"
            r3 = 2
            if (r5 != r3) goto L16
            r5 = 1
            if (r6 != r5) goto L1b
            goto L19
        L16:
            if (r6 != r3) goto L19
            goto L1b
        L19:
            java.lang.String r2 = "portrait"
        L1b:
            java.lang.String r5 = "orientation"
            r1.put(r5, r2)     // Catch: java.lang.Exception -> L47
            java.lang.String r5 = "screen_width"
            r1.put(r5, r7)     // Catch: java.lang.Exception -> L47
            java.lang.String r5 = "screen_height"
            r1.put(r5, r8)     // Catch: java.lang.Exception -> L47
            java.lang.String r5 = "data"
            r0.put(r5, r1)     // Catch: java.lang.Exception -> L47
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L47
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L47
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r3)     // Catch: java.lang.Exception -> L47
            com.mbridge.msdk.mbjscommon.windvane.h r6 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L47
            android.webkit.WebView r7 = r4.a     // Catch: java.lang.Exception -> L47
            java.lang.String r8 = "showDataInfo"
            r6.a(r7, r8, r5)     // Catch: java.lang.Exception -> L47
            goto L4f
        L47:
            r5 = move-exception
            boolean r6 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r6 == 0) goto L4f
            r5.printStackTrace()
        L4f:
            return
    }

    @Override
    public final void a(int r3, java.lang.String r4) {
            r2 = this;
            super.a(r3, r4)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2b
            r0.<init>()     // Catch: java.lang.Exception -> L2b
            java.lang.String r1 = "type"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L2b
            java.lang.String r3 = "pt"
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L2b
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> L2b
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Exception -> L2b
            r4 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r4)     // Catch: java.lang.Exception -> L2b
            com.mbridge.msdk.mbjscommon.windvane.h r4 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L2b
            android.webkit.WebView r0 = r2.a     // Catch: java.lang.Exception -> L2b
            java.lang.String r1 = "onJSClick"
            r4.a(r0, r1, r3)     // Catch: java.lang.Exception -> L2b
            goto L2f
        L2b:
            r3 = move-exception
            r3.printStackTrace()
        L2f:
            return
    }

    @Override
    public final void a(com.mbridge.msdk.video.module.MBridgeVideoView.a r5) {
            r4 = this;
            super.a(r5)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L44
            r0.<init>()     // Catch: java.lang.Exception -> L44
            java.lang.String r1 = "progress"
            int r2 = r5.a     // Catch: java.lang.Exception -> L44
            int r3 = r5.b     // Catch: java.lang.Exception -> L44
            java.lang.String r2 = r4.a(r2, r3)     // Catch: java.lang.Exception -> L44
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L44
            java.lang.String r1 = "time"
            int r2 = r5.a     // Catch: java.lang.Exception -> L44
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L44
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L44
            java.lang.String r1 = "duration"
            int r5 = r5.b     // Catch: java.lang.Exception -> L44
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Exception -> L44
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L44
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L44
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L44
            r0 = 2
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r0)     // Catch: java.lang.Exception -> L44
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L44
            android.webkit.WebView r1 = r4.a     // Catch: java.lang.Exception -> L44
            java.lang.String r2 = "onVideoProgressNotify"
            r0.a(r1, r2, r5)     // Catch: java.lang.Exception -> L44
            goto L48
        L44:
            r5 = move-exception
            r5.printStackTrace()
        L48:
            return
    }

    @Override
    public final void a(java.lang.Object r4) {
            r3 = this;
            super.a(r4)
            if (r4 == 0) goto L17
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto L17
            java.lang.String r4 = r4.toString()
            byte[] r4 = r4.getBytes()
            r0 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r0)
            goto L19
        L17:
            java.lang.String r4 = ""
        L19:
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            android.webkit.WebView r1 = r3.a
            java.lang.String r2 = "webviewshow"
            r0.a(r1, r2, r4)
            return
    }
}
