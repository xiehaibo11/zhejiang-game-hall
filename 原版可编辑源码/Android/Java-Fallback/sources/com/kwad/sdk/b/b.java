package com.kwad.sdk.b;

public final class b {
    private static final java.util.Map<java.lang.String, java.lang.String> ajA = null;
    private final java.util.concurrent.atomic.AtomicBoolean ajB;
    private final java.util.concurrent.atomic.AtomicBoolean ajC;
    private final android.content.BroadcastReceiver ajD;
    private final java.util.List<com.kwad.sdk.b.a> mListeners;


    static class a {
        private static final com.kwad.sdk.b.b ajF = null;

        static {
                com.kwad.sdk.b.b r0 = new com.kwad.sdk.b.b
                r1 = 0
                r0.<init>(r1)
                com.kwad.sdk.b.b.a.ajF = r0
                return
        }

        static com.kwad.sdk.b.b yC() {
                com.kwad.sdk.b.b r0 = com.kwad.sdk.b.b.a.ajF
                return r0
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.sdk.b.b.ajA = r0
            return
    }

    private b() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>()
            r1.ajB = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>()
            r1.ajC = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.mListeners = r0
            com.kwad.sdk.b.b$1 r0 = new com.kwad.sdk.b.b$1
            r0.<init>(r1)
            r1.ajD = r0
            return
    }

    b(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.kwad.sdk.b.b r0, android.content.Context r1, java.lang.String r2) {
            r0.w(r1, r2)
            return
    }

    static void a(com.kwad.sdk.b.b r0, java.lang.String r1) {
            r0.ce(r1)
            return
    }

    private synchronized void aF(android.content.Context r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.ajB     // Catch: java.lang.Throwable -> L22
            boolean r0 = r0.get()     // Catch: java.lang.Throwable -> L22
            if (r0 == 0) goto Lb
            monitor-exit(r1)
            return
        Lb:
            java.lang.String r0 = "com.smile.gifmaker"
            y(r2, r0)     // Catch: java.lang.Throwable -> L22
            java.lang.String r0 = "com.kuaishou.nebula"
            y(r2, r0)     // Catch: java.lang.Throwable -> L22
            java.lang.String r0 = "com.tencent.mm"
            y(r2, r0)     // Catch: java.lang.Throwable -> L22
            java.util.concurrent.atomic.AtomicBoolean r2 = r1.ajB     // Catch: java.lang.Throwable -> L22
            r0 = 1
            r2.set(r0)     // Catch: java.lang.Throwable -> L22
            monitor-exit(r1)
            return
        L22:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    private void ce(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "unInstallApp packageName: "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AppInstallManager"
            com.kwad.sdk.core.e.c.d(r1, r0)
            ci(r3)
            cf(r3)
            r2.ch(r3)
            return
    }

    private static void cf(java.lang.String r2) {
            com.kwad.sdk.utils.InstalledAppInfoManager$AppPackageInfo r0 = new com.kwad.sdk.utils.InstalledAppInfoManager$AppPackageInfo     // Catch: java.lang.Throwable -> L18
            r0.<init>()     // Catch: java.lang.Throwable -> L18
            r0.packageName = r2     // Catch: java.lang.Throwable -> L18
            org.json.JSONObject r2 = com.kwad.sdk.utils.InstalledAppInfoManager.a(r0)     // Catch: java.lang.Throwable -> L18
            java.lang.Class<com.kwad.sdk.service.a.b> r0 = com.kwad.sdk.service.a.b.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)     // Catch: java.lang.Throwable -> L18
            com.kwad.sdk.service.a.b r0 = (com.kwad.sdk.service.a.b) r0     // Catch: java.lang.Throwable -> L18
            r1 = 2
            r0.e(r2, r1)     // Catch: java.lang.Throwable -> L18
            return
        L18:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
            return
    }

