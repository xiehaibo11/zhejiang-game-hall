package com.bykv.vk.openvk;

import android.graphics.Bitmap;

/* JADX INFO: loaded from: classes.dex */
public interface TTDrawVfObject extends TTVfObject {

    public interface DrawVideoListener {
        void onClick();

        void onClickRetry();
    }

    void setCanInterruptVideoPlay(boolean z);

    void setDrawVideoListener(DrawVideoListener drawVideoListener);

    void setPauseIcon(Bitmap bitmap, int i);
}
