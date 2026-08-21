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
import com.bykv.vk.openvk.TTVfNative;
import com.tkay.banner.unitgroup.api.CustomBannerAdapter;
import com.tkay.china.api.CustomAdapterDownloadListener;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYBiddingListener;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
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

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f7718a = "";
    boolean i = false;
    TTVfNative.BnVfListener k = new TTVfNative.BnVfListener() { // from class: com.tkay.network.toutiao.TTTYBannerAdapter.1
        @Override // com.bykv.vk.openvk.TTVfNative.BnVfListener, com.bykv.vk.openvk.common.CommonListener
        public final void onError(int i, String str) {
            TTTYBannerAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override // com.bykv.vk.openvk.TTVfNative.BnVfListener
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
            TTTYBannerAdapter.this.c.getViewTreeObserver().addOnPreDrawListener(new ViewTreeObserver.OnPreDrawListener() { // from class: com.tkay.network.toutiao.TTTYBannerAdapter.1.1
                @Override // android.view.ViewTreeObserver.OnPreDrawListener
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
    TTBnObject.AdInteractionListener l = new TTBnObject.AdInteractionListener() { // from class: com.tkay.network.toutiao.TTTYBannerAdapter.2
        @Override // com.bykv.vk.openvk.TTBnObject.AdInteractionListener
        public final void onAdClicked(View view, int i) {
            if (TTTYBannerAdapter.this.mImpressionEventListener != null) {
                TTTYBannerAdapter.this.mImpressionEventListener.onBannerAdClicked();
            }
        }

        @Override // com.bykv.vk.openvk.TTBnObject.AdInteractionListener
        public final void onAdShow(View view, int i) {
            if (TTTYBannerAdapter.this.mImpressionEventListener == null || TTTYBannerAdapter.this.h) {
                return;
            }
            TTTYBannerAdapter.this.mImpressionEventListener.onBannerAdShow();
            TTTYBannerAdapter.this.h = true;
        }
    };
    TTVfNative.NtExpressVfListener m = new TTVfNative.NtExpressVfListener() { // from class: com.tkay.network.toutiao.TTTYBannerAdapter.3
        @Override // com.bykv.vk.openvk.TTVfNative.NtExpressVfListener, com.bykv.vk.openvk.common.CommonListener
        public final void onError(int i, String str) {
            TTTYBannerAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override // com.bykv.vk.openvk.TTVfNative.NtExpressVfListener
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
    TTNtExpressObject.ExpressNtInteractionListener n = new TTNtExpressObject.ExpressNtInteractionListener() { // from class: com.tkay.network.toutiao.TTTYBannerAdapter.4
        @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressNtInteractionListener
        public final void onClicked(View view, int i) {
            if (TTTYBannerAdapter.this.mImpressionEventListener != null) {
                TTTYBannerAdapter.this.mImpressionEventListener.onBannerAdClicked();
            }
        }

        @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressNtInteractionListener
        public final void onShow(View view, int i) {
            if (TTTYBannerAdapter.this.mImpressionEventListener == null || TTTYBannerAdapter.this.h) {
                return;
            }
            TTTYBannerAdapter.this.mImpressionEventListener.onBannerAdShow();
            TTTYBannerAdapter.this.h = true;
        }

        @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressNtInteractionListener
        public final void onRenderFail(View view, String str, int i) {
            TTTYBannerAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressNtInteractionListener
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
    TTAppDownloadListener o = new TTAppDownloadListener() { // from class: com.tkay.network.toutiao.TTTYBannerAdapter.8
        @Override // com.bykv.vk.openvk.TTAppDownloadListener
        public final void onIdle() {
        }

        @Override // com.bykv.vk.openvk.TTAppDownloadListener
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

        @Override // com.bykv.vk.openvk.TTAppDownloadListener
        public final void onDownloadPaused(long j, long j2, String str, String str2) {
            if (TTTYBannerAdapter.this.mDownloadListener == null || !(TTTYBannerAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYBannerAdapter.this.mDownloadListener).onDownloadPause(j, j2, str, str2);
        }

        @Override // com.bykv.vk.openvk.TTAppDownloadListener
        public final void onDownloadFailed(long j, long j2, String str, String str2) {
            if (TTTYBannerAdapter.this.mDownloadListener == null || !(TTTYBannerAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYBannerAdapter.this.mDownloadListener).onDownloadFail(j, j2, str, str2);
        }

        @Override // com.bykv.vk.openvk.TTAppDownloadListener
        public final void onDownloadFinished(long j, String str, String str2) {
            if (TTTYBannerAdapter.this.mDownloadListener == null || !(TTTYBannerAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYBannerAdapter.this.mDownloadListener).onDownloadFinish(j, str, str2);
        }

        @Override // com.bykv.vk.openvk.TTAppDownloadListener
        public final void onInstalled(String str, String str2) {
            if (TTTYBannerAdapter.this.mDownloadListener == null || !(TTTYBannerAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYBannerAdapter.this.mDownloadListener).onInstalled(str, str2);
        }
    };

    static /* synthetic */ boolean u(TTTYBannerAdapter tTTYBannerAdapter) {
        tTTYBannerAdapter.s = true;
        return true;
    }

    private void a(Context context, Map<String, Object> map, Map<String, Object> map2) {
        runOnNetworkRequestThread(new AnonymousClass5(map, map2, context.getApplicationContext()));
    }

    /* JADX INFO: renamed from: com.tkay.network.toutiao.TTTYBannerAdapter$5, reason: invalid class name */
    final class AnonymousClass5 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ Map f7724a;
        final /* synthetic */ Map b;
        final /* synthetic */ Context c;

        AnonymousClass5(Map map, Map map2, Context context) {
            this.f7724a = map;
            this.b = map2;
            this.c = context;
        }

        /* JADX WARN: Removed duplicated region for block: B:17:0x005a  */
        /* JADX WARN: Removed duplicated region for block: B:54:0x00e4  */
        @Override // java.lang.Runnable
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final void run() {
            /*
                Method dump skipped, instruction units count: 338
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.tkay.network.toutiao.TTTYBannerAdapter.AnonymousClass5.run():void");
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.toutiao.TTTYBannerAdapter$6, reason: invalid class name */
    final class AnonymousClass6 implements TTVfDislike.DislikeInteractionCallback {
        @Override // com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback
        public final void onCancel() {
        }

        @Deprecated
        public final void onRefuse() {
        }

        @Override // com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback
        public final void onShow() {
        }

        AnonymousClass6() {
        }

        @Override // com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback
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
        tTNtExpressObject.setDislikeCallback(activity, new AnonymousClass6());
    }

    @Override // com.tkay.banner.unitgroup.api.CustomBannerAdapter
    public View getBannerView() {
        return this.c;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return TTTYInitManager.getInstance().getNetworkName();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, final Map<String, Object> map2) {
        if (!a(map)) {
            notifyATLoadFail("", "app_id or slot_id is empty!");
        } else if (!(context instanceof Activity)) {
            notifyATLoadFail("", "Context must be activity.");
        } else {
            this.b = context;
            TTTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() { // from class: com.tkay.network.toutiao.TTTYBannerAdapter.7
                @Override // com.tkay.core.api.MediationInitCallback
                public final void onSuccess() {
                    try {
                        TTTYBannerAdapter.a(TTTYBannerAdapter.this, context, map, map2);
                    } catch (Throwable th) {
                        TTTYBannerAdapter.this.notifyATLoadFail("", th.getMessage());
                    }
                }

                @Override // com.tkay.core.api.MediationInitCallback
                public final void onFail(String str) {
                    TTTYBannerAdapter.this.notifyATLoadFail("", str);
                }
            });
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
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

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.f7718a;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return TTTYInitManager.getInstance().getNetworkVersion();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
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
                this.q.setDislikeCallback((Activity) context, new AnonymousClass6());
            }
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.i = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    private boolean a(Map<String, Object> map) {
        String str = (String) map.get("app_id");
        this.f7718a = (String) map.get("slot_id");
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(this.f7718a)) {
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

    static /* synthetic */ void h(TTTYBannerAdapter tTTYBannerAdapter) {
        TTNtExpressObject tTNtExpressObject = tTTYBannerAdapter.q;
        if (tTNtExpressObject != null) {
            tTNtExpressObject.setExpressInteractionListener(tTTYBannerAdapter.n);
            tTTYBannerAdapter.q.setDownloadListener(tTTYBannerAdapter.o);
            Context context = tTTYBannerAdapter.b;
            if (context instanceof Activity) {
                tTTYBannerAdapter.q.setDislikeCallback((Activity) context, tTTYBannerAdapter.new AnonymousClass6());
            }
        }
    }

    static /* synthetic */ void a(TTTYBannerAdapter tTTYBannerAdapter, Context context, Map map, Map map2) {
        tTTYBannerAdapter.runOnNetworkRequestThread(tTTYBannerAdapter.new AnonymousClass5(map, map2, context.getApplicationContext()));
    }
}
