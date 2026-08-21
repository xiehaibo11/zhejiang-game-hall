package com.tkay.network.toutiao;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import com.bykv.vk.openvk.CSJAdError;
import com.bykv.vk.openvk.CSJSplashAd;
import com.bykv.vk.openvk.TTAppDownloadListener;
import com.bykv.vk.openvk.TTVfManager;
import com.bykv.vk.openvk.TTVfNative;
import com.bykv.vk.openvk.TTVfSdk;
import com.bykv.vk.openvk.VfSlot;
import com.tkay.china.api.CustomAdapterDownloadListener;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.splashad.api.ITYSplashEyeAd;
import com.tkay.splashad.api.TYSplashEyeAdListener;
import com.tkay.splashad.unitgroup.api.CustomSplashAdapter;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.Map;

public class TTTYSplashAdapter extends CustomSplashAdapter implements CSJSplashAd.SplashAdListener {
    CSJSplashAd d;
    boolean e;
    TTTYSplashEyeAd f;
    View g;
    private Map<String, Object> m;
    private final String k = getClass().getSimpleName();
    String a = "";
    String b = "";
    String c = "";
    private boolean l = false;
    String h = "";
    boolean i = false;
    private boolean n = false;
    TTAppDownloadListener j = new TTAppDownloadListener() {
        @Override
        public final void onIdle() {
        }

        @Override
        public final void onDownloadActive(long j, long j2, String str, String str2) {
            if (TTTYSplashAdapter.this.n) {
                if (TTTYSplashAdapter.this.mDownloadListener == null || !(TTTYSplashAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYSplashAdapter.this.mDownloadListener).onDownloadUpdate(j, j2, str, str2);
                return;
            }
            TTTYSplashAdapter.h(TTTYSplashAdapter.this);
            if (TTTYSplashAdapter.this.mDownloadListener == null || !(TTTYSplashAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYSplashAdapter.this.mDownloadListener).onDownloadStart(j, j2, str, str2);
        }

        @Override
        public final void onDownloadPaused(long j, long j2, String str, String str2) {
            if (TTTYSplashAdapter.this.mDownloadListener == null || !(TTTYSplashAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYSplashAdapter.this.mDownloadListener).onDownloadPause(j, j2, str, str2);
        }

        @Override
        public final void onDownloadFailed(long j, long j2, String str, String str2) {
            if (TTTYSplashAdapter.this.mDownloadListener == null || !(TTTYSplashAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYSplashAdapter.this.mDownloadListener).onDownloadFail(j, j2, str, str2);
        }

        @Override
        public final void onDownloadFinished(long j, String str, String str2) {
            if (TTTYSplashAdapter.this.mDownloadListener == null || !(TTTYSplashAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYSplashAdapter.this.mDownloadListener).onDownloadFinish(j, str, str2);
        }

        @Override
        public final void onInstalled(String str, String str2) {
            if (TTTYSplashAdapter.this.mDownloadListener == null || !(TTTYSplashAdapter.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                return;
            }
            ((CustomAdapterDownloadListener) TTTYSplashAdapter.this.mDownloadListener).onInstalled(str, str2);
        }
    };

    @Override
    public void destory() {
    }

    @Override
    public boolean isSupportCustomSkipView() {
        return true;
    }

    static boolean h(TTTYSplashAdapter tTTYSplashAdapter) {
        tTTYSplashAdapter.n = true;
        return true;
    }

    private void a(Context context, Map<String, Object> map, Map<String, Object> map2) {
        TTVfManager vfManager = TTVfSdk.getVfManager();
        Context applicationContext = context.getApplicationContext();
        TTVfNative tTVfNativeCreateVfNative = vfManager.createVfNative(applicationContext);
        TTTYCustomAdSlotBuilder tTTYCustomAdSlotBuilder = new TTTYCustomAdSlotBuilder(this.b, map, map2);
        int i = 0;
        try {
        } catch (Throwable th) {
            th.printStackTrace();
        }
        int i2 = map2.containsKey(TYAdConst.KEY.AD_WIDTH) ? Integer.parseInt(map2.get(TYAdConst.KEY.AD_WIDTH).toString()) : 0;
        try {
            if (map2.containsKey(TYAdConst.KEY.AD_HEIGHT)) {
                i = Integer.parseInt(map2.get(TYAdConst.KEY.AD_HEIGHT).toString());
            }
        } catch (Throwable th2) {
            th2.printStackTrace();
        }
        if (i2 <= 0) {
            i2 = applicationContext.getResources().getDisplayMetrics().widthPixels;
        }
        if (i <= 0) {
            i = applicationContext.getResources().getDisplayMetrics().heightPixels;
        }
        tTTYCustomAdSlotBuilder.setImageAcceptedSize(i2, i);
        tTTYCustomAdSlotBuilder.setExpressViewAcceptedSize(a(applicationContext, i2), a(applicationContext, i));
        try {
            if (map.containsKey("zoomoutad_sw")) {
                this.l = TextUtils.equals("2", map.get("zoomoutad_sw").toString());
            }
        } catch (Exception unused) {
        }
        try {
            if (map.containsKey("button_type")) {
                map.get("button_type");
            }
        } catch (Exception unused2) {
        }
        postOnMainThread(new 2(tTTYCustomAdSlotBuilder, tTVfNativeCreateVfNative));
    }

    final class 2 implements Runnable {
        final VfSlot.Builder a;
        final TTVfNative b;

        2(VfSlot.Builder builder, TTVfNative tTVfNative) {
            this.a = builder;
            this.b = tTVfNative;
        }

        @Override
        public final void run() {
            try {
                this.b.loadSphVs(this.a.build(), new TTVfNative.CSJSplashAdListener() {
                    @Override
                    public final void onSplashLoadSuccess() {
                    }

                    @Override
                    public final void onSplashLoadFail(CSJAdError cSJAdError) {
                        TTTYSplashAdapter tTTYSplashAdapter = TTTYSplashAdapter.this;
                        StringBuilder sb = new StringBuilder();
                        sb.append(cSJAdError.getCode());
                        tTTYSplashAdapter.notifyATLoadFail(sb.toString(), cSJAdError.getMsg());
                    }

                    @Override
                    public final void onSplashRenderSuccess(CSJSplashAd cSJSplashAd) {
                        TTTYSplashAdapter.this.d = cSJSplashAd;
                        try {
                            Map<String, Object> mediaExtraInfo = TTTYSplashAdapter.this.d.getMediaExtraInfo();
                            if (mediaExtraInfo != null) {
                                if (TTTYSplashAdapter.this.m == null) {
                                    TTTYSplashAdapter.this.m = new HashMap(3);
                                }
                                TTTYSplashAdapter.this.m.putAll(mediaExtraInfo);
                            }
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                        if (TTTYSplashAdapter.this.i) {
                            try {
                                TTTYInitManager.getInstance().a(TTTYSplashAdapter.this.m, TTTYSplashAdapter.this.d, TTTYSplashAdapter.this.mBiddingListener);
                            } catch (Throwable unused) {
                            }
                        } else if (TTTYSplashAdapter.this.mLoadListener != null) {
                            TTTYSplashAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                        }
                    }

                    @Override
                    public final void onSplashRenderFail(CSJSplashAd cSJSplashAd, CSJAdError cSJAdError) {
                        TTTYSplashAdapter tTTYSplashAdapter = TTTYSplashAdapter.this;
                        StringBuilder sb = new StringBuilder();
                        sb.append(cSJAdError.getCode());
                        tTTYSplashAdapter.notifyATLoadFail(sb.toString(), cSJAdError.getMsg());
                    }
                }, TTTYSplashAdapter.this.mFetchAdTimeout);
            } catch (Exception e) {
                TTTYSplashAdapter.this.notifyATLoadFail("", e.getMessage());
            }
        }
    }

    final class 3 implements CSJSplashAd.SplashClickEyeListener {
        3() {
        }

        @Override
        public final void onSplashClickEyeReadyToShow(CSJSplashAd cSJSplashAd) {
            TTTYSplashAdapter.this.e = true;
            TTTYSplashAdapter tTTYSplashAdapter = TTTYSplashAdapter.this;
            TTTYSplashAdapter tTTYSplashAdapter2 = TTTYSplashAdapter.this;
            tTTYSplashAdapter.f = new TTTYSplashEyeAd(tTTYSplashAdapter2, tTTYSplashAdapter2.d);
            TTTYSplashAdapter.this.f.setSplashView(TTTYSplashAdapter.this.g);
        }

        @Override
        public final void onSplashClickEyeClick() {
            if (TTTYSplashAdapter.this.mImpressionListener != null) {
                TTTYSplashAdapter.this.mImpressionListener.onSplashAdClicked();
            }
        }

        @Override
        public final void onSplashClickEyeClose() {
            TYSplashEyeAdListener splashEyeAdListener;
            if (!TTTYSplashAdapter.this.e || TTTYSplashAdapter.this.f == null || (splashEyeAdListener = TTTYSplashAdapter.this.f.getSplashEyeAdListener()) == null) {
                return;
            }
            splashEyeAdListener.onAdDismiss(true, "");
        }
    }

    private void a() {
        if (this.l) {
            this.d.setSplashClickEyeListener(new 3());
        }
    }

    private static int a(Context context, float f) {
        float f2 = context.getResources().getDisplayMetrics().density;
        if (f2 <= 0.0f) {
            f2 = 1.0f;
        }
        return (int) ((f / f2) + 0.5f);
    }

    @Override
    public boolean isAdReady() {
        return this.d != null;
    }

    @Override
    public void show(Activity activity, ViewGroup viewGroup) {
        if (this.d != null) {
            if (isCustomSkipView()) {
                this.d.hideSkipButton();
            }
            this.d.setDownloadListener(this.j);
            if (this.l) {
                this.d.setSplashClickEyeListener(new 3());
            }
            this.d.setSplashAdListener(this);
            View splashView = this.d.getSplashView();
            if (splashView != null) {
                if (this.l) {
                    this.g = splashView;
                    viewGroup.addView(splashView, new ViewGroup.LayoutParams(-1, -1));
                } else {
                    viewGroup.addView(splashView, new ViewGroup.LayoutParams(-1, -1));
                }
            }
        }
    }

    @Override
    public String getNetworkName() {
        return TTTYInitManager.getInstance().getNetworkName();
    }

    @Override
    public String getNetworkPlacementId() {
        return this.b;
    }

    @Override
    public String getNetworkSDKVersion() {
        return TTTYInitManager.getInstance().getNetworkVersion();
    }

    @Override
    public ITYSplashEyeAd getSplashEyeAd() {
        return this.f;
    }

    @Override
    public void startSplashCustomSkipViewClickEye() {
        CSJSplashAd cSJSplashAd = this.d;
        if (cSJSplashAd != null) {
            cSJSplashAd.startClickEye();
        }
    }

    @Override
    public Map<String, Object> getNetworkInfoMap() {
        return this.m;
    }

    @Override
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.i = true;
        if (getMixedFormatAdType() == 0) {
            return false;
        }
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    private boolean a(Map<String, Object> map) {
        String str = (String) map.get("app_id");
        this.b = (String) map.get("slot_id");
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(this.b)) {
            return false;
        }
        this.c = "0";
        if (map.containsKey("personalized_template")) {
            this.c = (String) map.get("personalized_template");
        }
        if (!map.containsKey("payload")) {
            return true;
        }
        this.h = map.get("payload").toString();
        return true;
    }

    @Override
    public void onSplashAdShow(CSJSplashAd cSJSplashAd) {
        try {
            TTTYInitManager.getInstance().a(getTrackingInfo().l(), new WeakReference(this.d));
        } catch (Throwable unused) {
        }
        if (this.mImpressionListener != null) {
            this.mImpressionListener.onSplashAdShow();
        }
    }

    @Override
    public void onSplashAdClick(CSJSplashAd cSJSplashAd) {
        if (this.mImpressionListener != null) {
            this.mImpressionListener.onSplashAdClicked();
        }
    }

    @Override
    public void onSplashAdClose(CSJSplashAd cSJSplashAd, int i) {
        if (i == 1) {
            this.mDismissType = 2;
            if (this.l && cSJSplashAd != null) {
                cSJSplashAd.startClickEye();
            }
        } else if (i == 2) {
            this.mDismissType = 3;
        } else if (i == 3) {
            this.mDismissType = 4;
        }
        if (this.mImpressionListener != null) {
            this.mImpressionListener.onSplashAdDismiss();
        }
    }

    @Override
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, final Map<String, Object> map2) {
        boolean z;
        String str = (String) map.get("app_id");
        this.b = (String) map.get("slot_id");
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(this.b)) {
            z = false;
        } else {
            this.c = "0";
            if (map.containsKey("personalized_template")) {
                this.c = (String) map.get("personalized_template");
            }
            if (map.containsKey("payload")) {
                this.h = map.get("payload").toString();
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
                        if (TTTYSplashAdapter.this.getMixedFormatAdType() == 0) {
                            TTTYSplashAdapter.this.thirdPartyLoad(new TTTYAdapter(), context, map, map2);
                        } else {
                            TTTYSplashAdapter.a(TTTYSplashAdapter.this, context, map, map2);
                        }
                    } catch (Throwable th) {
                        TTTYSplashAdapter.this.notifyATLoadFail("", th.getMessage());
                    }
                }

                @Override
                public final void onFail(String str2) {
                    TTTYSplashAdapter.this.notifyATLoadFail("", str2);
                }
            });
        }
    }

    static void a(TTTYSplashAdapter tTTYSplashAdapter, Context context, Map map, Map map2) {
        TTVfManager vfManager = TTVfSdk.getVfManager();
        Context applicationContext = context.getApplicationContext();
        TTVfNative tTVfNativeCreateVfNative = vfManager.createVfNative(applicationContext);
        TTTYCustomAdSlotBuilder tTTYCustomAdSlotBuilder = new TTTYCustomAdSlotBuilder(tTTYSplashAdapter.b, map, map2);
        int i = 0;
        try {
        } catch (Throwable th) {
            th.printStackTrace();
        }
        int i2 = map2.containsKey(TYAdConst.KEY.AD_WIDTH) ? Integer.parseInt(map2.get(TYAdConst.KEY.AD_WIDTH).toString()) : 0;
        try {
            if (map2.containsKey(TYAdConst.KEY.AD_HEIGHT)) {
                i = Integer.parseInt(map2.get(TYAdConst.KEY.AD_HEIGHT).toString());
            }
        } catch (Throwable th2) {
            th2.printStackTrace();
        }
        if (i2 <= 0) {
            i2 = applicationContext.getResources().getDisplayMetrics().widthPixels;
        }
        if (i <= 0) {
            i = applicationContext.getResources().getDisplayMetrics().heightPixels;
        }
        tTTYCustomAdSlotBuilder.setImageAcceptedSize(i2, i);
        tTTYCustomAdSlotBuilder.setExpressViewAcceptedSize(a(applicationContext, i2), a(applicationContext, i));
        try {
            if (map.containsKey("zoomoutad_sw")) {
                tTTYSplashAdapter.l = TextUtils.equals("2", map.get("zoomoutad_sw").toString());
            }
        } catch (Exception unused) {
        }
        try {
            if (map.containsKey("button_type")) {
                map.get("button_type");
            }
        } catch (Exception unused2) {
        }
        tTTYSplashAdapter.postOnMainThread(tTTYSplashAdapter.new 2(tTTYCustomAdSlotBuilder, tTVfNativeCreateVfNative));
    }
}
