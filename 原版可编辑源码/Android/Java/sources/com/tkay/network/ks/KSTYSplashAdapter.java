package com.tkay.network.ks;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import com.kwad.sdk.api.KsAdSDK;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsScene;
import com.kwad.sdk.api.KsSplashScreenAd;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.core.api.TYBiddingResult;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.common.b.f;
import com.tkay.splashad.unitgroup.api.CustomSplashAdapter;
import java.lang.ref.WeakReference;
import java.util.Map;

public class KSTYSplashAdapter extends CustomSplashAdapter {
    long a;
    KsSplashScreenAd b;
    View c;
    boolean d;
    Context e;
    String f;
    double g;
    private final String i = getClass().getSimpleName();
    private boolean j = false;
    boolean h = false;

    static int g(KSTYSplashAdapter kSTYSplashAdapter) {
        kSTYSplashAdapter.mDismissType = 99;
        return 99;
    }

    static int k(KSTYSplashAdapter kSTYSplashAdapter) {
        kSTYSplashAdapter.mDismissType = 3;
        return 3;
    }

    static int p(KSTYSplashAdapter kSTYSplashAdapter) {
        kSTYSplashAdapter.mDismissType = 2;
        return 2;
    }

    @Override
    public void loadCustomNetworkAd(Context context, final Map<String, Object> map, final Map<String, Object> map2) {
        if (!a(map)) {
            notifyATLoadFail("", "kuaishou app_id or position_id is empty.");
        } else {
            this.e = context.getApplicationContext();
            KSTYInitManager.getInstance().initSDK(this.e, map, new MediationInitCallback() {
                @Override
                public final void onSuccess() {
                    if (KSTYSplashAdapter.this.getMixedFormatAdType() == 0) {
                        if (!map.containsKey("video_sound")) {
                            map.put("video_sound", 0);
                        }
                        KSTYSplashAdapter.this.thirdPartyLoad(new KSTYAdapter(), KSTYSplashAdapter.this.e, map, map2);
                        return;
                    }
                    KSTYSplashAdapter.a(KSTYSplashAdapter.this);
                }

                @Override
                public final void onFail(String str) {
                    KSTYSplashAdapter.this.notifyATLoadFail("", str);
                }
            });
        }
    }

    final class 2 implements KsLoadManager.SplashScreenAdListener {
        @Override
        public final void onRequestResult(int i) {
        }

        2() {
        }

        @Override
        public final void onError(int i, String str) {
            KSTYSplashAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override
        public final void onSplashScreenAdLoad(KsSplashScreenAd ksSplashScreenAd) {
            KSTYSplashAdapter.this.b = ksSplashScreenAd;
            if (!KSTYSplashAdapter.this.h) {
                if (KSTYSplashAdapter.this.mLoadListener != null) {
                    KSTYSplashAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            } else if (KSTYSplashAdapter.this.mBiddingListener != null) {
                double ecpm = 0.0d;
                try {
                    ecpm = ksSplashScreenAd.getECPM();
                } catch (Throwable th) {
                    th.printStackTrace();
                }
                KSTYBiddingNotice kSTYBiddingNotice = new KSTYBiddingNotice(ksSplashScreenAd);
                TYBiddingListener tYBiddingListener = KSTYSplashAdapter.this.mBiddingListener;
                StringBuilder sb = new StringBuilder();
                sb.append(System.currentTimeMillis());
                tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(ecpm, sb.toString(), kSTYBiddingNotice, TYAdConst.CURRENCY.RMB_CENT), null);
            }
        }
    }

    private void a() {
        2 r0 = new 2();
        KsScene.Builder builderAdNum = new KsScene.Builder(this.a).adNum(1);
        if (!TextUtils.isEmpty(this.f)) {
            builderAdNum.setBidResponseV2(this.f);
        }
        KsAdSDK.getLoadManager().loadSplashScreenAd(builderAdNum.build(), r0);
    }

    @Override
    public boolean isAdReady() {
        KsSplashScreenAd ksSplashScreenAd = this.b;
        return ksSplashScreenAd != null && ksSplashScreenAd.isAdEnable();
    }

