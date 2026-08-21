package com.bianfeng.platform.executor;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.text.TextUtils;
import com.bianfeng.afext.Afexter;
import com.bianfeng.pluginlibrary.BuildConfig;
import com.bianfeng.ymnsdk.feature.YmnProperties;
import com.bianfeng.ymnsdk.feature.d;
import com.bianfeng.ymnsdk.feature.f;
import com.bianfeng.ymnsdk.util.Logger;

@Deprecated
public class AppConfig {
    private static final String KEY_APP_ID = "TD_APP_ID";
    private static final String KEY_AREA_ID = "TD_AREA_ID";
    private static final String KEY_CHANNEL_ID = "TD_CHANNEL_ID";
    private static final String KEY_CHANNEL_ID_FIX = "channel_id";
    private static final String KEY_CONFIG_ID = "TD_CONFIG_ID";
    private static final String KEY_GROUP_ID = "TD_GROUP_ID";
    private static final String KEY_HOST_URL = "YMN_HOST_VER";
    private static final String KEY_MAIN_ACTIVITY = "MAIN_ACTIVITY";
    private static final String KEY_OS_TYPE = "TD_CLIENT_TYPE";
    private static final String KEY_PRODUCT_ID = "TD_PRODUCT_ID";
    private static final String KEY_SDK_APP_ID = "TD_SDK_APP_ID";
    public static final String SIGN_APP_SECREAT = "c986f7b40c468a3a3b1087d0eb08628b";
    private static final String TAG = "AppConfig";
    private static final String TD_SDK_APP_KEY = "TD_SDK_APP_KEY";
    private static String appId;
    private static String areaId;
    private static String channelId;
    private static String clientType;
    private static String configId;
    private static Context context;
    private static boolean debug;
    private static String groupId;
    private static String hostUrl;
    private static boolean inited;
    private static String mainActivity;
    private static Bundle metaData;
    private static String pkgName;
    private static String productId;
    private static String sdkAppId;
    private static String sdkAppKey;
    private static String verCode;
    private static String verName;

    public AppConfig() {
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
        if (configId != null) goto L27;
        configId = "";
    L27:
        if (hostUrl != null) goto L30;
        hostUrl = "";
    L30:
        if (TextUtils.isEmpty(sdkAppId) == false) goto L33;
        d.a(new f("未配置有猫腻 AppId")).a();
        return;
    }

    public static String getApkPath(Context r0) {
        return r0.getApplicationInfo().sourceDir;
    L4:
        return null;
    }

    public static String getAppId() {
        return appId;
    }

    public static String getAreaId() {
        return areaId;
    }

    public static String getChannelId() {
        return channelId;
    }

    public static String getClientType() {
        return clientType;
    }

    public static String getConfigId() {
        return configId;
    }

