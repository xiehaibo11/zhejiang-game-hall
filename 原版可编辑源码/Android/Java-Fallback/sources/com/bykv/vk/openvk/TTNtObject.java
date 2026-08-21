package com.bykv.vk.openvk;

public interface TTNtObject extends com.bykv.vk.openvk.TTClientBidding {

    public interface AdInteractionListener {
        void onClicked(android.view.View r1, com.bykv.vk.openvk.TTNtObject r2);

        void onCreativeClick(android.view.View r1, com.bykv.vk.openvk.TTNtObject r2);

        void onShow(com.bykv.vk.openvk.TTNtObject r1);
    }

    public interface ExpressRenderListener {
        void onRenderSuccess(android.view.View r1, float r2, float r3, boolean r4);
    }

    void destroy();

    android.graphics.Bitmap getAdLogo();

    android.view.View getAdView();

    int getAppCommentNum();

    int getAppScore();

    int getAppSize();

    java.lang.String getButtonText();

    com.bykv.vk.openvk.ComplianceInfo getComplianceInfo();

    java.lang.String getDescription();

    com.bykv.vk.openvk.TTVfDislike getDislikeDialog(android.app.Activity r1);

    com.bykv.vk.openvk.TTVfDislike getDislikeDialog(com.bykv.vk.openvk.TTDislikeDialogAbstract r1);

    com.bykv.vk.openvk.DislikeInfo getDislikeInfo();

    com.bykv.vk.openvk.DownloadStatusController getDownloadStatusController();

    com.bykv.vk.openvk.TTImage getIcon();

    java.util.List<com.bykv.vk.openvk.TTImage> getImageList();

    int getImageMode();

    int getInteractionType();

    java.util.Map<java.lang.String, java.lang.Object> getMediaExtraInfo();

    java.lang.String getSource();

    java.lang.String getTitle();

    com.bykv.vk.openvk.TTImage getVideoCoverImage();

    void registerViewForInteraction(android.view.ViewGroup r1, android.view.View r2, com.bykv.vk.openvk.TTNtObject.AdInteractionListener r3);

    void registerViewForInteraction(android.view.ViewGroup r1, java.util.List<android.view.View> r2, java.util.List<android.view.View> r3, android.view.View r4, com.bykv.vk.openvk.TTNtObject.AdInteractionListener r5);

    void registerViewForInteraction(android.view.ViewGroup r1, java.util.List<android.view.View> r2, java.util.List<android.view.View> r3, com.bykv.vk.openvk.TTNtObject.AdInteractionListener r4);

    void registerViewForInteraction(android.view.ViewGroup r1, java.util.List<android.view.View> r2, java.util.List<android.view.View> r3, java.util.List<android.view.View> r4, android.view.View r5, com.bykv.vk.openvk.TTNtObject.AdInteractionListener r6);

    void registerViewForInteraction(android.view.ViewGroup r1, java.util.List<android.view.View> r2, java.util.List<android.view.View> r3, java.util.List<android.view.View> r4, java.util.List<android.view.View> r5, android.view.View r6, com.bykv.vk.openvk.TTNtObject.AdInteractionListener r7);

    void render();

    void setActivityForDownloadApp(android.app.Activity r1);

    void setDislikeCallback(android.app.Activity r1, com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback r2);

    void setDislikeDialog(com.bykv.vk.openvk.TTDislikeDialogAbstract r1);

    void setDownloadListener(com.bykv.vk.openvk.TTAppDownloadListener r1);

    void setExpressRenderListener(com.bykv.vk.openvk.TTNtObject.ExpressRenderListener r1);

    void showInteractionExpressAd(android.app.Activity r1);
}
