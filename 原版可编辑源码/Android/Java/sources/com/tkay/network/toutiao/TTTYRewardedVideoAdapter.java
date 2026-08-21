package com.tkay.network.toutiao;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Log;
import com.bykv.vk.openvk.TTAppDownloadListener;
import com.bykv.vk.openvk.TTRdVideoObject;
import com.bykv.vk.openvk.TTVfNative;
import com.bykv.vk.openvk.TTVfSdk;
import com.tkay.china.api.CustomAdapterDownloadListener;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter;
import java.util.HashMap;
import java.util.Map;

public class TTTYRewardedVideoAdapter extends CustomRewardVideoAdapter {
    boolean b;
    private TTRdVideoObject i;
    private Map<String, Object> j;
    private final String h = getClass().getSimpleName();
    String a = "";
    String c = "";
    boolean d = false;
    TTVfNative.RdVideoVfListener e = new TTVfNative.RdVideoVfListener() {
        @Override
        public final void onRdVideoCached() {
        }

        @Override
        public final void onError(int i, String str) {
            TTTYRewardedVideoAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override
        public final void onRdVideoCached(TTRdVideoObject tTRdVideoObject) {
            TTTYRewardedVideoAdapter.this.i = tTRdVideoObject;
            try {
                Map<String, Object> mediaExtraInfo = TTTYRewardedVideoAdapter.this.i.getMediaExtraInfo();
                if (mediaExtraInfo != null) {
                    if (TTTYRewardedVideoAdapter.this.j == null) {
                        TTTYRewardedVideoAdapter.this.j = new HashMap(3);
                    }
                    TTTYRewardedVideoAdapter.this.j.putAll(mediaExtraInfo);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
            if (TTTYRewardedVideoAdapter.this.d) {
                try {
                    TTTYInitManager.getInstance().a(TTTYRewardedVideoAdapter.this.j, TTTYRewardedVideoAdapter.this.i, TTTYRewardedVideoAdapter.this.mBiddingListener);
                    return;
                } catch (Throwable unused) {
                    return;
                }
            }
            try {
                if (TTTYRewardedVideoAdapter.this.mLoadListener != null) {
                    TTTYRewardedVideoAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            } catch (Throwable th2) {
                th2.printStackTrace();
            }
        }

        @Override
        public final void onRdVideoVrLoad(TTRdVideoObject tTRdVideoObject) {
            try {
                if (TTTYRewardedVideoAdapter.this.mLoadListener != null) {
                    TTTYRewardedVideoAdapter.this.mLoadListener.onAdDataLoaded();
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    };
    TTRdVideoObject.RdVrInteractionListener f = new TTRdVideoObject.RdVrInteractionListener() {
        @Override
        public final void onRdVerify(boolean z, int i, String str, int i2, String str2) {
        }

        @Override
        public final void onShow() {
            if (TTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                TTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayStart();
            }
        }

        @Override
        public final void onVideoBarClick() {
            if (TTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                TTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayClicked();
            }
        }

        @Override
        public final void onClose() {
            if (TTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                TTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdClosed();
            }
        }

        @Override
        public final void onVideoComplete() {
            if (TTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                TTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayEnd();
            }
        }

        @Override
        public final void onSkippedVideo() {
            TTTYRewardedVideoAdapter.o(TTTYRewardedVideoAdapter.this);
        }

        @Override
        public final void onVideoError() {
            if (TTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                TTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayFailed("", "Callback VideoError");
            }
        }

        @Override
        public final void onRewardArrived(boolean z, int i, Bundle bundle) {
            Log.i(TTTYRewardedVideoAdapter.this.h, "onRewardArrived(), rewardVerify: ".concat(String.valueOf(z)));
            if (!z || TTTYRewardedVideoAdapter.this.b || TTTYRewardedVideoAdapter.this.mImpressionListener == null) {
                return;
            }
            TTTYRewardedVideoAdapter.this.b = true;
            TTTYRewardedVideoAdapter.this.mImpressionListener.onReward();
        }
    };
    private boolean k = false;
    TTAppDownloadListener g = new TTAppDownloadListener() {
        @Override
        public final void onIdle() {
        }

        @Override
        public final void onDownloadActive(long j, long j2, String str, String str2) {
            if (TTTYRewardedVideoAdapter.this.k) {
                if (TTTYRewardedVideoAdapter.this.mDownloadListener == null || !(TTTYRewardedVideoAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYRewardedVideoAdapter.this.mDownloadListener).onDownloadUpdate(j, j2, str, str2);
                return;
            }
            TTTYRewardedVideoAdapter.L(TTTYRewardedVideoAdapter.this);
            if (TTTYRewardedVideoAdapter.this.mDownloadListener == null || !(TTTYRewardedVideoAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYRewardedVideoAdapter.this.mDownloadListener).onDownloadStart(j, j2, str, str2);
        }

        @Override
        public final void onDownloadPaused(long j, long j2, String str, String str2) {
            if (TTTYRewardedVideoAdapter.this.mDownloadListener == null || !(TTTYRewardedVideoAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYRewardedVideoAdapter.this.mDownloadListener).onDownloadPause(j, j2, str, str2);
        }

        @Override
        public final void onDownloadFailed(long j, long j2, String str, String str2) {
            if (TTTYRewardedVideoAdapter.this.mDownloadListener == null || !(TTTYRewardedVideoAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYRewardedVideoAdapter.this.mDownloadListener).onDownloadFail(j, j2, str, str2);
        }

        @Override
        public final void onDownloadFinished(long j, String str, String str2) {
            if (TTTYRewardedVideoAdapter.this.mDownloadListener == null || !(TTTYRewardedVideoAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYRewardedVideoAdapter.this.mDownloadListener).onDownloadFinish(j, str, str2);
        }

        @Override
        public final void onInstalled(String str, String str2) {
            if (TTTYRewardedVideoAdapter.this.mDownloadListener == null || !(TTTYRewardedVideoAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYRewardedVideoAdapter.this.mDownloadListener).onInstalled(str, str2);
        }
    };

    static boolean L(TTTYRewardedVideoAdapter tTTYRewardedVideoAdapter) {
        tTTYRewardedVideoAdapter.k = true;
        return true;
    }

    static int o(TTTYRewardedVideoAdapter tTTYRewardedVideoAdapter) {
        tTTYRewardedVideoAdapter.mDismissType = 2;
        return 2;
    }

    private void a(Context context, Map<String, Object> map, Map<String, Object> map2) {
        runOnNetworkRequestThread(new 3(context.getApplicationContext(), map, map2));
    }

    final class 3 implements Runnable {
        final Context a;
        final Map b;
        final Map c;

        3(Context context, Map map, Map map2) {
            this.a = context;
            this.b = map;
            this.c = map2;
        }

        @Override
        public final void run() {
            TTVfNative tTVfNativeCreateVfNative = TTVfSdk.getVfManager().createVfNative(this.a);
            TTTYCustomAdSlotBuilder tTTYCustomAdSlotBuilder = new TTTYCustomAdSlotBuilder(TTTYRewardedVideoAdapter.this.a, this.b, this.c);
            int i = this.a.getResources().getDisplayMetrics().widthPixels;
            int i2 = this.a.getResources().getDisplayMetrics().heightPixels;
            try {
                String string = this.b.get("personalized_template").toString();
                if (!TextUtils.isEmpty(string) && TextUtils.equals("1", string)) {
                    tTTYCustomAdSlotBuilder.setExpressViewAcceptedSize(TTTYRewardedVideoAdapter.a(this.a, i), TTTYRewardedVideoAdapter.a(this.a, i2));
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
            Map map = this.c;
            if (map != null) {
                try {
                    tTTYCustomAdSlotBuilder.setSupportDeepLink(((Boolean) map.get(TYAdConst.KEY.AD_IS_SUPPORT_DEEP_LINK)).booleanValue());
                } catch (Exception unused) {
                }
                try {
                    int i3 = Integer.parseInt(this.c.get(TYAdConst.KEY.AD_ORIENTATION).toString());
                    if (i3 == 1) {
                        tTTYCustomAdSlotBuilder.setOrientation(1);
                    } else if (i3 == 2) {
                        tTTYCustomAdSlotBuilder.setOrientation(2);
                    }
                } catch (Exception unused2) {
                }
            }
            if (!TextUtils.isEmpty(TTTYRewardedVideoAdapter.this.mUserId)) {
                tTTYCustomAdSlotBuilder.setUserID(TTTYRewardedVideoAdapter.this.mUserId);
            }
            if (!TextUtils.isEmpty(TTTYRewardedVideoAdapter.this.mUserData)) {
                if (TTTYRewardedVideoAdapter.this.mUserData.contains(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME)) {
                    TTTYRewardedVideoAdapter tTTYRewardedVideoAdapter = TTTYRewardedVideoAdapter.this;
                    tTTYRewardedVideoAdapter.mUserData = tTTYRewardedVideoAdapter.mUserData.replace(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME, TTTYRewardedVideoAdapter.this.a);
                }
                tTTYCustomAdSlotBuilder.setMediaExtra(TTTYRewardedVideoAdapter.this.mUserData);
            }
            tTTYCustomAdSlotBuilder.setAdCount(1);
            tTVfNativeCreateVfNative.loadRdVideoVr(tTTYCustomAdSlotBuilder.build(), TTTYRewardedVideoAdapter.this.e);
        }
    }

    @Override
    public boolean isAdReady() {
        return this.i != null;
    }

    @Override
    public void show(Activity activity) {
        TTRdVideoObject tTRdVideoObject;
        if (activity == null || (tTRdVideoObject = this.i) == null) {
            return;
        }
        tTRdVideoObject.setRdVrInteractionListener(this.f);
        this.i.setDownloadListener(this.g);
        this.i.setRewardPlayAgainInteractionListener(new TTRdVideoObject.RdVrInteractionListener() {
            @Override
            public final void onClose() {
            }

            @Override
            public final void onRdVerify(boolean z, int i, String str, int i2, String str2) {
            }

            @Override
            public final void onSkippedVideo() {
            }

            @Override
            public final void onShow() {
                TTTYRewardedVideoAdapter.this.b = false;
                try {
                    Map<String, Object> mediaExtraInfo = TTTYRewardedVideoAdapter.this.i.getMediaExtraInfo();
                    if (mediaExtraInfo != null) {
                        if (TTTYRewardedVideoAdapter.this.j == null) {
                            TTTYRewardedVideoAdapter.this.j = new HashMap(3);
                        }
                        TTTYRewardedVideoAdapter.this.j.clear();
                        TTTYRewardedVideoAdapter.this.j.putAll(mediaExtraInfo);
                    }
                } catch (Throwable th) {
                    th.printStackTrace();
                }
                if (TTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    TTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdAgainPlayStart();
                }
            }

            @Override
            public final void onVideoBarClick() {
                if (TTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    TTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdAgainPlayClicked();
                }
            }

            @Override
            public final void onVideoComplete() {
                if (TTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    TTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdAgainPlayEnd();
                }
            }

            @Override
            public final void onVideoError() {
                if (TTTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    TTTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdAgainPlayFailed("", "Again AD, Callback VideoError");
                }
            }

            @Override
            public final void onRewardArrived(boolean z, int i, Bundle bundle) {
                Log.i(TTTYRewardedVideoAdapter.this.h, "Again AD, onRewardArrived(), rewardVerify: ".concat(String.valueOf(z)));
                if (!z || TTTYRewardedVideoAdapter.this.b || TTTYRewardedVideoAdapter.this.mImpressionListener == null) {
                    return;
                }
                TTTYRewardedVideoAdapter.this.b = true;
                TTTYRewardedVideoAdapter.this.mImpressionListener.onAgainReward();
            }
        });
        this.i.showRdVideoVr(activity);
    }

    @Override
    public String getNetworkName() {
        return TTTYInitManager.getInstance().getNetworkName();
    }

    @Override
    public void destory() {
        TTRdVideoObject tTRdVideoObject = this.i;
        if (tTRdVideoObject != null) {
            tTRdVideoObject.setRdVrInteractionListener(null);
            this.i.setRewardPlayAgainInteractionListener(null);
            this.i = null;
        }
        this.e = null;
        this.f = null;
    }

    @Override
    public String getNetworkPlacementId() {
        return this.a;
    }

    @Override
    public String getNetworkSDKVersion() {
        return TTTYInitManager.getInstance().getNetworkVersion();
    }

    private static int b(Context context, float f) {
        float f2 = context.getResources().getDisplayMetrics().density;
        if (f2 <= 0.0f) {
            f2 = 1.0f;
        }
        return (int) ((f / f2) + 0.5f);
    }

    @Override
    public Map<String, Object> getNetworkInfoMap() {
        return this.j;
    }

    @Override
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.d = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    private boolean a(Map<String, Object> map) {
        String str = (String) map.get("app_id");
        this.a = (String) map.get("slot_id");
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(this.a)) {
            return false;
        }
        if (!map.containsKey("payload")) {
            return true;
        }
        this.c = map.get("payload").toString();
        return true;
    }

    @Override
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, final Map<String, Object> map2) {
        boolean z;
        String str = (String) map.get("app_id");
        this.a = (String) map.get("slot_id");
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(this.a)) {
            z = false;
        } else {
            if (map.containsKey("payload")) {
                this.c = map.get("payload").toString();
            }
            z = true;
        }
        if (!z) {
            notifyATLoadFail("", "app_id or slot_id is empty!");
        } else {
            TTTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() {
                @Override
                public final void onSuccess() {
                    try {
                        TTTYRewardedVideoAdapter.a(TTTYRewardedVideoAdapter.this, context, map, map2);
                    } catch (Throwable th) {
                        TTTYRewardedVideoAdapter.this.notifyATLoadFail("", th.getMessage());
                    }
                }

                @Override
                public final void onFail(String str2) {
                    TTTYRewardedVideoAdapter.this.notifyATLoadFail("", str2);
                }
            });
        }
    }

    static int a(Context context, float f) {
        float f2 = context.getResources().getDisplayMetrics().density;
        if (f2 <= 0.0f) {
            f2 = 1.0f;
        }
        return (int) ((f / f2) + 0.5f);
    }

    static void a(TTTYRewardedVideoAdapter tTTYRewardedVideoAdapter, Context context, Map map, Map map2) {
        tTTYRewardedVideoAdapter.runOnNetworkRequestThread(tTTYRewardedVideoAdapter.new 3(context.getApplicationContext(), map, map2));
    }
}
