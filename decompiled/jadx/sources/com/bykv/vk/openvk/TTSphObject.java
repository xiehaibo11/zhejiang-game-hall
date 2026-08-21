package com.bykv.vk.openvk;

import android.view.View;
import com.bykv.vk.openvk.TTNtExpressObject;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public interface TTSphObject extends TTClientBidding {

    public interface VfInteractionListener {
        void onClicked(View view, int i);

        void onShow(View view, int i);

        void onSkip();

        void onTimeOver();
    }

    int getInteractionType();

    Map<String, Object> getMediaExtraInfo();

    int[] getSplashClickEyeSizeToDp();

    View getSplashView();

    void renderExpressAd(TTNtExpressObject.ExpressNtInteractionListener expressNtInteractionListener);

    void setDownloadListener(TTAppDownloadListener tTAppDownloadListener);

    void setNotAllowSdkCountdown();

    void setSplashCardListener(ISplashCardListener iSplashCardListener);

    void setSplashClickEyeListener(ISplashClickEyeListener iSplashClickEyeListener);

    void setSplashInteractionListener(VfInteractionListener vfInteractionListener);

    void splashClickEyeAnimationFinish();

    void startClickEye();

    void startClickEye(boolean z);
}
