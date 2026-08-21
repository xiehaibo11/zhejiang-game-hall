package com.bytedance.pangle.provider;

public class ContentProviderManager {
    public static final java.lang.String PLUGIN_PKG_NAME = "plugin_pkg_name";
    public static final java.lang.String PLUGIN_PROCESS_NAME = "process_name";
    public static final java.lang.String PROVIDER_PARAM_FEILD = "provider_params";
    public static final java.lang.String PROVIDER_PLUGIN_AUTHORITY = "provider_params";
    public static final java.lang.String PROVIDER_PROXY_URI = "provider_proxy_uri";
    public static final java.lang.String PROVIDER_URI = "uri";
    private static com.bytedance.pangle.provider.ContentProviderManager sInstance;
    private final java.util.Map<java.lang.String, java.lang.String> mAuthorityProcessNameMap;
    private final java.util.Map<com.bytedance.pangle.provider.ContentProviderManager.b, com.bytedance.pangle.provider.ContentProviderManager.a> mContentProviderMap;
    private final java.util.Map<java.lang.String, com.bytedance.pangle.provider.ContentProviderManager.c> mSystemProviderInfoMap;

    public static final class a {
        public final com.bytedance.pangle.provider.ContentProviderManager.b a;
        public final android.content.pm.ProviderInfo b;
        public final com.bytedance.pangle.provider.PluginContentProvider c;

        public a(com.bytedance.pangle.provider.ContentProviderManager.b r1, android.content.pm.ProviderInfo r2, com.bytedance.pangle.provider.PluginContentProvider r3) {
                r0 = this;
                r0.<init>()
                r0.b = r2
                r0.a = r1
                r0.c = r3
                return
        }
    }

    public static class b {
        public final java.lang.String a;
        public final java.lang.String b;
        public final java.lang.String c;

        public b(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
                r0 = this;
                r0.<init>()
                r0.a = r2
                r0.b = r3
                r0.c = r1
                return
        }

        public boolean equals(java.lang.Object r4) {
                r3 = this;
                boolean r0 = r4 instanceof com.bytedance.pangle.provider.ContentProviderManager.b
                r1 = 0
                if (r0 == 0) goto L27
                com.bytedance.pangle.provider.ContentProviderManager$b r4 = (com.bytedance.pangle.provider.ContentProviderManager.b) r4
                java.lang.String r0 = r3.c
                java.lang.String r2 = r4.c
                boolean r0 = android.text.TextUtils.equals(r0, r2)
                if (r0 == 0) goto L27
                java.lang.String r0 = r3.b
                java.lang.String r2 = r4.b
                boolean r0 = android.text.TextUtils.equals(r0, r2)
                if (r0 == 0) goto L27
                java.lang.String r0 = r3.a
                java.lang.String r4 = r4.a
                boolean r4 = android.text.TextUtils.equals(r0, r4)
                if (r4 == 0) goto L27
                r4 = 1
                return r4
            L27:
                return r1
        }

