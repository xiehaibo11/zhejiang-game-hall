package com.bykv.vk.openvk;

public interface TTFullVideoObject extends com.bykv.vk.openvk.TTClientBidding {

    public interface FullVideoVsInteractionListener {
        void onClose();

        void onShow();

        void onSkippedVideo();

        void onVideoBarClick();

        void onVideoComplete();
    }

    long getExpirationTimestamp();

    int getFullVideoAdType();

    int getInteractionType();

    java.util.Map<java.lang.String, java.lang.Object> getMediaExtraInfo();

    void setDownloadListener(com.bykv.vk.openvk.TTAppDownloadListener r1);

    void setFullScreenVideoAdInteractionListener(com.bykv.vk.openvk.TTFullVideoObject.FullVideoVsInteractionListener r1);

    @java.lang.Deprecated
    void setShowDownLoadBar(boolean r1);

    void showFullVideoVs(android.app.Activity r1);

    void showFullVideoVs(android.app.Activity r1, com.bykv.vk.openvk.TTVfConstant.RitScenes r2, java.lang.String r3);
}
