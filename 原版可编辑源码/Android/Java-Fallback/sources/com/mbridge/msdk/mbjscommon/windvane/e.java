package com.mbridge.msdk.mbjscommon.windvane;

public final class e {
    private static com.mbridge.msdk.mbjscommon.windvane.e a;

    static {
            com.mbridge.msdk.mbjscommon.windvane.e r0 = new com.mbridge.msdk.mbjscommon.windvane.e
            r0.<init>()
            com.mbridge.msdk.mbjscommon.windvane.e.a = r0
            return
    }

    private e() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.mbjscommon.windvane.e a() {
            com.mbridge.msdk.mbjscommon.windvane.e r0 = com.mbridge.msdk.mbjscommon.windvane.e.a
            return r0
    }

    public final void a(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = r5 instanceof com.mbridge.msdk.mbjscommon.windvane.a
            if (r0 == 0) goto L41
            com.mbridge.msdk.mbjscommon.windvane.a r5 = (com.mbridge.msdk.mbjscommon.windvane.a) r5
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L1b
            java.lang.Object[] r6 = new java.lang.Object[r1]
            java.lang.String r0 = r5.g
            r6[r2] = r0
            java.lang.String r0 = "javascript:window.OfferWall.onSuccess(%s,'');"
            java.lang.String r6 = java.lang.String.format(r0, r6)
            goto L2e
        L1b:
            java.lang.String r6 = com.mbridge.msdk.mbjscommon.windvane.k.c(r6)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r3 = r5.g
            r0[r2] = r3
            r0[r1] = r6
            java.lang.String r6 = "javascript:window.OfferWall.onSuccess(%s,'%s');"
            java.lang.String r6 = java.lang.String.format(r6, r0)
        L2e:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r5.a
            if (r0 == 0) goto L41
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r5.a     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3d
            r5.loadUrl(r6)     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3d
            goto L41
        L38:
            r5 = move-exception
            r5.printStackTrace()
            goto L41
        L3d:
            r5 = move-exception
            r5.printStackTrace()
        L41:
            return
    }
}
