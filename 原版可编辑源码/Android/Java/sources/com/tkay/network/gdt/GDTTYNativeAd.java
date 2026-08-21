package com.tkay.network.gdt;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.qq.e.ads.cfg.VideoOption;
import com.qq.e.ads.nativ.MediaView;
import com.qq.e.ads.nativ.NativeADEventListenerWithClickInfo;
import com.qq.e.ads.nativ.NativeADMediaListener;
import com.qq.e.ads.nativ.NativeUnifiedADAppMiitInfo;
import com.qq.e.ads.nativ.NativeUnifiedADData;
import com.qq.e.ads.nativ.widget.NativeAdContainer;
import com.qq.e.comm.compliance.DownloadConfirmCallBack;
import com.qq.e.comm.compliance.DownloadConfirmListener;
import com.qq.e.comm.util.AdError;
import com.tkay.nativead.api.TYNativePrepareExInfo;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.List;

public class GDTTYNativeAd extends CustomNativeAd {
    private static final String l = GDTTYNativeAd.class.getSimpleName();
    WeakReference<Context> a;
    Context b;
    NativeUnifiedADData c;
    int d;
    int e;
    int f;
    View h;
    MediaView i;
    NativeAdContainer k;
    int g = 0;
    boolean j = false;

    @Override
    public boolean isNativeExpress() {
        return false;
    }

    protected GDTTYNativeAd(Context context, NativeUnifiedADData nativeUnifiedADData, int i, int i2, int i3) {
        String strValueOf;
        this.b = context.getApplicationContext();
        this.a = new WeakReference<>(context);
        this.d = i;
        this.e = i2;
        this.f = i3;
        this.c = nativeUnifiedADData;
        setTitle(nativeUnifiedADData.getTitle());
        setDescriptionText(nativeUnifiedADData.getDesc());
        setIconImageUrl(nativeUnifiedADData.getIconUrl());
        setStarRating(Double.valueOf(nativeUnifiedADData.getAppScore()));
        setAppPrice(nativeUnifiedADData.getAppPrice());
        setCallToActionText(getCallToAction(nativeUnifiedADData));
        setMainImageUrl(nativeUnifiedADData.getImgUrl());
        setMainImageWidth(nativeUnifiedADData.getPictureWidth());
        setMainImageHeight(nativeUnifiedADData.getPictureHeight());
        setImageUrlList(nativeUnifiedADData.getImgList());
        setVideoDuration(((double) nativeUnifiedADData.getVideoDuration()) / 1000.0d);
        setNativeInteractionType(nativeUnifiedADData.isAppAd() ? 1 : 0);
        NativeUnifiedADAppMiitInfo appMiitInfo = nativeUnifiedADData.getAppMiitInfo();
        if (nativeUnifiedADData.isAppAd() && appMiitInfo != null) {
            try {
                strValueOf = String.valueOf(nativeUnifiedADData.getDownloadCount());
            } catch (Exception unused) {
                strValueOf = "";
            }
            setAdAppInfo(new GDTATDownloadAppInfo(appMiitInfo, strValueOf));
        }
        if (nativeUnifiedADData.getAdPatternType() == 2) {
            this.mAdSourceType = "1";
        } else {
            this.mAdSourceType = "2";
        }
        nativeUnifiedADData.setNativeAdEventListener(new 2(nativeUnifiedADData));
        setNetworkInfoMap(nativeUnifiedADData.getExtraInfo());
    }

    @Override
    public void registerDownloadConfirmListener() {
        this.c.setDownloadConfirmListener(new DownloadConfirmListener() {
            @Override
            public final void onDownloadConfirm(Activity activity, int i, String str, DownloadConfirmCallBack downloadConfirmCallBack) {
                Log.i("GDTTYNativeAd", "onDownloadConfirm....");
                View view = GDTTYNativeAd.this.h;
                GDTTYNativeAd.this.h = null;
                GDTDownloadFirmInfo gDTDownloadFirmInfo = new GDTDownloadFirmInfo();
                gDTDownloadFirmInfo.appInfoUrl = str;
                gDTDownloadFirmInfo.scenes = i;
                gDTDownloadFirmInfo.confirmCallBack = downloadConfirmCallBack;
                GDTTYNativeAd.this.notifyDownloadConfirm(activity, view, gDTDownloadFirmInfo);
            }
        });
    }

