package com.qq.e.comm.managers.plugin;

public class PM {
    private static final java.util.Map<java.lang.Class<?>, java.lang.String> q = null;
    final java.util.concurrent.ExecutorService a;
    private final android.content.Context b;
    private java.lang.String c;
    private java.io.File d;
    private volatile int e;
    private dalvik.system.DexClassLoader f;
    private java.io.RandomAccessFile g;
    private java.nio.channels.FileLock h;
    private boolean i;
    private final com.qq.e.comm.managers.plugin.f j;
    private volatile com.qq.e.comm.pi.POFactory k;
    private int l;
    private java.util.concurrent.Future<java.lang.Boolean> m;
    private boolean n;
    private boolean o;
    private java.lang.String p;

    class a implements java.util.concurrent.Callable<java.lang.Boolean> {
        final com.qq.e.comm.managers.plugin.PM a;

        a(com.qq.e.comm.managers.plugin.PM r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public java.lang.Boolean call() throws java.lang.Exception {
                r5 = this;
                long r0 = java.lang.System.currentTimeMillis()
                com.qq.e.comm.managers.plugin.PM r2 = r5.a
                boolean r2 = com.qq.e.comm.managers.plugin.PM.a(r2)
                if (r2 != 0) goto L15
                com.qq.e.comm.managers.plugin.PM r2 = r5.a
                boolean r3 = r2.tryLockUpdate()
                com.qq.e.comm.managers.plugin.PM.a(r2, r3)
            L15:
                com.qq.e.comm.managers.plugin.PM r2 = r5.a
                boolean r2 = com.qq.e.comm.managers.plugin.PM.b(r2)
                if (r2 == 0) goto L22
                com.qq.e.comm.managers.plugin.PM r2 = r5.a
                com.qq.e.comm.managers.plugin.PM.c(r2)
            L22:
                com.qq.e.comm.managers.plugin.PM r2 = r5.a
                long r3 = java.lang.System.currentTimeMillis()
                long r3 = r3 - r0
                int r0 = (int) r3
                com.qq.e.comm.managers.plugin.PM.a(r2, r0)
                java.lang.Boolean r0 = java.lang.Boolean.TRUE
                return r0
        }
    }

    static class b extends java.util.HashMap<java.lang.Class<?>, java.lang.String> {
        b() {
                r2 = this;
                r2.<init>()
                java.lang.Class<com.qq.e.comm.pi.POFactory> r0 = com.qq.e.comm.pi.POFactory.class
                java.lang.String r1 = "com.qq.e.comm.plugin.POFactoryImpl"
                r2.put(r0, r1)
                return
        }
    }

    static {
            com.qq.e.comm.managers.plugin.PM$b r0 = new com.qq.e.comm.managers.plugin.PM$b
            r0.<init>()
            com.qq.e.comm.managers.plugin.PM.q = r0
            return
    }

    public PM(android.content.Context r2, com.qq.e.comm.managers.plugin.f r3) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            r1.a = r0
            r0 = 0
            r1.n = r0
            android.content.Context r0 = r2.getApplicationContext()
            r1.b = r0
            r1.j = r3
            com.qq.e.comm.managers.plugin.b.a(r2)
            boolean r2 = com.qq.e.comm.managers.status.SDKStatus.isNoPlugin
            if (r2 != 0) goto L1e
            r1.d()
        L1e:
            return
    }

    static int a(com.qq.e.comm.managers.plugin.PM r0, int r1) {
            r0.l = r1
            return r1
    }

