package com.bykv.vk.openvk;

public interface TTInteractionVi extends com.bykv.vk.openvk.TTClientBidding {

    public interface AdInteractionListener {
        void onClicked();

        void onDismiss();

        void onShow();
    }

    int getInteractionType();

    java.util.Map<java.lang.String, java.lang.Object> getMediaExtraInfo();

    void setDownloadListener(com.bykv.vk.openvk.TTAppDownloadListener r1);

    void setShowDislikeIcon(com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback r1);

    void setViInteractionListener(com.bykv.vk.openvk.TTInteractionVi.AdInteractionListener r1);

    void showInteractionVi(android.app.Activity r1);
}
