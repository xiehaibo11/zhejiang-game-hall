package com.tkay.network.gdt;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.qq.e.ads.cfg.VideoOption;
import com.qq.e.ads.interstitial2.UnifiedInterstitialAD;
import com.qq.e.ads.interstitial2.UnifiedInterstitialADListener;
import com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener;
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
import com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter;
import com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener;
import java.lang.ref.WeakReference;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class GDTTYInterstitialAdapter extends CustomInterstitialAdapter implements UnifiedInterstitialMediaListener {
    public static String TAG = GDTTYInterstitialAdapter.class.getSimpleName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    UnifiedInterstitialAD f7554a;
    String b;
    String c;
    String d;
    int e = 0;
    String f;
    boolean g;
    boolean h;

    @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
    public void onVideoInit() {
    }

    @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
    public void onVideoLoading() {
    }

    @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
    public void onVideoPageClose() {
    }

    @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
    public void onVideoPageOpen() {
    }

    @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
    public void onVideoPause() {
    }

    @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
    public void onVideoReady(long j) {
    }

    private void a(Context context, Map<String, Object> map, Map<String, Object> map2) {
        this.f = TYInitMediation.getStringFromMap(map, "is_fullscreen", "0");
        this.g = TYInitMediation.getBooleanFromMap(map2, TYAdConst.KEY.AD_CLICK_CONFIRM_STATUS, false);
        if (!(context instanceof Activity)) {
            notifyATLoadFail("", "GDT UnifiedInterstitial's context must be activity.");
            return;
        }
        AnonymousClass1 anonymousClass1 = new AnonymousClass1();
        if (TextUtils.isEmpty(this.d) || this.h) {
            UnifiedInterstitialAD unifiedInterstitialAD = new UnifiedInterstitialAD((Activity) context, this.c, anonymousClass1);
            this.f7554a = unifiedInterstitialAD;
            GDTTYInitManager.getInstance();
            unifiedInterstitialAD.setLoadAdParams(GDTTYInitManager.a(map));
        } else {
            this.f7554a = new UnifiedInterstitialAD((Activity) context, this.c, anonymousClass1, null, this.d);
        }
        int intFromMap = TYInitMediation.getIntFromMap(map, "video_muted", 0);
        int intFromMap2 = TYInitMediation.getIntFromMap(map, "video_autoplay", 1);
        int intFromMap3 = TYInitMediation.getIntFromMap(map, "video_duration", -1);
        if (this.f7554a != null) {
            this.f7554a.setVideoOption(new VideoOption.Builder().setAutoPlayMuted(intFromMap == 1).setDetailPageMuted(intFromMap == 1).setAutoPlayPolicy(intFromMap2).build());
            if (intFromMap3 != -1) {
                this.f7554a.setMaxVideoDuration(intFromMap3);
            }
        }
        if (TextUtils.equals("1", this.f)) {
            this.f7554a.loadFullScreenAD();
        } else {
            this.f7554a.loadAD();
        }
    }

    private void a(Context context, Map<String, Object> map) {
        if (!(context instanceof Activity)) {
            notifyATLoadFail("", "GDT UnifiedInterstitial's context must be activity.");
            return;
        }
        AnonymousClass1 anonymousClass1 = new AnonymousClass1();
        if (TextUtils.isEmpty(this.d) || this.h) {
            UnifiedInterstitialAD unifiedInterstitialAD = new UnifiedInterstitialAD((Activity) context, this.c, anonymousClass1);
            this.f7554a = unifiedInterstitialAD;
            GDTTYInitManager.getInstance();
            unifiedInterstitialAD.setLoadAdParams(GDTTYInitManager.a(map));
        } else {
            this.f7554a = new UnifiedInterstitialAD((Activity) context, this.c, anonymousClass1, null, this.d);
        }
        int intFromMap = TYInitMediation.getIntFromMap(map, "video_muted", 0);
        int intFromMap2 = TYInitMediation.getIntFromMap(map, "video_autoplay", 1);
        int intFromMap3 = TYInitMediation.getIntFromMap(map, "video_duration", -1);
        if (this.f7554a != null) {
            this.f7554a.setVideoOption(new VideoOption.Builder().setAutoPlayMuted(intFromMap == 1).setDetailPageMuted(intFromMap == 1).setAutoPlayPolicy(intFromMap2).build());
            if (intFromMap3 != -1) {
                this.f7554a.setMaxVideoDuration(intFromMap3);
            }
        }
        if (TextUtils.equals("1", this.f)) {
            this.f7554a.loadFullScreenAD();
        } else {
            this.f7554a.loadAD();
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.gdt.GDTTYInterstitialAdapter$1, reason: invalid class name */
    final class AnonymousClass1 implements UnifiedInterstitialADListener {
        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onADLeftApplication() {
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onADOpened() {
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onVideoCached() {
        }

        AnonymousClass1() {
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onADReceive() {
            if (GDTTYInterstitialAdapter.this.f7554a != null && GDTTYInterstitialAdapter.this.g) {
                GDTTYInterstitialAdapter.this.f7554a.setDownloadConfirmListener(new DownloadConfirmListener() { // from class: com.tkay.network.gdt.GDTTYInterstitialAdapter.1.1
                    @Override // com.qq.e.comm.compliance.DownloadConfirmListener
                    public final void onDownloadConfirm(Activity activity, int i, String str, DownloadConfirmCallBack downloadConfirmCallBack) {
                        if (GDTTYInterstitialAdapter.this.mImpressListener != null) {
                            GDTDownloadFirmInfo gDTDownloadFirmInfo = new GDTDownloadFirmInfo();
                            gDTDownloadFirmInfo.appInfoUrl = str;
                            gDTDownloadFirmInfo.scenes = i;
                            gDTDownloadFirmInfo.confirmCallBack = downloadConfirmCallBack;
                            GDTTYInterstitialAdapter.this.mImpressListener.onDownloadConfirm(activity, gDTDownloadFirmInfo);
                        }
                    }
                });
            }
            if (!GDTTYInterstitialAdapter.this.h) {
                if (GDTTYInterstitialAdapter.this.mLoadListener != null) {
                    GDTTYInterstitialAdapter.this.mLoadListener.onAdDataLoaded();
                }
            } else if (GDTTYInterstitialAdapter.this.mBiddingListener != null) {
                double ecpm = GDTTYInterstitialAdapter.this.f7554a.getECPM();
                GDTTYBiddingNotice gDTTYBiddingNotice = new GDTTYBiddingNotice(GDTTYInterstitialAdapter.this.f7554a);
                TYBiddingListener tYBiddingListener = GDTTYInterstitialAdapter.this.mBiddingListener;
                StringBuilder sb = new StringBuilder();
                sb.append(System.currentTimeMillis());
                tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(ecpm, sb.toString(), gDTTYBiddingNotice, TYAdConst.CURRENCY.RMB_CENT), null);
            }
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onNoAD(AdError adError) {
            GDTTYInterstitialAdapter.this.notifyATLoadFail(String.valueOf(adError.getErrorCode()), adError.getErrorMsg());
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onADExposure() {
            try {
                GDTTYInitManager.getInstance().a(GDTTYInterstitialAdapter.this.getTrackingInfo().l(), new WeakReference(GDTTYInterstitialAdapter.this.f7554a));
            } catch (Throwable unused) {
            }
            if (GDTTYInterstitialAdapter.this.mImpressListener != null) {
                GDTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
            }
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onADClicked() {
            if (GDTTYInterstitialAdapter.this.mImpressListener != null) {
                GDTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
            }
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onADClosed() {
            GDTTYInitManager.getInstance().b();
            if (GDTTYInterstitialAdapter.this.mImpressListener != null) {
                GDTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
            }
            if (GDTTYInterstitialAdapter.this.f7554a != null) {
                GDTTYInterstitialAdapter.this.f7554a.destroy();
            }
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onRenderSuccess() {
            if (GDTTYInterstitialAdapter.this.mLoadListener != null) {
                GDTTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
            }
        }

        @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialADListener
        public final void onRenderFail() {
            GDTTYInterstitialAdapter.this.notifyATLoadFail("", "GDT: onRenderFail()");
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean isAdReady() {
        UnifiedInterstitialAD unifiedInterstitialAD = this.f7554a;
        if (unifiedInterstitialAD != null) {
            return unifiedInterstitialAD.isValid();
        }
        return false;
    }

    @Override // com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter
    public void show(Activity activity) {
        UnifiedInterstitialAD unifiedInterstitialAD = this.f7554a;
        if (unifiedInterstitialAD != null) {
            unifiedInterstitialAD.setMediaListener(this);
            if (TextUtils.equals("1", this.f)) {
                if (activity != null) {
                    GDTTYInitManager.getInstance().a(this.c, this.f7554a);
                    this.f7554a.showFullScreenAD(activity);
                    return;
                } else {
                    Log.e(TAG, "Gdt (Full Screen) show fail: context need be Activity");
                    return;
                }
            }
            GDTTYInitManager.getInstance().a(this.c, this.f7554a);
            if (activity != null) {
                this.f7554a.show(activity);
            } else {
                this.f7554a.show();
            }
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return GDTTYInitManager.getInstance().getNetworkName();
    }

    private void a(Map<String, Object> map) {
        this.b = TYInitMediation.getStringFromMap(map, "app_id");
        this.c = TYInitMediation.getStringFromMap(map, "unit_id");
        this.e = TYInitMediation.getIntFromMap(map, "unit_version");
        this.d = TYInitMediation.getStringFromMap(map, "payload");
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        UnifiedInterstitialAD unifiedInterstitialAD = this.f7554a;
        if (unifiedInterstitialAD != null) {
            unifiedInterstitialAD.setMediaListener(null);
            this.f7554a.destroy();
            this.f7554a = null;
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.c;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return GDTTYInitManager.getInstance().getNetworkVersion();
    }

    private void b(Map<String, Object> map) {
        int intFromMap = TYInitMediation.getIntFromMap(map, "video_muted", 0);
        int intFromMap2 = TYInitMediation.getIntFromMap(map, "video_autoplay", 1);
        int intFromMap3 = TYInitMediation.getIntFromMap(map, "video_duration", -1);
        if (this.f7554a != null) {
            this.f7554a.setVideoOption(new VideoOption.Builder().setAutoPlayMuted(intFromMap == 1).setDetailPageMuted(intFromMap == 1).setAutoPlayPolicy(intFromMap2).build());
            if (intFromMap3 != -1) {
                this.f7554a.setMaxVideoDuration(intFromMap3);
            }
        }
    }

    @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
    public void onVideoStart() {
        if (this.mImpressListener != null) {
            this.mImpressListener.onInterstitialAdVideoStart();
        }
    }

    @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
    public void onVideoComplete() {
        if (this.mImpressListener != null) {
            this.mImpressListener.onInterstitialAdVideoEnd();
        }
    }

    @Override // com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener
    public void onVideoError(AdError adError) {
        GDTTYInitManager.getInstance().b();
        if (this.mImpressListener != null) {
            CustomInterstitialEventListener customInterstitialEventListener = this.mImpressListener;
            StringBuilder sb = new StringBuilder();
            sb.append(adError.getErrorCode());
            customInterstitialEventListener.onInterstitialAdVideoError(sb.toString(), adError.getErrorMsg());
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public TYInitMediation getMediationInitManager() {
        return GDTTYInitManager.getInstance();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.c = TYInitMediation.getStringFromMap(map, "unit_id");
        GDTTYInitManager.getInstance().a(context, map, map2, tYBidRequestInfoListener);
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.h = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, final Map<String, Object> map2) {
        this.b = TYInitMediation.getStringFromMap(map, "app_id");
        this.c = TYInitMediation.getStringFromMap(map, "unit_id");
        this.e = TYInitMediation.getIntFromMap(map, "unit_version");
        this.d = TYInitMediation.getStringFromMap(map, "payload");
        if (TextUtils.isEmpty(this.b) || TextUtils.isEmpty(this.c)) {
            notifyATLoadFail("", "GDT appid or unitId is empty.");
        } else {
            GDTTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() { // from class: com.tkay.network.gdt.GDTTYInterstitialAdapter.2
                @Override // com.tkay.core.api.MediationInitCallback
                public final void onSuccess() {
                    if (GDTTYInterstitialAdapter.this.getMixedFormatAdType() == 0) {
                        GDTTYInterstitialAdapter.this.thirdPartyLoad(new GDTTYAdapter(), context, map, map2);
                    } else {
                        GDTTYInterstitialAdapter.a(GDTTYInterstitialAdapter.this, context, map, map2);
                    }
                }

                @Override // com.tkay.core.api.MediationInitCallback
                public final void onFail(String str) {
                    GDTTYInterstitialAdapter.this.notifyATLoadFail("", str);
                }
            });
        }
    }

    static /* synthetic */ void a(GDTTYInterstitialAdapter gDTTYInterstitialAdapter, Context context, Map map, Map map2) {
        gDTTYInterstitialAdapter.f = TYInitMediation.getStringFromMap(map, "is_fullscreen", "0");
        gDTTYInterstitialAdapter.g = TYInitMediation.getBooleanFromMap(map2, TYAdConst.KEY.AD_CLICK_CONFIRM_STATUS, false);
        if (!(context instanceof Activity)) {
            gDTTYInterstitialAdapter.notifyATLoadFail("", "GDT UnifiedInterstitial's context must be activity.");
            return;
        }
        AnonymousClass1 anonymousClass1 = gDTTYInterstitialAdapter.new AnonymousClass1();
        if (TextUtils.isEmpty(gDTTYInterstitialAdapter.d) || gDTTYInterstitialAdapter.h) {
            UnifiedInterstitialAD unifiedInterstitialAD = new UnifiedInterstitialAD((Activity) context, gDTTYInterstitialAdapter.c, anonymousClass1);
            gDTTYInterstitialAdapter.f7554a = unifiedInterstitialAD;
            GDTTYInitManager.getInstance();
            unifiedInterstitialAD.setLoadAdParams(GDTTYInitManager.a((Map<String, Object>) map));
        } else {
            gDTTYInterstitialAdapter.f7554a = new UnifiedInterstitialAD((Activity) context, gDTTYInterstitialAdapter.c, anonymousClass1, null, gDTTYInterstitialAdapter.d);
        }
        int intFromMap = TYInitMediation.getIntFromMap(map, "video_muted", 0);
        int intFromMap2 = TYInitMediation.getIntFromMap(map, "video_autoplay", 1);
        int intFromMap3 = TYInitMediation.getIntFromMap(map, "video_duration", -1);
        if (gDTTYInterstitialAdapter.f7554a != null) {
            gDTTYInterstitialAdapter.f7554a.setVideoOption(new VideoOption.Builder().setAutoPlayMuted(intFromMap == 1).setDetailPageMuted(intFromMap == 1).setAutoPlayPolicy(intFromMap2).build());
            if (intFromMap3 != -1) {
                gDTTYInterstitialAdapter.f7554a.setMaxVideoDuration(intFromMap3);
            }
        }
        if (TextUtils.equals("1", gDTTYInterstitialAdapter.f)) {
            gDTTYInterstitialAdapter.f7554a.loadFullScreenAD();
        } else {
            gDTTYInterstitialAdapter.f7554a.loadAD();
        }
    }
}
