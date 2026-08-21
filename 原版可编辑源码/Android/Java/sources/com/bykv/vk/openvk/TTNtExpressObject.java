package com.bykv.vk.openvk;

import android.app.Activity;
import android.view.View;
import com.bykv.vk.openvk.TTVfDislike;
import java.util.Map;

public interface TTNtExpressObject extends TTClientBidding {

    public interface ExpressNtInteractionListener {
        void onClicked(View view, int i);

        void onRenderFail(View view, String str, int i);

        void onRenderSuccess(View view, float f, float f2);

        void onShow(View view, int i);
    }

    public interface ExpressVideoListener {
        void onClickRetry();

        void onProgressUpdate(long j, long j2);

        void onVideoComplete();

        void onVideoContinuePlay();

        void onVideoError(int i, int i2);

        void onVideoLoad();

        void onVideoPaused();

        void onVideoStartPlay();
    }

    public interface NtInteractionListener extends ExpressNtInteractionListener {
        void onDismiss();
    }

    void destroy();

    TTVfDislike getDislikeDialog(Activity activity);

    DislikeInfo getDislikeInfo();

    View getExpressNtView();

    int getImageMode();

    int getInteractionType();

    Map<String, Object> getMediaExtraInfo();

    void render();

    void setCanInterruptVideoPlay(boolean z);

    void setDislikeCallback(Activity activity, TTVfDislike.DislikeInteractionCallback dislikeInteractionCallback);

    void setDislikeDialog(TTDislikeDialogAbstract tTDislikeDialogAbstract);

    void setDownloadListener(TTAppDownloadListener tTAppDownloadListener);

    void setExpressInteractionListener(ExpressNtInteractionListener expressNtInteractionListener);

    void setExpressInteractionListener(NtInteractionListener ntInteractionListener);

    void setSlideIntervalTime(int i);

    void setVideoListener(ExpressVideoListener expressVideoListener);

    void showInteractionExpressAd(Activity activity);
}
