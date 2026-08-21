package com.tkay.network.sigmob;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.view.ViewGroup;
import com.sigmob.windad.Splash.WindSplashAD;
import com.sigmob.windad.Splash.WindSplashADListener;
import com.sigmob.windad.Splash.WindSplashAdRequest;
import com.sigmob.windad.WindAdError;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.common.c.l;
import com.tkay.splashad.unitgroup.api.CustomSplashAdapter;
import java.util.Map;

public class SigmobTYSplashAdapter extends CustomSplashAdapter {
    private static final String a = SigmobTYSplashAdapter.class.getSimpleName();
    private String b = "";
    private WindSplashAD c;
    private WindSplashAdRequest d;
    private WindSplashADListener e;
    private String f;
    private volatile boolean g;

    static int m(SigmobTYSplashAdapter sigmobTYSplashAdapter) {
        sigmobTYSplashAdapter.mDismissType = 3;
        return 3;
    }

    static int p(SigmobTYSplashAdapter sigmobTYSplashAdapter) {
        sigmobTYSplashAdapter.mDismissType = 2;
        return 2;
    }

    @Override
    public String getNetworkName() {
        return SigmobTYInitManager.getInstance().getNetworkName();
    }

    @Override
    public boolean isAdReady() {
        WindSplashAD windSplashAD = this.c;
        return windSplashAD != null && windSplashAD.isReady();
    }

