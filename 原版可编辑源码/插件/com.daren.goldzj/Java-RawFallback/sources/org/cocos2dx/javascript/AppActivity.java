package org.cocos2dx.javascript;

public class AppActivity extends org.cocos2dx.lib.Cocos2dxActivity {
    public static java.lang.String TAG = "MainActivity_log";
    private static final java.lang.String ZHUOYI_INSTALLER_PACKAGE_NAME = "com.zhuoyi.appstore.lite";
    private static android.content.Context appContext = null;
    static boolean isSetCocosData = true;
    public static boolean isUnityEngine = false;
    static int luaFuncCallback;
    public static org.cocos2dx.javascript.AppActivity mactivity;
    private static int queryUpdateCallback;
    private static int updateProgressCallback;
    org.cocos2dx.javascript.YmnSupport YmnSupport;
    boolean isUnityLoaded;
    private android.content.res.Resources uaalResouces;
    java.lang.String unity2CocosData;


    static {
            return
    }

    public AppActivity() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.isUnityLoaded = r0
            org.cocos2dx.javascript.YmnSupport r0 = new org.cocos2dx.javascript.YmnSupport
            r0.<init>()
            r1.YmnSupport = r0
            r0 = 0
            r1.unity2CocosData = r0
            return
    }

    public static void allowStartPlugin(java.lang.String r4) {
            java.lang.String r0 = "isAllow"
            java.lang.String r1 = "loginJsonStr"
            java.lang.String r2 = "pluginId"
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L27
            r3.<init>(r4)     // Catch: org.json.JSONException -> L27
            boolean r4 = r3.has(r2)     // Catch: org.json.JSONException -> L27
            if (r4 == 0) goto L14
            r3.getString(r2)     // Catch: org.json.JSONException -> L27
        L14:
            boolean r4 = r3.has(r1)     // Catch: org.json.JSONException -> L27
            if (r4 == 0) goto L1d
            r3.getString(r1)     // Catch: org.json.JSONException -> L27
        L1d:
            boolean r4 = r3.has(r0)     // Catch: org.json.JSONException -> L27
            if (r4 == 0) goto L2b
            r3.getString(r0)     // Catch: org.json.JSONException -> L27
            goto L2b
        L27:
            r4 = move-exception
            r4.printStackTrace()
        L2b:
            return
    }

    public static void changeLandscape() {
            org.cocos2dx.javascript.AppActivity r0 = org.cocos2dx.javascript.AppActivity.mactivity
            r1 = 6
            r0.setRequestedOrientation(r1)
            return
    }

    public static void changePortrait() {
            org.cocos2dx.javascript.AppActivity r0 = org.cocos2dx.javascript.AppActivity.mactivity
            r1 = 7
            r0.setRequestedOrientation(r1)
            return
    }

    public static void clearDownloadCache(java.lang.String r2) {
            java.lang.String r0 = "pluginId"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L11
            r1.<init>(r2)     // Catch: org.json.JSONException -> L11
            boolean r2 = r1.has(r0)     // Catch: org.json.JSONException -> L11
            if (r2 == 0) goto L15
            r1.getString(r0)     // Catch: org.json.JSONException -> L11
            goto L15
        L11:
            r2 = move-exception
            r2.printStackTrace()
        L15:
            return
    }

    public static final int convertToInt(java.lang.Object r2, int r3) {
            if (r2 == 0) goto L3a
            java.lang.String r0 = r2.toString()
            java.lang.String r0 = r0.trim()
            java.lang.String r1 = ""
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L13
            goto L3a
        L13:
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L20
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L20
            int r2 = r0.intValue()     // Catch: java.lang.Exception -> L20
            return r2
        L20:
            java.lang.String r0 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L2d
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L2d
            int r2 = r0.intValue()     // Catch: java.lang.Exception -> L2d
            return r2
        L2d:
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L3a
            java.lang.Double r2 = java.lang.Double.valueOf(r2)     // Catch: java.lang.Exception -> L3a
            int r2 = r2.intValue()     // Catch: java.lang.Exception -> L3a
            return r2
        L3a:
            return r3
    }

    private static int getChannelID() {
            android.content.Context r0 = com.bianfeng.libuniverse.Universe.getContext()
            r1 = 0
            android.content.pm.PackageManager r2 = r0.getPackageManager()     // Catch: java.lang.Exception -> L34
            java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Exception -> L34
            r3 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r0 = r2.getPackageInfo(r0, r3)     // Catch: java.lang.Exception -> L34
            android.content.pm.ApplicationInfo r0 = r0.applicationInfo     // Catch: java.lang.Exception -> L34
            android.os.Bundle r0 = r0.metaData     // Catch: java.lang.Exception -> L34
            java.lang.String r2 = "TD_CHANNEL_ID"
            int r1 = r0.getInt(r2, r1)     // Catch: java.lang.Exception -> L34
            java.lang.String r0 = "Tag"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L34
            r2.<init>()     // Catch: java.lang.Exception -> L34
            java.lang.String r3 = " TD_CHANNEL_ID : "
            r2.append(r3)     // Catch: java.lang.Exception -> L34
            r2.append(r1)     // Catch: java.lang.Exception -> L34
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L34
            android.util.Log.d(r0, r2)     // Catch: java.lang.Exception -> L34
            return r1
        L34:
            r0 = move-exception
            r0.printStackTrace()
            return r1
    }

    private static java.lang.String getInstallerPackageName(android.content.Context r1) {
            android.content.pm.PackageManager r0 = r1.getPackageManager()
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r1 = r0.getInstallerPackageName(r1)     // Catch: java.lang.Exception -> Ld
            return r1
        Ld:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }

    public static void getPluginsInfo(java.lang.String r3) {
            java.lang.String r0 = "hostAppInfo"
            java.lang.String r1 = "app_id"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1c
            r2.<init>(r3)     // Catch: org.json.JSONException -> L1c
            boolean r3 = r2.has(r1)     // Catch: org.json.JSONException -> L1c
            if (r3 == 0) goto L12
            r2.getString(r1)     // Catch: org.json.JSONException -> L1c
        L12:
            boolean r3 = r2.has(r0)     // Catch: org.json.JSONException -> L1c
            if (r3 == 0) goto L20
            r2.getString(r0)     // Catch: org.json.JSONException -> L1c
            goto L20
        L1c:
            r3 = move-exception
            r3.printStackTrace()
        L20:
            return
    }

    public static java.lang.String getRunningMemory() {
            java.lang.String r0 = "summary.total-pss: "
            r1 = 0
            org.cocos2dx.javascript.AppActivity r3 = org.cocos2dx.javascript.AppActivity.mactivity     // Catch: java.lang.Exception -> L95
            java.lang.String r4 = "activity"
            java.lang.Object r3 = r3.getSystemService(r4)     // Catch: java.lang.Exception -> L95
            android.app.ActivityManager r3 = (android.app.ActivityManager) r3     // Catch: java.lang.Exception -> L95
            r4 = 1
            int[] r5 = new int[r4]     // Catch: java.lang.Exception -> L95
            int r6 = android.os.Process.myPid()     // Catch: java.lang.Exception -> L95
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.Exception -> L95
            android.os.Debug$MemoryInfo[] r3 = r3.getProcessMemoryInfo(r5)     // Catch: java.lang.Exception -> L95
            java.io.PrintStream r5 = java.lang.System.out     // Catch: java.lang.Exception -> L95
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L95
            r6.<init>()     // Catch: java.lang.Exception -> L95
            java.lang.String r8 = "summary.myPid: "
            r6.append(r8)     // Catch: java.lang.Exception -> L95
            int r8 = android.os.Process.myPid()     // Catch: java.lang.Exception -> L95
            r6.append(r8)     // Catch: java.lang.Exception -> L95
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L95
            r5.println(r6)     // Catch: java.lang.Exception -> L95
            int r5 = r3.length     // Catch: java.lang.Exception -> L95
            if (r5 <= 0) goto L99
            java.io.PrintStream r5 = java.lang.System.out     // Catch: java.lang.Exception -> L95
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L95
            r6.<init>()     // Catch: java.lang.Exception -> L95
            r6.append(r0)     // Catch: java.lang.Exception -> L95
            r6.append(r3)     // Catch: java.lang.Exception -> L95
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L95
            r5.println(r6)     // Catch: java.lang.Exception -> L95
            int r5 = r3.length     // Catch: java.lang.Exception -> L95
            int r5 = r5 - r4
            r3 = r3[r5]     // Catch: java.lang.Exception -> L95
            java.lang.String r4 = "summary.total-pss"
            java.lang.String r3 = r3.getMemoryStat(r4)     // Catch: java.lang.Exception -> L95
            int r4 = convertToInt(r3, r7)     // Catch: java.lang.Exception -> L95
            java.io.PrintStream r5 = java.lang.System.out     // Catch: java.lang.Exception -> L95
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L95
            r6.<init>()     // Catch: java.lang.Exception -> L95
            r6.append(r0)     // Catch: java.lang.Exception -> L95
            r6.append(r3)     // Catch: java.lang.Exception -> L95
            r0 = 44
            r6.append(r0)     // Catch: java.lang.Exception -> L95
            double r7 = (double) r4     // Catch: java.lang.Exception -> L95
            r9 = 4652218415073722368(0x4090000000000000, double:1024.0)
            double r7 = r7 / r9
            r6.append(r7)     // Catch: java.lang.Exception -> L95
            java.lang.String r0 = r6.toString()     // Catch: java.lang.Exception -> L95
            r5.println(r0)     // Catch: java.lang.Exception -> L95
            if (r4 < 0) goto L7e
            r1 = r7
        L7e:
            java.io.PrintStream r0 = java.lang.System.out     // Catch: java.lang.Exception -> L95
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L95
            r3.<init>()     // Catch: java.lang.Exception -> L95
            java.lang.String r4 = "summary.mem: "
            r3.append(r4)     // Catch: java.lang.Exception -> L95
            r3.append(r1)     // Catch: java.lang.Exception -> L95
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L95
            r0.println(r3)     // Catch: java.lang.Exception -> L95
            goto L99
        L95:
            r0 = move-exception
            r0.printStackTrace()
        L99:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String getUnityCommandLineArgs() {
            org.cocos2dx.javascript.AppActivity r0 = org.cocos2dx.javascript.AppActivity.mactivity
            android.content.Intent r0 = r0.getIntent()
            android.os.Bundle r0 = r0.getExtras()
            java.lang.String r1 = "unity"
            java.lang.String r0 = r0.getString(r1)
            return r0
    }

    public static void hideSplash() {
            org.cocos2dx.javascript.AppActivity r0 = org.cocos2dx.javascript.AppActivity.mactivity
            com.bianfeng.gongxiang.screenlib.ScreenSdk.hideSplashView(r0)
            return
    }

    static void initSDKYMN() {
            return
    }

    public static void installPlugin(java.lang.String r4) {
            java.lang.String r0 = "weakNetTimeout"
            java.lang.String r1 = "noNetTimeout"
            java.lang.String r2 = "pluginId"
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L27
            r3.<init>(r4)     // Catch: org.json.JSONException -> L27
            boolean r4 = r3.has(r2)     // Catch: org.json.JSONException -> L27
            if (r4 == 0) goto L14
            r3.getString(r2)     // Catch: org.json.JSONException -> L27
        L14:
            boolean r4 = r3.has(r1)     // Catch: org.json.JSONException -> L27
            if (r4 == 0) goto L1d
            r3.getString(r1)     // Catch: org.json.JSONException -> L27
        L1d:
            boolean r4 = r3.has(r0)     // Catch: org.json.JSONException -> L27
            if (r4 == 0) goto L2b
            r3.getString(r0)     // Catch: org.json.JSONException -> L27
            goto L2b
        L27:
            r4 = move-exception
            r4.printStackTrace()
        L2b:
            return
    }

    public static void isInstallPlugin(java.lang.String r2) {
            java.lang.String r0 = "pluginId"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L11
            r1.<init>(r2)     // Catch: org.json.JSONException -> L11
            boolean r2 = r1.has(r0)     // Catch: org.json.JSONException -> L11
            if (r2 == 0) goto L15
            r1.getString(r0)     // Catch: org.json.JSONException -> L11
            goto L15
        L11:
            r2 = move-exception
            r2.printStackTrace()
        L15:
            return
    }

    public static boolean isInstalledViaZhuoyi(android.content.Context r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.String r1 = getInstallerPackageName(r1)
            java.lang.String r0 = "com.zhuoyi.appstore.lite"
            boolean r1 = r0.equals(r1)
            return r1
    }

    static void lambda$_showMainActivity$0() {
            r0 = 0
            org.cocos2dx.javascript.AppActivity.mactivity = r0
            java.lang.String r0 = "ymn"
            java.lang.String r1 = "Process杀掉killProcess"
            android.util.Log.e(r0, r1)
            int r0 = android.os.Process.myPid()
            android.os.Process.killProcess(r0)
            return
    }

    public static void openPlugin(java.lang.String r3) {
            java.lang.String r0 = "loginJsonStr"
            java.lang.String r1 = "pluginId"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1c
            r2.<init>(r3)     // Catch: org.json.JSONException -> L1c
            boolean r3 = r2.has(r1)     // Catch: org.json.JSONException -> L1c
            if (r3 == 0) goto L12
            r2.getString(r1)     // Catch: org.json.JSONException -> L1c
        L12:
            boolean r3 = r2.has(r0)     // Catch: org.json.JSONException -> L1c
            if (r3 == 0) goto L20
            r2.getString(r0)     // Catch: org.json.JSONException -> L1c
            goto L20
        L1c:
            r3 = move-exception
            r3.printStackTrace()
        L20:
            return
    }

    public static void postToSepperllita(java.lang.String r0) {
            return
    }

    public static void preloadPlugin(java.lang.String r2) {
            java.lang.String r0 = "pluginId"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L11
            r1.<init>(r2)     // Catch: org.json.JSONException -> L11
            boolean r2 = r1.has(r0)     // Catch: org.json.JSONException -> L11
            if (r2 == 0) goto L15
            r1.getString(r0)     // Catch: org.json.JSONException -> L11
            goto L15
        L11:
            r2 = move-exception
            r2.printStackTrace()
        L15:
            return
    }

    public static void queryPluginStatus(java.lang.String r2) {
            java.lang.String r0 = "pluginId"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L11
            r1.<init>(r2)     // Catch: org.json.JSONException -> L11
            boolean r2 = r1.has(r0)     // Catch: org.json.JSONException -> L11
            if (r2 == 0) goto L15
            r1.getString(r0)     // Catch: org.json.JSONException -> L11
            goto L15
        L11:
            r2 = move-exception
            r2.printStackTrace()
        L15:
            return
    }

    public static void quitUnity() {
            return
    }

    public static void showMainActivity(java.lang.String r1) {
            org.cocos2dx.javascript.AppActivity r0 = org.cocos2dx.javascript.AppActivity.mactivity
            if (r0 == 0) goto L9
            r0.unity2CocosData = r1
            r0._showMainActivity()
        L9:
            return
    }

    public static void showUnity(java.lang.String r0) {
            return
    }

    public static void startApk(java.lang.String r5) {
            java.lang.String r0 = "loginJsonStr"
            java.lang.String r1 = "pluginId"
            java.lang.String r2 = org.cocos2dx.javascript.AppActivity.TAG
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "startApk:"
            r3.append(r4)
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            android.util.Log.e(r2, r3)
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L32
            r2.<init>(r5)     // Catch: org.json.JSONException -> L32
            boolean r5 = r2.has(r1)     // Catch: org.json.JSONException -> L32
            if (r5 == 0) goto L28
            r2.getString(r1)     // Catch: org.json.JSONException -> L32
        L28:
            boolean r5 = r2.has(r0)     // Catch: org.json.JSONException -> L32
            if (r5 == 0) goto L36
            r2.getString(r0)     // Catch: org.json.JSONException -> L32
            goto L36
        L32:
            r5 = move-exception
            r5.printStackTrace()
        L36:
            return
    }

    public static void startApplicationDetailsSettings() {
            org.cocos2dx.javascript.AppActivity r0 = org.cocos2dx.javascript.AppActivity.mactivity
            if (r0 != 0) goto L5
            return
        L5:
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.settings.APPLICATION_DETAILS_SETTINGS"
            r0.<init>(r1)
            org.cocos2dx.javascript.AppActivity r1 = org.cocos2dx.javascript.AppActivity.mactivity
            java.lang.String r1 = r1.getPackageName()
            r2 = 0
            java.lang.String r3 = "package"
            android.net.Uri r1 = android.net.Uri.fromParts(r3, r1, r2)
            r0.setData(r1)
            org.cocos2dx.javascript.AppActivity r1 = org.cocos2dx.javascript.AppActivity.mactivity
            r1.startActivity(r0)
            return
    }

    public static java.lang.String strPluginAppParam() {
            java.lang.String r0 = "1"
            return r0
    }

    public static void unInstallPlugin(java.lang.String r2) {
            java.lang.String r0 = "pluginId"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L11
            r1.<init>(r2)     // Catch: org.json.JSONException -> L11
            boolean r2 = r1.has(r0)     // Catch: org.json.JSONException -> L11
            if (r2 == 0) goto L15
            r1.getString(r0)     // Catch: org.json.JSONException -> L11
            goto L15
        L11:
            r2 = move-exception
            r2.printStackTrace()
        L15:
            return
    }

    @Override
    protected void CallJSFuncByEvent(int r1, java.lang.String r2) {
            r0 = this;
            return
    }

    void _loadUnity(java.lang.String r1) {
            r0 = this;
            return
    }

    void _quitUnity() {
            r0 = this;
            return
    }

    void _sendDataToCocos(java.lang.String r1) {
            r0 = this;
            return
    }

    void _showMainActivity() {
            r6 = this;
            java.lang.String r0 = "ymn"
            java.lang.String r1 = "进入到了showMainActivity"
            android.util.Log.e(r0, r1)
            org.cocos2dx.javascript.AppActivity r1 = org.cocos2dx.javascript.AppActivity.mactivity
            if (r1 != 0) goto L11
            java.lang.String r1 = "showMainActivity - mUnityPlayer is null"
            android.util.Log.e(r0, r1)
            return
        L11:
            android.content.Intent r0 = r6.getIntent()
            android.os.Bundle r1 = r0.getExtras()
            java.lang.String r2 = "hostActivity"
            java.lang.String r1 = r1.getString(r2)
            android.os.Bundle r2 = r0.getExtras()
            java.lang.String r3 = "hostPackageName"
            java.lang.String r2 = r2.getString(r3)
            android.content.Intent r3 = new android.content.Intent
            r3.<init>()
            android.content.Intent r4 = r6.getIntent()
            android.net.Uri r4 = r4.getData()
            if (r4 == 0) goto L43
            android.content.Intent r4 = r6.getIntent()
            android.net.Uri r4 = r4.getData()
            r3.setData(r4)
        L43:
            android.content.Intent r4 = r6.getIntent()
            android.os.Bundle r4 = r4.getExtras()
            if (r4 == 0) goto L58
            android.content.Intent r4 = r6.getIntent()
            android.os.Bundle r4 = r4.getExtras()
            r3.putExtras(r4)
        L58:
            r4 = 131072(0x20000, float:1.83671E-40)
            r3.addFlags(r4)
            java.lang.String r4 = r6.unity2CocosData
            java.lang.String r5 = "data"
            r3.putExtra(r5, r4)
            android.os.Bundle r4 = r0.getExtras()
            java.lang.String r5 = "pluginId"
            boolean r4 = r4.containsKey(r5)
            if (r4 == 0) goto L7b
            android.os.Bundle r0 = r0.getExtras()
            java.lang.String r0 = r0.getString(r5)
            r3.putExtra(r5, r0)
        L7b:
            r3.setClassName(r2, r1)
            r6.startActivity(r3)
            java.lang.String r0 = "activity"
            java.lang.Object r0 = r6.getSystemService(r0)
            android.app.ActivityManager r0 = (android.app.ActivityManager) r0
            java.util.List r0 = r0.getRunningAppProcesses()
            java.util.Iterator r0 = r0.iterator()
        L91:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto Lca
            java.lang.Object r1 = r0.next()
            android.app.ActivityManager$RunningAppProcessInfo r1 = (android.app.ActivityManager.RunningAppProcessInfo) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "processName="
            r2.append(r3)
            java.lang.String r3 = r1.processName
            r2.append(r3)
            java.lang.String r3 = " uid="
            r2.append(r3)
            int r3 = r1.uid
            r2.append(r3)
            java.lang.String r3 = " pid="
            r2.append(r3)
            int r1 = r1.pid
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "ProcessUtil2"
            android.util.Log.e(r2, r1)
            goto L91
        Lca:
            org.cocos2dx.javascript.-$$Lambda$AppActivity$ewGgeuEDHOIhhblyMrJyjkCRups r0 = org.cocos2dx.javascript.-$$Lambda$AppActivity$ewGgeuEDHOIhhblyMrJyjkCRups.INSTANCE
            r6.runOnUiThread(r0)
            return
    }

    public void checkScheme() {
            r9 = this;
            java.lang.String r0 = " "
            android.content.Intent r1 = r9.getIntent()
            java.lang.String r2 = r1.getScheme()
            android.net.Uri r3 = r1.getData()
            java.io.PrintStream r4 = java.lang.System.out
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "scheme:"
            r5.append(r6)
            r5.append(r2)
            java.lang.String r2 = r5.toString()
            r4.println(r2)
            if (r3 == 0) goto Le5
            java.lang.String r2 = "key"
            java.lang.String r2 = r3.getQueryParameter(r2)
            java.io.PrintStream r3 = java.lang.System.out
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "String:"
            r4.append(r5)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            r3.println(r4)
            java.lang.String r3 = "clipboard"
            java.lang.Object r3 = r9.getSystemService(r3)     // Catch: java.lang.Exception -> Le1
            android.content.ClipboardManager r3 = (android.content.ClipboardManager) r3     // Catch: java.lang.Exception -> Le1
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le1
            r4.<init>()     // Catch: java.lang.Exception -> Le1
            android.content.ClipData r5 = r3.getPrimaryClip()     // Catch: java.lang.Exception -> Le1
            android.content.ClipDescription r5 = r5.getDescription()     // Catch: java.lang.Exception -> Le1
            java.lang.CharSequence r5 = r5.getLabel()     // Catch: java.lang.Exception -> Le1
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> Le1
            r4.append(r5)     // Catch: java.lang.Exception -> Le1
            r4.append(r0)     // Catch: java.lang.Exception -> Le1
            android.content.ClipData r5 = r3.getPrimaryClip()     // Catch: java.lang.Exception -> Le1
            r6 = 0
            android.content.ClipData$Item r5 = r5.getItemAt(r6)     // Catch: java.lang.Exception -> Le1
            java.lang.CharSequence r5 = r5.getText()     // Catch: java.lang.Exception -> Le1
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> Le1
            r4.append(r5)     // Catch: java.lang.Exception -> Le1
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Le1
            java.io.PrintStream r5 = java.lang.System.out     // Catch: java.lang.Exception -> Le1
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le1
            r7.<init>()     // Catch: java.lang.Exception -> Le1
            java.lang.String r8 = "String1:"
            r7.append(r8)     // Catch: java.lang.Exception -> Le1
            r7.append(r4)     // Catch: java.lang.Exception -> Le1
            java.lang.String r4 = r7.toString()     // Catch: java.lang.Exception -> Le1
            r5.println(r4)     // Catch: java.lang.Exception -> Le1
            java.lang.String r4 = ""
            android.content.ClipData r2 = android.content.ClipData.newPlainText(r4, r2)     // Catch: java.lang.Exception -> Le1
            r3.setPrimaryClip(r2)     // Catch: java.lang.Exception -> Le1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le1
            r2.<init>()     // Catch: java.lang.Exception -> Le1
            android.content.ClipData r4 = r3.getPrimaryClip()     // Catch: java.lang.Exception -> Le1
            android.content.ClipDescription r4 = r4.getDescription()     // Catch: java.lang.Exception -> Le1
            java.lang.CharSequence r4 = r4.getLabel()     // Catch: java.lang.Exception -> Le1
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> Le1
            r2.append(r4)     // Catch: java.lang.Exception -> Le1
            r2.append(r0)     // Catch: java.lang.Exception -> Le1
            android.content.ClipData r0 = r3.getPrimaryClip()     // Catch: java.lang.Exception -> Le1
            android.content.ClipData$Item r0 = r0.getItemAt(r6)     // Catch: java.lang.Exception -> Le1
            java.lang.CharSequence r0 = r0.getText()     // Catch: java.lang.Exception -> Le1
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> Le1
            r2.append(r0)     // Catch: java.lang.Exception -> Le1
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> Le1
            java.io.PrintStream r2 = java.lang.System.out     // Catch: java.lang.Exception -> Le1
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le1
            r3.<init>()     // Catch: java.lang.Exception -> Le1
            java.lang.String r4 = "String2:"
            r3.append(r4)     // Catch: java.lang.Exception -> Le1
            r3.append(r0)     // Catch: java.lang.Exception -> Le1
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Exception -> Le1
            r2.println(r0)     // Catch: java.lang.Exception -> Le1
            r0 = 0
            r1.setData(r0)     // Catch: java.lang.Exception -> Le1
            goto Le5
        Le1:
            r0 = move-exception
            r0.printStackTrace()
        Le5:
            return
    }

    @Override
    public android.content.res.Resources getResources() {
            r2 = this;
            android.content.res.Resources r0 = r2.uaalResouces
            if (r0 != 0) goto Lf
            org.cocos2dx.javascript.UaalResources r0 = new org.cocos2dx.javascript.UaalResources
            android.content.Context r1 = com.qihoo360.replugin.RePlugin.getPluginContext()
            r0.<init>(r1)
            r2.uaalResouces = r0
        Lf:
            android.content.res.Resources r0 = r2.uaalResouces
            return r0
    }

    void handleIntent(android.content.Intent r4) {
            r3 = this;
            if (r4 != 0) goto L9
            java.lang.String r0 = org.cocos2dx.javascript.AppActivity.TAG
            java.lang.String r1 = "handleIntent intent==null return"
            android.util.Log.e(r0, r1)
        L9:
            android.os.Bundle r0 = r4.getExtras()
            if (r0 != 0) goto L16
            java.lang.String r0 = org.cocos2dx.javascript.AppActivity.TAG
            java.lang.String r1 = "handleIntent intent.getExtras() == null return"
            android.util.Log.e(r0, r1)
        L16:
            if (r4 == 0) goto L66
            android.os.Bundle r0 = r4.getExtras()
            if (r0 != 0) goto L1f
            goto L66
        L1f:
            android.os.Bundle r0 = r4.getExtras()
            java.lang.String r1 = "data"
            boolean r0 = r0.containsKey(r1)
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            java.lang.String r2 = org.cocos2dx.javascript.AppActivity.TAG
            java.lang.String r0 = r0.toString()
            android.util.Log.e(r2, r0)
            android.os.Bundle r0 = r4.getExtras()
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L50
            android.os.Bundle r0 = r4.getExtras()
            java.lang.String r0 = r0.getString(r1)
            java.lang.String r1 = org.cocos2dx.javascript.AppActivity.TAG
            android.util.Log.e(r1, r0)
            r3._sendDataToCocos(r0)
        L50:
            android.os.Bundle r0 = r4.getExtras()
            java.lang.String r1 = "isUnityLoaded"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L66
            android.os.Bundle r4 = r4.getExtras()
            boolean r4 = r4.getBoolean(r1)
            r3.isUnityLoaded = r4
        L66:
            return
    }

    @Override
    protected void onActivityResult(int r2, int r3, android.content.Intent r4) {
            r1 = this;
            super.onActivityResult(r2, r3, r4)
            r0 = 10001(0x2711, float:1.4014E-41)
            if (r2 != r0) goto L2a
            r2 = -1
            if (r3 != r2) goto L2a
            if (r4 == 0) goto L2a
            java.lang.String r2 = "editbox_text"
            java.lang.String r3 = r4.getStringExtra(r2)
            if (r3 == 0) goto L19
            java.lang.String r2 = r4.getStringExtra(r2)
            goto L1b
        L19:
            java.lang.String r2 = ""
        L1b:
            r3 = 0
            java.lang.String r0 = "editbox_confirm"
            boolean r3 = r4.getBooleanExtra(r0, r3)
            org.cocos2dx.javascript.AppActivity$1 r4 = new org.cocos2dx.javascript.AppActivity$1
            r4.<init>(r1, r2, r3)
            r1.runOnGLThread(r4)
        L2a:
            return
    }

    @Override
    public void onBackPressed() {
            r0 = this;
            super.onBackPressed()
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            org.cocos2dx.javascript.AppActivity.mactivity = r2
            org.cocos2dx.javascript.YmnSupport r3 = r2.YmnSupport
            r3.init(r2)
            org.cocos2dx.javascript.AppActivity.appContext = r2
            android.content.Intent r3 = r2.getIntent()
            java.lang.String r0 = "unity"
            java.lang.String r3 = r3.getStringExtra(r0)
            java.lang.String r3 = r2.updateUnityCommandLineArguments(r3)
            android.content.Intent r1 = r2.getIntent()
            r1.putExtra(r0, r3)
            android.view.Window r3 = r2.getWindow()
            r0 = 128(0x80, float:1.8E-43)
            r3.setFlags(r0, r0)
            com.bianfeng.libuniverse.Universe.onCreate(r2)
            com.bianfeng.pluginlibrary.RePluginSdk.onCreate(r2)
            boolean r3 = isInstalledViaZhuoyi(r2)
            java.lang.String r0 = "EnvCheck"
            if (r3 == 0) goto L3e
            java.lang.String r3 = "应用通过卓易通安装"
            android.util.Log.d(r0, r3)
            goto L43
        L3e:
            java.lang.String r3 = "应用通过常规渠道安装"
            android.util.Log.d(r0, r3)
        L43:
            return
    }

    @Override
    public org.cocos2dx.lib.Cocos2dxGLSurfaceView onCreateView() {
            r8 = this;
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r7 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView
            r7.<init>(r8)
            r1 = 5
            r2 = 6
            r3 = 5
            r4 = 0
            r5 = 16
            r6 = 8
            r0 = r7
            r0.setEGLConfigChooser(r1, r2, r3, r4, r5, r6)
            return r7
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            super.onDestroy()
            boolean r0 = super.getTaskRootCreate()
            if (r0 != 0) goto L9
        L9:
            return
    }

    @Override
    protected void onNewIntent(android.content.Intent r3) {
            r2 = this;
            super.onNewIntent(r3)
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.String r1 = "_debug onNewIntent"
            r0.println(r1)
            if (r3 == 0) goto L16
            android.net.Uri r0 = r3.getData()
            if (r0 == 0) goto L16
            r2.checkScheme()
            goto L27
        L16:
            if (r3 != 0) goto L20
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.String r1 = "_debug onNewIntent intent is null"
            r0.println(r1)
            goto L27
        L20:
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.String r1 = "_debug onNewIntent intent.getData is null"
            r0.println(r1)
        L27:
            org.cocos2dx.javascript.YmnSupport r0 = r2.YmnSupport
            r0.onNewIntent(r3)
            return
    }

    @Override
    protected void onPause() {
            r1 = this;
            super.onPause()
            org.cocos2dx.javascript.YmnSupport r0 = r1.YmnSupport
            r0.onPause()
            return
    }

    @Override
    public void onRequestPermissionsResult(int r1, java.lang.String[] r2, int[] r3) {
            r0 = this;
            super.onRequestPermissionsResult(r1, r2, r3)
            return
    }

    @Override
    protected void onRestart() {
            r0 = this;
            super.onRestart()
            return
    }

    @Override
    protected void onRestoreInstanceState(android.os.Bundle r1) {
            r0 = this;
            super.onRestoreInstanceState(r1)
            return
    }

    @Override
    protected void onResume() {
            r1 = this;
            super.onResume()
            r1.checkScheme()
            org.cocos2dx.javascript.YmnSupport r0 = r1.YmnSupport
            r0.onResume()
            return
    }

    @Override
    protected void onSaveInstanceState(android.os.Bundle r1) {
            r0 = this;
            super.onSaveInstanceState(r1)
            return
    }

    @Override
    protected void onStart() {
            r1 = this;
            super.onStart()
            org.cocos2dx.javascript.YmnSupport r0 = r1.YmnSupport
            r0.onStart()
            return
    }

    @Override
    protected void onStop() {
            r1 = this;
            super.onStop()
            org.cocos2dx.javascript.YmnSupport r0 = r1.YmnSupport
            r0.onStop()
            return
    }

    protected java.lang.String updateUnityCommandLineArguments(java.lang.String r1) {
            r0 = this;
            return r1
    }

    public void ymnUnityCallback(int r3, java.lang.String r4) {
            r2 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1 = 0
            r0[r1] = r3
            r3 = 1
            r0[r3] = r4
            java.lang.String r3 = ">> onCallback: %d, %s"
            java.lang.String r3 = java.lang.String.format(r3, r0)
            java.lang.String r4 = "1"
            android.util.Log.i(r4, r3)
            return
    }
}
