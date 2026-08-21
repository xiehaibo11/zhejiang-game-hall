package com.tkay.nativead.api;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import com.tkay.core.api.IExHandler;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.api.TYCustomVideo;
import com.tkay.core.api.TYEventInterface;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.i;
import com.tkay.core.common.b.k;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.a;
import com.tkay.core.common.f.d;
import com.tkay.core.common.l.g;
import com.tkay.core.common.l.n;
import com.tkay.core.common.l.s;
import com.tkay.core.common.v;
import com.tkay.core.common.x;
import com.tkay.nativead.a.b;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;

public class NativeAd {
    private boolean hasSetShowTkDetail;
    private a mAdCacheInfo;
    protected com.tkay.nativead.unitgroup.a mBaseNativeAd;
    DownloadConfirmListener mConfirmListener;
    private Context mContext;
    private TYNativeDislikeListener mDislikeListener;
    TYEventInterface mEventInterface;
    private boolean mIsDestroyed;
    private TYNativeEventListener mNativeEventListener;
    TYNativeAdView mNativeView;
    private String mPlacementId;
    private boolean mRecordedImpression;
    private boolean mRecordedShow;
    TYNativeMaterial nativeMaterial;
    private final String TAG = getClass().getSimpleName();
    View.OnClickListener mDefaultCloseViewListener = new View.OnClickListener() {
        @Override
        public final void onClick(View view) {
            if (NativeAd.this.mBaseNativeAd != null) {
                NativeAd.this.mBaseNativeAd.notifyAdDislikeClick();
            }
        }
    };
    boolean isManualImpressionTrack = false;

    public interface DownloadConfirmListener {
        void onDownloadConfirm(Context context, TYAdInfo tYAdInfo, View view, TYNetworkConfirmInfo tYNetworkConfirmInfo);
    }

    public interface ImpressionEventListener {
        void onImpression();
    }

    protected NativeAd(Context context, String str, a aVar) {
        this.mContext = context.getApplicationContext();
        this.mPlacementId = str;
        this.mAdCacheInfo = aVar;
        com.tkay.nativead.unitgroup.a aVar2 = (com.tkay.nativead.unitgroup.a) aVar.f();
        this.mBaseNativeAd = aVar2;
        aVar2.setNativeEventListener(new k() {
            @Override
            public final void onAdDislikeButtonClick() {
                NativeAd nativeAd = NativeAd.this;
                nativeAd.handleAdDislikeButtonClick(nativeAd.mNativeView);
            }

            @Override
            public final void onDeeplinkCallback(boolean z) {
                NativeAd nativeAd = NativeAd.this;
                nativeAd.handleDeeplinkCallback(nativeAd.mNativeView, z);
            }

            @Override
            public final void onDownloadConfirmCallback(Context context2, View view, TYNetworkConfirmInfo tYNetworkConfirmInfo) {
                NativeAd.this.handleDownloadConfirm(context2, view, tYNetworkConfirmInfo);
            }

            @Override
            public final void onAdImpressed() {
                NativeAd nativeAd = NativeAd.this;
                nativeAd.handleImpression(nativeAd.mNativeView);
            }

            @Override
            public final void onAdClicked(View view) {
                NativeAd nativeAd = NativeAd.this;
                nativeAd.handleClick(nativeAd.mNativeView, view);
            }

            @Override
            public final void onAdVideoStart() {
                NativeAd nativeAd = NativeAd.this;
                nativeAd.handleVideoStart(nativeAd.mNativeView);
            }

            @Override
            public final void onAdVideoEnd() {
                NativeAd nativeAd = NativeAd.this;
                nativeAd.handleVideoEnd(nativeAd.mNativeView);
            }

            @Override
            public final void onAdVideoProgress(int i) {
                NativeAd nativeAd = NativeAd.this;
                nativeAd.handleVideoProgress(nativeAd.mNativeView, i);
            }
        });
        if (this.mBaseNativeAd instanceof CustomNativeAd) {
            this.nativeMaterial = new b((CustomNativeAd) this.mBaseNativeAd);
        }
    }

