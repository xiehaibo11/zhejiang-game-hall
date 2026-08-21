package com.sigmob.windad.natives;

import android.app.Activity;
import android.graphics.Bitmap;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import com.sigmob.windad.WindAdError;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public interface WindNativeAdData {

    public interface DislikeInteractionCallback {
        void onCancel();

        void onSelected(int i, String str, boolean z);

        void onShow();
    }

    public interface NativeADMediaListener {
        void onVideoCompleted();

        void onVideoError(WindAdError windAdError);

        void onVideoLoad();

        void onVideoPause();

        void onVideoResume();

        void onVideoStart();
    }

    void bindImageViews(List<ImageView> list, int i);

    void bindMediaView(ViewGroup viewGroup, NativeADMediaListener nativeADMediaListener);

    void bindViewForInteraction(View view, List<View> list, List<View> list2, View view2, NativeADEventListener nativeADEventListener);

    void destroy();

    Bitmap getAdLogo();

    int getAdPatternType();

    String getCTAText();

    String getDesc();

    String getIconUrl();

    String getTitle();

    void pauseVideo();

    void resumeVideo();

    void setDislikeInteractionCallback(Activity activity, DislikeInteractionCallback dislikeInteractionCallback);

    void startVideo();

    void stopVideo();
}
