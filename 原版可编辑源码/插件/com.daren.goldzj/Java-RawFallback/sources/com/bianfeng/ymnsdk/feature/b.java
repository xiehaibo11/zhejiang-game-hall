package com.bianfeng.ymnsdk.feature;

public class b {
    private static java.util.Map<java.lang.String, com.google.gson.JsonElement> a;

    class a extends com.google.gson.reflect.TypeToken<java.util.Map<java.lang.String, com.google.gson.JsonElement>> {
        a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bianfeng.ymnsdk.feature.b.a = r0
            return
    }

    public static java.util.List<com.bianfeng.ymnsdk.feature.YmnPluginWrapper> a(android.content.Context r0, java.lang.String r1) {
            dalvik.system.DexFile r0 = new dalvik.system.DexFile     // Catch: java.lang.Exception -> La
            r0.<init>(r1)     // Catch: java.lang.Exception -> La
            java.util.List r0 = a(r0)     // Catch: java.lang.Exception -> La
            return r0
        La:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    private static java.util.List<com.bianfeng.ymnsdk.feature.YmnPluginWrapper> a(dalvik.system.DexFile r6) {
            long r0 = java.lang.System.currentTimeMillis()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.Enumeration r6 = r6.entries()
        Ld:
            boolean r3 = r6.hasMoreElements()
            if (r3 == 0) goto L2f
            java.lang.Object r3 = r6.nextElement()
            java.lang.String r3 = (java.lang.String) r3
            boolean r4 = a(r3)
            if (r4 != 0) goto Ld
            boolean r4 = b(r3)
            if (r4 == 0) goto Ld
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3 = c(r3)
            if (r3 == 0) goto Ld
            r2.add(r3)
            goto Ld
        L2f:
            long r3 = java.lang.System.currentTimeMillis()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r5 = "load plugins(debug model) cost millis "
            r6.append(r5)
            long r3 = r3 - r0
            r6.append(r3)
            java.lang.String r6 = r6.toString()
            com.bianfeng.ymnsdk.util.Logger.dRich(r6)
            return r2
    }

    private static java.util.List<com.bianfeng.ymnsdk.feature.YmnPluginWrapper> a(java.util.List<java.lang.String> r6) {
            long r0 = java.lang.System.currentTimeMillis()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.Iterator r6 = r6.iterator()
        Ld:
            boolean r3 = r6.hasNext()
            if (r3 == 0) goto L29
            java.lang.Object r3 = r6.next()
            java.lang.String r3 = (java.lang.String) r3
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto Ld
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3 = c(r3)
            if (r3 == 0) goto Ld
            r2.add(r3)
            goto Ld
        L29:
            long r3 = java.lang.System.currentTimeMillis()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r5 = "load plugins(fast model) cost millis "
            r6.append(r5)
            long r3 = r3 - r0
            r6.append(r3)
            java.lang.String r6 = r6.toString()
            com.bianfeng.ymnsdk.util.Logger.dRich(r6)
            return r2
    }

    public static void a(android.content.Context r3) {
            java.lang.String r0 = "plugins.ymn"
            android.content.res.AssetManager r1 = r3.getAssets()     // Catch: java.lang.Exception -> L2c
            boolean r3 = com.bianfeng.ymnsdk.util.ResourceUtil.assetFileExist(r3, r0)     // Catch: java.lang.Exception -> L2c
            if (r3 == 0) goto L45
            com.google.gson.Gson r3 = new com.google.gson.Gson     // Catch: java.lang.Exception -> L2c
            r3.<init>()     // Catch: java.lang.Exception -> L2c
            java.io.InputStreamReader r2 = new java.io.InputStreamReader     // Catch: java.lang.Exception -> L2c
            java.io.InputStream r0 = r1.open(r0)     // Catch: java.lang.Exception -> L2c
            r2.<init>(r0)     // Catch: java.lang.Exception -> L2c
            com.bianfeng.ymnsdk.feature.b$a r0 = new com.bianfeng.ymnsdk.feature.b$a     // Catch: java.lang.Exception -> L2c
            r0.<init>()     // Catch: java.lang.Exception -> L2c
            java.lang.reflect.Type r0 = r0.getType()     // Catch: java.lang.Exception -> L2c
            java.lang.Object r3 = r3.fromJson(r2, r0)     // Catch: java.lang.Exception -> L2c
            java.util.Map r3 = (java.util.Map) r3     // Catch: java.lang.Exception -> L2c
            com.bianfeng.ymnsdk.feature.b.a = r3     // Catch: java.lang.Exception -> L2c
            goto L45
        L2c:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "YmnPluginLoader 的init"
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r3)
        L45:
            return
    }

