package com.bykv.vk.openvk;

import android.app.Activity;

/* JADX INFO: loaded from: classes.dex */
public interface ISplashCardListener {
    Activity getActivity();

    void onSplashClickEyeClose();

    void onSplashEyeReady();

    void setSupportSplashClickEye(boolean z);
}
