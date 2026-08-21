package com.tkay.network.myoffer;

import android.content.Context;
import android.view.View;
import com.tkay.banner.unitgroup.api.CustomBannerAdapter;
import com.tkay.basead.c.e;
import com.tkay.basead.e.a;
import com.tkay.basead.e.c;
import com.tkay.basead.f.b;
import com.tkay.core.api.BaseAd;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.d;
import com.tkay.core.common.f.i;
import com.tkay.core.common.l.g;
import com.tkay.core.common.s;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class MyOfferTYBannerAdapter extends CustomBannerAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f7649a;
    i b;
    Map<String, Object> c;
    private b d;
    private View e;
    private boolean f = false;

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return "MyOffer";
    }

    @Override // com.tkay.banner.unitgroup.api.CustomBannerAdapter
    public View getBannerView() {
        b bVar;
        if (this.e == null && (bVar = this.d) != null && bVar.a()) {
            this.e = this.d.b();
            if (this.c == null) {
                this.c = com.tkay.basead.b.a(this.d);
            }
        }
        return this.e;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        if (map.containsKey("my_oid")) {
            this.f7649a = map.get("my_oid").toString();
        }
        if (map.containsKey(f.k.f6060a)) {
            this.b = (i) map.get(f.k.f6060a);
        }
        a(context);
        this.d.a(new c() { // from class: com.tkay.network.myoffer.MyOfferTYBannerAdapter.1
            @Override // com.tkay.basead.e.c
            public final void onAdDataLoaded() {
            }

            @Override // com.tkay.basead.e.c
            public final void onAdCacheLoaded() {
                MyOfferTYBannerAdapter myOfferTYBannerAdapter = MyOfferTYBannerAdapter.this;
                myOfferTYBannerAdapter.e = myOfferTYBannerAdapter.d.b();
                MyOfferTYBannerAdapter myOfferTYBannerAdapter2 = MyOfferTYBannerAdapter.this;
                myOfferTYBannerAdapter2.c = com.tkay.basead.b.a(myOfferTYBannerAdapter2.d);
                if (MyOfferTYBannerAdapter.this.mLoadListener != null) {
                    if (MyOfferTYBannerAdapter.this.e != null) {
                        MyOfferTYBannerAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                    } else {
                        MyOfferTYBannerAdapter.this.mLoadListener.onAdLoadError("", "MyOffer bannerView = null");
                    }
                }
            }

            @Override // com.tkay.basead.e.c
            public final void onAdLoadFailed(e eVar) {
                if (MyOfferTYBannerAdapter.this.mLoadListener != null) {
                    MyOfferTYBannerAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }

    private void a(Context context) {
        b bVar = new b(context, this.b, this.f7649a, this.f);
        this.d = bVar;
        bVar.a(new a() { // from class: com.tkay.network.myoffer.MyOfferTYBannerAdapter.2
            @Override // com.tkay.basead.e.a
            public final void onDeeplinkCallback(boolean z) {
            }

            @Override // com.tkay.basead.e.a
            public final void onShowFailed(e eVar) {
            }

            @Override // com.tkay.basead.e.a
            public final void onAdShow() {
                if (MyOfferTYBannerAdapter.this.mImpressionEventListener != null) {
                    MyOfferTYBannerAdapter.this.mImpressionEventListener.onBannerAdShow();
                }
            }

            @Override // com.tkay.basead.e.a
            public final void onAdClosed() {
                if (MyOfferTYBannerAdapter.this.mImpressionEventListener != null) {
                    MyOfferTYBannerAdapter.this.mImpressionEventListener.onBannerAdClose();
                }
            }

            @Override // com.tkay.basead.e.a
            public final void onAdClick(int i) {
                d trackingInfo = MyOfferTYBannerAdapter.this.getTrackingInfo();
                if (trackingInfo != null) {
                    trackingInfo.x(i);
                }
                if (MyOfferTYBannerAdapter.this.mImpressionEventListener != null) {
                    MyOfferTYBannerAdapter.this.mImpressionEventListener.onBannerAdClicked();
                }
            }
        });
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean initNetworkObjectByPlacementId(Context context, Map<String, Object> map, Map<String, Object> map2) {
        if (map.containsKey("my_oid")) {
            this.f7649a = map.get("my_oid").toString();
        }
        if (map.containsKey(f.k.f6060a)) {
            this.b = (i) map.get(f.k.f6060a);
        }
        if (map.containsKey(s.b)) {
            this.f = ((Boolean) map.get(s.b)).booleanValue();
        }
        a(context);
        return true;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        this.e = null;
        b bVar = this.d;
        if (bVar != null) {
            bVar.a((a) null);
            this.d.c();
            this.d = null;
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.f7649a;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return g.a();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public Map<String, Object> getNetworkInfoMap() {
        return this.c;
    }
}