    public static Context getContext() {
        return context;
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

    private static String getMetaDataValue(Bundle r1, String r2) {
        if (r1 != null) goto L4;
        return null;
    L4:
        if (r1.containsKey(r2) == true) goto L7;
        return null;
    L7:
        return String.valueOf(r1.get(r2));
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

    public static void init(Context r3) {
    L22:
        e = move-exception;
        e.printStackTrace();
        return;
    L3:
        if (inited == false) goto L5;
        return;
    L5:
        inited = true;     // Catch: PackageManager.NameNotFoundException -> L22
        context = r3.getApplicationContext();     // Catch: PackageManager.NameNotFoundException -> L22
        pkgName = r3.getPackageName();     // Catch: PackageManager.NameNotFoundException -> L22
        PackageManager r0 = r3.getPackageManager();     // Catch: PackageManager.NameNotFoundException -> L22
        PackageInfo r1 = r0.getPackageInfo(pkgName, 0);     // Catch: PackageManager.NameNotFoundException -> L22
        verName = r1.versionName;     // Catch: PackageManager.NameNotFoundException -> L22
        verCode = String.valueOf(r1.versionCode);     // Catch: PackageManager.NameNotFoundException -> L22
        metaData = r0.getApplicationInfo(pkgName, 128).metaData;     // Catch: PackageManager.NameNotFoundException -> L22
        appId = getMetaDataValue(metaData, KEY_APP_ID);     // Catch: PackageManager.NameNotFoundException -> L22
        sdkAppId = getMetaDataValue(metaData, KEY_SDK_APP_ID);     // Catch: PackageManager.NameNotFoundException -> L22
        String r32 = getApkPath(r3);     // Catch: PackageManager.NameNotFoundException -> L22
        if (TextUtils.isEmpty(r32) == true) goto L10;
        channelId = Afexter.readChannel(r32);     // Catch: PackageManager.NameNotFoundException -> L22
        Logger.d("channelId from afexter " + channelId);     // Catch: PackageManager.NameNotFoundException -> L22
    L10:
        if (TextUtils.isEmpty(channelId) == false) goto L13;
        channelId = getMetaDataValue(metaData, KEY_CHANNEL_ID);     // Catch: PackageManager.NameNotFoundException -> L22
    L13:
        if (TextUtils.isEmpty(channelId) == false) goto L16;
        channelId = getMetaDataValue(metaData, KEY_CHANNEL_ID);     // Catch: PackageManager.NameNotFoundException -> L22
    L16:
        if (TextUtils.isEmpty(channelId) == false) goto L18;
        channelId = getMetaDataValue(metaData, KEY_CHANNEL_ID_FIX);     // Catch: PackageManager.NameNotFoundException -> L22
    L18:
        groupId = getMetaDataValue(metaData, KEY_GROUP_ID);     // Catch: PackageManager.NameNotFoundException -> L22
        clientType = getMetaDataValue(metaData, KEY_OS_TYPE);     // Catch: PackageManager.NameNotFoundException -> L22
        areaId = getMetaDataValue(metaData, KEY_AREA_ID);     // Catch: PackageManager.NameNotFoundException -> L22
        productId = getMetaDataValue(metaData, KEY_PRODUCT_ID);     // Catch: PackageManager.NameNotFoundException -> L22
        configId = getMetaDataValue(metaData, KEY_CONFIG_ID);     // Catch: PackageManager.NameNotFoundException -> L22
        hostUrl = getMetaDataValue(metaData, KEY_HOST_URL);     // Catch: PackageManager.NameNotFoundException -> L22
        mainActivity = getMetaDataValue(metaData, KEY_MAIN_ACTIVITY);     // Catch: PackageManager.NameNotFoundException -> L22
        sdkAppKey = getMetaDataValue(TD_SDK_APP_KEY);     // Catch: PackageManager.NameNotFoundException -> L22
        check();     // Catch: PackageManager.NameNotFoundException -> L22
        debug = Boolean.parseBoolean(YmnProperties.getValue(BuildConfig.BUILD_TYPE));     // Catch: PackageManager.NameNotFoundException -> L22
        Logger.i(TAG, "debugMode is" + debug);     // Catch: PackageManager.NameNotFoundException -> L22
    }

    public static boolean isDebug() {
        return debug;
    }

    public static void setAppId(String r0) {
        appId = r0;
    }

    public static void setAreaId(String r0) {
        areaId = r0;
    }

    public static void setChannelId(String r0) {
        channelId = r0;
    }

    public static void setClientType(String r0) {
        clientType = r0;
    }

    public static void setConfigId(String r0) {
        configId = r0;
    }

    public static void setDebug(boolean r0) {
        debug = r0;
    }

    public static void setGroupId(String r0) {
        groupId = r0;
    }

    public static void setHostUrl(String r0) {
        hostUrl = r0;
    }

    public static void setProductId(String r0) {
        productId = r0;
    }

    public static void setSdkAppId(String r0) {
        sdkAppId = r0;
    }

    public static String getMetaDataValue(String r1) {
        Bundle r0 = metaData;
        if (r0 != null) goto L5;
        return null;
    L5:
        return getMetaDataValue(r0, r1);
    }
}
