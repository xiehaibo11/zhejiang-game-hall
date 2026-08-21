package com.bykv.vk.openvk;

import android.app.Activity;
import com.bykv.vk.openvk.TTVfConstant;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public interface TTFullVideoObject extends TTClientBidding {

    public interface FullVideoVsInteractionListener {
        void onClose();

        void onShow();

        void onSkippedVideo();

        void onVideoBarClick();

        void onVideoComplete();
    }

    long getExpirationTimestamp();

    int getFullVideoAdType();

    int getInteractionType();

    Map<String, Object> getMediaExtraInfo();

    void setDownloadListener(TTAppDownloadListener tTAppDownloadListener);

    void setFullScreenVideoAdInteractionListener(FullVideoVsInteractionListener fullVideoVsInteractionListener);

    @Deprecated
    void setShowDownLoadBar(boolean z);

    void showFullVideoVs(Activity activity);

    void showFullVideoVs(Activity activity, TTVfConstant.RitScenes ritScenes, String str);
}
