package com.bianfeng.fastvo;

public class FastConfig {
    public static int MAX_RECORD_TIME = 60000;
    public static final java.lang.String REQUEST_KEY = "50027.fpftrrdlrs";
    public static final java.lang.String REQUEST_SECRET = "54d3c9ce57288b607d6f92661a8b6c8f";
    private static java.lang.String appId = null;
    private static java.lang.String channel = null;
    private static boolean isSpeex = true;
    private static java.lang.String openId = "";
    private static java.lang.String platformId = null;
    private static int quality = 4;
    private static int sampleRate = 3;
    private static java.lang.String uid = "";

    static {
            return
    }

    public FastConfig() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getAppId() {
            java.lang.String r0 = com.bianfeng.fastvo.FastConfig.appId
            return r0
    }

    public static java.lang.String getChannel() {
            java.lang.String r0 = com.bianfeng.fastvo.FastConfig.channel
            return r0
    }

    public static int getMaxRecordTime() {
            int r0 = com.bianfeng.fastvo.FastConfig.MAX_RECORD_TIME
            return r0
    }

    public static java.lang.String getOpenId() {
            java.lang.String r0 = com.bianfeng.fastvo.FastConfig.openId
            return r0
    }

    public static java.lang.String getPlatformId() {
            java.lang.String r0 = com.bianfeng.fastvo.FastConfig.platformId
            return r0
    }

    public static int getQuality() {
            int r0 = com.bianfeng.fastvo.FastConfig.quality
            return r0
    }

    public static int getSampleRate() {
            int r0 = com.bianfeng.fastvo.FastConfig.sampleRate
            return r0
    }

    public static java.lang.String getUid() {
            java.lang.String r0 = com.bianfeng.fastvo.FastConfig.uid
            return r0
    }

    public static boolean isSpeex() {
            boolean r0 = com.bianfeng.fastvo.FastConfig.isSpeex
            return r0
    }

    public static void setAppId(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            java.lang.String r1 = "0"
        L8:
            com.bianfeng.fastvo.FastConfig.appId = r1
            return
    }

    public static void setChannel(java.lang.String r0) {
            com.bianfeng.fastvo.FastConfig.channel = r0
            return
    }

    public static void setOpenId(java.lang.String r0) {
            com.bianfeng.fastvo.FastConfig.openId = r0
            return
    }

    public static void setPlatformId(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            java.lang.String r1 = "0"
        L8:
            com.bianfeng.fastvo.FastConfig.platformId = r1
            return
    }

    public static void setQuality(int r0) {
            com.bianfeng.fastvo.FastConfig.quality = r0
            return
    }

    public static void setSampleRate(int r0) {
            com.bianfeng.fastvo.FastConfig.sampleRate = r0
            return
    }

    public static void setSpeex(boolean r0) {
            com.bianfeng.fastvo.FastConfig.isSpeex = r0
            return
    }

    public static void setUid(java.lang.String r0) {
            com.bianfeng.fastvo.FastConfig.uid = r0
            return
    }
}
