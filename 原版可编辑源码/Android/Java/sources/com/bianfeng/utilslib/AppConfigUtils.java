package com.bianfeng.utilslib;

import android.app.Activity;
import android.content.Context;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.text.TextUtils;

public class AppConfigUtils {
    private static final String YMNSDK_ALIPAY_CHANNEL_ID = "YMNSDK_H5GAME_ALIPAY_CHANNEL_ID";
    private static final String YMNSDK_H5GAME_SDK_VERSION = "YMNSDK_H5GAME_SDK_VERSION";
    private static final String YMNSDK_WEBPAY_APP_ID = "GX_GCP_ID";
    private static final String YMNSDK_WEBPAY_PRIVATE_KEY = "GX_GCP_SERCERT";
    private static final String YMNSDK_WEBPAY_SHOP_ID = "YMNSDK_H5GAME_SHOP_ID";
    private static final String YMNSDK_WXPAY_CHANNEL_ID = "YMNSDK_H5GAME_WXPAY_CHANNEL_ID";
    private static AppConfigUtils appConfig = new AppConfigUtils();
    private Activity context;
    private String netIp = "";
    private String ext = "";
    private String cp = "";

    private AppConfigUtils() {
    }

    public String getNetIp() {
        return this.netIp;
    }

    public void setNetIp(String str) {
        this.netIp = str;
    }

    public String getExt() {
        return this.ext;
    }

    public void setExt(String str) {
        this.ext = str;
    }

    public String getCp() {
        return this.cp;
    }

    public void setCp(String str) {
        this.cp = str;
    }

    public boolean isGetIpSuccess() {
        return !TextUtils.isEmpty(this.netIp);
    }

    public static AppConfigUtils getInstance() {
        return appConfig;
    }

    public void init(Activity activity) {
        this.context = activity;
    }

    public String getWebPayAppId() {
        return getMetaDataValue(this.context, YMNSDK_WEBPAY_APP_ID);
    }

    public String getWebPayPrivateKey() {
        return getMetaDataValue(this.context, YMNSDK_WEBPAY_PRIVATE_KEY);
    }

    public String getSDKVersion() {
        return getMetaDataValue(this.context, YMNSDK_H5GAME_SDK_VERSION);
    }

    public String getYmnsdkWebpayShopId() {
        return getMetaDataValue(this.context, YMNSDK_WEBPAY_SHOP_ID);
    }

    public String getYmnsdkWxPayChannelId() {
        return getMetaDataValue(this.context, YMNSDK_WXPAY_CHANNEL_ID);
    }

    public String getYmnsdkAliPayChannelId() {
        return getMetaDataValue(this.context, YMNSDK_ALIPAY_CHANNEL_ID);
    }

    public String getMetaDataValue(String str) {
        return getMetaDataValue(this.context, str);
    }

    public String getMetaDataValue(Context context, String str) {
        try {
            String packageName = context.getPackageName();
            PackageManager packageManager = context.getPackageManager();
            packageManager.getPackageInfo(packageName, 0);
            Bundle bundle = packageManager.getApplicationInfo(packageName, 128).metaData;
            if (bundle != null && bundle.containsKey(str)) {
                return String.valueOf(bundle.get(str));
            }
            return null;
        } catch (Exception unused) {
            return "未获取appid";
        }
    }

    public int getActivityOrientation(Activity activity) {
        try {
            return activity.getPackageManager().getActivityInfo(activity.getComponentName(), 128).screenOrientation;
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public String getSdkVersion() {
        return UtilsSdk.getReflexCall().getField(UtilsSdk.getClassNameSet().getH5Version(), "version").toString();
    }
}
