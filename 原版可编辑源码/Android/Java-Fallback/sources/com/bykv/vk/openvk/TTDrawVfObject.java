package com.bykv.vk.openvk;

public interface TTDrawVfObject extends com.bykv.vk.openvk.TTVfObject {

    public interface DrawVideoListener {
        void onClick();

        void onClickRetry();
    }

    void setCanInterruptVideoPlay(boolean r1);

    void setDrawVideoListener(com.bykv.vk.openvk.TTDrawVfObject.DrawVideoListener r1);

    void setPauseIcon(android.graphics.Bitmap r1, int r2);
}
