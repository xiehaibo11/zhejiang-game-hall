package com.bykv.vk.openvk;

import android.view.View;
import com.bykv.vk.openvk.TTVfDislike;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public interface TTBnObject {

    public interface AdInteractionListener {
        void onAdClicked(View view, int i);

        void onAdShow(View view, int i);
    }

    View getBannerView();

    TTVfDislike getDislikeDialog(TTVfDislike.DislikeInteractionCallback dislikeInteractionCallback);

    int getInteractionType();

    Map<String, Object> getMediaExtraInfo();

    void setBannerInteractionListener(AdInteractionListener adInteractionListener);

    void setDownloadListener(TTAppDownloadListener tTAppDownloadListener);

    void setShowDislikeIcon(TTVfDislike.DislikeInteractionCallback dislikeInteractionCallback);

    void setSlideIntervalTime(int i);
}
