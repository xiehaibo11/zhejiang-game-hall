package com.bytedance.pangle.res;

public final class a {
    private static java.util.Map<java.lang.String, java.lang.Integer> a;
    private java.util.LinkedHashMap<java.lang.String, java.lang.Integer> b;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bytedance.pangle.res.a.a = r0
            java.util.List r0 = com.bytedance.pangle.util.j.a()
            if (r0 == 0) goto L2e
            int r1 = r0.size()
            if (r1 <= 0) goto L2e
            java.util.Iterator r0 = r0.iterator()
        L17:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2e
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.util.Map<java.lang.String, java.lang.Integer> r2 = com.bytedance.pangle.res.a.a
            r3 = 0
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r2.put(r1, r3)
            goto L17
        L2e:
            return
    }

    public a() {
            r3 = this;
            r3.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r3.b = r0
            android.app.Application r1 = com.bytedance.pangle.Zeus.getAppApplication()
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()
            java.lang.String r1 = r1.sourceDir
            r2 = 0
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.put(r1, r2)
            return
    }

    private android.content.res.AssetManager a(android.content.res.AssetManager r10, java.lang.String r11) {
            r9 = this;
            java.util.List r0 = com.bytedance.pangle.util.j.a(r10)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.util.Iterator r0 = r0.iterator()
        L12:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L38
            java.lang.Object r3 = r0.next()
            java.lang.String r3 = (java.lang.String) r3
            java.util.Map<java.lang.String, java.lang.Integer> r4 = com.bytedance.pangle.res.a.a
            boolean r4 = r4.containsKey(r3)
            if (r4 != 0) goto L12
            java.util.LinkedHashMap<java.lang.String, java.lang.Integer> r4 = r9.b
            boolean r4 = r4.containsKey(r3)
            if (r4 != 0) goto L12
            boolean r4 = r3.equals(r11)
            if (r4 != 0) goto L12
            r1.add(r3)
            goto L12
        L38:
            java.lang.String r0 = java.lang.String.valueOf(r11)
            java.lang.String r3 = "AssetManagerProcessor newAssetManager, runtimeAdditionalAssets path = "
            java.lang.String r0 = r3.concat(r0)
            java.lang.String r3 = "Zeus/load_pangle"
            com.bytedance.pangle.log.ZeusLogger.i(r3, r0)
            r0 = 0
            java.lang.Class r3 = r10.getClass()     // Catch: java.lang.Exception -> L180
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Exception -> L180
            java.lang.String r4 = "android.content.res.BaiduAssetManager"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Exception -> L180
            if (r3 == 0) goto L6d
            java.lang.String r3 = "android.content.res.BaiduAssetManager"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Exception -> L180
            java.lang.Class[] r4 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L180
            java.lang.reflect.Constructor r3 = r3.getConstructor(r4)     // Catch: java.lang.Exception -> L180
            java.lang.Object[] r4 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L180
            java.lang.Object r3 = r3.newInstance(r4)     // Catch: java.lang.Exception -> L180
            android.content.res.AssetManager r3 = (android.content.res.AssetManager) r3     // Catch: java.lang.Exception -> L180
            goto L75
        L6d:
            java.lang.Class<android.content.res.AssetManager> r3 = android.content.res.AssetManager.class
            java.lang.Object r3 = r3.newInstance()     // Catch: java.lang.Exception -> L180
            android.content.res.AssetManager r3 = (android.content.res.AssetManager) r3     // Catch: java.lang.Exception -> L180
        L75:
            java.lang.String r4 = "Zeus/load_pangle"
            java.lang.String r5 = "AssetManagerProcessor newAssetManager = "
            java.lang.String r6 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L180
            java.lang.String r5 = r5.concat(r6)     // Catch: java.lang.Exception -> L180
            com.bytedance.pangle.log.ZeusLogger.i(r4, r5)     // Catch: java.lang.Exception -> L180
            java.util.LinkedHashMap<java.lang.String, java.lang.Integer> r4 = r9.b     // Catch: java.lang.Exception -> L180
            monitor-enter(r4)     // Catch: java.lang.Exception -> L180
            java.util.LinkedHashMap<java.lang.String, java.lang.Integer> r5 = r9.b     // Catch: java.lang.Throwable -> L17d
            java.util.Set r5 = r5.entrySet()     // Catch: java.lang.Throwable -> L17d
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L17d
        L91:
            boolean r6 = r5.hasNext()     // Catch: java.lang.Throwable -> L17d
            if (r6 == 0) goto Lbc
            java.lang.Object r6 = r5.next()     // Catch: java.lang.Throwable -> L17d
            java.util.Map$Entry r6 = (java.util.Map.Entry) r6     // Catch: java.lang.Throwable -> L17d
            java.util.Map<java.lang.String, java.lang.Integer> r7 = com.bytedance.pangle.res.a.a     // Catch: java.lang.Throwable -> L17d
            java.lang.Object r8 = r6.getKey()     // Catch: java.lang.Throwable -> L17d
            boolean r7 = r7.containsKey(r8)     // Catch: java.lang.Throwable -> L17d
            if (r7 != 0) goto L91
            java.lang.Object r7 = r6.getKey()     // Catch: java.lang.Throwable -> L17d
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L17d
            r2.append(r7)     // Catch: java.lang.Throwable -> L17d
            java.lang.Object r6 = r6.getKey()     // Catch: java.lang.Throwable -> L17d
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L17d
            b(r3, r6, r0)     // Catch: java.lang.Throwable -> L17d
            goto L91
        Lbc:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L17d
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Exception -> L180
            android.app.Application r5 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Exception -> L180
            android.content.pm.ApplicationInfo r5 = r5.getApplicationInfo()     // Catch: java.lang.Exception -> L180
            java.lang.String r5 = r5.sourceDir     // Catch: java.lang.Exception -> L180
            boolean r4 = r4.contains(r5)     // Catch: java.lang.Exception -> L180
            if (r4 != 0) goto L101
            android.app.Application r4 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Exception -> L180
            android.content.pm.ApplicationInfo r4 = r4.getApplicationInfo()     // Catch: java.lang.Exception -> L180
            java.lang.String r4 = r4.sourceDir     // Catch: java.lang.Exception -> L180
            b(r3, r4, r0)     // Catch: java.lang.Exception -> L180
            java.lang.String r4 = "Zeus/load_pangle"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L180
            java.lang.String r6 = "AssetManagerProcessor newAssetManager lost host path : "
            r5.<init>(r6)     // Catch: java.lang.Exception -> L180
            java.util.Map<java.lang.String, java.lang.Integer> r6 = com.bytedance.pangle.res.a.a     // Catch: java.lang.Exception -> L180
            android.app.Application r7 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Exception -> L180
            android.content.pm.ApplicationInfo r7 = r7.getApplicationInfo()     // Catch: java.lang.Exception -> L180
            java.lang.String r7 = r7.sourceDir     // Catch: java.lang.Exception -> L180
            boolean r6 = r6.containsKey(r7)     // Catch: java.lang.Exception -> L180
            r5.append(r6)     // Catch: java.lang.Exception -> L180
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L180
            com.bytedance.pangle.log.ZeusLogger.w(r4, r5)     // Catch: java.lang.Exception -> L180
        L101:
            r2.append(r11)     // Catch: java.lang.Exception -> L180
            b(r3, r11, r0)     // Catch: java.lang.Exception -> L180
            boolean r4 = r1.isEmpty()     // Catch: java.lang.Exception -> L180
            if (r4 != 0) goto L124
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L180
        L111:
            boolean r4 = r1.hasNext()     // Catch: java.lang.Exception -> L180
            if (r4 == 0) goto L124
            java.lang.Object r4 = r1.next()     // Catch: java.lang.Exception -> L180
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L180
            r2.append(r4)     // Catch: java.lang.Exception -> L180
            b(r3, r4, r0)     // Catch: java.lang.Exception -> L180
            goto L111
        L124:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L180
            r4 = 21
            if (r1 < r4) goto L132
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L180
            r4 = 23
            if (r1 >= r4) goto L132
            r1 = 1
            goto L133
        L132:
            r1 = r0
        L133:
            if (r1 == 0) goto L17b
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> L180
            java.lang.String r1 = r1.toLowerCase()     // Catch: java.lang.Exception -> L180
            java.lang.String r2 = "webview"
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Exception -> L180
            if (r1 != 0) goto L17b
            android.app.Application r1 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Exception -> L173
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Exception -> L173
            java.lang.String r2 = "android:string/config_webViewPackageName"
            java.lang.String r4 = "string"
            java.lang.String r5 = "android"
            int r2 = r1.getIdentifier(r2, r4, r5)     // Catch: java.lang.Exception -> L173
            android.app.Application r4 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Exception -> L173
            java.lang.String r1 = r1.getString(r2)     // Catch: java.lang.Exception -> L173
            android.content.Context r1 = r4.createPackageContext(r1, r0)     // Catch: java.lang.Exception -> L173
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()     // Catch: java.lang.Exception -> L173
            java.lang.String r1 = r1.sourceDir     // Catch: java.lang.Exception -> L173
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L173
            if (r2 != 0) goto L17b
            b(r3, r1, r0)     // Catch: java.lang.Exception -> L173
            goto L17b
        L173:
            r1 = move-exception
            java.lang.String r2 = "Zeus/load_pangle"
            java.lang.String r4 = "AssetManagerProcessor newAssetManager appendAsset webview failed."
            com.bytedance.pangle.log.ZeusLogger.errReport(r2, r4, r1)     // Catch: java.lang.Exception -> L180
        L17b:
            r10 = r3
            goto L18b
        L17d:
            r1 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L17d
            throw r1     // Catch: java.lang.Exception -> L180
        L180:
            r1 = move-exception
            java.lang.String r2 = "Zeus/load_pangle"
            java.lang.String r3 = "AssetManagerProcessor newAssetManager failed."
            com.bytedance.pangle.log.ZeusLogger.errReport(r2, r3, r1)
            b(r10, r11, r0)
        L18b:
            java.lang.String r11 = "ensureStringBlocks"
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L19a
            com.bytedance.pangle.util.MethodUtils.invokeMethod(r10, r11, r0)     // Catch: java.lang.Exception -> L19a
            java.lang.String r11 = "Zeus/load_pangle"
            java.lang.String r0 = "AssetManagerProcessor ensureStringBlocks"
            com.bytedance.pangle.log.ZeusLogger.i(r11, r0)     // Catch: java.lang.Exception -> L19a
            goto L1a2
        L19a:
            r11 = move-exception
            java.lang.String r0 = "Zeus/load_pangle"
            java.lang.String r1 = "AssetManagerProcessor ensureStringBlocks failed."
            com.bytedance.pangle.log.ZeusLogger.errReport(r0, r1, r11)
        L1a2:
            return r10
    }

    private static android.content.res.AssetManager b(android.content.res.AssetManager r9, java.lang.String r10, boolean r11) {
            java.lang.String r0 = "addAssetPath"
            if (r11 == 0) goto L7
            java.lang.String r1 = "addAssetPathAsSharedLibrary"
            goto L8
        L7:
            r1 = r0
        L8:
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 30
            r4 = 0
            r5 = 1
            if (r2 >= r3) goto L1d
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 29
            if (r2 != r3) goto L1b
            int r2 = android.os.Build.VERSION.PREVIEW_SDK_INT
            if (r2 <= 0) goto L1b
            goto L1d
        L1b:
            r2 = r4
            goto L1e
        L1d:
            r2 = r5
        L1e:
            if (r2 == 0) goto L2c
            if (r11 != 0) goto L2c
            java.lang.String r2 = "/product/overlay/"
            boolean r2 = r10.startsWith(r2)
            if (r2 == 0) goto L2c
            java.lang.String r1 = "addOverlayPath"
        L2c:
            java.lang.Class<android.content.res.AssetManager> r2 = android.content.res.AssetManager.class
            java.lang.Class[] r3 = new java.lang.Class[r5]
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r3[r4] = r6
            java.lang.reflect.Method r2 = com.bytedance.pangle.util.MethodUtils.getAccessibleMethod(r2, r1, r3)
            java.lang.String r3 = "Zeus/load_pangle"
            if (r2 != 0) goto L50
            if (r11 == 0) goto L50
            java.lang.Class<android.content.res.AssetManager> r1 = android.content.res.AssetManager.class
            java.lang.Class[] r2 = new java.lang.Class[r5]
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r2[r4] = r6
            java.lang.reflect.Method r2 = com.bytedance.pangle.util.MethodUtils.getAccessibleMethod(r1, r0, r2)
            java.lang.String r1 = "AssetManagerProcessor AssetManager.addAssetPath() invoke addAssetPathAsSharedLibrary failed. use addAssetPath."
            com.bytedance.pangle.log.ZeusLogger.w(r3, r1)
            goto L51
        L50:
            r0 = r1
        L51:
            if (r2 == 0) goto Lb8
            r1 = 3
        L54:
            int r6 = r1 + (-1)
            if (r1 < 0) goto Ld1
            java.lang.Object[] r1 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L9c
            r1[r4] = r10     // Catch: java.lang.Exception -> L9c
            java.lang.Object r1 = r2.invoke(r9, r1)     // Catch: java.lang.Exception -> L9c
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Exception -> L9c
            int r1 = r1.intValue()     // Catch: java.lang.Exception -> L9c
            if (r1 == 0) goto L82
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9c
            java.lang.String r8 = "AssetManagerProcessor invoke AssetManager.addAssetPath() success, cookie = "
            r7.<init>(r8)     // Catch: java.lang.Exception -> L9c
            r7.append(r1)     // Catch: java.lang.Exception -> L9c
            java.lang.String r1 = ", path = "
            r7.append(r1)     // Catch: java.lang.Exception -> L9c
            r7.append(r10)     // Catch: java.lang.Exception -> L9c
            java.lang.String r1 = r7.toString()     // Catch: java.lang.Exception -> L9c
            com.bytedance.pangle.log.ZeusLogger.i(r3, r1)     // Catch: java.lang.Exception -> L9c
            goto Ld1
        L82:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9c
            java.lang.String r8 = "AssetManagerProcessor invoke AssetManager.addAssetPath() failed, cookie = "
            r7.<init>(r8)     // Catch: java.lang.Exception -> L9c
            r7.append(r1)     // Catch: java.lang.Exception -> L9c
            java.lang.String r1 = " "
            r7.append(r1)     // Catch: java.lang.Exception -> L9c
            r7.append(r10)     // Catch: java.lang.Exception -> L9c
            java.lang.String r1 = r7.toString()     // Catch: java.lang.Exception -> L9c
            com.bytedance.pangle.log.ZeusLogger.w(r3, r1)     // Catch: java.lang.Exception -> L9c
            goto Lb6
        L9c:
            r1 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            java.lang.String r8 = "AssetManagerProcessor invoke AssetManager.addAssetPath() failed. asSharedLibrary = "
            r7.<init>(r8)
            r7.append(r11)
            java.lang.String r8 = ", methodName = "
            r7.append(r8)
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            com.bytedance.pangle.log.ZeusLogger.w(r3, r7, r1)
        Lb6:
            r1 = r6
            goto L54
        Lb8:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            java.lang.String r1 = "AssetManagerProcessor reflect AssetManager.addAssetPath() failed. addAssetPathMethod == null. asSharedLibrary = "
            r10.<init>(r1)
            r10.append(r11)
            java.lang.String r11 = " methodName:"
            r10.append(r11)
            r10.append(r0)
            java.lang.String r10 = r10.toString()
            com.bytedance.pangle.log.ZeusLogger.w(r3, r10)
        Ld1:
            return r9
    }

    private static android.content.res.AssetManager c(android.content.res.AssetManager r17, java.lang.String r18, boolean r19) {
            r1 = r17
            r2 = r18
            r3 = 3
            r0 = 0
            r4 = r3
        L7:
            int r5 = r4 + (-1)
            if (r4 < 0) goto L11e
            monitor-enter(r17)     // Catch: java.lang.Throwable -> L119
            r4 = 0
            r6 = r4
            r7 = r6
        Lf:
            r8 = 2
            r9 = 1
            if (r6 >= r3) goto L69
            boolean r10 = com.bytedance.pangle.util.i.c()     // Catch: java.lang.Throwable -> L66
            if (r10 == 0) goto L30
            java.lang.String r7 = "addAssetPathNative"
            java.lang.Object[] r10 = new java.lang.Object[r9]     // Catch: java.lang.Throwable -> L66
            r10[r4] = r2     // Catch: java.lang.Throwable -> L66
            java.lang.Class[] r11 = new java.lang.Class[r9]     // Catch: java.lang.Throwable -> L66
            java.lang.Class<java.lang.String> r12 = java.lang.String.class
            r11[r4] = r12     // Catch: java.lang.Throwable -> L66
            java.lang.Object r7 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r1, r7, r10, r11)     // Catch: java.lang.Throwable -> L66
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Throwable -> L66
            int r7 = r7.intValue()     // Catch: java.lang.Throwable -> L66
            goto L61
        L30:
            int r10 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L66
            r11 = 24
            if (r10 < r11) goto L3e
            int r10 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L66
            r11 = 25
            if (r10 > r11) goto L3e
            r10 = r9
            goto L3f
        L3e:
            r10 = r4
        L3f:
            if (r10 == 0) goto L61
            java.lang.String r7 = "addAssetPathNative"
            java.lang.Object[] r10 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L66
            r10[r4] = r2     // Catch: java.lang.Throwable -> L66
            java.lang.Boolean r11 = java.lang.Boolean.valueOf(r19)     // Catch: java.lang.Throwable -> L66
            r10[r9] = r11     // Catch: java.lang.Throwable -> L66
            java.lang.Class[] r11 = new java.lang.Class[r8]     // Catch: java.lang.Throwable -> L66
            java.lang.Class<java.lang.String> r12 = java.lang.String.class
            r11[r4] = r12     // Catch: java.lang.Throwable -> L66
            java.lang.Class r12 = java.lang.Boolean.TYPE     // Catch: java.lang.Throwable -> L66
            r11[r9] = r12     // Catch: java.lang.Throwable -> L66
            java.lang.Object r7 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r1, r7, r10, r11)     // Catch: java.lang.Throwable -> L66
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Throwable -> L66
            int r7 = r7.intValue()     // Catch: java.lang.Throwable -> L66
        L61:
            if (r7 != 0) goto L69
            int r6 = r6 + 1
            goto Lf
        L66:
            r0 = move-exception
            goto L117
        L69:
            if (r7 != 0) goto L89
            java.lang.String r4 = "Zeus/load_pangle"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L66
            java.lang.String r8 = "AssetManagerProcessor invoke AssetManager.appendAssetPathSafely() failed, cookie = "
            r6.<init>(r8)     // Catch: java.lang.Throwable -> L66
            r6.append(r7)     // Catch: java.lang.Throwable -> L66
            java.lang.String r7 = " "
            r6.append(r7)     // Catch: java.lang.Throwable -> L66
            r6.append(r2)     // Catch: java.lang.Throwable -> L66
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L66
            com.bytedance.pangle.log.ZeusLogger.w(r4, r6)     // Catch: java.lang.Throwable -> L66
            monitor-exit(r17)     // Catch: java.lang.Throwable -> L66
            goto L11e
        L89:
            java.lang.String r6 = "mStringBlocks"
            java.lang.Object r6 = com.bytedance.pangle.util.FieldUtils.readField(r1, r6)     // Catch: java.lang.Throwable -> L66
            if (r6 == 0) goto L96
            int r7 = java.lang.reflect.Array.getLength(r6)     // Catch: java.lang.Throwable -> L66
            goto L97
        L96:
            r7 = r4
        L97:
            java.lang.String r10 = "getStringBlockCount"
            java.lang.Object[] r11 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L66
            java.lang.Object r10 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r1, r10, r11)     // Catch: java.lang.Throwable -> L66
            java.lang.Integer r10 = (java.lang.Integer) r10     // Catch: java.lang.Throwable -> L66
            int r10 = r10.intValue()     // Catch: java.lang.Throwable -> L66
            java.lang.Class r11 = r6.getClass()     // Catch: java.lang.Throwable -> L66
            java.lang.Class r11 = r11.getComponentType()     // Catch: java.lang.Throwable -> L66
            java.lang.Object r11 = java.lang.reflect.Array.newInstance(r11, r10)     // Catch: java.lang.Throwable -> L66
            r12 = r4
        Lb2:
            if (r12 >= r10) goto L101
            if (r12 >= r7) goto Lbe
            java.lang.Object r13 = java.lang.reflect.Array.get(r6, r12)     // Catch: java.lang.Throwable -> L66
            java.lang.reflect.Array.set(r11, r12, r13)     // Catch: java.lang.Throwable -> L66
            goto Lfd
        Lbe:
            java.lang.String r13 = "getNativeStringBlock"
            java.lang.Object[] r14 = new java.lang.Object[r9]     // Catch: java.lang.Throwable -> L66
            java.lang.Integer r15 = java.lang.Integer.valueOf(r12)     // Catch: java.lang.Throwable -> L66
            r14[r4] = r15     // Catch: java.lang.Throwable -> L66
            java.lang.Class[] r15 = new java.lang.Class[r9]     // Catch: java.lang.Throwable -> L66
            java.lang.Class r16 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L66
            r15[r4] = r16     // Catch: java.lang.Throwable -> L66
            java.lang.Object r13 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r1, r13, r14, r15)     // Catch: java.lang.Throwable -> L66
            java.lang.Long r13 = (java.lang.Long) r13     // Catch: java.lang.Throwable -> L66
            long r13 = r13.longValue()     // Catch: java.lang.Throwable -> L66
            java.lang.Class r15 = r6.getClass()     // Catch: java.lang.Throwable -> L66
            java.lang.Class r15 = r15.getComponentType()     // Catch: java.lang.Throwable -> L66
            java.lang.Object[] r3 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L66
            java.lang.Long r13 = java.lang.Long.valueOf(r13)     // Catch: java.lang.Throwable -> L66
            r3[r4] = r13     // Catch: java.lang.Throwable -> L66
            java.lang.Boolean r13 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L66
            r3[r9] = r13     // Catch: java.lang.Throwable -> L66
            java.lang.Class[] r13 = new java.lang.Class[r8]     // Catch: java.lang.Throwable -> L66
            java.lang.Class r14 = java.lang.Long.TYPE     // Catch: java.lang.Throwable -> L66
            r13[r4] = r14     // Catch: java.lang.Throwable -> L66
            java.lang.Class r14 = java.lang.Boolean.TYPE     // Catch: java.lang.Throwable -> L66
            r13[r9] = r14     // Catch: java.lang.Throwable -> L66
            java.lang.Object r3 = com.bytedance.pangle.util.MethodUtils.invokeConstructor(r15, r3, r13)     // Catch: java.lang.Throwable -> L66
            java.lang.reflect.Array.set(r11, r12, r3)     // Catch: java.lang.Throwable -> L66
        Lfd:
            int r12 = r12 + 1
            r3 = 3
            goto Lb2
        L101:
            java.lang.String r3 = "mStringBlocks"
            com.bytedance.pangle.util.FieldUtils.writeField(r1, r3, r11)     // Catch: java.lang.Throwable -> L66
            monitor-exit(r17)     // Catch: java.lang.Throwable -> L66
            java.lang.String r3 = "Zeus/load_pangle"
            java.lang.String r4 = "AssetManagerProcessor appendAssetPathSafely success, sourceDir = "
            java.lang.String r6 = java.lang.String.valueOf(r18)     // Catch: java.lang.Throwable -> L119
            java.lang.String r4 = r4.concat(r6)     // Catch: java.lang.Throwable -> L119
            com.bytedance.pangle.log.ZeusLogger.d(r3, r4)     // Catch: java.lang.Throwable -> L119
            goto L11e
        L117:
            monitor-exit(r17)     // Catch: java.lang.Throwable -> L66
            throw r0     // Catch: java.lang.Throwable -> L119
        L119:
            r0 = move-exception
            r4 = r5
            r3 = 3
            goto L7
        L11e:
            if (r0 == 0) goto L14c
            java.lang.String r3 = android.os.Build.BRAND
            java.lang.String r3 = r3.toLowerCase()
            java.lang.String r4 = "samsung"
            boolean r3 = android.text.TextUtils.equals(r3, r4)
            if (r3 != 0) goto L13d
            java.lang.String r3 = java.lang.String.valueOf(r18)
            java.lang.String r4 = "AssetManagerProcessor appendAssetPathSafely failed, sourceDir = "
            java.lang.String r3 = r4.concat(r3)
            java.lang.String r4 = "Zeus/load_pangle"
            com.bytedance.pangle.log.ZeusLogger.errReport(r4, r3, r0)
        L13d:
            java.lang.String r2 = java.lang.String.valueOf(r18)
            java.lang.String r3 = "AssetManagerProcessor appendAssetPathSafely failed, sourceDir = "
            java.lang.String r2 = r3.concat(r2)
            java.lang.String r3 = "Zeus/load_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r3, r2, r0)
        L14c:
            return r1
    }

    public final android.content.res.AssetManager a(android.content.res.AssetManager r3, java.lang.String r4, boolean r5) {
            r2 = this;
            java.lang.String r0 = ".frro"
            boolean r0 = r4.endsWith(r0)
            if (r0 == 0) goto L18
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r5 = "AssetManagerProcessor updateAssetManager skip frro. "
            java.lang.String r4 = r5.concat(r4)
            java.lang.String r5 = "Zeus/load_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r5, r4)
            return r3
        L18:
            boolean r0 = com.bytedance.pangle.util.i.a()
            if (r0 == 0) goto L38
            boolean r0 = com.bytedance.pangle.util.i.d()
            if (r0 == 0) goto L33
            android.content.res.AssetManager r0 = c(r3, r4, r5)
            boolean r1 = com.bytedance.pangle.util.j.a(r0, r4)
            if (r1 != 0) goto L3c
            android.content.res.AssetManager r0 = b(r3, r4, r5)
            goto L3c
        L33:
            android.content.res.AssetManager r0 = b(r3, r4, r5)
            goto L3c
        L38:
            android.content.res.AssetManager r0 = r2.a(r3, r4)
        L3c:
            java.util.LinkedHashMap<java.lang.String, java.lang.Integer> r3 = r2.b
            monitor-enter(r3)
            java.util.LinkedHashMap<java.lang.String, java.lang.Integer> r5 = r2.b     // Catch: java.lang.Throwable -> L4b
            r1 = 0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L4b
            r5.put(r4, r1)     // Catch: java.lang.Throwable -> L4b
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L4b
            return r0
        L4b:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L4b
            throw r4
    }
}
