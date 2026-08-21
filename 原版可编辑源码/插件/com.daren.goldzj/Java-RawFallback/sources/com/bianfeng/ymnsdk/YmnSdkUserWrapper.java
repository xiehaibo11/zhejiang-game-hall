package com.bianfeng.ymnsdk;

public class YmnSdkUserWrapper extends com.bianfeng.ymnsdk.YmnSdkPaymentWrapper {
    private static java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> autoFunctions;
    private static java.lang.String pluginName;
    private static java.util.Set<com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> wrappers;

    public YmnSdkUserWrapper() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean availableDefault() {
            java.util.Set<com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.wrappers
            if (r0 == 0) goto L15
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L15
            java.util.Set<com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.wrappers
            int r0 = r0.size()
            r1 = 1
            if (r0 <= r1) goto L14
            goto L15
        L14:
            return r1
        L15:
            java.lang.String r0 = "not exist available UserFeature plugin or has more than 1 UserFeature plugin"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            r0 = 0
            return r0
    }

    public static void callFunction(java.lang.String r1) {
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.autoFunctions
            if (r0 == 0) goto L1d
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L1d
            java.lang.String r0 = "login"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L1d
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.autoFunctions
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = (com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper) r0
            r0.login()
        L1d:
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.autoFunctions
            if (r0 == 0) goto L3f
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L3f
            java.lang.String r0 = "init"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L3f
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.autoFunctions
            java.lang.Object r1 = r0.get(r1)
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r1 = (com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper) r1
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = r1.a()
            r1.inited()
            goto L42
        L3f:
            com.bianfeng.ymnsdk.YmnSdkWrapper.callFunction(r1)
        L42:
            return
    }

    public static void enterPlatform() {
            boolean r0 = availableDefault()
            if (r0 == 0) goto Ld
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = getUserDefault()
            r0.enterPlatform()
        Ld:
            return
    }

    public static void exit() {
            boolean r0 = availableDefault()
            if (r0 == 0) goto Ld
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = getUserDefault()
            r0.exit()
        Ld:
            return
    }

    public static void getAndShowVerifyRealName() {
            boolean r0 = availableDefault()
            if (r0 == 0) goto Ld
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = getUserDefault()
            r0.getAndShowVerifyRealName()
        Ld:
            return
    }

    public static java.lang.String getPluginName() {
            java.lang.String r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.pluginName
            return r0
    }

    public static com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper getUserDefault() {
            java.util.Set<com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.wrappers
            if (r0 == 0) goto L18
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Lb
            goto L18
        Lb:
            java.util.Set<com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.wrappers
            java.util.Iterator r0 = r0.iterator()
            java.lang.Object r0 = r0.next()
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = (com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper) r0
            return r0
        L18:
            r0 = 0
            return r0
    }

    public static com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo getUserInfo() {
            boolean r0 = availableDefault()
            if (r0 == 0) goto Lf
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = getUserDefault()
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r0 = r0.getUserInfo()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public static java.util.Set<com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> getUserWrappers() {
            java.util.Set<com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.wrappers
            return r0
    }

    public static void getVerifyRealNameInfo() {
            boolean r0 = availableDefault()
            if (r0 == 0) goto Ld
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = getUserDefault()
            r0.getVerifyRealNameInfo()
        Ld:
            return
    }

    public static void hideToolBar() {
            boolean r0 = availableDefault()
            if (r0 == 0) goto Ld
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = getUserDefault()
            r0.hideToolBar()
        Ld:
            return
    }

    public static boolean isLogined() {
            boolean r0 = availableDefault()
            if (r0 == 0) goto Lf
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = getUserDefault()
            boolean r0 = r0.isLogined()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public static boolean isSupportFunction(java.lang.String r1) {
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.autoFunctions
            if (r0 == 0) goto Lc
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto Lc
            r1 = 1
            return r1
        Lc:
            boolean r1 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.isSupportFunction(r1)
            return r1
    }

    public static void login() {
            boolean r0 = availableDefault()
            if (r0 == 0) goto Ld
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = getUserDefault()
            r0.login()
        Ld:
            return
    }

    public static void logout() {
            boolean r0 = availableDefault()
            if (r0 == 0) goto Ld
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = getUserDefault()
            r0.logout()
        Ld:
            return
    }

    private static void registUserFeatureAutoFunctions(com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r3) {
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.autoFunctions
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.autoFunctions = r0
        Lb:
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r3.a()
            java.lang.String r0 = r0.getPluginName()
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.pluginName = r0
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.autoFunctions
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.pluginName
            r1.append(r2)
            java.lang.String r2 = "_login"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.put(r1, r3)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.autoFunctions
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.pluginName
            r1.append(r2)
            java.lang.String r2 = "_plugin_init"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.put(r1, r3)
            return
    }

    public static void registUserFeatureWrapper(com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r1) {
            java.util.Set<com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.wrappers
            if (r0 != 0) goto Lb
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.wrappers = r0
        Lb:
            java.util.Set<com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.wrappers
            r0.add(r1)
            registUserFeatureAutoFunctions(r1)
            return
    }

    public static void showToolBar() {
            boolean r0 = availableDefault()
            if (r0 == 0) goto Ld
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = getUserDefault()
            r0.showToolBar()
        Ld:
            return
    }

    public static void showVerifyRealName() {
            boolean r0 = availableDefault()
            if (r0 == 0) goto Ld
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = getUserDefault()
            r0.showVerifyRealName()
        Ld:
            return
    }

    public static void submitUserInfo(java.util.LinkedHashMap<java.lang.String, java.lang.String> r1) {
            boolean r0 = availableDefault()
            if (r0 == 0) goto Ld
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = getUserDefault()
            r0.submitUserInfo(r1)
        Ld:
            return
    }

    public static void switchAccount() {
            boolean r0 = availableDefault()
            if (r0 == 0) goto Ld
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = getUserDefault()
            r0.switchAccount()
        Ld:
            return
    }
}
