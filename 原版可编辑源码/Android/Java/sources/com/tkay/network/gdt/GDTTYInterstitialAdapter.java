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

public class GDTTYInterstitialAdapter extends CustomInterstitialAdapter implements UnifiedInterstitialMediaListener {
    public static String TAG = GDTTYInterstitialAdapter.class.getSimpleName();
    UnifiedInterstitialAD a;
    String b;
    String c;
    String d;
    int e = 0;
    String f;
    boolean g;
    boolean h;

    @Override
    public void onVideoInit() {
    }

    @Override
    public void onVideoLoading() {
    }

    @Override
    public void onVideoPageClose() {
    }

    @Override
    public void onVideoPageOpen() {
    }

    @Override
    public void onVideoPause() {
    }

    @Override
    public void onVideoReady(long j) {
    }

    private void a(Context context, Map<String, Object> map, Map<String, Object> map2) {
        this.f = TYInitMediation.getStringFromMap(map, "is_fullscreen", "0");
        this.g = TYInitMediation.getBooleanFromMap(map2, TYAdConst.KEY.AD_CLICK_CONFIRM_STATUS, false);
        if (!(context instanceof Activity)) {
            notifyATLoadFail("", "GDT UnifiedInterstitial's context must be activity.");
            return;
        }
        1 r4 = new 1();
        if (TextUtils.isEmpty(this.d) || this.h) {
            UnifiedInterstitialAD unifiedInterstitialAD = new UnifiedInterstitialAD((Activity) context, this.c, r4);
            this.a = unifiedInterstitialAD;
            GDTTYInitManager.getInstance();
            unifiedInterstitialAD.setLoadAdParams(GDTTYInitManager.a(map));
        } else {
            this.a = new UnifiedInterstitialAD((Activity) context, this.c, r4, null, this.d);
        }
        int intFromMap = TYInitMediation.getIntFromMap(map, "video_muted", 0);
        int intFromMap2 = TYInitMediation.getIntFromMap(map, "video_autoplay", 1);
        int intFromMap3 = TYInitMediation.getIntFromMap(map, "video_duration", -1);
        if (this.a != null) {
            this.a.setVideoOption(new VideoOption.Builder().setAutoPlayMuted(intFromMap == 1).setDetailPageMuted(intFromMap == 1).setAutoPlayPolicy(intFromMap2).build());
            if (intFromMap3 != -1) {
                this.a.setMaxVideoDuration(intFromMap3);
            }
        }
        if (TextUtils.equals("1", this.f)) {
            this.a.loadFullScreenAD();
        } else {
            this.a.loadAD();
        }
    }

    private void a(Context context, Map<String, Object> map) {
        if (!(context instanceof Activity)) {
            notifyATLoadFail("", "GDT UnifiedInterstitial's context must be activity.");
            return;
        }
        1 r3 = new 1();
        if (TextUtils.isEmpty(this.d) || this.h) {
            UnifiedInterstitialAD unifiedInterstitialAD = new UnifiedInterstitialAD((Activity) context, this.c, r3);
            this.a = unifiedInterstitialAD;
            GDTTYInitManager.getInstance();
            unifiedInterstitialAD.setLoadAdParams(GDTTYInitManager.a(map));
        } else {
            this.a = new UnifiedInterstitialAD((Activity) context, this.c, r3, null, this.d);
        }
        int intFromMap = TYInitMediation.getIntFromMap(map, "video_muted", 0);
        int intFromMap2 = TYInitMediation.getIntFromMap(map, "video_autoplay", 1);
        int intFromMap3 = TYInitMediation.getIntFromMap(map, "video_duration", -1);
        if (this.a != null) {
            this.a.setVideoOption(new VideoOption.Builder().setAutoPlayMuted(intFromMap == 1).setDetailPageMuted(intFromMap == 1).setAutoPlayPolicy(intFromMap2).build());
            if (intFromMap3 != -1) {
                this.a.setMaxVideoDuration(intFromMap3);
            }
        }
        if (TextUtils.equals("1", this.f)) {
            this.a.loadFullScreenAD();
        } else {
            this.a.loadAD();
        }
    }

    final class 1 implements UnifiedInterstitialADListener {
        @Override
        public final void onADLeftApplication() {
        }

        @Override
        public final void onADOpened() {
        }

        @Override
        public final void onVideoCached() {
        }

        1() {
        }