    @Override
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, final Map<String, Object> map2) {
        String stringFromMap = TYInitMediation.getStringFromMap(map, "app_id");
        String stringFromMap2 = TYInitMediation.getStringFromMap(map, "app_key");
        this.b = TYInitMediation.getStringFromMap(map, l.a.c);
        this.f = TYInitMediation.getStringFromMap(map, "payload");
        if (TextUtils.isEmpty(stringFromMap) || TextUtils.isEmpty(stringFromMap2) || TextUtils.isEmpty(this.b)) {
            a("", "app_id、app_key、placement_id could not be null.");
        } else {
            SigmobTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() {
                @Override
                public final void onSuccess() {
                    if (SigmobTYSplashAdapter.this.getMixedFormatAdType() == 0) {
                        SigmobTYSplashAdapter.this.thirdPartyLoad(new SigmobTYAdapter(), context, map, map2);
                    } else {
                        SigmobTYSplashAdapter.a(SigmobTYSplashAdapter.this);
                    }
                }

                @Override
                public final void onFail(String str) {
                    SigmobTYSplashAdapter.this.a("", str);
                }
            });
        }
    }

    final class 2 implements Runnable {
        2() {
        }

        @Override
        public final void run() {
            SigmobTYSplashAdapter.this.d = new WindSplashAdRequest(SigmobTYSplashAdapter.this.b, "", null);
            SigmobTYSplashAdapter.this.d.setFetchDelay(SigmobTYSplashAdapter.this.mFetchAdTimeout / 1000);
            SigmobTYSplashAdapter.this.d.setDisableAutoHideAd(true);
            SigmobTYSplashAdapter.this.e = new WindSplashADListener() {
                @Override
                public final void onSplashAdShowError(WindAdError windAdError, String str) {
                }

                @Override
                public final void onSplashAdShow(String str) {
                    if (!TextUtils.equals(str, SigmobTYSplashAdapter.this.b) || SigmobTYSplashAdapter.this.mImpressionListener == null) {
                        return;
                    }
                    SigmobTYSplashAdapter.this.mImpressionListener.onSplashAdShow();
                }

                @Override
                public final void onSplashAdLoadSuccess(String str) {
                    if (TextUtils.equals(str, SigmobTYSplashAdapter.this.b)) {
                        if (!SigmobTYSplashAdapter.this.g || SigmobTYSplashAdapter.this.c == null) {
                            if (SigmobTYSplashAdapter.this.mLoadListener != null) {
                                SigmobTYSplashAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                                return;
                            }
                            return;
                        }
                        SigmobTYInitManager.onC2SBiddingResultWithCache(SigmobTYSplashAdapter.this.c.getEcpm(), SigmobTYSplashAdapter.this.b, SigmobTYSplashAdapter.this.mBiddingListener, SigmobTYSplashAdapter.this.c, null);
                    }
                }

                @Override
                public final void onSplashAdLoadFail(WindAdError windAdError, String str) {
                    if (!TextUtils.equals(str, SigmobTYSplashAdapter.this.b) || windAdError == null) {
                        return;
                    }
                    SigmobTYSplashAdapter.this.a(String.valueOf(windAdError.getErrorCode()), windAdError.getMessage());
                }

                @Override
                public final void onSplashAdClick(String str) {
                    if (!TextUtils.equals(str, SigmobTYSplashAdapter.this.b) || SigmobTYSplashAdapter.this.mImpressionListener == null) {
                        return;
                    }
                    SigmobTYSplashAdapter.this.mImpressionListener.onSplashAdClicked();
                }

                @Override
                public final void onSplashAdClose(String str) {
                    if (TextUtils.equals(str, SigmobTYSplashAdapter.this.b)) {
                        SigmobTYSplashAdapter.m(SigmobTYSplashAdapter.this);
                        if (SigmobTYSplashAdapter.this.mImpressionListener != null) {
                            SigmobTYSplashAdapter.this.mImpressionListener.onSplashAdDismiss();
                        }
                    }
                }

                @Override
                public final void onSplashAdSkip(String str) {
                    if (TextUtils.equals(str, SigmobTYSplashAdapter.this.b)) {
                        SigmobTYSplashAdapter.p(SigmobTYSplashAdapter.this);
                        if (SigmobTYSplashAdapter.this.mImpressionListener != null) {
                            SigmobTYSplashAdapter.this.mImpressionListener.onSplashAdDismiss();
                        }
                    }
                }
            };
            SigmobTYSplashAdapter.this.c = new WindSplashAD(SigmobTYSplashAdapter.this.d, SigmobTYSplashAdapter.this.e);
            if (SigmobTYSplashAdapter.this.g) {
                SigmobTYSplashAdapter.this.c.setCurrency("USD");
                SigmobTYSplashAdapter.this.c.loadAd();
            } else if (!TextUtils.isEmpty(SigmobTYSplashAdapter.this.f)) {
                SigmobTYSplashAdapter.this.c.loadAd(SigmobTYSplashAdapter.this.f);
            } else {
                SigmobTYSplashAdapter.this.c.loadAd();
            }
        }
    }

    private void a() {
        postOnMainThread(new 2());
    }

    @Override
    public void destory() {
        this.c = null;
        this.d = null;
        this.e = null;
    }

    @Override
    public String getNetworkPlacementId() {
        return this.b;
    }

    @Override
    public String getNetworkSDKVersion() {
        return SigmobTYInitManager.getInstance().getNetworkVersion();
    }

    @Override
    public void show(Activity activity, ViewGroup viewGroup) {
        if (this.c != null && isAdReady()) {
            if (this.g) {
                WindSplashAD windSplashAD = this.c;
                windSplashAD.setBidEcpm(SigmobTYInitManager.getEcpmInt(windSplashAD));
            }
            this.c.show(viewGroup);
        }
    }

    @Override
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.b = TYInitMediation.getStringFromMap(map, l.a.c);
        SigmobTYInitManager.getInstance().a(context, map, map2, tYBidRequestInfoListener);
    }

    @Override
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.g = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    private void a(String str, String str2) {
        SigmobTYInitManager.onAdLoadError(str, str2, this.g, this.mBiddingListener, this.mLoadListener);
    }

    static void a(SigmobTYSplashAdapter sigmobTYSplashAdapter) {
        sigmobTYSplashAdapter.postOnMainThread(sigmobTYSplashAdapter.new 2());
    }
}
