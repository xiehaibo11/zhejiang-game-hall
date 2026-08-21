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

    private void initChannel(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = r3.getApkPath(r4)
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L47
            if (r1 != 0) goto L26
            java.lang.String r1 = com.bianfeng.afext.Afexter.readChannel(r0)     // Catch: java.lang.Exception -> L47
            r3.channelId = r1     // Catch: java.lang.Exception -> L47
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L47
            r1.<init>()     // Catch: java.lang.Exception -> L47
            java.lang.String r2 = "channelId from afexter "
            r1.append(r2)     // Catch: java.lang.Exception -> L47
            java.lang.String r2 = r3.channelId     // Catch: java.lang.Exception -> L47
            r1.append(r2)     // Catch: java.lang.Exception -> L47
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L47
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r1)     // Catch: java.lang.Exception -> L47
        L26:
            java.lang.String r1 = r3.channelId     // Catch: java.lang.Exception -> L47
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L47
            if (r1 == 0) goto L36
            java.lang.String r1 = "TD_CHANNEL_ID"
            java.lang.String r1 = r3.getMetaDataValueString(r1)     // Catch: java.lang.Exception -> L47
            r3.channelId = r1     // Catch: java.lang.Exception -> L47
        L36:
            java.lang.String r1 = r3.channelId     // Catch: java.lang.Exception -> L47
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L47
            if (r1 == 0) goto L46
            java.lang.String r1 = "channel_id"
            java.lang.String r1 = r3.getMetaDataValueString(r1)     // Catch: java.lang.Exception -> L47
            r3.channelId = r1     // Catch: java.lang.Exception -> L47
        L46:
            goto L4c
        L47:
            r1 = move-exception
            java.lang.String r2 = ""
            r3.channelId = r2
        L4c:
            return
    }

    public int getActivityOrientation(android.app.Activity r4) {
            r3 = this;
            android.content.pm.PackageManager r0 = r3.pm     // Catch: java.lang.Exception -> Lf
            android.content.ComponentName r1 = r4.getComponentName()     // Catch: java.lang.Exception -> Lf
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ActivityInfo r0 = r0.getActivityInfo(r1, r2)     // Catch: java.lang.Exception -> Lf
            int r1 = r0.screenOrientation     // Catch: java.lang.Exception -> Lf
            return r1
        Lf:
            r0 = move-exception
            r0.printStackTrace()
            r1 = 0
            return r1
    }

    public java.lang.String getApkPath(android.content.Context r3) {
            r2 = this;
            android.content.pm.ApplicationInfo r0 = r3.getApplicationInfo()     // Catch: java.lang.Throwable -> L7
            java.lang.String r0 = r0.sourceDir     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = move-exception
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
            android.os.Bundle r1 = r0.metaData     // Catch: java.lang.Exception -> L1c
            if (r1 == 0) goto L1a
            boolean r2 = r1.containsKey(r4)     // Catch: java.lang.Exception -> L1c
            if (r2 != 0) goto L15
            goto L1a
        L15:
            int r2 = r1.getInt(r4)     // Catch: java.lang.Exception -> L1c
            return r2
        L1a:
            r2 = 0
            return r2
        L1c:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r1.<init>(r0)
            throw r1
    }

    public java.lang.String getMetaDataValueString(java.lang.String r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r3 = this;
            android.content.pm.PackageManager r0 = r3.pm     // Catch: java.lang.Exception -> L20
            java.lang.String r1 = r3.pkgName     // Catch: java.lang.Exception -> L20
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo(r1, r2)     // Catch: java.lang.Exception -> L20
            android.os.Bundle r1 = r0.metaData     // Catch: java.lang.Exception -> L20
            if (r1 == 0) goto L1e
            boolean r2 = r1.containsKey(r4)     // Catch: java.lang.Exception -> L20
            if (r2 != 0) goto L15
            goto L1e
        L15:
            java.lang.Object r2 = r1.get(r4)     // Catch: java.lang.Exception -> L20
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L20
            return r2
        L1e:
            r2 = 0
            return r2
        L20:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r1.<init>(r0)
            throw r1
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

    public void init(android.content.Context r2) {
            r1 = this;
            boolean r0 = r1.isFirst
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.String r0 = r2.getPackageName()     // Catch: java.lang.Exception -> L37
            r1.pkgName = r0     // Catch: java.lang.Exception -> L37
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L37
            r1.pm = r0     // Catch: java.lang.Exception -> L37
            java.lang.String r0 = "TD_SDK_APP_ID"
            int r0 = r1.getMetaDataValueInt(r0)     // Catch: java.lang.Exception -> L37
            r1.appId = r0     // Catch: java.lang.Exception -> L37
            java.lang.String r0 = "TD_CONFIG_ID"
            int r0 = r1.getMetaDataValueInt(r0)     // Catch: java.lang.Exception -> L37
            r1.identify_id = r0     // Catch: java.lang.Exception -> L37
            java.lang.String r0 = "TD_CLIENT_TYPE"
            java.lang.String r0 = r1.getMetaDataValueString(r0)     // Catch: java.lang.Exception -> L37
            r1.deviceType = r0     // Catch: java.lang.Exception -> L37
            android.content.res.Resources r0 = r2.getResources()     // Catch: java.lang.Exception -> L37
            android.content.res.Configuration r0 = r0.getConfiguration()     // Catch: java.lang.Exception -> L37
            r1.mConfiguration = r0     // Catch: java.lang.Exception -> L37
            r1.initChannel(r2)     // Catch: java.lang.Exception -> L37
            goto L3b
        L37:
            r0 = move-exception
            r0.printStackTrace()
        L3b:
            r0 = 1
            r1.isFirst = r0
            return
    }

    public boolean isLand(android.app.Activity r3) {
            r2 = this;
            int r0 = r2.getActivityOrientation(r3)
            r1 = 2
            if (r0 != r1) goto L9
            r1 = 1
            goto La
        L9:
            r1 = 0
        La:
            return r1
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
