package com.kwad.sdk.core.webview.b;

public class a {
    private static volatile com.kwad.sdk.core.webview.b.a ayy;
    private final java.util.List<java.lang.String> ayA;
    private final java.util.List<java.lang.String> ayB;
    private final com.kwad.sdk.core.NetworkMonitor.a ayC;
    private final java.util.List<com.kwad.sdk.h.a.b> ayz;
    private android.content.Context mContext;
    private volatile boolean mHasInit;
    private long mInitTime;







    private a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mHasInit = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.ayz = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.ayA = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.ayB = r0
            com.kwad.sdk.core.webview.b.a$2 r0 = new com.kwad.sdk.core.webview.b.a$2
            r0.<init>(r1)
            r1.ayC = r0
            return
    }

    public static com.kwad.sdk.core.webview.b.a Ee() {
            com.kwad.sdk.core.webview.b.a r0 = com.kwad.sdk.core.webview.b.a.ayy
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.sdk.core.webview.b.a> r0 = com.kwad.sdk.core.webview.b.a.class
            monitor-enter(r0)
            com.kwad.sdk.core.webview.b.a r1 = com.kwad.sdk.core.webview.b.a.ayy     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.sdk.core.webview.b.a r1 = new com.kwad.sdk.core.webview.b.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.core.webview.b.a.ayy = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.sdk.core.webview.b.a r0 = com.kwad.sdk.core.webview.b.a.ayy
            return r0
    }

    private java.util.List<com.kwad.sdk.h.a.b> Eh() {
            r6 = this;
            com.kwad.sdk.core.response.model.SdkConfigData r0 = com.kwad.sdk.core.config.d.zw()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.util.List<com.kwad.sdk.h.a.a> r0 = r0.h5PreloadConfigs
            if (r0 != 0) goto Ld
            return r1
        Ld:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.Iterator r0 = r0.iterator()
        L16:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L41
            java.lang.Object r2 = r0.next()
            com.kwad.sdk.h.a.a r2 = (com.kwad.sdk.h.a.a) r2
            java.util.List<com.kwad.sdk.h.a.b> r3 = r2.aCa
            java.util.Iterator r3 = r3.iterator()
        L28:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L16
            java.lang.Object r4 = r3.next()
            com.kwad.sdk.h.a.b r4 = (com.kwad.sdk.h.a.b) r4
            r6.a(r4, r2)
            boolean r5 = r4.isValid()
            if (r5 == 0) goto L28
            r1.add(r4)
            goto L28
        L41:
            return r1
    }

    private android.webkit.WebResourceResponse Y(java.lang.String r13, java.lang.String r14) {
            r12 = this;
            long r0 = java.lang.System.currentTimeMillis()
            com.kwad.sdk.core.webview.b.c.b$a r2 = new com.kwad.sdk.core.webview.b.c.b$a     // Catch: java.lang.Throwable -> L5f
            r2.<init>()     // Catch: java.lang.Throwable -> L5f
            java.util.List<java.lang.String> r3 = r12.ayA     // Catch: java.lang.Throwable -> L5f
            r3.add(r13)     // Catch: java.lang.Throwable -> L5f
            r3 = 0
            android.webkit.WebResourceResponse r3 = r12.a(r13, r14, r2, r3)     // Catch: java.lang.Throwable -> L5f
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L5f
            long r10 = r4 - r0
            java.lang.String r4 = "HybridPackageManager"
            if (r3 == 0) goto L3f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f
            java.lang.String r5 = "load success time:"
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L5f
            r2.append(r10)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r5 = "--url:"
            r2.append(r5)     // Catch: java.lang.Throwable -> L5f
            r2.append(r14)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L5f
            com.kwad.sdk.core.e.c.d(r4, r2)     // Catch: java.lang.Throwable -> L5f
            r8 = 1
            java.lang.String r9 = ""
        L39:
            r6 = r14
            r7 = r13
            com.kwad.sdk.core.webview.b.c.b.a(r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L5f
            goto L5e
        L3f:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f
            java.lang.String r6 = "load fail errorMsg:"
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r6 = r2.msg     // Catch: java.lang.Throwable -> L5f
            r5.append(r6)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r6 = "-url:"
            r5.append(r6)     // Catch: java.lang.Throwable -> L5f
            r5.append(r14)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L5f
            com.kwad.sdk.core.e.c.d(r4, r5)     // Catch: java.lang.Throwable -> L5f
            r8 = 2
            java.lang.String r9 = r2.msg     // Catch: java.lang.Throwable -> L5f
            goto L39
        L5e:
            return r3
        L5f:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            long r3 = java.lang.System.currentTimeMillis()
            long r9 = r3 - r0
            r7 = 2
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "HybridWebViewClient中 Exception "
            r0.<init>(r1)
            java.lang.String r1 = android.util.Log.getStackTraceString(r2)
            r0.append(r1)
            java.lang.String r8 = r0.toString()
            r5 = r14
            r6 = r13
            com.kwad.sdk.core.webview.b.c.b.a(r5, r6, r7, r8, r9)
            r13 = 0
            return r13
    }

    static long a(com.kwad.sdk.core.webview.b.a r0, long r1) {
            r0.mInitTime = r1
            return r1
    }

    static android.content.Context a(com.kwad.sdk.core.webview.b.a r0) {
            android.content.Context r0 = r0.mContext
            return r0
    }

    private android.webkit.WebResourceResponse a(java.lang.String r2, java.lang.String r3, com.kwad.sdk.core.webview.b.c.b.a r4, boolean r5) {
            r1 = this;
            com.kwad.sdk.h.a.b r0 = r1.ea(r2)
            if (r0 != 0) goto L28
            com.kwad.sdk.h.a.b r2 = r1.dZ(r2)
            if (r2 != 0) goto L11
            java.lang.String r2 = "配置文件没有下发该zip资源"
            r4.msg = r2
            goto L26
        L11:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r5 = "资源未下载:"
            r3.<init>(r5)
            int r5 = r2.loadType
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            r4.msg = r3
            r1.b(r2)
        L26:
            r2 = 0
            return r2
        L28:
            android.content.Context r2 = r1.mContext
            android.webkit.WebResourceResponse r2 = com.kwad.sdk.core.webview.b.b.a(r2, r3, r0, r4, r5)
            return r2
    }

    static void a(com.kwad.sdk.core.webview.b.a r0, android.content.Context r1) {
            r0.bp(r1)
            return
    }

    static void a(com.kwad.sdk.core.webview.b.a r0, com.kwad.sdk.h.a.b r1) {
            r0.a(r1)
            return
    }

    static void a(com.kwad.sdk.core.webview.b.a r0, java.util.List r1) {
            r0.z(r1)
            return
    }

    private void a(com.kwad.sdk.h.a.b r3) {
            r2 = this;
            java.util.List<java.lang.String> r0 = r2.ayB
            java.lang.String r1 = r3.aCb
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L1b
            java.lang.String r0 = r3.packageUrl
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L13
            goto L1b
        L13:
            com.kwad.sdk.core.webview.b.a$4 r0 = new com.kwad.sdk.core.webview.b.a$4
            r0.<init>(r2)
            com.kwad.sdk.core.webview.b.b.a.a(r3, r0)
        L1b:
            return
    }

    private void a(com.kwad.sdk.h.a.b r2, com.kwad.sdk.h.a.a r3) {
            r1 = this;
            java.lang.String r3 = r3.sceneId
            r2.aCb = r3
            java.lang.String r3 = r2.packageUrl
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L24
            java.lang.String r3 = r2.packageUrl
            java.lang.String r3 = com.kwad.sdk.core.webview.b.c.a.ee(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L24
            r2.aCc = r3
            android.content.Context r3 = r1.mContext
            java.lang.String r0 = r2.aCc
            java.lang.String r3 = com.kwad.sdk.core.webview.b.c.a.C(r3, r0)
            r2.aCd = r3
        L24:
            return
    }

    static com.kwad.sdk.core.NetworkMonitor.a b(com.kwad.sdk.core.webview.b.a r0) {
            com.kwad.sdk.core.NetworkMonitor$a r0 = r0.ayC
            return r0
    }

    static void b(com.kwad.sdk.core.webview.b.a r0, android.content.Context r1) {
            r0.bo(r1)
            return
    }

    private void b(com.kwad.sdk.h.a.b r2) {
            r1 = this;
            com.kwad.sdk.core.webview.b.a$5 r0 = new com.kwad.sdk.core.webview.b.a$5
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    private void bo(android.content.Context r5) {
            r4 = this;
            java.util.List<com.kwad.sdk.h.a.b> r0 = r4.ayz
            monitor-enter(r0)
            r1 = 0
            java.io.File r5 = com.kwad.sdk.core.webview.b.c.a.bs(r5)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            java.util.List<com.kwad.sdk.h.a.b> r2 = r4.ayz     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            org.json.JSONArray r2 = com.kwad.sdk.utils.t.I(r2)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            byte[] r5 = r2.getBytes()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L25
            r3.write(r5)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L25
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)     // Catch: java.lang.Throwable -> L5c
            goto L33
        L22:
            r5 = move-exception
            r1 = r3
            goto L58
        L25:
            r1 = r3
            goto L29
        L27:
            r5 = move-exception
            goto L58
        L29:
            java.lang.String r5 = "updatePackageIndexFile"
            java.lang.String r2 = "read packageIndex file error"
            com.kwad.sdk.core.e.c.e(r5, r2)     // Catch: java.lang.Throwable -> L27
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)     // Catch: java.lang.Throwable -> L5c
        L33:
            java.util.List<java.lang.String> r5 = r4.ayA     // Catch: java.lang.Throwable -> L5c
            r5.clear()     // Catch: java.lang.Throwable -> L5c
            java.util.List<com.kwad.sdk.h.a.b> r5 = r4.ayz     // Catch: java.lang.Throwable -> L5c
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L5c
        L3e:
            boolean r1 = r5.hasNext()     // Catch: java.lang.Throwable -> L5c
            if (r1 == 0) goto L56
            java.lang.Object r1 = r5.next()     // Catch: java.lang.Throwable -> L5c
            com.kwad.sdk.h.a.b r1 = (com.kwad.sdk.h.a.b) r1     // Catch: java.lang.Throwable -> L5c
            boolean r2 = r1.aCf     // Catch: java.lang.Throwable -> L5c
            if (r2 == 0) goto L3e
            java.util.List<java.lang.String> r2 = r4.ayA     // Catch: java.lang.Throwable -> L5c
            java.lang.String r1 = r1.aCb     // Catch: java.lang.Throwable -> L5c
            r2.add(r1)     // Catch: java.lang.Throwable -> L5c
            goto L3e
        L56:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5c
            return
        L58:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)     // Catch: java.lang.Throwable -> L5c
            throw r5     // Catch: java.lang.Throwable -> L5c
        L5c:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5c
            throw r5
    }

    private void bp(android.content.Context r5) {
            r4 = this;
            java.util.List<com.kwad.sdk.h.a.b> r0 = r4.ayz
            monitor-enter(r0)
            r1 = 0
            java.io.File r5 = com.kwad.sdk.core.webview.b.c.a.bs(r5)     // Catch: java.lang.Throwable -> L2f java.lang.Exception -> L31
            boolean r2 = com.kwad.sdk.utils.q.L(r5)     // Catch: java.lang.Throwable -> L2f java.lang.Exception -> L31
            if (r2 == 0) goto L29
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L2f java.lang.Exception -> L31
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L2f java.lang.Exception -> L31
            java.io.InputStreamReader r5 = new java.io.InputStreamReader     // Catch: java.lang.Exception -> L27 java.lang.Throwable -> L7d
            r5.<init>(r2)     // Catch: java.lang.Exception -> L27 java.lang.Throwable -> L7d
            java.lang.String r5 = com.kwad.sdk.crash.utils.h.b(r5)     // Catch: java.lang.Exception -> L27 java.lang.Throwable -> L7d
            com.kwad.sdk.core.webview.b.a$6 r3 = new com.kwad.sdk.core.webview.b.a$6     // Catch: java.lang.Exception -> L27 java.lang.Throwable -> L7d
            r3.<init>(r4)     // Catch: java.lang.Exception -> L27 java.lang.Throwable -> L7d
            java.util.List r5 = com.kwad.sdk.utils.t.a(r5, r3)     // Catch: java.lang.Exception -> L27 java.lang.Throwable -> L7d
            r1 = r2
            goto L2a
        L27:
            r5 = move-exception
            goto L33
        L29:
            r5 = r1
        L2a:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)     // Catch: java.lang.Throwable -> L83
            r1 = r5
            goto L39
        L2f:
            r5 = move-exception
            goto L7f
        L31:
            r5 = move-exception
            r2 = r1
        L33:
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L7d
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)     // Catch: java.lang.Throwable -> L83
        L39:
            if (r1 == 0) goto L45
            java.util.List<com.kwad.sdk.h.a.b> r5 = r4.ayz     // Catch: java.lang.Throwable -> L83
            r5.clear()     // Catch: java.lang.Throwable -> L83
            java.util.List<com.kwad.sdk.h.a.b> r5 = r4.ayz     // Catch: java.lang.Throwable -> L83
            r5.addAll(r1)     // Catch: java.lang.Throwable -> L83
        L45:
            java.util.List<java.lang.String> r5 = r4.ayA     // Catch: java.lang.Throwable -> L83
            r5.clear()     // Catch: java.lang.Throwable -> L83
            java.util.List<com.kwad.sdk.h.a.b> r5 = r4.ayz     // Catch: java.lang.Throwable -> L83
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L83
        L50:
            boolean r1 = r5.hasNext()     // Catch: java.lang.Throwable -> L83
            if (r1 == 0) goto L7b
            java.lang.Object r1 = r5.next()     // Catch: java.lang.Throwable -> L83
            com.kwad.sdk.h.a.b r1 = (com.kwad.sdk.h.a.b) r1     // Catch: java.lang.Throwable -> L83
            android.content.Context r2 = r4.mContext     // Catch: java.lang.Throwable -> L83
            java.lang.String r3 = r1.aCc     // Catch: java.lang.Throwable -> L83
            java.lang.String r2 = com.kwad.sdk.core.webview.b.c.a.E(r2, r3)     // Catch: java.lang.Throwable -> L83
            boolean r2 = com.kwad.sdk.utils.q.fr(r2)     // Catch: java.lang.Throwable -> L83
            if (r2 != 0) goto L6f
            java.util.List<com.kwad.sdk.h.a.b> r2 = r4.ayz     // Catch: java.lang.Throwable -> L83
            r2.remove(r1)     // Catch: java.lang.Throwable -> L83
        L6f:
            boolean r2 = r1.aCf     // Catch: java.lang.Throwable -> L83
            if (r2 == 0) goto L50
            java.util.List<java.lang.String> r2 = r4.ayA     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = r1.aCb     // Catch: java.lang.Throwable -> L83
            r2.add(r1)     // Catch: java.lang.Throwable -> L83
            goto L50
        L7b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L83
            return
        L7d:
            r5 = move-exception
            r1 = r2
        L7f:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)     // Catch: java.lang.Throwable -> L83
            throw r5     // Catch: java.lang.Throwable -> L83
        L83:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L83
            throw r5
    }

    static java.util.List c(com.kwad.sdk.core.webview.b.a r0) {
            java.util.List r0 = r0.Eh()
            return r0
    }

    static java.util.List d(com.kwad.sdk.core.webview.b.a r0) {
            java.util.List<java.lang.String> r0 = r0.ayB
            return r0
    }

    private android.webkit.WebResourceResponse dY(java.lang.String r7) {
            r6 = this;
            r0 = 0
            com.kwad.sdk.core.webview.b.c.b$a r1 = new com.kwad.sdk.core.webview.b.c.b$a     // Catch: java.lang.Throwable -> L29
            r1.<init>()     // Catch: java.lang.Throwable -> L29
            java.util.List<com.kwad.sdk.h.a.b> r2 = r6.ayz     // Catch: java.lang.Throwable -> L29
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L29
            java.util.List<java.lang.String> r3 = r6.ayA     // Catch: java.lang.Throwable -> L26
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L26
        Lf:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L26
            if (r4 == 0) goto L24
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L26
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L26
            r5 = 1
            android.webkit.WebResourceResponse r4 = r6.a(r4, r7, r1, r5)     // Catch: java.lang.Throwable -> L26
            if (r4 == 0) goto Lf
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L26
            return r4
        L24:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L26
            return r0
        L26:
            r7 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L26
            throw r7     // Catch: java.lang.Throwable -> L29
        L29:
            r7 = move-exception
            r7.printStackTrace()
            return r0
    }

    private com.kwad.sdk.h.a.b dZ(java.lang.String r5) {
            r4 = this;
            java.util.List r0 = r4.Eh()
            r1 = 0
            if (r0 == 0) goto L27
            boolean r2 = r0.isEmpty()
            if (r2 == 0) goto Le
            goto L27
        Le:
            java.util.Iterator r0 = r0.iterator()
        L12:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L27
            java.lang.Object r2 = r0.next()
            com.kwad.sdk.h.a.b r2 = (com.kwad.sdk.h.a.b) r2
            java.lang.String r3 = r2.aCb
            boolean r3 = com.kwad.sdk.utils.bc.isEquals(r5, r3)
            if (r3 == 0) goto L12
            return r2
        L27:
            return r1
    }

    static java.util.List e(com.kwad.sdk.core.webview.b.a r0) {
            java.util.List<com.kwad.sdk.h.a.b> r0 = r0.ayz
            return r0
    }

    private com.kwad.sdk.h.a.b ea(java.lang.String r6) {
            r5 = this;
            java.util.List<com.kwad.sdk.h.a.b> r0 = r5.ayz
            monitor-enter(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L33
            r2 = 0
            if (r1 != 0) goto L31
            java.util.List<com.kwad.sdk.h.a.b> r1 = r5.ayz     // Catch: java.lang.Throwable -> L33
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L33
            if (r1 > 0) goto L13
            goto L31
        L13:
            java.util.List<com.kwad.sdk.h.a.b> r1 = r5.ayz     // Catch: java.lang.Throwable -> L33
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L33
        L19:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Throwable -> L33
            if (r3 == 0) goto L2f
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Throwable -> L33
            com.kwad.sdk.h.a.b r3 = (com.kwad.sdk.h.a.b) r3     // Catch: java.lang.Throwable -> L33
            java.lang.String r4 = r3.aCb     // Catch: java.lang.Throwable -> L33
            boolean r4 = android.text.TextUtils.equals(r6, r4)     // Catch: java.lang.Throwable -> L33
            if (r4 == 0) goto L19
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
            return r3
        L2f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
            return r2
        L31:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
            return r2
        L33:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
            throw r6
    }

    private void z(java.util.List<com.kwad.sdk.h.a.b> r6) {
            r5 = this;
            java.util.List<com.kwad.sdk.h.a.b> r0 = r5.ayz
            monitor-enter(r0)
            android.content.Context r1 = r5.mContext     // Catch: java.lang.Throwable -> L49
            r5.bp(r1)     // Catch: java.lang.Throwable -> L49
            java.util.List<com.kwad.sdk.h.a.b> r1 = r5.ayz     // Catch: java.lang.Throwable -> L49
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L49
        Le:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L49
            if (r2 == 0) goto L42
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L49
            com.kwad.sdk.h.a.b r2 = (com.kwad.sdk.h.a.b) r2     // Catch: java.lang.Throwable -> L49
            boolean r3 = r6.contains(r2)     // Catch: java.lang.Throwable -> L49
            if (r3 == 0) goto L32
            android.content.Context r3 = r5.mContext     // Catch: java.lang.Throwable -> L49
            java.lang.String r4 = r2.aCc     // Catch: java.lang.Throwable -> L49
            java.lang.String r3 = com.kwad.sdk.core.webview.b.c.a.E(r3, r4)     // Catch: java.lang.Throwable -> L49
            boolean r3 = com.kwad.sdk.utils.q.fr(r3)     // Catch: java.lang.Throwable -> L49
            if (r3 == 0) goto Le
            r6.remove(r2)     // Catch: java.lang.Throwable -> L49
            goto Le
        L32:
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L49
            java.lang.String r4 = r2.aCd     // Catch: java.lang.Throwable -> L49
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L49
            com.kwad.sdk.utils.q.aa(r3)     // Catch: java.lang.Throwable -> L49
            java.util.List<com.kwad.sdk.h.a.b> r3 = r5.ayz     // Catch: java.lang.Throwable -> L49
            r3.remove(r2)     // Catch: java.lang.Throwable -> L49
            goto Le
        L42:
            android.content.Context r6 = r5.mContext     // Catch: java.lang.Throwable -> L49
            r5.bo(r6)     // Catch: java.lang.Throwable -> L49
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L49
            return
        L49:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L49
            throw r6
    }

    public final long Ef() {
            r2 = this;
            long r0 = r2.mInitTime
            return r0
    }

    public final void Eg() {
            r1 = this;
            boolean r0 = com.kwad.sdk.core.config.d.zF()
            if (r0 != 0) goto L7
            return
        L7:
            com.kwad.sdk.core.webview.b.a$3 r0 = new com.kwad.sdk.core.webview.b.a$3
            r0.<init>(r1)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    public final android.webkit.WebResourceResponse X(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r2.mHasInit
            if (r0 != 0) goto L6
            r3 = 0
            return r3
        L6:
            java.lang.String r0 = com.kwad.sdk.core.webview.b.c.a.ed(r3)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L1b
            com.kwad.sdk.core.webview.b.c.b.b(r4, r0, r3)
            android.webkit.WebResourceResponse r1 = r2.Y(r0, r3)
            com.kwad.sdk.core.webview.b.c.b.c(r4, r0, r3)
            return r1
        L1b:
            android.webkit.WebResourceResponse r3 = r2.dY(r3)
            return r3
    }

    public final synchronized void init(android.content.Context r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.mHasInit     // Catch: java.lang.Throwable -> L1d
            if (r0 != 0) goto L1b
            if (r2 != 0) goto L8
            goto L1b
        L8:
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.HD()     // Catch: java.lang.Throwable -> L1d
            r1.mContext = r0     // Catch: java.lang.Throwable -> L1d
            r0 = 1
            r1.mHasInit = r0     // Catch: java.lang.Throwable -> L1d
            com.kwad.sdk.core.webview.b.a$1 r0 = new com.kwad.sdk.core.webview.b.a$1     // Catch: java.lang.Throwable -> L1d
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L1d
            com.kwad.sdk.utils.g.execute(r0)     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r1)
            return
        L1b:
            monitor-exit(r1)
            return
        L1d:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
