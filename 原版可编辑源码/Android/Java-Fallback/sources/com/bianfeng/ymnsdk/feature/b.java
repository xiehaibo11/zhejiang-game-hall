package com.bianfeng.ymnsdk.feature;

public class b {
    private static java.util.Map<java.lang.String, com.google.gson.JsonElement> a;

    static class a extends com.google.gson.reflect.TypeToken<java.util.Map<java.lang.String, com.google.gson.JsonElement>> {
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

    public static java.util.List<com.bianfeng.ymnsdk.feature.YmnPluginWrapper> a(android.content.Context r2, java.lang.String r3) {
            dalvik.system.DexFile r0 = new dalvik.system.DexFile     // Catch: java.lang.Exception -> La
            r0.<init>(r3)     // Catch: java.lang.Exception -> La
            java.util.List r0 = a(r0)     // Catch: java.lang.Exception -> La
            return r0
        La:
            r0 = move-exception
            r0.printStackTrace()
            r1 = 0
            return r1
    }

    private static java.util.List<com.bianfeng.ymnsdk.feature.YmnPluginWrapper> a(dalvik.system.DexFile r9) {
            long r0 = java.lang.System.currentTimeMillis()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.Enumeration r3 = r9.entries()
        Ld:
            boolean r4 = r3.hasMoreElements()
            if (r4 == 0) goto L2f
            java.lang.Object r4 = r3.nextElement()
            java.lang.String r4 = (java.lang.String) r4
            boolean r5 = a(r4)
            if (r5 != 0) goto L2e
            boolean r5 = b(r4)
            if (r5 == 0) goto L2e
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r5 = c(r4)
            if (r5 == 0) goto L2e
            r2.add(r5)
        L2e:
            goto Ld
        L2f:
            long r4 = java.lang.System.currentTimeMillis()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "load plugins(debug model) cost millis "
            r6.append(r7)
            long r7 = r4 - r0
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.bianfeng.ymnsdk.util.Logger.dRich(r6)
            return r2
    }

    private static java.util.List<com.bianfeng.ymnsdk.feature.YmnPluginWrapper> a(java.util.List<java.lang.String> r8) {
            long r0 = java.lang.System.currentTimeMillis()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.Iterator r3 = r8.iterator()
        Ld:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L29
            java.lang.Object r4 = r3.next()
            java.lang.String r4 = (java.lang.String) r4
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto L28
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r5 = c(r4)
            if (r5 == 0) goto L28
            r2.add(r5)
        L28:
            goto Ld
        L29:
            long r3 = java.lang.System.currentTimeMillis()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "load plugins(fast model) cost millis "
            r5.append(r6)
            long r6 = r3 - r0
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.bianfeng.ymnsdk.util.Logger.dRich(r5)
            return r2
    }

    public static void a(android.content.Context r4) {
            java.lang.String r0 = "plugins.ymn"
            android.content.res.AssetManager r1 = r4.getAssets()     // Catch: java.lang.Exception -> L2c
            boolean r2 = com.bianfeng.ymnsdk.util.ResourceUtil.assetFileExist(r4, r0)     // Catch: java.lang.Exception -> L2c
            if (r2 == 0) goto L2b
            com.google.gson.Gson r2 = new com.google.gson.Gson     // Catch: java.lang.Exception -> L2c
            r2.<init>()     // Catch: java.lang.Exception -> L2c
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Exception -> L2c
            java.io.InputStream r0 = r1.open(r0)     // Catch: java.lang.Exception -> L2c
            r3.<init>(r0)     // Catch: java.lang.Exception -> L2c
            com.bianfeng.ymnsdk.feature.b$a r0 = new com.bianfeng.ymnsdk.feature.b$a     // Catch: java.lang.Exception -> L2c
            r0.<init>()     // Catch: java.lang.Exception -> L2c
            java.lang.reflect.Type r0 = r0.getType()     // Catch: java.lang.Exception -> L2c
            java.lang.Object r0 = r2.fromJson(r3, r0)     // Catch: java.lang.Exception -> L2c
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Exception -> L2c
            com.bianfeng.ymnsdk.feature.b.a = r0     // Catch: java.lang.Exception -> L2c
        L2b:
            goto L45
        L2c:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "YmnPluginLoader 的init"
            r1.append(r2)
            java.lang.String r2 = r0.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r1)
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
            java.lang.annotation.Annotation r0 = r2.getAnnotation(r0)
            if (r0 == 0) goto L13
            r1 = 1
        L13:
            return r1
    }

    private static boolean a(java.lang.String r1) {
            java.lang.String r0 = "android.support"
            boolean r0 = r1.startsWith(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "$"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L11
            goto L13
        L11:
            r0 = 0
            return r0
        L13:
            r0 = 1
            return r0
    }

    public static java.util.List<com.bianfeng.ymnsdk.feature.YmnPluginWrapper> b(android.content.Context r3) {
            java.util.Map<java.lang.String, com.google.gson.JsonElement> r0 = com.bianfeng.ymnsdk.feature.b.a
            java.lang.String r1 = "apiClass"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L36
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            java.util.Map<java.lang.String, com.google.gson.JsonElement> r2 = com.bianfeng.ymnsdk.feature.b.a
            java.lang.Object r1 = r2.get(r1)
            com.google.gson.JsonElement r1 = (com.google.gson.JsonElement) r1
            java.lang.Class<java.util.List> r2 = java.util.List.class
            java.lang.Object r1 = r0.fromJson(r1, r2)
            java.util.List r1 = (java.util.List) r1
            java.lang.Class<com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface> r2 = com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface.class
            java.lang.String r2 = r2.getName()
            r1.add(r2)
            java.lang.Class<com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface> r2 = com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface.class
            java.lang.String r2 = r2.getName()
            r1.add(r2)
            java.util.List r2 = a(r1)
            return r2
        L36:
            java.lang.String r0 = r3.getPackageCodePath()
            java.util.List r0 = a(r3, r0)
            return r0
    }

    private static boolean b(java.lang.String r1) {
            java.lang.String r0 = "Interface"
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "Executor"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L11
            goto L13
        L11:
            r0 = 0
            return r0
        L13:
            r0 = 1
            return r0
    }

    private static com.bianfeng.ymnsdk.feature.YmnPluginWrapper c(java.lang.String r6) {
            java.lang.Class r0 = java.lang.Class.forName(r6)     // Catch: java.lang.Exception -> L25
            boolean r1 = a(r0)     // Catch: java.lang.Exception -> L25
            if (r1 == 0) goto L24
            java.lang.Object r1 = r0.newInstance()     // Catch: java.lang.Exception -> L25
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1     // Catch: java.lang.Exception -> L25
            java.lang.String r2 = "load plugin %s success"
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L25
            r4 = 0
            java.lang.String r5 = com.bianfeng.ymnsdk.feature.YmnPlugin.b.a(r1)     // Catch: java.lang.Exception -> L25
            r3[r4] = r5     // Catch: java.lang.Exception -> L25
            java.lang.String r2 = java.lang.String.format(r2, r3)     // Catch: java.lang.Exception -> L25
            com.bianfeng.ymnsdk.util.Logger.i(r2)     // Catch: java.lang.Exception -> L25
            return r1
        L24:
            goto L3e
        L25:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "YmnPluginLoader 的loadPlugin"
            r1.append(r2)
            java.lang.String r2 = r0.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r1)
        L3e:
            r0 = 0
            return r0
    }
}
