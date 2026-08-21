package com.bianfeng.ymnsdk;

import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.util.Logger;
import com.sigmob.sdk.base.mta.PointCategory;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Set;

/* JADX INFO: loaded from: classes.dex */
public class YmnSdkUserWrapper extends YmnSdkPaymentWrapper {
    private static Map<String, UserFeatureWrapper> autoFunctions;
    private static String pluginName;
    private static Set<UserFeatureWrapper> wrappers;

    public static Set<UserFeatureWrapper> getUserWrappers() {
        return wrappers;
    }

    public static UserFeatureWrapper getUserDefault() {
        Set<UserFeatureWrapper> set = wrappers;
        if (set == null || set.isEmpty()) {
            return null;
        }
        return wrappers.iterator().next();
    }

    public static void registUserFeatureWrapper(UserFeatureWrapper wrapper) {
        if (wrappers == null) {
            wrappers = new HashSet();
        }
        wrappers.add(wrapper);
        registUserFeatureAutoFunctions(wrapper);
    }

    private static void registUserFeatureAutoFunctions(UserFeatureWrapper wrapper) {
        if (autoFunctions == null) {
            autoFunctions = new HashMap();
        }
        YmnPluginWrapper plugin = wrapper.a();
        pluginName = plugin.getPluginName();
        autoFunctions.put(pluginName + "_login", wrapper);
        autoFunctions.put(pluginName + "_plugin_init", wrapper);
    }

    public static String getPluginName() {
        return pluginName;
    }

    public static boolean isSupportFunction(String functionName) {
        Map<String, UserFeatureWrapper> map = autoFunctions;
        if (map != null && map.containsKey(functionName)) {
            return true;
        }
        return YmnSdkPaymentWrapper.isSupportFunction(functionName);
    }

    public static void callFunction(String functionName) {
        Map<String, UserFeatureWrapper> map = autoFunctions;
        if (map != null && map.containsKey(functionName) && functionName.contains(HostConstant.login)) {
            autoFunctions.get(functionName).login();
        }
        Map<String, UserFeatureWrapper> map2 = autoFunctions;
        if (map2 != null && map2.containsKey(functionName) && functionName.contains(PointCategory.INIT)) {
            autoFunctions.get(functionName).a().onContextChanged(YmnSdkWrapper.activity);
            autoFunctions.get(functionName).a().onInit(YmnSdkWrapper.activity);
        } else {
            YmnSdkPaymentWrapper.callFunction(functionName);
        }
    }

    private static boolean availableDefault() {
        Set<UserFeatureWrapper> set = wrappers;
        if (set != null && !set.isEmpty() && wrappers.size() <= 1) {
            return true;
        }
        Logger.e("not exist available UserFeature plugin or has more than 1 UserFeature plugin");
        return false;
    }

    public static void login() {
        if (availableDefault()) {
            getUserDefault().login();
        }
    }

    public static boolean isLogined() {
        if (availableDefault()) {
            return getUserDefault().isLogined();
        }
        return false;
    }

    public static void logout() {
        if (availableDefault()) {
            getUserDefault().logout();
        }
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

    public static void getVerifyRealNameInfo() {
        if (availableDefault()) {
            getUserDefault().getVerifyRealNameInfo();
        }
    }

    public static void getAndShowVerifyRealName() {
        if (availableDefault()) {
            getUserDefault().getAndShowVerifyRealName();
        }
    }

    public static void hideToolBar() {
        if (availableDefault()) {
            getUserDefault().hideToolBar();
        }
    }

    public static void switchAccount() {
        if (availableDefault()) {
            getUserDefault().switchAccount();
        }
    }

    public static void exit() {
        if (availableDefault()) {
            getUserDefault().exit();
        }
    }

    public static void submitUserInfo(LinkedHashMap<String, String> data) {
        if (availableDefault()) {
            getUserDefault().submitUserInfo(data);
        }
    }

    public static IUserFeature.UserInfo getUserInfo() {
        if (availableDefault()) {
            return getUserDefault().getUserInfo();
        }
        return null;
    }

    public static void enterPlatform() {
        if (availableDefault()) {
            getUserDefault().enterPlatform();
        }
    }
}
