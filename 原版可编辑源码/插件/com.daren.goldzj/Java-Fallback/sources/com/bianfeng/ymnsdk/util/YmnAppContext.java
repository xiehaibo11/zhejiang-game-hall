package com.bianfeng.ymnsdk.util;

import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.pluginlibrary.BuildConfig;
import com.bianfeng.ymnsdk.feature.YmnProperties;
import com.bianfeng.ymnsdk.feature.d;
import com.bianfeng.ymnsdk.feature.f;
import com.bianfeng.ymnsdk.utilslib.appinfo.AppContext;

public class YmnAppContext {
    private static final String KEY_AREA_ID = "TD_AREA_ID";
    private static final String KEY_CHANNEL_ID = "TD_CHANNEL_ID";
    private static final String KEY_CHANNEL_ID_FIX = "channel_id";
    private static final String KEY_DATAFUN_URL = "KEY_DATAFUN_HOST";
    private static final String KEY_GROUP_ID = "TD_GROUP_ID";
    private static final String KEY_HOST_URL = "YMN_HOST_VER";
    private static final String KEY_MAIN_ACTIVITY = "MAIN_ACTIVITY";
    private static final String KEY_PRODUCT_ID = "TD_PRODUCT_ID";
    private static final String KEY_SDK_APP_ID = "TD_SDK_APP_ID";
    public static final String SIGN_APP_SECREAT = "c986f7b40c468a3a3b1087d0eb08628b";
    private static final String TAG = "YmnAppContext";
    private static final String TD_SDK_APP_KEY = "TD_SDK_APP_KEY";
    private static int appId;
    private static String areaId;
    private static String channelId;
    private static String clientType;
    private static int configId;
    private static String datafunUrl;
    private static boolean debug;
    private static String groupId;
    private static String hostUrl;
    private static volatile boolean inited;
    private static String mainActivity;
    private static String pkgName;
    private static String productId;
    private static String sdkAppId;
    private static String sdkAppKey;
    private static String verCode;
    private static String verName;

    public YmnAppContext() {
    }

    public static void check() {
        if (pkgName != null) goto L6;
        pkgName = "";
    L6:
        if (verName != null) goto L9;
        verName = "";
    L9:
        if (verCode != null) goto L12;
        verCode = "";
    L12:
        if (channelId != null) goto L15;
        channelId = "";
    L15:
        if (groupId != null) goto L18;
        groupId = "0";
    L18:
        if (clientType != null) goto L21;
        clientType = "1";
    L21:
        if (areaId != null) goto L24;
        areaId = "1";
    L24:
        if (hostUrl != null) goto L27;
        hostUrl = "";
    L27:
        if (TextUtils.isEmpty(sdkAppId) == false) goto L30;
        d.a(new f("未配置有猫腻 AppId")).a();
        return;
    }

    public static String getApkPath(Context r0) {
        return r0.getApplicationInfo().sourceDir;
    L4:
        return null;
    }

    public static int getAppId() {
        return appId;
    }

    public static String getAreaId() {
        return areaId;
    }

    public static String getChannelId() {
        return channelId;
    }

    public static int getChannelIdInt() {
        return Integer.parseInt(channelId);
    L4:
        return 0;
    }

    public static String getClientType() {
        return clientType;
    }

    public static int getConfigId() {
        return configId;
    }

    public static String getConfigIdStr() {
        return configId + "";
    }

    public static String getDataFunUrl() {
        return datafunUrl;
    }

    public static String getGroupId() {
        return groupId;
    }

    public static String getHostUrl() {
        return hostUrl;
    }

    public static String getMainActivity() {
        return mainActivity;
    }

    public static int getMetaDataValueInt(String r1) {
        return AppContext.getInstance().getMetaDataValueInt(r1);
    L4:
        return 0;
    }

    public static String getMetaDataValueString(String r1) {
        return AppContext.getInstance().getMetaDataValueString(r1);
    L4:
        return "";
    }

    public static String getPkgName() {
        return pkgName;
    }

    public static String getProductId() {
        return productId;
    }

    public static String getSdkAppId() {
        return sdkAppId;
    }

    public static String getSdkAppKey() {
        return sdkAppKey;
    }

    public static String getVerCode() {
        return verCode;
    }

    public static String getVerName() {
        return verName;
    }

    public static void init(Context r0) {
        if (inited == false) goto L5;
        return;
    L5:
        inited = true;
        pkgName = AppContext.getInstance().getPkgName();
        verName = AppContext.getInstance().getVerName();
        verCode = AppContext.getInstance().getVerCode();
        appId = AppContext.getInstance().getAppId();
        sdkAppId = getMetaDataValueString(KEY_SDK_APP_ID);
        configId = AppContext.getInstance().getIdentify_id();
        clientType = AppContext.getInstance().getDeviceType();
        channelId = AppContext.getInstance().getChannelId();
        groupId = getMetaDataValueString(KEY_GROUP_ID);
        areaId = getMetaDataValueString(KEY_AREA_ID);
        productId = getMetaDataValueString(KEY_PRODUCT_ID);
        hostUrl = getMetaDataValueString(KEY_HOST_URL);
        datafunUrl = getMetaDataValueString(KEY_DATAFUN_URL);
        mainActivity = getMetaDataValueString(KEY_MAIN_ACTIVITY);
        sdkAppKey = getMetaDataValueString(TD_SDK_APP_KEY);
        check();
    }

    public static boolean isDebug() {
        debug = Boolean.parseBoolean(YmnProperties.getValue(BuildConfig.BUILD_TYPE));
        Logger.i(TAG, "debugMode is" + debug);
        return debug;
    }

    public static void setAppId(String r0) {
        sdkAppId = r0;
    }

    public static void setConfigId(int r0) {
        configId = r0;
    }

    public static void setGroupId(String r0) {
        groupId = r0;
    }

    public static void setSdkAppKey(String r0) {
        sdkAppKey = r0;
    }
}
