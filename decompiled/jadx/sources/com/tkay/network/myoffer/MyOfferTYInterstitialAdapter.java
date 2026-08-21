package com.tkay.network.myoffer;

import android.app.Activity;
import android.content.Context;
import com.tkay.basead.b;
import com.tkay.basead.c.e;
import com.tkay.basead.e.c;
import com.tkay.basead.e.g;
import com.tkay.basead.f.d;
import com.tkay.core.api.BaseAd;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.i;
import com.tkay.core.common.s;
import com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class MyOfferTYInterstitialAdapter extends CustomInterstitialAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    i f7652a;
    Map<String, Object> b;
    private d d;
    private String c = "";
    private boolean e = false;

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return "MyOffer";
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        if (map.containsKey("my_oid")) {
            this.c = map.get("my_oid").toString();
        }
        if (map.containsKey(f.k.f6060a)) {
            this.f7652a = (i) map.get(f.k.f6060a);
        }
        a(context);
        this.d.a(new c() { // from class: com.tkay.network.myoffer.MyOfferTYInterstitialAdapter.1
            @Override // com.tkay.basead.e.c
            public final void onAdDataLoaded() {
            }

            @Override // com.tkay.basead.e.c
            public final void onAdCacheLoaded() {
                MyOfferTYInterstitialAdapter myOfferTYInterstitialAdapter = MyOfferTYInterstitialAdapter.this;
                myOfferTYInterstitialAdapter.b = b.a(myOfferTYInterstitialAdapter.d);
                if (MyOfferTYInterstitialAdapter.this.mLoadListener != null) {
                    MyOfferTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            }

            @Override // com.tkay.basead.e.c
            public final void onAdLoadFailed(e eVar) {
                if (MyOfferTYInterstitialAdapter.this.mLoadListener != null) {
                    MyOfferTYInterstitialAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }

    private void a(Context context) {
        this.d = new d(context, this.f7652a, this.c, this.e);
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean initNetworkObjectByPlacementId(Context context, Map<String, Object> map, Map<String, Object> map2) {
        if (map.containsKey("my_oid")) {
            this.c = map.get("my_oid").toString();
        }
        if (map.containsKey(f.k.f6060a)) {
            this.f7652a = (i) map.get(f.k.f6060a);
        }
        if (map.containsKey(s.b)) {
            this.e = ((Boolean) map.get(s.b)).booleanValue();
        }
        a(context);
        return true;
    }

    @Override // com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter
    public void show(Activity activity) {
        if (isAdReady()) {
            HashMap map = new HashMap(1);
            int iG = com.tkay.core.common.l.d.g(activity);
            map.put(com.tkay.basead.f.c.h, this.f7652a.d);
            map.put("extra_scenario", this.mScenario);
            map.put(com.tkay.basead.f.c.j, Integer.valueOf(iG));
            this.d.a(new g() { // from class: com.tkay.network.myoffer.MyOfferTYInterstitialAdapter.2
                @Override // com.tkay.basead.e.a
                public final void onDeeplinkCallback(boolean z) {
                }

                @Override // com.tkay.basead.e.g
                public final void onRewarded() {
                }

                @Override // com.tkay.basead.e.g
                public final void onVideoAdPlayStart() {
                    if (MyOfferTYInterstitialAdapter.this.mImpressListener != null) {
                        MyOfferTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoStart();
                    }
                }

                @Override // com.tkay.basead.e.g
                public final void onVideoAdPlayEnd() {
                    if (MyOfferTYInterstitialAdapter.this.mImpressListener != null) {
                        MyOfferTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoEnd();
                    }
                }

                @Override // com.tkay.basead.e.a
                public final void onShowFailed(e eVar) {
                    if (MyOfferTYInterstitialAdapter.this.mImpressListener != null) {
                        MyOfferTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoError(eVar.a(), eVar.b());
                    }
                }

                @Override // com.tkay.basead.e.a
                public final void onAdShow() {
                    if (MyOfferTYInterstitialAdapter.this.mImpressListener != null) {
                        MyOfferTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
                    }
                }

                @Override // com.tkay.basead.e.a
                public final void onAdClosed() {
                    if (MyOfferTYInterstitialAdapter.this.mImpressListener != null) {
                        MyOfferTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
                    }
                }

                @Override // com.tkay.basead.e.a
                public final void onAdClick(int i) {
                    com.tkay.core.common.f.d trackingInfo = MyOfferTYInterstitialAdapter.this.getTrackingInfo();
                    if (trackingInfo != null) {
                        trackingInfo.x(i);
                    }
                    if (MyOfferTYInterstitialAdapter.this.mImpressListener != null) {
                        MyOfferTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
                    }
                }
            });
            this.d.a(activity, map);
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean isAdReady() {
        d dVar = this.d;
        boolean z = dVar != null && dVar.a();
        if (z && this.b == null) {
            this.b = b.a(this.d);
        }
        return z;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return com.tkay.core.common.l.g.a();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        d dVar = this.d;
        if (dVar != null) {
            dVar.a((g) null);
            this.d = null;
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.c;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public Map<String, Object> getNetworkInfoMap() {
        return this.b;
    }
}
