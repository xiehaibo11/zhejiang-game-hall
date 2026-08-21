package com.bianfeng.ymnsdk.utilslib.appinfo;

public class AppContext {
    private static final java.lang.String KEY_CHANNEL_ID = "TD_CHANNEL_ID";
    private static final java.lang.String KEY_CHANNEL_ID_FIX = "channel_id";
    private static final java.lang.String KEY_CONFIG_ID = "TD_CONFIG_ID";
    private static final java.lang.String KEY_OS_TYPE = "TD_CLIENT_TYPE";
    private static final java.lang.String KEY_SDK_APP_ID = "TD_SDK_APP_ID";
    private static volatile com.bianfeng.ymnsdk.utilslib.appinfo.AppContext appContext;
    private int appId;
    private java.lang.String appName;
    private java.lang.String channelId;
    private java.lang.String deviceType;
    private int identify_id;
    private boolean isFirst;
    private android.content.res.Configuration mConfiguration;
    private android.content.pm.PackageInfo pi;
    private java.lang.String pkgName;
    private android.content.pm.PackageManager pm;
    private java.lang.String verCode;
    private java.lang.String verName;

    private AppContext() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.ymnsdk.utilslib.appinfo.AppContext getInstance() {
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.appContext
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.utilslib.appinfo.AppContext> r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r1 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.appContext     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r1 = new com.bianfeng.ymnsdk.utilslib.appinfo.AppContext     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.appContext = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.appContext
            return r0
    }

    private void initChannel(android.content.Context r2) {
            r1 = this;
            java.lang.String r2 = r1.getApkPath(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L47
            if (r0 != 0) goto L26
            java.lang.String r2 = com.bianfeng.afext.Afexter.readChannel(r2)     // Catch: java.lang.Exception -> L47
            r1.channelId = r2     // Catch: java.lang.Exception -> L47
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L47
            r2.<init>()     // Catch: java.lang.Exception -> L47
            java.lang.String r0 = "channelId from afexter "
            r2.append(r0)     // Catch: java.lang.Exception -> L47
            java.lang.String r0 = r1.channelId     // Catch: java.lang.Exception -> L47
            r2.append(r0)     // Catch: java.lang.Exception -> L47
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L47
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r2)     // Catch: java.lang.Exception -> L47
        L26:
            java.lang.String r2 = r1.channelId     // Catch: java.lang.Exception -> L47
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L47
            if (r2 == 0) goto L36
            java.lang.String r2 = "TD_CHANNEL_ID"
            java.lang.String r2 = r1.getMetaDataValueString(r2)     // Catch: java.lang.Exception -> L47
            r1.channelId = r2     // Catch: java.lang.Exception -> L47
        L36:
            java.lang.String r2 = r1.channelId     // Catch: java.lang.Exception -> L47
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L47
            if (r2 == 0) goto L4b
            java.lang.String r2 = "channel_id"
            java.lang.String r2 = r1.getMetaDataValueString(r2)     // Catch: java.lang.Exception -> L47
            r1.channelId = r2     // Catch: java.lang.Exception -> L47
            goto L4b
        L47:
            java.lang.String r2 = ""
            r1.channelId = r2
        L4b:
            return
    }

    public int getActivityOrientation(android.app.Activity r3) {
            r2 = this;
            android.content.pm.PackageManager r0 = r2.pm     // Catch: java.lang.Exception -> Lf
            android.content.ComponentName r3 = r3.getComponentName()     // Catch: java.lang.Exception -> Lf
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ActivityInfo r3 = r0.getActivityInfo(r3, r1)     // Catch: java.lang.Exception -> Lf
            int r3 = r3.screenOrientation     // Catch: java.lang.Exception -> Lf
            return r3
        Lf:
            r3 = move-exception
            r3.printStackTrace()
            r3 = 0
            return r3
    }

    public java.lang.String getApkPath(android.content.Context r1) {
            r0 = this;
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()     // Catch: java.lang.Throwable -> L7
            java.lang.String r1 = r1.sourceDir     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = 0
            return r1
    }

    public int getAppId() {
            r1 = this;
            int r0 = r1.appId
            return r0
    }

    public java.lang.String getAppName() {
            r1 = this;
            java.lang.String r0 = r1.appName
            return r0
    }

    public java.lang.String getChannelId() {
            r1 = this;
            java.lang.String r0 = r1.channelId
            return r0
    }

    public java.lang.String getDeviceType() {
            r1 = this;
            java.lang.String r0 = r1.deviceType
            return r0
    }

    public int getIdentify_id() {
            r1 = this;
            int r0 = r1.identify_id
            return r0
    }

    public int getMetaDataValueInt(java.lang.String r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r3 = this;
            android.content.pm.PackageManager r0 = r3.pm     // Catch: java.lang.Exception -> L1c
            java.lang.String r1 = r3.pkgName     // Catch: java.lang.Exception -> L1c
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo(r1, r2)     // Catch: java.lang.Exception -> L1c
            android.os.Bundle r0 = r0.metaData     // Catch: java.lang.Exception -> L1c
            if (r0 == 0) goto L1a
            boolean r1 = r0.containsKey(r4)     // Catch: java.lang.Exception -> L1c
            if (r1 != 0) goto L15
            goto L1a
        L15:
            int r4 = r0.getInt(r4)     // Catch: java.lang.Exception -> L1c
            return r4
        L1a:
            r4 = 0
            return r4
        L1c:
            r4 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r0.<init>(r4)
            throw r0
    }

