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

public class MyOfferTYBannerAdapter extends CustomBannerAdapter {
    String a;
    i b;
    Map<String, Object> c;
    private b d;
    private View e;
    private boolean f = false;

    @Override
    public String getNetworkName() {
        return "MyOffer";
    }

    @Override
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

    @Override
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        if (map.containsKey("my_oid")) {
            this.a = map.get("my_oid").toString();
        }
        if (map.containsKey(f.k.a)) {
            this.b = (i) map.get(f.k.a);
        }
        a(context);
        this.d.a(new c() {
            @Override
            public final void onAdDataLoaded() {
            }

            @Override
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

            @Override
            public final void onAdLoadFailed(e eVar) {
                if (MyOfferTYBannerAdapter.this.mLoadListener != null) {
                    MyOfferTYBannerAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }

    private void a(Context context) {
        b bVar = new b(context, this.b, this.a, this.f);
        this.d = bVar;
        bVar.a(new a() {
            @Override
            public final void onDeeplinkCallback(boolean z) {
            }

            @Override
            public final void onShowFailed(e eVar) {
            }

            @Override
            public final void onAdShow() {
                if (MyOfferTYBannerAdapter.this.mImpressionEventListener != null) {
                    MyOfferTYBannerAdapter.this.mImpressionEventListener.onBannerAdShow();
                }
            }

            @Override
            public final void onAdClosed() {
                if (MyOfferTYBannerAdapter.this.mImpressionEventListener != null) {
                    MyOfferTYBannerAdapter.this.mImpressionEventListener.onBannerAdClose();
                }
            }

            @Override
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

    @Override
    public boolean initNetworkObjectByPlacementId(Context context, Map<String, Object> map, Map<String, Object> map2) {
        if (map.containsKey("my_oid")) {
            this.a = map.get("my_oid").toString();
        }
        if (map.containsKey(f.k.a)) {
            this.b = (i) map.get(f.k.a);
        }
        if (map.containsKey(s.b)) {
            this.f = ((Boolean) map.get(s.b)).booleanValue();
        }
        a(context);
        return true;
    }

    @Override
    public void destory() {
        this.e = null;
        b bVar = this.d;
        if (bVar != null) {
            bVar.a((a) null);
            this.d.c();
            this.d = null;
        }
    }

    @Override
    public String getNetworkPlacementId() {
        return this.a;
    }

    @Override
    public String getNetworkSDKVersion() {
        return g.a();
    }

    @Override
    public Map<String, Object> getNetworkInfoMap() {
        return this.c;
    }
}
