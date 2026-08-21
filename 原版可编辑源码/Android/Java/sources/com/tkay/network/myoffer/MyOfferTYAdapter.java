package com.tkay.network.myoffer;

import android.content.Context;
import com.tkay.basead.e.a;
import com.tkay.basead.e.c;
import com.tkay.basead.f.e;
import com.tkay.core.api.BaseAd;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.i;
import com.tkay.core.common.l.g;
import com.tkay.core.common.s;
import com.tkay.nativead.unitgroup.api.CustomNativeAdapter;
import java.util.Map;

public class MyOfferTYAdapter extends CustomNativeAdapter {
    e a;
    i b;
    private String c = "";
    private boolean d = false;

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
            this.b = (i) map.get(f.k.a);
        }
        this.a = new e(context, this.b, this.c, this.d);
        final Context applicationContext = context.getApplicationContext();
        this.a.a(new c() {
            @Override
            public final void onAdDataLoaded() {
            }

            @Override
            public final void onAdCacheLoaded() {
                if (MyOfferTYAdapter.this.mLoadListener != null) {
                    MyOfferTYAdapter.this.mLoadListener.onAdCacheLoaded(new MyOfferTYNativeAd(applicationContext, MyOfferTYAdapter.this.a));
                }
            }

            @Override
            public final void onAdLoadFailed(com.tkay.basead.c.e eVar) {
                if (MyOfferTYAdapter.this.mLoadListener != null) {
                    MyOfferTYAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }

    private void a(Context context) {
        this.a = new e(context, this.b, this.c, this.d);
    }

    @Override
    public boolean initNetworkObjectByPlacementId(Context context, Map<String, Object> map, Map<String, Object> map2) {
        if (map.containsKey("my_oid")) {
            this.c = map.get("my_oid").toString();
        }
        if (map.containsKey(f.k.a)) {
            this.b = (i) map.get(f.k.a);
        }
        if (map.containsKey(s.b)) {
            this.d = ((Boolean) map.get(s.b)).booleanValue();
        }
        this.a = new e(context, this.b, this.c, this.d);
        return true;
    }

    @Override
    public BaseAd getBaseAdObject(Context context) {
        e eVar = this.a;
        if (eVar == null || !eVar.a()) {
            return null;
        }
        return new MyOfferTYNativeAd(context, this.a);
    }

    @Override
    public void destory() {
        e eVar = this.a;
        if (eVar != null) {
            eVar.a((a) null);
            this.a = null;
        }
    }

    @Override
    public String getNetworkPlacementId() {
        return this.c;
    }

    @Override
    public String getNetworkSDKVersion() {
        return g.a();
    }
}
