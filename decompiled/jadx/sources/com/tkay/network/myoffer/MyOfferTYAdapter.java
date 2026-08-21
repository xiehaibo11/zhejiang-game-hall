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

/* JADX INFO: loaded from: classes3.dex */
public class MyOfferTYAdapter extends CustomNativeAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    e f7647a;
    i b;
    private String c = "";
    private boolean d = false;

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
            this.b = (i) map.get(f.k.f6060a);
        }
        this.f7647a = new e(context, this.b, this.c, this.d);
        final Context applicationContext = context.getApplicationContext();
        this.f7647a.a(new c() { // from class: com.tkay.network.myoffer.MyOfferTYAdapter.1
            @Override // com.tkay.basead.e.c
            public final void onAdDataLoaded() {
            }

            @Override // com.tkay.basead.e.c
            public final void onAdCacheLoaded() {
                if (MyOfferTYAdapter.this.mLoadListener != null) {
                    MyOfferTYAdapter.this.mLoadListener.onAdCacheLoaded(new MyOfferTYNativeAd(applicationContext, MyOfferTYAdapter.this.f7647a));
                }
            }

            @Override // com.tkay.basead.e.c
            public final void onAdLoadFailed(com.tkay.basead.c.e eVar) {
                if (MyOfferTYAdapter.this.mLoadListener != null) {
                    MyOfferTYAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }

    private void a(Context context) {
        this.f7647a = new e(context, this.b, this.c, this.d);
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean initNetworkObjectByPlacementId(Context context, Map<String, Object> map, Map<String, Object> map2) {
        if (map.containsKey("my_oid")) {
            this.c = map.get("my_oid").toString();
        }
        if (map.containsKey(f.k.f6060a)) {
            this.b = (i) map.get(f.k.f6060a);
        }
        if (map.containsKey(s.b)) {
            this.d = ((Boolean) map.get(s.b)).booleanValue();
        }
        this.f7647a = new e(context, this.b, this.c, this.d);
        return true;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public BaseAd getBaseAdObject(Context context) {
        e eVar = this.f7647a;
        if (eVar == null || !eVar.a()) {
            return null;
        }
        return new MyOfferTYNativeAd(context, this.f7647a);
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        e eVar = this.f7647a;
        if (eVar != null) {
            eVar.a((a) null);
            this.f7647a = null;
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.c;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return g.a();
    }
}