        public int hashCode() {
                r3 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 < r1) goto L1d
                r0 = 3
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r1 = 0
                java.lang.String r2 = r3.a
                r0[r1] = r2
                r1 = 1
                java.lang.String r2 = r3.b
                r0[r1] = r2
                r1 = 2
                java.lang.String r2 = r3.c
                r0[r1] = r2
                int r0 = java.util.Objects.hash(r0)
                return r0
            L1d:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = r3.a
                r0.append(r1)
                java.lang.String r1 = r3.b
                r0.append(r1)
                java.lang.String r1 = r3.a
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                int r0 = r0.hashCode()
                return r0
        }
    }

    protected static final class c extends com.bytedance.pangle.provider.ContentProviderManager.b {
        public final android.content.pm.ProviderInfo d;

        public c(java.lang.String r2, java.lang.String r3, android.content.pm.ProviderInfo r4) {
                r1 = this;
                java.lang.String r0 = r4.authority
                r1.<init>(r2, r3, r0)
                r1.d = r4
                return
        }
    }

    static {
            return
    }

    private ContentProviderManager() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mContentProviderMap = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mAuthorityProcessNameMap = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mSystemProviderInfoMap = r0
            return
    }

    public static com.bytedance.pangle.provider.ContentProviderManager getInstance() {
            com.bytedance.pangle.provider.ContentProviderManager r0 = com.bytedance.pangle.provider.ContentProviderManager.sInstance
            if (r0 != 0) goto L17
            java.lang.Class<com.bytedance.pangle.provider.ContentProviderManager> r0 = com.bytedance.pangle.provider.ContentProviderManager.class
            monitor-enter(r0)
            com.bytedance.pangle.provider.ContentProviderManager r1 = com.bytedance.pangle.provider.ContentProviderManager.sInstance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bytedance.pangle.provider.ContentProviderManager r1 = new com.bytedance.pangle.provider.ContentProviderManager     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bytedance.pangle.provider.ContentProviderManager.sInstance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bytedance.pangle.provider.ContentProviderManager r0 = com.bytedance.pangle.provider.ContentProviderManager.sInstance
            return r0
    }

    private void installProvider(java.lang.String r4, android.content.pm.ProviderInfo r5, com.bytedance.pangle.plugin.Plugin r6) {
            r3 = this;
            java.lang.String r0 = "Zeus/provider_pangle"
            if (r5 != 0) goto L1d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "ProviderInfo is null !! can not install plugin provider ， plugin-mPkgName：【"
            r4.<init>(r5)
            java.lang.String r5 = r6.mPkgName
            r4.append(r5)
            java.lang.String r5 = "】"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.bytedance.pangle.log.ZeusLogger.w(r0, r4)
            return
        L1d:
            java.lang.String r1 = r5.processName
            boolean r4 = android.text.TextUtils.equals(r4, r1)
            if (r4 == 0) goto L8c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r1 = "Start install plugin provider [authority:"
            r4.<init>(r1)
            java.lang.String r1 = r5.authority
            r4.append(r1)
            java.lang.String r1 = "] [className:"
            r4.append(r1)
            java.lang.String r1 = r5.name
            r4.append(r1)
            java.lang.String r1 = "]"
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            com.bytedance.pangle.log.ZeusLogger.v(r0, r4)
            com.bytedance.pangle.provider.PluginContentProvider r4 = r3.instantiateProvider(r6, r5)     // Catch: java.lang.Exception -> L85
            if (r4 != 0) goto L4e
            return
        L4e:
            com.bytedance.pangle.wrapper.PluginApplicationWrapper r2 = r6.mHostApplication     // Catch: java.lang.Exception -> L85
            java.lang.String r6 = r6.mPkgName     // Catch: java.lang.Exception -> L85
            android.content.Context r6 = com.bytedance.pangle.transform.ZeusTransformUtils.wrapperContext(r2, r6)     // Catch: java.lang.Exception -> L85
            r4.attachInfo(r6, r5)     // Catch: java.lang.Exception -> L85
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L85
            java.lang.String r2 = "Install plugin provider finish and invoke plugin provider attachInfo(onCreate) method finish [className:"
            r6.<init>(r2)     // Catch: java.lang.Exception -> L85
            java.lang.String r2 = r5.name     // Catch: java.lang.Exception -> L85
            r6.append(r2)     // Catch: java.lang.Exception -> L85
            r6.append(r1)     // Catch: java.lang.Exception -> L85
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L85
            com.bytedance.pangle.log.ZeusLogger.v(r0, r6)     // Catch: java.lang.Exception -> L85
            com.bytedance.pangle.provider.ContentProviderManager$b r6 = new com.bytedance.pangle.provider.ContentProviderManager$b
            java.lang.String r0 = r5.packageName
            java.lang.String r1 = r5.processName
            java.lang.String r2 = r5.authority
            r6.<init>(r0, r1, r2)
            com.bytedance.pangle.provider.ContentProviderManager$a r0 = new com.bytedance.pangle.provider.ContentProviderManager$a
            r0.<init>(r6, r5, r4)
            java.util.Map<com.bytedance.pangle.provider.ContentProviderManager$b, com.bytedance.pangle.provider.ContentProviderManager$a> r4 = r3.mContentProviderMap
            r4.put(r6, r0)
            goto L8c
        L85:
            r4 = move-exception
            java.lang.String r5 = "Instantiating Exception : "
            com.bytedance.pangle.log.ZeusLogger.w(r0, r5, r4)
            return
        L8c:
            java.util.Map<java.lang.String, java.lang.String> r4 = r3.mAuthorityProcessNameMap
            java.lang.String r6 = r5.authority
            java.lang.String r5 = r5.processName
            r4.put(r6, r5)
            return
    }

    private com.bytedance.pangle.provider.PluginContentProvider instantiateProvider(com.bytedance.pangle.plugin.Plugin r3, android.content.pm.ProviderInfo r4) {
            r2 = this;
            com.bytedance.pangle.PluginClassLoader r0 = r3.mClassLoader
            java.lang.String r1 = r4.name
            java.lang.Class r0 = r0.loadClass(r1)
            java.lang.Object r0 = r0.newInstance()
            boolean r1 = r0 instanceof android.support.v4.content.FileProvider
            if (r1 == 0) goto L37
            android.os.Bundle r1 = r4.metaData
            if (r1 == 0) goto L27
            android.content.res.Resources r0 = r3.mResources
            android.os.Bundle r4 = r4.metaData
            java.lang.String r1 = "android.support.FILE_PROVIDER_PATHS"
            int r4 = r4.getInt(r1)
            android.content.res.XmlResourceParser r4 = r0.getXml(r4)
            com.bytedance.pangle.FileProvider.a(r3, r4)
            r3 = 0
            return r3
        L27:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = java.lang.String.valueOf(r0)
            java.lang.String r0 = "Missing android.support.FILE_PROVIDER_PATHS meta-data. provider:"
            java.lang.String r4 = r0.concat(r4)
            r3.<init>(r4)
            throw r3
        L37:
            com.bytedance.pangle.provider.PluginContentProvider r0 = (com.bytedance.pangle.provider.PluginContentProvider) r0
            return r0
    }

    public android.os.Bundle call(android.content.ContentResolver r1, android.net.Uri r2, java.lang.String r3, java.lang.String r4, android.os.Bundle r5, java.lang.String r6) {
            r0 = this;
            android.os.Bundle r1 = com.bytedance.pangle.provider.a.a(r1, r2, r3, r4, r5, r6)
            return r1
    }

    public final android.os.Bundle call(android.content.ContentResolver r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, android.os.Bundle r5, java.lang.String r6) {
            r0 = this;
            android.os.Bundle r1 = com.bytedance.pangle.provider.a.a(r1, r2, r3, r4, r5, r6)
            return r1
    }

    public int delete(android.content.ContentResolver r1, android.net.Uri r2, android.os.Bundle r3, java.lang.String r4) {
            r0 = this;
            int r1 = com.bytedance.pangle.provider.a.a(r1, r2, r3, r4)
            return r1
    }

    public int delete(android.content.ContentResolver r1, android.net.Uri r2, java.lang.String r3, java.lang.String[] r4, java.lang.String r5) {
            r0 = this;
            int r1 = com.bytedance.pangle.provider.a.a(r1, r2, r3, r4, r5)
            return r1
    }

    public java.lang.String getPluginProcessNameByAuthority(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mAuthorityProcessNameMap
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public com.bytedance.pangle.provider.PluginContentProvider getPluginProvider(com.bytedance.pangle.provider.ContentProviderManager.b r2) {
            r1 = this;
            java.util.Map<com.bytedance.pangle.provider.ContentProviderManager$b, com.bytedance.pangle.provider.ContentProviderManager$a> r0 = r1.mContentProviderMap
            java.lang.Object r2 = r0.get(r2)
            com.bytedance.pangle.provider.ContentProviderManager$a r2 = (com.bytedance.pangle.provider.ContentProviderManager.a) r2
            if (r2 != 0) goto Lc
            r2 = 0
            return r2
        Lc:
            com.bytedance.pangle.provider.PluginContentProvider r2 = r2.c
            return r2
    }

    public java.util.Map<java.lang.String, com.bytedance.pangle.provider.ContentProviderManager.c> getSystemProviderInfoMap() {
            r1 = this;
            java.util.Map<java.lang.String, com.bytedance.pangle.provider.ContentProviderManager$c> r0 = r1.mSystemProviderInfoMap
            return r0
    }

    public java.lang.String getType(android.content.ContentResolver r1, android.net.Uri r2, java.lang.String r3) {
            r0 = this;
            java.lang.String r1 = com.bytedance.pangle.provider.a.a(r1, r2, r3)
            return r1
    }

    public void initSystemContentProviderInfo() {
            r12 = this;
            java.lang.String r0 = "]"
            java.lang.String r1 = "],[authority:"
            java.lang.String r2 = "],[processName="
            java.lang.String r3 = ".pangle.provider.proxy."
            java.lang.String r4 = "Zeus/provider_pangle"
            android.app.Application r5 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> Ldd
            android.content.pm.PackageManager r5 = r5.getPackageManager()     // Catch: java.lang.Throwable -> Ldd
            android.app.Application r6 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r6 = r6.getPackageName()     // Catch: java.lang.Throwable -> Ldd
            r7 = 8
            android.content.pm.PackageInfo r5 = r5.getPackageInfo(r6, r7)     // Catch: java.lang.Throwable -> Ldd
            android.content.pm.ProviderInfo[] r5 = r5.providers     // Catch: java.lang.Throwable -> Ldd
            if (r5 == 0) goto Ldc
            int r6 = r5.length     // Catch: java.lang.Throwable -> Ldd
            if (r6 == 0) goto Ldc
            int r6 = r5.length     // Catch: java.lang.Throwable -> Ldd
            r7 = 0
        L29:
            if (r7 >= r6) goto Ldc
            r8 = r5[r7]     // Catch: java.lang.Throwable -> Ldd
            if (r8 == 0) goto Ld8
            java.lang.String r9 = r8.authority     // Catch: java.lang.Throwable -> Ldd
            if (r9 == 0) goto Ld8
            java.lang.String r9 = r8.authority     // Catch: java.lang.Throwable -> Ldd
            boolean r9 = r9.contains(r3)     // Catch: java.lang.Throwable -> Ldd
            if (r9 == 0) goto Ld8
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.String r10 = "Need to init system provider info start [packageNam:="
            r9.<init>(r10)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.String r10 = r8.packageName     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r9.append(r10)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r9.append(r2)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.String r10 = r8.processName     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r9.append(r10)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r9.append(r1)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.String r10 = r8.authority     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r9.append(r10)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r9.append(r0)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            com.bytedance.pangle.log.ZeusLogger.d(r4, r9)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.String r9 = r8.authority     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r10.<init>()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            android.app.Application r11 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.String r11 = r11.getPackageName()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r10.append(r11)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r10.append(r3)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            boolean r9 = r9.contains(r10)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            if (r9 == 0) goto Ld8
            java.lang.String r9 = r8.processName     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.String r9 = com.bytedance.pangle.d.d.a(r9)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            com.bytedance.pangle.provider.ContentProviderManager$c r10 = new com.bytedance.pangle.provider.ContentProviderManager$c     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            android.app.Application r11 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.String r11 = r11.getPackageName()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r10.<init>(r11, r9, r8)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.util.Map<java.lang.String, com.bytedance.pangle.provider.ContentProviderManager$c> r11 = r12.mSystemProviderInfoMap     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r11.put(r9, r10)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.String r10 = "Init system provider info finish [packageNam:="
            r9.<init>(r10)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.String r10 = r8.packageName     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r9.append(r10)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r9.append(r2)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.String r10 = r8.processName     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r9.append(r10)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r9.append(r1)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.String r10 = r8.authority     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r9.append(r10)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            r9.append(r0)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            com.bytedance.pangle.log.ZeusLogger.d(r4, r9)     // Catch: java.lang.Exception -> Lbf java.lang.Throwable -> Ldd
            goto Ld8
        Lbf:
            r9 = move-exception
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r11 = "Init system contentProviderInfo [authority:"
            r10.<init>(r11)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r8 = r8.authority     // Catch: java.lang.Throwable -> Ldd
            r10.append(r8)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r8 = "],exception："
            r10.append(r8)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r8 = r10.toString()     // Catch: java.lang.Throwable -> Ldd
            com.bytedance.pangle.log.ZeusLogger.errReport(r4, r8, r9)     // Catch: java.lang.Throwable -> Ldd
        Ld8:
            int r7 = r7 + 1
            goto L29
        Ldc:
            return
        Ldd:
            r0 = move-exception
            java.lang.String r1 = "init System ContentProviderInfo exception："
            com.bytedance.pangle.log.ZeusLogger.errReport(r4, r1, r0)
            return
    }

    public android.net.Uri insert(android.content.ContentResolver r1, android.net.Uri r2, android.content.ContentValues r3, android.os.Bundle r4, java.lang.String r5) {
            r0 = this;
            android.net.Uri r1 = com.bytedance.pangle.provider.a.a(r1, r2, r3, r4, r5)
            return r1
    }

    public android.net.Uri insert(android.content.ContentResolver r1, android.net.Uri r2, android.content.ContentValues r3, java.lang.String r4) {
            r0 = this;
            android.net.Uri r1 = com.bytedance.pangle.provider.a.a(r1, r2, r3, r4)
            return r1
    }

    public void installContentProviders(java.util.Collection<android.content.pm.ProviderInfo> r5, com.bytedance.pangle.plugin.Plugin r6) {
            r4 = this;
            if (r5 == 0) goto L59
            int r0 = r5.size()
            if (r0 == 0) goto L59
            if (r6 != 0) goto Lb
            goto L59
        Lb:
            com.bytedance.pangle.Zeus.getAppApplication()
            java.lang.String r0 = com.bytedance.pangle.d.d.a()
            java.lang.String r0 = com.bytedance.pangle.d.d.a(r0)
            java.util.Iterator r5 = r5.iterator()
        L1a:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L59
            java.lang.Object r1 = r5.next()
            android.content.pm.ProviderInfo r1 = (android.content.pm.ProviderInfo) r1
            boolean r2 = com.bytedance.pangle.log.ZeusLogger.isDebug()
            if (r2 == 0) goto L55
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r3 = 128(0x80, float:1.8E-43)
            r2.<init>(r3)
            java.lang.String r3 = "Install plugin provider [authority:"
            r2.append(r3)
            java.lang.String r3 = r1.authority
            r2.append(r3)
            java.lang.String r3 = "] - [className:"
            r2.append(r3)
            java.lang.String r3 = r1.name
            r2.append(r3)
            java.lang.String r3 = "]"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "Zeus/provider_pangle"
            com.bytedance.pangle.log.ZeusLogger.v(r3, r2)
        L55:
            r4.installProvider(r0, r1, r6)
            goto L1a
        L59:
            return
    }

    protected boolean isPluginProvider(android.net.Uri r3) {
            r2 = this;
            r0 = 1
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r3 = r3.getAuthority()
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.mAuthorityProcessNameMap
            java.util.Set r1 = r1.keySet()
            if (r1 == 0) goto L17
            boolean r3 = r1.contains(r3)
            if (r3 == 0) goto L17
            return r0
        L17:
            r3 = 0
            return r3
    }

    public android.database.Cursor query(android.content.ContentResolver r1, android.net.Uri r2, java.lang.String[] r3, android.os.Bundle r4, android.os.CancellationSignal r5, java.lang.String r6) {
            r0 = this;
            android.database.Cursor r1 = com.bytedance.pangle.provider.a.a(r1, r2, r3, r4, r5, r6)
            return r1
    }

    public android.database.Cursor query(android.content.ContentResolver r1, android.net.Uri r2, java.lang.String[] r3, java.lang.String r4, java.lang.String[] r5, java.lang.String r6, android.os.CancellationSignal r7, java.lang.String r8) {
            r0 = this;
            android.database.Cursor r1 = com.bytedance.pangle.provider.a.a(r1, r2, r3, r4, r5, r6, r7, r8)
            return r1
    }

    public android.database.Cursor query(android.content.ContentResolver r1, android.net.Uri r2, java.lang.String[] r3, java.lang.String r4, java.lang.String[] r5, java.lang.String r6, java.lang.String r7) {
            r0 = this;
            android.database.Cursor r1 = com.bytedance.pangle.provider.a.a(r1, r2, r3, r4, r5, r6, r7)
            return r1
    }

    public int update(android.content.ContentResolver r1, android.net.Uri r2, android.content.ContentValues r3, android.os.Bundle r4, java.lang.String r5) {
            r0 = this;
            int r1 = com.bytedance.pangle.provider.a.b(r1, r2, r3, r4, r5)
            return r1
    }

    public int update(android.content.ContentResolver r1, android.net.Uri r2, android.content.ContentValues r3, java.lang.String r4, java.lang.String[] r5, java.lang.String r6) {
            r0 = this;
            int r1 = com.bytedance.pangle.provider.a.a(r1, r2, r3, r4, r5, r6)
            return r1
    }
}
