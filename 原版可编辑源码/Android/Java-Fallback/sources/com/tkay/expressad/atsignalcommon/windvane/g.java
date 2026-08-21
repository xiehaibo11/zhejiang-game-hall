package com.tkay.expressad.atsignalcommon.windvane;

public final class g implements com.tkay.expressad.atsignalcommon.windvane.b {
    private static com.tkay.expressad.atsignalcommon.windvane.g a;

    static {
            com.tkay.expressad.atsignalcommon.windvane.g r0 = new com.tkay.expressad.atsignalcommon.windvane.g
            r0.<init>()
            com.tkay.expressad.atsignalcommon.windvane.g.a = r0
            return
    }

    private g() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tkay.expressad.atsignalcommon.windvane.g a() {
            com.tkay.expressad.atsignalcommon.windvane.g r0 = com.tkay.expressad.atsignalcommon.windvane.g.a
            return r0
    }

    private static void a(android.webkit.WebView r3, java.lang.String r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L13
            java.lang.Object[] r5 = new java.lang.Object[r1]
            r5[r2] = r4
            java.lang.String r4 = "javascript:window.MvBridge.fireEvent('%s', '');"
            java.lang.String r4 = java.lang.String.format(r4, r5)
            goto L24
        L13:
            java.lang.String r5 = com.tkay.expressad.atsignalcommon.windvane.n.c(r5)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r0[r2] = r4
            r0[r1] = r5
            java.lang.String r4 = "javascript:window.MvBridge.fireEvent('%s','%s');"
            java.lang.String r4 = java.lang.String.format(r4, r0)
        L24:
            if (r3 == 0) goto L33
            r3.loadUrl(r4)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2f
            return
        L2a:
            r3 = move-exception
            r3.printStackTrace()
            goto L33
        L2f:
            r3 = move-exception
            r3.printStackTrace()
        L33:
            return
    }

    @Override
    public final void a(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = r5 instanceof com.tkay.expressad.atsignalcommon.windvane.a
            if (r0 == 0) goto L41
            com.tkay.expressad.atsignalcommon.windvane.a r5 = (com.tkay.expressad.atsignalcommon.windvane.a) r5
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L1b
            java.lang.Object[] r6 = new java.lang.Object[r1]
            java.lang.String r0 = r5.g
            r6[r2] = r0
            java.lang.String r0 = "javascript:window.OW.onSuccess(%s,'');"
            java.lang.String r6 = java.lang.String.format(r0, r6)
            goto L2e
        L1b:
            java.lang.String r6 = com.tkay.expressad.atsignalcommon.windvane.n.c(r6)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r3 = r5.g
            r0[r2] = r3
            r0[r1] = r6
            java.lang.String r6 = "javascript:window.OW.onSuccess(%s,'%s');"
            java.lang.String r6 = java.lang.String.format(r6, r0)
        L2e:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r5.a
            if (r0 == 0) goto L41
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r5.a     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3d
            r5.loadUrl(r6)     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3d
            return
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

    @Override
    public final void a(java.lang.Object r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            boolean r0 = r4 instanceof com.tkay.expressad.atsignalcommon.windvane.a
            if (r0 == 0) goto L3d
            com.tkay.expressad.atsignalcommon.windvane.a r4 = (com.tkay.expressad.atsignalcommon.windvane.a) r4
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L19
            java.lang.Object[] r6 = new java.lang.Object[r1]
            r6[r2] = r5
            java.lang.String r5 = "javascript:window.MvBridge.fireEvent('%s', '');"
            java.lang.String r5 = java.lang.String.format(r5, r6)
            goto L2a
        L19:
            java.lang.String r6 = com.tkay.expressad.atsignalcommon.windvane.n.c(r6)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r0[r2] = r5
            r0[r1] = r6
            java.lang.String r5 = "javascript:window.MvBridge.fireEvent('%s','%s');"
            java.lang.String r5 = java.lang.String.format(r5, r0)
        L2a:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r6 = r4.a
            if (r6 == 0) goto L3d
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r4.a     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L39
            r4.loadUrl(r5)     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L39
            return
        L34:
            r4 = move-exception
            r4.printStackTrace()
            goto L3d
        L39:
            r4 = move-exception
            r4.printStackTrace()
        L3d:
            return
    }

    @Override
    public final void b(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = r5 instanceof com.tkay.expressad.atsignalcommon.windvane.a
            if (r0 == 0) goto L40
            com.tkay.expressad.atsignalcommon.windvane.a r5 = (com.tkay.expressad.atsignalcommon.windvane.a) r5
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L1a
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r3 = r5.g
            r0[r1] = r3
            java.lang.String r3 = "javascript:window.MvBridge.onFailure(%s,'');"
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
            java.lang.String r6 = "javascript:window.MvBridge.onFailure(%s,'%s');"
            java.lang.String r6 = java.lang.String.format(r6, r0)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r5.a
            if (r0 == 0) goto L40
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r5.a     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L3c
            r5.loadUrl(r6)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L3c
            return
        L37:
            r5 = move-exception
            r5.printStackTrace()
            goto L40
        L3c:
            r5 = move-exception
            r5.printStackTrace()
        L40:
            return
    }
}