    private org.json.JSONObject a() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            int r1 = r4.getPluginVersion()     // Catch: org.json.JSONException -> L46
            r2 = 10000(0x2710, float:1.4013E-41)
            if (r1 <= r2) goto L14
            java.lang.String r2 = "vas"
            java.lang.String r3 = r4.p     // Catch: org.json.JSONException -> L46
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L46
        L14:
            java.lang.String r2 = "pv"
            r0.put(r2, r1)     // Catch: org.json.JSONException -> L46
            java.lang.String r1 = "sig"
            java.lang.String r2 = r4.c     // Catch: org.json.JSONException -> L46
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L46
            java.lang.String r1 = "appId"
            com.qq.e.comm.managers.b r2 = com.qq.e.comm.managers.b.b()     // Catch: org.json.JSONException -> L46
            java.lang.String r2 = r2.a()     // Catch: org.json.JSONException -> L46
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L46
            java.lang.String r1 = "pn"
            android.content.Context r2 = r4.b     // Catch: org.json.JSONException -> L46
            java.lang.String r2 = com.qq.e.comm.managers.plugin.b.a(r2)     // Catch: org.json.JSONException -> L46
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L46
            java.lang.String r1 = "ict"
            int r2 = r4.l     // Catch: org.json.JSONException -> L46
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L46
            java.lang.String r1 = "mup"
            boolean r2 = r4.i     // Catch: org.json.JSONException -> L46
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L46
        L46:
            return r0
    }

    static boolean a(com.qq.e.comm.managers.plugin.PM r0) {
            boolean r0 = r0.i
            return r0
    }

    static boolean a(com.qq.e.comm.managers.plugin.PM r0, boolean r1) {
            r0.i = r1
            return r1
    }

    private boolean b() {
            r4 = this;
            boolean r0 = r4.i
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            android.content.Context r0 = r4.b     // Catch: java.lang.Throwable -> L2b
            android.content.Context r2 = r4.b     // Catch: java.lang.Throwable -> L2b
            java.io.File r2 = com.qq.e.comm.managers.plugin.h.e(r2)     // Catch: java.lang.Throwable -> L2b
            android.content.Context r3 = r4.b     // Catch: java.lang.Throwable -> L2b
            java.io.File r3 = com.qq.e.comm.managers.plugin.h.f(r3)     // Catch: java.lang.Throwable -> L2b
            com.qq.e.comm.managers.plugin.b.a(r0, r2, r3)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r0 = com.qq.e.comm.constants.Sig.ASSET_PLUGIN_SIG     // Catch: java.lang.Throwable -> L2b
            r4.c = r0     // Catch: java.lang.Throwable -> L2b
            android.content.Context r0 = r4.b     // Catch: java.lang.Throwable -> L2b
            java.io.File r0 = com.qq.e.comm.managers.plugin.h.e(r0)     // Catch: java.lang.Throwable -> L2b
            r4.d = r0     // Catch: java.lang.Throwable -> L2b
            int r0 = com.qq.e.comm.managers.status.SDKStatus.getBuildInPluginVersion()     // Catch: java.lang.Throwable -> L2b
            r4.e = r0     // Catch: java.lang.Throwable -> L2b
            r0 = 1
            return r0
        L2b:
            r0 = move-exception
            java.lang.String r2 = "插件初始化失败 "
            com.qq.e.comm.util.GDTLogger.e(r2)
            java.lang.String r2 = r0.getMessage()
            com.qq.e.comm.managers.plugin.a.a(r0, r2)
            return r1
    }

    static boolean b(com.qq.e.comm.managers.plugin.PM r5) {
            java.lang.String r0 = "TimeStap_AFTER_PLUGIN_INIT:"
            if (r5 == 0) goto L6d
            r1 = 0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L31
            r2.<init>()     // Catch: java.lang.Throwable -> L31
            java.lang.String r3 = "TimeStap_BEFORE_PLUGIN_INIT:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L31
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L31
            r2.append(r3)     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L31
            com.qq.e.comm.util.GDTLogger.d(r2)     // Catch: java.lang.Throwable -> L31
            boolean r2 = r5.c()     // Catch: java.lang.Throwable -> L31
            if (r2 != 0) goto L29
            boolean r5 = r5.b()     // Catch: java.lang.Throwable -> L31
            if (r5 == 0) goto L2b
        L29:
            r5 = 1
            r1 = r5
        L2b:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            goto L43
        L31:
            r5 = move-exception
            java.lang.String r2 = "插件加载出现异常"
            com.qq.e.comm.util.GDTLogger.e(r2, r5)     // Catch: java.lang.Throwable -> L55
            java.lang.String r2 = r5.getMessage()     // Catch: java.lang.Throwable -> L55
            com.qq.e.comm.managers.plugin.a.a(r5, r2)     // Catch: java.lang.Throwable -> L55
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
        L43:
            r5.append(r0)
            long r2 = java.lang.System.currentTimeMillis()
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            com.qq.e.comm.util.GDTLogger.d(r5)
            return r1
        L55:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            java.lang.String r0 = r1.toString()
            com.qq.e.comm.util.GDTLogger.d(r0)
            throw r5
        L6d:
            r5 = 0
            throw r5
    }

    static void c(com.qq.e.comm.managers.plugin.PM r5) {
            r0 = 0
            if (r5 == 0) goto L71
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "PluginFile:\t"
            r1.append(r2)
            java.io.File r2 = r5.d
            if (r2 != 0) goto L14
            java.lang.String r2 = "null"
            goto L18
        L14:
            java.lang.String r2 = r2.getAbsolutePath()
        L18:
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.qq.e.comm.util.GDTLogger.d(r1)
            boolean r1 = com.qq.e.comm.managers.status.SDKStatus.isNoPlugin
            if (r1 != 0) goto L6a
            java.lang.String r1 = r5.c
            if (r1 == 0) goto L6a
            java.io.File r1 = r5.d
            if (r1 == 0) goto L6a
            dalvik.system.DexClassLoader r1 = new dalvik.system.DexClassLoader     // Catch: java.lang.Throwable -> L55
            java.io.File r2 = r5.d     // Catch: java.lang.Throwable -> L55
            java.lang.String r2 = r2.getAbsolutePath()     // Catch: java.lang.Throwable -> L55
            android.content.Context r3 = r5.b     // Catch: java.lang.Throwable -> L55
            java.io.File r3 = com.qq.e.comm.managers.plugin.h.a(r3)     // Catch: java.lang.Throwable -> L55
            java.lang.String r3 = r3.getAbsolutePath()     // Catch: java.lang.Throwable -> L55
            java.lang.Class r4 = r5.getClass()     // Catch: java.lang.Throwable -> L55
            java.lang.ClassLoader r4 = r4.getClassLoader()     // Catch: java.lang.Throwable -> L55
            r1.<init>(r2, r3, r0, r4)     // Catch: java.lang.Throwable -> L55
            r5.f = r1     // Catch: java.lang.Throwable -> L55
            com.qq.e.comm.managers.plugin.f r0 = r5.j     // Catch: java.lang.Throwable -> L55
            if (r0 == 0) goto L70
            r0.a()     // Catch: java.lang.Throwable -> L55
            goto L70
        L55:
            r0 = move-exception
            java.lang.String r1 = "插件ClassLoader构造发生异常"
            com.qq.e.comm.util.GDTLogger.e(r1, r0)
            com.qq.e.comm.managers.plugin.f r5 = r5.j
            if (r5 == 0) goto L62
            r5.b()
        L62:
            java.lang.String r5 = r0.getMessage()
            com.qq.e.comm.managers.plugin.a.a(r0, r5)
            goto L70
        L6a:
            boolean r1 = com.qq.e.comm.managers.status.SDKStatus.isNoPlugin
            if (r1 != 0) goto L70
            r5.f = r0
        L70:
            return
        L71:
            throw r0
    }

    private boolean c() {
            r4 = this;
            boolean r0 = r4.o
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            boolean r0 = r4.i
            if (r0 == 0) goto L45
            com.qq.e.comm.managers.plugin.g r0 = new com.qq.e.comm.managers.plugin.g
            android.content.Context r2 = r4.b
            java.io.File r2 = com.qq.e.comm.managers.plugin.h.c(r2)
            android.content.Context r3 = r4.b
            java.io.File r3 = com.qq.e.comm.managers.plugin.h.d(r3)
            r0.<init>(r2, r3)
            boolean r2 = r0.a()
            if (r2 == 0) goto L45
            android.content.Context r2 = r4.b
            java.io.File r2 = com.qq.e.comm.managers.plugin.h.e(r2)
            android.content.Context r3 = r4.b
            java.io.File r3 = com.qq.e.comm.managers.plugin.h.f(r3)
            boolean r0 = r0.a(r2, r3)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "NextExist,Updated="
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.qq.e.comm.util.GDTLogger.d(r0)
        L45:
            com.qq.e.comm.managers.plugin.g r0 = new com.qq.e.comm.managers.plugin.g
            android.content.Context r2 = r4.b
            java.io.File r2 = com.qq.e.comm.managers.plugin.h.e(r2)
            android.content.Context r3 = r4.b
            java.io.File r3 = com.qq.e.comm.managers.plugin.h.f(r3)
            r0.<init>(r2, r3)
            boolean r2 = r0.a()
            if (r2 == 0) goto La7
            int r2 = r0.c()
            int r3 = com.qq.e.comm.managers.status.SDKStatus.getBuildInPluginVersion()
            if (r2 >= r3) goto L89
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "last updated plugin version ="
            r0.append(r2)
            int r2 = r4.e
            r0.append(r2)
            java.lang.String r2 = ";asset plugin version="
            r0.append(r2)
            int r2 = com.qq.e.comm.managers.status.SDKStatus.getBuildInPluginVersion()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qq.e.comm.util.GDTLogger.d(r0)
            return r1
        L89:
            java.lang.String r1 = r0.b()
            r4.c = r1
            int r1 = r0.c()
            r4.e = r1
            android.content.Context r1 = r4.b
            java.io.File r1 = com.qq.e.comm.managers.plugin.h.e(r1)
            r4.d = r1
            java.lang.String r0 = r0.d()
            r4.p = r0
            r0 = 1
            r4.n = r0
            return r0
        La7:
            return r1
    }

    private void d() {
            r4 = this;
            r0 = 0
            r4.n = r0
            android.content.Context r1 = r4.b
            java.lang.String r2 = "start_crash"
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)
            java.lang.String r2 = "crash_count"
            int r0 = r1.getInt(r2, r0)
            r3 = 2
            if (r0 < r3) goto L27
            r0 = 1
            r4.o = r0
            android.content.SharedPreferences$Editor r0 = r1.edit()
            android.content.SharedPreferences$Editor r0 = r0.remove(r2)
            r0.commit()
            java.lang.String r0 = "加载本地插件"
            com.qq.e.comm.util.GDTLogger.e(r0)
        L27:
            java.util.concurrent.ExecutorService r0 = r4.a
            com.qq.e.comm.managers.plugin.PM$a r1 = new com.qq.e.comm.managers.plugin.PM$a
            r1.<init>(r4)
            java.util.concurrent.Future r0 = r0.submit(r1)
            r4.m = r0
            return
    }

    public <T> T getFactory(java.lang.Class<T> r8) throws com.qq.e.comm.managers.plugin.e {
            r7 = this;
            java.lang.Class<com.qq.e.comm.managers.plugin.PM> r0 = com.qq.e.comm.managers.plugin.PM.class
            java.util.concurrent.Future<java.lang.Boolean> r1 = r7.m
            if (r1 == 0) goto L9
            r1.get()     // Catch: java.lang.Throwable -> L9
        L9:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "GetFactoryInstaceforInterface:"
            r1.append(r2)
            r1.append(r8)
            java.lang.String r1 = r1.toString()
            com.qq.e.comm.util.GDTLogger.d(r1)
            boolean r1 = com.qq.e.comm.managers.status.SDKStatus.isNoPlugin
            if (r1 != 0) goto L29
            java.lang.String r1 = com.qq.e.comm.constants.Sig.ASSET_PLUGIN_SIG
            if (r1 != 0) goto L26
            goto L29
        L26:
            dalvik.system.DexClassLoader r1 = r7.f
            goto L2d
        L29:
            java.lang.ClassLoader r1 = r0.getClassLoader()
        L2d:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "PluginClassLoader is parent"
            r2.append(r3)
            java.lang.ClassLoader r0 = r0.getClassLoader()
            r3 = 1
            r4 = 0
            if (r0 != r1) goto L41
            r0 = r3
            goto L42
        L41:
            r0 = r4
        L42:
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.qq.e.comm.util.GDTLogger.d(r0)
            if (r1 == 0) goto Ld1
            java.util.Map<java.lang.Class<?>, java.lang.String> r0 = com.qq.e.comm.managers.plugin.PM.q     // Catch: java.lang.Throwable -> Lb5
            java.lang.Object r0 = r0.get(r8)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> Lb5
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb5
            if (r2 != 0) goto L9a
            java.lang.Class r0 = r1.loadClass(r0)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r1 = "getInstance"
            r2 = 2
            java.lang.Class[] r5 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> Lb5
            java.lang.Class<android.content.Context> r6 = android.content.Context.class
            r5[r4] = r6     // Catch: java.lang.Throwable -> Lb5
            java.lang.Class<org.json.JSONObject> r6 = org.json.JSONObject.class
            r5[r3] = r6     // Catch: java.lang.Throwable -> Lb5
            java.lang.reflect.Method r1 = r0.getDeclaredMethod(r1, r5)     // Catch: java.lang.Throwable -> Lb5
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> Lb5
            android.content.Context r5 = r7.b     // Catch: java.lang.Throwable -> Lb5
            r2[r4] = r5     // Catch: java.lang.Throwable -> Lb5
            org.json.JSONObject r4 = r7.a()     // Catch: java.lang.Throwable -> Lb5
            r2[r3] = r4     // Catch: java.lang.Throwable -> Lb5
            java.lang.Object r0 = r1.invoke(r0, r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.Object r0 = r8.cast(r0)     // Catch: java.lang.Throwable -> Lb5
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5
            r1.<init>()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r2 = "ServiceDelegateFactory ="
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb5
            r1.append(r0)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lb5
            com.qq.e.comm.util.GDTLogger.d(r1)     // Catch: java.lang.Throwable -> Lb5
            return r0
        L9a:
            com.qq.e.comm.managers.plugin.e r0 = new com.qq.e.comm.managers.plugin.e     // Catch: java.lang.Throwable -> Lb5
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5
            r1.<init>()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r2 = "factory  implemention name is not specified for interface:"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r2 = r8.getName()     // Catch: java.lang.Throwable -> Lb5
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lb5
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lb5
            throw r0     // Catch: java.lang.Throwable -> Lb5
        Lb5:
            r0 = move-exception
            com.qq.e.comm.managers.plugin.e r1 = new com.qq.e.comm.managers.plugin.e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Fail to getfactory implement instance for interface:"
            r2.append(r3)
            java.lang.String r8 = r8.getName()
            r2.append(r8)
            java.lang.String r8 = r2.toString()
            r1.<init>(r8, r0)
            throw r1
        Ld1:
            com.qq.e.comm.managers.plugin.e r0 = new com.qq.e.comm.managers.plugin.e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fail to init GDTADPLugin,PluginClassLoader == null;while loading factory impl for:"
            r1.append(r2)
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            r0.<init>(r8)
            throw r0
    }

    public com.qq.e.comm.pi.POFactory getPOFactory() throws com.qq.e.comm.managers.plugin.e {
            r2 = this;
            com.qq.e.comm.pi.POFactory r0 = r2.k
            if (r0 != 0) goto L35
            monitor-enter(r2)
            com.qq.e.comm.pi.POFactory r0 = r2.k     // Catch: java.lang.Throwable -> L32
            if (r0 != 0) goto L30
            java.lang.Class<com.qq.e.comm.pi.POFactory> r0 = com.qq.e.comm.pi.POFactory.class
            java.lang.Object r0 = r2.getFactory(r0)     // Catch: com.qq.e.comm.managers.plugin.e -> L14 java.lang.Throwable -> L32
            com.qq.e.comm.pi.POFactory r0 = (com.qq.e.comm.pi.POFactory) r0     // Catch: com.qq.e.comm.managers.plugin.e -> L14 java.lang.Throwable -> L32
            r2.k = r0     // Catch: com.qq.e.comm.managers.plugin.e -> L14 java.lang.Throwable -> L32
            goto L30
        L14:
            r0 = move-exception
            boolean r1 = r2.n     // Catch: java.lang.Throwable -> L32
            if (r1 == 0) goto L2f
            java.lang.String r0 = "插件加载错误，回退到内置版本"
            com.qq.e.comm.util.GDTLogger.e(r0)     // Catch: java.lang.Throwable -> L32
            r0 = 1
            r2.o = r0     // Catch: java.lang.Throwable -> L32
            r2.d()     // Catch: java.lang.Throwable -> L32
            java.lang.Class<com.qq.e.comm.pi.POFactory> r0 = com.qq.e.comm.pi.POFactory.class
            java.lang.Object r0 = r2.getFactory(r0)     // Catch: java.lang.Throwable -> L32
            com.qq.e.comm.pi.POFactory r0 = (com.qq.e.comm.pi.POFactory) r0     // Catch: java.lang.Throwable -> L32
            r2.k = r0     // Catch: java.lang.Throwable -> L32
            goto L30
        L2f:
            throw r0     // Catch: java.lang.Throwable -> L32
        L30:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L32
            goto L35
        L32:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L32
            throw r0
        L35:
            com.qq.e.comm.pi.POFactory r0 = r2.k
            return r0
    }

    public int getPluginVersion() {
            r1 = this;
            boolean r0 = com.qq.e.comm.managers.status.SDKStatus.isNoPlugin
            if (r0 == 0) goto L7
            r0 = 1381(0x565, float:1.935E-42)
            return r0
        L7:
            java.util.concurrent.Future<java.lang.Boolean> r0 = r1.m
            if (r0 == 0) goto Le
            r0.get()     // Catch: java.lang.Throwable -> Le
        Le:
            int r0 = r1.e
            return r0
    }

    public boolean tryLockUpdate() {
            r4 = this;
            r0 = 0
            android.content.Context r1 = r4.b     // Catch: java.lang.Throwable -> L39
            java.io.File r1 = com.qq.e.comm.managers.plugin.h.b(r1)     // Catch: java.lang.Throwable -> L39
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L39
            if (r2 != 0) goto L15
            r1.createNewFile()     // Catch: java.lang.Throwable -> L39
            java.lang.String r2 = "lock"
            com.qq.e.comm.managers.plugin.h.a(r2, r1)     // Catch: java.lang.Throwable -> L39
        L15:
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L39
            if (r2 != 0) goto L1c
            return r0
        L1c:
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L39
            java.lang.String r3 = "rw"
            r2.<init>(r1, r3)     // Catch: java.lang.Throwable -> L39
            r4.g = r2     // Catch: java.lang.Throwable -> L39
            java.nio.channels.FileChannel r1 = r2.getChannel()     // Catch: java.lang.Throwable -> L39
            java.nio.channels.FileLock r1 = r1.tryLock()     // Catch: java.lang.Throwable -> L39
            r4.h = r1     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L39
            java.io.RandomAccessFile r1 = r4.g     // Catch: java.lang.Throwable -> L39
            r2 = 37
            r1.writeByte(r2)     // Catch: java.lang.Throwable -> L39
            r0 = 1
        L39:
            return r0
    }
}