        @Override
        public final void onADReceive() {
            if (GDTTYInterstitialAdapter.this.a != null && GDTTYInterstitialAdapter.this.g) {
                GDTTYInterstitialAdapter.this.a.setDownloadConfirmListener(new DownloadConfirmListener() {
                    @Override
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
                double ecpm = GDTTYInterstitialAdapter.this.a.getECPM();
                GDTTYBiddingNotice gDTTYBiddingNotice = new GDTTYBiddingNotice(GDTTYInterstitialAdapter.this.a);
                TYBiddingListener tYBiddingListener = GDTTYInterstitialAdapter.this.mBiddingListener;
                StringBuilder sb = new StringBuilder();
                sb.append(System.currentTimeMillis());
                tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(ecpm, sb.toString(), gDTTYBiddingNotice, TYAdConst.CURRENCY.RMB_CENT), null);
            }
        }

        @Override
        public final void onNoAD(AdError adError) {
            GDTTYInterstitialAdapter.this.notifyATLoadFail(String.valueOf(adError.getErrorCode()), adError.getErrorMsg());
        }

        @Override
        public final void onADExposure() {
            try {
                GDTTYInitManager.getInstance().a(GDTTYInterstitialAdapter.this.getTrackingInfo().l(), new WeakReference(GDTTYInterstitialAdapter.this.a));
            } catch (Throwable unused) {
            }
            if (GDTTYInterstitialAdapter.this.mImpressListener != null) {
                GDTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
            }
        }

        @Override
        public final void onADClicked() {
            if (GDTTYInterstitialAdapter.this.mImpressListener != null) {
                GDTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
            }
        }

        @Override
        public final void onADClosed() {
            GDTTYInitManager.getInstance().b();
            if (GDTTYInterstitialAdapter.this.mImpressListener != null) {
                GDTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
            }
            if (GDTTYInterstitialAdapter.this.a != null) {
                GDTTYInterstitialAdapter.this.a.destroy();
            }
        }

        @Override
        public final void onRenderSuccess() {
            if (GDTTYInterstitialAdapter.this.mLoadListener != null) {
                GDTTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
            }
        }

        @Override
        public final void onRenderFail() {
            GDTTYInterstitialAdapter.this.notifyATLoadFail("", "GDT: onRenderFail()");
        }
    }

    @Override
    public boolean isAdReady() {
        UnifiedInterstitialAD unifiedInterstitialAD = this.a;
        if (unifiedInterstitialAD != null) {
            return unifiedInterstitialAD.isValid();
        }
        return false;
    }

    @Override
    public void show(Activity activity) {
        UnifiedInterstitialAD unifiedInterstitialAD = this.a;
        if (unifiedInterstitialAD != null) {
            unifiedInterstitialAD.setMediaListener(this);
            if (TextUtils.equals("1", this.f)) {
                if (activity != null) {
                    GDTTYInitManager.getInstance().a(this.c, this.a);
                    this.a.showFullScreenAD(activity);
                    return;
                } else {
                    Log.e(TAG, "Gdt (Full Screen) show fail: context need be Activity");
                    return;
                }
            }
            GDTTYInitManager.getInstance().a(this.c, this.a);
            if (activity != null) {
                this.a.show(activity);
            } else {
                this.a.show();
            }
        }
    }

    @Override
    public String getNetworkName() {
        return GDTTYInitManager.getInstance().getNetworkName();
    }

    private void a(Map<String, Object> map) {
        this.b = TYInitMediation.getStringFromMap(map, "app_id");
        this.c = TYInitMediation.getStringFromMap(map, "unit_id");
        this.e = TYInitMediation.getIntFromMap(map, "unit_version");
        this.d = TYInitMediation.getStringFromMap(map, "payload");
    }

    @Override
    public void destory() {
        UnifiedInterstitialAD unifiedInterstitialAD = this.a;
        if (unifiedInterstitialAD != null) {
            unifiedInterstitialAD.setMediaListener(null);
            this.a.destroy();
            this.a = null;
        }
    }

    @Override
    public String getNetworkPlacementId() {
        return this.c;
    }

    @Override
    public String getNetworkSDKVersion() {
        return GDTTYInitManager.getInstance().getNetworkVersion();
    }

    private void b(Map<String, Object> map) {
        int intFromMap = TYInitMediation.getIntFromMap(map, "video_muted", 0);
        int intFromMap2 = TYInitMediation.getIntFromMap(map, "video_autoplay", 1);
        int intFromMap3 = TYInitMediation.getIntFromMap(map, "video_duration", -1);
        if (this.a != null) {
            this.a.setVideoOption(new VideoOption.Builder().setAutoPlayMuted(intFromMap == 1).setDetailPageMuted(intFromMap == 1).setAutoPlayPolicy(intFromMap2).build());
            if (intFromMap3 != -1) {
                this.a.setMaxVideoDuration(intFromMap3);
            }
        }
    }