    public TYNativeMaterial getAdMaterial() {
        return this.nativeMaterial;
    }

    public synchronized void renderAdContainer(TYNativeAdView tYNativeAdView, View view) {
        if (this.mIsDestroyed) {
            return;
        }
        if (tYNativeAdView != null) {
            tYNativeAdView.clear();
        }
        if (isNativeExpress()) {
            if (this.mBaseNativeAd == null) {
                view = null;
            } else {
                if (tYNativeAdView == null) {
                    Log.e("tkay", "renderAdContainer: TYNativeAdView cannot be null for template-rendering ads!");
                    return;
                }
                view = this.mBaseNativeAd.getAdMediaView(tYNativeAdView, Integer.valueOf(tYNativeAdView.getWidth()));
                if (view == null) {
                    Log.e("tkay", "renderAdContainer: getAdMediaView() cannot be null for template-rendering ads!");
                    return;
                }
            }
        } else if (view == null) {
            Log.e("tkay", "renderAdContainer: selfRenderView cannot be null for self-rendering ads!");
            return;
        }
        this.mNativeView = tYNativeAdView;
        if (tYNativeAdView != null) {
            tYNativeAdView.attachNativeAd(this);
        }
        if (view != null) {
            view.setVisibility(0);
            renderViewToWindow(view);
        }
    }

    public int getAdInteractionType() {
        com.tkay.nativead.unitgroup.a aVar = this.mBaseNativeAd;
        if (aVar == null || !(aVar instanceof CustomNativeAd)) {
            return 0;
        }
        return ((CustomNativeAd) aVar).getNativeAdInteractionType();
    }

    private void renderViewToWindow(View view) {
        n.b(this.mPlacementId, f.i.r, f.i.y, f.i.n, "");
        ViewGroup customAdContainer = this.mBaseNativeAd.getCustomAdContainer();
        int iHashCode = hashCode();
        if (view.getParent() != null) {
            ((ViewGroup) view.getParent()).removeView(view);
        }
        if (customAdContainer != null) {
            if (customAdContainer.getParent() != null) {
                ((ViewGroup) customAdContainer.getParent()).removeView(customAdContainer);
            }
            customAdContainer.addView(view);
        }
        if (customAdContainer != null) {
            view = customAdContainer;
        }
        this.mNativeView.renderView(iHashCode, view, new ImpressionEventListener() {
            @Override
            public final void onImpression() {
                long jCurrentTimeMillis = System.currentTimeMillis();
                d detail = NativeAd.this.mBaseNativeAd != null ? NativeAd.this.mBaseNativeAd.getDetail() : null;
                if (detail != null && TextUtils.isEmpty(detail.l())) {
                    detail.h(g.a(detail.X(), detail.x(), jCurrentTimeMillis));
                }
                if (NativeAd.this.mBaseNativeAd instanceof CustomNativeAd) {
                    ((CustomNativeAd) NativeAd.this.mBaseNativeAd).setShowId(detail.l());
                }
                NativeAd nativeAd = NativeAd.this;
                nativeAd.recordShow(nativeAd.mNativeView);
            }
        });
    }

    public synchronized void prepare(TYNativeAdView tYNativeAdView, TYNativePrepareInfo tYNativePrepareInfo) {
        if (this.mIsDestroyed) {
            return;
        }
        if (tYNativeAdView != null) {
            if (tYNativePrepareInfo == null) {
                tYNativePrepareInfo = new TYNativePrepareInfo();
            }
            this.mBaseNativeAd.setNativePrepareInfo(tYNativePrepareInfo);
            this.mBaseNativeAd.prepare(tYNativeAdView, tYNativePrepareInfo);
            bindListener();
            if (!this.mBaseNativeAd.isNativeExpress()) {
                checkBindView(tYNativePrepareInfo);
            }
        }
    }

