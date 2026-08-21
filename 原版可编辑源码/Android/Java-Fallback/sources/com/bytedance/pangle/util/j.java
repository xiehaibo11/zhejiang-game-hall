package com.bytedance.pangle.util;

public final class j {
    static volatile java.util.ArrayList<java.lang.String> a;
    private static java.lang.String b;

    static {
            return
    }

    public j() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.List<java.lang.String> a() {
            java.lang.Class<android.content.res.AssetManager> r0 = android.content.res.AssetManager.class
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Exception -> L9
            android.content.res.AssetManager r0 = (android.content.res.AssetManager) r0     // Catch: java.lang.Exception -> L9
            goto L12
        L9:
            r0 = move-exception
            java.lang.String r1 = "Zeus/resources_pangle"
            java.lang.String r2 = "Execute 'AssetManager.class.newInstance()' failed. "
            com.bytedance.pangle.log.ZeusLogger.errReport(r1, r2, r0)
            r0 = 0
        L12:
            java.util.List r0 = a(r0)
            return r0
    }

    public static java.util.List<java.lang.String> a(android.content.res.AssetManager r7) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r7 != 0) goto L8
            return r0
        L8:
            boolean r1 = com.bytedance.pangle.util.i.i()     // Catch: java.lang.Throwable -> L66
            r2 = 0
            if (r1 == 0) goto L36
            java.lang.String r1 = "getApkAssets"
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L66
            java.lang.Object r7 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r7, r1, r3)     // Catch: java.lang.Throwable -> L66
            java.lang.Object[] r7 = (java.lang.Object[]) r7     // Catch: java.lang.Throwable -> L66
            java.lang.Object[] r7 = (java.lang.Object[]) r7     // Catch: java.lang.Throwable -> L66
            if (r7 == 0) goto L6e
            int r1 = r7.length     // Catch: java.lang.Throwable -> L66
            if (r1 <= 0) goto L6e
            int r1 = r7.length     // Catch: java.lang.Throwable -> L66
            r3 = r2
        L22:
            if (r3 >= r1) goto L6e
            r4 = r7[r3]     // Catch: java.lang.Throwable -> L66
            java.lang.String r5 = "getAssetPath"
            java.lang.Object[] r6 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L66
            java.lang.Object r4 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r4, r5, r6)     // Catch: java.lang.Throwable -> L66
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L66
            r0.add(r4)     // Catch: java.lang.Throwable -> L66
            int r3 = r3 + 1
            goto L22
        L36:
            java.lang.String r1 = "getStringBlockCount"
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L66
            java.lang.Object r1 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r7, r1, r3)     // Catch: java.lang.Throwable -> L66
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Throwable -> L66
            int r1 = r1.intValue()     // Catch: java.lang.Throwable -> L66
            r3 = r2
        L45:
            if (r3 >= r1) goto L6e
            java.lang.String r4 = "getCookieName"
            r5 = 1
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.IndexOutOfBoundsException -> L63 java.lang.Throwable -> L66
            int r6 = r3 + 1
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.IndexOutOfBoundsException -> L63 java.lang.Throwable -> L66
            r5[r2] = r6     // Catch: java.lang.IndexOutOfBoundsException -> L63 java.lang.Throwable -> L66
            java.lang.Object r4 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r7, r4, r5)     // Catch: java.lang.IndexOutOfBoundsException -> L63 java.lang.Throwable -> L66
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.IndexOutOfBoundsException -> L63 java.lang.Throwable -> L66
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.IndexOutOfBoundsException -> L63 java.lang.Throwable -> L66
            if (r5 != 0) goto L63
            r0.add(r4)     // Catch: java.lang.IndexOutOfBoundsException -> L63 java.lang.Throwable -> L66
        L63:
            int r3 = r3 + 1
            goto L45
        L66:
            r7 = move-exception
            java.lang.String r1 = "Zeus/resources_pangle"
            java.lang.String r2 = "ResUtils GetAssetsPaths error. "
            com.bytedance.pangle.log.ZeusLogger.errReport(r1, r2, r7)
        L6e:
            return r0
    }

    public static boolean a(android.content.res.AssetManager r7, java.lang.String r8) {
            r0 = 0
            boolean r1 = com.bytedance.pangle.util.i.i()     // Catch: java.lang.Throwable -> L5d
            r2 = 1
            if (r1 == 0) goto L33
            java.lang.String r1 = "getApkAssets"
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L5d
            java.lang.Object r7 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r7, r1, r3)     // Catch: java.lang.Throwable -> L5d
            java.lang.Object[] r7 = (java.lang.Object[]) r7     // Catch: java.lang.Throwable -> L5d
            java.lang.Object[] r7 = (java.lang.Object[]) r7     // Catch: java.lang.Throwable -> L5d
            if (r7 == 0) goto L65
            int r1 = r7.length     // Catch: java.lang.Throwable -> L5d
            if (r1 <= 0) goto L65
            int r1 = r7.length     // Catch: java.lang.Throwable -> L5d
            r3 = r0
        L1b:
            if (r3 >= r1) goto L65
            r4 = r7[r3]     // Catch: java.lang.Throwable -> L5d
            java.lang.String r5 = "getAssetPath"
            java.lang.Object[] r6 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L5d
            java.lang.Object r4 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r4, r5, r6)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L5d
            boolean r4 = android.text.TextUtils.equals(r4, r8)     // Catch: java.lang.Throwable -> L5d
            if (r4 == 0) goto L30
            return r2
        L30:
            int r3 = r3 + 1
            goto L1b
        L33:
            java.lang.String r1 = "getStringBlockCount"
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L5d
            java.lang.Object r1 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r7, r1, r3)     // Catch: java.lang.Throwable -> L5d
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Throwable -> L5d
            int r1 = r1.intValue()     // Catch: java.lang.Throwable -> L5d
            r3 = r0
        L42:
            if (r3 >= r1) goto L65
            java.lang.String r4 = "getCookieName"
            java.lang.Object[] r5 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L5d
            int r3 = r3 + 1
            java.lang.Integer r6 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L5d
            r5[r0] = r6     // Catch: java.lang.Throwable -> L5d
            java.lang.Object r4 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r7, r4, r5)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L5d
            boolean r4 = android.text.TextUtils.equals(r4, r8)     // Catch: java.lang.Throwable -> L5d
            if (r4 == 0) goto L42
            return r2
        L5d:
            r7 = move-exception
            java.lang.String r8 = "Zeus/resources_pangle"
            java.lang.String r1 = "containsPath error. "
            com.bytedance.pangle.log.ZeusLogger.errReport(r8, r1, r7)
        L65:
            return r0
    }

    private static java.lang.String[] a(android.content.pm.ApplicationInfo r6) {
            r0 = 0
            java.lang.Class<android.content.pm.ApplicationInfo> r1 = android.content.pm.ApplicationInfo.class
            java.lang.String r2 = "resourceDirs"
            java.lang.reflect.Field r1 = com.bytedance.pangle.b.b.a.a(r1, r2)     // Catch: java.lang.Throwable -> L12
            java.lang.Object r1 = r1.get(r6)     // Catch: java.lang.Throwable -> L12
            java.lang.String[] r1 = (java.lang.String[]) r1     // Catch: java.lang.Throwable -> L12
            java.lang.String[] r1 = (java.lang.String[]) r1     // Catch: java.lang.Throwable -> L12
            goto L1c
        L12:
            r1 = move-exception
            java.lang.String r2 = "Zeus/load_pangle"
            java.lang.String r3 = "get resourceDirs failed."
            com.bytedance.pangle.log.ZeusLogger.errReport(r2, r3, r1)
            java.lang.String[] r1 = new java.lang.String[r0]
        L1c:
            r2 = 3
            java.lang.String[][] r3 = new java.lang.String[r2][]
            java.lang.String[] r4 = r6.splitSourceDirs
            r3[r0] = r4
            java.lang.String[] r4 = r6.sharedLibraryFiles
            r5 = 1
            r3[r5] = r4
            r4 = 2
            r3[r4] = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r4 = 10
            r1.<init>(r4)
            java.lang.String r4 = r6.sourceDir
            if (r4 == 0) goto L3b
            java.lang.String r6 = r6.sourceDir
            r1.add(r6)
        L3b:
            r6 = r0
        L3c:
            if (r6 >= r2) goto L4c
            r4 = r3[r6]
            if (r4 == 0) goto L49
            java.util.List r4 = java.util.Arrays.asList(r4)
            r1.addAll(r4)
        L49:
            int r6 = r6 + 1
            goto L3c
        L4c:
            java.lang.String[] r6 = new java.lang.String[r0]
            java.lang.Object[] r6 = r1.toArray(r6)
            java.lang.String[] r6 = (java.lang.String[]) r6
            return r6
    }

    public static java.lang.String b(android.content.res.AssetManager r3) {
            java.util.List r3 = a(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "["
            r0.<init>(r1)
            int r1 = r3.size()
            if (r1 <= 0) goto L35
            java.util.Iterator r3 = r3.iterator()
        L15:
            boolean r1 = r3.hasNext()
            java.lang.String r2 = " , "
            if (r1 == 0) goto L2a
            java.lang.Object r1 = r3.next()
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            r0.append(r2)
            goto L15
        L2a:
            int r3 = r0.lastIndexOf(r2)
            int r1 = r0.length()
            r0.delete(r3, r1)
        L35:
            java.lang.String r3 = "]"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static synchronized java.util.List<java.lang.String> b() {
            java.lang.Class<com.bytedance.pangle.util.j> r0 = com.bytedance.pangle.util.j.class
            monitor-enter(r0)
            java.util.ArrayList<java.lang.String> r1 = com.bytedance.pangle.util.j.a     // Catch: java.lang.Throwable -> La5
            if (r1 != 0) goto La1
            monitor-enter(r0)     // Catch: java.lang.Throwable -> La5
            java.util.ArrayList<java.lang.String> r1 = com.bytedance.pangle.util.j.a     // Catch: java.lang.Throwable -> L9e
            if (r1 != 0) goto L9c
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L9e
            r1.<init>()     // Catch: java.lang.Throwable -> L9e
            com.bytedance.pangle.util.j.a = r1     // Catch: java.lang.Throwable -> L9e
            boolean r1 = com.bytedance.pangle.util.i.c()     // Catch: java.lang.Throwable -> L9e
            r2 = 0
            if (r1 == 0) goto L4d
            android.app.Application r1 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L9e
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L9e
            java.lang.String r3 = "android:string/config_webViewPackageName"
            java.lang.String r4 = "string"
            java.lang.String r5 = "android"
            int r3 = r1.getIdentifier(r3, r4, r5)     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L9e
            java.util.ArrayList<java.lang.String> r4 = com.bytedance.pangle.util.j.a     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L9e
            android.app.Application r5 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L9e
            java.lang.String r1 = r1.getString(r3)     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L9e
            android.content.Context r1 = r5.createPackageContext(r1, r2)     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L9e
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L9e
            java.lang.String r1 = r1.sourceDir     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L9e
            r4.add(r1)     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L9e
            goto L9c
        L44:
            r1 = move-exception
            java.lang.String r2 = "Zeus/load_pangle"
            java.lang.String r3 = "getWebViewPaths1 failed."
            com.bytedance.pangle.log.ZeusLogger.w(r2, r3, r1)     // Catch: java.lang.Throwable -> L9e
            goto L9c
        L4d:
            boolean r1 = com.bytedance.pangle.util.i.g()     // Catch: java.lang.Throwable -> L9e
            if (r1 == 0) goto L9c
            java.lang.String r1 = "android.webkit.WebViewFactory"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            java.lang.String r3 = "getWebViewContextAndSetProvider"
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            java.lang.Object r1 = com.bytedance.pangle.util.MethodUtils.invokeStaticMethod(r1, r3, r4)     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            r4 = 29
            if (r3 >= r4) goto L71
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            r4 = 28
            if (r3 != r4) goto L72
            int r3 = android.os.Build.VERSION.PREVIEW_SDK_INT     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            if (r3 <= 0) goto L72
        L71:
            r2 = 1
        L72:
            if (r2 == 0) goto L84
            java.util.ArrayList<java.lang.String> r2 = com.bytedance.pangle.util.j.a     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            android.content.Context r1 = (android.content.Context) r1     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            java.lang.String[] r1 = a(r1)     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            java.util.Collections.addAll(r2, r1)     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            goto L9c
        L84:
            android.content.Context r1 = (android.content.Context) r1     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            java.lang.String r1 = r1.sourceDir     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            java.util.ArrayList<java.lang.String> r2 = com.bytedance.pangle.util.j.a     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            r2.add(r1)     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L9e
            goto L9c
        L94:
            r1 = move-exception
            java.lang.String r2 = "Zeus/load_pangle"
            java.lang.String r3 = "getWebViewPaths2 failed."
            com.bytedance.pangle.log.ZeusLogger.w(r2, r3, r1)     // Catch: java.lang.Throwable -> L9e
        L9c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9e
            goto La1
        L9e:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9e
            throw r1     // Catch: java.lang.Throwable -> La5
        La1:
            java.util.ArrayList<java.lang.String> r1 = com.bytedance.pangle.util.j.a     // Catch: java.lang.Throwable -> La5
            monitor-exit(r0)
            return r1
        La5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}
