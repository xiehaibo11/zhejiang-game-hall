package com.bytedance.pangle.activity;

final class c {
    private static java.lang.Class a() {
            java.lang.Class<android.app.Activity> r0 = android.app.Activity.class
            java.lang.Class[] r0 = r0.getDeclaredClasses()
            int r1 = r0.length
            r2 = 0
            r3 = 0
        L9:
            if (r3 >= r1) goto L1d
            r4 = r0[r3]
            java.lang.String r5 = r4.getSimpleName()
            java.lang.String r6 = "TranslucentConversionListener"
            boolean r5 = r5.contains(r6)
            if (r5 == 0) goto L1a
            r2 = r4
        L1a:
            int r3 = r3 + 1
            goto L9
        L1d:
            return r2
    }

    private static void a(android.app.Activity r8) {
            java.lang.Class<android.app.Activity> r0 = android.app.Activity.class
            java.lang.String r1 = "getActivityOptions"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L31
            java.lang.reflect.Method r0 = com.bytedance.pangle.util.MethodUtils.getAccessibleMethod(r0, r1, r3)     // Catch: java.lang.Throwable -> L31
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L31
            java.lang.Object r0 = r0.invoke(r8, r1)     // Catch: java.lang.Throwable -> L31
            java.lang.Class<android.app.Activity> r1 = android.app.Activity.class
            java.lang.String r3 = "convertToTranslucent"
            r4 = 2
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L31
            java.lang.Class r6 = a()     // Catch: java.lang.Throwable -> L31
            r5[r2] = r6     // Catch: java.lang.Throwable -> L31
            java.lang.Class<android.app.ActivityOptions> r6 = android.app.ActivityOptions.class
            r7 = 1
            r5[r7] = r6     // Catch: java.lang.Throwable -> L31
            java.lang.reflect.Method r1 = com.bytedance.pangle.util.MethodUtils.getAccessibleMethod(r1, r3, r5)     // Catch: java.lang.Throwable -> L31
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L31
            r4 = 0
            r3[r2] = r4     // Catch: java.lang.Throwable -> L31
            r3[r7] = r0     // Catch: java.lang.Throwable -> L31
            r1.invoke(r8, r3)     // Catch: java.lang.Throwable -> L31
        L31:
            return
    }

    static void a(android.app.Activity r4, android.view.View r5) {
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "mListenerInfo"
            java.lang.Object r0 = com.bytedance.pangle.util.FieldUtils.readField(r5, r0)     // Catch: java.lang.Exception -> L48
            if (r0 == 0) goto L5b
            java.lang.String r1 = "mOnClickListener"
            java.lang.Object r0 = com.bytedance.pangle.util.FieldUtils.readField(r0, r1)     // Catch: java.lang.Exception -> L48
            if (r0 == 0) goto L5b
            java.lang.Class r1 = r0.getClass()     // Catch: java.lang.Exception -> L48
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Exception -> L48
            java.lang.Class<android.support.v7.app.AppCompatViewInflater> r2 = android.support.v7.app.AppCompatViewInflater.class
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Exception -> L48
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> L48
            if (r2 != 0) goto L33
            java.lang.Class<android.view.View> r2 = android.view.View.class
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Exception -> L48
            boolean r1 = r1.startsWith(r2)     // Catch: java.lang.Exception -> L48
            if (r1 == 0) goto L5b
        L33:
            com.bytedance.pangle.activity.a r1 = new com.bytedance.pangle.activity.a     // Catch: java.lang.Exception -> L48
            int r2 = r5.getId()     // Catch: java.lang.Exception -> L48
            java.lang.String r3 = "mMethodName"
            java.lang.Object r0 = com.bytedance.pangle.util.FieldUtils.readField(r0, r3)     // Catch: java.lang.Exception -> L48
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L48
            r1.<init>(r4, r2, r0)     // Catch: java.lang.Exception -> L48
            r5.setOnClickListener(r1)     // Catch: java.lang.Exception -> L48
            goto L5b
        L48:
            r0 = move-exception
            java.lang.String r1 = java.lang.String.valueOf(r5)
            java.lang.String r2 = "checkOnClickListener failed!"
            java.lang.String r1 = r2.concat(r1)
            java.lang.String r2 = "Zeus/activity_pangle"
            com.bytedance.pangle.log.ZeusLogger.errReport(r2, r1)
            r0.printStackTrace()
        L5b:
            boolean r0 = r5 instanceof android.view.ViewGroup
            if (r0 == 0) goto L73
            r0 = 0
        L60:
            r1 = r5
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            int r2 = r1.getChildCount()
            if (r0 >= r2) goto L73
            android.view.View r1 = r1.getChildAt(r0)
            a(r4, r1)
            int r0 = r0 + 1
            goto L60
        L73:
            return
    }