    private void checkBindView(TYNativePrepareInfo tYNativePrepareInfo) {
        if (tYNativePrepareInfo == null) {
            return;
        }
        if (tYNativePrepareInfo.getTitleView() == null) {
            printNotSetViewLog("titleView");
        }
        if (tYNativePrepareInfo.getCtaView() == null) {
            printNotSetViewLog("ctaView");
        }
        if (tYNativePrepareInfo.getDescView() == null) {
            printNotSetViewLog("descView");
        }
        if (tYNativePrepareInfo.getIconView() == null) {
            printNotSetViewLog("iconView");
        }
        if (tYNativePrepareInfo.getMainImageView() == null) {
            printNotSetViewLog("mainImageView");
        }
    }

    private void printNotSetViewLog(String str) {
        Log.w(this.TAG, "The " + str + " is not set, it may cause the ad to not be clicked normally.");
    }

    private void bindListener() {
        TYNativePrepareInfo nativePrepareInfo;
        View closeView;
        com.tkay.nativead.unitgroup.a aVar = this.mBaseNativeAd;
        if (aVar instanceof CustomNativeAd) {
            CustomNativeAd customNativeAd = (CustomNativeAd) aVar;
            if (customNativeAd.checkHasCloseViewListener() || (nativePrepareInfo = customNativeAd.getNativePrepareInfo()) == null || (closeView = nativePrepareInfo.getCloseView()) == null) {
                return;
            }
            closeView.setOnClickListener(this.mDefaultCloseViewListener);
        }
    }

    public void setNativeEventListener(TYNativeEventListener tYNativeEventListener) {
        if (this.mIsDestroyed) {
            return;
        }
        this.mNativeEventListener = tYNativeEventListener;
    }

    public void setDislikeCallbackListener(TYNativeDislikeListener tYNativeDislikeListener) {
        if (this.mIsDestroyed) {
            return;
        }
        this.mDislikeListener = tYNativeDislikeListener;
    }

    public void setDownloadConfirmListener(DownloadConfirmListener downloadConfirmListener) {
        if (downloadConfirmListener != null) {
            com.tkay.nativead.unitgroup.a aVar = this.mBaseNativeAd;
            if (aVar instanceof CustomNativeAd) {
                ((CustomNativeAd) aVar).registerDownloadConfirmListener();
            }
        } else {
            com.tkay.nativead.unitgroup.a aVar2 = this.mBaseNativeAd;
            if (aVar2 instanceof CustomNativeAd) {
                ((CustomNativeAd) aVar2).unregeisterDownloadConfirmListener();
            }
        }
        this.mConfirmListener = downloadConfirmListener;
    }

    public synchronized void clear(TYNativeAdView tYNativeAdView) {
        if (this.mIsDestroyed) {
            return;
        }
        try {
            if (this.mBaseNativeAd != null) {
                this.mBaseNativeAd.clear(this.mNativeView);
            }
        } catch (Throwable unused) {
        }
        if (this.mNativeView != null) {
            this.mNativeView.clearImpressionListener(hashCode());
            this.mNativeView = null;
        }
    }

    public synchronized void destory() {
        if (this.mIsDestroyed) {
            return;
        }
        clear(this.mNativeView);
        this.mIsDestroyed = true;
        this.mNativeEventListener = null;
        this.mDislikeListener = null;
        this.mDefaultCloseViewListener = null;
        this.mNativeView = null;
        if (this.mBaseNativeAd != null) {
            this.mBaseNativeAd.destroy();
        }
    }

    private synchronized void fillShowTrackingInfo(d dVar) {
        if (!this.hasSetShowTkDetail) {
            String strB = x.a().b(this.mPlacementId);
            this.hasSetShowTkDetail = true;
            if (dVar != null) {
                dVar.v = strB;
                s.a(this.mContext, dVar);
            }
        }
    }

