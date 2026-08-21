package com.tkay.network.gdt;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.widget.FrameLayout;
import com.qq.e.ads.banner2.UnifiedBannerADListener;
import com.qq.e.ads.banner2.UnifiedBannerView;
import com.qq.e.comm.compliance.DownloadConfirmCallBack;
import com.qq.e.comm.compliance.DownloadConfirmListener;
import com.qq.e.comm.util.AdError;
import com.tkay.banner.unitgroup.api.CustomBannerAdapter;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.core.api.TYBiddingResult;
import com.tkay.core.api.TYInitMediation;
import java.lang.ref.WeakReference;
import java.util.Map;

public class GDTTYBannerAdapter extends CustomBannerAdapter {
    String a;
    String b;
    String c;
    UnifiedBannerView d;
    int f;
    boolean g;
    boolean h;
    private final String j = GDTTYBannerAdapter.class.getSimpleName();
    int e = 0;
    DownloadConfirmListener i = new DownloadConfirmListener() {
        @Override
        public final void onDownloadConfirm(Activity activity, int i, String str, DownloadConfirmCallBack downloadConfirmCallBack) {
            if (GDTTYBannerAdapter.this.mImpressionEventListener != null) {
                GDTDownloadFirmInfo gDTDownloadFirmInfo = new GDTDownloadFirmInfo();
                gDTDownloadFirmInfo.appInfoUrl = str;
                gDTDownloadFirmInfo.scenes = i;
                gDTDownloadFirmInfo.confirmCallBack = downloadConfirmCallBack;
                GDTTYBannerAdapter.this.mImpressionEventListener.onDownloadConfirm(activity, gDTDownloadFirmInfo);
            }
        }
    };

    final class 2 implements UnifiedBannerADListener {
        @Override
        public final void onADLeftApplication() {
        }

        2() {
        }

        @Override
        public final void onNoAD(AdError adError) {
            GDTTYBannerAdapter.this.d = null;
            GDTTYBannerAdapter.this.notifyATLoadFail(String.valueOf(adError.getErrorCode()), adError.getErrorMsg());
        }

        @Override
        public final void onADReceive() {
            if (GDTTYBannerAdapter.this.g && GDTTYBannerAdapter.this.d != null) {
                GDTTYBannerAdapter.this.d.setDownloadConfirmListener(GDTTYBannerAdapter.this.i);
            }
            if (!GDTTYBannerAdapter.this.h) {
                if (GDTTYBannerAdapter.this.mLoadListener != null) {
                    GDTTYBannerAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            } else if (GDTTYBannerAdapter.this.mBiddingListener != null) {
                if (GDTTYBannerAdapter.this.d != null) {
                    double ecpm = GDTTYBannerAdapter.this.d.getECPM();
                    GDTTYBiddingNotice gDTTYBiddingNotice = new GDTTYBiddingNotice(GDTTYBannerAdapter.this.d);
                    TYBiddingListener tYBiddingListener = GDTTYBannerAdapter.this.mBiddingListener;
                    StringBuilder sb = new StringBuilder();
                    sb.append(System.currentTimeMillis());
                    tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(ecpm, sb.toString(), gDTTYBiddingNotice, TYAdConst.CURRENCY.RMB_CENT), null);
                    return;
                }
                GDTTYBannerAdapter.this.notifyATLoadFail("", "GDT: Offer had been destroy.");
            }
        }

        @Override
        public final void onADExposure() {
            try {
                GDTTYInitManager.getInstance().a(GDTTYBannerAdapter.this.getTrackingInfo().l(), new WeakReference(GDTTYBannerAdapter.this.d));
            } catch (Throwable unused) {
            }
            if (GDTTYBannerAdapter.this.mImpressionEventListener != null) {
                GDTTYBannerAdapter.this.mImpressionEventListener.onBannerAdShow();
            }
        }

        @Override
        public final void onADClosed() {
            if (GDTTYBannerAdapter.this.mImpressionEventListener != null) {
                GDTTYBannerAdapter.this.mImpressionEventListener.onBannerAdClose();
            }
        }

        @Override
        public final void onADClicked() {
            if (GDTTYBannerAdapter.this.mImpressionEventListener != null) {
                GDTTYBannerAdapter.this.mImpressionEventListener.onBannerAdClicked();
            }
        }
    }

    private void a(Activity activity, Map<String, Object> map) {
        UnifiedBannerView unifiedBannerView;
        2 r3 = new 2();
        if (TextUtils.isEmpty(this.c) || this.h) {
            UnifiedBannerView unifiedBannerView2 = new UnifiedBannerView(activity, this.b, r3);
            GDTTYInitManager.getInstance();
            unifiedBannerView2.setLoadAdParams(GDTTYInitManager.a(map));
            unifiedBannerView = unifiedBannerView2;
        } else {
            unifiedBannerView = new UnifiedBannerView(activity, this.b, r3, null, this.c);
        }
        int i = this.f;
        if (i > 0) {
            unifiedBannerView.setRefresh(i);
        } else {
            unifiedBannerView.setRefresh(0);
        }
        this.d = unifiedBannerView;
        if (unifiedBannerView.getLayoutParams() == null) {
            this.d.setLayoutParams(new FrameLayout.LayoutParams(-1, -2));
        }
        unifiedBannerView.loadAD();
    }

