package com.tkay.network.ks;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.api.KsAdSDK;
import com.kwad.sdk.api.KsFullScreenVideoAd;
import com.kwad.sdk.api.KsInterstitialAd;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsScene;
import com.kwad.sdk.api.KsVideoPlayConfig;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.core.api.TYBiddingResult;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.common.b.f;
import com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter;
import java.lang.ref.WeakReference;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class KSTYInterstitialAdapter extends CustomInterstitialAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    long f7595a;
    int b;
    boolean c;
    String e;
    KsFullScreenVideoAd f;
    KsInterstitialAd g;
    double i;
    int d = 1;
    boolean h = false;

    static /* synthetic */ int H(KSTYInterstitialAdapter kSTYInterstitialAdapter) {
        kSTYInterstitialAdapter.mDismissType = 2;
        return 2;
    }

    static /* synthetic */ int u(KSTYInterstitialAdapter kSTYInterstitialAdapter) {
        kSTYInterstitialAdapter.mDismissType = 2;
        return 2;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        if (!a(map)) {
            notifyATLoadFail("", "kuaishou app_id or position_id is empty.");
        } else {
            KSTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() { // from class: com.tkay.network.ks.KSTYInterstitialAdapter.1
                @Override // com.tkay.core.api.MediationInitCallback
                public final void onSuccess() {
                    KSTYInterstitialAdapter.a(KSTYInterstitialAdapter.this);
                }

                @Override // com.tkay.core.api.MediationInitCallback
                public final void onFail(String str) {
                    KSTYInterstitialAdapter.this.notifyATLoadFail("", str);
                }
            });
        }
    }

    private void a() {
        KsScene.Builder builderScreenOrientation = new KsScene.Builder(this.f7595a).adNum(1).screenOrientation(this.b == 2 ? 2 : 1);
        if (!TextUtils.isEmpty(this.e)) {
            builderScreenOrientation.setBidResponseV2(this.e);
        }
        KsScene ksSceneBuild = builderScreenOrientation.build();
        if (this.d == 0) {
            KsAdSDK.getLoadManager().loadInterstitialAd(ksSceneBuild, new AnonymousClass2());
        } else {
            KsAdSDK.getLoadManager().loadFullScreenVideoAd(ksSceneBuild, new AnonymousClass3());
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.ks.KSTYInterstitialAdapter$2, reason: invalid class name */
    final class AnonymousClass2 implements KsLoadManager.InterstitialAdListener {
        AnonymousClass2() {
        }

        @Override // com.kwad.sdk.api.KsLoadManager.InterstitialAdListener
        public final void onError(int i, String str) {
            KSTYInterstitialAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override // com.kwad.sdk.api.KsLoadManager.InterstitialAdListener
        public final void onRequestResult(int i) {
            if (KSTYInterstitialAdapter.this.mLoadListener != null) {
                KSTYInterstitialAdapter.this.mLoadListener.onAdDataLoaded();
            }
        }

        @Override // com.kwad.sdk.api.KsLoadManager.InterstitialAdListener
        public final void onInterstitialAdLoad(List<KsInterstitialAd> list) {
            KSTYInterstitialAdapter.this.g = (list == null || list.size() <= 0) ? null : list.get(0);
            if (KSTYInterstitialAdapter.this.g == null) {
                KSTYInterstitialAdapter.this.notifyATLoadFail("", "KuaiShou: List<KsInterstitialAd> is empty.");
                return;
            }
            if (!KSTYInterstitialAdapter.this.h) {
                if (KSTYInterstitialAdapter.this.mLoadListener != null) {
                    KSTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            } else {
                if (KSTYInterstitialAdapter.this.mBiddingListener != null) {
                    double ecpm = 0.0d;
                    try {
                        ecpm = KSTYInterstitialAdapter.this.g.getECPM();
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                    KSTYBiddingNotice kSTYBiddingNotice = new KSTYBiddingNotice(KSTYInterstitialAdapter.this.g);
                    TYBiddingListener tYBiddingListener = KSTYInterstitialAdapter.this.mBiddingListener;
                    StringBuilder sb = new StringBuilder();
                    sb.append(System.currentTimeMillis());
                    tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(ecpm, sb.toString(), kSTYBiddingNotice, TYAdConst.CURRENCY.RMB_CENT), null);
                    return;
                }
                KSTYInterstitialAdapter.this.notifyATLoadFail("", "KuaiShou: KsInterstitialAd had been destroyed.");
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.ks.KSTYInterstitialAdapter$3, reason: invalid class name */
    final class AnonymousClass3 implements KsLoadManager.FullScreenVideoAdListener {
        AnonymousClass3() {
        }

        @Override // com.kwad.sdk.api.KsLoadManager.FullScreenVideoAdListener
        public final void onError(int i, String str) {
            KSTYInterstitialAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override // com.kwad.sdk.api.KsLoadManager.FullScreenVideoAdListener
        public final void onFullScreenVideoResult(List<KsFullScreenVideoAd> list) {
            if (KSTYInterstitialAdapter.this.mLoadListener != null) {
                KSTYInterstitialAdapter.this.mLoadListener.onAdDataLoaded();
            }
        }

        @Override // com.kwad.sdk.api.KsLoadManager.FullScreenVideoAdListener
        public final void onFullScreenVideoAdLoad(List<KsFullScreenVideoAd> list) {
            KSTYInterstitialAdapter.this.f = (list == null || list.size() <= 0) ? null : list.get(0);
            if (KSTYInterstitialAdapter.this.f == null) {
                KSTYInterstitialAdapter.this.notifyATLoadFail("", "KuaiShou: List<KsFullScreenVideoAd> is empty.");
                return;
            }
            if (!KSTYInterstitialAdapter.this.h) {
                if (KSTYInterstitialAdapter.this.mLoadListener != null) {
                    KSTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            } else {
                if (KSTYInterstitialAdapter.this.mBiddingListener != null) {
                    double ecpm = 0.0d;
                    try {
                        ecpm = KSTYInterstitialAdapter.this.f.getECPM();
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                    KSTYBiddingNotice kSTYBiddingNotice = new KSTYBiddingNotice(KSTYInterstitialAdapter.this.f);
                    TYBiddingListener tYBiddingListener = KSTYInterstitialAdapter.this.mBiddingListener;
                    StringBuilder sb = new StringBuilder();
                    sb.append(System.currentTimeMillis());
                    tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(ecpm, sb.toString(), kSTYBiddingNotice, TYAdConst.CURRENCY.RMB_CENT), null);
                    return;
                }
                KSTYInterstitialAdapter.this.notifyATLoadFail("", "KuaiShou: KsFullScreenVideoAd had been destroyed.");
            }
        }
    }

    @Override // com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter
    public void show(Activity activity) {
        KsVideoPlayConfig ksVideoPlayConfigBuild = new KsVideoPlayConfig.Builder().showLandscape(this.b == 2).skipThirtySecond(false).videoSoundEnable(this.c).build();
        KsFullScreenVideoAd ksFullScreenVideoAd = this.f;
        if (ksFullScreenVideoAd != null && activity != null) {
            ksFullScreenVideoAd.setFullScreenVideoAdInteractionListener(new KsFullScreenVideoAd.FullScreenVideoAdInteractionListener() { // from class: com.tkay.network.ks.KSTYInterstitialAdapter.4
                @Override // com.kwad.sdk.api.KsFullScreenVideoAd.FullScreenVideoAdInteractionListener
                public final void onAdClicked() {
                    if (KSTYInterstitialAdapter.this.mImpressListener != null) {
                        KSTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
                    }
                }

                @Override // com.kwad.sdk.api.KsFullScreenVideoAd.FullScreenVideoAdInteractionListener
                public final void onPageDismiss() {
                    if (KSTYInterstitialAdapter.this.mImpressListener != null) {
                        KSTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
                    }
                }

                @Override // com.kwad.sdk.api.KsFullScreenVideoAd.FullScreenVideoAdInteractionListener
                public final void onVideoPlayError(int i, int i2) {
                    if (KSTYInterstitialAdapter.this.mImpressListener != null) {
                        KSTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoError(String.valueOf(i), "");
                    }
                }

                @Override // com.kwad.sdk.api.KsFullScreenVideoAd.FullScreenVideoAdInteractionListener
                public final void onVideoPlayEnd() {
                    if (KSTYInterstitialAdapter.this.mImpressListener != null) {
                        KSTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoEnd();
                    }
                }

                @Override // com.kwad.sdk.api.KsFullScreenVideoAd.FullScreenVideoAdInteractionListener
                public final void onVideoPlayStart() {
                    try {
                        KSTYInitManager.getInstance().a(KSTYInterstitialAdapter.this.getTrackingInfo().l(), new WeakReference(KSTYInterstitialAdapter.this.f));
                    } catch (Throwable unused) {
                    }
                    if (KSTYInterstitialAdapter.this.mImpressListener != null) {
                        KSTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
                        KSTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoStart();
                    }
                }

                @Override // com.kwad.sdk.api.KsFullScreenVideoAd.FullScreenVideoAdInteractionListener
                public final void onSkippedVideo() {
                    KSTYInterstitialAdapter.u(KSTYInterstitialAdapter.this);
                }
            });
            this.f.showFullScreenVideoAd(activity, ksVideoPlayConfigBuild);
        }
        KsInterstitialAd ksInterstitialAd = this.g;
        if (ksInterstitialAd == null || activity == null) {
            return;
        }
        ksInterstitialAd.setAdInteractionListener(new KsInterstitialAd.AdInteractionListener() { // from class: com.tkay.network.ks.KSTYInterstitialAdapter.5
            @Override // com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener
            public final void onAdClosed() {
            }

            @Override // com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener
            public final void onAdClicked() {
                if (KSTYInterstitialAdapter.this.mImpressListener != null) {
                    KSTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
                }
            }

            @Override // com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener
            public final void onAdShow() {
                try {
                    KSTYInitManager.getInstance().a(KSTYInterstitialAdapter.this.getTrackingInfo().l(), new WeakReference(KSTYInterstitialAdapter.this.g));
                } catch (Throwable unused) {
                }
                if (KSTYInterstitialAdapter.this.mImpressListener != null) {
                    KSTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
                }
            }

            @Override // com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener
            public final void onPageDismiss() {
                if (KSTYInterstitialAdapter.this.mImpressListener != null) {
                    KSTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
                }
            }

            @Override // com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener
            public final void onVideoPlayError(int i, int i2) {
                if (KSTYInterstitialAdapter.this.mImpressListener != null) {
                    KSTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoError(String.valueOf(i), String.valueOf(i2));
                }
            }

            @Override // com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener
            public final void onVideoPlayEnd() {
                if (KSTYInterstitialAdapter.this.mImpressListener != null) {
                    KSTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoEnd();
                }
            }

            @Override // com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener
            public final void onVideoPlayStart() {
                if (KSTYInterstitialAdapter.this.mImpressListener != null) {
                    KSTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoStart();
                }
            }

            @Override // com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener
            public final void onSkippedAd() {
                KSTYInterstitialAdapter.H(KSTYInterstitialAdapter.this);
            }
        });
        this.g.showInterstitialAd(activity, ksVideoPlayConfigBuild);
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean isAdReady() {
        if (this.d == 0) {
            return this.g != null;
        }
        KsFullScreenVideoAd ksFullScreenVideoAd = this.f;
        return ksFullScreenVideoAd != null && ksFullScreenVideoAd.isAdEnable();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return KSTYInitManager.getInstance().getNetworkName();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        KsFullScreenVideoAd ksFullScreenVideoAd = this.f;
        if (ksFullScreenVideoAd != null) {
            ksFullScreenVideoAd.setFullScreenVideoAdInteractionListener(null);
            this.f = null;
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        try {
            return String.valueOf(this.f7595a);
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return KSTYInitManager.getInstance().getNetworkVersion();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.h = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    private boolean a(Map<String, Object> map) {
        String stringFromMap = TYInitMediation.getStringFromMap(map, "app_id");
        String stringFromMap2 = TYInitMediation.getStringFromMap(map, "position_id");
        if (TextUtils.isEmpty(stringFromMap) || TextUtils.isEmpty(stringFromMap2)) {
            return false;
        }
        try {
            this.f7595a = Long.parseLong(stringFromMap2);
        } catch (NumberFormatException unused) {
        }
        this.c = true;
        if (map.containsKey("video_muted")) {
            this.c = TextUtils.equals("0", TYInitMediation.getStringFromMap(map, "video_muted"));
        }
        if (map.containsKey("orientation")) {
            this.b = TYInitMediation.getIntFromMap(map, "orientation");
        }
        if (map.containsKey("is_video")) {
            this.d = TYInitMediation.getIntFromMap(map, "is_video", 1);
        }
        if (map.containsKey(f.k.o)) {
            this.i = TYInitMediation.getDoubleFromMap(map, f.k.o);
        }
        if (map.containsKey("payload")) {
            this.e = KSTYInitManager.getInstance().getPayloadInfo(TYInitMediation.getStringFromMap(map, "payload"), this.i);
        }
        return true;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.f7595a = TYInitMediation.getLongFromMap(map, "position_id");
        KSTYInitManager.getInstance().a(context, map, map2, tYBidRequestInfoListener);
    }

    static /* synthetic */ void a(KSTYInterstitialAdapter kSTYInterstitialAdapter) {
        KsScene.Builder builderScreenOrientation = new KsScene.Builder(kSTYInterstitialAdapter.f7595a).adNum(1).screenOrientation(kSTYInterstitialAdapter.b == 2 ? 2 : 1);
        if (!TextUtils.isEmpty(kSTYInterstitialAdapter.e)) {
            builderScreenOrientation.setBidResponseV2(kSTYInterstitialAdapter.e);
        }
        KsScene ksSceneBuild = builderScreenOrientation.build();
        if (kSTYInterstitialAdapter.d == 0) {
            KsAdSDK.getLoadManager().loadInterstitialAd(ksSceneBuild, kSTYInterstitialAdapter.new AnonymousClass2());
        } else {
            KsAdSDK.getLoadManager().loadFullScreenVideoAd(ksSceneBuild, kSTYInterstitialAdapter.new AnonymousClass3());
        }
    }
}
