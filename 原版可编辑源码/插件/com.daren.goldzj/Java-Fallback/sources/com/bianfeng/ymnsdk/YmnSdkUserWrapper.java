package com.bianfeng.ymnsdk;

import com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.util.Logger;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Set;

public class YmnSdkUserWrapper extends YmnSdkPaymentWrapper {
    private static Map<String, UserFeatureWrapper> autoFunctions;
    private static String pluginName;
    private static Set<UserFeatureWrapper> wrappers;

    public YmnSdkUserWrapper() {
    }

    private static boolean availableDefault() {
        Set<UserFeatureWrapper> r0 = wrappers;
        if (r0 != null) goto L5;
    L10:
        Logger.e("not exist available UserFeature plugin or has more than 1 UserFeature plugin");
        return false;
    L5:
        if (r0.isEmpty() == true) goto L10;
        if (wrappers.size() > 1) goto L10;
        return true;
    }

    public static void callFunction(String r1) {
        Map<String, UserFeatureWrapper> r0 = autoFunctions;
        if (r0 != null) goto L5;
    L9:
        Map<String, UserFeatureWrapper> r02 = autoFunctions;
        if (r02 != null) goto L12;
    L16:
        YmnSdkWrapper.callFunction(r1);
        return;
    L12:
        if (r02.containsKey(r1) == false) goto L16;
        if (r1.contains("init") == false) goto L16;
        autoFunctions.get(r1).a().inited();
        return;
    L5:
        if (r0.containsKey(r1) == false) goto L9;
        if (r1.contains(HostConstant.login) == false) goto L9;
        autoFunctions.get(r1).login();
        goto L9
    }

    public static void enterPlatform() {
        if (availableDefault() == false) goto L6;
        getUserDefault().enterPlatform();
        return;
    }

    public static void exit() {
        if (availableDefault() == false) goto L6;
        getUserDefault().exit();
        return;
    }

    public static void getAndShowVerifyRealName() {
        if (availableDefault() == false) goto L6;
        getUserDefault().getAndShowVerifyRealName();
        return;
    }

    public static String getPluginName() {
        return pluginName;
    }

    public static UserFeatureWrapper getUserDefault() {
        Set<UserFeatureWrapper> r0 = wrappers;
        if (r0 != null) goto L5;
        return null;
    L5:
        if (r0.isEmpty() == false) goto L8;
        return null;
    L8:
        return wrappers.iterator().next();
    }

    public static IUserFeature.UserInfo getUserInfo() {
        if (availableDefault() == true) goto L5;
        return null;
    L5:
        return getUserDefault().getUserInfo();
    }

    public static Set<UserFeatureWrapper> getUserWrappers() {
        return wrappers;
    }

    public static void getVerifyRealNameInfo() {
        if (availableDefault() == false) goto L6;
        getUserDefault().getVerifyRealNameInfo();
        return;
    }

    public static void hideToolBar() {
        if (availableDefault() == false) goto L6;
        getUserDefault().hideToolBar();
        return;
    }

    public static boolean isLogined() {
        if (availableDefault() == true) goto L5;
        return false;
    L5:
        return getUserDefault().isLogined();
    }

    public static boolean isSupportFunction(String r1) {
        Map<String, UserFeatureWrapper> r0 = autoFunctions;
        if (r0 == null) goto L9;
        if (r0.containsKey(r1) == false) goto L9;
        return true;
    L9:
        return YmnSdkPaymentWrapper.isSupportFunction(r1);
    }

    public static void login() {
        if (availableDefault() == false) goto L6;
        getUserDefault().login();
        return;
    }

    public static void logout() {
        if (availableDefault() == false) goto L6;
        getUserDefault().logout();
        return;
    }

    private static void registUserFeatureAutoFunctions(UserFeatureWrapper r3) {
        if (autoFunctions != null) goto L5;
        autoFunctions = new HashMap();
    L5:
        pluginName = r3.a().getPluginName();
        autoFunctions.put(pluginName + "_login", r3);
        autoFunctions.put(pluginName + "_plugin_init", r3);
    }

    public static void registUserFeatureWrapper(UserFeatureWrapper r1) {
        if (wrappers != null) goto L5;
        wrappers = new HashSet();
    L5:
        wrappers.add(r1);
        registUserFeatureAutoFunctions(r1);
    }

    public static void showToolBar() {
        if (availableDefault() == false) goto L6;
        getUserDefault().showToolBar();
        return;
    }

    public static void showVerifyRealName() {
        if (availableDefault() == false) goto L6;
        getUserDefault().showVerifyRealName();
        return;
    }

    public static void submitUserInfo(LinkedHashMap<String, String> r1) {
        if (availableDefault() == false) goto L6;
        getUserDefault().submitUserInfo(r1);
        return;
    }

    public static void switchAccount() {
        if (availableDefault() == false) goto L6;
        getUserDefault().switchAccount();
        return;
    }
}
