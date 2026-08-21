package com.tkay.network.sigmob;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.rewardVideo.WindRewardAdRequest;
import com.sigmob.windad.rewardVideo.WindRewardInfo;
import com.sigmob.windad.rewardVideo.WindRewardVideoAd;
import com.sigmob.windad.rewardVideo.WindRewardVideoAdListener;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.common.c.l;
import com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter;
import com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class SigmobTYRewardedVideoAdapter extends CustomRewardVideoAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f7698a = SigmobTYRewardedVideoAdapter.class.getSimpleName();
    private WindRewardAdRequest b;
    private String c = "";
    private String d;
    private WindRewardVideoAd e;
    private volatile boolean f;

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, Map<String, Object> map2) {
        String stringFromMap = TYInitMediation.getStringFromMap(map, "app_id");
        String stringFromMap2 = TYInitMediation.getStringFromMap(map, "app_key");
        this.c = TYInitMediation.getStringFromMap(map, l.a.c);
        this.d = TYInitMediation.getStringFromMap(map, "payload");
        if (TextUtils.isEmpty(stringFromMap) || TextUtils.isEmpty(stringFromMap2) || TextUtils.isEmpty(this.c)) {
            a("", "app_id、app_key、placement_id could not be null.");
        } else {
            postOnMainThread(new Runnable() { // from class: com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.1
                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        SigmobTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() { // from class: com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.1.1
                            @Override // com.tkay.core.api.MediationInitCallback
                            public final void onSuccess() {
                                SigmobTYRewardedVideoAdapter.a(SigmobTYRewardedVideoAdapter.this);
                            }

                            @Override // com.tkay.core.api.MediationInitCallback
                            public final void onFail(String str) {
                                SigmobTYRewardedVideoAdapter.this.a("", str);
                            }
                        });
                    } catch (Throwable th) {
                        SigmobTYRewardedVideoAdapter.this.a("", th.getMessage());
                    }
                }
            });
        }
    }

    private void a() {
        HashMap map;
        WindRewardVideoAd windRewardVideoAd;
        if (TextUtils.isEmpty(this.mUserData)) {
            map = null;
        } else {
            map = new HashMap(2);
            if (!TextUtils.isEmpty(this.mUserData) && this.mUserData.contains(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME)) {
                this.mUserData = this.mUserData.replace(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME, this.c);
            }
            map.put(TYAdConst.KEY.USER_CUSTOM_DATA, this.mUserData);
        }
        this.b = new WindRewardAdRequest(this.c, this.mUserId, map);
        WindRewardVideoAd windRewardVideoAd2 = new WindRewardVideoAd(this.b);
        this.e = windRewardVideoAd2;
        windRewardVideoAd2.setWindRewardVideoAdListener(new AnonymousClass2());
        if (this.f && (windRewardVideoAd = this.e) != null) {
            windRewardVideoAd.setCurrency("USD");
            this.e.loadAd();
        } else if (!TextUtils.isEmpty(this.d)) {
            this.e.loadAd(this.d);
        } else {
            this.e.loadAd();
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter$2, reason: invalid class name */
    final class AnonymousClass2 implements WindRewardVideoAdListener {
        @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
        public final void onRewardAdPreLoadFail(String str) {
        }

        @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
        public final void onRewardAdPreLoadSuccess(String str) {
        }

        AnonymousClass2() {
        }

        @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
        public final void onRewardAdLoadSuccess(String str) {
            if (TextUtils.equals(str, SigmobTYRewardedVideoAdapter.this.c)) {
                if (!SigmobTYRewardedVideoAdapter.this.f || SigmobTYRewardedVideoAdapter.this.e == null) {
                    if (SigmobTYRewardedVideoAdapter.this.mLoadListener != null) {
                        SigmobTYRewardedVideoAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                        return;
                    }
                    return;
                }
                SigmobTYInitManager.onC2SBiddingResultWithCache(SigmobTYRewardedVideoAdapter.this.e.getEcpm(), SigmobTYRewardedVideoAdapter.this.c, SigmobTYRewardedVideoAdapter.this.mBiddingListener, SigmobTYRewardedVideoAdapter.this.e, null);
            }
        }

        @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
        public final void onRewardAdPlayStart(String str) {
            if (!TextUtils.equals(str, SigmobTYRewardedVideoAdapter.this.c) || SigmobTYRewardedVideoAdapter.this.mImpressionListener == null) {
                return;
            }
            SigmobTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayStart();
        }

        @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
        public final void onRewardAdPlayEnd(String str) {
            if (!TextUtils.equals(str, SigmobTYRewardedVideoAdapter.this.c) || SigmobTYRewardedVideoAdapter.this.mImpressionListener == null) {
                return;
            }
            SigmobTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayEnd();
        }

        @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
        public final void onRewardAdClicked(String str) {
            if (!TextUtils.equals(str, SigmobTYRewardedVideoAdapter.this.c) || SigmobTYRewardedVideoAdapter.this.mImpressionListener == null) {
                return;
            }
            SigmobTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayClicked();
        }

        @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
        public final void onRewardAdClosed(String str) {
            if (!TextUtils.equals(str, SigmobTYRewardedVideoAdapter.this.c) || SigmobTYRewardedVideoAdapter.this.mImpressionListener == null) {
                return;
            }
            SigmobTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdClosed();
        }

        @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
        public final void onRewardAdRewarded(WindRewardInfo windRewardInfo, String str) {
            if (!TextUtils.equals(str, SigmobTYRewardedVideoAdapter.this.c) || SigmobTYRewardedVideoAdapter.this.mImpressionListener == null) {
                return;
            }
            SigmobTYRewardedVideoAdapter.this.mImpressionListener.onReward();
        }

        @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
        public final void onRewardAdLoadError(WindAdError windAdError, String str) {
            if (!TextUtils.equals(str, SigmobTYRewardedVideoAdapter.this.c) || windAdError == null) {
                return;
            }
            SigmobTYRewardedVideoAdapter.this.a(String.valueOf(windAdError.getErrorCode()), windAdError.toString());
        }

        @Override // com.sigmob.windad.rewardVideo.WindRewardVideoAdListener
        public final void onRewardAdPlayError(WindAdError windAdError, String str) {
            if (!TextUtils.equals(str, SigmobTYRewardedVideoAdapter.this.c) || SigmobTYRewardedVideoAdapter.this.mImpressionListener == null) {
                return;
            }
            CustomRewardedVideoEventListener customRewardedVideoEventListener = SigmobTYRewardedVideoAdapter.this.mImpressionListener;
            StringBuilder sb = new StringBuilder();
            sb.append(windAdError.getErrorCode());
            customRewardedVideoEventListener.onRewardedVideoAdPlayFailed(sb.toString(), windAdError.toString());
        }
    }

    @Override // com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter
    public void show(Activity activity) {
        if (this.e == null || activity == null) {
            return;
        }
        try {
            if (isAdReady()) {
                if (this.f) {
                    this.e.setBidEcpm(SigmobTYInitManager.getEcpmInt(this.e));
                }
                this.e.show(new HashMap<>(1));
            }
        } catch (Exception unused) {
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean isAdReady() {
        WindRewardVideoAd windRewardVideoAd = this.e;
        if (windRewardVideoAd != null) {
            return windRewardVideoAd.isReady();
        }
        return false;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return SigmobTYInitManager.getInstance().getNetworkName();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        WindRewardVideoAd windRewardVideoAd = this.e;
        if (windRewardVideoAd != null) {
            windRewardVideoAd.destroy();
            this.e = null;
        }
        this.b = null;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.c;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return SigmobTYInitManager.getInstance().getNetworkVersion();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.c = TYInitMediation.getStringFromMap(map, l.a.c);
        SigmobTYInitManager.getInstance().a(context, map, map2, tYBidRequestInfoListener);
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.f = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str, String str2) {
        SigmobTYInitManager.onAdLoadError(str, str2, this.f, this.mBiddingListener, this.mLoadListener);
    }

    static /* synthetic */ void a(SigmobTYRewardedVideoAdapter sigmobTYRewardedVideoAdapter) {
        HashMap map;
        WindRewardVideoAd windRewardVideoAd;
        if (TextUtils.isEmpty(sigmobTYRewardedVideoAdapter.mUserData)) {
            map = null;
        } else {
            map = new HashMap(2);
            if (!TextUtils.isEmpty(sigmobTYRewardedVideoAdapter.mUserData) && sigmobTYRewardedVideoAdapter.mUserData.contains(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME)) {
                sigmobTYRewardedVideoAdapter.mUserData = sigmobTYRewardedVideoAdapter.mUserData.replace(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME, sigmobTYRewardedVideoAdapter.c);
            }
            map.put(TYAdConst.KEY.USER_CUSTOM_DATA, sigmobTYRewardedVideoAdapter.mUserData);
        }
        sigmobTYRewardedVideoAdapter.b = new WindRewardAdRequest(sigmobTYRewardedVideoAdapter.c, sigmobTYRewardedVideoAdapter.mUserId, map);
        WindRewardVideoAd windRewardVideoAd2 = new WindRewardVideoAd(sigmobTYRewardedVideoAdapter.b);
        sigmobTYRewardedVideoAdapter.e = windRewardVideoAd2;
        windRewardVideoAd2.setWindRewardVideoAdListener(sigmobTYRewardedVideoAdapter.new AnonymousClass2());
        if (sigmobTYRewardedVideoAdapter.f && (windRewardVideoAd = sigmobTYRewardedVideoAdapter.e) != null) {
            windRewardVideoAd.setCurrency("USD");
            sigmobTYRewardedVideoAdapter.e.loadAd();
        } else if (!TextUtils.isEmpty(sigmobTYRewardedVideoAdapter.d)) {
            sigmobTYRewardedVideoAdapter.e.loadAd(sigmobTYRewardedVideoAdapter.d);
        } else {
            sigmobTYRewardedVideoAdapter.e.loadAd();
        }
    }
}
