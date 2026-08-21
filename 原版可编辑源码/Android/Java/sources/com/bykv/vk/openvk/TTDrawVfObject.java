package com.bykv.vk.openvk;

import android.graphics.Bitmap;

public interface TTDrawVfObject extends TTVfObject {

    public interface DrawVideoListener {
        void onClick();

        void onClickRetry();
    }

    void setCanInterruptVideoPlay(boolean z);

    void setDrawVideoListener(DrawVideoListener drawVideoListener);

    void setPauseIcon(Bitmap bitmap, int i);
}
