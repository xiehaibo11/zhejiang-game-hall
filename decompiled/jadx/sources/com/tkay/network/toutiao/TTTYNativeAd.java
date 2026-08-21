package com.tkay.network.toutiao;

import android.app.Activity;
import android.content.Context;
import android.graphics.Bitmap;
import android.view.View;
import android.view.ViewGroup;
import com.bykv.vk.openvk.ComplianceInfo;
import com.bykv.vk.openvk.TTAppDownloadListener;
import com.bykv.vk.openvk.TTDrawVfObject;
import com.bykv.vk.openvk.TTImage;
import com.bykv.vk.openvk.TTNtObject;
import com.bykv.vk.openvk.TTVfDislike;
import com.bykv.vk.openvk.TTVfObject;
import com.tkay.china.api.CustomAdapterDownloadListener;
import com.tkay.core.api.TYCustomVideo;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class TTTYNativeAd extends CustomNativeAd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    TTNtObject f7746a;
    Context b;
    String c;
    boolean d = false;
    TTTYCustomVideo e;
    double f;
    View g;

    public TTTYNativeAd(Context context, String str, TTNtObject tTNtObject, boolean z, Bitmap bitmap, int i) {
        this.b = context.getApplicationContext();
        this.c = str;
        this.f7746a = tTNtObject;
        setNetworkInfoMap(tTNtObject.getMediaExtraInfo());
        setAdData(z, bitmap, i);
    }

    public void setAdData(boolean z, Bitmap bitmap, int i) {
        setTitle(this.f7746a.getTitle());
        setDescriptionText(this.f7746a.getDescription());
        setAdFrom(this.f7746a.getSource());
        setStarRating(Double.valueOf(this.f7746a.getAppScore()));
        setAppCommentNum(this.f7746a.getAppCommentNum());
        TTImage icon = this.f7746a.getIcon();
        if (icon != null) {
            setIconImageUrl(icon.getImageUrl());
        }
        List<TTImage> imageList = this.f7746a.getImageList();
        ArrayList arrayList = new ArrayList();
        if (imageList != null && imageList.size() > 0) {
            for (int i2 = 0; i2 < imageList.size(); i2++) {
                TTImage tTImage = imageList.get(i2);
                if (tTImage != null) {
                    arrayList.add(tTImage.getImageUrl());
                    if (i2 == 0) {
                        setMainImageUrl(tTImage.getImageUrl());
                        setMainImageWidth(tTImage.getWidth());
                        setMainImageHeight(tTImage.getHeight());
                    }
                }
            }
        }
        setImageUrlList(arrayList);
        setCallToActionText(this.f7746a.getButtonText());
        TTNtObject tTNtObject = this.f7746a;
        if (tTNtObject instanceof TTDrawVfObject) {
            TTVfObject.CustomizeVideo customVideo = ((TTDrawVfObject) tTNtObject).getCustomVideo();
            if (customVideo != null) {
                setVideoUrl(customVideo.getVideoUrl());
                this.e = new TTTYCustomVideo(customVideo);
            }
            ((TTDrawVfObject) this.f7746a).setCanInterruptVideoPlay(z);
            if (bitmap != null && i > 0) {
                ((TTDrawVfObject) this.f7746a).setPauseIcon(bitmap, i);
            }
        }
        ComplianceInfo complianceInfo = this.f7746a.getComplianceInfo();
        if (complianceInfo != null) {
            setAdAppInfo(new TTATDownloadAppInfo(complianceInfo, this.f7746a.getAppSize()));
        }
        int i3 = this.f7746a.getInteractionType() == 4 ? 1 : 0;
        if (this.f7746a.getInteractionType() == 3) {
            i3 = 3;
        }
        if (this.f7746a.getInteractionType() == 2) {
            i3 = 2;
        }
        setNativeInteractionType(i3);
        TTNtObject tTNtObject2 = this.f7746a;
        if (tTNtObject2 instanceof TTVfObject) {
            TTVfObject.CustomizeVideo customVideo2 = ((TTVfObject) tTNtObject2).getCustomVideo();
            if (customVideo2 != null) {
                setVideoUrl(customVideo2.getVideoUrl());
                this.e = new TTTYCustomVideo(customVideo2);
            }
            setVideoDuration(((TTVfObject) this.f7746a).getVideoDuration());
            ((TTVfObject) this.f7746a).setVideoListener(new TTVfObject.VideoVfListener() { // from class: com.tkay.network.toutiao.TTTYNativeAd.1
                @Override // com.bykv.vk.openvk.TTVfObject.VideoVfListener
                public final void onVideoContinuePlay(TTVfObject tTVfObject) {
                }

                @Override // com.bykv.vk.openvk.TTVfObject.VideoVfListener
                public final void onVideoError(int i4, int i5) {
                }

                @Override // com.bykv.vk.openvk.TTVfObject.VideoVfListener
                public final void onVideoLoad(TTVfObject tTVfObject) {
                }

                @Override // com.bykv.vk.openvk.TTVfObject.VideoVfListener
                public final void onVideoPaused(TTVfObject tTVfObject) {
                }

                @Override // com.bykv.vk.openvk.TTVfObject.VideoVfListener
                public final void onVideoStartPlay(TTVfObject tTVfObject) {
                    TTTYNativeAd.this.notifyAdVideoStart();
                }

                @Override // com.bykv.vk.openvk.TTVfObject.VideoVfListener
                public final void onVideoComplete(TTVfObject tTVfObject) {
                    TTTYNativeAd.this.notifyAdVideoEnd();
                }

                @Override // com.bykv.vk.openvk.TTVfObject.VideoVfListener
                public final void onProgressUpdate(long j, long j2) {
                    if (TTTYNativeAd.this.getVideoDuration() == 0.0d) {
                        TTTYNativeAd.this.setVideoDuration(j2 / 1000.0d);
                    }
                    TTTYNativeAd.this.f = j / 1000.0d;
                    TTTYNativeAd tTTYNativeAd = TTTYNativeAd.this;
                    tTTYNativeAd.notifyAdVideoPlayProgress((int) tTTYNativeAd.f);
                }
            });
        }
        this.f7746a.setDownloadListener(new TTAppDownloadListener() { // from class: com.tkay.network.toutiao.TTTYNativeAd.2
            @Override // com.bykv.vk.openvk.TTAppDownloadListener
            public final void onIdle() {
            }

            @Override // com.bykv.vk.openvk.TTAppDownloadListener
            public final void onDownloadActive(long j, long j2, String str, String str2) {
                if (TTTYNativeAd.this.d) {
                    if (TTTYNativeAd.this.mDownloadListener == null || !(TTTYNativeAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                        return;
                    }
                    ((CustomAdapterDownloadListener) TTTYNativeAd.this.mDownloadListener).onDownloadUpdate(j, j2, str, str2);
                    return;
                }
                TTTYNativeAd.this.d = true;
                if (TTTYNativeAd.this.mDownloadListener == null || !(TTTYNativeAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYNativeAd.this.mDownloadListener).onDownloadStart(j, j2, str, str2);
            }

            @Override // com.bykv.vk.openvk.TTAppDownloadListener
            public final void onDownloadPaused(long j, long j2, String str, String str2) {
                if (TTTYNativeAd.this.mDownloadListener == null || !(TTTYNativeAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYNativeAd.this.mDownloadListener).onDownloadPause(j, j2, str, str2);
            }

            @Override // com.bykv.vk.openvk.TTAppDownloadListener
            public final void onDownloadFailed(long j, long j2, String str, String str2) {
                if (TTTYNativeAd.this.mDownloadListener == null || !(TTTYNativeAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYNativeAd.this.mDownloadListener).onDownloadFail(j, j2, str, str2);
            }

            @Override // com.bykv.vk.openvk.TTAppDownloadListener
            public final void onDownloadFinished(long j, String str, String str2) {
                if (TTTYNativeAd.this.mDownloadListener == null || !(TTTYNativeAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYNativeAd.this.mDownloadListener).onDownloadFinish(j, str, str2);
            }

            @Override // com.bykv.vk.openvk.TTAppDownloadListener
            public final void onInstalled(String str, String str2) {
                if (TTTYNativeAd.this.mDownloadListener == null || !(TTTYNativeAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYNativeAd.this.mDownloadListener).onInstalled(str, str2);
            }
        });
        int imageMode = this.f7746a.getImageMode();
        if (imageMode != 2 && imageMode != 3 && imageMode != 4) {
            if (imageMode == 5 || imageMode == 15) {
                this.mAdSourceType = "1";
                return;
            } else if (imageMode != 16) {
                return;
            }
        }
        this.mAdSourceType = "2";
    }

    private void a(List<View> list, View view) {
        if ((view instanceof ViewGroup) && view != this.f7746a.getAdView()) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i = 0; i < viewGroup.getChildCount(); i++) {
                a(list, viewGroup.getChildAt(i));
            }
            return;
        }
        if (view != this.f7746a.getAdView()) {
            list.add(view);
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
        List<View> clickViewList = tYNativePrepareInfo.getClickViewList();
        if (clickViewList == null || clickViewList.size() == 0) {
            clickViewList = new ArrayList<>();
            a(clickViewList, view);
        }
        this.f7746a.registerViewForInteraction((ViewGroup) view, clickViewList, clickViewList, new TTNtObject.AdInteractionListener() { // from class: com.tkay.network.toutiao.TTTYNativeAd.3
            @Override // com.bykv.vk.openvk.TTNtObject.AdInteractionListener
            public final void onClicked(View view2, TTNtObject tTNtObject) {
                TTTYNativeAd.this.notifyAdClicked();
            }

            @Override // com.bykv.vk.openvk.TTNtObject.AdInteractionListener
            public final void onCreativeClick(View view2, TTNtObject tTNtObject) {
                TTTYNativeAd.this.notifyAdClicked();
            }

            @Override // com.bykv.vk.openvk.TTNtObject.AdInteractionListener
            public final void onShow(TTNtObject tTNtObject) {
                TTTYNativeAd.this.notifyAdImpression();
            }
        });
        if (view.getContext() instanceof Activity) {
            this.f7746a.setActivityForDownloadApp((Activity) view.getContext());
            bindDislikeListener(new AnonymousClass4((Activity) view.getContext()));
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.toutiao.TTTYNativeAd$4, reason: invalid class name */
    final class AnonymousClass4 implements View.OnClickListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ Activity f7750a;

        AnonymousClass4(Activity activity) {
            this.f7750a = activity;
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            if (TTTYNativeAd.this.f7746a == null) {
                return;
            }
            TTVfDislike dislikeDialog = TTTYNativeAd.this.f7746a.getDislikeDialog(this.f7750a);
            dislikeDialog.setDislikeInteractionCallback(new TTVfDislike.DislikeInteractionCallback() { // from class: com.tkay.network.toutiao.TTTYNativeAd.4.1
                @Override // com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback
                public final void onCancel() {
                }

                @Deprecated
                public final void onRefuse() {
                }

                @Override // com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback
                public final void onShow() {
                }

                @Override // com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback
                public final void onSelected(int i, String str, boolean z) {
                    TTTYNativeAd.this.notifyAdDislikeClick();
                }

                @Deprecated
                public final void onSelected(int i, String str) {
                    TTTYNativeAd.this.notifyAdDislikeClick();
                }
            });
            if (dislikeDialog.isShow()) {
                return;
            }
            dislikeDialog.showDislikeDialog();
        }
    }

    private void a(Activity activity) {
        bindDislikeListener(new AnonymousClass4(activity));
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.IATThirdPartyMaterial
    public Bitmap getAdLogo() {
        try {
            if (this.f7746a != null) {
                return this.f7746a.getAdLogo();
            }
            return null;
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void clear(View view) {
        a(view);
    }

    private void a(View view) {
        if (view == null) {
            return;
        }
        if (view instanceof ViewGroup) {
            TTNtObject tTNtObject = this.f7746a;
            if (tTNtObject == null || view != tTNtObject.getAdView()) {
                ViewGroup viewGroup = (ViewGroup) view;
                for (int i = 0; i < viewGroup.getChildCount(); i++) {
                    a(viewGroup.getChildAt(i));
                }
                return;
            }
            return;
        }
        view.setOnClickListener(null);
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a, com.tkay.core.api.IATThirdPartyMaterial
    public View getAdMediaView(Object... objArr) {
        if (this.g == null) {
            this.g = this.f7746a.getAdView();
        }
        return this.g;
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.IATThirdPartyMaterial
    public double getVideoProgress() {
        return this.f;
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.IATThirdPartyMaterial
    public TYCustomVideo getNativeCustomVideo() {
        return this.e;
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.BaseAd
    public void destroy() {
        try {
            if (this.f7746a != null) {
                this.f7746a.setActivityForDownloadApp(null);
            }
        } catch (Exception unused) {
        }
        this.b = null;
        this.f7746a = null;
    }
}
