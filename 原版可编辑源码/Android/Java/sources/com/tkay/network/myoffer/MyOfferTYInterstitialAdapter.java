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

public class MyOfferTYInterstitialAdapter extends CustomInterstitialAdapter {
    i a;
    Map<String, Object> b;
    private d d;
    private String c = "";
    private boolean e = false;

    @Override
    public String getNetworkName() {
        return "MyOffer";
    }

    @Override
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        if (map.containsKey("my_oid")) {
            this.c = map.get("my_oid").toString();
        }
        if (map.containsKey(f.k.a)) {
            this.a = (i) map.get(f.k.a);
        }
        a(context);
        this.d.a(new c() {
            @Override
            public final void onAdDataLoaded() {
            }

            @Override
            public final void onAdCacheLoaded() {
                MyOfferTYInterstitialAdapter myOfferTYInterstitialAdapter = MyOfferTYInterstitialAdapter.this;
                myOfferTYInterstitialAdapter.b = b.a(myOfferTYInterstitialAdapter.d);
                if (MyOfferTYInterstitialAdapter.this.mLoadListener != null) {
                    MyOfferTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            }

            @Override
            public final void onAdLoadFailed(e eVar) {
                if (MyOfferTYInterstitialAdapter.this.mLoadListener != null) {
                    MyOfferTYInterstitialAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }

    private void a(Context context) {
        this.d = new d(context, this.a, this.c, this.e);
    }

    @Override
    public boolean initNetworkObjectByPlacementId(Context context, Map<String, Object> map, Map<String, Object> map2) {
        if (map.containsKey("my_oid")) {
            this.c = map.get("my_oid").toString();
        }
        if (map.containsKey(f.k.a)) {
            this.a = (i) map.get(f.k.a);
        }
        if (map.containsKey(s.b)) {
            this.e = ((Boolean) map.get(s.b)).booleanValue();
        }
        a(context);
        return true;
    }

    @Override
    public void show(Activity activity) {
        if (isAdReady()) {
            HashMap map = new HashMap(1);
            int iG = com.tkay.core.common.l.d.g(activity);
            map.put(com.tkay.basead.f.c.h, this.a.d);
            map.put("extra_scenario", this.mScenario);
            map.put(com.tkay.basead.f.c.j, Integer.valueOf(iG));
            this.d.a(new g() {
                @Override
                public final void onDeeplinkCallback(boolean z) {
                }

                @Override
                public final void onRewarded() {
                }

                @Override
                public final void onVideoAdPlayStart() {
                    if (MyOfferTYInterstitialAdapter.this.mImpressListener != null) {
                        MyOfferTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoStart();
                    }
                }

                @Override
                public final void onVideoAdPlayEnd() {
                    if (MyOfferTYInterstitialAdapter.this.mImpressListener != null) {
                        MyOfferTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoEnd();
                    }
                }

                @Override
                public final void onShowFailed(e eVar) {
                    if (MyOfferTYInterstitialAdapter.this.mImpressListener != null) {
                        MyOfferTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoError(eVar.a(), eVar.b());
                    }
                }

                @Override
                public final void onAdShow() {
                    if (MyOfferTYInterstitialAdapter.this.mImpressListener != null) {
                        MyOfferTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
                    }
                }

                @Override
                public final void onAdClosed() {
                    if (MyOfferTYInterstitialAdapter.this.mImpressListener != null) {
                        MyOfferTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
                    }
                }

                @Override
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

    @Override
    public boolean isAdReady() {
        d dVar = this.d;
        boolean z = dVar != null && dVar.a();
        if (z && this.b == null) {
            this.b = b.a(this.d);
        }
        return z;
    }

    @Override
    public String getNetworkSDKVersion() {
        return com.tkay.core.common.l.g.a();
    }

    @Override
    public void destory() {
        d dVar = this.d;
        if (dVar != null) {
            dVar.a((g) null);
            this.d = null;
        }
    }

    @Override
    public String getNetworkPlacementId() {
        return this.c;
    }

    @Override
    public Map<String, Object> getNetworkInfoMap() {
        return this.b;
    }
}
