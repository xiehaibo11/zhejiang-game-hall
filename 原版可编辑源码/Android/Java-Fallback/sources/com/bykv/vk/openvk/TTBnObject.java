package com.bykv.vk.openvk;

public interface TTBnObject {

    public interface AdInteractionListener {
        void onAdClicked(android.view.View r1, int r2);

        void onAdShow(android.view.View r1, int r2);
    }

    android.view.View getBannerView();

    com.bykv.vk.openvk.TTVfDislike getDislikeDialog(com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback r1);

    int getInteractionType();

    java.util.Map<java.lang.String, java.lang.Object> getMediaExtraInfo();

    void setBannerInteractionListener(com.bykv.vk.openvk.TTBnObject.AdInteractionListener r1);

    void setDownloadListener(com.bykv.vk.openvk.TTAppDownloadListener r1);

    void setShowDislikeIcon(com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback r1);

    void setSlideIntervalTime(int r1);
}