    @Override
    public void show(Activity activity, ViewGroup viewGroup) {
        KsSplashScreenAd ksSplashScreenAd = this.b;
        if (ksSplashScreenAd != null) {
            try {
                View view = ksSplashScreenAd.getView(viewGroup.getContext().getApplicationContext(), new KsSplashScreenAd.SplashScreenAdInteractionListener() {
                    @Override
                    public final void onDownloadTipsDialogCancel() {
                    }

                    @Override
                    public final void onDownloadTipsDialogDismiss() {
                    }

                    @Override
                    public final void onDownloadTipsDialogShow() {
                    }

                    @Override
                    public final void onAdClicked() {
                        if (KSTYSplashAdapter.this.mImpressionListener != null) {
                            KSTYSplashAdapter.this.mImpressionListener.onSplashAdClicked();
                        }
                    }

                    @Override
                    public final void onAdShowError(int i, String str) {
                        Log.e(KSTYSplashAdapter.this.i, "onAdShowError: " + i + ", " + str);
                        KSTYSplashAdapter.g(KSTYSplashAdapter.this);
                        if (KSTYSplashAdapter.this.d || KSTYSplashAdapter.this.mImpressionListener == null) {
                            return;
                        }
                        KSTYSplashAdapter.this.d = true;
                        KSTYSplashAdapter.this.mImpressionListener.onSplashAdShowFail(ErrorCode.getErrorCode(ErrorCode.adShowError, String.valueOf(i), str));
                        KSTYSplashAdapter.this.mImpressionListener.onSplashAdDismiss();
                    }

                    @Override
                    public final void onAdShowEnd() {
                        KSTYSplashAdapter.k(KSTYSplashAdapter.this);
                        if (KSTYSplashAdapter.this.d || KSTYSplashAdapter.this.mImpressionListener == null) {
                            return;
                        }
                        KSTYSplashAdapter.this.d = true;
                        KSTYSplashAdapter.this.mImpressionListener.onSplashAdDismiss();
                    }

                    @Override
                    public final void onAdShowStart() {
                        try {
                            KSTYInitManager.getInstance().a(KSTYSplashAdapter.this.getTrackingInfo().l(), new WeakReference(KSTYSplashAdapter.this.b));
                        } catch (Throwable unused) {
                        }
                        if (KSTYSplashAdapter.this.mImpressionListener != null) {
                            KSTYSplashAdapter.this.mImpressionListener.onSplashAdShow();
                        }
                    }

                    @Override
                    public final void onSkippedAd() {
                        KSTYSplashAdapter.p(KSTYSplashAdapter.this);
                        if (KSTYSplashAdapter.this.d || KSTYSplashAdapter.this.mImpressionListener == null) {
                            return;
                        }
                        KSTYSplashAdapter.this.d = true;
                        KSTYSplashAdapter.this.mImpressionListener.onSplashAdDismiss();
                    }
                });
                if (this.j) {
                    this.c = view;
                    viewGroup.addView(view, new ViewGroup.LayoutParams(-1, -1));
                } else {
                    viewGroup.addView(view, new ViewGroup.LayoutParams(-1, -1));
                }
            } catch (Throwable th) {
                Log.e(this.i, th.getMessage());
                th.printStackTrace();
            }
        }
    }

    @Override
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.h = true;
        if (getMixedFormatAdType() == 0) {
            return false;
        }
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    @Override
    public void destory() {
        this.b = null;
    }

    @Override
    public String getNetworkPlacementId() {
        try {
            return String.valueOf(this.a);
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    @Override
    public String getNetworkSDKVersion() {
        return KSTYInitManager.getInstance().getNetworkVersion();
    }

    @Override
    public String getNetworkName() {
        return KSTYInitManager.getInstance().getNetworkName();
    }

    private void b() {
        if (this.mImpressionListener != null) {
            this.mImpressionListener.onSplashAdClicked();
        }
    }

    private boolean a(Map<String, Object> map) {
        String stringFromMap = TYInitMediation.getStringFromMap(map, "app_id");
        String stringFromMap2 = TYInitMediation.getStringFromMap(map, "position_id");
        if (TextUtils.isEmpty(stringFromMap) || TextUtils.isEmpty(stringFromMap2)) {
            return false;
        }
        try {
            this.a = Long.parseLong(stringFromMap2);
        } catch (NumberFormatException unused) {
        }
        if (map.containsKey("zoomoutad_sw")) {
            this.j = TextUtils.equals("2", TYInitMediation.getStringFromMap(map, "zoomoutad_sw"));
        }
        if (map.containsKey(f.k.o)) {
            this.g = TYInitMediation.getDoubleFromMap(map, f.k.o);
        }
        if (!map.containsKey("payload")) {
            return true;
        }
        this.f = KSTYInitManager.getInstance().getPayloadInfo(TYInitMediation.getStringFromMap(map, "payload"), this.g);
        return true;
    }

    @Override
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.a = TYInitMediation.getLongFromMap(map, "position_id");
        KSTYInitManager.getInstance().a(context, map, map2, tYBidRequestInfoListener);
    }

    static void a(KSTYSplashAdapter kSTYSplashAdapter) {
        2 r0 = kSTYSplashAdapter.new 2();
        KsScene.Builder builderAdNum = new KsScene.Builder(kSTYSplashAdapter.a).adNum(1);
        if (!TextUtils.isEmpty(kSTYSplashAdapter.f)) {
            builderAdNum.setBidResponseV2(kSTYSplashAdapter.f);
        }
        KsAdSDK.getLoadManager().loadSplashScreenAd(builderAdNum.build(), r0);
    }
}
