package com.bykv.vk.openvk;

import android.app.Activity;
import com.bykv.vk.openvk.TTVfDislike;
import java.util.Map;

public interface TTInteractionVi extends TTClientBidding {

    public interface AdInteractionListener {
        void onClicked();

        void onDismiss();

        void onShow();
    }

    int getInteractionType();

    Map<String, Object> getMediaExtraInfo();

    void setDownloadListener(TTAppDownloadListener tTAppDownloadListener);

    void setShowDislikeIcon(TTVfDislike.DislikeInteractionCallback dislikeInteractionCallback);

    void setViInteractionListener(AdInteractionListener adInteractionListener);

    void showInteractionVi(Activity activity);
}
