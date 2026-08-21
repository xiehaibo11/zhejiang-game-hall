package com.bianfeng.fastvo;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public class FastConfig {
    public static int MAX_RECORD_TIME = 60000;
    public static final String REQUEST_KEY = "50027.fpftrrdlrs";
    public static final String REQUEST_SECRET = "54d3c9ce57288b607d6f92661a8b6c8f";
    private static String appId = null;
    private static String channel = null;
    private static boolean isSpeex = true;
    private static String openId = "";
    private static String platformId = null;
    private static int quality = 4;
    private static int sampleRate = 3;
    private static String uid = "";

    public static int getMaxRecordTime() {
        return MAX_RECORD_TIME;
    }

    public static boolean isSpeex() {
        return isSpeex;
    }

    public static void setSpeex(boolean z) {
        isSpeex = z;
    }

    public static void setQuality(int i) {
        quality = i;
    }

    public static int getQuality() {
        return quality;
    }

    public static int getSampleRate() {
        return sampleRate;
    }

    public static void setSampleRate(int i) {
        sampleRate = i;
    }

    public static String getAppId() {
        return appId;
    }

    public static void setAppId(String str) {
        if (TextUtils.isEmpty(str)) {
            str = "0";
        }
        appId = str;
    }

    public static String getPlatformId() {
        return platformId;
    }

    public static void setPlatformId(String str) {
        if (TextUtils.isEmpty(str)) {
            str = "0";
        }
        platformId = str;
    }

    public static String getChannel() {
        return channel;
    }

    public static void setChannel(String str) {
        channel = str;
    }

    public static String getUid() {
        return uid;
    }

    public static void setUid(String str) {
        uid = str;
    }

    public static String getOpenId() {
        return openId;
    }

    public static void setOpenId(String str) {
        openId = str;
    }
}
