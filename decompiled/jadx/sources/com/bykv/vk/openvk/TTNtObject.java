package com.bykv.vk.openvk;

import android.app.Activity;
import android.graphics.Bitmap;
import android.view.View;
import android.view.ViewGroup;
import com.bykv.vk.openvk.TTVfDislike;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public interface TTNtObject extends TTClientBidding {

    public interface AdInteractionListener {
        void onClicked(View view, TTNtObject tTNtObject);

        void onCreativeClick(View view, TTNtObject tTNtObject);

        void onShow(TTNtObject tTNtObject);
    }

    public interface ExpressRenderListener {
        void onRenderSuccess(View view, float f, float f2, boolean z);
    }

    void destroy();

    Bitmap getAdLogo();

    View getAdView();

    int getAppCommentNum();

    int getAppScore();

    int getAppSize();

    String getButtonText();

    ComplianceInfo getComplianceInfo();

    String getDescription();

    TTVfDislike getDislikeDialog(Activity activity);

    TTVfDislike getDislikeDialog(TTDislikeDialogAbstract tTDislikeDialogAbstract);

    DislikeInfo getDislikeInfo();

    DownloadStatusController getDownloadStatusController();

    TTImage getIcon();

    List<TTImage> getImageList();

    int getImageMode();

    int getInteractionType();

    Map<String, Object> getMediaExtraInfo();

    String getSource();

    String getTitle();

    TTImage getVideoCoverImage();

    void registerViewForInteraction(ViewGroup viewGroup, View view, AdInteractionListener adInteractionListener);

    void registerViewForInteraction(ViewGroup viewGroup, List<View> list, List<View> list2, View view, AdInteractionListener adInteractionListener);

    void registerViewForInteraction(ViewGroup viewGroup, List<View> list, List<View> list2, AdInteractionListener adInteractionListener);

    void registerViewForInteraction(ViewGroup viewGroup, List<View> list, List<View> list2, List<View> list3, View view, AdInteractionListener adInteractionListener);

    void registerViewForInteraction(ViewGroup viewGroup, List<View> list, List<View> list2, List<View> list3, List<View> list4, View view, AdInteractionListener adInteractionListener);

    void render();

    void setActivityForDownloadApp(Activity activity);

    void setDislikeCallback(Activity activity, TTVfDislike.DislikeInteractionCallback dislikeInteractionCallback);

    void setDislikeDialog(TTDislikeDialogAbstract tTDislikeDialogAbstract);

    void setDownloadListener(TTAppDownloadListener tTAppDownloadListener);

    void setExpressRenderListener(ExpressRenderListener expressRenderListener);

    void showInteractionExpressAd(Activity activity);
}
