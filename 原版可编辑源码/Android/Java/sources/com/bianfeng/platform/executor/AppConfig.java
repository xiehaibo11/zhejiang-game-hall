package com.bianfeng.platform.executor;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.text.TextUtils;
import com.bianfeng.afext.Afexter;
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

    public static Context getContext() {
        return context;
    }

    public static void init(Context context2) {
        try {
            if (inited) {
                return;
            }
            inited = true;
            context = context2.getApplicationContext();
            pkgName = context2.getPackageName();
            PackageManager pm = context2.getPackageManager();
            ApplicationInfo ai = pm.getApplicationInfo(pkgName, 128);
            metaData = ai.metaData;
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
                channelId = getMetaDataValue(metaData, "channel_id");
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
            debug = Boolean.parseBoolean(YmnProperties.getValue("debug"));
            Logger.i(TAG, "debugMode is" + debug);
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
        }
    }

    public static String getApkPath(Context context2) {
        try {
            return context2.getApplicationInfo().sourceDir;
        } catch (Throwable th) {
            return null;
        }
    }

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
            f fVar = new f("未配置有猫腻 AppId");
            d.a(fVar);
            fVar.a();
        }
    }

    private static String getMetaDataValue(Bundle metaData2, String key) {
        if (metaData2 == null || !metaData2.containsKey(key)) {
            return null;
        }
        return String.valueOf(metaData2.get(key));
    }

    public static String getMetaDataValue(String key) {
        Bundle bundle = metaData;
        if (bundle != null) {
            return getMetaDataValue(bundle, key);
        }
        return null;
    }

    public static String getAppId() {
        return appId;
    }

    public static void setAppId(String appId2) {
        appId = appId2;
    }

    public static String getSdkAppId() {
        return sdkAppId;
    }

    public static void setSdkAppId(String sdkAppId2) {
        sdkAppId = sdkAppId2;
    }

    public static String getChannelId() {
        return channelId;
    }

    public static void setChannelId(String channelId2) {
        channelId = channelId2;
    }

    public static String getGroupId() {
        return groupId;
    }

    public static void setGroupId(String groupId2) {
        groupId = groupId2;
    }

    public static String getAreaId() {
        return areaId;
    }

    public static void setAreaId(String areaId2) {
        areaId = areaId2;
    }

    public static String getProductId() {
        return productId;
    }

    public static void setProductId(String productId2) {
        productId = productId2;
    }

    public static String getConfigId() {
        return configId;
    }

    public static void setConfigId(String configId2) {
        configId = configId2;
    }

    public static String getHostUrl() {
        return hostUrl;
    }

    public static void setHostUrl(String hostUrl2) {
        hostUrl = hostUrl2;
    }

    public static String getClientType() {
        return clientType;
    }

    public static void setClientType(String clientType2) {
        clientType = clientType2;
    }

    public static String getPkgName() {
        return pkgName;
    }

    public static String getVerName() {
        return verName;
    }

    public static String getVerCode() {
        return verCode;
    }

    public static String getMainActivity() {
        return mainActivity;
    }

    public static void setDebug(boolean debug2) {
        debug = debug2;
    }

    public static String getSdkAppKey() {
        return sdkAppKey;
    }

    public static boolean isDebug() {
        return debug;
    }
}