    @Override
    public void onVideoStart() {
        if (this.mImpressListener != null) {
            this.mImpressListener.onInterstitialAdVideoStart();
        }
    }

    @Override
    public void onVideoComplete() {
        if (this.mImpressListener != null) {
            this.mImpressListener.onInterstitialAdVideoEnd();
        }
    }

    @Override
    public void onVideoError(AdError adError) {
        GDTTYInitManager.getInstance().b();
        if (this.mImpressListener != null) {
            CustomInterstitialEventListener customInterstitialEventListener = this.mImpressListener;
            StringBuilder sb = new StringBuilder();
            sb.append(adError.getErrorCode());
            customInterstitialEventListener.onInterstitialAdVideoError(sb.toString(), adError.getErrorMsg());
        }
    }

    @Override
    public TYInitMediation getMediationInitManager() {
        return GDTTYInitManager.getInstance();
    }

    @Override
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.c = TYInitMediation.getStringFromMap(map, "unit_id");
        GDTTYInitManager.getInstance().a(context, map, map2, tYBidRequestInfoListener);
    }

    @Override
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.h = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    @Override
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, final Map<String, Object> map2) {
        this.b = TYInitMediation.getStringFromMap(map, "app_id");
        this.c = TYInitMediation.getStringFromMap(map, "unit_id");
        this.e = TYInitMediation.getIntFromMap(map, "unit_version");
        this.d = TYInitMediation.getStringFromMap(map, "payload");
        if (TextUtils.isEmpty(this.b) || TextUtils.isEmpty(this.c)) {
            notifyATLoadFail("", "GDT appid or unitId is empty.");
        } else {
            GDTTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() {
                @Override
                public final void onSuccess() {
                    if (GDTTYInterstitialAdapter.this.getMixedFormatAdType() == 0) {
                        GDTTYInterstitialAdapter.this.thirdPartyLoad(new GDTTYAdapter(), context, map, map2);
                    } else {
                        GDTTYInterstitialAdapter.a(GDTTYInterstitialAdapter.this, context, map, map2);
                    }
                }

                @Override
                public final void onFail(String str) {
                    GDTTYInterstitialAdapter.this.notifyATLoadFail("", str);
                }
            });
        }
    }

    static void a(GDTTYInterstitialAdapter gDTTYInterstitialAdapter, Context context, Map map, Map map2) {
        gDTTYInterstitialAdapter.f = TYInitMediation.getStringFromMap(map, "is_fullscreen", "0");
        gDTTYInterstitialAdapter.g = TYInitMediation.getBooleanFromMap(map2, TYAdConst.KEY.AD_CLICK_CONFIRM_STATUS, false);
        if (!(context instanceof Activity)) {
            gDTTYInterstitialAdapter.notifyATLoadFail("", "GDT UnifiedInterstitial's context must be activity.");
            return;
        }
        1 r4 = gDTTYInterstitialAdapter.new 1();
        if (TextUtils.isEmpty(gDTTYInterstitialAdapter.d) || gDTTYInterstitialAdapter.h) {
            UnifiedInterstitialAD unifiedInterstitialAD = new UnifiedInterstitialAD((Activity) context, gDTTYInterstitialAdapter.c, r4);
            gDTTYInterstitialAdapter.a = unifiedInterstitialAD;
            GDTTYInitManager.getInstance();
            unifiedInterstitialAD.setLoadAdParams(GDTTYInitManager.a((Map<String, Object>) map));
        } else {
            gDTTYInterstitialAdapter.a = new UnifiedInterstitialAD((Activity) context, gDTTYInterstitialAdapter.c, r4, null, gDTTYInterstitialAdapter.d);
        }
        int intFromMap = TYInitMediation.getIntFromMap(map, "video_muted", 0);
        int intFromMap2 = TYInitMediation.getIntFromMap(map, "video_autoplay", 1);
        int intFromMap3 = TYInitMediation.getIntFromMap(map, "video_duration", -1);
        if (gDTTYInterstitialAdapter.a != null) {
            gDTTYInterstitialAdapter.a.setVideoOption(new VideoOption.Builder().setAutoPlayMuted(intFromMap == 1).setDetailPageMuted(intFromMap == 1).setAutoPlayPolicy(intFromMap2).build());
            if (intFromMap3 != -1) {
                gDTTYInterstitialAdapter.a.setMaxVideoDuration(intFromMap3);
            }
        }
        if (TextUtils.equals("1", gDTTYInterstitialAdapter.f)) {
            gDTTYInterstitialAdapter.a.loadFullScreenAD();
        } else {
            gDTTYInterstitialAdapter.a.loadAD();
        }
    }
}
