package com.bykv.vk.openvk;

public interface TTVfDislike {

    public interface DislikeInteractionCallback {
        void onCancel();

        void onSelected(int r1, java.lang.String r2, boolean r3);

        void onShow();
    }

    boolean isShow();

    void resetDislikeStatus();

    void setDislikeInteractionCallback(com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback r1);

    void setDislikeSource(java.lang.String r1);

    void showDislikeDialog();
}