    private void cg(java.lang.String r3) {
            r2 = this;
            java.util.List<com.kwad.sdk.b.a> r0 = r2.mListeners
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.b.a r1 = (com.kwad.sdk.b.a) r1
            r1.S(r3)     // Catch: java.lang.Throwable -> L16
            goto L6
        L16:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
            goto L6
        L1b:
            return
    }

    private void ch(java.lang.String r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.b.a> r2 = r1.mListeners
            java.util.Iterator r2 = r2.iterator()
        L6:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L10
            r2.next()
            goto L6
        L10:
            return
    }

    private static void ci(java.lang.String r7) {
            int r0 = r7.hashCode()
            r1 = -973170826(0xffffffffc5fe9776, float:-8146.9326)
            java.lang.String r2 = "com.smile.gifmaker"
            java.lang.String r3 = "com.kuaishou.nebula"
            java.lang.String r4 = "com.tencent.mm"
            r5 = 2
            r6 = 1
            if (r0 == r1) goto L2c
            r1 = 473713875(0x1c3c4cd3, float:6.2303275E-22)
            if (r0 == r1) goto L24
            r1 = 1659293491(0x62e6cf33, float:2.1288407E21)
            if (r0 == r1) goto L1c
            goto L34
        L1c:
            boolean r7 = r7.equals(r2)
            if (r7 == 0) goto L34
            r7 = 0
            goto L35
        L24:
            boolean r7 = r7.equals(r3)
            if (r7 == 0) goto L34
            r7 = r6
            goto L35
        L2c:
            boolean r7 = r7.equals(r4)
            if (r7 == 0) goto L34
            r7 = r5
            goto L35
        L34:
            r7 = -1
        L35:
            java.lang.String r0 = ""
            if (r7 == 0) goto L4a
            if (r7 == r6) goto L44
            if (r7 == r5) goto L3e
            goto L43
        L3e:
            java.util.Map<java.lang.String, java.lang.String> r7 = com.kwad.sdk.b.b.ajA
            r7.put(r4, r0)
        L43:
            return
        L44:
            java.util.Map<java.lang.String, java.lang.String> r7 = com.kwad.sdk.b.b.ajA
            r7.put(r3, r0)
            return
        L4a:
            java.util.Map<java.lang.String, java.lang.String> r7 = com.kwad.sdk.b.b.ajA
            r7.put(r2, r0)
            return
    }

    private void w(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "installApp packageName: "
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AppInstallManager"
            com.kwad.sdk.core.e.c.d(r1, r0)
            y(r3, r4)
            x(r3, r4)
            r2.cg(r4)
            return
    }

    private static void x(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Throwable -> L20
            r0 = 0
            android.content.pm.PackageInfo r2 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Throwable -> L20
            if (r2 == 0) goto L1f
            com.kwad.sdk.utils.InstalledAppInfoManager$AppPackageInfo r1 = com.kwad.sdk.utils.InstalledAppInfoManager.a(r2, r1)     // Catch: java.lang.Throwable -> L20
            org.json.JSONObject r1 = com.kwad.sdk.utils.InstalledAppInfoManager.a(r1)     // Catch: java.lang.Throwable -> L20
            java.lang.Class<com.kwad.sdk.service.a.b> r2 = com.kwad.sdk.service.a.b.class
            java.lang.Object r2 = com.kwad.sdk.service.ServiceProvider.get(r2)     // Catch: java.lang.Throwable -> L20
            com.kwad.sdk.service.a.b r2 = (com.kwad.sdk.service.a.b) r2     // Catch: java.lang.Throwable -> L20
            r0 = 1
            r2.e(r1, r0)     // Catch: java.lang.Throwable -> L20
        L1f:
            return
        L20:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
            return
    }

