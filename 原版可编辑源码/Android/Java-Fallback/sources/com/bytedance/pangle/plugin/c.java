package com.bytedance.pangle.plugin;

public final class c {
    private static final com.bytedance.pangle.h a = null;





    static {
            com.bytedance.pangle.h r0 = com.bytedance.pangle.h.a()
            com.bytedance.pangle.plugin.c.a = r0
            return
    }

    c() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.content.pm.PackageInfo a(com.bytedance.pangle.plugin.c r0, java.lang.String r1, com.bytedance.pangle.plugin.Plugin r2, java.lang.StringBuilder r3, java.lang.String r4, java.io.File r5) {
            android.content.pm.PackageInfo r0 = r0.a(r1, r2, r3, r4, r5)
            return r0
    }

    private android.content.pm.PackageInfo a(java.lang.String r6, com.bytedance.pangle.plugin.Plugin r7, java.lang.StringBuilder r8, java.lang.String r9, java.io.File r10) {
            r5 = this;
            long r0 = java.lang.System.currentTimeMillis()
            android.app.Application r2 = com.bytedance.pangle.Zeus.getAppApplication()
            android.content.pm.PackageManager r2 = r2.getPackageManager()
            r3 = 143(0x8f, float:2.0E-43)
            android.content.pm.PackageInfo r2 = r2.getPackageArchiveInfo(r9, r3)
            android.app.Application r3 = com.bytedance.pangle.Zeus.getAppApplication()
            java.lang.String r4 = r7.mPkgName
            android.app.Application r3 = com.bytedance.pangle.transform.ZeusTransformUtils.wrapperContext2Application(r3, r4)
            com.bytedance.pangle.wrapper.PluginApplicationWrapper r3 = (com.bytedance.pangle.wrapper.PluginApplicationWrapper) r3
            r7.mHostApplication = r3
            android.content.pm.ApplicationInfo r3 = new android.content.pm.ApplicationInfo
            android.app.Application r4 = com.bytedance.pangle.Zeus.getAppApplication()
            android.content.pm.ApplicationInfo r4 = r4.getApplicationInfo()
            r3.<init>(r4)
            r7.mHostApplicationInfoHookSomeField = r3
            android.content.pm.ApplicationInfo r3 = r7.mHostApplicationInfoHookSomeField
            java.lang.String r10 = r10.getAbsolutePath()
            r3.nativeLibraryDir = r10
            android.content.pm.ApplicationInfo r10 = r7.mHostApplicationInfoHookSomeField
            com.bytedance.pangle.wrapper.PluginApplicationWrapper r3 = r7.mHostApplication
            java.io.File r3 = r3.getDataDir()
            java.lang.String r3 = r3.getAbsolutePath()
            r10.dataDir = r3
            android.content.pm.ApplicationInfo r10 = r7.mHostApplicationInfoHookSomeField
            r10.sourceDir = r9
            android.content.pm.ApplicationInfo r10 = r2.applicationInfo
            java.lang.String r10 = r10.sourceDir
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 == 0) goto L57
            android.content.pm.ApplicationInfo r10 = r2.applicationInfo
            r10.sourceDir = r9
        L57:
            android.content.pm.ApplicationInfo r10 = r2.applicationInfo
            java.lang.String r10 = r10.publicSourceDir
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 == 0) goto L65
            android.content.pm.ApplicationInfo r10 = r2.applicationInfo
            r10.publicSourceDir = r9
        L65:
            com.bytedance.pangle.res.PluginResources r9 = new com.bytedance.pangle.res.PluginResources
            android.app.Application r10 = com.bytedance.pangle.Zeus.getAppApplication()
            android.content.pm.PackageManager r10 = r10.getPackageManager()
            android.content.pm.ApplicationInfo r3 = r2.applicationInfo
            android.content.res.Resources r10 = r10.getResourcesForApplication(r3)
            r9.<init>(r10, r6)
            r7.mResources = r9
            android.app.Application r6 = com.bytedance.pangle.Zeus.getAppApplication()
            com.bytedance.pangle.plugin.c$3 r9 = new com.bytedance.pangle.plugin.c$3
            r9.<init>(r5, r7)
            r6.registerComponentCallbacks(r9)
            java.lang.String r6 = "makeResources cost:"
            r8.append(r6)
            long r6 = java.lang.System.currentTimeMillis()
            long r6 = r6 - r0
            r8.append(r6)
            java.lang.String r6 = ";"
            r8.append(r6)
            return r2
    }

    private static void a(com.bytedance.pangle.plugin.Plugin r8, java.lang.String r9) {
            boolean r0 = android.text.TextUtils.isEmpty(r9)
            if (r0 != 0) goto Ld4
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r9)
            java.lang.String r9 = "mapping"
            org.json.JSONObject r1 = r0.optJSONObject(r9)
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            if (r1 == 0) goto L30
            java.util.Iterator r3 = r1.keys()
        L1c:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L30
            java.lang.Object r4 = r3.next()
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r5 = r1.getString(r4)
            r2.put(r4, r5)
            goto L1c
        L30:
            java.lang.String r1 = "forceMappings"
            org.json.JSONArray r0 = r0.optJSONArray(r1)
            r1 = 0
            if (r0 == 0) goto L7c
            r3 = r1
        L3a:
            int r4 = r0.length()
            if (r3 >= r4) goto L7c
            org.json.JSONObject r4 = r0.getJSONObject(r3)
            java.lang.String r5 = "minApi"
            int r5 = r4.optInt(r5, r1)
            r6 = 2147483647(0x7fffffff, float:NaN)
            java.lang.String r7 = "maxApi"
            int r6 = r4.optInt(r7, r6)
            int r7 = r8.getApiVersionCode()
            if (r7 > r6) goto L79
            if (r7 < r5) goto L79
            org.json.JSONObject r4 = r4.optJSONObject(r9)
            if (r4 == 0) goto L79
            java.util.Iterator r5 = r4.keys()
        L65:
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto L79
            java.lang.Object r6 = r5.next()
            java.lang.String r6 = (java.lang.String) r6
            java.lang.String r7 = r4.getString(r6)
            r2.put(r6, r7)
            goto L65
        L79:
            int r3 = r3 + 1
            goto L3a
        L7c:
            java.util.Set r9 = r2.keySet()
            java.util.Iterator r9 = r9.iterator()
        L84:
            boolean r0 = r9.hasNext()
            if (r0 == 0) goto Ld4
            java.lang.Object r0 = r9.next()
            java.lang.String r0 = (java.lang.String) r0
            java.lang.Object r3 = r2.get(r0)
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r4 = r8.mPkgName
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "."
            if (r3 == 0) goto Laa
            boolean r3 = r3.contains(r6)
            if (r3 == 0) goto Laa
            java.lang.String r3 = ""
            goto Lbb
        Laa:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r7 = r8.mPkgName
            r3.append(r7)
            r3.append(r6)
            java.lang.String r3 = r3.toString()
        Lbb:
            r5.append(r3)
            java.lang.Object r3 = r2.get(r0)
            java.lang.String r3 = (java.lang.String) r3
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r5 = 1
            java.lang.String[] r5 = new java.lang.String[r5]
            r5[r1] = r0
            com.bytedance.pangle.ComponentManager.registerActivity(r4, r3, r5)
            goto L84
        Ld4:
            return
    }

    private static void a(com.bytedance.pangle.plugin.Plugin r8, java.lang.String r9, java.io.File r10, java.io.File r11) {
            boolean r0 = com.bytedance.pangle.util.i.j()
            java.lang.String r1 = ""
            r2 = 0
            if (r0 == 0) goto L1a
            com.bytedance.pangle.PluginClassLoader r0 = new com.bytedance.pangle.PluginClassLoader
            java.lang.String r10 = r10.getAbsolutePath()
            r0.<init>(r1, r11, r10, r2)
            r8.mClassLoader = r0
            com.bytedance.pangle.PluginClassLoader r8 = r8.mClassLoader
            a(r8, r9)
            return
        L1a:
            boolean r0 = com.bytedance.pangle.util.i.b()
            if (r0 == 0) goto L7b
            java.lang.String r9 = r8.mPkgName
            int r0 = r8.getVersion()
            java.lang.String r9 = com.bytedance.pangle.e.g.a(r9, r0)
            java.lang.String r0 = ":"
            java.lang.String[] r0 = r9.split(r0)
            long r3 = java.lang.System.currentTimeMillis()
            java.lang.String r5 = r11.getAbsolutePath()
            boolean r0 = com.bytedance.pangle.e.b.a(r5, r0)
            r0 = r0 ^ 1
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "useDirect:"
            r5.<init>(r6)
            long r6 = java.lang.System.currentTimeMillis()
            long r6 = r6 - r3
            r5.append(r6)
            java.lang.String r3 = " "
            r5.append(r3)
            r5.append(r0)
            java.lang.String r3 = r5.toString()
            java.lang.String r4 = "Zeus/load_pangle"
            com.bytedance.pangle.log.ZeusLogger.d(r4, r3)
            if (r0 == 0) goto L61
            goto L62
        L61:
            r1 = r9
        L62:
            com.bytedance.pangle.PluginClassLoader r9 = new com.bytedance.pangle.PluginClassLoader
            java.lang.String r10 = r10.getAbsolutePath()
            r9.<init>(r1, r11, r10, r2)
            r8.mClassLoader = r9
            if (r0 == 0) goto L7a
            com.bytedance.pangle.PluginClassLoader r9 = r8.mClassLoader
            java.lang.String r10 = r8.mPkgName
            int r8 = r8.getVersion()
            com.bytedance.pangle.dex.a.a(r9, r10, r8)
        L7a:
            return
        L7b:
            com.bytedance.pangle.PluginClassLoader r0 = new com.bytedance.pangle.PluginClassLoader
            java.lang.String r10 = r10.getAbsolutePath()
            r0.<init>(r9, r11, r10, r2)
            r8.mClassLoader = r0
            return
    }

    private void a(com.bytedance.pangle.plugin.Plugin r5, java.lang.String r6, java.io.File r7, java.io.File r8, java.lang.StringBuilder r9) {
            r4 = this;
            java.lang.String r0 = ";"
            java.lang.String r1 = "actStubV1 cost:"
            long r2 = java.lang.System.currentTimeMillis()
            a(r5, r6, r7, r8)
            java.lang.String r6 = "classLoader cost:"
            r9.append(r6)
            long r6 = java.lang.System.currentTimeMillis()
            long r6 = r6 - r2
            r9.append(r6)
            java.lang.String r6 = " ;"
            r9.append(r6)
            boolean r6 = r5.mOpenLoadClassOpt
            if (r6 == 0) goto L29
            com.bytedance.pangle.plugin.c$4 r6 = new com.bytedance.pangle.plugin.c$4
            r6.<init>(r4, r5)
            com.bytedance.pangle.d.e.a(r6)
        L29:
            long r6 = java.lang.System.currentTimeMillis()
            com.bytedance.pangle.PluginClassLoader r8 = r5.mClassLoader     // Catch: java.lang.ClassNotFoundException -> L42 java.lang.Throwable -> L51
            java.lang.String r2 = "com.volcengine.StubConfig"
            java.lang.Class r8 = r8.loadClass(r2)     // Catch: java.lang.ClassNotFoundException -> L42 java.lang.Throwable -> L51
            java.lang.String r2 = "actStubV1"
            java.lang.Object r8 = com.bytedance.pangle.util.FieldUtils.readStaticField(r8, r2)     // Catch: java.lang.ClassNotFoundException -> L42 java.lang.Throwable -> L51
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.ClassNotFoundException -> L42 java.lang.Throwable -> L51
            if (r8 == 0) goto L42
            a(r5, r8)     // Catch: java.lang.ClassNotFoundException -> L42 java.lang.Throwable -> L51
        L42:
            r9.append(r1)
            long r1 = java.lang.System.currentTimeMillis()
            long r1 = r1 - r6
            r9.append(r1)
            r9.append(r0)
            return
        L51:
            r5 = move-exception
            r9.append(r1)
            long r1 = java.lang.System.currentTimeMillis()
            long r1 = r1 - r6
            r9.append(r1)
            r9.append(r0)
            throw r5
    }

    private static void a(com.bytedance.pangle.plugin.Plugin r10, java.lang.StringBuilder r11, android.content.pm.PackageInfo r12) {
            android.content.pm.ActivityInfo[] r0 = r12.activities
            java.lang.String r1 = "main"
            r2 = 0
            r3 = 1
            java.lang.String r4 = ":"
            if (r0 == 0) goto L38
            int r5 = r0.length
            r6 = r2
        Lc:
            if (r6 >= r5) goto L38
            r7 = r0[r6]
            java.lang.String r8 = r7.processName
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto L2c
            java.lang.String r8 = r7.processName
            boolean r8 = r8.contains(r4)
            if (r8 != 0) goto L21
            goto L2c
        L21:
            java.lang.String r8 = r7.processName
            java.lang.String[] r8 = r8.split(r4)
            r8 = r8[r3]
            r7.processName = r8
            goto L2e
        L2c:
            r7.processName = r1
        L2e:
            java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> r8 = r10.pluginActivities
            java.lang.String r9 = r7.name
            r8.put(r9, r7)
            int r6 = r6 + 1
            goto Lc
        L38:
            android.content.pm.ServiceInfo[] r0 = r12.services
            if (r0 == 0) goto L6a
            int r5 = r0.length
            r6 = r2
        L3e:
            if (r6 >= r5) goto L6a
            r7 = r0[r6]
            java.lang.String r8 = r7.processName
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto L5e
            java.lang.String r8 = r7.processName
            boolean r8 = r8.contains(r4)
            if (r8 != 0) goto L53
            goto L5e
        L53:
            java.lang.String r8 = r7.processName
            java.lang.String[] r8 = r8.split(r4)
            r8 = r8[r3]
            r7.processName = r8
            goto L60
        L5e:
            r7.processName = r1
        L60:
            java.util.HashMap<java.lang.String, android.content.pm.ServiceInfo> r8 = r10.pluginServices
            java.lang.String r9 = r7.name
            r8.put(r9, r7)
            int r6 = r6 + 1
            goto L3e
        L6a:
            android.content.pm.ActivityInfo[] r0 = r12.receivers
            if (r0 == 0) goto L9c
            int r5 = r0.length
            r6 = r2
        L70:
            if (r6 >= r5) goto L9c
            r7 = r0[r6]
            java.lang.String r8 = r7.processName
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto L90
            java.lang.String r8 = r7.processName
            boolean r8 = r8.contains(r4)
            if (r8 != 0) goto L85
            goto L90
        L85:
            java.lang.String r8 = r7.processName
            java.lang.String[] r8 = r8.split(r4)
            r8 = r8[r3]
            r7.processName = r8
            goto L92
        L90:
            r7.processName = r1
        L92:
            java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> r8 = r10.pluginReceiver
            java.lang.String r9 = r7.name
            r8.put(r9, r7)
            int r6 = r6 + 1
            goto L70
        L9c:
            android.content.pm.ProviderInfo[] r0 = r12.providers
            if (r0 == 0) goto Lcd
            int r5 = r0.length
        La1:
            if (r2 >= r5) goto Lcd
            r6 = r0[r2]
            java.lang.String r7 = r6.processName
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto Lc1
            java.lang.String r7 = r6.processName
            boolean r7 = r7.contains(r4)
            if (r7 != 0) goto Lb6
            goto Lc1
        Lb6:
            java.lang.String r7 = r6.processName
            java.lang.String[] r7 = r7.split(r4)
            r7 = r7[r3]
            r6.processName = r7
            goto Lc3
        Lc1:
            r6.processName = r1
        Lc3:
            java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> r7 = r10.pluginProvider
            java.lang.String r8 = r6.name
            r7.put(r8, r6)
            int r2 = r2 + 1
            goto La1
        Lcd:
            long r0 = java.lang.System.currentTimeMillis()
            java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> r2 = r10.pluginProvider
            if (r2 == 0) goto Lea
            java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> r2 = r10.pluginProvider
            int r2 = r2.size()
            if (r2 <= 0) goto Lea
            com.bytedance.pangle.provider.ContentProviderManager r2 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> r3 = r10.pluginProvider
            java.util.Collection r3 = r3.values()
            r2.installContentProviders(r3, r10)
        Lea:
            java.lang.String r2 = "installProvider cost:"
            r11.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r0
            r11.append(r2)
            java.lang.String r0 = ";"
            r11.append(r0)
            long r1 = java.lang.System.currentTimeMillis()
            android.content.pm.ApplicationInfo r3 = r12.applicationInfo
            java.lang.String r3 = r3.className
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L125
            com.bytedance.pangle.PluginClassLoader r3 = r10.mClassLoader
            android.content.pm.ApplicationInfo r12 = r12.applicationInfo
            java.lang.String r12 = r12.className
            java.lang.Class r12 = r3.loadClass(r12)
            java.lang.Object r12 = r12.newInstance()
            com.bytedance.pangle.ZeusApplication r12 = (com.bytedance.pangle.ZeusApplication) r12
            r10.mApplication = r12
            com.bytedance.pangle.ZeusApplication r12 = r10.mApplication
            android.app.Application r3 = com.bytedance.pangle.Zeus.getAppApplication()
            r12.attach(r10, r3)
        L125:
            java.lang.String r10 = "makeApplication cost:"
            r11.append(r10)
            long r3 = java.lang.System.currentTimeMillis()
            long r3 = r3 - r1
            r11.append(r3)
            r11.append(r0)
            return
    }

    static void a(com.bytedance.pangle.plugin.c r0, com.bytedance.pangle.plugin.Plugin r1, java.lang.String r2, java.io.File r3, java.io.File r4, java.lang.StringBuilder r5) {
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    private static void a(java.lang.Object r7, java.lang.String r8) {
            java.lang.String r0 = "Zeus/load_pangle"
            java.lang.Class<dalvik.system.BaseDexClassLoader> r1 = dalvik.system.BaseDexClassLoader.class
            java.lang.String r2 = "addDexPath"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L27
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Throwable -> L27
            java.lang.reflect.Method r1 = com.bytedance.pangle.util.MethodUtils.getAccessibleMethod(r1, r2, r4)     // Catch: java.lang.Throwable -> L27
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L27
            r2[r6] = r8     // Catch: java.lang.Throwable -> L27
            r1.invoke(r7, r2)     // Catch: java.lang.Throwable -> L27
            java.lang.String r7 = "PluginLoader createPluginClassLoader#addDexPath success >>>"
            java.lang.String r1 = java.lang.String.valueOf(r8)     // Catch: java.lang.Throwable -> L27
            java.lang.String r7 = r7.concat(r1)     // Catch: java.lang.Throwable -> L27
            com.bytedance.pangle.log.ZeusLogger.i(r0, r7)     // Catch: java.lang.Throwable -> L27
            return
        L27:
            r7 = move-exception
            java.lang.String r8 = java.lang.String.valueOf(r8)
            java.lang.String r1 = "PluginLoader createPluginClassLoader#addDexPath fail >>>"
            java.lang.String r8 = r1.concat(r8)
            com.bytedance.pangle.log.ZeusLogger.errReport(r0, r8, r7)
            return
    }

    private static void a(java.lang.String r4, int r5, java.lang.String r6, int r7, long r8, java.lang.String r10) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.lang.String r3 = "status_code"
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: org.json.JSONException -> L4d
            java.lang.String r5 = com.bytedance.pangle.log.b.a(r5)     // Catch: org.json.JSONException -> L4d
            r0.putOpt(r3, r5)     // Catch: org.json.JSONException -> L4d
            java.lang.String r5 = "plugin_package_name"
            java.lang.String r6 = com.bytedance.pangle.log.b.a(r6)     // Catch: org.json.JSONException -> L4d
            r0.putOpt(r5, r6)     // Catch: org.json.JSONException -> L4d
            java.lang.String r5 = "version_code"
            java.lang.Integer r6 = java.lang.Integer.valueOf(r7)     // Catch: org.json.JSONException -> L4d
            java.lang.String r6 = com.bytedance.pangle.log.b.a(r6)     // Catch: org.json.JSONException -> L4d
            r0.putOpt(r5, r6)     // Catch: org.json.JSONException -> L4d
            java.lang.String r5 = "duration"
            java.lang.Long r6 = java.lang.Long.valueOf(r8)     // Catch: org.json.JSONException -> L4d
            int r6 = com.bytedance.pangle.log.b.b(r6)     // Catch: org.json.JSONException -> L4d
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: org.json.JSONException -> L4d
            r2.putOpt(r5, r6)     // Catch: org.json.JSONException -> L4d
            java.lang.String r5 = "message"
            java.lang.String r6 = com.bytedance.pangle.log.b.a(r10)     // Catch: org.json.JSONException -> L4d
            r1.putOpt(r5, r6)     // Catch: org.json.JSONException -> L4d
            goto L51
        L4d:
            r5 = move-exception
            r5.printStackTrace()
        L51:
            com.bytedance.pangle.c.b r5 = com.bytedance.pangle.c.b.a()
            r5.a(r4, r0, r2, r1)
            return
    }

    private boolean a(java.lang.String r20, com.bytedance.pangle.plugin.Plugin r21, java.lang.StringBuilder r22) {
            r19 = this;
            r9 = r20
            r0 = r21
            r10 = r22
            java.lang.String r11 = "PluginLoader loadPluginInternal, plugin["
            java.lang.String r12 = "Zeus/load_pangle"
            r13 = 0
            if (r0 != 0) goto L27
            java.lang.String r0 = "loadPluginInternal, plugin == null;"
            r10.append(r0)     // Catch: java.lang.Throwable -> L128
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L128
            r0.<init>(r11)     // Catch: java.lang.Throwable -> L128
            r0.append(r9)     // Catch: java.lang.Throwable -> L128
            java.lang.String r1 = "] not exist !!!"
            r0.append(r1)     // Catch: java.lang.Throwable -> L128
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L128
            com.bytedance.pangle.log.ZeusLogger.w(r12, r0)     // Catch: java.lang.Throwable -> L128
            return r13
        L27:
            boolean r1 = r21.isInstalled()     // Catch: java.lang.Throwable -> L128
            if (r1 != 0) goto L47
            java.lang.String r0 = "loadPluginInternal, !plugin.isInstalled();"
            r10.append(r0)     // Catch: java.lang.Throwable -> L128
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L128
            r0.<init>(r11)     // Catch: java.lang.Throwable -> L128
            r0.append(r9)     // Catch: java.lang.Throwable -> L128
            java.lang.String r1 = "] not installed !!!"
            r0.append(r1)     // Catch: java.lang.Throwable -> L128
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L128
            com.bytedance.pangle.log.ZeusLogger.w(r12, r0)     // Catch: java.lang.Throwable -> L128
            return r13
        L47:
            java.lang.String r1 = r0.mPkgName     // Catch: java.lang.Throwable -> L128
            int r2 = r21.getVersion()     // Catch: java.lang.Throwable -> L128
            java.lang.String r8 = com.bytedance.pangle.d.c.b(r1, r2)     // Catch: java.lang.Throwable -> L128
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L128
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L128
            boolean r1 = r1.exists()     // Catch: java.lang.Throwable -> L128
            if (r1 != 0) goto L76
            java.lang.String r0 = "loadPluginInternal, sourceApk not exist;"
            r10.append(r0)     // Catch: java.lang.Throwable -> L128
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L128
            r0.<init>(r11)     // Catch: java.lang.Throwable -> L128
            r0.append(r9)     // Catch: java.lang.Throwable -> L128
            java.lang.String r1 = "] file not exist !!!"
            r0.append(r1)     // Catch: java.lang.Throwable -> L128
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L128
            com.bytedance.pangle.log.ZeusLogger.w(r12, r0)     // Catch: java.lang.Throwable -> L128
            return r13
        L76:
            java.io.File r14 = new java.io.File     // Catch: java.lang.Throwable -> L128
            java.lang.String r1 = r0.mPkgName     // Catch: java.lang.Throwable -> L128
            int r2 = r21.getVersion()     // Catch: java.lang.Throwable -> L128
            java.lang.String r1 = com.bytedance.pangle.d.c.d(r1, r2)     // Catch: java.lang.Throwable -> L128
            r14.<init>(r1)     // Catch: java.lang.Throwable -> L128
            java.lang.String r1 = r0.mPkgName     // Catch: java.lang.Throwable -> L128
            int r2 = r21.getVersion()     // Catch: java.lang.Throwable -> L128
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L128
            java.lang.String r1 = com.bytedance.pangle.d.c.c(r1, r2)     // Catch: java.lang.Throwable -> L128
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L128
            boolean r1 = com.bytedance.pangle.util.i.d()     // Catch: java.lang.Throwable -> L128
            r15 = 1
            if (r1 == 0) goto Lbf
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L128
            r1.<init>()     // Catch: java.lang.Throwable -> L128
            r1.append(r3)     // Catch: java.lang.Throwable -> L128
            java.lang.String r2 = java.io.File.separator     // Catch: java.lang.Throwable -> L128
            r1.append(r2)     // Catch: java.lang.Throwable -> L128
            java.lang.String r2 = com.bytedance.pangle.e.b.a(r8)     // Catch: java.lang.Throwable -> L128
            r1.append(r2)     // Catch: java.lang.Throwable -> L128
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L128
            java.lang.String[] r2 = new java.lang.String[r15]     // Catch: java.lang.Throwable -> L128
            r2[r13] = r1     // Catch: java.lang.Throwable -> L128
            boolean r1 = com.bytedance.pangle.e.b.a(r2)     // Catch: java.lang.Throwable -> L128
            if (r1 == 0) goto Lbe
            goto Lbf
        Lbe:
            r3 = 0
        Lbf:
            r6 = r3
            if (r6 == 0) goto Lcb
            boolean r1 = r6.exists()     // Catch: java.lang.Throwable -> L128
            if (r1 != 0) goto Lcb
            r6.mkdirs()     // Catch: java.lang.Throwable -> L128
        Lcb:
            android.content.pm.PackageInfo[] r7 = new android.content.pm.PackageInfo[r15]     // Catch: java.lang.Throwable -> L128
            boolean r1 = com.bytedance.pangle.util.i.j()     // Catch: java.lang.Throwable -> L128
            if (r1 == 0) goto L104
            r1 = 2
            com.bytedance.pangle.a.a$a[] r5 = new com.bytedance.pangle.a.a.a[r1]     // Catch: java.lang.Throwable -> L128
            com.bytedance.pangle.plugin.c$1 r16 = new com.bytedance.pangle.plugin.c$1     // Catch: java.lang.Throwable -> L128
            r1 = r16
            r2 = r19
            r3 = r21
            r4 = r8
            r17 = r5
            r5 = r14
            r18 = r7
            r7 = r22
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L128
            r17[r13] = r16     // Catch: java.lang.Throwable -> L128
            com.bytedance.pangle.plugin.c$2 r16 = new com.bytedance.pangle.plugin.c$2     // Catch: java.lang.Throwable -> L128
            r1 = r16
            r2 = r19
            r3 = r18
            r4 = r20
            r5 = r21
            r6 = r22
            r7 = r8
            r8 = r14
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L128
            r17[r15] = r16     // Catch: java.lang.Throwable -> L128
            com.bytedance.pangle.a.a.a(r17)     // Catch: java.lang.Throwable -> L128
            goto L122
        L104:
            r18 = r7
            r1 = r19
            r2 = r21
            r3 = r8
            r4 = r14
            r5 = r6
            r6 = r22
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L128
            r1 = r19
            r2 = r20
            r3 = r21
            r4 = r22
            r5 = r8
            r6 = r14
            android.content.pm.PackageInfo r1 = r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L128
            r18[r13] = r1     // Catch: java.lang.Throwable -> L128
        L122:
            r1 = r18[r13]     // Catch: java.lang.Throwable -> L128
            a(r0, r10, r1)     // Catch: java.lang.Throwable -> L128
            return r15
        L128:
            r0 = move-exception
            java.lang.String r1 = "loadPluginInternal "
            r10.append(r1)
            java.lang.String r1 = r0.getMessage()
            r10.append(r1)
            java.lang.String r1 = ";"
            r10.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r11)
            r1.append(r9)
            java.lang.String r2 = "] "
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.bytedance.pangle.log.ZeusLogger.w(r12, r1, r0)
            return r13
    }

    final boolean a(java.lang.String r14) {
            r13 = this;
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            com.bytedance.pangle.plugin.Plugin r0 = r0.getPlugin(r14)
            r1 = 0
            if (r0 != 0) goto L1b
            java.lang.String r14 = java.lang.String.valueOf(r14)
            java.lang.String r0 = "PluginLoader loadPlugin, plugin == null, pkg = "
            java.lang.String r14 = r0.concat(r14)
            java.lang.String r0 = "Zeus/load_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r14)
            return r1
        L1b:
            monitor-enter(r0)
            boolean r2 = r0.isInstalled()     // Catch: java.lang.Throwable -> L12e
            if (r2 != 0) goto L33
            java.lang.String r2 = "Zeus/load_pangle"
            java.lang.String r3 = "PluginLoader loadPlugin, UN_INSTALLED, "
            java.lang.String r14 = java.lang.String.valueOf(r14)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r14 = r3.concat(r14)     // Catch: java.lang.Throwable -> L12e
            com.bytedance.pangle.log.ZeusLogger.w(r2, r14)     // Catch: java.lang.Throwable -> L12e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12e
            return r1
        L33:
            boolean r2 = r0.isLoaded()     // Catch: java.lang.Throwable -> L12e
            r3 = 1
            if (r2 == 0) goto L3c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12e
            return r3
        L3c:
            com.bytedance.pangle.h r4 = com.bytedance.pangle.plugin.c.a     // Catch: java.lang.Throwable -> L12e
            r5 = 2000(0x7d0, float:2.803E-42)
            r6 = 0
            java.lang.String r7 = r0.mPkgName     // Catch: java.lang.Throwable -> L12e
            int r8 = r0.getVersion()     // Catch: java.lang.Throwable -> L12e
            r9 = 0
            r4.a(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r2 = "Zeus/load_pangle"
            java.lang.String r4 = "PluginLoader"
            java.lang.String r5 = "loadPlugin:"
            java.lang.String r6 = java.lang.String.valueOf(r14)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r5 = r5.concat(r6)     // Catch: java.lang.Throwable -> L12e
            com.bytedance.pangle.log.a r2 = com.bytedance.pangle.log.a.a(r2, r4, r5)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r4 = com.bytedance.pangle.c.b.g     // Catch: java.lang.Throwable -> L12e
            int r5 = com.bytedance.pangle.c.b.a.z     // Catch: java.lang.Throwable -> L12e
            java.lang.String r6 = r0.mPkgName     // Catch: java.lang.Throwable -> L12e
            int r7 = r0.getVersion()     // Catch: java.lang.Throwable -> L12e
            r8 = -1
            r10 = 0
            a(r4, r5, r6, r7, r8, r10)     // Catch: java.lang.Throwable -> L12e
            r4 = 8
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L12e
            com.bytedance.pangle.ZeusPluginStateListener.postStateChange(r14, r4, r5)     // Catch: java.lang.Throwable -> L12e
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12e
            r4.<init>()     // Catch: java.lang.Throwable -> L12e
            boolean r5 = r13.a(r14, r0, r4)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r6 = "loadPluginInternal:"
            java.lang.String r7 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r6 = r6.concat(r7)     // Catch: java.lang.Throwable -> L12e
            r2.a(r6)     // Catch: java.lang.Throwable -> L12e
            if (r5 == 0) goto Lbc
            r5 = 3
            r0.setLifeCycle(r5)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r6 = com.bytedance.pangle.c.b.h     // Catch: java.lang.Throwable -> L12e
            int r7 = com.bytedance.pangle.c.b.a.A     // Catch: java.lang.Throwable -> L12e
            java.lang.String r8 = r0.mPkgName     // Catch: java.lang.Throwable -> L12e
            int r9 = r0.getVersion()     // Catch: java.lang.Throwable -> L12e
            long r10 = r2.a()     // Catch: java.lang.Throwable -> L12e
            java.lang.String r12 = r4.toString()     // Catch: java.lang.Throwable -> L12e
            a(r6, r7, r8, r9, r10, r12)     // Catch: java.lang.Throwable -> L12e
            r2 = 9
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L12e
            com.bytedance.pangle.ZeusPluginStateListener.postStateChange(r14, r2, r4)     // Catch: java.lang.Throwable -> L12e
            com.bytedance.pangle.h r5 = com.bytedance.pangle.plugin.c.a     // Catch: java.lang.Throwable -> L12e
            r6 = 2100(0x834, float:2.943E-42)
            r7 = 0
            java.lang.String r8 = r0.mPkgName     // Catch: java.lang.Throwable -> L12e
            int r9 = r0.getVersion()     // Catch: java.lang.Throwable -> L12e
            r10 = 0
            r5.a(r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L12e
            goto L100
        Lbc:
            java.lang.String r2 = "plugin:"
            r4.append(r2)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r2 = r0.mPkgName     // Catch: java.lang.Throwable -> L12e
            r4.append(r2)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r2 = " versionCode:"
            r4.append(r2)     // Catch: java.lang.Throwable -> L12e
            int r2 = r0.getVersion()     // Catch: java.lang.Throwable -> L12e
            r4.append(r2)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r2 = "load failed;"
            r4.append(r2)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r5 = com.bytedance.pangle.c.b.h     // Catch: java.lang.Throwable -> L12e
            int r6 = com.bytedance.pangle.c.b.a.B     // Catch: java.lang.Throwable -> L12e
            java.lang.String r7 = r0.mPkgName     // Catch: java.lang.Throwable -> L12e
            int r8 = r0.getVersion()     // Catch: java.lang.Throwable -> L12e
            r9 = -1
            java.lang.String r11 = r4.toString()     // Catch: java.lang.Throwable -> L12e
            a(r5, r6, r7, r8, r9, r11)     // Catch: java.lang.Throwable -> L12e
            r2 = 10
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L12e
            com.bytedance.pangle.ZeusPluginStateListener.postStateChange(r14, r2, r4)     // Catch: java.lang.Throwable -> L12e
            com.bytedance.pangle.h r5 = com.bytedance.pangle.plugin.c.a     // Catch: java.lang.Throwable -> L12e
            r6 = 2100(0x834, float:2.943E-42)
            r7 = -1
            java.lang.String r8 = r0.mPkgName     // Catch: java.lang.Throwable -> L12e
            int r9 = r0.getVersion()     // Catch: java.lang.Throwable -> L12e
            r10 = 0
            r5.a(r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L12e
        L100:
            java.lang.String r14 = "Zeus/load_pangle"
            java.lang.String r2 = "PluginLoader loadFinished, "
            java.lang.String r4 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r2 = r2.concat(r4)     // Catch: java.lang.Throwable -> L12e
            com.bytedance.pangle.log.ZeusLogger.i(r14, r2)     // Catch: java.lang.Throwable -> L12e
            boolean r14 = r0.isLoaded()     // Catch: java.lang.Throwable -> L12e
            if (r14 == 0) goto L12c
            java.lang.String r14 = "Zeus/load_pangle"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12e
            java.lang.String r2 = "PluginLoader postResult, LOADED "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r2 = r0.mPkgName     // Catch: java.lang.Throwable -> L12e
            r1.append(r2)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L12e
            com.bytedance.pangle.log.ZeusLogger.d(r14, r1)     // Catch: java.lang.Throwable -> L12e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12e
            return r3
        L12c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12e
            return r1
        L12e:
            r14 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12e
            throw r14
    }
}
