package com.tkay.network.ks;

import android.content.Context;
import android.content.DialogInterface;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.api.KsAppDownloadListener;
import com.kwad.sdk.api.KsImage;
import com.kwad.sdk.api.KsNativeAd;
import com.tkay.china.api.CustomAdapterDownloadListener;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.List;

public class KSTYNativeAd extends CustomNativeAd {
    Context a;
    KsNativeAd b;
    View c;
    long d;
    FrameLayout e;
    boolean f;
    int g = 0;
    long h = 0;

    public KSTYNativeAd(Context context, KsNativeAd ksNativeAd, boolean z) {
        this.d = 0L;
        this.a = context.getApplicationContext();
        this.b = ksNativeAd;
        this.f = z;
        setTitle(ksNativeAd.getAppName());
        setIconImageUrl(this.b.getAppIconUrl());
        setAdFrom(this.b.getAdSource());
        setStarRating(Double.valueOf(this.b.getAppScore()));
        setDescriptionText(this.b.getAdDescription());
        setAdChoiceIconUrl(this.b.getAdSourceLogoUrl(0));
        setNativeInteractionType(this.b.getInteractionType() == 2 ? 3 : this.b.getInteractionType() == 1 ? 1 : 0);
        ArrayList arrayList = new ArrayList();
        List<KsImage> imageList = this.b.getImageList();
        if (imageList != null && imageList.size() > 0) {
            for (int i = 0; i < imageList.size(); i++) {
                KsImage ksImage = imageList.get(i);
                if (ksImage != null) {
                    arrayList.add(ksImage.getImageUrl());
                    if (i == 0) {
                        setMainImageUrl(ksImage.getImageUrl());
                        setMainImageWidth(ksImage.getWidth());
                        setMainImageHeight(ksImage.getHeight());
                    }
                }
            }
        }
        setImageUrlList(arrayList);
        setCallToActionText(this.b.getActionDescription());
        setVideoDuration(this.b.getVideoDuration());
        setVideoUrl(this.b.getVideoUrl());
        setVideoWidth(this.b.getVideoWidth());
        setVideoHeight(this.b.getVideoHeight());
        this.d = this.b.getAppPackageSize();
        if (this.b.getInteractionType() == 1) {
            setAdAppInfo(new KSATDownloadAppInfo(this.b));
        }
        if (this.b.getMaterialType() == 1) {
            this.mAdSourceType = "1";
        } else if (this.b.getMaterialType() == 3 || this.b.getMaterialType() == 2) {
            this.mAdSourceType = "2";
        }
        this.e = new FrameLayout(context.getApplicationContext());
    }

    private void a() {
        setTitle(this.b.getAppName());
        setIconImageUrl(this.b.getAppIconUrl());
        setAdFrom(this.b.getAdSource());
        setStarRating(Double.valueOf(this.b.getAppScore()));
        setDescriptionText(this.b.getAdDescription());
        setAdChoiceIconUrl(this.b.getAdSourceLogoUrl(0));
        int i = this.b.getInteractionType() == 1 ? 1 : 0;
        if (this.b.getInteractionType() == 2) {
            i = 3;
        }
        setNativeInteractionType(i);
        ArrayList arrayList = new ArrayList();
        List<KsImage> imageList = this.b.getImageList();
        if (imageList != null && imageList.size() > 0) {
            for (int i2 = 0; i2 < imageList.size(); i2++) {
                KsImage ksImage = imageList.get(i2);
                if (ksImage != null) {
                    arrayList.add(ksImage.getImageUrl());
                    if (i2 == 0) {
                        setMainImageUrl(ksImage.getImageUrl());
                        setMainImageWidth(ksImage.getWidth());
                        setMainImageHeight(ksImage.getHeight());
                    }
                }
            }
        }
        setImageUrlList(arrayList);
        setCallToActionText(this.b.getActionDescription());
        setVideoDuration(this.b.getVideoDuration());
        setVideoUrl(this.b.getVideoUrl());
        setVideoWidth(this.b.getVideoWidth());
        setVideoHeight(this.b.getVideoHeight());
        this.d = this.b.getAppPackageSize();
        if (this.b.getInteractionType() == 1) {
            setAdAppInfo(new KSATDownloadAppInfo(this.b));
        }
        if (this.b.getMaterialType() == 1) {
            this.mAdSourceType = "1";
        } else if (this.b.getMaterialType() == 3 || this.b.getMaterialType() == 2) {
            this.mAdSourceType = "2";
        }
    }

