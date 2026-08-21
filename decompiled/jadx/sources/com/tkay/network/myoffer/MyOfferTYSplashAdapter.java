package com.tkay.network.myoffer;

import android.app.Activity;
import android.content.Context;
import android.view.ViewGroup;
import com.tkay.basead.b;
import com.tkay.basead.c.e;
import com.tkay.basead.e.a;
import com.tkay.basead.e.c;
import com.tkay.basead.f.g;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.d;
import com.tkay.core.common.f.i;
import com.tkay.splashad.unitgroup.api.CustomSplashAdapter;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class MyOfferTYSplashAdapter extends CustomSplashAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f7660a;
    g b;
    i c;
    Map<String, Object> d;

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return "MyOffer";
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashAdapter
    public boolean isSupportCustomSkipView() {
        return true;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        if (map.containsKey("my_oid")) {
            this.f7660a = map.get("my_oid").toString();
        }
        if (map.containsKey(f.k.f6060a)) {
            this.c = (i) map.get(f.k.f6060a);
        }
        g gVar = new g(context, this.c, this.f7660a);
        this.b = gVar;
        gVar.a(new AnonymousClass2());
        this.b.a(new c() { // from class: com.tkay.network.myoffer.MyOfferTYSplashAdapter.1
            @Override // com.tkay.basead.e.c
            public final void onAdDataLoaded() {
            }

            @Override // com.tkay.basead.e.c
            public final void onAdCacheLoaded() {
                if (MyOfferTYSplashAdapter.this.mLoadListener != null) {
                    MyOfferTYSplashAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            }

            @Override // com.tkay.basead.e.c
            public final void onAdLoadFailed(e eVar) {
                if (MyOfferTYSplashAdapter.this.mLoadListener != null) {
                    MyOfferTYSplashAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean isAdReady() {
        g gVar = this.b;
        boolean z = gVar != null && gVar.a();
        if (z && this.d == null) {
            this.d = b.a(this.b);
        }
        return z;
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashAdapter
    public void show(Activity activity, ViewGroup viewGroup) {
        if (this.b != null) {
            if (isCustomSkipView()) {
                this.b.b();
            }
            this.b.a(viewGroup);
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        g gVar = this.b;
        if (gVar != null) {
            gVar.f();
            this.b = null;
        }
        this.c = null;
    }

    /* JADX INFO: renamed from: com.tkay.network.myoffer.MyOfferTYSplashAdapter$2, reason: invalid class name */
    final class AnonymousClass2 implements a {
        @Override // com.tkay.basead.e.a
        public final void onDeeplinkCallback(boolean z) {
        }

        AnonymousClass2() {
        }

        @Override // com.tkay.basead.e.a
        public final void onAdShow() {
            if (MyOfferTYSplashAdapter.this.mImpressionListener != null) {
                MyOfferTYSplashAdapter.this.mImpressionListener.onSplashAdShow();
            }
        }

        @Override // com.tkay.basead.e.a
        public final void onAdClosed() {
            if (MyOfferTYSplashAdapter.this.mImpressionListener != null) {
                MyOfferTYSplashAdapter.this.mImpressionListener.onSplashAdDismiss();
            }
        }

        @Override // com.tkay.basead.e.a
        public final void onAdClick(int i) {
            d trackingInfo = MyOfferTYSplashAdapter.this.getTrackingInfo();
            if (trackingInfo != null) {
                trackingInfo.x(i);
            }
            if (MyOfferTYSplashAdapter.this.mImpressionListener != null) {
                MyOfferTYSplashAdapter.this.mImpressionListener.onSplashAdClicked();
            }
        }

        @Override // com.tkay.basead.e.a
        public final void onShowFailed(e eVar) {
            if (MyOfferTYSplashAdapter.this.mImpressionListener != null) {
                MyOfferTYSplashAdapter.this.mImpressionListener.onSplashAdShowFail(ErrorCode.getErrorCode(ErrorCode.adShowError, eVar.a(), eVar.b()));
            }
        }
    }

    private void a(Context context) {
        g gVar = new g(context, this.c, this.f7660a);
        this.b = gVar;
        gVar.a(new AnonymousClass2());
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.f7660a;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return com.tkay.core.common.l.g.a();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public Map<String, Object> getNetworkInfoMap() {
        return this.d;
    }
}
