package com.tkay.network.onlineapi;

import android.app.Activity;
import android.content.Context;
import android.view.ViewGroup;
import com.tkay.basead.b;
import com.tkay.basead.c.e;
import com.tkay.basead.d.b;
import com.tkay.basead.d.c;
import com.tkay.basead.d.g;
import com.tkay.basead.e.a;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.d;
import com.tkay.core.common.f.i;
import com.tkay.splashad.unitgroup.api.CustomSplashAdapter;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class OnlineApiTYSplashAdapter extends CustomSplashAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    g f7676a;
    i b;
    String c;
    Map<String, Object> d;

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return "";
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return "";
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashAdapter
    public boolean isSupportCustomSkipView() {
        return true;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean isAdReady() {
        g gVar = this.f7676a;
        boolean z = gVar != null && gVar.c();
        if (z && this.d == null) {
            this.d = b.a(this.f7676a);
        }
        return z;
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashAdapter
    public void show(Activity activity, ViewGroup viewGroup) {
        if (this.f7676a != null) {
            if (isCustomSkipView()) {
                this.f7676a.a();
            }
            this.f7676a.a(viewGroup);
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        g gVar = this.f7676a;
        if (gVar != null) {
            gVar.b();
            this.f7676a = null;
        }
        this.b = null;
    }

    private void a(Context context, Map<String, Object> map) {
        Object obj;
        int i;
        Object obj2;
        Object obj3;
        this.c = map.get("unit_id") != null ? map.get("unit_id").toString() : "";
        int i2 = 5;
        int i3 = 1;
        int i4 = (!map.containsKey("orientation") || (obj3 = map.get("orientation")) == null) ? 1 : Integer.parseInt(obj3.toString());
        if (map.containsKey(com.tkay.expressad.d.a.b.dk) && (obj2 = map.get(com.tkay.expressad.d.a.b.dk)) != null) {
            i2 = Integer.parseInt(obj2.toString()) * 1000;
        }
        if (map.containsKey("allows_skip") && (obj = map.get("allows_skip")) != null && (i = Integer.parseInt(obj.toString())) != 0) {
            i3 = i == 1 ? 0 : i;
        }
        this.b = (i) map.get(f.k.f6060a);
        g gVar = new g(context, b.a.ONLINE_API_OFFER_REQUEST_TYPE, this.b);
        this.f7676a = gVar;
        gVar.a(new c.a().d(i4).e(i2).f(i3).a());
        this.f7676a.a(new AnonymousClass2());
    }

    /* JADX INFO: renamed from: com.tkay.network.onlineapi.OnlineApiTYSplashAdapter$2, reason: invalid class name */
    final class AnonymousClass2 implements a {
        AnonymousClass2() {
        }

        @Override // com.tkay.basead.e.a
        public final void onAdShow() {
            if (OnlineApiTYSplashAdapter.this.mImpressionListener != null) {
                OnlineApiTYSplashAdapter.this.mImpressionListener.onSplashAdShow();
            }
        }

        @Override // com.tkay.basead.e.a
        public final void onAdClosed() {
            if (OnlineApiTYSplashAdapter.this.mImpressionListener != null) {
                OnlineApiTYSplashAdapter.this.mImpressionListener.onSplashAdDismiss();
            }
        }

        @Override // com.tkay.basead.e.a
        public final void onAdClick(int i) {
            d trackingInfo = OnlineApiTYSplashAdapter.this.getTrackingInfo();
            if (trackingInfo != null) {
                trackingInfo.x(i);
            }
            if (OnlineApiTYSplashAdapter.this.mImpressionListener != null) {
                OnlineApiTYSplashAdapter.this.mImpressionListener.onSplashAdClicked();
            }
        }

        @Override // com.tkay.basead.e.a
        public final void onDeeplinkCallback(boolean z) {
            if (OnlineApiTYSplashAdapter.this.mImpressionListener != null) {
                OnlineApiTYSplashAdapter.this.mImpressionListener.onDeeplinkCallback(z);
            }
        }

        @Override // com.tkay.basead.e.a
        public final void onShowFailed(e eVar) {
            if (OnlineApiTYSplashAdapter.this.mImpressionListener != null) {
                OnlineApiTYSplashAdapter.this.mImpressionListener.onSplashAdShowFail(ErrorCode.getErrorCode(ErrorCode.adShowError, eVar.a(), eVar.b()));
            }
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.c;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public Map<String, Object> getNetworkInfoMap() {
        return this.d;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        Object obj;
        int i;
        Object obj2;
        Object obj3;
        this.c = map.get("unit_id") != null ? map.get("unit_id").toString() : "";
        int i2 = 5;
        int i3 = 1;
        int i4 = (!map.containsKey("orientation") || (obj3 = map.get("orientation")) == null) ? 1 : Integer.parseInt(obj3.toString());
        if (map.containsKey(com.tkay.expressad.d.a.b.dk) && (obj2 = map.get(com.tkay.expressad.d.a.b.dk)) != null) {
            i2 = Integer.parseInt(obj2.toString()) * 1000;
        }
        if (map.containsKey("allows_skip") && (obj = map.get("allows_skip")) != null && (i = Integer.parseInt(obj.toString())) != 0) {
            i3 = i == 1 ? 0 : i;
        }
        this.b = (i) map.get(f.k.f6060a);
        g gVar = new g(context, b.a.ONLINE_API_OFFER_REQUEST_TYPE, this.b);
        this.f7676a = gVar;
        gVar.a(new c.a().d(i4).e(i2).f(i3).a());
        this.f7676a.a(new AnonymousClass2());
        this.f7676a.a(new com.tkay.basead.e.c() { // from class: com.tkay.network.onlineapi.OnlineApiTYSplashAdapter.1
            @Override // com.tkay.basead.e.c
            public final void onAdDataLoaded() {
                if (OnlineApiTYSplashAdapter.this.mLoadListener != null) {
                    OnlineApiTYSplashAdapter.this.mLoadListener.onAdDataLoaded();
                }
            }

            @Override // com.tkay.basead.e.c
            public final void onAdCacheLoaded() {
                OnlineApiTYSplashAdapter onlineApiTYSplashAdapter = OnlineApiTYSplashAdapter.this;
                onlineApiTYSplashAdapter.d = com.tkay.basead.b.a(onlineApiTYSplashAdapter.f7676a);
                if (OnlineApiTYSplashAdapter.this.mLoadListener != null) {
                    OnlineApiTYSplashAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            }

            @Override // com.tkay.basead.e.c
            public final void onAdLoadFailed(e eVar) {
                if (OnlineApiTYSplashAdapter.this.mLoadListener != null) {
                    OnlineApiTYSplashAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }
}
