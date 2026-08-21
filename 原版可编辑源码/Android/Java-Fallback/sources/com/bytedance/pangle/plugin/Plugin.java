package com.bytedance.pangle.plugin;

public class Plugin {
    public static final int LIFE_INSTALLED = 2;
    public static final int LIFE_LOADED = 3;
    public static final int LIFE_PENDING = 1;
    private static final java.lang.String TAG = "Plugin";
    final java.lang.Object initializeLock;
    final java.lang.Object installLock;
    private int mApiVersionCode;
    public final java.lang.String mAppKey;
    public final java.lang.String mAppSecretKey;
    public com.bytedance.pangle.ZeusApplication mApplication;
    public com.bytedance.pangle.PluginClassLoader mClassLoader;
    public com.bytedance.pangle.wrapper.PluginApplicationWrapper mHostApplication;
    public android.content.pm.ApplicationInfo mHostApplicationInfoHookSomeField;
    private volatile boolean mInitialized;
    private java.lang.String mInternalPath;
    private int mInternalVersionCode;
    public boolean mIsSupportLibIso;
    private volatile int mLifeCycle;
    public int mMaxVersionCode;
    public int mMinVersionCode;
    public final boolean mOpenLoadClassOpt;
    private java.lang.String mPackageDir;
    public java.lang.String mPkgName;
    public final boolean mReInstallInternalPluginByMd5;
    public android.content.res.Resources mResources;
    public final java.util.List<java.lang.String> mSharedHostSos;
    public java.lang.String mSignature;
    public final boolean mUnInstallPluginWhenHostChange;
    public final boolean mUseMemoryForActivityIntent;
    private int mVersionCode;
    public java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> pluginActivities;
    public java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> pluginProvider;
    public java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> pluginReceiver;
    public java.util.HashMap<java.lang.String, android.content.pm.ServiceInfo> pluginServices;
    public java.lang.String response;





    public Plugin(org.json.JSONObject r5) {
            r4 = this;
            r4.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r4.pluginActivities = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r4.pluginServices = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r4.pluginReceiver = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r4.pluginProvider = r0
            r0 = -1
            r4.mInternalVersionCode = r0
            r1 = 2147483647(0x7fffffff, float:NaN)
            r4.mMaxVersionCode = r1
            r2 = 1
            r4.mLifeCycle = r2
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r4.mSharedHostSos = r2
            java.lang.Object r2 = new java.lang.Object
            r2.<init>()
            r4.installLock = r2
            java.lang.Object r2 = new java.lang.Object
            r2.<init>()
            r4.initializeLock = r2
            java.lang.String r2 = "packageName"
            java.lang.String r2 = r5.getString(r2)
            r4.mPkgName = r2
            r2 = 0
            java.lang.String r3 = "minPluginVersion"
            int r3 = r5.optInt(r3, r2)
            r4.mMinVersionCode = r3
            java.lang.String r3 = "maxPluginVersion"
            int r1 = r5.optInt(r3, r1)
            r4.mMaxVersionCode = r1
            java.lang.String r1 = "apiVersionCode"
            int r1 = r5.getInt(r1)
            r4.mApiVersionCode = r1
            com.bytedance.pangle.GlobalParam r1 = com.bytedance.pangle.GlobalParam.getInstance()
            java.lang.String r3 = r4.mPkgName
            java.lang.String r1 = r1.getSignature(r3)
            r4.mSignature = r1
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r3 = ""
            if (r1 == 0) goto L7c
            java.lang.String r1 = "signature"
            java.lang.String r1 = r5.optString(r1, r3)
            r4.mSignature = r1
        L7c:
            java.lang.String r1 = "isSupportLibIsolate"
            boolean r1 = r5.optBoolean(r1, r2)
            r4.mIsSupportLibIso = r1
            java.lang.String r1 = "internalPath"
            java.lang.String r1 = r5.optString(r1, r3)
            r4.mInternalPath = r1
            java.lang.String r1 = "internalVersionCode"
            int r0 = r5.optInt(r1, r0)
            r4.mInternalVersionCode = r0
            java.lang.String r0 = "appKey"
            java.lang.String r0 = r5.optString(r0, r3)
            r4.mAppKey = r0
            java.lang.String r0 = "appSecretKey"
            java.lang.String r0 = r5.optString(r0, r3)
            r4.mAppSecretKey = r0
            java.lang.String r0 = "loadClassOpt"
            boolean r0 = r5.optBoolean(r0, r2)
            r4.mOpenLoadClassOpt = r0
            java.lang.String r0 = "unInstallPluginWhenHostChange"
            boolean r0 = r5.optBoolean(r0, r2)
            r4.mUnInstallPluginWhenHostChange = r0
            java.lang.String r0 = "useMemoryForActivityIntent"
            boolean r0 = r5.optBoolean(r0, r2)
            r4.mUseMemoryForActivityIntent = r0
            java.lang.String r0 = "reInstallInternalPluginByMd5"
            boolean r0 = r5.optBoolean(r0, r2)
            r4.mReInstallInternalPluginByMd5 = r0
            java.lang.String r0 = "sharedHostSo"
            org.json.JSONArray r5 = r5.optJSONArray(r0)
            if (r5 == 0) goto Le0
        Lcc:
            int r0 = r5.length()
            if (r2 >= r0) goto Le0
            java.util.List<java.lang.String> r0 = r4.mSharedHostSos
            java.lang.Object r1 = r5.get(r2)
            java.lang.String r1 = (java.lang.String) r1
            r0.add(r1)
            int r2 = r2 + 1
            goto Lcc
        Le0:
            r4.setupInternalPlugin()
            return
    }

    static java.lang.String access$000(com.bytedance.pangle.plugin.Plugin r0) {
            java.lang.String r0 = r0.mInternalPath
            return r0
    }

