package com.tkay.network.adx;

import android.app.Activity;
import android.content.Context;
import android.view.ViewGroup;
import com.tkay.basead.b;
import com.tkay.basead.d.b;
import com.tkay.basead.d.c;
import com.tkay.basead.d.g;
import com.tkay.basead.e.e;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.d;
import com.tkay.core.common.f.i;
import com.tkay.splashad.unitgroup.api.CustomSplashAdapter;
import java.util.Map;

public class AdxTYSplashAdapter extends CustomSplashAdapter {
    g a;
    i b;
    Map<String, Object> c;

    @Override
    public String getNetworkSDKVersion() {
        return "";
    }

    @Override
    public boolean isAdReady() {
        g gVar = this.a;
        boolean z = gVar != null && gVar.c();
        if (z && this.c == null) {
            this.c = b.a(this.a);
        }
        return z;
    }

    @Override
    public void show(Activity activity, ViewGroup viewGroup) {
        g gVar = this.a;
        if (gVar != null) {
            gVar.a(new e(gVar.e()) {
                @Override
                public final void onAdShow() {
                    super.onAdShow();
                    if (AdxTYSplashAdapter.this.mImpressionListener != null) {
                        AdxTYSplashAdapter.this.mImpressionListener.onSplashAdShow();
                    }
                }

                @Override
                public final void onAdClosed() {
                    if (AdxTYSplashAdapter.this.mImpressionListener != null) {
                        AdxTYSplashAdapter.this.mImpressionListener.onSplashAdDismiss();
                    }
                }

                @Override
                public final void onAdClick(int i) {
                    d trackingInfo = AdxTYSplashAdapter.this.getTrackingInfo();
                    if (trackingInfo != null) {
                        trackingInfo.x(i);
                    }
                    if (AdxTYSplashAdapter.this.mImpressionListener != null) {
                        AdxTYSplashAdapter.this.mImpressionListener.onSplashAdClicked();
                    }
                }

                @Override
                public final void onDeeplinkCallback(boolean z) {
                    if (AdxTYSplashAdapter.this.mImpressionListener != null) {
                        AdxTYSplashAdapter.this.mImpressionListener.onDeeplinkCallback(z);
                    }
                }

                @Override
                public final void onShowFailed(com.tkay.basead.c.e eVar) {
                    if (AdxTYSplashAdapter.this.mImpressionListener != null) {
                        AdxTYSplashAdapter.this.mImpressionListener.onSplashAdShowFail(ErrorCode.getErrorCode(ErrorCode.adShowError, eVar.a(), eVar.b()));
                    }
                }
            });
            if (isCustomSkipView()) {
                this.a.a();
            }
            this.a.a(viewGroup);
        }
    }

    @Override
    public void destory() {
        g gVar = this.a;
        if (gVar != null) {
            gVar.b();
            this.a = null;
        }
        this.b = null;
    }

    private void a(Context context, Map<String, Object> map) {
        Object obj;
        int i;
        Object obj2;
        Object obj3;
        int i2 = 1;
        int i3 = (!map.containsKey("orientation") || (obj3 = map.get("orientation")) == null) ? 1 : Integer.parseInt(obj3.toString());
        int i4 = (!map.containsKey(com.tkay.expressad.d.a.b.dk) || (obj2 = map.get(com.tkay.expressad.d.a.b.dk)) == null) ? 5 : Integer.parseInt(obj2.toString()) * 1000;
        if (map.containsKey("allows_skip") && (obj = map.get("allows_skip")) != null && (i = Integer.parseInt(obj.toString())) != 0) {
            i2 = i == 1 ? 0 : i;
        }
        this.b = (i) map.get(f.k.a);
        g gVar = new g(context, b.a.a, this.b);
        this.a = gVar;
        gVar.a(new c.a().d(i3).e(i4).f(i2).a());
    }

    @Override
    public String getNetworkName() {
        return AdxTYInitManager.getInstance().getNetworkName();
    }

    @Override
    public String getNetworkPlacementId() {
        i iVar = this.b;
        return iVar != null ? iVar.b : "";
    }

    @Override
    public Map<String, Object> getNetworkInfoMap() {
        return this.c;
    }

    @Override
    public boolean isSupportCustomSkipView() {
        g gVar = this.a;
        return gVar != null && gVar.f();
    }

    @Override
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        i iVar = (i) map.get(f.k.a);
        AdxBidRequestInfo adxBidRequestInfo = new AdxBidRequestInfo(context, iVar != null ? iVar.b : "");
        adxBidRequestInfo.fillSplashData();
        if (tYBidRequestInfoListener != null) {
            tYBidRequestInfoListener.onSuccess(adxBidRequestInfo);
        }
    }

    @Override
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        Object obj;
        int i;
        Object obj2;
        Object obj3;
        int i2 = 1;
        int i3 = (!map.containsKey("orientation") || (obj3 = map.get("orientation")) == null) ? 1 : Integer.parseInt(obj3.toString());
        int i4 = (!map.containsKey(com.tkay.expressad.d.a.b.dk) || (obj2 = map.get(com.tkay.expressad.d.a.b.dk)) == null) ? 5 : Integer.parseInt(obj2.toString()) * 1000;
        if (map.containsKey("allows_skip") && (obj = map.get("allows_skip")) != null && (i = Integer.parseInt(obj.toString())) != 0) {
            i2 = i == 1 ? 0 : i;
        }
        this.b = (i) map.get(f.k.a);
        g gVar = new g(context, b.a.a, this.b);
        this.a = gVar;
        gVar.a(new c.a().d(i3).e(i4).f(i2).a());
        this.a.a(new com.tkay.basead.e.c() {
            @Override
            public final void onAdDataLoaded() {
                if (AdxTYSplashAdapter.this.mLoadListener != null) {
                    AdxTYSplashAdapter.this.mLoadListener.onAdDataLoaded();
                }
            }

            @Override
            public final void onAdCacheLoaded() {
                AdxTYSplashAdapter adxTYSplashAdapter = AdxTYSplashAdapter.this;
                adxTYSplashAdapter.c = com.tkay.basead.b.a(adxTYSplashAdapter.a);
                if (AdxTYSplashAdapter.this.mLoadListener != null) {
                    AdxTYSplashAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            }

            @Override
            public final void onAdLoadFailed(com.tkay.basead.c.e eVar) {
                if (AdxTYSplashAdapter.this.mLoadListener != null) {
                    AdxTYSplashAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }
}