    static void a(com.bytedance.pangle.activity.b r3, android.content.Context r4) {
            boolean r0 = com.bytedance.pangle.Zeus.hasInit()
            if (r0 != 0) goto L11
            java.lang.String r0 = "Zeus/init_pangle"
            java.lang.String r1 = "ProxyActivityUtils.attachBaseContext. AppApplication == null."
            android.util.Log.e(r0, r1)
            r3.zeusSuperAttachBaseContext(r4)
            return
        L11:
            java.lang.String r0 = r3.getPluginPkgName()
            com.bytedance.pangle.plugin.PluginManager r1 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            boolean r1 = r1.loadPlugin(r0)
            com.bytedance.pangle.plugin.PluginManager r2 = com.bytedance.pangle.plugin.PluginManager.getInstance()     // Catch: java.lang.Exception -> L3c
            com.bytedance.pangle.plugin.Plugin r2 = r2.getPlugin(r0)     // Catch: java.lang.Exception -> L3c
            r3.setPlugin(r2)     // Catch: java.lang.Exception -> L3c
            if (r1 == 0) goto L38
            android.content.Context r4 = com.bytedance.pangle.transform.ZeusTransformUtils.wrapperContext(r4, r0)     // Catch: java.lang.Exception -> L3c
            r3.zeusSuperAttachBaseContext(r4)     // Catch: java.lang.Exception -> L3c
            java.lang.String r4 = "mResources"
            r0 = 0
            com.bytedance.pangle.util.FieldUtils.writeField(r3, r4, r0)     // Catch: java.lang.Exception -> L3c
            return
        L38:
            r3.zeusSuperAttachBaseContext(r4)     // Catch: java.lang.Exception -> L3c
            return
        L3c:
            r3 = move-exception
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            r4.<init>(r3)
            throw r4
    }

