package com.tkay.network.toutiao;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import com.bykv.vk.openvk.TTAppDownloadListener;
import com.bykv.vk.openvk.TTBnObject;
import com.bykv.vk.openvk.TTNtExpressObject;
import com.bykv.vk.openvk.TTVfDislike;
import com.bykv.vk.openvk.TTVfManager;
import com.bykv.vk.openvk.TTVfNative;
import com.bykv.vk.openvk.TTVfSdk;
import com.mbridge.msdk.MBridgeConstans;
import com.tkay.banner.unitgroup.api.CustomBannerAdapter;
import com.tkay.china.api.CustomAdapterDownloadListener;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBiddingListener;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class TTTYBannerAdapter extends CustomBannerAdapter {
    Context b;
    View c;
    int d;
    int e;
    int f;
    String g;
    boolean h;
    TTBnObject j;
    private TTNtExpressObject q;
    private Map<String, Object> r;
    private final String p = getClass().getSimpleName();
    String a = "";
    boolean i = false;
    TTVfNative.BnVfListener k = new TTVfNative.BnVfListener() {
        @Override
        public final void onError(int i, String str) {
            TTTYBannerAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override
        public final void onBnVbLoad(TTBnObject tTBnObject) {
            if (tTBnObject == null) {
                TTTYBannerAdapter.this.notifyATLoadFail("", "TTAD is null!");
                return;
            }
            View bannerView = tTBnObject.getBannerView();
            if (bannerView == null) {
                TTTYBannerAdapter.this.notifyATLoadFail("", "TTBannerView is null!");
                return;
            }
            TTTYBannerAdapter.this.j = tTBnObject;
            tTBnObject.setDownloadListener(TTTYBannerAdapter.this.o);
            TTTYBannerAdapter.this.c = bannerView;
            TTTYBannerAdapter.this.c.getViewTreeObserver().addOnPreDrawListener(new ViewTreeObserver.OnPreDrawListener() {
                @Override
                public final boolean onPreDraw() {
                    try {
                        if (TTTYBannerAdapter.this.c == null || TTTYBannerAdapter.this.c.getParent() == null) {
                            return true;
                        }
                        int measuredWidth = ((ViewGroup) TTTYBannerAdapter.this.c.getParent()).getMeasuredWidth();
                        int measuredHeight = ((ViewGroup) TTTYBannerAdapter.this.c.getParent()).getMeasuredHeight();
                        if (TTTYBannerAdapter.this.c.getLayoutParams().width == measuredWidth) {
                            return true;
                        }
                        TTTYBannerAdapter.this.c.getLayoutParams().width = measuredWidth;
                        TTTYBannerAdapter.this.c.getLayoutParams().height = (measuredWidth * TTTYBannerAdapter.this.e) / TTTYBannerAdapter.this.d;
                        if (TTTYBannerAdapter.this.c.getLayoutParams().height > measuredHeight) {
                            TTTYBannerAdapter.this.c.getLayoutParams().height = measuredHeight;
                            TTTYBannerAdapter.this.c.getLayoutParams().width = (measuredHeight * TTTYBannerAdapter.this.d) / TTTYBannerAdapter.this.e;
                        }
                        ((ViewGroup) TTTYBannerAdapter.this.c.getParent()).requestLayout();
                        return true;
                    } catch (Exception e) {
                        e.printStackTrace();
                        return true;
                    }
                }
            });
            tTBnObject.setBannerInteractionListener(TTTYBannerAdapter.this.l);
            if (TTTYBannerAdapter.this.mLoadListener != null) {
                TTTYBannerAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
            }
        }
    };
    TTBnObject.AdInteractionListener l = new TTBnObject.AdInteractionListener() {
        @Override
        public final void onAdClicked(View view, int i) {
            if (TTTYBannerAdapter.this.mImpressionEventListener != null) {
                TTTYBannerAdapter.this.mImpressionEventListener.onBannerAdClicked();
            }
        }

        @Override
        public final void onAdShow(View view, int i) {
            if (TTTYBannerAdapter.this.mImpressionEventListener == null || TTTYBannerAdapter.this.h) {
                return;
            }
            TTTYBannerAdapter.this.mImpressionEventListener.onBannerAdShow();
            TTTYBannerAdapter.this.h = true;
        }
    };
    TTVfNative.NtExpressVfListener m = new TTVfNative.NtExpressVfListener() {
        @Override
        public final void onError(int i, String str) {
            TTTYBannerAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override
        public final void onNtExpressVnLoad(List<TTNtExpressObject> list) {
            if (list != null && list.size() > 0) {
                TTTYBannerAdapter.this.q = list.get(0);
                if (TTTYBannerAdapter.this.f > 0) {
                    TTTYBannerAdapter.this.q.setSlideIntervalTime(TTTYBannerAdapter.this.f);
                } else {
                    TTTYBannerAdapter.this.q.setSlideIntervalTime(0);
                }
                TTTYBannerAdapter.h(TTTYBannerAdapter.this);
                TTTYBannerAdapter.this.q.render();
                return;
            }
            TTTYBannerAdapter.this.notifyATLoadFail("", "Return Ad list is empty.");
        }
    };
    TTNtExpressObject.ExpressNtInteractionListener n = new TTNtExpressObject.ExpressNtInteractionListener() {
        @Override
        public final void onClicked(View view, int i) {
            if (TTTYBannerAdapter.this.mImpressionEventListener != null) {
                TTTYBannerAdapter.this.mImpressionEventListener.onBannerAdClicked();
            }
        }

        @Override
        public final void onShow(View view, int i) {
            if (TTTYBannerAdapter.this.mImpressionEventListener == null || TTTYBannerAdapter.this.h) {
                return;
            }
            TTTYBannerAdapter.this.mImpressionEventListener.onBannerAdShow();
            TTTYBannerAdapter.this.h = true;
        }

        @Override
        public final void onRenderFail(View view, String str, int i) {
            TTTYBannerAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override
        public final void onRenderSuccess(View view, float f, float f2) {
            TTTYBannerAdapter.this.c = view;
            try {
                Map<String, Object> mediaExtraInfo = TTTYBannerAdapter.this.q.getMediaExtraInfo();
                if (mediaExtraInfo != null) {
                    if (TTTYBannerAdapter.this.r == null) {
                        TTTYBannerAdapter.this.r = new HashMap(3);
                    }
                    TTTYBannerAdapter.this.r.putAll(mediaExtraInfo);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
            TTTYBannerAdapter.this.h = false;
            if (TTTYBannerAdapter.this.i) {
                try {
                    TTTYInitManager.getInstance().a(TTTYBannerAdapter.this.r, TTTYBannerAdapter.this.q, TTTYBannerAdapter.this.mBiddingListener);
                } catch (Throwable unused) {
                }
            } else if (TTTYBannerAdapter.this.mLoadListener != null) {
                TTTYBannerAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
            }
        }
    };
    private boolean s = false;
    TTAppDownloadListener o = new TTAppDownloadListener() {
        @Override
        public final void onIdle() {
        }

        @Override
        public final void onDownloadActive(long j, long j2, String str, String str2) {
            if (TTTYBannerAdapter.this.s) {
                if (TTTYBannerAdapter.this.mDownloadListener == null || !(TTTYBannerAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYBannerAdapter.this.mDownloadListener).onDownloadUpdate(j, j2, str, str2);
                return;
            }
            TTTYBannerAdapter.u(TTTYBannerAdapter.this);
            if (TTTYBannerAdapter.this.mDownloadListener == null || !(TTTYBannerAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYBannerAdapter.this.mDownloadListener).onDownloadStart(j, j2, str, str2);
        }

        @Override
        public final void onDownloadPaused(long j, long j2, String str, String str2) {
            if (TTTYBannerAdapter.this.mDownloadListener == null || !(TTTYBannerAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYBannerAdapter.this.mDownloadListener).onDownloadPause(j, j2, str, str2);
        }

        @Override
        public final void onDownloadFailed(long j, long j2, String str, String str2) {
            if (TTTYBannerAdapter.this.mDownloadListener == null || !(TTTYBannerAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYBannerAdapter.this.mDownloadListener).onDownloadFail(j, j2, str, str2);
        }

        @Override
        public final void onDownloadFinished(long j, String str, String str2) {
            if (TTTYBannerAdapter.this.mDownloadListener == null || !(TTTYBannerAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYBannerAdapter.this.mDownloadListener).onDownloadFinish(j, str, str2);
        }

        @Override
        public final void onInstalled(String str, String str2) {
            if (TTTYBannerAdapter.this.mDownloadListener == null || !(TTTYBannerAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYBannerAdapter.this.mDownloadListener).onInstalled(str, str2);
        }
    };

    static boolean u(TTTYBannerAdapter tTTYBannerAdapter) {
        tTTYBannerAdapter.s = true;
        return true;
    }

    private void a(Context context, Map<String, Object> map, Map<String, Object> map2) {
        runOnNetworkRequestThread(new 5(map, map2, context.getApplicationContext()));
    }

    final class 5 implements Runnable {
        final Map a;
        final Map b;
        final Context c;

        5(Map map, Map map2, Context context) {
            this.a = map;
            this.b = map2;
            this.c = context;
        }

        /* JADX WARN: Removed duplicated region for block: B:17:0x005a  */
        /* JADX WARN: Removed duplicated region for block: B:54:0x00e4  */
        @Override
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final void run() {
            int i;
            int i2;
            int i3;
            TTVfManager vfManager = TTVfSdk.getVfManager();
            String string = this.a.containsKey(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE) ? this.a.get(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE).toString() : "";
            int i4 = 0;
            int i5 = this.a.containsKey(MBridgeConstans.PROPERTIES_LAYOUT_TYPE) ? Integer.parseInt(this.a.get(MBridgeConstans.PROPERTIES_LAYOUT_TYPE).toString()) : 0;
            int i6 = this.a.containsKey("media_size") ? Integer.parseInt(this.a.get("media_size").toString()) : 0;
            int i7 = 100;
            int i8 = 600;
            if (i5 == 1) {
                switch (i6) {
                    case 0:
                        i = 90;
                        break;
                    case 1:
                        i = 100;
                        break;
                    case 2:
                        i = 150;
                        break;
                    case 3:
                        i = 250;
                        break;
                    case 4:
                        i = 286;
                        break;
                    case 5:
                        i = 200;
                        break;
                    case 6:
                        i = 388;
                        break;
                    case 7:
                        i = 400;
                        break;
                    case 8:
                        i = 500;
                        break;
                    default:
                        i = 0;
                        i8 = 0;
                        break;
                }
            } else {
                try {
                    if (!TextUtils.isEmpty(string)) {
                        String[] strArrSplit = string.split("x");
                        int i9 = Integer.parseInt(strArrSplit[0]);
                        try {
                            i = Integer.parseInt(strArrSplit[1]);
                            i8 = i9;
                        } catch (Exception e) {
                            e = e;
                            i8 = i9;
                            e.printStackTrace();
                            i = 0;
                        }
                    }
                } catch (Exception e2) {
                    e = e2;
                    i8 = 0;
                }
            }
            if (i8 == 0 || i == 0) {
                i8 = 640;
            } else {
                i7 = i;
            }
            TTTYBannerAdapter.this.d = i8;
            TTTYBannerAdapter.this.e = i7;
            Map map = this.b;
            if (map == null) {
                i2 = 0;
            } else if (map.containsKey(TYAdConst.KEY.AD_WIDTH)) {
                try {
                    i3 = (int) (Double.parseDouble(this.b.get(TYAdConst.KEY.AD_WIDTH).toString()) / ((double) this.c.getResources().getDisplayMetrics().density));
                } catch (Throwable th) {
                    th.printStackTrace();
                    i3 = 0;
                }
                if (this.b.containsKey(TYAdConst.KEY.AD_HEIGHT)) {
                    try {
                        i4 = (int) (Double.parseDouble(this.b.get(TYAdConst.KEY.AD_HEIGHT).toString()) / ((double) this.c.getResources().getDisplayMetrics().density));
                    } catch (Throwable th2) {
                        th2.printStackTrace();
                    }
                }
                int i10 = i4;
                i4 = i3;
                i2 = i10;
            } else {
                i3 = 0;
                if (this.b.containsKey(TYAdConst.KEY.AD_HEIGHT)) {
                }
                int i102 = i4;
                i4 = i3;
                i2 = i102;
            }
            TTVfNative tTVfNativeCreateVfNative = vfManager.createVfNative(this.c);
            TTTYCustomAdSlotBuilder tTTYCustomAdSlotBuilder = new TTTYCustomAdSlotBuilder(TTTYBannerAdapter.this.a, this.a, this.b);
            tTTYCustomAdSlotBuilder.setAdCount(1);
            tTTYCustomAdSlotBuilder.setExpressViewAcceptedSize(i4 <= 0 ? i8 / 2 : i4, i2 <= 0 ? 0.0f : i2);
            tTVfNativeCreateVfNative.loadBnExpressVb(tTTYCustomAdSlotBuilder.build(), TTTYBannerAdapter.this.m);
        }
    }

    final class 6 implements TTVfDislike.DislikeInteractionCallback {
        @Override
        public final void onCancel() {
        }

        @Deprecated
        public final void onRefuse() {
        }

        @Override
        public final void onShow() {
        }

        6() {
        }

        @Override
        public final void onSelected(int i, String str, boolean z) {
            if (TTTYBannerAdapter.this.mImpressionEventListener != null) {
                TTTYBannerAdapter.this.mImpressionEventListener.onBannerAdClose();
            }
        }

        @Deprecated
        public final void onSelected(int i, String str) {
            if (TTTYBannerAdapter.this.mImpressionEventListener != null) {
                TTTYBannerAdapter.this.mImpressionEventListener.onBannerAdClose();
            }
        }
    }

    private void a(Activity activity, TTNtExpressObject tTNtExpressObject) {
        tTNtExpressObject.setDislikeCallback(activity, new 6());
    }

    @Override
    public View getBannerView() {
        return this.c;
    }

    @Override
    public String getNetworkName() {
        return TTTYInitManager.getInstance().getNetworkName();
    }

    @Override
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, final Map<String, Object> map2) {
        if (!a(map)) {
            notifyATLoadFail("", "app_id or slot_id is empty!");
        } else if (!(context instanceof Activity)) {
            notifyATLoadFail("", "Context must be activity.");
        } else {
            this.b = context;
            TTTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() {
                @Override
                public final void onSuccess() {
                    try {
                        TTTYBannerAdapter.a(TTTYBannerAdapter.this, context, map, map2);
                    } catch (Throwable th) {
                        TTTYBannerAdapter.this.notifyATLoadFail("", th.getMessage());
                    }
                }

                @Override
                public final void onFail(String str) {
                    TTTYBannerAdapter.this.notifyATLoadFail("", str);
                }
            });
        }
    }

    @Override
    public void destory() {
        this.c = null;
        TTNtExpressObject tTNtExpressObject = this.q;
        if (tTNtExpressObject != null) {
            tTNtExpressObject.setExpressInteractionListener((TTNtExpressObject.NtInteractionListener) null);
            this.q.destroy();
            this.q = null;
        }
        this.l = null;
        this.k = null;
        this.n = null;
        this.m = null;
        this.b = null;
    }

    @Override
    public String getNetworkPlacementId() {
        return this.a;
    }

    @Override
    public String getNetworkSDKVersion() {
        return TTTYInitManager.getInstance().getNetworkVersion();
    }

    @Override
    public Map<String, Object> getNetworkInfoMap() {
        return this.r;
    }

    private void a() {
        TTNtExpressObject tTNtExpressObject = this.q;
        if (tTNtExpressObject != null) {
            tTNtExpressObject.setExpressInteractionListener(this.n);
            this.q.setDownloadListener(this.o);
            Context context = this.b;
            if (context instanceof Activity) {
                this.q.setDislikeCallback((Activity) context, new 6());
            }
        }
    }

    @Override
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.i = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    private boolean a(Map<String, Object> map) {
        String str = (String) map.get("app_id");
        this.a = (String) map.get("slot_id");
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(this.a)) {
            return false;
        }
        this.f = 0;
        try {
            if (map.containsKey("nw_rft")) {
                this.f = Integer.valueOf((String) map.get("nw_rft")).intValue();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        if (!map.containsKey("payload")) {
            return true;
        }
        this.g = map.get("payload").toString();
        return true;
    }

    static void h(TTTYBannerAdapter tTTYBannerAdapter) {
        TTNtExpressObject tTNtExpressObject = tTTYBannerAdapter.q;
        if (tTNtExpressObject != null) {
            tTNtExpressObject.setExpressInteractionListener(tTTYBannerAdapter.n);
            tTTYBannerAdapter.q.setDownloadListener(tTTYBannerAdapter.o);
            Context context = tTTYBannerAdapter.b;
            if (context instanceof Activity) {
                tTTYBannerAdapter.q.setDislikeCallback((Activity) context, tTTYBannerAdapter.new 6());
            }
        }
    }

    static void a(TTTYBannerAdapter tTTYBannerAdapter, Context context, Map map, Map map2) {
        tTTYBannerAdapter.runOnNetworkRequestThread(tTTYBannerAdapter.new 5(map, map2, context.getApplicationContext()));
    }
}