    public java.lang.String getMetaDataValueString(java.lang.String r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r3 = this;
            android.content.pm.PackageManager r0 = r3.pm     // Catch: java.lang.Exception -> L20
            java.lang.String r1 = r3.pkgName     // Catch: java.lang.Exception -> L20
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo(r1, r2)     // Catch: java.lang.Exception -> L20
            android.os.Bundle r0 = r0.metaData     // Catch: java.lang.Exception -> L20
            if (r0 == 0) goto L1e
            boolean r1 = r0.containsKey(r4)     // Catch: java.lang.Exception -> L20
            if (r1 != 0) goto L15
            goto L1e
        L15:
            java.lang.Object r4 = r0.get(r4)     // Catch: java.lang.Exception -> L20
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> L20
            return r4
        L1e:
            r4 = 0
            return r4
        L20:
            r4 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r0.<init>(r4)
            throw r0
    }

    public java.lang.String getPkgName() {
            r1 = this;
            java.lang.String r0 = r1.pkgName
            return r0
    }

    public java.lang.String getVerCode() {
            r1 = this;
            java.lang.String r0 = r1.verCode
            return r0
    }

    public java.lang.String getVerName() {
            r1 = this;
            java.lang.String r0 = r1.verName
            return r0
    }

    public void init(android.content.Context r4) {
            r3 = this;
            boolean r0 = r3.isFirst
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.String r0 = r4.getPackageName()     // Catch: java.lang.Exception -> L6f
            r3.pkgName = r0     // Catch: java.lang.Exception -> L6f
            android.content.pm.PackageManager r0 = r4.getPackageManager()     // Catch: java.lang.Exception -> L6f
            r3.pm = r0     // Catch: java.lang.Exception -> L6f
            android.content.pm.PackageManager r0 = r3.pm     // Catch: java.lang.Exception -> L6f
            java.lang.String r1 = r3.pkgName     // Catch: java.lang.Exception -> L6f
            r2 = 0
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L6f
            r3.pi = r0     // Catch: java.lang.Exception -> L6f
            java.lang.String r0 = "TD_SDK_APP_ID"
            int r0 = r3.getMetaDataValueInt(r0)     // Catch: java.lang.Exception -> L6f
            r3.appId = r0     // Catch: java.lang.Exception -> L6f
            java.lang.String r0 = "TD_CONFIG_ID"
            int r0 = r3.getMetaDataValueInt(r0)     // Catch: java.lang.Exception -> L6f
            r3.identify_id = r0     // Catch: java.lang.Exception -> L6f
            java.lang.String r0 = "TD_CLIENT_TYPE"
            java.lang.String r0 = r3.getMetaDataValueString(r0)     // Catch: java.lang.Exception -> L6f
            r3.deviceType = r0     // Catch: java.lang.Exception -> L6f
            android.content.pm.PackageInfo r0 = r3.pi     // Catch: java.lang.Exception -> L6f
            java.lang.String r0 = r0.versionName     // Catch: java.lang.Exception -> L6f
            r3.verName = r0     // Catch: java.lang.Exception -> L6f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6f
            r0.<init>()     // Catch: java.lang.Exception -> L6f
            android.content.pm.PackageInfo r1 = r3.pi     // Catch: java.lang.Exception -> L6f
            int r1 = r1.versionCode     // Catch: java.lang.Exception -> L6f
            r0.append(r1)     // Catch: java.lang.Exception -> L6f
            java.lang.String r1 = ""
            r0.append(r1)     // Catch: java.lang.Exception -> L6f
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L6f
            r3.verCode = r0     // Catch: java.lang.Exception -> L6f
            android.content.res.Resources r0 = r4.getResources()     // Catch: java.lang.Exception -> L6f
            android.content.res.Configuration r0 = r0.getConfiguration()     // Catch: java.lang.Exception -> L6f
            r3.mConfiguration = r0     // Catch: java.lang.Exception -> L6f
            android.content.pm.PackageManager r0 = r3.pm     // Catch: java.lang.Exception -> L6f
            android.content.pm.PackageInfo r1 = r3.pi     // Catch: java.lang.Exception -> L6f
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo     // Catch: java.lang.Exception -> L6f
            java.lang.CharSequence r0 = r0.getApplicationLabel(r1)     // Catch: java.lang.Exception -> L6f
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L6f
            r3.appName = r0     // Catch: java.lang.Exception -> L6f
            r3.initChannel(r4)     // Catch: java.lang.Exception -> L6f
            goto L73
        L6f:
            r4 = move-exception
            r4.printStackTrace()
        L73:
            r4 = 1
            r3.isFirst = r4
            return
    }

    public boolean isLand(android.app.Activity r2) {
            r1 = this;
            int r2 = r1.getActivityOrientation(r2)
            android.content.res.Configuration r0 = r1.mConfiguration
            r0 = 2
            if (r2 != r0) goto Lb
            r2 = 1
            goto Lc
        Lb:
            r2 = 0
        Lc:
            return r2
    }

    public void setAppId(int r1) {
            r0 = this;
            r0.appId = r1
            return
    }

    public void setIdentify_id(int r1) {
            r0 = this;
            r0.identify_id = r1
            return
    }
}