    private boolean checkValid(java.io.File r8, java.lang.String r9, int r10) {
            r7 = this;
            java.lang.String r0 = r7.mPkgName
            boolean r0 = android.text.TextUtils.equals(r0, r9)
            java.lang.String r1 = "Plugin checkValid "
            java.lang.String r2 = "Zeus/install_pangle"
            r3 = 0
            if (r0 != 0) goto L22
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>(r1)
            r8.append(r9)
            java.lang.String r9 = " package name not match !!!"
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            com.bytedance.pangle.log.ZeusLogger.w(r2, r8)
            return r3
        L22:
            int r0 = r7.mMinVersionCode
            r4 = 2
            r5 = 1
            if (r10 < r0) goto Ld7
            int r0 = r7.mMaxVersionCode
            if (r10 <= r0) goto L2e
            goto Ld7
        L2e:
            int r0 = r7.mVersionCode
            if (r10 >= r0) goto L61
            boolean r0 = r7.isInstalled()
            if (r0 == 0) goto L61
            java.lang.Object[] r8 = new java.lang.Object[r4]
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)
            r8[r3] = r10
            int r10 = r7.mVersionCode
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)
            r8[r5] = r10
            java.lang.String r10 = " pluginApk ver[%s] lower than installed plugin[%s]."
            java.lang.String r8 = java.lang.String.format(r10, r8)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>(r1)
            r10.append(r9)
            r10.append(r8)
            java.lang.String r8 = r10.toString()
            com.bytedance.pangle.log.ZeusLogger.w(r2, r8)
            return r3
        L61:
            if (r8 == 0) goto Lc2
            boolean r0 = r8.exists()
            if (r0 != 0) goto L6a
            goto Lc2
        L6a:
            int r0 = r7.mVersionCode
            if (r10 != r0) goto La5
            com.bytedance.pangle.util.l r0 = com.bytedance.pangle.util.l.a()
            android.content.SharedPreferences r0 = r0.a
            java.lang.String r4 = java.lang.String.valueOf(r9)
            java.lang.String r6 = "IDENTITY_"
            java.lang.String r4 = r6.concat(r4)
            java.lang.String r6 = ""
            java.lang.String r0 = r0.getString(r4, r6)
            java.lang.String[] r8 = com.bytedance.pangle.util.c.a(r8)
            r8 = r8[r3]
            boolean r8 = r0.equals(r8)
            if (r8 == 0) goto La5
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>(r1)
            r8.append(r9)
            java.lang.String r9 = " pluginApk with the same identity has already installed."
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            com.bytedance.pangle.log.ZeusLogger.w(r2, r8)
            return r3
        La5:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>(r1)
            r8.append(r9)
            java.lang.String r9 = ":"
            r8.append(r9)
            r8.append(r10)
            java.lang.String r9 = " true"
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            com.bytedance.pangle.log.ZeusLogger.i(r2, r8)
            return r5
        Lc2:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>(r1)
            r8.append(r9)
            java.lang.String r9 = " pluginApk not exist."
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            com.bytedance.pangle.log.ZeusLogger.w(r2, r8)
            return r3
        Ld7:
            r8 = 3
            java.lang.Object[] r8 = new java.lang.Object[r8]
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)
            r8[r3] = r10
            int r10 = r7.mMinVersionCode
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)
            r8[r5] = r10
            int r10 = r7.mMaxVersionCode
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)
            r8[r4] = r10
            java.lang.String r10 = " pluginApk ver[%s] not match plugin VerRange[%s, %s]."
            java.lang.String r8 = java.lang.String.format(r10, r8)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>(r1)
            r10.append(r9)
            java.lang.String r9 = " "
            r10.append(r9)
            r10.append(r8)
            java.lang.String r8 = r10.toString()
            com.bytedance.pangle.log.ZeusLogger.w(r2, r8)
            return r3
    }

    private boolean checkVersionValid(int r17, int r18, boolean r19) {
            r16 = this;
            r0 = r16
            r1 = r17
            r2 = r18
            com.bytedance.pangle.util.l r3 = com.bytedance.pangle.util.l.a()
            java.lang.String r4 = r0.mPkgName
            int r3 = r3.a(r4)
            r4 = 3
            java.lang.String r5 = "Plugin"
            r6 = 2
            java.lang.String r7 = "Zeus/init_pangle"
            r8 = 1
            r9 = 0
            if (r3 <= r2) goto L3e
            java.lang.Object[] r1 = new java.lang.Object[r4]
            java.lang.String r4 = r0.mPkgName
            r1[r9] = r4
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r8] = r3
            java.lang.Integer r2 = java.lang.Integer.valueOf(r18)
            r1[r6] = r2
            java.lang.String r2 = " checkVersionValid %s apiVersion downgrade , lastApiVersion=%s , currentApiVersion=%s"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r1 = r5.concat(r1)
            com.bytedance.pangle.log.ZeusLogger.w(r7, r1)
            return r9
        L3e:
            if (r1 < 0) goto L4a
            int r3 = r0.mMinVersionCode
            if (r1 < r3) goto L4a
            int r3 = r0.mMaxVersionCode
            if (r1 > r3) goto L4a
            r3 = r8
            goto L4b
        L4a:
            r3 = r9
        L4b:
            if (r3 == 0) goto Ld1
            r10 = -1
            if (r2 == r10) goto Ld1
            com.bytedance.pangle.util.l r10 = com.bytedance.pangle.util.l.a()
            java.lang.String r11 = r0.mPkgName
            android.content.SharedPreferences r10 = r10.a
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            java.lang.String r13 = "API_MIN_"
            r12.<init>(r13)
            r12.append(r11)
            java.lang.String r11 = "_"
            r12.append(r11)
            r12.append(r1)
            java.lang.String r12 = r12.toString()
            int r10 = r10.getInt(r12, r9)
            com.bytedance.pangle.util.l r12 = com.bytedance.pangle.util.l.a()
            java.lang.String r13 = r0.mPkgName
            android.content.SharedPreferences r12 = r12.a
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            java.lang.String r15 = "API_MAX_"
            r14.<init>(r15)
            r14.append(r13)
            r14.append(r11)
            r14.append(r1)
            java.lang.String r11 = r14.toString()
            r13 = 2147483647(0x7fffffff, float:NaN)
            int r11 = r12.getInt(r11, r13)
            if (r11 != 0) goto L98
            goto L99
        L98:
            r13 = r11
        L99:
            if (r2 < r10) goto L9d
            if (r2 <= r13) goto Ld1
        L9d:
            r3 = 5
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r11 = r0.mPkgName
            r3[r9] = r11
            int r11 = r0.mVersionCode
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)
            r3[r8] = r11
            java.lang.Integer r2 = java.lang.Integer.valueOf(r18)
            r3[r6] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r10)
            r3[r4] = r2
            r2 = 4
            java.lang.Integer r4 = java.lang.Integer.valueOf(r13)
            r3[r2] = r4
            java.lang.String r2 = " checkVersionValid plugin[%s, ver=%s] is not compatible with api[ver_code=%s], apiCompatibleVer=[%s,%s]"
            java.lang.String r2 = java.lang.String.format(r2, r3)
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r2 = r5.concat(r2)
            com.bytedance.pangle.log.ZeusLogger.w(r7, r2)
            r3 = r9
        Ld1:
            if (r3 == 0) goto L104
            if (r19 == 0) goto L104
            java.io.File r2 = new java.io.File
            java.lang.String r4 = r0.mPkgName
            java.lang.String r4 = com.bytedance.pangle.d.c.b(r4, r1)
            r2.<init>(r4)
            boolean r2 = com.bytedance.pangle.d.b.b(r2)
            if (r2 == 0) goto L104
            java.lang.Object[] r2 = new java.lang.Object[r6]
            java.lang.String r3 = r0.mPkgName
            r2[r9] = r3
            java.lang.Integer r1 = java.lang.Integer.valueOf(r17)
            r2[r8] = r1
            java.lang.String r1 = " checkVersionValid plugin[%s, ver=%s] not match hostAbi"
            java.lang.String r1 = java.lang.String.format(r1, r2)
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r1 = r5.concat(r1)
            com.bytedance.pangle.log.ZeusLogger.w(r7, r1)
            goto L105
        L104:
            r9 = r3
        L105:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Plugin checkVersionValid, pkg="
            r1.<init>(r2)
            java.lang.String r2 = r0.mPkgName
            r1.append(r2)
            java.lang.String r2 = ", ver="
            r1.append(r2)
            int r2 = r0.mVersionCode
            r1.append(r2)
            java.lang.String r2 = ", valid="
            r1.append(r2)
            r1.append(r9)
            java.lang.String r1 = r1.toString()
            com.bytedance.pangle.log.ZeusLogger.i(r7, r1)
            return r9
    }

    private void deleteIfNeeded() {
            r4 = this;
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()
            boolean r0 = com.bytedance.pangle.d.d.a(r0)
            if (r0 == 0) goto L55
            com.bytedance.pangle.util.l r0 = com.bytedance.pangle.util.l.a()
            java.lang.String r1 = r4.mPkgName
            android.content.SharedPreferences r0 = r0.a
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "UNINSTALL__"
            java.lang.String r1 = r2.concat(r1)
            r3 = 0
            boolean r0 = r0.getBoolean(r1, r3)
            if (r0 == 0) goto L55
            com.bytedance.pangle.util.l r0 = com.bytedance.pangle.util.l.a()
            java.lang.String r1 = r4.mPkgName
            android.content.SharedPreferences r0 = r0.a
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r1 = r2.concat(r1)
            r0.remove(r1)
            r0.apply()
            r4.deleteInstalledPlugin()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Plugin deleteIfNeeded "
            r0.<init>(r1)
            java.lang.String r1 = r4.mPkgName
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Zeus/init_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)
        L55:
            return
    }

    private void deleteInstalledPlugin() {
            r2 = this;
            java.lang.String r0 = r2.mPackageDir
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L10
            java.lang.String r0 = r2.mPkgName
            java.lang.String r0 = com.bytedance.pangle.d.c.a(r0)
            r2.mPackageDir = r0
        L10:
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r2.mPackageDir
            r0.<init>(r1)
            com.bytedance.pangle.plugin.Plugin$3 r1 = new com.bytedance.pangle.plugin.Plugin$3
            r1.<init>(r2)
            r0.listFiles(r1)
            java.lang.String r0 = r2.mPackageDir
            com.bytedance.pangle.util.g.a(r0)
            return
    }

    private void deleteOtherExpiredVer(int r3) {
            r2 = this;
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()
            boolean r0 = com.bytedance.pangle.d.d.a(r0)
            if (r0 == 0) goto L33
            java.lang.String r0 = r2.mPackageDir
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1a
            java.lang.String r0 = r2.mPkgName
            java.lang.String r0 = com.bytedance.pangle.d.c.a(r0)
            r2.mPackageDir = r0
        L1a:
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "version-"
            java.lang.String r3 = r0.concat(r3)
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r2.mPackageDir
            r0.<init>(r1)
            com.bytedance.pangle.plugin.Plugin$4 r1 = new com.bytedance.pangle.plugin.Plugin$4
            r1.<init>(r2, r3)
            r0.listFiles(r1)
        L33:
            return
    }

    private void installInternalPlugin() {
            r2 = this;
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()
            boolean r0 = com.bytedance.pangle.d.d.a(r0)
            if (r0 == 0) goto L20
            boolean r0 = r2.mReInstallInternalPluginByMd5
            if (r0 == 0) goto Lf
            goto L20
        Lf:
            int r0 = r2.getVersion()
            int r1 = r2.mInternalVersionCode
            if (r0 >= r1) goto L1f
            java.lang.String r0 = r2.mInternalPath
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L29
        L1f:
            return
        L20:
            int r0 = r2.getVersion()
            int r1 = r2.mInternalVersionCode
            if (r0 <= r1) goto L29
            return
        L29:
            com.bytedance.pangle.plugin.Plugin$1 r0 = new com.bytedance.pangle.plugin.Plugin$1
            r0.<init>(r2)
            com.bytedance.pangle.d.e.a(r0)
            return
    }

    private int modifyResIfNeed(int r6) {
            r5 = this;
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()
            java.lang.String r0 = com.bytedance.pangle.util.b.b(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L20
            com.bytedance.pangle.util.l r1 = com.bytedance.pangle.util.l.a()
            java.lang.String r2 = r5.mPkgName
            java.lang.String r1 = r1.b(r2)
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 != 0) goto L1f
            goto L20
        L1f:
            return r6
        L20:
            boolean r0 = r5.mUnInstallPluginWhenHostChange
            r1 = 0
            java.lang.String r2 = " "
            java.lang.String r3 = "Zeus/init_pangle"
            if (r0 != 0) goto L74
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.getInstance()
            java.lang.String r4 = r5.mPkgName
            boolean r0 = r0.unInstallPluginWhenHostChange(r4)
            if (r0 == 0) goto L36
            goto L74
        L36:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r4 = "modifyRes by init. "
            r0.<init>(r4)
            java.lang.String r4 = r5.mPkgName
            r0.append(r4)
            r0.append(r2)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            com.bytedance.pangle.log.ZeusLogger.d(r3, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.bytedance.pangle.res.a.c r2 = new com.bytedance.pangle.res.a.c
            r2.<init>()
            java.io.File r3 = new java.io.File
            java.lang.String r4 = r5.mPkgName
            java.lang.String r4 = com.bytedance.pangle.d.c.b(r4, r6)
            r3.<init>(r4)
            r4 = 1
            int r0 = r2.a(r3, r4, r0)
            r2 = 100
            if (r0 == r2) goto L73
            r2 = 200(0xc8, float:2.8E-43)
            if (r0 != r2) goto L72
            goto L73
        L72:
            return r1
        L73:
            return r6
        L74:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r4 = "uninstall plugin by host update. "
            r0.<init>(r4)
            java.lang.String r4 = r5.mPkgName
            r0.append(r4)
            r0.append(r2)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            com.bytedance.pangle.log.ZeusLogger.d(r3, r6)
            return r1
    }

    private void setupInternalPlugin() {
            r9 = this;
            java.lang.String r0 = "_"
            com.bytedance.pangle.util.l r1 = com.bytedance.pangle.util.l.a()
            java.lang.String r2 = r9.mPkgName
            int r3 = r9.mApiVersionCode
            android.content.SharedPreferences r1 = r1.a
            java.util.Locale r4 = java.util.Locale.getDefault()
            r5 = 1
            java.lang.Object[] r6 = new java.lang.Object[r5]
            r7 = 0
            r6[r7] = r2
            java.lang.String r2 = "OFFLINE_INTERNAL_%s"
            java.lang.String r2 = java.lang.String.format(r4, r2, r6)
            r4 = -1
            int r1 = r1.getInt(r2, r4)
            if (r1 != r3) goto L25
            r1 = r5
            goto L26
        L25:
            r1 = r7
        L26:
            if (r1 == 0) goto L29
            return
        L29:
            java.lang.String r1 = r9.mInternalPath
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L36
            int r1 = r9.mInternalVersionCode
            if (r1 == r4) goto L36
            return
        L36:
            android.app.Application r1 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.io.IOException -> L8b
            android.content.res.AssetManager r1 = r1.getAssets()     // Catch: java.io.IOException -> L8b
            java.lang.String r2 = com.bytedance.pangle.g.d     // Catch: java.io.IOException -> L8b
            java.lang.String[] r1 = r1.list(r2)     // Catch: java.io.IOException -> L8b
            int r2 = r1.length     // Catch: java.io.IOException -> L8b
        L45:
            if (r7 >= r2) goto L8a
            r3 = r1[r7]     // Catch: java.io.IOException -> L8b
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L8b
            r6.<init>()     // Catch: java.io.IOException -> L8b
            java.lang.String r8 = r9.mPkgName     // Catch: java.io.IOException -> L8b
            r6.append(r8)     // Catch: java.io.IOException -> L8b
            r6.append(r0)     // Catch: java.io.IOException -> L8b
            java.lang.String r6 = r6.toString()     // Catch: java.io.IOException -> L8b
            boolean r6 = r3.startsWith(r6)     // Catch: java.io.IOException -> L8b
            if (r6 == 0) goto L87
            java.lang.String[] r6 = r3.split(r0)     // Catch: java.io.IOException -> L8b
            r6 = r6[r5]     // Catch: java.io.IOException -> L8b
            int r6 = com.bytedance.pangle.util.k.a(r6)     // Catch: java.io.IOException -> L8b
            if (r6 == r4) goto L87
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L8b
            r0.<init>()     // Catch: java.io.IOException -> L8b
            java.lang.String r1 = com.bytedance.pangle.g.d     // Catch: java.io.IOException -> L8b
            r0.append(r1)     // Catch: java.io.IOException -> L8b
            java.lang.String r1 = "/"
            r0.append(r1)     // Catch: java.io.IOException -> L8b
            r0.append(r3)     // Catch: java.io.IOException -> L8b
            java.lang.String r0 = r0.toString()     // Catch: java.io.IOException -> L8b
            r9.mInternalPath = r0     // Catch: java.io.IOException -> L8b
            r9.mInternalVersionCode = r6     // Catch: java.io.IOException -> L8b
            return
        L87:
            int r7 = r7 + 1
            goto L45
        L8a:
            return
        L8b:
            r0 = move-exception
            java.lang.String r1 = "Zeus/install_pangle"
            java.lang.String r2 = "setupInternalPlugin failed."
            com.bytedance.pangle.log.ZeusLogger.w(r1, r2, r0)
            return
    }

    private void updateInstallStateFromMainProcess() {
            r3 = this;
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> L27
            boolean r0 = com.bytedance.pangle.d.d.a(r0)     // Catch: java.lang.Throwable -> L27
            if (r0 != 0) goto L26
            int r0 = r3.mLifeCycle     // Catch: java.lang.Throwable -> L27
            r1 = 2
            if (r0 >= r1) goto L26
            com.bytedance.pangle.c r0 = com.bytedance.pangle.servermanager.b.a()     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L26
            java.lang.String r1 = r3.mPkgName     // Catch: java.lang.Throwable -> L27
            boolean r1 = r0.a(r1)     // Catch: java.lang.Throwable -> L27
            if (r1 == 0) goto L26
            java.lang.String r1 = r3.mPkgName     // Catch: java.lang.Throwable -> L27
            int r0 = r0.b(r1)     // Catch: java.lang.Throwable -> L27
            r3.updateToInstalled(r0)     // Catch: java.lang.Throwable -> L27
        L26:
            return
        L27:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "updateInstallStateFromMainProcess error. process = "
            r1.<init>(r2)
            com.bytedance.pangle.Zeus.getAppApplication()
            java.lang.String r2 = com.bytedance.pangle.d.d.a()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "Zeus/ppm_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r2, r1, r0)
            return
    }

    private void updateToInstalled(int r1) {
            r0 = this;
            r0.mVersionCode = r1
            r1 = 2
            r0.mLifeCycle = r1
            return
    }

    public int getApiVersionCode() {
            r1 = this;
            int r0 = r1.mApiVersionCode
            return r0
    }

    public int getInstalledMaxVer() {
            r7 = this;
            java.lang.String r0 = r7.mPackageDir
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L10
            java.lang.String r0 = r7.mPkgName
            java.lang.String r0 = com.bytedance.pangle.d.c.a(r0)
            r7.mPackageDir = r0
        L10:
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r7.mPackageDir
            r0.<init>(r1)
            com.bytedance.pangle.plugin.Plugin$2 r1 = new com.bytedance.pangle.plugin.Plugin$2
            r1.<init>(r7)
            java.io.File[] r0 = r0.listFiles(r1)
            r1 = -1
            if (r0 == 0) goto L60
            int r2 = r0.length
            if (r2 <= 0) goto L60
            int r2 = r0.length
            r3 = 0
        L28:
            if (r3 >= r2) goto L60
            r4 = r0[r3]
            java.lang.String r4 = r4.getName()
            java.lang.String r5 = "-"
            java.lang.String[] r4 = r4.split(r5)
            r5 = 1
            r4 = r4[r5]
            int r4 = java.lang.Integer.parseInt(r4)
            if (r4 <= r1) goto L5d
            com.bytedance.pangle.util.l r5 = com.bytedance.pangle.util.l.a()
            java.lang.String r6 = r7.mPkgName
            boolean r5 = r5.a(r6, r4)
            if (r5 == 0) goto L5d
            java.lang.String r5 = r7.mPkgName
            java.lang.String r5 = com.bytedance.pangle.d.c.b(r5, r4)
            java.io.File r6 = new java.io.File
            r6.<init>(r5)
            boolean r5 = r6.exists()
            if (r5 == 0) goto L5d
            r1 = r4
        L5d:
            int r3 = r3 + 1
            goto L28
        L60:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "Plugin getInstalledMaxVersion, pkg="
            r0.<init>(r2)
            java.lang.String r2 = r7.mPkgName
            r0.append(r2)
            java.lang.String r2 = ", maxVer="
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "Zeus/init_pangle"
            com.bytedance.pangle.log.ZeusLogger.i(r2, r0)
            return r1
    }

    public int getInternalVersionCode() {
            r1 = this;
            int r0 = r1.mInternalVersionCode
            return r0
    }

    public int getLifeCycle() {
            r1 = this;
            r1.updateInstallStateFromMainProcess()
            int r0 = r1.mLifeCycle
            return r0
    }

    public java.lang.String getNativeLibraryDir() {
            r2 = this;
            int r0 = r2.mVersionCode
            if (r0 <= 0) goto Lb
            java.lang.String r1 = r2.mPkgName
            java.lang.String r0 = com.bytedance.pangle.d.c.d(r1, r0)
            return r0
        Lb:
            java.lang.String r0 = r2.mPkgName
            java.lang.String r0 = com.bytedance.pangle.d.c.a(r0)
            return r0
    }

    public int getVersion() {
            r1 = this;
            r1.updateInstallStateFromMainProcess()
            int r0 = r1.mVersionCode
            return r0
    }

    void init() {
            r9 = this;
            boolean r0 = r9.mInitialized
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.Object r0 = r9.initializeLock
            monitor-enter(r0)
            boolean r1 = r9.mInitialized     // Catch: java.lang.Throwable -> L1cb
            if (r1 == 0) goto Le
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1cb
            return
        Le:
            android.app.Application r1 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> L1cb
            boolean r1 = com.bytedance.pangle.d.d.a(r1)     // Catch: java.lang.Throwable -> L1cb
            r2 = 1
            if (r1 == 0) goto L1c1
            com.bytedance.pangle.util.l r1 = com.bytedance.pangle.util.l.a()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r3 = r9.mPkgName     // Catch: java.lang.Throwable -> L1cb
            android.content.SharedPreferences r1 = r1.a     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r4 = "HOST_ABI_"
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r3 = r4.concat(r3)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r4 = ""
            java.lang.String r1 = r1.getString(r3, r4)     // Catch: java.lang.Throwable -> L1cb
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L1cb
            r1 = r1 ^ r2
            r3 = 0
            if (r1 == 0) goto L98
            com.bytedance.pangle.util.l r1 = com.bytedance.pangle.util.l.a()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r4 = r9.mPkgName     // Catch: java.lang.Throwable -> L1cb
            android.content.SharedPreferences r5 = r1.a     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r6 = "HOST_ABI_"
            java.lang.String r7 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r6 = r6.concat(r7)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r7 = ""
            java.lang.String r5 = r5.getString(r6, r7)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r6 = com.bytedance.pangle.Zeus.getHostAbi()     // Catch: java.lang.Throwable -> L1cb
            boolean r5 = android.text.TextUtils.equals(r5, r6)     // Catch: java.lang.Throwable -> L1cb
            if (r5 != 0) goto L5d
            r5 = r2
            goto L5e
        L5d:
            r5 = r3
        L5e:
            java.lang.String r6 = "Zeus/init_pangle"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r8 = "ZeusSpUtils isHostAbiUpdate HOST_ABI="
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L1cb
            android.content.SharedPreferences r1 = r1.a     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r8 = "HOST_ABI_"
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r4 = r8.concat(r4)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r8 = ""
            java.lang.String r1 = r1.getString(r4, r8)     // Catch: java.lang.Throwable -> L1cb
            r7.append(r1)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r1 = ", "
            r7.append(r1)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r1 = com.bytedance.pangle.Zeus.getHostAbi()     // Catch: java.lang.Throwable -> L1cb
            r7.append(r1)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r1 = ", result="
            r7.append(r1)     // Catch: java.lang.Throwable -> L1cb
            r7.append(r5)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r1 = r7.toString()     // Catch: java.lang.Throwable -> L1cb
            com.bytedance.pangle.log.ZeusLogger.i(r6, r1)     // Catch: java.lang.Throwable -> L1cb
            goto L99
        L98:
            r5 = r3
        L99:
            r9.deleteIfNeeded()     // Catch: java.lang.Throwable -> L1cb
            int r1 = r9.getInstalledMaxVer()     // Catch: java.lang.Throwable -> L1cb
            int r4 = r9.mApiVersionCode     // Catch: java.lang.Throwable -> L1cb
            boolean r4 = r9.checkVersionValid(r1, r4, r5)     // Catch: java.lang.Throwable -> L1cb
            if (r4 == 0) goto Laf
            int r3 = r9.modifyResIfNeed(r1)     // Catch: java.lang.Throwable -> L1cb
            r9.updateToInstalled(r3)     // Catch: java.lang.Throwable -> L1cb
        Laf:
            r9.deleteOtherExpiredVer(r3)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r1 = "Zeus/init_pangle"
            java.lang.String r3 = "Plugin initPlugins result="
            java.lang.String r4 = java.lang.String.valueOf(r9)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r3 = r3.concat(r4)     // Catch: java.lang.Throwable -> L1cb
            com.bytedance.pangle.log.ZeusLogger.i(r1, r3)     // Catch: java.lang.Throwable -> L1cb
            com.bytedance.pangle.util.l r1 = com.bytedance.pangle.util.l.a()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r3 = r9.mPkgName     // Catch: java.lang.Throwable -> L1cb
            android.content.SharedPreferences r1 = r1.a     // Catch: java.lang.Throwable -> L1cb
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r4 = "ROM_LAST_"
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r3 = r4.concat(r3)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r4 = android.os.Build.VERSION.INCREMENTAL     // Catch: java.lang.Throwable -> L1cb
            r1.putString(r3, r4)     // Catch: java.lang.Throwable -> L1cb
            r1.apply()     // Catch: java.lang.Throwable -> L1cb
            com.bytedance.pangle.util.l r1 = com.bytedance.pangle.util.l.a()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r3 = r9.mPkgName     // Catch: java.lang.Throwable -> L1cb
            android.content.SharedPreferences r4 = r1.a     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = "HOST_ABI_"
            java.lang.String r6 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = r5.concat(r6)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r6 = ""
            java.lang.String r4 = r4.getString(r5, r6)     // Catch: java.lang.Throwable -> L1cb
            android.content.SharedPreferences r1 = r1.a     // Catch: java.lang.Throwable -> L1cb
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = "HOST_ABI_"
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r3 = r5.concat(r3)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = com.bytedance.pangle.Zeus.getHostAbi()     // Catch: java.lang.Throwable -> L1cb
            r1.putString(r3, r5)     // Catch: java.lang.Throwable -> L1cb
            r1.apply()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r1 = "Zeus/init_pangle"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = "ZeusSpUtils setHostAbiUpdated HOST_ABI="
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L1cb
            r3.append(r4)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r4 = " --> "
            r3.append(r4)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r4 = com.bytedance.pangle.Zeus.getHostAbi()     // Catch: java.lang.Throwable -> L1cb
            r3.append(r4)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L1cb
            com.bytedance.pangle.log.ZeusLogger.i(r1, r3)     // Catch: java.lang.Throwable -> L1cb
            com.bytedance.pangle.util.l r1 = com.bytedance.pangle.util.l.a()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r3 = r9.mPkgName     // Catch: java.lang.Throwable -> L1cb
            android.app.Application r4 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r4 = com.bytedance.pangle.util.b.b(r4)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = r1.b(r3)     // Catch: java.lang.Throwable -> L1cb
            boolean r6 = android.text.TextUtils.equals(r5, r4)     // Catch: java.lang.Throwable -> L1cb
            if (r6 != 0) goto L15e
            android.content.SharedPreferences r1 = r1.a     // Catch: java.lang.Throwable -> L1cb
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r6 = "HOST_IDENTITY_"
            java.lang.String r7 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r6 = r6.concat(r7)     // Catch: java.lang.Throwable -> L1cb
            r1.putString(r6, r4)     // Catch: java.lang.Throwable -> L1cb
            r1.apply()     // Catch: java.lang.Throwable -> L1cb
        L15e:
            java.lang.String r1 = "Zeus/init_pangle"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r7 = "ZeusSpUtils setHostIdentity("
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L1cb
            r6.append(r3)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r3 = ") "
            r6.append(r3)     // Catch: java.lang.Throwable -> L1cb
            r6.append(r5)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r3 = " --> "
            r6.append(r3)     // Catch: java.lang.Throwable -> L1cb
            r6.append(r4)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r3 = r6.toString()     // Catch: java.lang.Throwable -> L1cb
            com.bytedance.pangle.log.ZeusLogger.i(r1, r3)     // Catch: java.lang.Throwable -> L1cb
            com.bytedance.pangle.util.l r1 = com.bytedance.pangle.util.l.a()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r3 = r9.mPkgName     // Catch: java.lang.Throwable -> L1cb
            int r4 = r9.mApiVersionCode     // Catch: java.lang.Throwable -> L1cb
            int r5 = r1.a(r3)     // Catch: java.lang.Throwable -> L1cb
            if (r5 == r4) goto L1a5
            android.content.SharedPreferences r1 = r1.a     // Catch: java.lang.Throwable -> L1cb
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r6 = "PLUGIN_API_VERSION_"
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r3 = r6.concat(r3)     // Catch: java.lang.Throwable -> L1cb
            r1.putInt(r3, r4)     // Catch: java.lang.Throwable -> L1cb
            r1.apply()     // Catch: java.lang.Throwable -> L1cb
        L1a5:
            java.lang.String r1 = "Zeus/init_pangle"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r6 = "ZeusSpUtils setPluginApiVersion "
            r3.<init>(r6)     // Catch: java.lang.Throwable -> L1cb
            r3.append(r5)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = " --> "
            r3.append(r5)     // Catch: java.lang.Throwable -> L1cb
            r3.append(r4)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L1cb
            com.bytedance.pangle.log.ZeusLogger.i(r1, r3)     // Catch: java.lang.Throwable -> L1cb
            goto L1c4
        L1c1:
            r9.updateInstallStateFromMainProcess()     // Catch: java.lang.Throwable -> L1cb
        L1c4:
            r9.mInitialized = r2     // Catch: java.lang.Throwable -> L1cb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1cb
            r9.installInternalPlugin()
            return
        L1cb:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1cb
            throw r1
    }

    public void injectResponse(java.lang.String r1) {
            r0 = this;
            r0.response = r1
            return
    }

    boolean install(java.io.File r9, com.bytedance.pangle.f.a.e r10) {
            r8 = this;
            r0 = 0
            java.lang.String r1 = "Zeus/install_pangle"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L151
            java.lang.String r3 = "Plugin install from local file "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L151
            r2.append(r9)     // Catch: java.lang.Throwable -> L151
            java.lang.String r3 = ", "
            r2.append(r3)     // Catch: java.lang.Throwable -> L151
            java.lang.Thread r3 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L151
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Throwable -> L151
            r2.append(r3)     // Catch: java.lang.Throwable -> L151
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L151
            com.bytedance.pangle.log.ZeusLogger.i(r1, r2)     // Catch: java.lang.Throwable -> L151
            java.lang.String r1 = r10.a     // Catch: java.lang.Throwable -> L151
            int r10 = r10.b     // Catch: java.lang.Throwable -> L151
            java.lang.Object r2 = r8.installLock     // Catch: java.lang.Throwable -> L151
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L151
            java.lang.String r3 = "Zeus/install_pangle"
            java.lang.String r4 = "Plugin synchronized begin, plugin="
            java.lang.String r5 = java.lang.String.valueOf(r8)     // Catch: java.lang.Throwable -> L14e
            java.lang.String r4 = r4.concat(r5)     // Catch: java.lang.Throwable -> L14e
            com.bytedance.pangle.log.ZeusLogger.i(r3, r4)     // Catch: java.lang.Throwable -> L14e
            boolean r3 = r8.checkValid(r9, r1, r10)     // Catch: java.lang.Throwable -> L14e
            if (r3 == 0) goto Lab
            boolean r4 = com.bytedance.pangle.plugin.b.a(r9, r1, r10)     // Catch: java.lang.Throwable -> L14e
            if (r4 == 0) goto Laa
            java.io.File r5 = new java.io.File     // Catch: java.lang.Throwable -> La6
            java.lang.String r6 = r8.mPkgName     // Catch: java.lang.Throwable -> La6
            java.lang.String r6 = com.bytedance.pangle.d.c.b(r6, r10)     // Catch: java.lang.Throwable -> La6
            r5.<init>(r6)     // Catch: java.lang.Throwable -> La6
            java.lang.String[] r5 = com.bytedance.pangle.util.c.a(r5)     // Catch: java.lang.Throwable -> La6
            r0 = r5[r0]     // Catch: java.lang.Throwable -> La6
            com.bytedance.pangle.util.l r5 = com.bytedance.pangle.util.l.a()     // Catch: java.lang.Throwable -> La6
            java.lang.String r6 = r8.mPkgName     // Catch: java.lang.Throwable -> La6
            android.content.SharedPreferences r5 = r5.a     // Catch: java.lang.Throwable -> La6
            android.content.SharedPreferences$Editor r5 = r5.edit()     // Catch: java.lang.Throwable -> La6
            java.lang.String r7 = "IDENTITY_"
            java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Throwable -> La6
            java.lang.String r6 = r7.concat(r6)     // Catch: java.lang.Throwable -> La6
            r5.putString(r6, r0)     // Catch: java.lang.Throwable -> La6
            r5.apply()     // Catch: java.lang.Throwable -> La6
            com.bytedance.pangle.util.l r5 = com.bytedance.pangle.util.l.a()     // Catch: java.lang.Throwable -> La6
            java.lang.String r6 = r8.mPkgName     // Catch: java.lang.Throwable -> La6
            r7 = 1
            r5.a(r6, r10, r7)     // Catch: java.lang.Throwable -> La6
            java.lang.String r5 = "Zeus/install_pangle"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La6
            java.lang.String r7 = "Plugin markPluginInstalled, "
            r6.<init>(r7)     // Catch: java.lang.Throwable -> La6
            java.lang.String r7 = r8.mPkgName     // Catch: java.lang.Throwable -> La6
            r6.append(r7)     // Catch: java.lang.Throwable -> La6
            java.lang.String r7 = ":"
            r6.append(r7)     // Catch: java.lang.Throwable -> La6
            r6.append(r10)     // Catch: java.lang.Throwable -> La6
            java.lang.String r7 = " identity="
            r6.append(r7)     // Catch: java.lang.Throwable -> La6
            r6.append(r0)     // Catch: java.lang.Throwable -> La6
            java.lang.String r0 = r6.toString()     // Catch: java.lang.Throwable -> La6
            com.bytedance.pangle.log.ZeusLogger.i(r5, r0)     // Catch: java.lang.Throwable -> La6
            com.bytedance.pangle.util.g.a(r9)     // Catch: java.lang.Throwable -> La6
            goto Laa
        La6:
            r9 = move-exception
            r0 = r4
            goto L14f
        Laa:
            r0 = r4
        Lab:
            monitor-enter(r8)     // Catch: java.lang.Throwable -> L14e
            if (r3 == 0) goto L12a
            int r3 = r8.mLifeCycle     // Catch: java.lang.Throwable -> L14b
            r4 = 3
            if (r3 == r4) goto L10e
            if (r0 == 0) goto Ld4
            r8.updateToInstalled(r10)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r9 = "Zeus/install_pangle"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14b
            java.lang.String r4 = "Plugin INSTALLED "
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L14b
            r3.append(r1)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r1 = ":"
            r3.append(r1)     // Catch: java.lang.Throwable -> L14b
            r3.append(r10)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r10 = r3.toString()     // Catch: java.lang.Throwable -> L14b
            com.bytedance.pangle.log.ZeusLogger.i(r9, r10)     // Catch: java.lang.Throwable -> L14b
            goto L148
        Ld4:
            java.lang.String r3 = "Zeus/install_pangle"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14b
            java.lang.String r5 = "Plugin INSTALL_FAILED"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L14b
            r4.append(r1)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r5 = ":"
            r4.append(r5)     // Catch: java.lang.Throwable -> L14b
            r4.append(r10)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L14b
            com.bytedance.pangle.log.ZeusLogger.i(r3, r4)     // Catch: java.lang.Throwable -> L14b
            com.bytedance.pangle.util.g.a(r9)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r9 = "Zeus/install_pangle"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14b
            java.lang.String r4 = "Plugin delete file by failedCount > 0 "
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L14b
            r3.append(r1)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r1 = ":"
            r3.append(r1)     // Catch: java.lang.Throwable -> L14b
            r3.append(r10)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r10 = r3.toString()     // Catch: java.lang.Throwable -> L14b
            com.bytedance.pangle.log.ZeusLogger.w(r9, r10)     // Catch: java.lang.Throwable -> L14b
            goto L148
        L10e:
            java.lang.String r9 = "Zeus/install_pangle"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14b
            java.lang.String r4 = "Plugin LIFE_LOADED, valid next restart "
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L14b
            r3.append(r1)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r1 = ":"
            r3.append(r1)     // Catch: java.lang.Throwable -> L14b
            r3.append(r10)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r10 = r3.toString()     // Catch: java.lang.Throwable -> L14b
            com.bytedance.pangle.log.ZeusLogger.w(r9, r10)     // Catch: java.lang.Throwable -> L14b
            goto L148
        L12a:
            com.bytedance.pangle.util.g.a(r9)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r9 = "Zeus/install_pangle"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14b
            java.lang.String r4 = "Plugin deleting invalid "
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L14b
            r3.append(r1)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r1 = ":"
            r3.append(r1)     // Catch: java.lang.Throwable -> L14b
            r3.append(r10)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r10 = r3.toString()     // Catch: java.lang.Throwable -> L14b
            com.bytedance.pangle.log.ZeusLogger.w(r9, r10)     // Catch: java.lang.Throwable -> L14b
        L148:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L14b
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L14e
            goto L159
        L14b:
            r9 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L14b
            throw r9     // Catch: java.lang.Throwable -> L14e
        L14e:
            r9 = move-exception
        L14f:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L14e
            throw r9     // Catch: java.lang.Throwable -> L151
        L151:
            r9 = move-exception
            java.lang.String r10 = "Zeus/install_pangle"
            java.lang.String r1 = "Plugin IMPOSSIBLE!!!"
            com.bytedance.pangle.log.ZeusLogger.errReport(r10, r1, r9)
        L159:
            return r0
    }

    public boolean isInstalled() {
            r2 = this;
            r2.updateInstallStateFromMainProcess()
            int r0 = r2.mLifeCycle
            r1 = 2
            if (r0 < r1) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    public boolean isLoaded() {
            r2 = this;
            int r0 = r2.mLifeCycle
            r1 = 3
            if (r0 != r1) goto L7
            r0 = 1
            return r0
        L7:
            r0 = 0
            return r0
    }

    public boolean isVersionInstalled(int r3) {
            r2 = this;
            com.bytedance.pangle.util.l r0 = com.bytedance.pangle.util.l.a()
            java.lang.String r1 = r2.mPkgName
            boolean r3 = r0.a(r1, r3)
            return r3
    }

    public void setApiCompatVersion(int r5, int r6, int r7) {
            r4 = this;
            com.bytedance.pangle.util.l r0 = com.bytedance.pangle.util.l.a()
            java.lang.String r1 = r4.mPkgName
            android.content.SharedPreferences r0 = r0.a
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "API_MIN_"
            r2.<init>(r3)
            r2.append(r1)
            java.lang.String r3 = "_"
            r2.append(r3)
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            r0.putInt(r2, r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r2 = "API_MAX_"
            r6.<init>(r2)
            r6.append(r1)
            r6.append(r3)
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            r0.putInt(r5, r7)
            r0.apply()
            return
    }

    public void setLifeCycle(int r1) {
            r0 = this;
            r0.mLifeCycle = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Plugin{pkg="
            r0.<init>(r1)
            java.lang.String r1 = r2.mPkgName
            r0.append(r1)
            java.lang.String r1 = ", ver="
            r0.append(r1)
            int r1 = r2.mVersionCode
            r0.append(r1)
            java.lang.String r1 = ", life="
            r0.append(r1)
            int r1 = r2.mLifeCycle
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
