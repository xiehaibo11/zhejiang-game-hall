package com.mbridge.msdk.system;

public final class a implements com.mbridge.msdk.MBridgeSDK {
    public static java.util.Map<java.lang.String, java.lang.String> a;
    public boolean b;
    private volatile com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS c;
    private volatile android.content.Context d;
    private boolean e;
    private android.content.BroadcastReceiver f;
    private boolean g;
    private android.content.BroadcastReceiver h;
    private com.mbridge.msdk.out.SDKInitStatusListener i;
    private boolean j;
    private boolean k;
    private final android.app.Application.ActivityLifecycleCallbacks l;







    public a() {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS r0 = com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS.INITIAL
            r2.c = r0
            r0 = 1
            r2.b = r0
            r0 = 0
            r2.e = r0
            r1 = 0
            r2.f = r1
            r2.g = r0
            r2.h = r1
            r2.j = r0
            r2.k = r0
            com.mbridge.msdk.system.a$1 r0 = new com.mbridge.msdk.system.a$1
            r0.<init>(r2)
            r2.l = r0
            return
    }

    static android.content.Context a(com.mbridge.msdk.system.a r0) {
            android.content.Context r0 = r0.d
            return r0
    }

    private void a() {
            r7 = this;
            java.lang.String r0 = "com.mbridge.msdk"
            r1 = 0
            r7.j = r1
            r2 = 1
            com.mbridge.msdk.foundation.controller.b r3 = com.mbridge.msdk.foundation.controller.b.a()     // Catch: java.lang.Exception -> L104
            java.util.Map<java.lang.String, java.lang.String> r4 = com.mbridge.msdk.system.a.a     // Catch: java.lang.Exception -> L104
            android.content.Context r5 = r7.d     // Catch: java.lang.Exception -> L104
            r3.a(r4, r5)     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS r3 = com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS.COMPLETED     // Catch: java.lang.Exception -> L104
            r7.c = r3     // Catch: java.lang.Exception -> L104
            java.lang.Thread r3 = new java.lang.Thread     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.system.a$2 r4 = new com.mbridge.msdk.system.a$2     // Catch: java.lang.Exception -> L104
            r4.<init>(r7)     // Catch: java.lang.Exception -> L104
            r3.<init>(r4)     // Catch: java.lang.Exception -> L104
            r3.start()     // Catch: java.lang.Exception -> L104
            java.lang.Thread r3 = new java.lang.Thread     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.system.a$3 r4 = new com.mbridge.msdk.system.a$3     // Catch: java.lang.Exception -> L104
            r4.<init>(r7)     // Catch: java.lang.Exception -> L104
            r3.<init>(r4)     // Catch: java.lang.Exception -> L104
            r3.start()     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.foundation.same.net.f.d r3 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L104
            r3.c()     // Catch: java.lang.Exception -> L104
            android.os.HandlerThread r3 = new android.os.HandlerThread     // Catch: java.lang.Exception -> L104
            java.lang.String r4 = "mb_db_thread"
            r3.<init>(r4)     // Catch: java.lang.Exception -> L104
            r3.start()     // Catch: java.lang.Exception -> L104
            android.os.Handler r4 = new android.os.Handler     // Catch: java.lang.Exception -> L104
            android.os.Looper r3 = r3.getLooper()     // Catch: java.lang.Exception -> L104
            r4.<init>(r3)     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.foundation.download.MBDownloadConfig$Builder r3 = new com.mbridge.msdk.foundation.download.MBDownloadConfig$Builder     // Catch: java.lang.Exception -> L104
            r3.<init>()     // Catch: java.lang.Exception -> L104
            r3.setDatabaseHandler(r4)     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.system.a$5 r4 = new com.mbridge.msdk.system.a$5     // Catch: java.lang.Exception -> L104
            r4.<init>(r7)     // Catch: java.lang.Exception -> L104
            r3.setDatabaseOpenHelper(r4)     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.system.a$6 r4 = new com.mbridge.msdk.system.a$6     // Catch: java.lang.Exception -> L104
            r4.<init>(r7)     // Catch: java.lang.Exception -> L104
            r3.setLogger(r4)     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.foundation.download.resource.ResourceConfig$Builder r4 = new com.mbridge.msdk.foundation.download.resource.ResourceConfig$Builder     // Catch: java.lang.Exception -> L104
            r4.<init>()     // Catch: java.lang.Exception -> L104
            r5 = 100
            com.mbridge.msdk.foundation.download.resource.ResourceConfig$Builder r4 = r4.setMaxStorageSpace(r5)     // Catch: java.lang.Exception -> L104
            r5 = 259200000(0xf731400, double:1.280618154E-315)
            com.mbridge.msdk.foundation.download.resource.ResourceConfig$Builder r4 = r4.setMaxStorageTime(r5)     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.foundation.download.resource.ResourceConfig r4 = r4.build()     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.foundation.download.MBDownloadManager r5 = com.mbridge.msdk.foundation.download.MBDownloadManager.getInstance()     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L104
            android.content.Context r6 = r6.j()     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.foundation.download.MBDownloadConfig r3 = r3.build()     // Catch: java.lang.Exception -> L104
            r5.initialize(r6, r3, r4)     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.foundation.same.report.b r3 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> L104
            r3.b()     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.out.SDKInitStatusListener r3 = r7.i     // Catch: java.lang.Exception -> L104
            if (r3 == 0) goto La0
            boolean r3 = r7.j     // Catch: java.lang.Exception -> L104
            if (r3 != 0) goto La0
            r7.j = r2     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.out.SDKInitStatusListener r3 = r7.i     // Catch: java.lang.Exception -> L104
            r3.onInitSuccess()     // Catch: java.lang.Exception -> L104
        La0:
            com.mbridge.msdk.foundation.tools.o r3 = com.mbridge.msdk.foundation.tools.o.a()     // Catch: java.lang.Exception -> Lae
            android.content.Context r4 = r7.d     // Catch: java.lang.Exception -> Lae
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Exception -> Lae
            r3.a(r4)     // Catch: java.lang.Exception -> Lae
            goto Lb4
        Lae:
            r3 = move-exception
            java.lang.String r4 = "INIT"
            com.mbridge.msdk.foundation.tools.z.c(r0, r4, r3)     // Catch: java.lang.Exception -> L104
        Lb4:
            com.mbridge.msdk.system.a$4 r3 = new com.mbridge.msdk.system.a$4     // Catch: java.lang.Exception -> Lc0
            r3.<init>(r7)     // Catch: java.lang.Exception -> Lc0
            java.util.concurrent.ThreadPoolExecutor r4 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Exception -> Lc0
            r4.execute(r3)     // Catch: java.lang.Exception -> Lc0
        Lc0:
            android.content.Context r3 = r7.d     // Catch: java.lang.Exception -> L104
            boolean r3 = r3 instanceof android.app.Application     // Catch: java.lang.Exception -> L104
            if (r3 == 0) goto L122
            android.content.Context r3 = r7.d     // Catch: java.lang.Exception -> L104
            android.app.Application r3 = (android.app.Application) r3     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.foundation.tools.ab r4 = com.mbridge.msdk.foundation.tools.ab.a()     // Catch: java.lang.Exception -> Ld7
            java.lang.String r5 = "c_r_a_l_c"
            int r4 = r4.a(r5, r1)     // Catch: java.lang.Exception -> Ld7
            if (r4 != 0) goto Le0
            goto Ldf
        Ld7:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> L104
        Ldf:
            r1 = r2
        Le0:
            if (r3 == 0) goto L122
            if (r1 == 0) goto L122
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L104
            r1.<init>()     // Catch: java.lang.Exception -> L104
            java.lang.String r4 = "registerActivityLifecycleListener:"
            r1.append(r4)     // Catch: java.lang.Exception -> L104
            java.lang.String r4 = r3.getPackageName()     // Catch: java.lang.Exception -> L104
            r1.append(r4)     // Catch: java.lang.Exception -> L104
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L104
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> L104
            android.app.Application$ActivityLifecycleCallbacks r1 = r7.l     // Catch: java.lang.Exception -> L104
            r3.registerActivityLifecycleCallbacks(r1)     // Catch: java.lang.Exception -> L104
            r7.k = r2     // Catch: java.lang.Exception -> L104
            goto L122
        L104:
            r1 = move-exception
            boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r3 == 0) goto L111
            java.lang.String r3 = "无法初始化MMSDK"
            com.mbridge.msdk.foundation.tools.z.c(r0, r3, r1)
            r1.printStackTrace()
        L111:
            com.mbridge.msdk.out.SDKInitStatusListener r0 = r7.i
            if (r0 == 0) goto L122
            boolean r3 = r7.j
            if (r3 != 0) goto L122
            r7.j = r2
            java.lang.String r1 = r1.getMessage()
            r0.onInitFail(r1)
        L122:
            return
    }

    private void a(android.content.Context r2) {
            r1 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r0 != 0) goto L13
            if (r2 == 0) goto L13
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            r0.b(r2)
        L13:
            return
    }

    private boolean a(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L3e
            android.content.pm.PackageManager r1 = r5.getPackageManager()     // Catch: java.lang.Exception -> L2d android.content.pm.PackageManager.NameNotFoundException -> L36
            java.lang.String r5 = r5.getPackageName()     // Catch: java.lang.Exception -> L2d android.content.pm.PackageManager.NameNotFoundException -> L36
            r2 = 2
            android.content.pm.PackageInfo r5 = r1.getPackageInfo(r5, r2)     // Catch: java.lang.Exception -> L2d android.content.pm.PackageManager.NameNotFoundException -> L36
            if (r5 == 0) goto L3e
            android.content.pm.ActivityInfo[] r1 = r5.receivers     // Catch: java.lang.Exception -> L2d android.content.pm.PackageManager.NameNotFoundException -> L36
            if (r1 == 0) goto L3e
            android.content.pm.ActivityInfo[] r5 = r5.receivers     // Catch: java.lang.Exception -> L2d android.content.pm.PackageManager.NameNotFoundException -> L36
            int r1 = r5.length     // Catch: java.lang.Exception -> L2d android.content.pm.PackageManager.NameNotFoundException -> L36
            r2 = r0
        L1a:
            if (r2 >= r1) goto L3e
            r3 = r5[r2]     // Catch: java.lang.Exception -> L2d android.content.pm.PackageManager.NameNotFoundException -> L36
            if (r3 == 0) goto L2a
            java.lang.String r3 = r3.name     // Catch: java.lang.Exception -> L2d android.content.pm.PackageManager.NameNotFoundException -> L36
            boolean r3 = r6.equals(r3)     // Catch: java.lang.Exception -> L2d android.content.pm.PackageManager.NameNotFoundException -> L36
            if (r3 == 0) goto L2a
            r5 = 1
            return r5
        L2a:
            int r2 = r2 + 1
            goto L1a
        L2d:
            r5 = move-exception
            boolean r6 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r6 == 0) goto L3e
            r5.printStackTrace()
            goto L3e
        L36:
            r5 = move-exception
            boolean r6 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r6 == 0) goto L3e
            r5.printStackTrace()
        L3e:
            return r0
    }

    static boolean a(com.mbridge.msdk.system.a r1, android.content.Context r2) {
            r1 = 0
            if (r2 == 0) goto L8
            int r2 = com.mbridge.msdk.foundation.tools.v.w(r2)
            goto L9
        L8:
            r2 = r1
        L9:
            r0 = 26
            if (r2 < r0) goto L12
            int r2 = android.os.Build.VERSION.SDK_INT
            if (r2 < r0) goto L12
            r1 = 1
        L12:
            return r1
    }

    static boolean a(com.mbridge.msdk.system.a r0, android.content.Context r1, java.lang.String r2) {
            boolean r0 = r0.a(r1, r2)
            return r0
    }

    static void b(com.mbridge.msdk.system.a r2, android.content.Context r3) {
            if (r3 == 0) goto L3c
            boolean r0 = r2.e
            if (r0 != 0) goto L3c
            r0 = 1
            r2.e = r0
            java.lang.String r0 = "com.mbridge.msdk.click.AppReceiver"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.InstantiationException -> L2e java.lang.IllegalAccessException -> L33 java.lang.ClassNotFoundException -> L38
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.InstantiationException -> L2e java.lang.IllegalAccessException -> L33 java.lang.ClassNotFoundException -> L38
            android.content.BroadcastReceiver r0 = (android.content.BroadcastReceiver) r0     // Catch: java.lang.InstantiationException -> L2e java.lang.IllegalAccessException -> L33 java.lang.ClassNotFoundException -> L38
            android.content.BroadcastReceiver r0 = (android.content.BroadcastReceiver) r0     // Catch: java.lang.InstantiationException -> L2e java.lang.IllegalAccessException -> L33 java.lang.ClassNotFoundException -> L38
            r2.f = r0     // Catch: java.lang.InstantiationException -> L2e java.lang.IllegalAccessException -> L33 java.lang.ClassNotFoundException -> L38
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.InstantiationException -> L2e java.lang.IllegalAccessException -> L33 java.lang.ClassNotFoundException -> L38
            r0.<init>()     // Catch: java.lang.InstantiationException -> L2e java.lang.IllegalAccessException -> L33 java.lang.ClassNotFoundException -> L38
            java.lang.String r1 = "android.intent.action.PACKAGE_ADDED"
            r0.addAction(r1)     // Catch: java.lang.InstantiationException -> L2e java.lang.IllegalAccessException -> L33 java.lang.ClassNotFoundException -> L38
            java.lang.String r1 = "package"
            r0.addDataScheme(r1)     // Catch: java.lang.InstantiationException -> L2e java.lang.IllegalAccessException -> L33 java.lang.ClassNotFoundException -> L38
            android.content.BroadcastReceiver r2 = r2.f     // Catch: java.lang.InstantiationException -> L2e java.lang.IllegalAccessException -> L33 java.lang.ClassNotFoundException -> L38
            r3.registerReceiver(r2, r0)     // Catch: java.lang.InstantiationException -> L2e java.lang.IllegalAccessException -> L33 java.lang.ClassNotFoundException -> L38
            goto L3c
        L2e:
            r2 = move-exception
            r2.printStackTrace()
            goto L3c
        L33:
            r2 = move-exception
            r2.printStackTrace()
            goto L3c
        L38:
            r2 = move-exception
            r2.printStackTrace()
        L3c:
            return
    }

    static void c(com.mbridge.msdk.system.a r2, android.content.Context r3) {
            if (r3 == 0) goto L47
            boolean r0 = r2.g     // Catch: java.lang.Exception -> L36 java.lang.ClassNotFoundException -> L3f
            if (r0 != 0) goto L47
            java.lang.String r0 = "com.alphab.receiver.AlphabReceiver"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L36 java.lang.ClassNotFoundException -> L3f
            if (r0 == 0) goto L47
            java.lang.Object r1 = r0.newInstance()     // Catch: java.lang.Exception -> L36 java.lang.ClassNotFoundException -> L3f
            boolean r1 = r1 instanceof android.content.BroadcastReceiver     // Catch: java.lang.Exception -> L36 java.lang.ClassNotFoundException -> L3f
            if (r1 == 0) goto L47
            r1 = 1
            r2.g = r1     // Catch: java.lang.Exception -> L36 java.lang.ClassNotFoundException -> L3f
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Exception -> L36 java.lang.ClassNotFoundException -> L3f
            android.content.BroadcastReceiver r0 = (android.content.BroadcastReceiver) r0     // Catch: java.lang.Exception -> L36 java.lang.ClassNotFoundException -> L3f
            r2.h = r0     // Catch: java.lang.Exception -> L36 java.lang.ClassNotFoundException -> L3f
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.Exception -> L36 java.lang.ClassNotFoundException -> L3f
            r0.<init>()     // Catch: java.lang.Exception -> L36 java.lang.ClassNotFoundException -> L3f
            java.lang.String r1 = "android.intent.action.PACKAGE_ADDED"
            r0.addAction(r1)     // Catch: java.lang.Exception -> L36 java.lang.ClassNotFoundException -> L3f
            java.lang.String r1 = "package"
            r0.addDataScheme(r1)     // Catch: java.lang.Exception -> L36 java.lang.ClassNotFoundException -> L3f
            android.content.BroadcastReceiver r2 = r2.h     // Catch: java.lang.Exception -> L36 java.lang.ClassNotFoundException -> L3f
            r3.registerReceiver(r2, r0)     // Catch: java.lang.Exception -> L36 java.lang.ClassNotFoundException -> L3f
            goto L47
        L36:
            r2 = move-exception
            boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r3 == 0) goto L47
            r2.printStackTrace()
            goto L47
        L3f:
            r2 = move-exception
            boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r3 == 0) goto L47
            r2.printStackTrace()
        L47:
            return
    }

    @Override
    public final boolean getConsentStatus(android.content.Context r1) {
            r0 = this;
            r0.a(r1)
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            boolean r1 = r1.e()
            return r1
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> getMBConfigurationMap(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = ""
            java.util.Map r2 = r1.getMBConfigurationMap(r2, r3, r0)
            return r2
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> getMBConfigurationMap(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "mbridge_appid"
            r0.put(r1, r3)
            java.lang.String r3 = "mbridge_appkey"
            r0.put(r3, r4)
            java.lang.String r3 = "mbridge_wx_appid"
            r0.put(r3, r5)
            r3 = 1
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r4 = "mbridge_appstartupcarsh"
            r0.put(r4, r3)
            return r0
    }

    @Override
    public final com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS getStatus() {
            r1 = this;
            com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS r0 = r1.c
            return r0
    }

    @Override
    public final void init(java.util.Map<java.lang.String, java.lang.String> r1, android.app.Application r2) {
            r0 = this;
            android.content.Context r2 = r2.getApplicationContext()
            r0.d = r2
            com.mbridge.msdk.system.a.a = r1
            r0.a()
            return
    }

    @Override
    public final void init(java.util.Map<java.lang.String, java.lang.String> r1, android.app.Application r2, com.mbridge.msdk.out.SDKInitStatusListener r3) {
            r0 = this;
            r0.d = r2
            r0.i = r3
            com.mbridge.msdk.system.a.a = r1
            r0.a()
            return
    }

    @Override
    public final void init(java.util.Map<java.lang.String, java.lang.String> r1, android.content.Context r2) {
            r0 = this;
            android.content.Context r2 = r2.getApplicationContext()
            r0.d = r2
            com.mbridge.msdk.system.a.a = r1
            r0.a()
            return
    }

    @Override
    public final void init(java.util.Map<java.lang.String, java.lang.String> r1, android.content.Context r2, com.mbridge.msdk.out.SDKInitStatusListener r3) {
            r0 = this;
            android.content.Context r2 = r2.getApplicationContext()
            r0.d = r2
            r0.i = r3
            com.mbridge.msdk.system.a.a = r1
            r0.a()
            return
    }

    @Override
    public final void initAsync(java.util.Map<java.lang.String, java.lang.String> r1, android.app.Application r2) {
            r0 = this;
            android.content.Context r2 = r2.getApplicationContext()
            r0.d = r2
            com.mbridge.msdk.system.a.a = r1
            r0.a()
            return
    }

    @Override
    public final void initAsync(java.util.Map<java.lang.String, java.lang.String> r1, android.app.Application r2, com.mbridge.msdk.out.SDKInitStatusListener r3) {
            r0 = this;
            r0.d = r2
            r0.i = r3
            com.mbridge.msdk.system.a.a = r1
            r0.a()
            return
    }

    @Override
    public final void initAsync(java.util.Map<java.lang.String, java.lang.String> r1, android.content.Context r2) {
            r0 = this;
            android.content.Context r2 = r2.getApplicationContext()
            r0.d = r2
            com.mbridge.msdk.system.a.a = r1
            r0.a()
            return
    }

    @Override
    public final void initAsync(java.util.Map<java.lang.String, java.lang.String> r1, android.content.Context r2, com.mbridge.msdk.out.SDKInitStatusListener r3) {
            r0 = this;
            android.content.Context r2 = r2.getApplicationContext()
            r0.d = r2
            r0.i = r3
            com.mbridge.msdk.system.a.a = r1
            r0.a()
            return
    }

    @Override
    public final void preload(java.util.Map<java.lang.String, java.lang.Object> r3) {
            r2 = this;
            com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS r0 = r2.c
            com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS r1 = com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS.COMPLETED
            if (r0 != r1) goto Le
            com.mbridge.msdk.foundation.controller.b r0 = com.mbridge.msdk.foundation.controller.b.a()
            r1 = 0
            r0.a(r3, r1)
        Le:
            return
    }

    @Override
    public final void preloadFrame(java.util.Map<java.lang.String, java.lang.Object> r3) {
            r2 = this;
            com.mbridge.msdk.foundation.controller.b r0 = com.mbridge.msdk.foundation.controller.b.a()
            r1 = 1
            r0.a(r3, r1)
            return
    }

    @Override
    public final void release() {
            r4 = this;
            com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS r0 = r4.c
            com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS r1 = com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS.COMPLETED
            if (r0 != r1) goto Ld
            com.mbridge.msdk.foundation.controller.b r0 = com.mbridge.msdk.foundation.controller.b.a()
            r0.b()
        Ld:
            android.content.Context r0 = r4.d
            r1 = 0
            if (r0 == 0) goto L1f
            android.content.BroadcastReceiver r2 = r4.f
            if (r2 == 0) goto L1f
            boolean r3 = r4.e
            if (r3 == 0) goto L1f
            r4.e = r1
            r0.unregisterReceiver(r2)
        L1f:
            android.content.Context r0 = r4.d
            if (r0 == 0) goto L30
            android.content.BroadcastReceiver r2 = r4.h
            if (r2 == 0) goto L30
            boolean r3 = r4.g
            if (r3 == 0) goto L30
            r4.g = r1
            r0.unregisterReceiver(r2)
        L30:
            android.content.Context r0 = r4.d
            boolean r0 = r0 instanceof android.app.Application
            if (r0 == 0) goto L5d
            android.content.Context r0 = r4.d
            android.app.Application r0 = (android.app.Application) r0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unregisterActivityLifecycleListener:"
            r1.append(r2)
            java.lang.String r2 = r0.getPackageName()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "com.mbridge.msdk"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
            boolean r1 = r4.k
            if (r1 == 0) goto L5d
            android.app.Application$ActivityLifecycleCallbacks r1 = r4.l
            r0.unregisterActivityLifecycleCallbacks(r1)
        L5d:
            com.mbridge.msdk.c.b.a r0 = com.mbridge.msdk.c.b.a.a()
            r0.b()
            return
    }

    @Override
    public final void setAllowAcquireIds(boolean r1) {
            r0 = this;
            com.mbridge.msdk.foundation.controller.authoritycontroller.a.a(r1)
            return
    }

    @Override
    public final void setConsentStatus(android.content.Context r1, int r2) {
            r0 = this;
            r0.a(r1)
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            r1.a(r2)
            return
    }

    @Override
    public final void setCoppaStatus(android.content.Context r2, boolean r3) {
            r1 = this;
            r1.a(r2)
            com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            if (r3 == 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 2
        Lb:
            com.mbridge.msdk.foundation.a.a.a r3 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r0 = "authority_coppa"
            r3.a(r0, r2)
            return
    }

    @Override
    public final void setDeveloperIds(com.mbridge.msdk.out.DeveloperTransferIdInfo r2) {
            r1 = this;
            boolean r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()
            if (r0 == 0) goto L7
            return
        L7:
            if (r2 != 0) goto La
            return
        La:
            java.lang.String r0 = r2.getImei()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1b
            java.lang.String r0 = r2.getImei()
            com.mbridge.msdk.foundation.tools.v.a(r0)
        L1b:
            java.lang.String r0 = r2.getImsi()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2c
            java.lang.String r0 = r2.getImsi()
            com.mbridge.msdk.foundation.tools.v.b(r0)
        L2c:
            java.lang.String r0 = r2.getGaid()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3d
            java.lang.String r0 = r2.getGaid()
            com.mbridge.msdk.foundation.tools.v.h(r0)
        L3d:
            java.lang.String r0 = r2.getOaid()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L4e
            java.lang.String r0 = r2.getOaid()
            com.mbridge.msdk.foundation.tools.v.d(r0)
        L4e:
            java.lang.String r0 = r2.getAndroidId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L5f
            java.lang.String r0 = r2.getAndroidId()
            com.mbridge.msdk.foundation.tools.v.e(r0)
        L5f:
            java.lang.String r0 = r2.getMac()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L70
            java.lang.String r2 = r2.getMac()
            com.mbridge.msdk.foundation.tools.v.c(r2)
        L70:
            return
    }

    @Override
    public final void setDoNotTrackStatus(android.content.Context r1, boolean r2) {
            r0 = this;
            r0.a(r1)
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            r1.b(r2)
            return
    }

    @Override
    public final void setDoNotTrackStatus(boolean r2) {
            r1 = this;
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            r0.b(r2)
            return
    }

    @Override
    public final void setThirdPartyFeatures(java.util.Map<java.lang.String, java.lang.Object> r1) {
            r0 = this;
            return
    }

    @Override
    public final void setUserPrivateInfoType(android.content.Context r1, java.lang.String r2, int r3) {
            r0 = this;
            r0.a(r1)
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            r1.a(r2, r3)
            return
    }

    @Override
    public final void showUserPrivateInfoTips(android.content.Context r1, com.mbridge.msdk.foundation.controller.authoritycontroller.CallBackForDeveloper r2) {
            r0 = this;
            return
    }

    @Override
    public final void updateDialogWeakActivity(java.lang.ref.WeakReference<android.app.Activity> r2) {
            r1 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            r0.a(r2)
            return
    }

    @Override
    public final com.mbridge.msdk.foundation.controller.authoritycontroller.AuthorityInfoBean userPrivateInfo(android.content.Context r1) {
            r0 = this;
            r0.a(r1)
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            com.mbridge.msdk.foundation.controller.authoritycontroller.AuthorityInfoBean r1 = r1.b()
            return r1
    }
}