    private void a(List<View> list, View view) {
        if ((view instanceof ViewGroup) && view != this.c) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i = 0; i < viewGroup.getChildCount(); i++) {
                a(list, viewGroup.getChildAt(i));
            }
            return;
        }
        if (view != this.c) {
            list.add(view);
        }
    }

    @Override
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
        List<View> clickViewList = tYNativePrepareInfo.getClickViewList();
        if (clickViewList == null || clickViewList.size() <= 0) {
            clickViewList = new ArrayList<>();
            a(clickViewList, view);
        }
        ViewGroup viewGroup = (ViewGroup) view;
        this.b.registerViewForInteraction(viewGroup, clickViewList, new 1());
        this.b.setDownloadListener(new 2());
        this.b.setVideoPlayListener(new 3());
        if (this.b.getMaterialType() == 1) {
            KsAdVideoPlayConfig.Builder builder = new KsAdVideoPlayConfig.Builder();
            builder.videoSoundEnable(this.f);
            int i = this.g;
            if (i > 0) {
                builder.videoSoundEnable(i != 1);
            }
            View videoView = this.b.getVideoView(viewGroup.getContext(), builder.build());
            this.c = videoView;
            if (videoView == null || this.e == null || videoView.getParent() != null) {
                return;
            }
            this.e.addView(this.c);
        }
    }

    final class 1 implements KsNativeAd.AdInteractionListener {
        @Override
        public final boolean handleDownloadDialog(DialogInterface.OnClickListener onClickListener) {
            return false;
        }

        @Override
        public final void onDownloadTipsDialogDismiss() {
        }

        @Override
        public final void onDownloadTipsDialogShow() {
        }

        1() {
        }

        @Override
        public final void onAdClicked(View view, KsNativeAd ksNativeAd) {
            KSTYNativeAd.this.notifyAdClicked();
        }

        @Override
        public final void onAdShow(KsNativeAd ksNativeAd) {
            KSTYInitManager.getInstance().a(KSTYNativeAd.this.getShowId(), new WeakReference(ksNativeAd));
            KSTYNativeAd.this.notifyAdImpression();
        }
    }

    private void a(ViewGroup viewGroup, List<View> list) {
        this.b.registerViewForInteraction(viewGroup, list, new 1());
        this.b.setDownloadListener(new 2());
        this.b.setVideoPlayListener(new 3());
        if (this.b.getMaterialType() == 1) {
            KsAdVideoPlayConfig.Builder builder = new KsAdVideoPlayConfig.Builder();
            builder.videoSoundEnable(this.f);
            int i = this.g;
            if (i > 0) {
                builder.videoSoundEnable(i != 1);
            }
            View videoView = this.b.getVideoView(viewGroup.getContext(), builder.build());
            this.c = videoView;
            if (videoView == null || this.e == null || videoView.getParent() != null) {
                return;
            }
            this.e.addView(this.c);
        }
    }

    final class 2 implements KsAppDownloadListener {
        @Override
        public final void onIdle() {
        }

        2() {
        }

        @Override
        public final void onDownloadStarted() {
            if (KSTYNativeAd.this.mDownloadListener == null || !(KSTYNativeAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) KSTYNativeAd.this.mDownloadListener).onDownloadStart(KSTYNativeAd.this.d, 0L, "", KSTYNativeAd.this.getTitle());
        }

        @Override
        public final void onProgressUpdate(int i) {
            if (KSTYNativeAd.this.mDownloadListener == null || !(KSTYNativeAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            KSTYNativeAd kSTYNativeAd = KSTYNativeAd.this;
            kSTYNativeAd.h = (kSTYNativeAd.d * ((long) i)) / 100;
            ((CustomAdapterDownloadListener) KSTYNativeAd.this.mDownloadListener).onDownloadUpdate(KSTYNativeAd.this.d, KSTYNativeAd.this.h, "", KSTYNativeAd.this.getTitle());
        }

        @Override
        public final void onDownloadFinished() {
            if (KSTYNativeAd.this.mDownloadListener == null || !(KSTYNativeAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) KSTYNativeAd.this.mDownloadListener).onDownloadFinish(KSTYNativeAd.this.d, "", KSTYNativeAd.this.getTitle());
        }

        @Override
        public final void onDownloadFailed() {
            if (KSTYNativeAd.this.mDownloadListener == null || !(KSTYNativeAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) KSTYNativeAd.this.mDownloadListener).onDownloadFail(KSTYNativeAd.this.d, KSTYNativeAd.this.h, "", KSTYNativeAd.this.getTitle());
        }

        @Override
        public final void onInstalled() {
            if (KSTYNativeAd.this.mDownloadListener == null || !(KSTYNativeAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) KSTYNativeAd.this.mDownloadListener).onInstalled("", KSTYNativeAd.this.getTitle());
        }
    }

    final class 3 implements KsNativeAd.VideoPlayListener {
        @Override
        public final void onVideoPlayPause() {
        }

        @Override
        public final void onVideoPlayReady() {
        }

        @Override
        public final void onVideoPlayResume() {
        }

        3() {
        }

        @Override
        public final void onVideoPlayStart() {
            KSTYNativeAd.this.notifyAdVideoStart();
        }

        @Override
        public final void onVideoPlayComplete() {
            KSTYNativeAd.this.notifyAdVideoEnd();
        }

        @Override
        public final void onVideoPlayError(int i, int i2) {
            Log.i("tkay", "KuaiShou Video play error:" + i + " " + i2);
            KSTYNativeAd.this.notifyAdVideoVideoPlayFail(String.valueOf(i), String.valueOf(i2));
        }
    }

    @Override
    public View getAdMediaView(Object... objArr) {
        if (this.b.getMaterialType() == 1) {
            return this.e;
        }
        return null;
    }

    @Override
    public void setVideoMute(boolean z) {
        super.setVideoMute(z);
        this.g = z ? 1 : 2;
    }

    @Override
    public void clear(View view) {
        a(view);
    }

    private void a(View view) {
        if (view == null) {
            return;
        }
        if ((view instanceof ViewGroup) && view != this.c) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i = 0; i < viewGroup.getChildCount(); i++) {
                a(viewGroup.getChildAt(i));
            }
            return;
        }
        view.setOnClickListener(null);
        view.setClickable(false);
    }

    @Override
    public void destroy() {
        KsNativeAd ksNativeAd = this.b;
        if (ksNativeAd != null) {
            ksNativeAd.setDownloadListener(null);
            try {
                this.b.registerViewForInteraction(null, null, null);
            } catch (Exception unused) {
            }
        }
        this.a = null;
        this.e = null;
    }
}
