package com.bykv.vk.openvk;

public interface TTNtExpressObject extends com.bykv.vk.openvk.TTClientBidding {

    public interface ExpressNtInteractionListener {
        void onClicked(android.view.View r1, int r2);

        void onRenderFail(android.view.View r1, java.lang.String r2, int r3);

        void onRenderSuccess(android.view.View r1, float r2, float r3);

        void onShow(android.view.View r1, int r2);
    }

    public interface ExpressVideoListener {
        void onClickRetry();

        void onProgressUpdate(long r1, long r3);

        void onVideoComplete();

        void onVideoContinuePlay();

        void onVideoError(int r1, int r2);

        void onVideoLoad();

        void onVideoPaused();

        void onVideoStartPlay();
    }

    public interface NtInteractionListener extends com.bykv.vk.openvk.TTNtExpressObject.ExpressNtInteractionListener {
        void onDismiss();
    }

    void destroy();

    com.bykv.vk.openvk.TTVfDislike getDislikeDialog(android.app.Activity r1);

    com.bykv.vk.openvk.DislikeInfo getDislikeInfo();

    android.view.View getExpressNtView();

    int getImageMode();

    int getInteractionType();

    java.util.Map<java.lang.String, java.lang.Object> getMediaExtraInfo();

    void render();

    void setCanInterruptVideoPlay(boolean r1);

    void setDislikeCallback(android.app.Activity r1, com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback r2);

    void setDislikeDialog(com.bykv.vk.openvk.TTDislikeDialogAbstract r1);

    void setDownloadListener(com.bykv.vk.openvk.TTAppDownloadListener r1);

    void setExpressInteractionListener(com.bykv.vk.openvk.TTNtExpressObject.ExpressNtInteractionListener r1);

    void setExpressInteractionListener(com.bykv.vk.openvk.TTNtExpressObject.NtInteractionListener r1);

    void setSlideIntervalTime(int r1);

    void setVideoListener(com.bykv.vk.openvk.TTNtExpressObject.ExpressVideoListener r1);

    void showInteractionExpressAd(android.app.Activity r1);
}
