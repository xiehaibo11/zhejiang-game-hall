package com.tkay.network.myoffer;

import android.app.Activity;
import android.content.Context;
import com.tkay.basead.b;
import com.tkay.basead.c.e;
import com.tkay.basead.e.c;
import com.tkay.basead.e.g;
import com.tkay.basead.f.f;
import com.tkay.core.api.BaseAd;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.i;
import com.tkay.core.common.l.d;
import com.tkay.core.common.s;
import com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class MyOfferTYRewardedVideoAdapter extends CustomRewardVideoAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    i f7657a;
    Map<String, Object> b;
    private f d;
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
            this.f7657a = (i) map.get(f.k.f6060a);
        }
        a(context);
        this.d.a(new c() { // from class: com.tkay.network.myoffer.MyOfferTYRewardedVideoAdapter.1
            @Override // com.tkay.basead.e.c
            public final void onAdDataLoaded() {
            }

            @Override // com.tkay.basead.e.c
            public final void onAdCacheLoaded() {
                MyOfferTYRewardedVideoAdapter myOfferTYRewardedVideoAdapter = MyOfferTYRewardedVideoAdapter.this;
                myOfferTYRewardedVideoAdapter.b = b.a(myOfferTYRewardedVideoAdapter.d);
                if (MyOfferTYRewardedVideoAdapter.this.mLoadListener != null) {
                    MyOfferTYRewardedVideoAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            }

            @Override // com.tkay.basead.e.c
            public final void onAdLoadFailed(e eVar) {
                if (MyOfferTYRewardedVideoAdapter.this.mLoadListener != null) {
                    MyOfferTYRewardedVideoAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }

    private void a(Context context) {
        this.d = new com.tkay.basead.f.f(context, this.f7657a, this.c, this.e);
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean initNetworkObjectByPlacementId(Context context, Map<String, Object> map, Map<String, Object> map2) {
        if (map.containsKey("my_oid")) {
            this.c = map.get("my_oid").toString();
        }
        if (map.containsKey(f.k.f6060a)) {
            this.f7657a = (i) map.get(f.k.f6060a);
        }
        if (map.containsKey(s.b)) {
            this.e = ((Boolean) map.get(s.b)).booleanValue();
        }
        a(context);
        return true;
    }

    @Override // com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter
    public void show(Activity activity) {
        int iG = d.g(activity);
        if (isAdReady()) {
            HashMap map = new HashMap(1);
            map.put(com.tkay.basead.f.c.h, this.f7657a.d);
            map.put("extra_scenario", this.mScenario);
            map.put(com.tkay.basead.f.c.j, Integer.valueOf(iG));
            this.d.a(new g() { // from class: com.tkay.network.myoffer.MyOfferTYRewardedVideoAdapter.2
                @Override // com.tkay.basead.e.a
                public final void onDeeplinkCallback(boolean z) {
                }

                @Override // com.tkay.basead.e.g
                public final void onVideoAdPlayStart() {
                }

                @Override // com.tkay.basead.e.g
                public final void onVideoAdPlayEnd() {
                    if (MyOfferTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        MyOfferTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayEnd();
                    }
                }

                @Override // com.tkay.basead.e.a
                public final void onShowFailed(e eVar) {
                    if (MyOfferTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        MyOfferTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayFailed(eVar.a(), eVar.b());
                    }
                }

                @Override // com.tkay.basead.e.g
                public final void onRewarded() {
                    if (MyOfferTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        MyOfferTYRewardedVideoAdapter.this.mImpressionListener.onReward();
                    }
                }

                @Override // com.tkay.basead.e.a
                public final void onAdShow() {
                    if (MyOfferTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        MyOfferTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayStart();
                    }
                }

                @Override // com.tkay.basead.e.a
                public final void onAdClosed() {
                    if (MyOfferTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        MyOfferTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdClosed();
                    }
                }

                @Override // com.tkay.basead.e.a
                public final void onAdClick(int i) {
                    com.tkay.core.common.f.d trackingInfo = MyOfferTYRewardedVideoAdapter.this.getTrackingInfo();
                    if (trackingInfo != null) {
                        trackingInfo.x(i);
                    }
                    if (MyOfferTYRewardedVideoAdapter.this.mImpressionListener != null) {
                        MyOfferTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayClicked();
                    }
                }
            });
            this.d.a(activity, map);
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean isAdReady() {
        com.tkay.basead.f.f fVar = this.d;
        boolean z = fVar != null && fVar.a();
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
        com.tkay.basead.f.f fVar = this.d;
        if (fVar != null) {
            fVar.a((g) null);
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
