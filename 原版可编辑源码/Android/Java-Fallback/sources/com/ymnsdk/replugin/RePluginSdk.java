package com.ymnsdk.replugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RePluginSdk {
    private static com.ymnsdk.replugin.PluginInterface pluginInterface;

    static {
            com.ymnsdk.replugin.PluginInterface r0 = new com.ymnsdk.replugin.PluginInterface
            r0.<init>()
            com.ymnsdk.replugin.RePluginSdk.pluginInterface = r0
            return
    }

    public RePluginSdk() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void allowStartPlugin(java.lang.String r1, java.lang.String r2, boolean r3, com.ymnsdk.replugin.listener.AllowStartPluginListener r4) {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            r0.allowStartPlugin(r1, r2, r3, r4)
            return
    }

    public static void allowUserPrivacy() {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            r0.allowUserPrivacy()
            return
    }

    public static void clearDownloadCache(java.lang.String r1, com.ymnsdk.replugin.listener.ClearDownloadCacheListener r2) {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            r0.clearDownloadCache(r1, r2)
            return
    }

    public static java.lang.String getFrameworkVersion() {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            java.lang.String r0 = r0.get_framework_version()
            return r0
    }

    public static void getPluginsInfo(java.lang.String r1, java.lang.String r2, com.ymnsdk.replugin.listener.GetPluginsStatusInfoListener r3) {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            r0.getPluginsInfo(r1, r2, r3)
            return
    }

    public static void installPlugin(java.lang.String r3, com.ymnsdk.replugin.listener.InstallPluginStatusListener r4) {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            r1 = 5
            r2 = 15
            r0.installPlugin(r3, r1, r2, r4)
            return
    }

    public static void installPlugin(java.lang.String r1, java.lang.String r2, java.lang.String r3, com.ymnsdk.replugin.listener.InstallPluginStatusListener r4) {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface     // Catch: java.lang.Exception -> L16
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L16
            int r2 = r2.intValue()     // Catch: java.lang.Exception -> L16
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L16
            int r3 = r3.intValue()     // Catch: java.lang.Exception -> L16
            r0.installPlugin(r1, r2, r3, r4)     // Catch: java.lang.Exception -> L16
            goto L1f
        L16:
            r1 = move-exception
            r1.printStackTrace()
            java.lang.String r1 = "传参类型不合规"
            r4.onFailure(r1)
        L1f:
            return
    }

    public static boolean is64Bit() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "is64Bit"
            r0.append(r1)
            com.ymnsdk.replugin.PluginInterface r1 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            boolean r1 = r1.is64Bit()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ymnrelugin"
            android.util.Log.e(r1, r0)
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            boolean r0 = r0.is64Bit()
            return r0
    }

    public static void isInstallPlugin(java.lang.String r1, com.ymnsdk.replugin.listener.IsInstallPluginStatusListener r2) {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            r0.isInstallPlugin(r1, r2)
            return
    }

    public static void onCreate(android.content.Context r1) {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            r0.onCreate(r1)
            com.bianfeng.ymnsdk.utilslib.UtilsSdk.initContext(r1)
            return
    }

    public static void onDestory() {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            r0.onDestory()
            return
    }

    public static void onNewIntent(android.content.Intent r1) {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            r0.onNewIntent(r1)
            return
    }

    public static void openPlugin(java.lang.String r1, java.lang.String r2, com.ymnsdk.replugin.listener.OpenListener r3) {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            r0.openPlugin(r1, r2, r3)
            return
    }

    public static void postToSepperllita(java.lang.String r1) {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            r0.postToSepperllita(r1)
            return
    }

    public static void preloadPlugin(java.lang.String r1, com.ymnsdk.replugin.listener.PreloadListener r2) {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            r0.preLoadPlugin(r1, r2)
            return
    }

    public static void queryPluginStatus(java.lang.String r1, com.ymnsdk.replugin.listener.QueryPluginStatusListener r2) {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            r0.queryPluginStatus(r1, r2)
            return
    }

    public static void setPluginExitListener(com.ymnsdk.replugin.listener.PluginExitListener r1) {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            r0.setPluginExitListener(r1)
            return
    }

    public static void startApk(java.lang.String r1, java.lang.String r2, com.ymnsdk.replugin.listener.StartPluginStatusListener r3) {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            r0.startApk(r1, r2, r3)
            return
    }

    public static void unInstallPlugin(java.lang.String r1, com.ymnsdk.replugin.listener.UnInstallPluginStatusListener r2) {
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            r0.unInstallPlugin(r1, r2)
            return
    }

    public com.ymnsdk.replugin.PluginInterface getPluginInterface() {
            r1 = this;
            com.ymnsdk.replugin.PluginInterface r0 = com.ymnsdk.replugin.RePluginSdk.pluginInterface
            return r0
    }

    public void setPluginInterface(com.ymnsdk.replugin.PluginInterface r1) {
            r0 = this;
            com.ymnsdk.replugin.RePluginSdk.pluginInterface = r1
            return
    }
}
