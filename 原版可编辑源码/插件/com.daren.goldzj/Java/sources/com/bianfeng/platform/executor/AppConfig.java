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

    public static void check() {
        if (pkgName == null) {
            pkgName = "";
        }
        if (verName == null) {
            verName = "";
        }
        if (verCode == null) {
            verCode = "";
        }
        if (channelId == null) {
            channelId = "";
        }
        if (groupId == null) {
            groupId = "0";
        }
        if (clientType == null) {
            clientType = "1";
        }
        if (areaId == null) {
            areaId = "1";
        }
        if (configId == null) {
            configId = "";
        }
        if (hostUrl == null) {
            hostUrl = "";
        }
        if (TextUtils.isEmpty(sdkAppId)) {
            d.a(new f("未配置有猫腻 AppId")).a();
        }
    }

    public static String getApkPath(Context context2) {
        try {
            return context2.getApplicationInfo().sourceDir;
        } catch (Throwable unused) {
            return null;
        }
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

    private static String getMetaDataValue(Bundle bundle, String str) {
        if (bundle == null || !bundle.containsKey(str)) {
            return null;
        }
        return String.valueOf(bundle.get(str));
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

    public static void init(Context context2) {
        try {
            if (inited) {
                return;
            }
            inited = true;
            context = context2.getApplicationContext();
            pkgName = context2.getPackageName();
            PackageManager packageManager = context2.getPackageManager();
            PackageInfo packageInfo = packageManager.getPackageInfo(pkgName, 0);
            verName = packageInfo.versionName;
            verCode = String.valueOf(packageInfo.versionCode);
            metaData = packageManager.getApplicationInfo(pkgName, 128).metaData;
            appId = getMetaDataValue(metaData, KEY_APP_ID);
            sdkAppId = getMetaDataValue(metaData, KEY_SDK_APP_ID);
            String apkPath = getApkPath(context2);
            if (!TextUtils.isEmpty(apkPath)) {
                channelId = Afexter.readChannel(apkPath);
                Logger.d("channelId from afexter " + channelId);
            }
            if (TextUtils.isEmpty(channelId)) {
                channelId = getMetaDataValue(metaData, KEY_CHANNEL_ID);
            }
            if (TextUtils.isEmpty(channelId)) {
                channelId = getMetaDataValue(metaData, KEY_CHANNEL_ID);
            }
            if (TextUtils.isEmpty(channelId)) {
                channelId = getMetaDataValue(metaData, KEY_CHANNEL_ID_FIX);
            }
            groupId = getMetaDataValue(metaData, KEY_GROUP_ID);
            clientType = getMetaDataValue(metaData, KEY_OS_TYPE);
            areaId = getMetaDataValue(metaData, KEY_AREA_ID);
            productId = getMetaDataValue(metaData, KEY_PRODUCT_ID);
            configId = getMetaDataValue(metaData, KEY_CONFIG_ID);
            hostUrl = getMetaDataValue(metaData, KEY_HOST_URL);
            mainActivity = getMetaDataValue(metaData, KEY_MAIN_ACTIVITY);
            sdkAppKey = getMetaDataValue(TD_SDK_APP_KEY);
            check();
            debug = Boolean.parseBoolean(YmnProperties.getValue(BuildConfig.BUILD_TYPE));
            Logger.i(TAG, "debugMode is" + debug);
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
        }
    }

    public static boolean isDebug() {
        return debug;
    }

    public static void setAppId(String str) {
        appId = str;
    }

    public static void setAreaId(String str) {
        areaId = str;
    }

    public static void setChannelId(String str) {
        channelId = str;
    }

    public static void setClientType(String str) {
        clientType = str;
    }

    public static void setConfigId(String str) {
        configId = str;
    }

    public static void setDebug(boolean z) {
        debug = z;
    }

    public static void setGroupId(String str) {
        groupId = str;
    }

    public static void setHostUrl(String str) {
        hostUrl = str;
    }

    public static void setProductId(String str) {
        productId = str;
    }

    public static void setSdkAppId(String str) {
        sdkAppId = str;
    }

    public static String getMetaDataValue(String str) {
        Bundle bundle = metaData;
        if (bundle != null) {
            return getMetaDataValue(bundle, str);
        }
        return null;
    }
}