    public String getCallToAction(NativeUnifiedADData nativeUnifiedADData) {
        if (!TextUtils.isEmpty(nativeUnifiedADData.getCTAText())) {
            return nativeUnifiedADData.getCTAText();
        }
        boolean zIsAppAd = nativeUnifiedADData.isAppAd();
        int appStatus = nativeUnifiedADData.getAppStatus();
        return !zIsAppAd ? "浏览" : appStatus != 0 ? appStatus != 1 ? appStatus != 2 ? appStatus != 4 ? appStatus != 8 ? appStatus != 16 ? "浏览" : "下载" : "安装" : "下载" : "更新" : "启动" : "下载";
    }

    private void a(NativeUnifiedADData nativeUnifiedADData) {
        String strValueOf;
        setTitle(nativeUnifiedADData.getTitle());
        setDescriptionText(nativeUnifiedADData.getDesc());
        setIconImageUrl(nativeUnifiedADData.getIconUrl());
        setStarRating(Double.valueOf(nativeUnifiedADData.getAppScore()));
        setAppPrice(nativeUnifiedADData.getAppPrice());
        setCallToActionText(getCallToAction(nativeUnifiedADData));
        setMainImageUrl(nativeUnifiedADData.getImgUrl());
        setMainImageWidth(nativeUnifiedADData.getPictureWidth());
        setMainImageHeight(nativeUnifiedADData.getPictureHeight());
        setImageUrlList(nativeUnifiedADData.getImgList());
        setVideoDuration(((double) nativeUnifiedADData.getVideoDuration()) / 1000.0d);
        setNativeInteractionType(nativeUnifiedADData.isAppAd() ? 1 : 0);
        NativeUnifiedADAppMiitInfo appMiitInfo = nativeUnifiedADData.getAppMiitInfo();
        if (nativeUnifiedADData.isAppAd() && appMiitInfo != null) {
            try {
                strValueOf = String.valueOf(nativeUnifiedADData.getDownloadCount());
            } catch (Exception unused) {
                strValueOf = "";
            }
            setAdAppInfo(new GDTATDownloadAppInfo(appMiitInfo, strValueOf));
        }
        if (nativeUnifiedADData.getAdPatternType() == 2) {
            this.mAdSourceType = "1";
        } else {
            this.mAdSourceType = "2";
        }
        nativeUnifiedADData.setNativeAdEventListener(new 2(nativeUnifiedADData));
        setNetworkInfoMap(nativeUnifiedADData.getExtraInfo());
    }

    final class 2 extends NativeADEventListenerWithClickInfo {
        final NativeUnifiedADData a;

        @Override
        public final void onADError(AdError adError) {
        }

        @Override
        public final void onADStatusChanged() {
        }

        2(NativeUnifiedADData nativeUnifiedADData) {
            this.a = nativeUnifiedADData;
        }

        @Override
        public final void onADExposed() {
            GDTTYInitManager.getInstance().a(GDTTYNativeAd.this.getShowId(), new WeakReference(this.a));
            GDTTYNativeAd.this.notifyAdImpression();
        }

        @Override
        public final void onADClicked(View view) {
            GDTTYNativeAd.this.h = view;
            Log.i("GDTTYNativeAd", "onADClicked....".concat(String.valueOf(view)));
            GDTTYNativeAd.this.notifyAdClicked();
        }
    }

    @Override
    public View getAdMediaView(Object... objArr) {
        NativeUnifiedADData nativeUnifiedADData = this.c;
        if (nativeUnifiedADData != null) {
            if (nativeUnifiedADData.getAdPatternType() != 2) {
                return super.getAdMediaView(objArr);
            }
            if (this.i == null) {
                MediaView mediaView = new MediaView(this.b);
                this.i = mediaView;
                mediaView.setBackgroundColor(-16777216);
                ViewGroup.LayoutParams layoutParams = this.i.getLayoutParams();
                if (layoutParams == null) {
                    layoutParams = new ViewGroup.LayoutParams(-1, -2);
                }
                this.i.setLayoutParams(layoutParams);
            }
            return this.i;
        }
        return super.getAdMediaView(objArr);
    }