    @Override
    public View getBannerView() {
        return this.d;
    }

    @Override
    public String getNetworkName() {
        return GDTTYInitManager.getInstance().getNetworkName();
    }

    private void a(Map<String, Object> map, Map<String, Object> map2) {
        this.a = TYInitMediation.getStringFromMap(map, "app_id");
        this.b = TYInitMediation.getStringFromMap(map, "unit_id");
        this.e = TYInitMediation.getIntFromMap(map, "unit_version");
        this.c = TYInitMediation.getStringFromMap(map, "payload");
        this.g = TYInitMediation.getBooleanFromMap(map2, TYAdConst.KEY.AD_CLICK_CONFIRM_STATUS, false);
        this.f = 0;
        try {
            if (map.containsKey("nw_rft")) {
                int intFromMap = TYInitMediation.getIntFromMap(map, "nw_rft");
                this.f = intFromMap;
                this.f = (int) (intFromMap / 1000.0f);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public void destory() {
        UnifiedBannerView unifiedBannerView = this.d;
        if (unifiedBannerView != null) {
            if (unifiedBannerView instanceof UnifiedBannerView) {
                unifiedBannerView.destroy();
            }
            this.d = null;
        }
    }

    @Override
    public String getNetworkPlacementId() {
        return this.b;
    }

    @Override
    public String getNetworkSDKVersion() {
        return GDTTYInitManager.getInstance().getNetworkVersion();
    }

    @Override
    public TYInitMediation getMediationInitManager() {
        return GDTTYInitManager.getInstance();
    }

    @Override
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.b = TYInitMediation.getStringFromMap(map, "unit_id");
        GDTTYInitManager.getInstance().a(context, map, map2, tYBidRequestInfoListener);
    }

    @Override
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.h = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    @Override
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, Map<String, Object> map2) {
        this.a = TYInitMediation.getStringFromMap(map, "app_id");
        this.b = TYInitMediation.getStringFromMap(map, "unit_id");
        this.e = TYInitMediation.getIntFromMap(map, "unit_version");
        this.c = TYInitMediation.getStringFromMap(map, "payload");
        this.g = TYInitMediation.getBooleanFromMap(map2, TYAdConst.KEY.AD_CLICK_CONFIRM_STATUS, false);
        this.f = 0;
        try {
            if (map.containsKey("nw_rft")) {
                int intFromMap = TYInitMediation.getIntFromMap(map, "nw_rft");
                this.f = intFromMap;
                this.f = (int) (intFromMap / 1000.0f);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        if (TextUtils.isEmpty(this.a) || TextUtils.isEmpty(this.b)) {
            notifyATLoadFail("", "GTD appid or unitId is empty.");
        } else if (!(context instanceof Activity)) {
            notifyATLoadFail("", "Context must be activity.");
        } else {
            runOnNetworkRequestThread(new Runnable() {
                @Override
                public final void run() {
                    GDTTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() {
                        @Override
                        public final void onSuccess() {
                            GDTTYBannerAdapter.a(GDTTYBannerAdapter.this, (Activity) context, map);
                        }

                        @Override
                        public final void onFail(String str) {
                            GDTTYBannerAdapter.this.notifyATLoadFail("", str);
                        }
                    });
                }
            });
        }
    }

    static void a(GDTTYBannerAdapter gDTTYBannerAdapter, Activity activity, Map map) {
        UnifiedBannerView unifiedBannerView;
        2 r3 = gDTTYBannerAdapter.new 2();
        if (TextUtils.isEmpty(gDTTYBannerAdapter.c) || gDTTYBannerAdapter.h) {
            UnifiedBannerView unifiedBannerView2 = new UnifiedBannerView(activity, gDTTYBannerAdapter.b, r3);
            GDTTYInitManager.getInstance();
            unifiedBannerView2.setLoadAdParams(GDTTYInitManager.a((Map<String, Object>) map));
            unifiedBannerView = unifiedBannerView2;
        } else {
            unifiedBannerView = new UnifiedBannerView(activity, gDTTYBannerAdapter.b, r3, null, gDTTYBannerAdapter.c);
        }
        int i = gDTTYBannerAdapter.f;
        if (i > 0) {
            unifiedBannerView.setRefresh(i);
        } else {
            unifiedBannerView.setRefresh(0);
        }
        gDTTYBannerAdapter.d = unifiedBannerView;
        if (unifiedBannerView.getLayoutParams() == null) {
            gDTTYBannerAdapter.d.setLayoutParams(new FrameLayout.LayoutParams(-1, -2));
        }
        unifiedBannerView.loadAD();
    }
}
