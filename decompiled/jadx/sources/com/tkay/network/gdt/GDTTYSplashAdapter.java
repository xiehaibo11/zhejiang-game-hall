package com.tkay.network.gdt;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.qq.e.ads.splash.SplashAD;
import com.qq.e.ads.splash.SplashADZoomOutListener;
import com.qq.e.comm.compliance.DownloadConfirmCallBack;
import com.qq.e.comm.compliance.DownloadConfirmListener;
import com.qq.e.comm.util.AdError;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.core.api.TYBiddingResult;
import com.tkay.core.api.TYInitMediation;
import com.tkay.splashad.api.ITYSplashEyeAd;
import com.tkay.splashad.api.TYSplashEyeAdListener;
import com.tkay.splashad.unitgroup.api.CustomSplashAdapter;
import com.tkay.splashad.unitgroup.api.CustomSplashEventListener;
import java.lang.ref.WeakReference;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class GDTTYSplashAdapter extends CustomSplashAdapter implements SplashADZoomOutListener {
    boolean b;
    GDTTYSplashEyeAd c;
    ViewGroup d;
    String e;
    private String g;
    private String h;
    private boolean i;
    private SplashAD j;
    private boolean k;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final String f7575a = GDTTYSplashAdapter.class.getSimpleName();
    private boolean l = false;
    boolean f = false;

    @Override // com.qq.e.ads.splash.SplashADListener
    public void onADPresent() {
    }

    @Override // com.qq.e.ads.splash.SplashADListener
    public void onADTick(long j) {
    }

    @Override // com.qq.e.ads.splash.SplashADZoomOutListener
    public void onZoomOutPlayFinish() {
    }

    private void a(Context context, Map<String, Object> map) {
        if (TextUtils.isEmpty(this.e) || this.f) {
            SplashAD splashAD = new SplashAD(context, this.h, this, this.mFetchAdTimeout);
            this.j = splashAD;
            GDTTYInitManager.getInstance();
            splashAD.setLoadAdParams(GDTTYInitManager.a(map));
        } else {
            this.j = new SplashAD(context, this.h, this, this.mFetchAdTimeout, this.e);
        }
        this.j.fetchAdOnly();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return GDTTYInitManager.getInstance().getNetworkName();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean isAdReady() {
        return this.i;
    }

    private void a(Map<String, Object> map, Map<String, Object> map2) {
        this.g = TYInitMediation.getStringFromMap(map, "app_id");
        this.h = TYInitMediation.getStringFromMap(map, "unit_id");
        this.e = TYInitMediation.getStringFromMap(map, "payload");
        this.i = false;
        this.k = TYInitMediation.getBooleanFromMap(map2, TYAdConst.KEY.AD_CLICK_CONFIRM_STATUS, false);
        if (map.containsKey("zoomoutad_sw")) {
            this.l = TextUtils.equals("2", TYInitMediation.getStringFromMap(map, "zoomoutad_sw"));
        }
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashAdapter
    public void show(Activity activity, ViewGroup viewGroup) {
        SplashAD splashAD;
        if (!this.i || (splashAD = this.j) == null) {
            return;
        }
        if (this.l) {
            FrameLayout frameLayout = new FrameLayout(viewGroup.getContext());
            this.d = frameLayout;
            viewGroup.addView(frameLayout, new ViewGroup.LayoutParams(-1, -1));
            this.j.showAd(this.d);
            return;
        }
        splashAD.showAd(viewGroup);
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        this.j = null;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.h;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return GDTTYInitManager.getInstance().getNetworkVersion();
    }

    @Override // com.qq.e.ads.splash.SplashADListener
    public void onADDismissed() {
        TYSplashEyeAdListener splashEyeAdListener;
        if (this.l && this.b) {
            GDTTYSplashEyeAd gDTTYSplashEyeAd = this.c;
            if (gDTTYSplashEyeAd == null || (splashEyeAdListener = gDTTYSplashEyeAd.getSplashEyeAdListener()) == null) {
                return;
            }
            splashEyeAdListener.onAdDismiss(true, "");
            return;
        }
        if (this.mImpressionListener != null) {
            this.mImpressionListener.onSplashAdDismiss();
        }
    }

    @Override // com.qq.e.ads.splash.SplashADListener
    public void onNoAD(AdError adError) {
        StringBuilder sb = new StringBuilder();
        sb.append(adError.getErrorCode());
        notifyATLoadFail(sb.toString(), adError.getErrorMsg());
        if (this.mImpressionListener != null) {
            Log.e(this.f7575a, "GDT Splash show fail:[errorCode:" + adError.getErrorCode() + ",errorMsg:" + adError.getErrorMsg() + "]");
            this.mDismissType = 99;
            CustomSplashEventListener customSplashEventListener = this.mImpressionListener;
            StringBuilder sb2 = new StringBuilder();
            sb2.append(adError.getErrorCode());
            customSplashEventListener.onSplashAdShowFail(ErrorCode.getErrorCode(ErrorCode.adShowError, sb2.toString(), adError.getErrorMsg()));
            this.mImpressionListener.onSplashAdDismiss();
        }
    }

    @Override // com.qq.e.ads.splash.SplashADListener
    public void onADClicked() {
        if (this.mImpressionListener != null) {
            this.mImpressionListener.onSplashAdClicked();
        }
    }

    @Override // com.qq.e.ads.splash.SplashADListener
    public void onADExposure() {
        try {
            GDTTYInitManager.getInstance().a(getTrackingInfo().l(), new WeakReference(this.j));
        } catch (Throwable unused) {
        }
        if (this.mImpressionListener != null) {
            this.mImpressionListener.onSplashAdShow();
        }
    }

    @Override // com.qq.e.ads.splash.SplashADListener
    public void onADLoaded(long j) {
        this.i = true;
        SplashAD splashAD = this.j;
        if (splashAD != null && this.k) {
            splashAD.setDownloadConfirmListener(new DownloadConfirmListener() { // from class: com.tkay.network.gdt.GDTTYSplashAdapter.2
                @Override // com.qq.e.comm.compliance.DownloadConfirmListener
                public final void onDownloadConfirm(Activity activity, int i, String str, DownloadConfirmCallBack downloadConfirmCallBack) {
                    if (GDTTYSplashAdapter.this.mImpressionListener != null) {
                        GDTDownloadFirmInfo gDTDownloadFirmInfo = new GDTDownloadFirmInfo();
                        gDTDownloadFirmInfo.appInfoUrl = str;
                        gDTDownloadFirmInfo.scenes = i;
                        gDTDownloadFirmInfo.confirmCallBack = downloadConfirmCallBack;
                        GDTTYSplashAdapter.this.mImpressionListener.onDownloadConfirm(activity, gDTDownloadFirmInfo);
                    }
                }
            });
        }
        if (this.f) {
            if (this.mBiddingListener != null) {
                SplashAD splashAD2 = this.j;
                if (splashAD2 != null) {
                    double ecpm = splashAD2.getECPM();
                    GDTTYBiddingNotice gDTTYBiddingNotice = new GDTTYBiddingNotice(this.j);
                    TYBiddingListener tYBiddingListener = this.mBiddingListener;
                    StringBuilder sb = new StringBuilder();
                    sb.append(System.currentTimeMillis());
                    tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(ecpm, sb.toString(), gDTTYBiddingNotice, TYAdConst.CURRENCY.RMB_CENT), null);
                    return;
                }
                notifyATLoadFail("", "GDT: SplashAD had been destroy.");
                return;
            }
            return;
        }
        if (this.mLoadListener != null) {
            this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
        }
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashAdapter
    public ITYSplashEyeAd getSplashEyeAd() {
        return this.c;
    }

    @Override // com.qq.e.ads.splash.SplashADZoomOutListener
    public void onZoomOut() {
        this.b = true;
        if (this.l) {
            GDTTYSplashEyeAd gDTTYSplashEyeAd = new GDTTYSplashEyeAd(this, this.j);
            this.c = gDTTYSplashEyeAd;
            gDTTYSplashEyeAd.setSplashView(this.d);
            if (this.mImpressionListener != null) {
                this.mImpressionListener.onSplashAdDismiss();
            }
        }
    }

    @Override // com.qq.e.ads.splash.SplashADZoomOutListener
    public boolean isSupportZoomOut() {
        return this.l;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public TYInitMediation getMediationInitManager() {
        return GDTTYInitManager.getInstance();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.h = TYInitMediation.getStringFromMap(map, "unit_id");
        GDTTYInitManager.getInstance().a(context, map, map2, tYBidRequestInfoListener);
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.f = true;
        if (getMixedFormatAdType() == 0) {
            return false;
        }
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, final Map<String, Object> map2) {
        this.g = TYInitMediation.getStringFromMap(map, "app_id");
        this.h = TYInitMediation.getStringFromMap(map, "unit_id");
        this.e = TYInitMediation.getStringFromMap(map, "payload");
        this.i = false;
        this.k = TYInitMediation.getBooleanFromMap(map2, TYAdConst.KEY.AD_CLICK_CONFIRM_STATUS, false);
        if (map.containsKey("zoomoutad_sw")) {
            this.l = TextUtils.equals("2", TYInitMediation.getStringFromMap(map, "zoomoutad_sw"));
        }
        if (TextUtils.isEmpty(this.g) || TextUtils.isEmpty(this.h)) {
            notifyATLoadFail("", "GTD appid or unitId is empty.");
        } else {
            final Context applicationContext = context.getApplicationContext();
            GDTTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() { // from class: com.tkay.network.gdt.GDTTYSplashAdapter.1
                @Override // com.tkay.core.api.MediationInitCallback
                public final void onSuccess() {
                    if (GDTTYSplashAdapter.this.getMixedFormatAdType() == 0) {
                        if (!map.containsKey("video_muted")) {
                            map.put("video_muted", "1");
                        }
                        GDTTYSplashAdapter.this.thirdPartyLoad(new GDTTYAdapter(), context, map, map2);
                        return;
                    }
                    GDTTYSplashAdapter.a(GDTTYSplashAdapter.this, applicationContext, map);
                }

                @Override // com.tkay.core.api.MediationInitCallback
                public final void onFail(String str) {
                    GDTTYSplashAdapter.this.notifyATLoadFail("", str);
                }
            });
        }
    }

    static /* synthetic */ void a(GDTTYSplashAdapter gDTTYSplashAdapter, Context context, Map map) {
        if (TextUtils.isEmpty(gDTTYSplashAdapter.e) || gDTTYSplashAdapter.f) {
            SplashAD splashAD = new SplashAD(context, gDTTYSplashAdapter.h, gDTTYSplashAdapter, gDTTYSplashAdapter.mFetchAdTimeout);
            gDTTYSplashAdapter.j = splashAD;
            GDTTYInitManager.getInstance();
            splashAD.setLoadAdParams(GDTTYInitManager.a((Map<String, Object>) map));
        } else {
            gDTTYSplashAdapter.j = new SplashAD(context, gDTTYSplashAdapter.h, gDTTYSplashAdapter, gDTTYSplashAdapter.mFetchAdTimeout, gDTTYSplashAdapter.e);
        }
        gDTTYSplashAdapter.j.fetchAdOnly();
    }
}
