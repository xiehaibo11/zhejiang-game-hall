package com.mbridge.msdk.mbjscommon.windvane;

public final class h {
    private static com.mbridge.msdk.mbjscommon.windvane.h a;

    static {
            com.mbridge.msdk.mbjscommon.windvane.h r0 = new com.mbridge.msdk.mbjscommon.windvane.h
            r0.<init>()
            com.mbridge.msdk.mbjscommon.windvane.h.a = r0
            return
    }

    private h() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.mbjscommon.windvane.h a() {
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a
            return r0
    }

    public final void a(android.webkit.WebView r6) {
            r5 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = "onJSBridgeConnected"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L29
            r2.<init>()     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L29
            java.lang.String r3 = "api_version"
            java.lang.String r4 = "1.0.0"
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L29
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L29
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L29
            r3 = 2
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L29
            com.mbridge.msdk.mbjscommon.windvane.h r3 = com.mbridge.msdk.mbjscommon.windvane.h.a     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L29
            r3.a(r6, r1, r2)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L29
            goto L2e
        L23:
            com.mbridge.msdk.mbjscommon.windvane.h r2 = com.mbridge.msdk.mbjscommon.windvane.h.a
            r2.a(r6, r1, r0)
            goto L2e
        L29:
            com.mbridge.msdk.mbjscommon.windvane.h r2 = com.mbridge.msdk.mbjscommon.windvane.h.a
            r2.a(r6, r1, r0)
        L2e:
            return
    }

    public final void a(android.webkit.WebView r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L13
            java.lang.Object[] r6 = new java.lang.Object[r1]
            r6[r2] = r5
            java.lang.String r5 = "javascript:window.WindVane.fireEvent('%s', '');"
            java.lang.String r5 = java.lang.String.format(r5, r6)
            goto L24
        L13:
            java.lang.String r6 = com.mbridge.msdk.mbjscommon.windvane.k.c(r6)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r0[r2] = r5
            r0[r1] = r6
            java.lang.String r5 = "javascript:window.WindVane.fireEvent('%s','%s');"
            java.lang.String r5 = java.lang.String.format(r5, r0)
        L24:
            if (r4 == 0) goto L41
            boolean r6 = r4 instanceof com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView
            if (r6 == 0) goto L34
            r6 = r4
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = (com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView) r6
            boolean r6 = r6.isDestoryed()
            if (r6 == 0) goto L34
            return
        L34:
            r4.loadUrl(r5)     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3d
            goto L41
        L38:
            r4 = move-exception
            r4.printStackTrace()
            goto L41
        L3d:
            r4 = move-exception
            r4.printStackTrace()
        L41:
            return
    }

    public final void a(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = r5 instanceof com.mbridge.msdk.mbjscommon.windvane.a
            if (r0 == 0) goto L49
            com.mbridge.msdk.mbjscommon.windvane.a r5 = (com.mbridge.msdk.mbjscommon.windvane.a) r5
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L1b
            java.lang.Object[] r6 = new java.lang.Object[r1]
            java.lang.String r0 = r5.g
            r6[r2] = r0
            java.lang.String r0 = "javascript:window.WindVane.onSuccess(%s,'');"
            java.lang.String r6 = java.lang.String.format(r0, r6)
            goto L2e
        L1b:
            java.lang.String r6 = com.mbridge.msdk.mbjscommon.windvane.k.c(r6)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r3 = r5.g
            r0[r2] = r3
            r0[r1] = r6
            java.lang.String r6 = "javascript:window.WindVane.onSuccess(%s,'%s');"
            java.lang.String r6 = java.lang.String.format(r6, r0)
        L2e:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r5.a
            if (r0 == 0) goto L49
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r5.a
            boolean r0 = r0.isDestoryed()
            if (r0 != 0) goto L49
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r5.a     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L45
            r5.loadUrl(r6)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L45
            goto L49
        L40:
            r5 = move-exception
            r5.printStackTrace()
            goto L49
        L45:
            r5 = move-exception
            r5.printStackTrace()
        L49:
            return
    }

    public final void a(java.lang.Object r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            boolean r0 = r4 instanceof com.mbridge.msdk.mbjscommon.windvane.a
            if (r0 == 0) goto L45
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L19
            java.lang.Object[] r6 = new java.lang.Object[r1]
            r6[r2] = r5
            java.lang.String r5 = "javascript:window.WindVane.fireEvent('%s', '');"
            java.lang.String r5 = java.lang.String.format(r5, r6)
            goto L2a
        L19:
            java.lang.String r6 = com.mbridge.msdk.mbjscommon.windvane.k.c(r6)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r0[r2] = r5
            r0[r1] = r6
            java.lang.String r5 = "javascript:window.WindVane.fireEvent('%s','%s');"
            java.lang.String r5 = java.lang.String.format(r5, r0)
        L2a:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r4.a
            if (r6 == 0) goto L45
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r4.a
            boolean r6 = r6.isDestoryed()
            if (r6 != 0) goto L45
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            r4.loadUrl(r5)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            goto L45
        L3c:
            r4 = move-exception
            r4.printStackTrace()
            goto L45
        L41:
            r4 = move-exception
            r4.printStackTrace()
        L45:
            return
    }

    public final void b(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = r5 instanceof com.mbridge.msdk.mbjscommon.windvane.a
            if (r0 == 0) goto L48
            com.mbridge.msdk.mbjscommon.windvane.a r5 = (com.mbridge.msdk.mbjscommon.windvane.a) r5
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L1a
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r3 = r5.g
            r0[r1] = r3
            java.lang.String r3 = "javascript:window.WindVane.onFailure(%s,'');"
            java.lang.String.format(r3, r0)
            goto L1e
        L1a:
            java.lang.String r6 = com.mbridge.msdk.mbjscommon.windvane.k.c(r6)
        L1e:
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r3 = r5.g
            r0[r1] = r3
            r0[r2] = r6
            java.lang.String r6 = "javascript:window.WindVane.onFailure(%s,'%s');"
            java.lang.String r6 = java.lang.String.format(r6, r0)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r5.a
            if (r0 == 0) goto L48
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r5.a
            boolean r0 = r0.isDestoryed()
            if (r0 != 0) goto L48
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r5.a     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L44
            r5.loadUrl(r6)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L44
            goto L48
        L3f:
            r5 = move-exception
            r5.printStackTrace()
            goto L48
        L44:
            r5 = move-exception
            r5.printStackTrace()
        L48:
            return
    }
}
