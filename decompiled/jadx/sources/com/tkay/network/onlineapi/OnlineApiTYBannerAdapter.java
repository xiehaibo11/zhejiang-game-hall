package com.tkay.network.onlineapi;

import android.content.Context;
import android.view.View;
import com.tkay.banner.unitgroup.api.CustomBannerAdapter;
import com.tkay.basead.b;
import com.tkay.basead.c.e;
import com.tkay.basead.d.a;
import com.tkay.basead.d.b;
import com.tkay.basead.d.c;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.d;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.j;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class OnlineApiTYBannerAdapter extends CustomBannerAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    i f7665a;
    String b;
    Map<String, Object> c;
    private a d;
    private View e;

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return "";
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return "";
    }

    @Override // com.tkay.banner.unitgroup.api.CustomBannerAdapter
    public View getBannerView() {
        a aVar;
        if (this.e == null && (aVar = this.d) != null && aVar.c()) {
            this.e = this.d.a();
        }
        if (this.c == null) {
            this.c = b.a(this.d);
        }
        return this.e;
    }

    private void a(Context context, Map<String, Object> map) {
        Object obj;
        Object obj2;
        this.b = map.get("unit_id") != null ? map.get("unit_id").toString() : "";
        int i = 0;
        if (map.containsKey("close_button") && (obj2 = map.get("close_button")) != null) {
            i = Integer.parseInt(obj2.toString());
        }
        String string = (!map.containsKey(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE) || (obj = map.get(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE)) == null) ? j.f6157a : obj.toString();
        this.f7665a = (i) map.get(f.k.f6060a);
        a aVar = new a(context, b.a.ONLINE_API_OFFER_REQUEST_TYPE, this.f7665a);
        this.d = aVar;
        aVar.a(new c.a().c(i).b(string).a());
        this.d.a(new AnonymousClass2());
    }

    /* JADX INFO: renamed from: com.tkay.network.onlineapi.OnlineApiTYBannerAdapter$2, reason: invalid class name */
    final class AnonymousClass2 implements com.tkay.basead.e.a {
        @Override // com.tkay.basead.e.a
        public final void onShowFailed(e eVar) {
        }

        AnonymousClass2() {
        }

        @Override // com.tkay.basead.e.a
        public final void onAdShow() {
            if (OnlineApiTYBannerAdapter.this.mImpressionEventListener != null) {
                OnlineApiTYBannerAdapter.this.mImpressionEventListener.onBannerAdShow();
            }
        }

        @Override // com.tkay.basead.e.a
        public final void onAdClosed() {
            if (OnlineApiTYBannerAdapter.this.mImpressionEventListener != null) {
                OnlineApiTYBannerAdapter.this.mImpressionEventListener.onBannerAdClose();
            }
        }

        @Override // com.tkay.basead.e.a
        public final void onAdClick(int i) {
            d trackingInfo = OnlineApiTYBannerAdapter.this.getTrackingInfo();
            if (trackingInfo != null) {
                trackingInfo.x(i);
            }
            if (OnlineApiTYBannerAdapter.this.mImpressionEventListener != null) {
                OnlineApiTYBannerAdapter.this.mImpressionEventListener.onBannerAdClicked();
            }
        }

        @Override // com.tkay.basead.e.a
        public final void onDeeplinkCallback(boolean z) {
            if (OnlineApiTYBannerAdapter.this.mImpressionEventListener != null) {
                OnlineApiTYBannerAdapter.this.mImpressionEventListener.onDeeplinkCallback(z);
            }
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        this.e = null;
        a aVar = this.d;
        if (aVar != null) {
            aVar.a((com.tkay.basead.e.a) null);
            this.d.b();
            this.d = null;
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.b;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public Map<String, Object> getNetworkInfoMap() {
        return this.c;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        Object obj;
        Object obj2;
        this.b = map.get("unit_id") != null ? map.get("unit_id").toString() : "";
        int i = 0;
        if (map.containsKey("close_button") && (obj2 = map.get("close_button")) != null) {
            i = Integer.parseInt(obj2.toString());
        }
        String string = (!map.containsKey(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE) || (obj = map.get(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE)) == null) ? j.f6157a : obj.toString();
        this.f7665a = (i) map.get(f.k.f6060a);
        a aVar = new a(context, b.a.ONLINE_API_OFFER_REQUEST_TYPE, this.f7665a);
        this.d = aVar;
        aVar.a(new c.a().c(i).b(string).a());
        this.d.a(new AnonymousClass2());
        this.d.a(new com.tkay.basead.e.c() { // from class: com.tkay.network.onlineapi.OnlineApiTYBannerAdapter.1
            @Override // com.tkay.basead.e.c
            public final void onAdDataLoaded() {
                if (OnlineApiTYBannerAdapter.this.mLoadListener != null) {
                    OnlineApiTYBannerAdapter.this.mLoadListener.onAdDataLoaded();
                }
            }

            @Override // com.tkay.basead.e.c
            public final void onAdCacheLoaded() {
                OnlineApiTYBannerAdapter onlineApiTYBannerAdapter = OnlineApiTYBannerAdapter.this;
                onlineApiTYBannerAdapter.e = onlineApiTYBannerAdapter.d.a();
                if (OnlineApiTYBannerAdapter.this.mLoadListener != null) {
                    if (OnlineApiTYBannerAdapter.this.e != null) {
                        OnlineApiTYBannerAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                    } else {
                        OnlineApiTYBannerAdapter.this.mLoadListener.onAdLoadError("", "Online bannerView = null");
                    }
                }
            }

            @Override // com.tkay.basead.e.c
            public final void onAdLoadFailed(e eVar) {
                if (OnlineApiTYBannerAdapter.this.mLoadListener != null) {
                    OnlineApiTYBannerAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }
}
