package com.bianfeng.ymnsdk.feature;

public class c {
    private static java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> a;
    private static volatile boolean b;
    private static com.bianfeng.ymnsdk.feature.YmnCallback c;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bianfeng.ymnsdk.feature.c.a = r0
            r0 = 0
            com.bianfeng.ymnsdk.feature.c.b = r0
            return
    }

    public static void a() {
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto La
            r1.onDestroy()
            goto La
        L20:
            return
    }

    public static void a(int r3, int r4, android.content.Intent r5) {
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto La
            r1.onActivityResult(r3, r4, r5)
            goto La
        L20:
            return
    }

    public static void a(int r3, java.lang.String[] r4, int[] r5) {
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto La
            r1.onRequestPermissionsResult(r3, r4, r5)
            goto La
        L20:
            return
    }

    public static void a(android.app.Activity r4) {
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L45
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto La
            r1.onCreate(r4)     // Catch: java.lang.Exception -> L20
            goto La
        L20:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "onCreate 方法出异常 插件名："
            r2.append(r3)
            java.lang.String r3 = r1.getPluginName()
            r2.append(r3)
            java.lang.String r3 = "-- 插件版本："
            r2.append(r3)
            java.lang.String r1 = r1.getSdkVersion()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            goto La
        L45:
            return
    }

    private static void a(android.content.Context r3) {
            com.bianfeng.ymnsdk.entity.PluginLocalState r3 = com.bianfeng.ymnsdk.feature.d.d(r3)
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L29
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isCheckedState()
            if (r2 != 0) goto Le
            r1.checkState(r3)
            java.lang.String r2 = "AfterCheckState"
            a(r2, r1)
            goto Le
        L29:
            return
    }

    public static void a(android.content.Intent r3) {
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto La
            r1.onNewIntent(r3)
            goto La
        L20:
            return
    }

    public static void a(com.bianfeng.ymnsdk.feature.YmnCallback r0) {
            com.bianfeng.ymnsdk.feature.c.c = r0
            return
    }

    public static void a(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r2) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r2 = r2.getPluginName()
            r1 = 0
            r0[r1] = r2
            java.lang.String r2 = "%s插件未开启，请检查网络及远程配置"
            java.lang.String r2 = java.lang.String.format(r2, r0)
            com.bianfeng.ymnsdk.feature.f r0 = new com.bianfeng.ymnsdk.feature.f
            r0.<init>(r2)
            com.bianfeng.ymnsdk.feature.f r2 = com.bianfeng.ymnsdk.feature.d.a(r0)
            r2.a()
            return
    }

    private static void a(java.lang.String r1, com.bianfeng.ymnsdk.feature.YmnPluginWrapper r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.dRich(r1)
            return
    }

    public static void a(java.lang.String r3, java.util.LinkedHashMap<java.lang.String, java.lang.String> r4) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r1 = "callFunction %s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            com.bianfeng.ymnsdk.util.Logger.d(r0)
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L19:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L39
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto L2f
            r1.callFunction(r3, r4)
            goto L19
        L2f:
            boolean r2 = r1.isSupportFunction(r3)
            if (r2 == 0) goto L19
            a(r1)
            goto L19
        L39:
            return
    }

    public static void a(java.lang.String r3, java.lang.String... r4) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r1 = "callFunction %s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            com.bianfeng.ymnsdk.util.Logger.d(r0)
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L19:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L39
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto L2f
            r1.callFunction(r3, r4)
            goto L19
        L2f:
            boolean r2 = r1.isSupportFunction(r3)
            if (r2 == 0) goto L19
            a(r1)
            goto L19
        L39:
            return
    }

    private static void a(java.util.List<com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r3) {
            if (r3 == 0) goto L22
            boolean r0 = r3.isEmpty()
            if (r0 != 0) goto L22
            java.util.Iterator r3 = r3.iterator()
        Lc:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L22
            java.lang.Object r0 = r3.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r0
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r1 = com.bianfeng.ymnsdk.feature.c.a
            java.lang.String r2 = com.bianfeng.ymnsdk.feature.YmnPlugin.b.a(r0)
            r1.put(r2, r0)
            goto Lc
        L22:
            return
    }

    public static void a(java.util.Map<java.lang.String, java.lang.String> r3) {
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto La
            r1.onPay(r3)
            goto La
        L20:
            return
    }

    public static void a(java.util.Map<java.lang.String, java.lang.String> r4, java.lang.String r5) {
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3e
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto La
            java.lang.String r2 = r1.getPluginName()
            boolean r2 = r2.equalsIgnoreCase(r5)
            if (r2 == 0) goto La
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "onLogin=="
            r2.append(r3)
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r2)
            r1.onLogin(r4)
            goto La
        L3e:
            return
    }

    public static void a(boolean r3) {
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto La
            r1.setDebugMode(r3)
            goto La
        L20:
            return
    }

    public static void a(boolean r3, android.app.Activity r4) {
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto La
            r1.onWindowFocusChanged(r3, r4)
            goto La
        L20:
            return
    }

    public static boolean a(java.lang.String r5) {
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]
            r2 = 0
            r1[r2] = r5
            java.lang.String r3 = "isSupportFunction %s"
            java.lang.String r1 = java.lang.String.format(r3, r1)
            com.bianfeng.ymnsdk.util.Logger.d(r1)
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r1 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r1 = r1.values()
            java.util.Iterator r1 = r1.iterator()
        L19:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L46
            java.lang.Object r3 = r1.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r3
            boolean r4 = r3.isSupportFunction(r5)
            if (r4 == 0) goto L19
            java.lang.Object[] r5 = new java.lang.Object[r0]
            java.lang.String r1 = r3.getPluginName()
            r5[r2] = r1
            java.lang.String r1 = "插件 %s"
            java.lang.String r5 = java.lang.String.format(r1, r5)
            com.bianfeng.ymnsdk.util.Logger.e(r5)
            boolean r5 = r3.isWorking()
            if (r5 == 0) goto L43
            return r0
        L43:
            a(r3)
        L46:
            return r2
    }

    public static java.lang.String b(java.lang.String r3, java.util.LinkedHashMap<java.lang.String, java.lang.String> r4) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r1 = "callFunctionWithResult %s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            com.bianfeng.ymnsdk.util.Logger.d(r0)
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L19:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3c
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto L32
            java.lang.String r1 = r1.callFunctionWithResult(r3, r4)
            if (r1 == 0) goto L19
            return r1
        L32:
            boolean r2 = r1.isSupportFunction(r3)
            if (r2 == 0) goto L19
            a(r1)
            goto L19
        L3c:
            r3 = 0
            return r3
    }

    public static java.lang.String b(java.lang.String r3, java.lang.String... r4) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r1 = "callFunctionWithResult %s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            com.bianfeng.ymnsdk.util.Logger.d(r0)
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L19:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L55
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto L4b
            java.lang.String r2 = "plugin_init"
            boolean r2 = r3.contains(r2)
            if (r2 == 0) goto L44
            java.lang.String r2 = r1.getPluginName()
            boolean r2 = r3.contains(r2)
            if (r2 == 0) goto L44
            java.lang.String r2 = r1.inited()
            if (r2 == 0) goto L44
            return r2
        L44:
            java.lang.String r1 = r1.callFunctionWithResult(r3, r4)
            if (r1 == 0) goto L19
            return r1
        L4b:
            boolean r2 = r1.isSupportFunction(r3)
            if (r2 == 0) goto L19
            a(r1)
            goto L19
        L55:
            r3 = 0
            return r3
    }

    public static void b() {
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto La
            r1.onPause()
            goto La
        L20:
            return
    }

    public static void b(android.content.Context r1) {
            boolean r0 = com.bianfeng.ymnsdk.feature.c.b
            if (r0 != 0) goto Ld
            r0 = 1
            com.bianfeng.ymnsdk.feature.c.b = r0
            com.bianfeng.ymnsdk.feature.b.a(r1)
            c(r1)
        Ld:
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            com.bianfeng.ymnsdk.feature.a.a(r1, r0)
            a(r1)
            d(r1)
            return
    }

    public static void c() {
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto La
            r1.onRestart()
            goto La
        L20:
            return
    }

    private static void c(android.content.Context r0) {
            java.util.List r0 = com.bianfeng.ymnsdk.feature.b.b(r0)
            a(r0)
            return
    }

    public static void d() {
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto La
            r1.onResume()
            goto La
        L20:
            return
    }

    private static void d(android.content.Context r5) {
            com.bianfeng.ymnsdk.entity.PluginLocalState r0 = com.bianfeng.ymnsdk.feature.d.d(r5)
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r1 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r1 = r1.values()
            java.util.Iterator r1 = r1.iterator()
        Le:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L72
            java.lang.Object r2 = r1.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r2 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r2
            boolean r3 = r2.isWorking()
            if (r3 == 0) goto Le
            boolean r3 = r2.matchEntrance(r5)
            if (r3 == 0) goto Le
            boolean r3 = r2.canDoInit()
            if (r3 == 0) goto Le
            com.bianfeng.ymnsdk.entity.PluginConfig$PluginInfo r3 = r0.getInfo(r2)
            if (r3 == 0) goto L40
            java.util.Map r4 = r3.getParams()
            r2.setParams(r4)
            java.util.Map r3 = r3.getCfg_detail()
            r2.setCfgs(r3)
        L40:
            com.bianfeng.ymnsdk.feature.YmnCallback r3 = com.bianfeng.ymnsdk.feature.c.c
            r2.registCallback(r3)
            r2.onInit(r5)     // Catch: java.lang.Exception -> L49
            goto L6c
        L49:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r2.getPluginName()
            r3.append(r4)
            java.lang.String r4 = "初始化出问题了,版本为"
            r3.append(r4)
            int r4 = r2.getPluginVersion()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r3)
        L6c:
            java.lang.String r3 = "AfterDoInit"
            a(r3, r2)
            goto Le
        L72:
            return
    }

    public static void e() {
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto La
            r1.onStart()
            goto La
        L20:
            return
    }

    public static void f() {
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto La
            r1.onStop()
            goto La
        L20:
            return
    }
}
