package com.tkay.network.sigmob;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.interstitial.WindInterstitialAd;
import com.sigmob.windad.interstitial.WindInterstitialAdListener;
import com.sigmob.windad.interstitial.WindInterstitialAdRequest;
import com.sigmob.windad.rewardVideo.WindRewardAdRequest;
import com.sigmob.windad.rewardVideo.WindRewardInfo;
import com.sigmob.windad.rewardVideo.WindRewardVideoAd;
import com.sigmob.windad.rewardVideo.WindRewardVideoAdListener;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.common.c.l;
import com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter;
import com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class SigmobTYInterstitialAdapter extends CustomInterstitialAdapter {
    private static final String c = SigmobTYInterstitialAdapter.class.getSimpleName();
    String b;
    private WindInterstitialAdRequest d;
    private WindRewardAdRequest f;
    private WindInterstitialAd g;
    private WindRewardVideoAd h;
    private volatile boolean i;
    private String e = "";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    boolean f7688a = false;

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, Map<String, Object> map2) {
        String stringFromMap = TYInitMediation.getStringFromMap(map, "app_id");
        String stringFromMap2 = TYInitMediation.getStringFromMap(map, "app_key");
        this.e = TYInitMediation.getStringFromMap(map, l.a.c);
        this.b = TYInitMediation.getStringFromMap(map, "payload");
        if (TextUtils.isEmpty(stringFromMap) || TextUtils.isEmpty(stringFromMap2) || TextUtils.isEmpty(this.e)) {
            a("", "app_id、app_key、placement_id could not be null.");
        } else {
            this.f7688a = TYInitMediation.getBooleanFromMap(map2, SigmobTYConst.IS_USE_REWARDED_VIDEO_AS_INTERSTITIAL, false);
            postOnMainThread(new Runnable() { // from class: com.tkay.network.sigmob.SigmobTYInterstitialAdapter.1
                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        SigmobTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() { // from class: com.tkay.network.sigmob.SigmobTYInterstitialAdapter.1.1
                            @Override // com.tkay.core.api.MediationInitCallback
                            public final void onSuccess() {
                                if (SigmobTYInterstitialAdapter.this.f7688a) {
                                    SigmobTYInterstitialAdapter.this.startLoadAdForReward();
                                } else {
                                    SigmobTYInterstitialAdapter.a(SigmobTYInterstitialAdapter.this);
                                }
                            }

                            @Override // com.tkay.core.api.MediationInitCallback
                            public final void onFail(String str) {
                                SigmobTYInterstitialAdapter.this.a("", str);
                            }
                        });
                    } catch (Throwable th) {
                        SigmobTYInterstitialAdapter.this.a("", th.getMessage());
                    }
                }
            });
        }
    }

    private void a() {
        WindInterstitialAd windInterstitialAd;
        this.d = new WindInterstitialAdRequest(this.e, "", null);
        WindInterstitialAd windInterstitialAd2 = new WindInterstitialAd(this.d);
        this.g = windInterstitialAd2;
        windInterstitialAd2.setWindInterstitialAdListener(new AnonymousClass2());
        if (this.i && (windInterstitialAd = this.g) != null) {
            windInterstitialAd.setCurrency("USD");
            this.g.loadAd();
        } else if (!TextUtils.isEmpty(this.b)) {
            this.g.loadAd(this.b);
        } else {
            this.g.loadAd();
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.sigmob.SigmobTYInterstitialAdapter$2, reason: invalid class name */
    final class AnonymousClass2 implements WindInterstitialAdListener {
        @Override // com.sigmob.windad.interstitial.WindInterstitialAdListener
        public final void onInterstitialAdPreLoadFail(String str) {
        }

        @Override // com.sigmob.windad.interstitial.WindInterstitialAdListener
        public final void onInterstitialAdPreLoadSuccess(String str) {
        }

        AnonymousClass2() {
        }

        @Override // com.sigmob.windad.interstitial.WindInterstitialAdListener
        public final void onInterstitialAdLoadSuccess(String str) {
            if (TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e)) {
                if (!SigmobTYInterstitialAdapter.this.i || SigmobTYInterstitialAdapter.this.g == null) {
                    if (SigmobTYInterstitialAdapter.this.mLoadListener != null) {
                        SigmobTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                        return;
                    }
                    return;
                }
                SigmobTYInitManager.onC2SBiddingResultWithCache(SigmobTYInterstitialAdapter.this.g.getEcpm(), SigmobTYInterstitialAdapter.this.e, SigmobTYInterstitialAdapter.this.mBiddingListener, SigmobTYInterstitialAdapter.this.g, null);
            }
        }

        @Override // com.sigmob.windad.interstitial.WindInterstitialAdListener
        public final void onInterstitialAdPlayStart(String str) {
            if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                return;
            }
            SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
            SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoStart();
        }

        @Override // com.sigmob.windad.interstitial.WindInterstitialAdListener
        public final void onInterstitialAdPlayEnd(String str) {
            if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                return;
            }
            SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoEnd();
        }

        @Override // com.sigmob.windad.interstitial.WindInterstitialAdListener
        public final void onInterstitialAdClicked(String str) {
            if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                return;
            }
            SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
        }

        @Override // com.sigmob.windad.interstitial.WindInterstitialAdListener
        public final void onInterstitialAdClosed(String str) {
            if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                return;
            }
            SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
        }

        @Override // com.sigmob.windad.interstitial.WindInterstitialAdListener
        public final void onInterstitialAdLoadError(WindAdError windAdError, String str) {
            if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || windAdError == null) {
                return;
            }
            SigmobTYInterstitialAdapter.this.a(String.valueOf(windAdError.getErrorCode()), windAdError.toString());
        }

        @Override // com.sigmob.windad.interstitial.WindInterstitialAdListener
        public final void onInterstitialAdPlayError(WindAdError windAdError, String str) {
            if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                return;
            }
            CustomInterstitialEventListener customInterstitialEventListener = SigmobTYInterstitialAdapter.this.mImpressListener;
            StringBuilder sb = new StringBuilder();
            sb.append(windAdError.getErrorCode());
            customInterstitialEventListener.onInterstitialAdVideoError(sb.toString(), windAdError.toString());
        }
    }

    public void startLoadAdForReward() {
        WindRewardVideoAd windRewardVideoAd;
        this.f = new WindRewardAdRequest(this.e, "", null);
        WindRewardVideoAd windRewardVideoAd2 = new WindRewardVideoAd(this.f);
        this.h = windRewardVideoAd2;
        windRewardVideoAd2.setWindRewardVideoAdListener(new WindRewardVideoAdListener() { // from class: com.tkay.network.sigmob.SigmobTYInterstitialAdapter.3
            @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
            public final void onRewardAdPreLoadFail(String str) {
            }

            @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
            public final void onRewardAdPreLoadSuccess(String str) {
            }

            @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
            public final void onRewardAdRewarded(WindRewardInfo windRewardInfo, String str) {
            }

            @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
            public final void onRewardAdLoadSuccess(String str) {
                if (TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e)) {
                    if (!SigmobTYInterstitialAdapter.this.i || SigmobTYInterstitialAdapter.this.h == null) {
                        if (SigmobTYInterstitialAdapter.this.mLoadListener != null) {
                            SigmobTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                            return;
                        }
                        return;
                    }
                    SigmobTYInitManager.onC2SBiddingResultWithCache(SigmobTYInterstitialAdapter.this.h.getEcpm(), SigmobTYInterstitialAdapter.this.e, SigmobTYInterstitialAdapter.this.mBiddingListener, SigmobTYInterstitialAdapter.this.h, null);
                }
            }

            @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
            public final void onRewardAdPlayStart(String str) {
                if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                    return;
                }
                SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
                SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoStart();
            }

            @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
            public final void onRewardAdPlayEnd(String str) {
                if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                    return;
                }
                SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoEnd();
            }

            @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
            public final void onRewardAdClicked(String str) {
                if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                    return;
                }
                SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
            }

            @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
            public final void onRewardAdClosed(String str) {
                if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                    return;
                }
                SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
            }

            @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
            public final void onRewardAdLoadError(WindAdError windAdError, String str) {
                if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || windAdError == null) {
                    return;
                }
                SigmobTYInterstitialAdapter.this.a(String.valueOf(windAdError.getErrorCode()), windAdError.toString());
            }

            @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
            public final void onRewardAdPlayError(WindAdError windAdError, String str) {
                if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                    return;
                }
                CustomInterstitialEventListener customInterstitialEventListener = SigmobTYInterstitialAdapter.this.mImpressListener;
                StringBuilder sb = new StringBuilder();
                sb.append(windAdError.getErrorCode());
                customInterstitialEventListener.onInterstitialAdVideoError(sb.toString(), windAdError.toString());
            }
        });
        if (this.i && (windRewardVideoAd = this.h) != null) {
            windRewardVideoAd.setCurrency("USD");
            this.h.loadAd();
        } else if (!TextUtils.isEmpty(this.b)) {
            this.h.loadAd(this.b);
        } else {
            this.h.loadAd();
        }
    }

    @Override // com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter
    public void show(Activity activity) {
        try {
            if (isAdReady()) {
                if (this.f7688a) {
                    if (this.i) {
                        this.h.setBidEcpm(SigmobTYInitManager.getEcpmInt(this.h));
                    }
                    this.h.show(new HashMap<>(1));
                } else {
                    if (this.i) {
                        this.g.setBidEcpm(SigmobTYInitManager.getEcpmInt(this.g));
                    }
                    this.g.show(new HashMap<>(1));
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean isAdReady() {
        if (this.f7688a) {
            WindRewardVideoAd windRewardVideoAd = this.h;
            if (windRewardVideoAd != null) {
                return windRewardVideoAd.isReady();
            }
            return false;
        }
        WindInterstitialAd windInterstitialAd = this.g;
        if (windInterstitialAd != null) {
            return windInterstitialAd.isReady();
        }
        return false;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return SigmobTYInitManager.getInstance().getNetworkName();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        this.f = null;
        this.d = null;
        WindRewardVideoAd windRewardVideoAd = this.h;
        if (windRewardVideoAd != null) {
            windRewardVideoAd.destroy();
            this.h = null;
        }
        WindInterstitialAd windInterstitialAd = this.g;
        if (windInterstitialAd != null) {
            windInterstitialAd.destroy();
            this.g = null;
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.e;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return SigmobTYInitManager.getInstance().getNetworkVersion();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.e = TYInitMediation.getStringFromMap(map, l.a.c);
        SigmobTYInitManager.getInstance().a(context, map, map2, tYBidRequestInfoListener);
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.i = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str, String str2) {
        SigmobTYInitManager.onAdLoadError(str, str2, this.i, this.mBiddingListener, this.mLoadListener);
    }

    static /* synthetic */ void a(SigmobTYInterstitialAdapter sigmobTYInterstitialAdapter) {
        WindInterstitialAd windInterstitialAd;
        sigmobTYInterstitialAdapter.d = new WindInterstitialAdRequest(sigmobTYInterstitialAdapter.e, "", null);
        WindInterstitialAd windInterstitialAd2 = new WindInterstitialAd(sigmobTYInterstitialAdapter.d);
        sigmobTYInterstitialAdapter.g = windInterstitialAd2;
        windInterstitialAd2.setWindInterstitialAdListener(sigmobTYInterstitialAdapter.new AnonymousClass2());
        if (sigmobTYInterstitialAdapter.i && (windInterstitialAd = sigmobTYInterstitialAdapter.g) != null) {
            windInterstitialAd.setCurrency("USD");
            sigmobTYInterstitialAdapter.g.loadAd();
        } else if (!TextUtils.isEmpty(sigmobTYInterstitialAdapter.b)) {
            sigmobTYInterstitialAdapter.g.loadAd(sigmobTYInterstitialAdapter.b);
        } else {
            sigmobTYInterstitialAdapter.g.loadAd();
        }
    }
}