    @Override
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
        List<View> creativeClickViewList;
        if (this.c == null || this.k == null) {
            return;
        }
        List<View> clickViewList = tYNativePrepareInfo.getClickViewList();
        if (clickViewList == null || clickViewList.size() == 0) {
            clickViewList = new ArrayList<>();
            a(view, clickViewList);
        }
        List<View> list = clickViewList;
        FrameLayout.LayoutParams choiceViewLayoutParams = tYNativePrepareInfo.getChoiceViewLayoutParams();
        ArrayList arrayList = new ArrayList();
        if ((tYNativePrepareInfo instanceof TYNativePrepareExInfo) && (creativeClickViewList = ((TYNativePrepareExInfo) tYNativePrepareInfo).getCreativeClickViewList()) != null) {
            arrayList.addAll(creativeClickViewList);
        }
        this.c.bindAdToView(view.getContext(), this.k, choiceViewLayoutParams, list, arrayList);
        try {
            if (this.i == null) {
                return;
            }
            this.c.bindMediaView(this.i, new VideoOption.Builder().setAutoPlayMuted(this.d == 1).setDetailPageMuted(this.d == 1).setAutoPlayPolicy(this.e).build(), new NativeADMediaListener() {
                @Override
                public final void onVideoClicked() {
                }

                @Override
                public final void onVideoInit() {
                }

                @Override
                public final void onVideoLoaded(int i) {
                }

                @Override
                public final void onVideoLoading() {
                }

                @Override
                public final void onVideoPause() {
                }

                @Override
                public final void onVideoReady() {
                }

                @Override
                public final void onVideoResume() {
                }

                @Override
                public final void onVideoStop() {
                }

                @Override
                public final void onVideoStart() {
                    GDTTYNativeAd.this.notifyAdVideoStart();
                }

                @Override
                public final void onVideoCompleted() {
                    GDTTYNativeAd.this.notifyAdVideoEnd();
                }

                @Override
                public final void onVideoError(AdError adError) {
                    GDTTYNativeAd gDTTYNativeAd = GDTTYNativeAd.this;
                    StringBuilder sb = new StringBuilder();
                    sb.append(adError.getErrorCode());
                    gDTTYNativeAd.notifyAdVideoVideoPlayFail(sb.toString(), adError.getErrorMsg());
                }
            });
            if (this.g > 0) {
                this.c.setVideoMute(this.g == 1);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public ViewGroup getCustomAdContainer() {
        if (this.c != null) {
            this.k = new NativeAdContainer(this.b);
        }
        return this.k;
    }

    private void a(View view, List<View> list) {
        if ((view instanceof ViewGroup) && view != this.i) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i = 0; i < viewGroup.getChildCount(); i++) {
                a(viewGroup.getChildAt(i), list);
            }
            return;
        }
        list.add(view);
    }

    @Override
    public void clear(View view) {
        a(view);
    }

    private void a(View view) {
        if (view == null) {
            return;
        }
        if ((view instanceof ViewGroup) && view != this.i) {
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
    public void onResume() {
        NativeUnifiedADData nativeUnifiedADData = this.c;
        if (nativeUnifiedADData != null) {
            nativeUnifiedADData.resume();
        }
    }

    @Override
    public void resumeVideo() {
        NativeUnifiedADData nativeUnifiedADData = this.c;
        if (nativeUnifiedADData != null) {
            nativeUnifiedADData.resumeVideo();
        }
    }

    @Override
    public void pauseVideo() {
        NativeUnifiedADData nativeUnifiedADData = this.c;
        if (nativeUnifiedADData != null) {
            nativeUnifiedADData.pauseVideo();
        }
    }

    @Override
    public void setVideoMute(boolean z) {
        this.g = z ? 1 : 2;
        NativeUnifiedADData nativeUnifiedADData = this.c;
        if (nativeUnifiedADData != null) {
            nativeUnifiedADData.setVideoMute(z);
        }
    }

    @Override
    public double getVideoProgress() {
        NativeUnifiedADData nativeUnifiedADData = this.c;
        if (nativeUnifiedADData != null) {
            return ((double) nativeUnifiedADData.getVideoCurrentPosition()) / 1000.0d;
        }
        return super.getVideoProgress();
    }

    @Override
    public void destroy() {
        super.destroy();
        NativeUnifiedADData nativeUnifiedADData = this.c;
        if (nativeUnifiedADData != null) {
            nativeUnifiedADData.setNativeAdEventListener(null);
            this.c.destroy();
            this.c = null;
        }
        this.i = null;
        this.b = null;
        WeakReference<Context> weakReference = this.a;
        if (weakReference != null) {
            weakReference.clear();
            this.a = null;
        }
        NativeAdContainer nativeAdContainer = this.k;
        if (nativeAdContainer != null) {
            nativeAdContainer.removeAllViews();
            this.k = null;
        }
    }
}
