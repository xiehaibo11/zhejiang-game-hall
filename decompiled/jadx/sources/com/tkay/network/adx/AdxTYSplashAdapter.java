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

/* JADX INFO: loaded from: classes3.dex */
public class AdxTYSplashAdapter extends CustomSplashAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    g f7537a;
    i b;
    Map<String, Object> c;

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return "";
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean isAdReady() {
        g gVar = this.f7537a;
        boolean z = gVar != null && gVar.c();
        if (z && this.c == null) {
            this.c = b.a(this.f7537a);
        }
        return z;
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashAdapter
    public void show(Activity activity, ViewGroup viewGroup) {
        g gVar = this.f7537a;
        if (gVar != null) {
            gVar.a(new e(gVar.e()) { // from class: com.tkay.network.adx.AdxTYSplashAdapter.2
                @Override // com.tkay.basead.e.e, com.tkay.basead.e.a
                public final void onAdShow() {
                    super.onAdShow();
                    if (AdxTYSplashAdapter.this.mImpressionListener != null) {
                        AdxTYSplashAdapter.this.mImpressionListener.onSplashAdShow();
                    }
                }

                @Override // com.tkay.basead.e.a
                public final void onAdClosed() {
                    if (AdxTYSplashAdapter.this.mImpressionListener != null) {
                        AdxTYSplashAdapter.this.mImpressionListener.onSplashAdDismiss();
                    }
                }

                @Override // com.tkay.basead.e.a
                public final void onAdClick(int i) {
                    d trackingInfo = AdxTYSplashAdapter.this.getTrackingInfo();
                    if (trackingInfo != null) {
                        trackingInfo.x(i);
                    }
                    if (AdxTYSplashAdapter.this.mImpressionListener != null) {
                        AdxTYSplashAdapter.this.mImpressionListener.onSplashAdClicked();
                    }
                }

                @Override // com.tkay.basead.e.a
                public final void onDeeplinkCallback(boolean z) {
                    if (AdxTYSplashAdapter.this.mImpressionListener != null) {
                        AdxTYSplashAdapter.this.mImpressionListener.onDeeplinkCallback(z);
                    }
                }

                @Override // com.tkay.basead.e.a
                public final void onShowFailed(com.tkay.basead.c.e eVar) {
                    if (AdxTYSplashAdapter.this.mImpressionListener != null) {
                        AdxTYSplashAdapter.this.mImpressionListener.onSplashAdShowFail(ErrorCode.getErrorCode(ErrorCode.adShowError, eVar.a(), eVar.b()));
                    }
                }
            });
            if (isCustomSkipView()) {
                this.f7537a.a();
            }
            this.f7537a.a(viewGroup);
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        g gVar = this.f7537a;
        if (gVar != null) {
            gVar.b();
            this.f7537a = null;
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
        this.b = (i) map.get(f.k.f6060a);
        g gVar = new g(context, b.a.ADX_OFFER_REQUEST_TYPE, this.b);
        this.f7537a = gVar;
        gVar.a(new c.a().d(i3).e(i4).f(i2).a());
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return AdxTYInitManager.getInstance().getNetworkName();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        i iVar = this.b;
        return iVar != null ? iVar.b : "";
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public Map<String, Object> getNetworkInfoMap() {
        return this.c;
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashAdapter
    public boolean isSupportCustomSkipView() {
        g gVar = this.f7537a;
        return gVar != null && gVar.f();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        i iVar = (i) map.get(f.k.f6060a);
        AdxBidRequestInfo adxBidRequestInfo = new AdxBidRequestInfo(context, iVar != null ? iVar.b : "");
        adxBidRequestInfo.fillSplashData();
        if (tYBidRequestInfoListener != null) {
            tYBidRequestInfoListener.onSuccess(adxBidRequestInfo);
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
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
        this.b = (i) map.get(f.k.f6060a);
        g gVar = new g(context, b.a.ADX_OFFER_REQUEST_TYPE, this.b);
        this.f7537a = gVar;
        gVar.a(new c.a().d(i3).e(i4).f(i2).a());
        this.f7537a.a(new com.tkay.basead.e.c() { // from class: com.tkay.network.adx.AdxTYSplashAdapter.1
            @Override // com.tkay.basead.e.c
            public final void onAdDataLoaded() {
                if (AdxTYSplashAdapter.this.mLoadListener != null) {
                    AdxTYSplashAdapter.this.mLoadListener.onAdDataLoaded();
                }
            }

            @Override // com.tkay.basead.e.c
            public final void onAdCacheLoaded() {
                AdxTYSplashAdapter adxTYSplashAdapter = AdxTYSplashAdapter.this;
                adxTYSplashAdapter.c = com.tkay.basead.b.a(adxTYSplashAdapter.f7537a);
                if (AdxTYSplashAdapter.this.mLoadListener != null) {
                    AdxTYSplashAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            }

            @Override // com.tkay.basead.e.c
            public final void onAdLoadFailed(com.tkay.basead.c.e eVar) {
                if (AdxTYSplashAdapter.this.mLoadListener != null) {
                    AdxTYSplashAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }
}
