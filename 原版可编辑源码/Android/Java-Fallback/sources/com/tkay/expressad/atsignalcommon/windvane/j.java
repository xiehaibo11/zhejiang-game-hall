package com.tkay.expressad.atsignalcommon.windvane;

public final class j implements com.tkay.expressad.atsignalcommon.windvane.b {
    private static com.tkay.expressad.atsignalcommon.windvane.j a;

    static {
            com.tkay.expressad.atsignalcommon.windvane.j r0 = new com.tkay.expressad.atsignalcommon.windvane.j
            r0.<init>()
            com.tkay.expressad.atsignalcommon.windvane.j.a = r0
            return
    }

    private j() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.atsignalcommon.windvane.j a() {
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a
            return r0
    }

    public static void a(android.webkit.WebView r4) {
            java.lang.String r0 = ""
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L27
            r1.<init>()     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L27
            java.lang.String r2 = "api_version"
            java.lang.String r3 = "1.0.0"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L27
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L27
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L27
            r2 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r2)     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L27
            java.lang.String r2 = com.tkay.expressad.atsignalcommon.base.e.j     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L27
            a(r4, r2, r1)     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L27
            return
        L21:
            java.lang.String r1 = com.tkay.expressad.atsignalcommon.base.e.j
            a(r4, r1, r0)
            return
        L27:
            java.lang.String r1 = com.tkay.expressad.atsignalcommon.base.e.j
            a(r4, r1, r0)
            return
    }

    public static void a(android.webkit.WebView r3, java.lang.String r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L13
            java.lang.Object[] r5 = new java.lang.Object[r1]
            r5[r2] = r4
            java.lang.String r4 = "javascript:window.WindVane.fireEvent('%s', '');"
            java.lang.String r4 = java.lang.String.format(r4, r5)
            goto L24
        L13:
            java.lang.String r5 = com.tkay.expressad.atsignalcommon.windvane.n.c(r5)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r0[r2] = r4
            r0[r1] = r5
            java.lang.String r4 = "javascript:window.WindVane.fireEvent('%s','%s');"
            java.lang.String r4 = java.lang.String.format(r4, r0)
        L24:
            if (r3 == 0) goto L41
            boolean r5 = r3 instanceof com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView
            if (r5 == 0) goto L34
            r5 = r3
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = (com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView) r5
            boolean r5 = r5.isDestroyed()
            if (r5 == 0) goto L34
            return
        L34:
            r3.loadUrl(r4)     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3d
            return
        L38:
            r3 = move-exception
            r3.printStackTrace()
            goto L41
        L3d:
            r3 = move-exception
            r3.printStackTrace()
        L41:
            return
    }

    public static void b(android.webkit.WebView r5) {
            java.lang.String r0 = ""
            java.lang.String r1 = "onJSBridgeConnected"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L25
            r2.<init>()     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L25
            java.lang.String r3 = "api_version"
            java.lang.String r4 = "1.0.0"
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L25
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L25
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L25
            r3 = 2
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L25
            a(r5, r1, r2)     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L25
            return
        L21:
            a(r5, r1, r0)
            return
        L25:
            a(r5, r1, r0)
            return
    }

    @Override
    public final void a(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = r5 instanceof com.tkay.expressad.atsignalcommon.windvane.a
            if (r0 == 0) goto L49
            com.tkay.expressad.atsignalcommon.windvane.a r5 = (com.tkay.expressad.atsignalcommon.windvane.a) r5
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
            java.lang.String r6 = com.tkay.expressad.atsignalcommon.windvane.n.c(r6)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r3 = r5.g
            r0[r2] = r3
            r0[r1] = r6
            java.lang.String r6 = "javascript:window.WindVane.onSuccess(%s,'%s');"
            java.lang.String r6 = java.lang.String.format(r6, r0)
        L2e:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r5.a
            if (r0 == 0) goto L49
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r5.a
            boolean r0 = r0.isDestroyed()
            if (r0 != 0) goto L49
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r5.a     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L45
            r5.loadUrl(r6)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L45
            return
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

    @Override
    public final void a(java.lang.Object r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            boolean r0 = r4 instanceof com.tkay.expressad.atsignalcommon.windvane.a
            if (r0 == 0) goto L45
            com.tkay.expressad.atsignalcommon.windvane.a r4 = (com.tkay.expressad.atsignalcommon.windvane.a) r4
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
            java.lang.String r6 = com.tkay.expressad.atsignalcommon.windvane.n.c(r6)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r0[r2] = r5
            r0[r1] = r6
            java.lang.String r5 = "javascript:window.WindVane.fireEvent('%s','%s');"
            java.lang.String r5 = java.lang.String.format(r5, r0)
        L2a:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r6 = r4.a
            if (r6 == 0) goto L45
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r6 = r4.a
            boolean r6 = r6.isDestroyed()
            if (r6 != 0) goto L45
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r4.a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            r4.loadUrl(r5)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            return
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

    @Override
    public final void b(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = r5 instanceof com.tkay.expressad.atsignalcommon.windvane.a
            if (r0 == 0) goto L48
            com.tkay.expressad.atsignalcommon.windvane.a r5 = (com.tkay.expressad.atsignalcommon.windvane.a) r5
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
            java.lang.String r6 = com.tkay.expressad.atsignalcommon.windvane.n.c(r6)
        L1e:
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r3 = r5.g
            r0[r1] = r3
            r0[r2] = r6
            java.lang.String r6 = "javascript:window.WindVane.onFailure(%s,'%s');"
            java.lang.String r6 = java.lang.String.format(r6, r0)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r5.a
            if (r0 == 0) goto L48
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r5.a
            boolean r0 = r0.isDestroyed()
            if (r0 != 0) goto L48
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r5.a     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L44
            r5.loadUrl(r6)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L44
            return
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
