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

public class SigmobTYInterstitialAdapter extends CustomInterstitialAdapter {
    private static final String c = SigmobTYInterstitialAdapter.class.getSimpleName();
    String b;
    private WindInterstitialAdRequest d;
    private WindRewardAdRequest f;
    private WindInterstitialAd g;
    private WindRewardVideoAd h;
    private volatile boolean i;
    private String e = "";
    boolean a = false;

    @Override
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, Map<String, Object> map2) {
        String stringFromMap = TYInitMediation.getStringFromMap(map, "app_id");
        String stringFromMap2 = TYInitMediation.getStringFromMap(map, "app_key");
        this.e = TYInitMediation.getStringFromMap(map, l.a.c);
        this.b = TYInitMediation.getStringFromMap(map, "payload");
        if (TextUtils.isEmpty(stringFromMap) || TextUtils.isEmpty(stringFromMap2) || TextUtils.isEmpty(this.e)) {
            a("", "app_id、app_key、placement_id could not be null.");
        } else {
            this.a = TYInitMediation.getBooleanFromMap(map2, SigmobTYConst.IS_USE_REWARDED_VIDEO_AS_INTERSTITIAL, false);
            postOnMainThread(new Runnable() {
                @Override
                public final void run() {
                    try {
                        SigmobTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() {
                            @Override
                            public final void onSuccess() {
                                if (SigmobTYInterstitialAdapter.this.a) {
                                    SigmobTYInterstitialAdapter.this.startLoadAdForReward();
                                } else {
                                    SigmobTYInterstitialAdapter.a(SigmobTYInterstitialAdapter.this);
                                }
                            }

                            @Override
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
        windInterstitialAd2.setWindInterstitialAdListener(new 2());
        if (this.i && (windInterstitialAd = this.g) != null) {
            windInterstitialAd.setCurrency("USD");
            this.g.loadAd();
        } else if (!TextUtils.isEmpty(this.b)) {
            this.g.loadAd(this.b);
        } else {
            this.g.loadAd();
        }
    }

    final class 2 implements WindInterstitialAdListener {
        @Override
        public final void onInterstitialAdPreLoadFail(String str) {
        }

        @Override
        public final void onInterstitialAdPreLoadSuccess(String str) {
        }

        2() {
        }

        @Override
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

        @Override
        public final void onInterstitialAdPlayStart(String str) {
            if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                return;
            }
            SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
            SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoStart();
        }

        @Override
        public final void onInterstitialAdPlayEnd(String str) {
            if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                return;
            }
            SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoEnd();
        }

        @Override
        public final void onInterstitialAdClicked(String str) {
            if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                return;
            }
            SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
        }

        @Override
        public final void onInterstitialAdClosed(String str) {
            if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                return;
            }
            SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
        }

        @Override
        public final void onInterstitialAdLoadError(WindAdError windAdError, String str) {
            if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || windAdError == null) {
                return;
            }
            SigmobTYInterstitialAdapter.this.a(String.valueOf(windAdError.getErrorCode()), windAdError.toString());
        }

        @Override
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
        windRewardVideoAd2.setWindRewardVideoAdListener(new WindRewardVideoAdListener() {
            @Override
            public final void onRewardAdPreLoadFail(String str) {
            }

            @Override
            public final void onRewardAdPreLoadSuccess(String str) {
            }

            @Override
            public final void onRewardAdRewarded(WindRewardInfo windRewardInfo, String str) {
            }

            @Override
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

            @Override
            public final void onRewardAdPlayStart(String str) {
                if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                    return;
                }
                SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
                SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoStart();
            }

            @Override
            public final void onRewardAdPlayEnd(String str) {
                if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                    return;
                }
                SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoEnd();
            }

            @Override
            public final void onRewardAdClicked(String str) {
                if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                    return;
                }
                SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
            }

            @Override
            public final void onRewardAdClosed(String str) {
                if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || SigmobTYInterstitialAdapter.this.mImpressListener == null) {
                    return;
                }
                SigmobTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
            }

            @Override
            public final void onRewardAdLoadError(WindAdError windAdError, String str) {
                if (!TextUtils.equals(str, SigmobTYInterstitialAdapter.this.e) || windAdError == null) {
                    return;
                }
                SigmobTYInterstitialAdapter.this.a(String.valueOf(windAdError.getErrorCode()), windAdError.toString());
            }

            @Override
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

    @Override
    public void show(Activity activity) {
        try {
            if (isAdReady()) {
                if (this.a) {
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

    @Override
    public boolean isAdReady() {
        if (this.a) {
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

    @Override
    public String getNetworkName() {
        return SigmobTYInitManager.getInstance().getNetworkName();
    }

    @Override
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

    @Override
    public String getNetworkPlacementId() {
        return this.e;
    }

    @Override
    public String getNetworkSDKVersion() {
        return SigmobTYInitManager.getInstance().getNetworkVersion();
    }

    @Override
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.e = TYInitMediation.getStringFromMap(map, l.a.c);
        SigmobTYInitManager.getInstance().a(context, map, map2, tYBidRequestInfoListener);
    }

    @Override
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.i = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    private void a(String str, String str2) {
        SigmobTYInitManager.onAdLoadError(str, str2, this.i, this.mBiddingListener, this.mLoadListener);
    }

    static void a(SigmobTYInterstitialAdapter sigmobTYInterstitialAdapter) {
        WindInterstitialAd windInterstitialAd;
        sigmobTYInterstitialAdapter.d = new WindInterstitialAdRequest(sigmobTYInterstitialAdapter.e, "", null);
        WindInterstitialAd windInterstitialAd2 = new WindInterstitialAd(sigmobTYInterstitialAdapter.d);
        sigmobTYInterstitialAdapter.g = windInterstitialAd2;
        windInterstitialAd2.setWindInterstitialAdListener(sigmobTYInterstitialAdapter.new 2());
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
