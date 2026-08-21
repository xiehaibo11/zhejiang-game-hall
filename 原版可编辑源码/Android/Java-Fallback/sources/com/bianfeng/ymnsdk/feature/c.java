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
            if (r2 == 0) goto L1f
            r1.onDestroy()
        L1f:
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
            if (r2 == 0) goto L1f
            r1.onActivityResult(r3, r4, r5)
        L1f:
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
            if (r2 == 0) goto L1f
            r1.onRequestPermissionsResult(r3, r4, r5)
        L1f:
            goto La
        L20:
            return
    }

    public static void a(android.app.Activity r5) {
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L52
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto L51
            r1.onCreate(r5)     // Catch: java.lang.Exception -> L20
            goto L51
        L20:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "onCreate 方法出异常 插件名："
            r3.append(r4)
            java.lang.String r4 = r1.getPluginName()
            r3.append(r4)
            java.lang.String r4 = "-- 插件版本："
            r3.append(r4)
            java.lang.String r4 = r1.getSdkVersion()
            r3.append(r4)
            java.lang.String r4 = "\n原因是--"
            r3.append(r4)
            java.lang.String r4 = r2.getLocalizedMessage()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r3)
        L51:
            goto La
        L52:
            return
    }

    private static void a(android.content.Context r4) {
            com.bianfeng.ymnsdk.entity.PluginLocalState r0 = com.bianfeng.ymnsdk.feature.d.d(r4)
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r1 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r1 = r1.values()
            java.util.Iterator r1 = r1.iterator()
        Le:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L29
            java.lang.Object r2 = r1.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r2 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r2
            boolean r3 = r2.isCheckedState()
            if (r3 != 0) goto L28
            r2.checkState(r0)
            java.lang.String r3 = "AfterCheckState"
            a(r3, r2)
        L28:
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
            if (r2 == 0) goto L1f
            r1.onNewIntent(r3)
        L1f:
            goto La
        L20:
            return
    }

    public static void a(com.bianfeng.ymnsdk.feature.YmnCallback r0) {
            com.bianfeng.ymnsdk.feature.c.c = r0
            return
    }

    public static void a(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = r3.getPluginName()
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "%s插件未开启，请检查网络及远程配置"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            com.bianfeng.ymnsdk.feature.f r1 = new com.bianfeng.ymnsdk.feature.f
            r1.<init>(r0)
            com.bianfeng.ymnsdk.feature.d.a(r1)
            r1.a()
            return
    }

    private static void a(java.lang.String r2, com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r1 = ":"
            r0.append(r1)
            java.lang.String r1 = r3.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.dRich(r0)
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
            goto L38
        L2f:
            boolean r2 = r1.isSupportFunction(r3)
            if (r2 == 0) goto L38
            a(r1)
        L38:
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
            goto L38
        L2f:
            boolean r2 = r1.isSupportFunction(r3)
            if (r2 == 0) goto L38
            a(r1)
        L38:
            goto L19
        L39:
            return
    }

    private static void a(java.util.List<com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r4) {
            if (r4 == 0) goto L22
            boolean r0 = r4.isEmpty()
            if (r0 != 0) goto L22
            java.util.Iterator r0 = r4.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L22
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r2 = com.bianfeng.ymnsdk.feature.c.a
            java.lang.String r3 = com.bianfeng.ymnsdk.feature.YmnPlugin.b.a(r1)
            r2.put(r3, r1)
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
            if (r2 == 0) goto L1f
            r1.onPay(r3)
        L1f:
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
            if (r2 == 0) goto L3d
            java.lang.String r2 = r1.getPluginName()
            boolean r2 = r2.equalsIgnoreCase(r5)
            if (r2 == 0) goto L3d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "onLogin=="
            r2.append(r3)
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r2)
            r1.onLogin(r4)
        L3d:
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
            if (r2 == 0) goto L1f
            r1.setDebugMode(r3)
        L1f:
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
            if (r2 == 0) goto L1f
            r1.onWindowFocusChanged(r3, r4)
        L1f:
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
            if (r3 == 0) goto L48
            java.lang.Object r3 = r1.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r3
            boolean r4 = r3.isSupportFunction(r5)
            if (r4 == 0) goto L47
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r4 = r3.getPluginName()
            r1[r2] = r4
            java.lang.String r4 = "插件 %s"
            java.lang.String r1 = java.lang.String.format(r4, r1)
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            boolean r1 = r3.isWorking()
            if (r1 == 0) goto L43
            return r0
        L43:
            a(r3)
            return r2
        L47:
            goto L19
        L48:
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
            if (r1 == 0) goto L3f
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto L33
            java.lang.String r2 = r1.callFunctionWithResult(r3, r4)
            if (r2 == 0) goto L32
            return r2
        L32:
            goto L3d
        L33:
            boolean r2 = r1.isSupportFunction(r3)
            if (r2 == 0) goto L3d
            a(r1)
            goto L3e
        L3d:
        L3e:
            goto L19
        L3f:
            r0 = 0
            return r0
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
            if (r1 == 0) goto L58
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isWorking()
            if (r2 == 0) goto L4c
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
            java.lang.String r2 = r1.callFunctionWithResult(r3, r4)
            if (r2 == 0) goto L4b
            return r2
        L4b:
            goto L56
        L4c:
            boolean r2 = r1.isSupportFunction(r3)
            if (r2 == 0) goto L56
            a(r1)
            goto L57
        L56:
        L57:
            goto L19
        L58:
            r0 = 0
            return r0
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
            if (r2 == 0) goto L1f
            r1.onPause()
        L1f:
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
            if (r2 == 0) goto L1f
            r1.onRestart()
        L1f:
            goto La
        L20:
            return
    }

    private static void c(android.content.Context r1) {
            java.util.List r0 = com.bianfeng.ymnsdk.feature.b.b(r1)
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
            if (r2 == 0) goto L1f
            r1.onResume()
        L1f:
            goto La
        L20:
            return
    }

    private static void d(android.content.Context r7) {
            com.bianfeng.ymnsdk.entity.PluginLocalState r0 = com.bianfeng.ymnsdk.feature.d.d(r7)
            java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r1 = com.bianfeng.ymnsdk.feature.c.a
            java.util.Collection r1 = r1.values()
            java.util.Iterator r1 = r1.iterator()
        Le:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L8c
            java.lang.Object r2 = r1.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r2 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r2
            boolean r3 = r2.isWorking()
            if (r3 == 0) goto L8b
            boolean r3 = r2.matchEntrance(r7)
            if (r3 == 0) goto L8b
            boolean r3 = r2.canDoInit()
            if (r3 == 0) goto L8b
            com.bianfeng.ymnsdk.entity.PluginConfig$PluginInfo r3 = r0.getInfo(r2)
            if (r3 == 0) goto L40
            java.util.Map r4 = r3.getParams()
            r2.setParams(r4)
            java.util.Map r4 = r3.getCfg_detail()
            r2.setCfgs(r4)
        L40:
            com.bianfeng.ymnsdk.feature.YmnCallback r4 = com.bianfeng.ymnsdk.feature.c.c
            r2.registCallback(r4)
            boolean r4 = com.bianfeng.ymnsdk.util.YmnsdkTypeUtils.isInitAlone()     // Catch: java.lang.Exception -> L57
            if (r4 == 0) goto L53
            boolean r4 = r7 instanceof android.app.Activity     // Catch: java.lang.Exception -> L57
            if (r4 != 0) goto L56
            r2.onInit(r7)     // Catch: java.lang.Exception -> L57
            goto L56
        L53:
            r2.onInit(r7)     // Catch: java.lang.Exception -> L57
        L56:
            goto L86
        L57:
            r4 = move-exception
            r4.printStackTrace()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r2.getPluginName()
            r5.append(r6)
            java.lang.String r6 = "初始化出问题了,版本为"
            r5.append(r6)
            int r6 = r2.getPluginVersion()
            r5.append(r6)
            java.lang.String r6 = "\n原因是--"
            r5.append(r6)
            java.lang.String r6 = r4.getLocalizedMessage()
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r5)
        L86:
            java.lang.String r4 = "AfterDoInit"
            a(r4, r2)
        L8b:
            goto Le
        L8c:
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
            if (r2 == 0) goto L1f
            r1.onStart()
        L1f:
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
            if (r2 == 0) goto L1f
            r1.onStop()
        L1f:
            goto La
        L20:
            return
    }
}
