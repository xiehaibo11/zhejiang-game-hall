package com.tkay.network.ks;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.api.KsAdSDK;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsRewardVideoAd;
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
import com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class KSTYRewardedVideoAdapter extends CustomRewardVideoAdapter {
    long a;
    int b;
    boolean d;
    String e;
    double f;
    KsRewardVideoAd g;
    boolean c = false;
    boolean h = false;
    boolean i = false;

    static int i(KSTYRewardedVideoAdapter kSTYRewardedVideoAdapter) {
        kSTYRewardedVideoAdapter.mDismissType = 2;
        return 2;
    }

    static int v(KSTYRewardedVideoAdapter kSTYRewardedVideoAdapter) {
        kSTYRewardedVideoAdapter.mDismissType = 2;
        return 2;
    }

    @Override
    public void show(Activity activity) {
        KsRewardVideoAd ksRewardVideoAd = this.g;
        if (ksRewardVideoAd == null || activity == null) {
            return;
        }
        try {
            ksRewardVideoAd.setRewardAdInteractionListener(new KsRewardVideoAd.RewardAdInteractionListener() {
                @Override
                public final void onExtraRewardVerify(int i) {
                }

                @Override
                public final void onRewardStepVerify(int i, int i2) {
                }

                @Override
                public final void onAdClicked() {
                    if (KSTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        KSTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayClicked();
                    }
                }

                @Override
                public final void onPageDismiss() {
                    if (KSTYRewardedVideoAdapter.this.i) {
                        return;
                    }
                    KSTYRewardedVideoAdapter.this.i = true;
                    if (KSTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        KSTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdClosed();
                    }
                }

                @Override
                public final void onVideoPlayError(int i, int i2) {
                    if (KSTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        KSTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayFailed(String.valueOf(i), "");
                    }
                }

                @Override
                public final void onVideoPlayEnd() {
                    if (KSTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        KSTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayEnd();
                    }
                }

                @Override
                public final void onVideoSkipToEnd(long j) {
                    KSTYRewardedVideoAdapter.i(KSTYRewardedVideoAdapter.this);
                }

                @Override
                public final void onVideoPlayStart() {
                    try {
                        KSTYInitManager.getInstance().a(KSTYRewardedVideoAdapter.this.getTrackingInfo().l(), new WeakReference(KSTYRewardedVideoAdapter.this.g));
                    } catch (Throwable unused) {
                    }
                    if (KSTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        KSTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayStart();
                    }
                }

                @Override
                public final void onRewardVerify() {
                    if (KSTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        KSTYRewardedVideoAdapter.this.mImpressionListener.onReward();
                    }
                }
            });
            this.g.setRewardPlayAgainInteractionListener(new KsRewardVideoAd.RewardAdInteractionListener() {
                @Override
                public final void onExtraRewardVerify(int i) {
                }

                @Override
                public final void onRewardStepVerify(int i, int i2) {
                }

                @Override
                public final void onAdClicked() {
                    if (KSTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        KSTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdAgainPlayClicked();
                    }
                }

                @Override
                public final void onPageDismiss() {
                    if (KSTYRewardedVideoAdapter.this.i) {
                        return;
                    }
                    KSTYRewardedVideoAdapter.this.i = true;
                    if (KSTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        KSTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdClosed();
                    }
                }

                @Override
                public final void onVideoPlayError(int i, int i2) {
                    if (KSTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        KSTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdAgainPlayFailed(String.valueOf(i), "Again AD, Callback VideoError");
                    }
                }

                @Override
                public final void onVideoPlayEnd() {
                    if (KSTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        KSTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdAgainPlayEnd();
                    }
                }

                @Override
                public final void onVideoSkipToEnd(long j) {
                    KSTYRewardedVideoAdapter.v(KSTYRewardedVideoAdapter.this);
                }

                @Override
                public final void onVideoPlayStart() {
                    if (KSTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        KSTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdAgainPlayStart();
                    }
                }

                @Override
                public final void onRewardVerify() {
                    if (KSTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        KSTYRewardedVideoAdapter.this.mImpressionListener.onAgainReward();
                    }
                }
            });
            KsVideoPlayConfig ksVideoPlayConfigBuild = new KsVideoPlayConfig.Builder().showLandscape(this.b == 2).skipThirtySecond(this.c).videoSoundEnable(this.d).build();
            this.i = false;
            this.g.showRewardVideoAd(activity, ksVideoPlayConfigBuild);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public boolean isAdReady() {
        KsRewardVideoAd ksRewardVideoAd = this.g;
        return ksRewardVideoAd != null && ksRewardVideoAd.isAdEnable();
    }

    @Override
    public String getNetworkName() {
        return KSTYInitManager.getInstance().getNetworkName();
    }

    @Override
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        if (!a(map, map2)) {
            notifyATLoadFail("", "kuaishou app_id or position_id is empty.");
        } else {
            KSTYInitManager.getInstance().initSDK(context.getApplicationContext(), map, new MediationInitCallback() {
                @Override
                public final void onSuccess() {
                    KSTYRewardedVideoAdapter.A(KSTYRewardedVideoAdapter.this);
                }

                @Override
                public final void onFail(String str) {
                    KSTYRewardedVideoAdapter.this.notifyATLoadFail("", str);
                }
            });
        }
    }

    @Override
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.h = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    private void a() {
        HashMap map = new HashMap();
        map.put("thirdUserId", this.mUserId);
        if (!TextUtils.isEmpty(this.mUserData) && this.mUserData.contains(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME)) {
            String str = this.mUserData;
            StringBuilder sb = new StringBuilder();
            sb.append(this.a);
            this.mUserData = str.replace(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME, sb.toString());
        }
        map.put("extraData", this.mUserData);
        KsScene.Builder builderRewardCallbackExtraData = new KsScene.Builder(this.a).adNum(1).screenOrientation(this.b == 2 ? 2 : 1).rewardCallbackExtraData(map);
        if (!TextUtils.isEmpty(this.e)) {
            builderRewardCallbackExtraData.setBidResponseV2(this.e);
        }
        KsAdSDK.getLoadManager().loadRewardVideoAd(builderRewardCallbackExtraData.build(), new 4());
    }

    final class 4 implements KsLoadManager.RewardVideoAdListener {
        4() {
        }

        @Override
        public final void onError(int i, String str) {
            KSTYRewardedVideoAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override
        public final void onRewardVideoResult(List<KsRewardVideoAd> list) {
            if (KSTYRewardedVideoAdapter.this.mLoadListener != null) {
                KSTYRewardedVideoAdapter.this.mLoadListener.onAdDataLoaded();
            }
        }

        @Override
        public final void onRewardVideoAdLoad(List<KsRewardVideoAd> list) {
            KSTYRewardedVideoAdapter.this.g = (list == null || list.size() <= 0) ? null : list.get(0);
            if (KSTYRewardedVideoAdapter.this.g == null) {
                KSTYRewardedVideoAdapter.this.notifyATLoadFail("", "KuaiShou: List<KsRewardVideoAd> is empty");
                return;
            }
            if (!KSTYRewardedVideoAdapter.this.h) {
                if (KSTYRewardedVideoAdapter.this.mLoadListener != null) {
                    KSTYRewardedVideoAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            } else if (KSTYRewardedVideoAdapter.this.mBiddingListener != null) {
                double ecpm = 0.0d;
                try {
                    ecpm = KSTYRewardedVideoAdapter.this.g.getECPM();
                } catch (Throwable th) {
                    th.printStackTrace();
                }
                KSTYBiddingNotice kSTYBiddingNotice = new KSTYBiddingNotice(KSTYRewardedVideoAdapter.this.g);
                TYBiddingListener tYBiddingListener = KSTYRewardedVideoAdapter.this.mBiddingListener;
                StringBuilder sb = new StringBuilder();
                sb.append(System.currentTimeMillis());
                tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(ecpm, sb.toString(), kSTYBiddingNotice, TYAdConst.CURRENCY.RMB_CENT), null);
            }
        }
    }

    @Override
    public void destory() {
        KsRewardVideoAd ksRewardVideoAd = this.g;
        if (ksRewardVideoAd != null) {
            ksRewardVideoAd.setRewardAdInteractionListener(null);
            this.g.setRewardPlayAgainInteractionListener(null);
            this.g = null;
        }
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

    private boolean a(Map<String, Object> map, Map<String, Object> map2) {
        String stringFromMap = TYInitMediation.getStringFromMap(map, "app_id");
        String stringFromMap2 = TYInitMediation.getStringFromMap(map, "position_id");
        if (TextUtils.isEmpty(stringFromMap) || TextUtils.isEmpty(stringFromMap2)) {
            return false;
        }
        try {
            this.a = Long.parseLong(stringFromMap2);
        } catch (NumberFormatException unused) {
        }
        if (map.containsKey("orientation")) {
            this.b = TYInitMediation.getIntFromMap(map, "orientation");
        }
        this.d = true;
        if (map.containsKey("video_muted")) {
            this.d = TextUtils.equals("0", TYInitMediation.getStringFromMap(map, "video_muted"));
        }
        if (map2.containsKey(KSTYConst.REWARDEDVIDEO_SKIP_AFTER_THIRTY_SECOND)) {
            this.c = TYInitMediation.getBooleanFromMap(map2, KSTYConst.REWARDEDVIDEO_SKIP_AFTER_THIRTY_SECOND);
        }
        if (map.containsKey(f.k.o)) {
            this.f = TYInitMediation.getDoubleFromMap(map, f.k.o);
        }
        if (map.containsKey("payload")) {
            this.e = KSTYInitManager.getInstance().getPayloadInfo(TYInitMediation.getStringFromMap(map, "payload"), this.f);
        }
        return true;
    }

    @Override
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.a = TYInitMediation.getLongFromMap(map, "position_id");
        KSTYInitManager.getInstance().a(context, map, map2, tYBidRequestInfoListener);
    }

    static void A(KSTYRewardedVideoAdapter kSTYRewardedVideoAdapter) {
        HashMap map = new HashMap();
        map.put("thirdUserId", kSTYRewardedVideoAdapter.mUserId);
        if (!TextUtils.isEmpty(kSTYRewardedVideoAdapter.mUserData) && kSTYRewardedVideoAdapter.mUserData.contains(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME)) {
            String str = kSTYRewardedVideoAdapter.mUserData;
            StringBuilder sb = new StringBuilder();
            sb.append(kSTYRewardedVideoAdapter.a);
            kSTYRewardedVideoAdapter.mUserData = str.replace(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME, sb.toString());
        }
        map.put("extraData", kSTYRewardedVideoAdapter.mUserData);
        KsScene.Builder builderRewardCallbackExtraData = new KsScene.Builder(kSTYRewardedVideoAdapter.a).adNum(1).screenOrientation(kSTYRewardedVideoAdapter.b == 2 ? 2 : 1).rewardCallbackExtraData(map);
        if (!TextUtils.isEmpty(kSTYRewardedVideoAdapter.e)) {
            builderRewardCallbackExtraData.setBidResponseV2(kSTYRewardedVideoAdapter.e);
        }
        KsAdSDK.getLoadManager().loadRewardVideoAd(builderRewardCallbackExtraData.build(), kSTYRewardedVideoAdapter.new 4());
    }
}