    static void a(com.bytedance.pangle.activity.b r10, android.os.Bundle r11) {
            boolean r0 = com.bytedance.pangle.Zeus.hasInit()
            r1 = 0
            if (r0 != 0) goto L15
            java.lang.String r11 = "Zeus/init_pangle"
            java.lang.String r0 = "ProxyActivityUtils.onCreate finish. AppApplication == null."
            android.util.Log.e(r11, r0)
            r10.zeusSuperOnCreate(r1)
            r10.finish()
            return
        L15:
            android.content.Intent r0 = r10.getIntent()
            java.lang.String r2 = r10.getPluginPkgName()
            com.bytedance.pangle.plugin.Plugin r3 = r10.getPlugin()
            com.bytedance.pangle.PluginClassLoader r4 = r3.mClassLoader
            r0.setExtrasClassLoader(r4)
            com.bytedance.pangle.activity.IntentUtils.a(r0)
            java.lang.String r4 = "targetPlugin"
            java.lang.String r5 = r0.getStringExtra(r4)
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            r7 = 1
            r8 = 0
            if (r6 == 0) goto L58
            java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> r6 = com.bytedance.pangle.ComponentManager.stubActivity2TargetActivities
            java.lang.Class r9 = r10.getClass()
            java.lang.String r9 = r9.getName()
            java.lang.Object r6 = r6.get(r9)
            java.util.List r6 = (java.util.List) r6
            if (r6 == 0) goto L58
            int r9 = r6.size()
            if (r9 != r7) goto L58
            java.lang.Object r5 = r6.get(r8)
            java.lang.String r5 = (java.lang.String) r5
            r0.putExtra(r4, r5)
        L58:
            boolean r0 = r3.isLoaded()
            java.lang.String r4 = "Zeus/activity_pangle"
            if (r0 == 0) goto L109
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L68
            goto L109
        L68:
            java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> r0 = r3.pluginActivities
            java.lang.Object r0 = r0.get(r5)
            android.content.pm.ActivityInfo r0 = (android.content.pm.ActivityInfo) r0
            if (r0 != 0) goto L8e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r6 = "Have you declared "
            r2.<init>(r6)
            r2.append(r5)
            java.lang.String r6 = " in plugin's AndroidManifest.xml!"
            r2.append(r6)
            java.lang.String r2 = r2.toString()
            com.bytedance.pangle.log.ZeusLogger.w(r4, r2)
            r10.zeusSuperOnCreate(r1)
            r10.finish()
        L8e:
            r1 = -1
            com.bytedance.pangle.PluginClassLoader r2 = r3.mClassLoader     // Catch: java.lang.Exception -> Lf1
            java.lang.Class r2 = r2.loadClass(r5)     // Catch: java.lang.Exception -> Lf1
            java.lang.Object r2 = r2.newInstance()     // Catch: java.lang.Exception -> Lf1
            com.bytedance.pangle.activity.IPluginActivity r2 = (com.bytedance.pangle.activity.IPluginActivity) r2     // Catch: java.lang.Exception -> Lf1
            java.lang.String r4 = "mApplication"
            android.app.Application r5 = r10.getApplication()     // Catch: java.lang.Exception -> Lf1
            com.bytedance.pangle.util.FieldUtils.writeField(r2, r4, r5)     // Catch: java.lang.Exception -> Lf1
            r10.setTargetActivity(r2)     // Catch: java.lang.Exception -> Lf1
            r2.setPluginProxyActivity(r10, r3)     // Catch: java.lang.Exception -> Lf1
            int r1 = r0.theme     // Catch: java.lang.Exception -> Lf1
            r10.zeusSuperSetTheme(r1)     // Catch: java.lang.Exception -> Lf1
            r3 = r10
            android.app.Activity r3 = (android.app.Activity) r3     // Catch: java.lang.Exception -> Lf1
            android.content.res.Resources$Theme r3 = r3.getTheme()     // Catch: java.lang.Exception -> Lf1
            int[] r4 = new int[r7]     // Catch: java.lang.Exception -> Lf1
            r5 = 16842840(0x1010058, float:2.3693805E-38)
            r4[r8] = r5     // Catch: java.lang.Exception -> Lf1
            android.content.res.TypedArray r3 = r3.obtainStyledAttributes(r4)     // Catch: java.lang.Exception -> Lf1
            int r4 = r3.getIndex(r8)     // Catch: java.lang.Exception -> Lf1
            boolean r4 = r3.getBoolean(r4, r8)     // Catch: java.lang.Exception -> Lf1
            if (r4 == 0) goto Ld1
            r4 = r10
            android.app.Activity r4 = (android.app.Activity) r4     // Catch: java.lang.Exception -> Lf1
            a(r4)     // Catch: java.lang.Exception -> Lf1
        Ld1:
            r3.recycle()     // Catch: java.lang.Exception -> Lf1
            android.content.Context r3 = r10.getBaseContext()     // Catch: java.lang.Exception -> Lf1
            r2.attachBaseContext(r3)     // Catch: java.lang.Exception -> Lf1
            r3 = r10
            android.app.Activity r3 = (android.app.Activity) r3     // Catch: java.lang.IllegalStateException -> Led java.lang.Exception -> Lf1
            int r3 = r3.getRequestedOrientation()     // Catch: java.lang.IllegalStateException -> Led java.lang.Exception -> Lf1
            int r4 = r0.screenOrientation     // Catch: java.lang.IllegalStateException -> Led java.lang.Exception -> Lf1
            if (r3 == r4) goto Led
            android.app.Activity r10 = (android.app.Activity) r10     // Catch: java.lang.IllegalStateException -> Led java.lang.Exception -> Lf1
            int r0 = r0.screenOrientation     // Catch: java.lang.IllegalStateException -> Led java.lang.Exception -> Lf1
            r10.setRequestedOrientation(r0)     // Catch: java.lang.IllegalStateException -> Led java.lang.Exception -> Lf1
        Led:
            r2.onCreate(r11)     // Catch: java.lang.Exception -> Lf1
            return
        Lf1:
            r10 = move-exception
            boolean r11 = r10 instanceof java.lang.IllegalStateException
            if (r11 == 0) goto L101
            java.lang.String r11 = java.lang.String.valueOf(r1)
            java.lang.String r0 = "activityTheme:"
            java.lang.String r11 = r0.concat(r11)
            goto L103
        L101:
            java.lang.String r11 = ""
        L103:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r11, r10)
            throw r0
        L109:
            r10.zeusSuperOnCreate(r1)     // Catch: java.lang.Exception -> L129
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L129
            java.lang.String r0 = "Cant start pluginActivity, plugin load failed! pluginPkgName: "
            r11.<init>(r0)     // Catch: java.lang.Exception -> L129
            r11.append(r2)     // Catch: java.lang.Exception -> L129
            java.lang.String r0 = " targetActivity: "
            r11.append(r0)     // Catch: java.lang.Exception -> L129
            r11.append(r5)     // Catch: java.lang.Exception -> L129
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Exception -> L129
            com.bytedance.pangle.log.ZeusLogger.w(r4, r11)     // Catch: java.lang.Exception -> L129
            r10.finish()     // Catch: java.lang.Exception -> L129
            return
        L129:
            r10 = move-exception
            java.lang.RuntimeException r11 = new java.lang.RuntimeException
            r11.<init>(r10)
            throw r11
    }
}
