package com.tkay.network.toutiao;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import android.view.View;
import com.bykv.vk.openvk.TTAppDownloadListener;
import com.bykv.vk.openvk.TTFullVideoObject;
import com.bykv.vk.openvk.TTInteractionVi;
import com.bykv.vk.openvk.TTNtExpressObject;
import com.bykv.vk.openvk.TTVfManager;
import com.bykv.vk.openvk.TTVfNative;
import com.bykv.vk.openvk.TTVfSdk;
import com.mbridge.msdk.MBridgeConstans;
import com.tkay.china.api.CustomAdapterDownloadListener;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter;
import com.xiaomi.mipush.sdk.Constants;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class TTTYInterstitialAdapter extends CustomInterstitialAdapter {
    private TTInteractionVi q;
    private TTFullVideoObject r;
    private TTNtExpressObject s;
    private Map<String, Object> t;
    private final String p = getClass().getSimpleName();
    String a = "";
    int b = 0;
    int c = 0;
    String d = "";
    String e = "1:1";
    int f = 1;
    String g = "";
    boolean h = false;
    TTVfNative.InteractionViListener i = new TTVfNative.InteractionViListener() {
        @Override
        public final void onError(int i, String str) {
            TTTYInterstitialAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override
        public final void onInteractionViLoad(TTInteractionVi tTInteractionVi) {
            TTTYInterstitialAdapter.this.q = tTInteractionVi;
            try {
                Map<String, Object> mediaExtraInfo = TTTYInterstitialAdapter.this.q.getMediaExtraInfo();
                if (mediaExtraInfo != null) {
                    if (TTTYInterstitialAdapter.this.t == null) {
                        TTTYInterstitialAdapter.this.t = new HashMap(3);
                    }
                    TTTYInterstitialAdapter.this.t.putAll(mediaExtraInfo);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
            if (TTTYInterstitialAdapter.this.h) {
                try {
                    TTTYInitManager.getInstance().a(TTTYInterstitialAdapter.this.t, TTTYInterstitialAdapter.this.q, TTTYInterstitialAdapter.this.mBiddingListener);
                    return;
                } catch (Throwable unused) {
                    return;
                }
            }
            try {
                if (TTTYInterstitialAdapter.this.mLoadListener != null) {
                    TTTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            } catch (Throwable th2) {
                th2.printStackTrace();
            }
        }
    };
    TTInteractionVi.AdInteractionListener j = new TTInteractionVi.AdInteractionListener() {
        @Override
        public final void onClicked() {
            if (TTTYInterstitialAdapter.this.mImpressListener != null) {
                TTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
            }
        }

        @Override
        public final void onShow() {
            if (TTTYInterstitialAdapter.this.mImpressListener != null) {
                TTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
            }
        }

        @Override
        public final void onDismiss() {
            if (TTTYInterstitialAdapter.this.mImpressListener != null) {
                TTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
            }
        }
    };
    TTVfNative.FullScreenVideoAdListener k = new TTVfNative.FullScreenVideoAdListener() {
        @Override
        public final void onFullVideoCached() {
        }

        @Override
        public final void onError(int i, String str) {
            TTTYInterstitialAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override
        public final void onFullVideoVsLoad(TTFullVideoObject tTFullVideoObject) {
            try {
                if (TTTYInterstitialAdapter.this.mLoadListener != null) {
                    TTTYInterstitialAdapter.this.mLoadListener.onAdDataLoaded();
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }

        @Override
        public final void onFullVideoCached(TTFullVideoObject tTFullVideoObject) {
            TTTYInterstitialAdapter.this.r = tTFullVideoObject;
            try {
                Map<String, Object> mediaExtraInfo = TTTYInterstitialAdapter.this.r.getMediaExtraInfo();
                if (mediaExtraInfo != null) {
                    if (TTTYInterstitialAdapter.this.t == null) {
                        TTTYInterstitialAdapter.this.t = new HashMap(3);
                    }
                    TTTYInterstitialAdapter.this.t.putAll(mediaExtraInfo);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
            if (TTTYInterstitialAdapter.this.h) {
                try {
                    TTTYInitManager.getInstance().a(TTTYInterstitialAdapter.this.t, TTTYInterstitialAdapter.this.r, TTTYInterstitialAdapter.this.mBiddingListener);
                    return;
                } catch (Throwable unused) {
                    return;
                }
            }
            try {
                if (TTTYInterstitialAdapter.this.mLoadListener != null) {
                    TTTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            } catch (Throwable th2) {
                th2.printStackTrace();
            }
        }
    };
    TTFullVideoObject.FullVideoVsInteractionListener l = new TTFullVideoObject.FullVideoVsInteractionListener() {
        @Override
        public final void onShow() {
            if (TTTYInterstitialAdapter.this.mImpressListener != null) {
                TTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
            }
            if (TTTYInterstitialAdapter.this.b != 1 || TTTYInterstitialAdapter.this.mImpressListener == null) {
                return;
            }
            TTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoStart();
        }

        @Override
        public final void onVideoBarClick() {
            if (TTTYInterstitialAdapter.this.mImpressListener != null) {
                TTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
            }
        }

        @Override
        public final void onClose() {
            if (TTTYInterstitialAdapter.this.mImpressListener != null) {
                TTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
            }
        }

        @Override
        public final void onVideoComplete() {
            if (TTTYInterstitialAdapter.this.mImpressListener != null) {
                TTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoEnd();
            }
        }

        @Override
        public final void onSkippedVideo() {
            TTTYInterstitialAdapter.z(TTTYInterstitialAdapter.this);
        }
    };
    TTVfNative.NtExpressVfListener m = new TTVfNative.NtExpressVfListener() {
        @Override
        public final void onError(int i, String str) {
            TTTYInterstitialAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override
        public final void onNtExpressVnLoad(List<TTNtExpressObject> list) {
            TTTYInterstitialAdapter.this.s = list.get(0);
            TTTYInterstitialAdapter.this.s.render();
            try {
                Map<String, Object> mediaExtraInfo = TTTYInterstitialAdapter.this.s.getMediaExtraInfo();
                if (mediaExtraInfo != null) {
                    if (TTTYInterstitialAdapter.this.t == null) {
                        TTTYInterstitialAdapter.this.t = new HashMap(3);
                    }
                    TTTYInterstitialAdapter.this.t.putAll(mediaExtraInfo);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
            if (TTTYInterstitialAdapter.this.h) {
                try {
                    TTTYInitManager.getInstance().a(TTTYInterstitialAdapter.this.t, TTTYInterstitialAdapter.this.s, TTTYInterstitialAdapter.this.mBiddingListener);
                    return;
                } catch (Throwable unused) {
                    return;
                }
            }
            try {
                if (TTTYInterstitialAdapter.this.mLoadListener != null) {
                    TTTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            } catch (Throwable th2) {
                th2.printStackTrace();
            }
        }
    };
    TTNtExpressObject.NtInteractionListener n = new TTNtExpressObject.NtInteractionListener() {
        @Override
        public final void onRenderFail(View view, String str, int i) {
        }

        @Override
        public final void onRenderSuccess(View view, float f, float f2) {
        }

        @Override
        public final void onDismiss() {
            if (TTTYInterstitialAdapter.this.mImpressListener != null) {
                TTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
            }
            if (TTTYInterstitialAdapter.this.s != null) {
                TTTYInterstitialAdapter.this.s.destroy();
            }
        }

        @Override
        public final void onClicked(View view, int i) {
            if (TTTYInterstitialAdapter.this.mImpressListener != null) {
                TTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
            }
        }

        @Override
        public final void onShow(View view, int i) {
            if (TTTYInterstitialAdapter.this.mImpressListener != null) {
                TTTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
            }
        }
    };
    private boolean u = false;
    TTAppDownloadListener o = new TTAppDownloadListener() {
        @Override
        public final void onIdle() {
        }

        @Override
        public final void onDownloadActive(long j, long j2, String str, String str2) {
            if (TTTYInterstitialAdapter.this.u) {
                if (TTTYInterstitialAdapter.this.mDownloadListener == null || !(TTTYInterstitialAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYInterstitialAdapter.this.mDownloadListener).onDownloadUpdate(j, j2, str, str2);
                return;
            }
            TTTYInterstitialAdapter.L(TTTYInterstitialAdapter.this);
            if (TTTYInterstitialAdapter.this.mDownloadListener == null || !(TTTYInterstitialAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYInterstitialAdapter.this.mDownloadListener).onDownloadStart(j, j2, str, str2);
        }

        @Override
        public final void onDownloadPaused(long j, long j2, String str, String str2) {
            if (TTTYInterstitialAdapter.this.mDownloadListener == null || !(TTTYInterstitialAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYInterstitialAdapter.this.mDownloadListener).onDownloadPause(j, j2, str, str2);
        }

        @Override
        public final void onDownloadFailed(long j, long j2, String str, String str2) {
            if (TTTYInterstitialAdapter.this.mDownloadListener == null || !(TTTYInterstitialAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYInterstitialAdapter.this.mDownloadListener).onDownloadFail(j, j2, str, str2);
        }

        @Override
        public final void onDownloadFinished(long j, String str, String str2) {
            if (TTTYInterstitialAdapter.this.mDownloadListener == null || !(TTTYInterstitialAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYInterstitialAdapter.this.mDownloadListener).onDownloadFinish(j, str, str2);
        }

        @Override
        public final void onInstalled(String str, String str2) {
            if (TTTYInterstitialAdapter.this.mDownloadListener == null || !(TTTYInterstitialAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYInterstitialAdapter.this.mDownloadListener).onInstalled(str, str2);
        }
    };

    static boolean L(TTTYInterstitialAdapter tTTYInterstitialAdapter) {
        tTTYInterstitialAdapter.u = true;
        return true;
    }

    static int z(TTTYInterstitialAdapter tTTYInterstitialAdapter) {
        tTTYInterstitialAdapter.mDismissType = 2;
        return 2;
    }

    private void a(Context context, Map<String, Object> map, Map<String, Object> map2) {
        runOnNetworkRequestThread(new 7(map2, context.getApplicationContext(), map));
    }

    final class 7 implements Runnable {
        final Map a;
        final Context b;
        final Map c;

        7(Map map, Context context, Map map2) {
            this.a = map;
            this.b = context;
            this.c = map2;
        }

        @Override
        public final void run() {
            int i;
            int i2;
            String[] strArrSplit = TTTYInterstitialAdapter.this.e.split(Constants.COLON_SEPARATOR);
            if (strArrSplit.length > 0) {
                try {
                    i = Integer.parseInt(strArrSplit[0]);
                } catch (Exception unused) {
                    Log.w(TTTYInterstitialAdapter.this.p, "size set invalidate width");
                    i = 1;
                }
            } else {
                i = 1;
            }
            if (strArrSplit.length > 1) {
                try {
                    i2 = Integer.parseInt(strArrSplit[1]);
                } catch (Exception unused2) {
                    Log.w(TTTYInterstitialAdapter.this.p, "size set invalidate height");
                    i2 = 1;
                }
            } else {
                i2 = 1;
            }
            TTVfManager vfManager = TTVfSdk.getVfManager();
            int i3 = this.a != null ? Integer.parseInt(this.a.get(TYAdConst.KEY.AD_WIDTH).toString()) : 0;
            int i4 = this.a != null ? Integer.parseInt(this.a.get(TYAdConst.KEY.AD_HEIGHT).toString()) : 0;
            TTVfNative tTVfNativeCreateVfNative = vfManager.createVfNative(this.b);
            TTTYCustomAdSlotBuilder tTTYCustomAdSlotBuilder = new TTTYCustomAdSlotBuilder(TTTYInterstitialAdapter.this.a, this.c, this.a);
            int i5 = this.b.getResources().getDisplayMetrics().widthPixels;
            int i6 = this.b.getResources().getDisplayMetrics().heightPixels;
            tTTYCustomAdSlotBuilder.setAdCount(1);
            if (TTTYInterstitialAdapter.this.b != 0) {
                try {
                    if (TTTYInterstitialAdapter.this.b == 2 || (!TextUtils.isEmpty(TTTYInterstitialAdapter.this.d) && TextUtils.equals("1", TTTYInterstitialAdapter.this.d))) {
                        if (i3 <= 0) {
                            i3 = i5;
                        }
                        if (i4 <= 0) {
                            i4 = i6;
                        }
                        tTTYCustomAdSlotBuilder.setExpressViewAcceptedSize(TTTYInterstitialAdapter.a(this.b, i3), TTTYInterstitialAdapter.a(this.b, i4));
                    }
                } catch (Throwable th) {
                    th.printStackTrace();
                }
                tTTYCustomAdSlotBuilder.setOrientation(TTTYInterstitialAdapter.this.f);
                tTVfNativeCreateVfNative.loadFullVideoVs(tTTYCustomAdSlotBuilder.build(), TTTYInterstitialAdapter.this.k);
                return;
            }
            float f = this.b.getResources().getDisplayMetrics().density;
            int iMin = (int) ((i3 <= 0 ? Math.min(i5, i6) - (30.0f * f) : i3) / f);
            int i7 = i4 > 0 ? (int) (i4 / f) : 0;
            if (i7 == 0) {
                i7 = (iMin / i) * i2;
            }
            Log.i(TTTYInterstitialAdapter.this.p, "expressWidth: " + iMin + ", expressHeight: " + i7);
            tTTYCustomAdSlotBuilder.setExpressViewAcceptedSize((float) iMin, (float) i7);
            tTVfNativeCreateVfNative.loadItExpressVi(tTTYCustomAdSlotBuilder.build(), TTTYInterstitialAdapter.this.m);
        }
    }

    @Override
    public boolean isAdReady() {
        return (this.q == null && this.r == null && this.s == null) ? false : true;
    }

    @Override
    public void show(Activity activity) {
        try {
            if (this.q != null && activity != null) {
                this.q.setViInteractionListener(this.j);
                this.q.setDownloadListener(this.o);
                this.q.showInteractionVi(activity);
            }
            if (this.r != null && activity != null) {
                this.r.setFullScreenVideoAdInteractionListener(this.l);
                this.r.setDownloadListener(this.o);
                this.r.showFullVideoVs(activity);
            }
            if (this.s == null || activity == null) {
                return;
            }
            this.s.setExpressInteractionListener(this.n);
            this.s.setDownloadListener(this.o);
            this.s.showInteractionExpressAd(activity);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public String getNetworkName() {
        return TTTYInitManager.getInstance().getNetworkName();
    }

    @Override
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, final Map<String, Object> map2) {
        if (!a(map, map2)) {
            notifyATLoadFail("", "app_id or slot_id is empty!");
        } else {
            TTTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() {
                @Override
                public final void onSuccess() {
                    try {
                        TTTYInterstitialAdapter.a(TTTYInterstitialAdapter.this, context, map, map2);
                    } catch (Throwable th) {
                        TTTYInterstitialAdapter.this.notifyATLoadFail("", th.getMessage());
                    }
                }

                @Override
                public final void onFail(String str) {
                    TTTYInterstitialAdapter.this.notifyATLoadFail("", str);
                }
            });
        }
    }

    @Override
    public void destory() {
        TTFullVideoObject tTFullVideoObject = this.r;
        if (tTFullVideoObject != null) {
            tTFullVideoObject.setFullScreenVideoAdInteractionListener(null);
            this.r = null;
        }
        TTInteractionVi tTInteractionVi = this.q;
        if (tTInteractionVi != null) {
            tTInteractionVi.setViInteractionListener(null);
            this.q.setDownloadListener(null);
            this.q = null;
        }
        TTNtExpressObject tTNtExpressObject = this.s;
        if (tTNtExpressObject != null) {
            tTNtExpressObject.setExpressInteractionListener((TTNtExpressObject.NtInteractionListener) null);
            this.s.destroy();
            this.s = null;
        }
        this.j = null;
        this.i = null;
        this.l = null;
        this.k = null;
        this.m = null;
        this.n = null;
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
        return this.t;
    }

    @Override
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.h = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    private boolean a(Map<String, Object> map, Map<String, Object> map2) {
        String str = (String) map.get("app_id");
        this.a = (String) map.get("slot_id");
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(this.a)) {
            return false;
        }
        if (map.containsKey("is_video")) {
            this.b = Integer.parseInt(map.get("is_video").toString());
        }
        if (map.containsKey(MBridgeConstans.PROPERTIES_LAYOUT_TYPE)) {
            this.c = Integer.parseInt(map.get(MBridgeConstans.PROPERTIES_LAYOUT_TYPE).toString());
        }
        if (map.containsKey(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE)) {
            this.e = map.get(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE).toString();
        }
        this.d = (String) map.get("personalized_template");
        try {
            int i = Integer.parseInt(map2.get(TYAdConst.KEY.AD_ORIENTATION).toString());
            if (i == 1) {
                this.f = 2;
            } else if (i == 2) {
                this.f = 1;
            }
        } catch (Exception unused) {
        }
        if (map.containsKey("payload")) {
            this.g = map.get("payload").toString();
        }
        return true;
    }

    static int a(Context context, float f) {
        float f2 = context.getResources().getDisplayMetrics().density;
        if (f2 <= 0.0f) {
            f2 = 1.0f;
        }
        return (int) ((f / f2) + 0.5f);
    }

    static void a(TTTYInterstitialAdapter tTTYInterstitialAdapter, Context context, Map map, Map map2) {
        tTTYInterstitialAdapter.runOnNetworkRequestThread(tTTYInterstitialAdapter.new 7(map2, context.getApplicationContext(), map));
    }
}
