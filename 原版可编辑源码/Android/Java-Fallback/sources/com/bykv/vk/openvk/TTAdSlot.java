package com.bykv.vk.openvk;

public interface TTAdSlot {
    public static final int TYPE_BANNER = 1;
    public static final int TYPE_CACHED_SPLASH = 4;
    public static final int TYPE_DRAW_FEED = 9;
    public static final int TYPE_FEED = 5;
    public static final int TYPE_FULL_SCREEN_VIDEO = 8;
    public static final int TYPE_INTERACTION_AD = 2;
    public static final int TYPE_REWARD_VIDEO = 7;
    public static final int TYPE_SPLASH = 3;
    public static final int TYPE_STREAM = 6;

    int getAdCount();

    java.lang.String getAdId();

    com.bykv.vk.openvk.TTAdLoadType getAdLoadType();

    int getAdType();

    int getAdloadSeq();

    java.lang.String getBidAdm();

    java.lang.String getCodeId();

    java.lang.String getCreativeId();

    int getDurationSlotType();

    float getExpressViewAcceptedHeight();

    float getExpressViewAcceptedWidth();

    java.lang.String getExt();

    int[] getExternalABVid();

    java.lang.String getExtraSmartLookParam();

    int getImgAcceptedHeight();

    int getImgAcceptedWidth();

    java.lang.String getMediaExtra();

    @java.lang.Deprecated
    int getNativeAdType();

    int getOrientation();

    java.lang.String getPrimeRit();

    java.lang.String getUserData();

    java.lang.String getUserID();

    boolean isAutoPlay();

    boolean isSupportDeepLink();

    boolean isSupportRenderConrol();

    void setAdCount(int r1);

    void setDurationSlotType(int r1);

    @java.lang.Deprecated
    void setNativeAdType(int r1);
}