    private static void y(android.content.Context r7, java.lang.String r8) {
            int r0 = r8.hashCode()
            r1 = -973170826(0xffffffffc5fe9776, float:-8146.9326)
            r2 = 2
            r3 = 1
            java.lang.String r4 = "com.smile.gifmaker"
            java.lang.String r5 = "com.kuaishou.nebula"
            java.lang.String r6 = "com.tencent.mm"
            if (r0 == r1) goto L2c
            r1 = 473713875(0x1c3c4cd3, float:6.2303275E-22)
            if (r0 == r1) goto L24
            r1 = 1659293491(0x62e6cf33, float:2.1288407E21)
            if (r0 == r1) goto L1c
            goto L34
        L1c:
            boolean r8 = r8.equals(r4)
            if (r8 == 0) goto L34
            r8 = 0
            goto L35
        L24:
            boolean r8 = r8.equals(r5)
            if (r8 == 0) goto L34
            r8 = r3
            goto L35
        L2c:
            boolean r8 = r8.equals(r6)
            if (r8 == 0) goto L34
            r8 = r2
            goto L35
        L34:
            r8 = -1
        L35:
            if (r8 == 0) goto L50
            if (r8 == r3) goto L46
            if (r8 == r2) goto L3c
            goto L45
        L3c:
            java.util.Map<java.lang.String, java.lang.String> r8 = com.kwad.sdk.b.b.ajA
            java.lang.String r7 = com.kwad.sdk.utils.k.J(r7, r6)
            r8.put(r6, r7)
        L45:
            return
        L46:
            java.util.Map<java.lang.String, java.lang.String> r8 = com.kwad.sdk.b.b.ajA
            java.lang.String r7 = com.kwad.sdk.utils.k.J(r7, r5)
            r8.put(r5, r7)
            return
        L50:
            java.util.Map<java.lang.String, java.lang.String> r8 = com.kwad.sdk.b.b.ajA
            java.lang.String r7 = com.kwad.sdk.utils.k.J(r7, r4)
            r8.put(r4, r7)
            return
    }

    public static com.kwad.sdk.b.b yB() {
            com.kwad.sdk.b.b r0 = com.kwad.sdk.b.b.a.yC()
            return r0
    }

    public final void a(com.kwad.sdk.b.a r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            r1.checkInit()
            java.util.List<com.kwad.sdk.b.a> r0 = r1.mListeners
            r0.add(r2)
            return
    }

    public final void b(com.kwad.sdk.b.a r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            r1.checkInit()
            java.util.List<com.kwad.sdk.b.a> r0 = r1.mListeners
            r0.remove(r2)
            return
    }

    public final synchronized void checkInit() {
            r3 = this;
            monitor-enter(r3)
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.ajC     // Catch: java.lang.Throwable -> L30
            boolean r0 = r0.get()     // Catch: java.lang.Throwable -> L30
            if (r0 == 0) goto Lb
            monitor-exit(r3)
            return
        Lb:
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L30
            r0.<init>()     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = "android.intent.action.PACKAGE_ADDED"
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = "android.intent.action.PACKAGE_REMOVED"
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = "package"
            r0.addDataScheme(r1)     // Catch: java.lang.Throwable -> L30
            android.content.Context r1 = com.kwad.sdk.service.ServiceProvider.HD()     // Catch: java.lang.Throwable -> L30
            android.content.BroadcastReceiver r2 = r3.ajD     // Catch: java.lang.Throwable -> L30
            r1.registerReceiver(r2, r0)     // Catch: java.lang.Throwable -> L30
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.ajC     // Catch: java.lang.Throwable -> L30
            r1 = 1
            r0.set(r1)     // Catch: java.lang.Throwable -> L30
            monitor-exit(r3)
            return
        L30:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)     // Catch: java.lang.Throwable -> L36
            monitor-exit(r3)
            return
        L36:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public final java.lang.String getVersion(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L9
            java.lang.String r2 = ""
            return r2
        L9:
            r1.aF(r2)
            java.util.Map<java.lang.String, java.lang.String> r2 = com.kwad.sdk.b.b.ajA
            java.lang.Object r2 = r2.get(r3)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }
}