    private static boolean a(java.lang.Class<?> r2) {
            java.lang.Class<com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.feature.YmnPluginWrapper.class
            boolean r0 = r0.isAssignableFrom(r2)
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            java.lang.Class<com.bianfeng.ymnsdk.feature.protocol.YPlugin> r0 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.class
            java.lang.annotation.Annotation r2 = r2.getAnnotation(r0)
            if (r2 == 0) goto L13
            r1 = 1
        L13:
            return r1
    }

    private static boolean a(java.lang.String r1) {
            java.lang.String r0 = "android.support"
            boolean r0 = r1.startsWith(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "$"
            boolean r1 = r1.contains(r0)
            if (r1 == 0) goto L11
            goto L13
        L11:
            r1 = 0
            return r1
        L13:
            r1 = 1
            return r1
    }

    public static java.util.List<com.bianfeng.ymnsdk.feature.YmnPluginWrapper> b(android.content.Context r2) {
            java.util.Map<java.lang.String, com.google.gson.JsonElement> r0 = com.bianfeng.ymnsdk.feature.b.a
            java.lang.String r1 = "apiClass"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L36
            com.google.gson.Gson r2 = new com.google.gson.Gson
            r2.<init>()
            java.util.Map<java.lang.String, com.google.gson.JsonElement> r0 = com.bianfeng.ymnsdk.feature.b.a
            java.lang.Object r0 = r0.get(r1)
            com.google.gson.JsonElement r0 = (com.google.gson.JsonElement) r0
            java.lang.Class<java.util.List> r1 = java.util.List.class
            java.lang.Object r2 = r2.fromJson(r0, r1)
            java.util.List r2 = (java.util.List) r2
            java.lang.Class<com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface> r0 = com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface.class
            java.lang.String r0 = r0.getName()
            r2.add(r0)
            java.lang.Class<com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface> r0 = com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface.class
            java.lang.String r0 = r0.getName()
            r2.add(r0)
            java.util.List r2 = a(r2)
            return r2
        L36:
            java.lang.String r0 = r2.getPackageCodePath()
            java.util.List r2 = a(r2, r0)
            return r2
    }

    private static boolean b(java.lang.String r1) {
            java.lang.String r0 = "Interface"
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "Executor"
            boolean r1 = r1.contains(r0)
            if (r1 == 0) goto L11
            goto L13
        L11:
            r1 = 0
            return r1
        L13:
            r1 = 1
            return r1
    }

    private static com.bianfeng.ymnsdk.feature.YmnPluginWrapper c(java.lang.String r4) {
            java.lang.Class r4 = java.lang.Class.forName(r4)     // Catch: java.lang.Exception -> L24
            boolean r0 = a(r4)     // Catch: java.lang.Exception -> L24
            if (r0 == 0) goto L3d
            java.lang.Object r4 = r4.newInstance()     // Catch: java.lang.Exception -> L24
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r4 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r4     // Catch: java.lang.Exception -> L24
            java.lang.String r0 = "load plugin %s success"
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L24
            r2 = 0
            java.lang.String r3 = com.bianfeng.ymnsdk.feature.YmnPlugin.b.a(r4)     // Catch: java.lang.Exception -> L24
            r1[r2] = r3     // Catch: java.lang.Exception -> L24
            java.lang.String r0 = java.lang.String.format(r0, r1)     // Catch: java.lang.Exception -> L24
            com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Exception -> L24
            return r4
        L24:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "YmnPluginLoader 的loadPlugin"
            r0.append(r1)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r4)
        L3d:
            r4 = 0
            return r4
    }
}
