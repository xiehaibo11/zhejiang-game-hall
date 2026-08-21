package com.ymnsdk.replugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RepluginSdkJavaBridging {
    private static int RePluginSdk_getPluginsInfo_failure = 51001;
    private static int RePluginSdk_getPluginsInfo_success = 51000;
    private static int RePluginSdk_installPlugin_downloading = 53002;
    private static int RePluginSdk_installPlugin_failure = 53001;
    private static int RePluginSdk_installPlugin_success = 53000;
    private static int RePluginSdk_isInstallPlugin_installed = 54000;
    private static int RePluginSdk_isInstallPlugin_notInstall = 54001;
    private static int RePluginSdk_plugin_clear_fail = 59001;
    private static int RePluginSdk_plugin_clear_success = 59000;
    private static int RePluginSdk_plugin_exit = 58001;
    private static int RePluginSdk_plugin_open_downloading = 510002;
    private static int RePluginSdk_plugin_open_fail = 510001;
    private static int RePluginSdk_plugin_open_success = 510000;
    private static int RePluginSdk_preloadPlugin_failure = 57001;
    private static int RePluginSdk_preloadPlugin_success = 57000;
    private static int RePluginSdk_queryPluginStatus_available = 52000;
    private static int RePluginSdk_queryPluginStatus_failure = 52002;
    private static int RePluginSdk_queryPluginStatus_unAvailable = 52001;
    private static int RePluginSdk_startApk_failure = 55001;
    private static int RePluginSdk_startApk_success = 55000;
    private static int RePluginSdk_unInstallPlugin_failure = 56001;
    private static int RePluginSdk_unInstallPlugin_success = 56000;
    private static long beforeProcess = -1;
    static volatile boolean isAllowing = false;
    static volatile boolean isInit = false;
    static volatile boolean isOpenComplete = true;
    static boolean isOpenSuc;
    private static com.ymnsdk.replugin.listener.RepluginListener repluginListener;













    static {
            return
    }

    public RepluginSdkJavaBridging() {
            r0 = this;
            r0.<init>()
            return
    }

    static int access$000() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_getPluginsInfo_success
            return r0
    }

    static int access$100() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_getPluginsInfo_failure
            return r0
    }

    static int access$1000() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_isInstallPlugin_notInstall
            return r0
    }

    static int access$1100() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_startApk_success
            return r0
    }

    static int access$1200() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_startApk_failure
            return r0
    }

    static int access$1300() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_unInstallPlugin_success
            return r0
    }

    static int access$1400() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_unInstallPlugin_failure
            return r0
    }

    static int access$1500() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_preloadPlugin_success
            return r0
    }

    static int access$1600() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_preloadPlugin_failure
            return r0
    }

    static int access$1700() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_plugin_clear_success
            return r0
    }

    static int access$1800() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_plugin_clear_fail
            return r0
    }

    static int access$1900() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_plugin_open_success
            return r0
    }

    static int access$200() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_queryPluginStatus_unAvailable
            return r0
    }

    static int access$2000() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_plugin_open_fail
            return r0
    }

    static int access$2100() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_plugin_open_downloading
            return r0
    }

    static int access$2200() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_plugin_exit
            return r0
    }

    static int access$300() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_queryPluginStatus_available
            return r0
    }

    static int access$400() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_queryPluginStatus_failure
            return r0
    }

    static int access$500() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_installPlugin_success
            return r0
    }

    static int access$600() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_installPlugin_failure
            return r0
    }

    static int access$700() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_installPlugin_downloading
            return r0
    }

    static long access$800() {
            long r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.beforeProcess
            return r0
    }

    static long access$802(long r0) {
            com.ymnsdk.replugin.RepluginSdkJavaBridging.beforeProcess = r0
            return r0
    }

    static int access$900() {
            int r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.RePluginSdk_isInstallPlugin_installed
            return r0
    }

    public static void addRePluginLister(com.ymnsdk.replugin.listener.RepluginListener r0) {
            com.ymnsdk.replugin.RepluginSdkJavaBridging.repluginListener = r0
            return
    }

    public static void allowStartPlugin(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = 1
            com.ymnsdk.replugin.RepluginSdkJavaBridging.isAllowing = r0
            java.lang.String r0 = "1"
            boolean r3 = r3.equals(r0)
            com.ymnsdk.replugin.RepluginSdkJavaBridging$11 r0 = new com.ymnsdk.replugin.RepluginSdkJavaBridging$11
            r0.<init>()
            com.ymnsdk.replugin.RePluginSdk.allowStartPlugin(r1, r2, r3, r0)
            return
    }

    public static void allowUserPrivacy() {
            com.ymnsdk.replugin.RePluginSdk.allowUserPrivacy()
            return
    }

    public static void clearDownloadCache(java.lang.String r1) {
            com.ymnsdk.replugin.RepluginSdkJavaBridging$9 r0 = new com.ymnsdk.replugin.RepluginSdkJavaBridging$9
            r0.<init>()
            com.ymnsdk.replugin.RePluginSdk.clearDownloadCache(r1, r0)
            return
    }

    public static void getPluginsInfo(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.isInit
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            com.ymnsdk.replugin.RepluginSdkJavaBridging.isInit = r0
            com.ymnsdk.replugin.RepluginSdkJavaBridging$1 r0 = new com.ymnsdk.replugin.RepluginSdkJavaBridging$1
            r0.<init>()
            com.ymnsdk.replugin.RePluginSdk.getPluginsInfo(r1, r2, r0)
            return
    }

    public static void installPlugin(java.lang.String r1) {
            com.ymnsdk.replugin.RepluginSdkJavaBridging$3 r0 = new com.ymnsdk.replugin.RepluginSdkJavaBridging$3
            r0.<init>()
            com.ymnsdk.replugin.RePluginSdk.installPlugin(r1, r0)
            return
    }

    public static void installPlugin(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            com.ymnsdk.replugin.RepluginSdkJavaBridging$4 r0 = new com.ymnsdk.replugin.RepluginSdkJavaBridging$4
            r0.<init>()
            com.ymnsdk.replugin.RePluginSdk.installPlugin(r1, r2, r3, r0)
            return
    }

    public static void isInstallPlugin(java.lang.String r1) {
            com.ymnsdk.replugin.RepluginSdkJavaBridging$5 r0 = new com.ymnsdk.replugin.RepluginSdkJavaBridging$5
            r0.<init>()
            com.ymnsdk.replugin.RePluginSdk.isInstallPlugin(r1, r0)
            return
    }

    public static void onCreate(android.content.Context r0) {
            com.ymnsdk.replugin.RePluginSdk.onCreate(r0)
            setPluginExitListener()
            r0 = 0
            com.ymnsdk.replugin.RepluginSdkJavaBridging.isInit = r0
            return
    }

    public static void onDestory() {
            com.ymnsdk.replugin.RePluginSdk.onDestory()
            return
    }

    public static void onNewIntent(android.content.Intent r0) {
            com.ymnsdk.replugin.RePluginSdk.onNewIntent(r0)
            return
    }

    public static void openPlugin(java.lang.String r1, java.lang.String r2) {
            r0 = 1
            com.ymnsdk.replugin.util.DownloadUtils.isUserDownload = r0
            boolean r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.isOpenComplete
            if (r0 != 0) goto L8
            return
        L8:
            boolean r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.isAllowing
            if (r0 == 0) goto Ld
            return
        Ld:
            r0 = 0
            com.ymnsdk.replugin.RepluginSdkJavaBridging.isOpenComplete = r0
            com.ymnsdk.replugin.RepluginSdkJavaBridging.isOpenSuc = r0
            com.ymnsdk.replugin.RepluginSdkJavaBridging$10 r0 = new com.ymnsdk.replugin.RepluginSdkJavaBridging$10
            r0.<init>()
            com.ymnsdk.replugin.RePluginSdk.openPlugin(r1, r2, r0)
            return
    }

    public static void postToSepperllita(java.lang.String r0) {
            com.ymnsdk.replugin.RePluginSdk.postToSepperllita(r0)
            return
    }

    public static void preloadPlugin(java.lang.String r2) {
            java.lang.String r0 = "ymn"
            java.lang.String r1 = "到了preloadPlugin"
            android.util.Log.d(r0, r1)
            com.ymnsdk.replugin.RepluginSdkJavaBridging$8 r0 = new com.ymnsdk.replugin.RepluginSdkJavaBridging$8
            r0.<init>()
            com.ymnsdk.replugin.RePluginSdk.preloadPlugin(r2, r0)
            return
    }

    public static void queryPluginStatus(java.lang.String r1) {
            com.ymnsdk.replugin.RepluginSdkJavaBridging$2 r0 = new com.ymnsdk.replugin.RepluginSdkJavaBridging$2
            r0.<init>()
            com.ymnsdk.replugin.RePluginSdk.queryPluginStatus(r1, r0)
            return
    }

    public static void sendResult(int r1, java.lang.String r2) {
            com.ymnsdk.replugin.listener.RepluginListener r0 = com.ymnsdk.replugin.RepluginSdkJavaBridging.repluginListener
            r0.sendRepluginCodeAndMsg(r1, r2)
            return
    }

    public static void setPluginExitListener() {
            com.ymnsdk.replugin.RepluginSdkJavaBridging$12 r0 = new com.ymnsdk.replugin.RepluginSdkJavaBridging$12
            r0.<init>()
            com.ymnsdk.replugin.RePluginSdk.setPluginExitListener(r0)
            return
    }

    public static void startApk(java.lang.String r1, java.lang.String r2) {
            com.ymnsdk.replugin.RepluginSdkJavaBridging$6 r0 = new com.ymnsdk.replugin.RepluginSdkJavaBridging$6
            r0.<init>()
            com.ymnsdk.replugin.RePluginSdk.startApk(r1, r2, r0)
            return
    }

    public static void unInstallPlugin(java.lang.String r1) {
            com.ymnsdk.replugin.RepluginSdkJavaBridging$7 r0 = new com.ymnsdk.replugin.RepluginSdkJavaBridging$7
            r0.<init>()
            com.ymnsdk.replugin.RePluginSdk.unInstallPlugin(r1, r0)
            return
    }
}
