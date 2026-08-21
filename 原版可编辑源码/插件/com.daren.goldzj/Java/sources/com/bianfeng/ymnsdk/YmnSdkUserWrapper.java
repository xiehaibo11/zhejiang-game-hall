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

    private static boolean availableDefault() {
        Set<UserFeatureWrapper> set = wrappers;
        if (set != null && !set.isEmpty() && wrappers.size() <= 1) {
            return true;
        }
        Logger.e("not exist available UserFeature plugin or has more than 1 UserFeature plugin");
        return false;
    }

    public static void callFunction(String str) {
        Map<String, UserFeatureWrapper> map = autoFunctions;
        if (map != null && map.containsKey(str) && str.contains(HostConstant.login)) {
            autoFunctions.get(str).login();
        }
        Map<String, UserFeatureWrapper> map2 = autoFunctions;
        if (map2 != null && map2.containsKey(str) && str.contains("init")) {
            autoFunctions.get(str).a().inited();
        } else {
            YmnSdkWrapper.callFunction(str);
        }
    }

    public static void enterPlatform() {
        if (availableDefault()) {
            getUserDefault().enterPlatform();
        }
    }

    public static void exit() {
        if (availableDefault()) {
            getUserDefault().exit();
        }
    }

    public static void getAndShowVerifyRealName() {
        if (availableDefault()) {
            getUserDefault().getAndShowVerifyRealName();
        }
    }

    public static String getPluginName() {
        return pluginName;
    }

    public static UserFeatureWrapper getUserDefault() {
        Set<UserFeatureWrapper> set = wrappers;
        if (set == null || set.isEmpty()) {
            return null;
        }
        return wrappers.iterator().next();
    }

    public static IUserFeature.UserInfo getUserInfo() {
        if (availableDefault()) {
            return getUserDefault().getUserInfo();
        }
        return null;
    }

    public static Set<UserFeatureWrapper> getUserWrappers() {
        return wrappers;
    }

    public static void getVerifyRealNameInfo() {
        if (availableDefault()) {
            getUserDefault().getVerifyRealNameInfo();
        }
    }

    public static void hideToolBar() {
        if (availableDefault()) {
            getUserDefault().hideToolBar();
        }
    }

    public static boolean isLogined() {
        if (availableDefault()) {
            return getUserDefault().isLogined();
        }
        return false;
    }

    public static boolean isSupportFunction(String str) {
        Map<String, UserFeatureWrapper> map = autoFunctions;
        if (map == null || !map.containsKey(str)) {
            return YmnSdkPaymentWrapper.isSupportFunction(str);
        }
        return true;
    }

    public static void login() {
        if (availableDefault()) {
            getUserDefault().login();
        }
    }

    public static void logout() {
        if (availableDefault()) {
            getUserDefault().logout();
        }
    }

    private static void registUserFeatureAutoFunctions(UserFeatureWrapper userFeatureWrapper) {
        if (autoFunctions == null) {
            autoFunctions = new HashMap();
        }
        pluginName = userFeatureWrapper.a().getPluginName();
        autoFunctions.put(pluginName + "_login", userFeatureWrapper);
        autoFunctions.put(pluginName + "_plugin_init", userFeatureWrapper);
    }

    public static void registUserFeatureWrapper(UserFeatureWrapper userFeatureWrapper) {
        if (wrappers == null) {
            wrappers = new HashSet();
        }
        wrappers.add(userFeatureWrapper);
        registUserFeatureAutoFunctions(userFeatureWrapper);
    }

    public static void showToolBar() {
        if (availableDefault()) {
            getUserDefault().showToolBar();
        }
    }

    public static void showVerifyRealName() {
        if (availableDefault()) {
            getUserDefault().showVerifyRealName();
        }
    }

    public static void submitUserInfo(LinkedHashMap<String, String> linkedHashMap) {
        if (availableDefault()) {
            getUserDefault().submitUserInfo(linkedHashMap);
        }
    }

    public static void switchAccount() {
        if (availableDefault()) {
            getUserDefault().switchAccount();
        }
    }
}