    synchronized void recordShow(TYNativeAdView tYNativeAdView) {
        if (!this.mRecordedShow) {
            final d detail = this.mBaseNativeAd.getDetail();
            this.mRecordedShow = true;
            if (this.mAdCacheInfo != null) {
                this.mAdCacheInfo.a(this.mAdCacheInfo.d() + 1);
                com.tkay.core.common.f fVarA = v.a().a(this.mPlacementId, "0");
                if (fVarA != null) {
                    fVarA.a(this.mAdCacheInfo);
                    fVarA.f();
                }
            }
            com.tkay.core.common.l.b.a.a().a(new Runnable() {
                @Override
                public final void run() {
                    if (NativeAd.this.mIsDestroyed || NativeAd.this.mAdCacheInfo == null) {
                        return;
                    }
                    NativeAd.this.fillShowTrackingInfo(detail);
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    try {
                        jCurrentTimeMillis = Long.parseLong(detail.l().split("_")[r2.length - 1]);
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                    long j = jCurrentTimeMillis;
                    if (NativeAd.this.mBaseNativeAd != null && (NativeAd.this.mBaseNativeAd instanceof CustomNativeAd)) {
                        ((CustomNativeAd) NativeAd.this.mBaseNativeAd).setShowId(detail.l());
                    }
                    com.tkay.core.common.a.a().a(NativeAd.this.mContext.getApplicationContext(), NativeAd.this.mAdCacheInfo);
                    com.tkay.core.common.k.a.a(NativeAd.this.mContext).a(13, detail, NativeAd.this.mAdCacheInfo.e().getUnitGroupInfo(), j);
                }
            });
        }
    }

    public void setManualImpressionTrack(boolean z) {
        this.isManualImpressionTrack = z;
    }

    public void manualImpressionTrack() {
        if (this.mIsDestroyed) {
            Log.e(this.TAG, "NativeAd had been destroyed.");
            return;
        }
        if (!this.isManualImpressionTrack) {
            if (m.a().z()) {
                Log.e(this.TAG, "Must call \"setManualImpressionTrack(true);\" first.");
                return;
            }
            return;
        }
        TYNativeAdView tYNativeAdView = this.mNativeView;
        a aVar = this.mAdCacheInfo;
        TYBaseAdAdapter tYBaseAdAdapterE = aVar != null ? aVar.e() : null;
        if (tYBaseAdAdapterE != null && tYBaseAdAdapterE.supportImpressionCallback()) {
            if (m.a().z()) {
                Log.e(this.TAG, "This NativeAd don't support tracking impressions manually.");
                return;
            }
            return;
        }
        if (tYNativeAdView == null) {
            if (m.a().z()) {
                Log.e(this.TAG, "NativeAd don't call render.");
                return;
            }
            return;
        }
        if (!tYNativeAdView.isShown()) {
            if (m.a().z()) {
                Log.e(this.TAG, "TYNativeAdView isn't visible.");
                return;
            }
            return;
        }
        if (Build.VERSION.SDK_INT >= 19) {
            if (!tYNativeAdView.isAttachedToWindow()) {
                if (m.a().z()) {
                    Log.e(this.TAG, "TYNativeAdView don't attach window.");
                    return;
                }
                return;
            }
        } else if (!tYNativeAdView.isAttachInWindow()) {
            if (m.a().z()) {
                Log.e(this.TAG, "TYNativeAdView don't attach window.");
                return;
            }
            return;
        }
        if (m.a().z()) {
            Log.i(this.TAG, "try to track impression manually.");
        }
        com.tkay.nativead.unitgroup.a aVar2 = this.mBaseNativeAd;
        if (aVar2 instanceof CustomNativeAd) {
            ((CustomNativeAd) aVar2).impressionTrack(tYNativeAdView);
        }
    }

    synchronized void handleImpression(final TYNativeAdView tYNativeAdView) {
        if (!this.mRecordedImpression && !this.mIsDestroyed) {
            this.mRecordedImpression = true;
            com.tkay.core.common.l.b.a.a().a(new Runnable() {
                @Override
                public void run() {
                    if (NativeAd.this.mIsDestroyed) {
                        return;
                    }
                    try {
                        if (NativeAd.this.mBaseNativeAd != null) {
                            d detail = NativeAd.this.mBaseNativeAd.getDetail();
                            g.a(detail, f.i.c, f.i.l, "");
                            NativeAd.this.fillShowTrackingInfo(detail);
                            com.tkay.core.common.k.a.a(NativeAd.this.mContext.getApplicationContext()).a(4, detail, NativeAd.this.mAdCacheInfo.e().getUnitGroupInfo());
                            m.a().a(new Runnable() {
                                @Override
                                public final void run() {
                                    if (NativeAd.this.mNativeEventListener != null) {
                                        NativeAd.this.mNativeEventListener.onAdImpressed(tYNativeAdView, i.a(NativeAd.this.mBaseNativeAd));
                                    }
                                }
                            });
                        }
                    } catch (Exception unused) {
                        Log.e("NativeAd", "BaseNativeAd has been destotyed.");
                    }
                }
            });
        }
    }

    synchronized void handleDeeplinkCallback(TYNativeAdView tYNativeAdView, boolean z) {
        if (this.mIsDestroyed) {
            return;
        }
        if (this.mNativeEventListener != null && (this.mNativeEventListener instanceof TYNativeEventExListener)) {
            ((TYNativeEventExListener) this.mNativeEventListener).onDeeplinkCallback(tYNativeAdView, i.a(this.mBaseNativeAd), z);
        }
    }

    synchronized void handleClick(final TYNativeAdView tYNativeAdView, View view) {
        if (this.mIsDestroyed) {
            return;
        }
        if (this.mBaseNativeAd != null) {
            d detail = this.mBaseNativeAd.getDetail();
            g.a(detail, f.i.d, f.i.l, "");
            com.tkay.core.common.k.a.a(this.mContext.getApplicationContext()).a(6, detail);
        }
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (NativeAd.this.mNativeEventListener != null) {
                    NativeAd.this.mNativeEventListener.onAdClicked(tYNativeAdView, i.a(NativeAd.this.mBaseNativeAd));
                }
            }
        });
    }

    synchronized void handleVideoStart(final TYNativeAdView tYNativeAdView) {
        if (this.mIsDestroyed) {
            return;
        }
        if (this.mBaseNativeAd != null) {
            d detail = this.mBaseNativeAd.getDetail();
            detail.t = 0;
            com.tkay.core.common.k.a.a(this.mContext.getApplicationContext()).a(8, detail);
        }
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (NativeAd.this.mNativeEventListener != null) {
                    NativeAd.this.mNativeEventListener.onAdVideoStart(tYNativeAdView);
                }
            }
        });
    }

    synchronized void handleAdDislikeButtonClick(final TYNativeAdView tYNativeAdView) {
        if (this.mIsDestroyed) {
            return;
        }
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (NativeAd.this.mDislikeListener != null) {
                    NativeAd.this.mDislikeListener.onAdCloseButtonClick(tYNativeAdView, i.a(NativeAd.this.mBaseNativeAd));
                }
            }
        });
    }

    synchronized void handleVideoEnd(final TYNativeAdView tYNativeAdView) {
        if (this.mIsDestroyed) {
            return;
        }
        if (this.mBaseNativeAd != null) {
            d detail = this.mBaseNativeAd.getDetail();
            detail.t = 100;
            com.tkay.core.common.k.a.a(this.mContext.getApplicationContext()).a(9, detail);
        }
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (NativeAd.this.mNativeEventListener != null) {
                    NativeAd.this.mNativeEventListener.onAdVideoEnd(tYNativeAdView);
                }
            }
        });
    }

    synchronized void handleVideoProgress(final TYNativeAdView tYNativeAdView, final int i) {
        if (this.mIsDestroyed) {
            return;
        }
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (NativeAd.this.mNativeEventListener != null) {
                    NativeAd.this.mNativeEventListener.onAdVideoProgress(tYNativeAdView, i);
                }
            }
        });
    }

    synchronized void handleDownloadConfirm(Context context, View view, TYNetworkConfirmInfo tYNetworkConfirmInfo) {
        if (this.mIsDestroyed) {
            return;
        }
        if (this.mConfirmListener != null && this.mBaseNativeAd != null) {
            DownloadConfirmListener downloadConfirmListener = this.mConfirmListener;
            if (context == null) {
                context = this.mContext;
            }
            downloadConfirmListener.onDownloadConfirm(context, i.a(this.mBaseNativeAd), view, tYNetworkConfirmInfo);
        }
    }

    public void setAdDownloadListener(TYEventInterface tYEventInterface) {
        this.mEventInterface = tYEventInterface;
        IExHandler iExHandlerB = m.a().b();
        if (iExHandlerB == null) {
            this.mBaseNativeAd.setDownloadListener(null);
            Log.e(this.TAG, "This method is not supported in this version");
        } else if (tYEventInterface != null) {
            this.mBaseNativeAd.setDownloadListener(iExHandlerB.createDownloadListener(this.mAdCacheInfo.e(), this.mBaseNativeAd, tYEventInterface));
        } else {
            this.mBaseNativeAd.setDownloadListener(null);
        }
    }

    public void onPause() {
        com.tkay.nativead.unitgroup.a aVar;
        if (this.mIsDestroyed || (aVar = this.mBaseNativeAd) == null) {
            return;
        }
        aVar.onPause();
    }

    public void onResume() {
        com.tkay.nativead.unitgroup.a aVar;
        if (this.mIsDestroyed || (aVar = this.mBaseNativeAd) == null) {
            return;
        }
        aVar.onResume();
    }

    public void resumeVideo() {
        com.tkay.nativead.unitgroup.a aVar;
        if (this.mIsDestroyed || (aVar = this.mBaseNativeAd) == null) {
            return;
        }
        aVar.resumeVideo();
    }

    public void pauseVideo() {
        com.tkay.nativead.unitgroup.a aVar;
        if (this.mIsDestroyed || (aVar = this.mBaseNativeAd) == null) {
            return;
        }
        aVar.pauseVideo();
    }

    public void setVideoMute(boolean z) {
        com.tkay.nativead.unitgroup.a aVar;
        if (this.mIsDestroyed || (aVar = this.mBaseNativeAd) == null) {
            return;
        }
        aVar.setVideoMute(z);
    }

    public double getVideoDuration() {
        com.tkay.nativead.unitgroup.a aVar = this.mBaseNativeAd;
        if (aVar == null || !(aVar instanceof CustomNativeAd)) {
            return 0.0d;
        }
        return ((CustomNativeAd) aVar).getVideoDuration();
    }

    public double getVideoProgress() {
        com.tkay.nativead.unitgroup.a aVar = this.mBaseNativeAd;
        if (aVar == null || !(aVar instanceof CustomNativeAd)) {
            return 0.0d;
        }
        return ((CustomNativeAd) aVar).getVideoProgress();
    }

    public boolean isNativeExpress() {
        com.tkay.nativead.unitgroup.a aVar = this.mBaseNativeAd;
        if (aVar == null || !(aVar instanceof CustomNativeAd)) {
            return false;
        }
        return ((CustomNativeAd) aVar).isNativeExpress();
    }

    public int getNativeType() {
        com.tkay.nativead.unitgroup.a aVar = this.mBaseNativeAd;
        if (aVar == null || !(aVar instanceof CustomNativeAd)) {
            return 0;
        }
        return ((CustomNativeAd) aVar).getNativeType();
    }

    @Deprecated
    public TYCustomVideo getCustomVideo() {
        com.tkay.nativead.unitgroup.a aVar = this.mBaseNativeAd;
        if (aVar == null || !(aVar instanceof CustomNativeAd)) {
            return null;
        }
        return ((CustomNativeAd) aVar).getNativeCustomVideo();
    }

    public TYAdInfo getAdInfo() {
        return i.a(this.mBaseNativeAd);
    }
}
