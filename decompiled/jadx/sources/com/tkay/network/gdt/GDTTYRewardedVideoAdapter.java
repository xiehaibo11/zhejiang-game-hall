package com.tkay.network.gdt;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.qq.e.ads.cfg.VideoOption;
import com.qq.e.ads.interstitial2.ADRewardListener;
import com.qq.e.ads.interstitial2.UnifiedInterstitialAD;
import com.qq.e.ads.interstitial2.UnifiedInterstitialADListener;
import com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener;
import com.qq.e.ads.rewardvideo.RewardVideoAD;
import com.qq.e.ads.rewardvideo.RewardVideoADListener;
import com.qq.e.ads.rewardvideo.ServerSideVerificationOptions;
import com.qq.e.comm.compliance.DownloadConfirmCallBack;
import com.qq.e.comm.compliance.DownloadConfirmListener;
import com.qq.e.comm.util.AdError;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.core.api.TYBiddingResult;
import com.tkay.core.api.TYInitMediation;
import com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter;
import com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class GDTTYRewardedVideoAdapter extends CustomRewardVideoAdapter {
    private static final String f = GDTTYRewardedVideoAdapter.class.getSimpleName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    RewardVideoAD f7567a;
    UnifiedInterstitialAD b;
    String c;
    String d;
    String e;
    private Map<String, Object> h;
    private boolean i;
    private int g = 0;
    private int j = 1;
    private boolean k = false;

    private void a(Map<String, Object> map, Map<String, Object> map2) {
        this.c = TYInitMediation.getStringFromMap(map, "app_id");
        this.d = TYInitMediation.getStringFromMap(map, "unit_id");
        this.e = TYInitMediation.getStringFromMap(map, "payload");
        this.g = TYInitMediation.getIntFromMap(map, "video_muted", 0);
        this.j = TYInitMediation.getIntFromMap(map, "unit_type", 1);
        this.i = TYInitMediation.getBooleanFromMap(map2, TYAdConst.KEY.AD_CLICK_CONFIRM_STATUS, false);
    }

    private void a(Context context, Map<String, Object> map) {
        if (this.j == 2) {
            if (!(context instanceof Activity)) {
                notifyATLoadFail("", "GDT UnifiedInterstitial's context must be activity.");
                return;
            }
            AnonymousClass3 anonymousClass3 = new AnonymousClass3();
            if (TextUtils.isEmpty(this.e) || this.k) {
                UnifiedInterstitialAD unifiedInterstitialAD = new UnifiedInterstitialAD((Activity) context, this.d, anonymousClass3);
                this.b = unifiedInterstitialAD;
                GDTTYInitManager.getInstance();
                unifiedInterstitialAD.setLoadAdParams(GDTTYInitManager.a(map));
            } else {
                this.b = new UnifiedInterstitialAD((Activity) context, this.d, anonymousClass3, null, this.e);
            }
            UnifiedInterstitialAD unifiedInterstitialAD2 = this.b;
            int i = map.containsKey("video_muted") ? Integer.parseInt(map.get("video_muted").toString()) : 0;
            int i2 = map.containsKey("video_autoplay") ? Integer.parseInt(map.get("video_autoplay").toString()) : 1;
            int i3 = map.containsKey("video_duration") ? Integer.parseInt(map.get("video_duration").toString()) : -1;
            if (unifiedInterstitialAD2 != null) {
                unifiedInterstitialAD2.setVideoOption(new VideoOption.Builder().setAutoPlayMuted(i == 1).setDetailPageMuted(i == 1).setAutoPlayPolicy(i2).build());
                if (i3 != -1) {
                    unifiedInterstitialAD2.setMaxVideoDuration(i3);
                }
            }
            this.b.setMediaListener(new AnonymousClass4());
            this.b.loadFullScreenAD();
            return;
        }
        AnonymousClass2 anonymousClass2 = new AnonymousClass2();
        if (TextUtils.isEmpty(this.e) || this.k) {
            RewardVideoAD rewardVideoAD = new RewardVideoAD(context.getApplicationContext(), this.d, anonymousClass2, this.g != 1);
            this.f7567a = rewardVideoAD;
            GDTTYInitManager.getInstance();
            rewardVideoAD.setLoadAdParams(GDTTYInitManager.a(map));
        } else {
            this.f7567a = new RewardVideoAD(context.getApplicationContext(), this.d, anonymousClass2, this.g != 1, this.e);
        }
        try {
            ServerSideVerificationOptions.Builder builder = new ServerSideVerificationOptions.Builder();
            builder.setUserId(this.mUserId);
            if (!TextUtils.isEmpty(this.mUserData) && this.mUserData.contains(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME)) {
                this.mUserData = this.mUserData.replace(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME, this.d);
            }
            builder.setCustomData(this.mUserData);
            this.f7567a.setServerSideVerificationOptions(builder.build());
        } catch (Throwable unused) {
        }
        this.f7567a.loadAD();
    }

    /* JADX INFO: renamed from: com.tkay.network.gdt.GDTTYRewardedVideoAdapter$2, reason: invalid class name */
    final class AnonymousClass2 implements RewardVideoADListener {
        @Override // com.qq.e.ads.rewardvideo.RewardVideoADListener
        public final void onADShow() {
        }

        AnonymousClass2() {
        }

        @Override // com.qq.e.ads.rewardvideo.RewardVideoADListener
        public final void onADLoad() {
            try {
                Map<String, Object> extraInfo = GDTTYRewardedVideoAdapter.this.f7567a.getExtraInfo();
                if (extraInfo != null) {
                    if (GDTTYRewardedVideoAdapter.this.h == null) {
                        GDTTYRewardedVideoAdapter.this.h = new HashMap();
                    }
                    GDTTYRewardedVideoAdapter.this.h.putAll(extraInfo);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
            if (GDTTYRewardedVideoAdapter.this.f7567a != null && GDTTYRewardedVideoAdapter.this.i) {
                GDTTYRewardedVideoAdapter.this.f7567a.setDownloadConfirmListener(new DownloadConfirmListener() { // from class: com.tkay.network.gdt.GDTTYRewardedVideoAdapter.2.1
                    @Override // com.qq.e.comm.compliance.DownloadConfirmListener
                    public final void onDownloadConfirm(Activity activity, int i, String str, DownloadConfirmCallBack downloadConfirmCallBack) {
                        if (GDTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                            GDTDownloadFirmInfo gDTDownloadFirmInfo = new GDTDownloadFirmInfo();
                            gDTDownloadFirmInfo.appInfoUrl = str;
                            gDTDownloadFirmInfo.scenes = i;
                            gDTDownloadFirmInfo.confirmCallBack = downloadConfirmCallBack;
                            GDTTYRewardedVideoAdapter.this.mImpressionListener.onDownloadConfirm(activity, gDTDownloadFirmInfo);
                        }
                    }
                });
            }
            if (GDTTYRewardedVideoAdapter.this.mLoadListener != null) {
                GDTTYRewardedVideoAdapter.this.mLoadListener.onAdDataLoaded();
            }
        }

        @Override // com.qq.e.ads.rewardvideo.RewardVideoADListener
        public final void onVideoCached() {
            if (!GDTTYRewardedVideoAdapter.this.k) {
                if (GDTTYRewardedVideoAdapter.this.mLoadListener != null) {
                    GDTTYRewardedVideoAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            } else {
                if (GDTTYRewardedVideoAdapter.this.mBiddingListener == null || GDTTYRewardedVideoAdapter.this.f7567a == null) {
                    return;
                }
                double ecpm = GDTTYRewardedVideoAdapter.this.f7567a.getECPM();
                GDTTYBiddingNotice gDTTYBiddingNotice = new GDTTYBiddingNotice(GDTTYRewardedVideoAdapter.this.f7567a);
                TYBiddingListener tYBiddingListener = GDTTYRewardedVideoAdapter.this.mBiddingListener;
                StringBuilder sb = new StringBuilder();
                sb.append(System.currentTimeMillis());
                tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(ecpm, sb.toString(), gDTTYBiddingNotice, TYAdConst.CURRENCY.RMB_CENT), null);
            }
        }

        @Override // com.qq.e.ads.rewardvideo.RewardVideoADListener
        public final void onADExpose() {
            try {
                GDTTYInitManager.getInstance().a(GDTTYRewardedVideoAdapter.this.getTrackingInfo().l(), new WeakReference(GDTTYRewardedVideoAdapter.this.f7567a));
            } catch (Throwable unused) {
            }
            if (GDTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                GDTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayStart();
            }
        }

        @Override // com.qq.e.ads.rewardvideo.RewardVideoADListener
        public final void onReward(Map<String, Object> map) {
            if (GDTTYRewardedVideoAdapter.this.h == null) {
                GDTTYRewardedVideoAdapter.this.h = new HashMap();
            }
            GDTTYRewardedVideoAdapter.this.h.put("gdt_trans_id", map.get("transId"));
            if (GDTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                GDTTYRewardedVideoAdapter.this.mImpressionListener.onReward();
            }
        }

        public final void onReward() {
            if (GDTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                GDTTYRewardedVideoAdapter.this.mImpressionListener.onReward();
            }
        }

        @Override // com.qq.e.ads.rewardvideo.RewardVideoADListener
        public final void onADClick() {
            if (GDTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                GDTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayClicked();
            }
        }

        @Override // com.qq.e.ads.rewardvideo.RewardVideoADListener
        public final void onVideoComplete() {
            if (GDTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                GDTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayEnd();
            }
        }

        @Override // com.qq.e.ads.rewardvideo.RewardVideoADListener
        public final void onADClose() {
            GDTTYInitManager.getInstance().a();
            if (GDTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                GDTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdClosed();
            }
        }

        @Override // com.qq.e.ads.rewardvideo.RewardVideoADListener
        public final void onError(AdError adError) {
            GDTTYRewardedVideoAdapter gDTTYRewardedVideoAdapter = GDTTYRewardedVideoAdapter.this;
            StringBuilder sb = new StringBuilder();
            sb.append(adError.getErrorCode());
            gDTTYRewardedVideoAdapter.notifyATLoadFail(sb.toString(), adError.getErrorMsg());
        }
    }

    private void b(Context context, Map<String, Object> map) {
        AnonymousClass2 anonymousClass2 = new AnonymousClass2();
        if (TextUtils.isEmpty(this.e) || this.k) {
            RewardVideoAD rewardVideoAD = new RewardVideoAD(context.getApplicationContext(), this.d, anonymousClass2, this.g != 1);
            this.f7567a = rewardVideoAD;
            GDTTYInitManager.getInstance();
            rewardVideoAD.setLoadAdParams(GDTTYInitManager.a(map));
        } else {
            this.f7567a = new RewardVideoAD(context.getApplicationContext(), this.d, anonymousClass2, this.g != 1, this.e);
        }
        try {
            ServerSideVerificationOptions.Builder builder = new ServerSideVerificationOptions.Builder();
            builder.setUserId(this.mUserId);
            if (!TextUtils.isEmpty(this.mUserData) && this.mUserData.contains(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME)) {
                this.mUserData = this.mUserData.replace(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME, this.d);
            }
            builder.setCustomData(this.mUserData);
            this.f7567a.setServerSideVerificationOptions(builder.build());
        } catch (Throwable unused) {
        }
        this.f7567a.loadAD();
    }

    private void c(Context context, Map<String, Object> map) {
        if (!(context instanceof Activity)) {
            notifyATLoadFail("", "GDT UnifiedInterstitial's context must be activity.");
            return;
        }
        AnonymousClass3 anonymousClass3 = new AnonymousClass3();
        if (TextUtils.isEmpty(this.e) || this.k) {
            UnifiedInterstitialAD unifiedInterstitialAD = new UnifiedInterstitialAD((Activity) context, this.d, anonymousClass3);
            this.b = unifiedInterstitialAD;
            GDTTYInitManager.getInstance();
            unifiedInterstitialAD.setLoadAdParams(GDTTYInitManager.a(map));
        } else {
            this.b = new UnifiedInterstitialAD((Activity) context, this.d, anonymousClass3, null, this.e);
        }
        UnifiedInterstitialAD unifiedInterstitialAD2 = this.b;
        int i = map.containsKey("video_muted") ? Integer.parseInt(map.get("video_muted").toString()) : 0;
        int i2 = map.containsKey("video_autoplay") ? Integer.parseInt(map.get("video_autoplay").toString()) : 1;
        int i3 = map.containsKey("video_duration") ? Integer.parseInt(map.get("video_duration").toString()) : -1;
        if (unifiedInterstitialAD2 != null) {
            unifiedInterstitialAD2.setVideoOption(new VideoOption.Builder().setAutoPlayMuted(i == 1).setDetailPageMuted(i == 1).setAutoPlayPolicy(i2).build());
            if (i3 != -1) {
                unifiedInterstitialAD2.setMaxVideoDuration(i3);
            }
        }
        this.b.setMediaListener(new AnonymousClass4());
        this.b.loadFullScreenAD();
    }

    /* JADX INFO: renamed from: com.tkay.network.gdt.GDTTYRewardedVideoAdapter$3, reason: invalid class name */
    final class AnonymousClass3 implements UnifiedInterstitialADListener {
        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onADLeftApplication() {
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onADOpened() {
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onVideoCached() {
        }

        AnonymousClass3() {
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onADReceive() {
            try {
                Map<String, Object> extraInfo = GDTTYRewardedVideoAdapter.this.b.getExtraInfo();
                if (extraInfo != null) {
                    if (GDTTYRewardedVideoAdapter.this.h == null) {
                        GDTTYRewardedVideoAdapter.this.h = new HashMap();
                    }
                    GDTTYRewardedVideoAdapter.this.h.putAll(extraInfo);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
            if (GDTTYRewardedVideoAdapter.this.b != null && GDTTYRewardedVideoAdapter.this.i) {
                GDTTYRewardedVideoAdapter.this.b.setDownloadConfirmListener(new DownloadConfirmListener() { // from class: com.tkay.network.gdt.GDTTYRewardedVideoAdapter.3.1
                    @Override // com.qq.e.comm.compliance.DownloadConfirmListener
                    public final void onDownloadConfirm(Activity activity, int i, String str, DownloadConfirmCallBack downloadConfirmCallBack) {
                        if (GDTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                            GDTDownloadFirmInfo gDTDownloadFirmInfo = new GDTDownloadFirmInfo();
                            gDTDownloadFirmInfo.appInfoUrl = str;
                            gDTDownloadFirmInfo.scenes = i;
                            gDTDownloadFirmInfo.confirmCallBack = downloadConfirmCallBack;
                            GDTTYRewardedVideoAdapter.this.mImpressionListener.onDownloadConfirm(activity, gDTDownloadFirmInfo);
                        }
                    }
                });
            }
            GDTTYRewardedVideoAdapter.this.b.setRewardListener(new ADRewardListener() { // from class: com.tkay.network.gdt.GDTTYRewardedVideoAdapter.3.2
                @Override // com.qq.e.comm.listeners.ADRewardListener
                public final void onReward(Map<String, Object> map) {
                    if (GDTTYRewardedVideoAdapter.this.h == null) {
                        GDTTYRewardedVideoAdapter.this.h = new HashMap();
                    }
                    GDTTYRewardedVideoAdapter.this.h.put("gdt_trans_id", map.get("transId"));
                    if (GDTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        GDTTYRewardedVideoAdapter.this.mImpressionListener.onReward();
                    }
                }
            });
            if (GDTTYRewardedVideoAdapter.this.mLoadListener != null) {
                GDTTYRewardedVideoAdapter.this.mLoadListener.onAdDataLoaded();
            }
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onNoAD(AdError adError) {
            GDTTYRewardedVideoAdapter.this.notifyATLoadFail(String.valueOf(adError.getErrorCode()), adError.getErrorMsg());
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onADExposure() {
            try {
                GDTTYInitManager.getInstance().a(GDTTYRewardedVideoAdapter.this.getTrackingInfo().l(), new WeakReference(GDTTYRewardedVideoAdapter.this.b));
            } catch (Throwable unused) {
            }
            if (GDTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                GDTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayStart();
            }
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onADClicked() {
            if (GDTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                GDTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayClicked();
            }
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onADClosed() {
            GDTTYInitManager.getInstance().b();
            if (GDTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                GDTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdClosed();
            }
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onRenderSuccess() {
            if (!GDTTYRewardedVideoAdapter.this.k) {
                if (GDTTYRewardedVideoAdapter.this.mLoadListener != null) {
                    GDTTYRewardedVideoAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            } else if (GDTTYRewardedVideoAdapter.this.mBiddingListener != null) {
                if (GDTTYRewardedVideoAdapter.this.b != null) {
                    double ecpm = GDTTYRewardedVideoAdapter.this.b.getECPM();
                    GDTTYBiddingNotice gDTTYBiddingNotice = new GDTTYBiddingNotice(GDTTYRewardedVideoAdapter.this.b);
                    TYBiddingListener tYBiddingListener = GDTTYRewardedVideoAdapter.this.mBiddingListener;
                    StringBuilder sb = new StringBuilder();
                    sb.append(System.currentTimeMillis());
                    tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(ecpm, sb.toString(), gDTTYBiddingNotice, TYAdConst.CURRENCY.RMB_CENT), null);
                    return;
                }
                GDTTYRewardedVideoAdapter.this.notifyATLoadFail("", "GDT : UnifiedInterstitialAD had been destroyed.");
            }
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onRenderFail() {
            GDTTYRewardedVideoAdapter.this.notifyATLoadFail("", "GDT: onRenderFail()");
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.gdt.GDTTYRewardedVideoAdapter$4, reason: invalid class name */
    final class AnonymousClass4 implements UnifiedInterstitialMediaListener {
        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
        public final void onVideoInit() {
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
        public final void onVideoLoading() {
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
        public final void onVideoPageClose() {
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
        public final void onVideoPageOpen() {
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
        public final void onVideoPause() {
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
        public final void onVideoReady(long j) {
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
        public final void onVideoStart() {
        }

        AnonymousClass4() {
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
        public final void onVideoComplete() {
            if (GDTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                GDTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayEnd();
            }
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
        public final void onVideoError(AdError adError) {
            if (GDTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                CustomRewardedVideoEventListener customRewardedVideoEventListener = GDTTYRewardedVideoAdapter.this.mImpressionListener;
                StringBuilder sb = new StringBuilder();
                sb.append(adError.getErrorCode());
                customRewardedVideoEventListener.onRewardedVideoAdPlayFailed(sb.toString(), adError.getErrorMsg());
            }
        }
    }

    private static void a(UnifiedInterstitialAD unifiedInterstitialAD, Map<String, Object> map) {
        int i = map.containsKey("video_muted") ? Integer.parseInt(map.get("video_muted").toString()) : 0;
        int i2 = map.containsKey("video_autoplay") ? Integer.parseInt(map.get("video_autoplay").toString()) : 1;
        int i3 = map.containsKey("video_duration") ? Integer.parseInt(map.get("video_duration").toString()) : -1;
        if (unifiedInterstitialAD != null) {
            unifiedInterstitialAD.setVideoOption(new VideoOption.Builder().setAutoPlayMuted(i == 1).setDetailPageMuted(i == 1).setAutoPlayPolicy(i2).build());
            if (i3 != -1) {
                unifiedInterstitialAD.setMaxVideoDuration(i3);
            }
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return GDTTYInitManager.getInstance().getNetworkName();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        if (this.f7567a != null) {
            this.f7567a = null;
        }
        if (this.b != null) {
            this.b = null;
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.d;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return GDTTYInitManager.getInstance().getNetworkVersion();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean isAdReady() {
        RewardVideoAD rewardVideoAD = this.f7567a;
        if (rewardVideoAD != null) {
            return rewardVideoAD.isValid();
        }
        UnifiedInterstitialAD unifiedInterstitialAD = this.b;
        if (unifiedInterstitialAD != null) {
            return unifiedInterstitialAD.isValid();
        }
        return false;
    }

    @Override // com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter
    public void show(Activity activity) {
        if (this.f7567a != null) {
            try {
                GDTTYInitManager.getInstance().a(this.d, this.f7567a);
                if (activity != null) {
                    this.f7567a.showAD(activity);
                } else {
                    this.f7567a.showAD();
                }
            } catch (Throwable th) {
                GDTTYInitManager.getInstance().a();
                th.printStackTrace();
            }
        }
        if (this.b != null) {
            try {
                GDTTYInitManager.getInstance().a(this.d, this.b);
                this.b.showFullScreenAD(activity);
            } catch (Throwable th2) {
                GDTTYInitManager.getInstance().b();
                th2.printStackTrace();
            }
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public Map<String, Object> getNetworkInfoMap() {
        return this.h;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public TYInitMediation getMediationInitManager() {
        return GDTTYInitManager.getInstance();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.d = TYInitMediation.getStringFromMap(map, "unit_id");
        GDTTYInitManager.getInstance().a(context, map, map2, tYBidRequestInfoListener);
    }

    public void setDismissType(int i) {
        this.mDismissType = i;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.k = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, Map<String, Object> map2) {
        this.c = TYInitMediation.getStringFromMap(map, "app_id");
        this.d = TYInitMediation.getStringFromMap(map, "unit_id");
        this.e = TYInitMediation.getStringFromMap(map, "payload");
        this.g = TYInitMediation.getIntFromMap(map, "video_muted", 0);
        this.j = TYInitMediation.getIntFromMap(map, "unit_type", 1);
        this.i = TYInitMediation.getBooleanFromMap(map2, TYAdConst.KEY.AD_CLICK_CONFIRM_STATUS, false);
        if (TextUtils.isEmpty(this.c) || TextUtils.isEmpty(this.d)) {
            notifyATLoadFail("", "GTD appid or unitId is empty.");
        } else {
            GDTTYInitManager.getInstance().initSDK(context.getApplicationContext(), map, new MediationInitCallback() { // from class: com.tkay.network.gdt.GDTTYRewardedVideoAdapter.1
                @Override // com.tkay.core.api.MediationInitCallback
                public final void onSuccess() {
                    GDTTYRewardedVideoAdapter.a(GDTTYRewardedVideoAdapter.this, context, map);
                }

                @Override // com.tkay.core.api.MediationInitCallback
                public final void onFail(String str) {
                    GDTTYRewardedVideoAdapter.this.notifyATLoadFail("", str);
                }
            });
        }
    }

    static /* synthetic */ void a(GDTTYRewardedVideoAdapter gDTTYRewardedVideoAdapter, Context context, Map map) {
        if (gDTTYRewardedVideoAdapter.j == 2) {
            if (!(context instanceof Activity)) {
                gDTTYRewardedVideoAdapter.notifyATLoadFail("", "GDT UnifiedInterstitial's context must be activity.");
                return;
            }
            AnonymousClass3 anonymousClass3 = gDTTYRewardedVideoAdapter.new AnonymousClass3();
            if (TextUtils.isEmpty(gDTTYRewardedVideoAdapter.e) || gDTTYRewardedVideoAdapter.k) {
                UnifiedInterstitialAD unifiedInterstitialAD = new UnifiedInterstitialAD((Activity) context, gDTTYRewardedVideoAdapter.d, anonymousClass3);
                gDTTYRewardedVideoAdapter.b = unifiedInterstitialAD;
                GDTTYInitManager.getInstance();
                unifiedInterstitialAD.setLoadAdParams(GDTTYInitManager.a((Map<String, Object>) map));
            } else {
                gDTTYRewardedVideoAdapter.b = new UnifiedInterstitialAD((Activity) context, gDTTYRewardedVideoAdapter.d, anonymousClass3, null, gDTTYRewardedVideoAdapter.e);
            }
            UnifiedInterstitialAD unifiedInterstitialAD2 = gDTTYRewardedVideoAdapter.b;
            int i = map.containsKey("video_muted") ? Integer.parseInt(map.get("video_muted").toString()) : 0;
            int i2 = map.containsKey("video_autoplay") ? Integer.parseInt(map.get("video_autoplay").toString()) : 1;
            int i3 = map.containsKey("video_duration") ? Integer.parseInt(map.get("video_duration").toString()) : -1;
            if (unifiedInterstitialAD2 != null) {
                unifiedInterstitialAD2.setVideoOption(new VideoOption.Builder().setAutoPlayMuted(i == 1).setDetailPageMuted(i == 1).setAutoPlayPolicy(i2).build());
                if (i3 != -1) {
                    unifiedInterstitialAD2.setMaxVideoDuration(i3);
                }
            }
            gDTTYRewardedVideoAdapter.b.setMediaListener(gDTTYRewardedVideoAdapter.new AnonymousClass4());
            gDTTYRewardedVideoAdapter.b.loadFullScreenAD();
            return;
        }
        AnonymousClass2 anonymousClass2 = gDTTYRewardedVideoAdapter.new AnonymousClass2();
        if (TextUtils.isEmpty(gDTTYRewardedVideoAdapter.e) || gDTTYRewardedVideoAdapter.k) {
            RewardVideoAD rewardVideoAD = new RewardVideoAD(context.getApplicationContext(), gDTTYRewardedVideoAdapter.d, anonymousClass2, gDTTYRewardedVideoAdapter.g != 1);
            gDTTYRewardedVideoAdapter.f7567a = rewardVideoAD;
            GDTTYInitManager.getInstance();
            rewardVideoAD.setLoadAdParams(GDTTYInitManager.a((Map<String, Object>) map));
        } else {
            gDTTYRewardedVideoAdapter.f7567a = new RewardVideoAD(context.getApplicationContext(), gDTTYRewardedVideoAdapter.d, anonymousClass2, gDTTYRewardedVideoAdapter.g != 1, gDTTYRewardedVideoAdapter.e);
        }
        try {
            ServerSideVerificationOptions.Builder builder = new ServerSideVerificationOptions.Builder();
            builder.setUserId(gDTTYRewardedVideoAdapter.mUserId);
            if (!TextUtils.isEmpty(gDTTYRewardedVideoAdapter.mUserData) && gDTTYRewardedVideoAdapter.mUserData.contains(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME)) {
                gDTTYRewardedVideoAdapter.mUserData = gDTTYRewardedVideoAdapter.mUserData.replace(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME, gDTTYRewardedVideoAdapter.d);
            }
            builder.setCustomData(gDTTYRewardedVideoAdapter.mUserData);
            gDTTYRewardedVideoAdapter.f7567a.setServerSideVerificationOptions(builder.build());
        } catch (Throwable unused) {
        }
        gDTTYRewardedVideoAdapter.f7567a.loadAD();
    }
}
