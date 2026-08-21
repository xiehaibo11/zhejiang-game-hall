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

public class OnlineApiTYBannerAdapter extends CustomBannerAdapter {
    i a;
    String b;
    Map<String, Object> c;
    private a d;
    private View e;

    @Override
    public String getNetworkName() {
        return "";
    }

    @Override
    public String getNetworkSDKVersion() {
        return "";
    }

    @Override
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
        String string = (!map.containsKey(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE) || (obj = map.get(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE)) == null) ? j.a : obj.toString();
        this.a = (i) map.get(f.k.a);
        a aVar = new a(context, b.a.b, this.a);
        this.d = aVar;
        aVar.a(new c.a().c(i).b(string).a());
        this.d.a(new 2());
    }

    final class 2 implements com.tkay.basead.e.a {
        @Override
        public final void onShowFailed(e eVar) {
        }

        2() {
        }

        @Override
        public final void onAdShow() {
            if (OnlineApiTYBannerAdapter.this.mImpressionEventListener != null) {
                OnlineApiTYBannerAdapter.this.mImpressionEventListener.onBannerAdShow();
            }
        }

        @Override
        public final void onAdClosed() {
            if (OnlineApiTYBannerAdapter.this.mImpressionEventListener != null) {
                OnlineApiTYBannerAdapter.this.mImpressionEventListener.onBannerAdClose();
            }
        }

        @Override
        public final void onAdClick(int i) {
            d trackingInfo = OnlineApiTYBannerAdapter.this.getTrackingInfo();
            if (trackingInfo != null) {
                trackingInfo.x(i);
            }
            if (OnlineApiTYBannerAdapter.this.mImpressionEventListener != null) {
                OnlineApiTYBannerAdapter.this.mImpressionEventListener.onBannerAdClicked();
            }
        }

        @Override
        public final void onDeeplinkCallback(boolean z) {
            if (OnlineApiTYBannerAdapter.this.mImpressionEventListener != null) {
                OnlineApiTYBannerAdapter.this.mImpressionEventListener.onDeeplinkCallback(z);
            }
        }
    }

    @Override
    public void destory() {
        this.e = null;
        a aVar = this.d;
        if (aVar != null) {
            aVar.a((com.tkay.basead.e.a) null);
            this.d.b();
            this.d = null;
        }
    }

    @Override
    public String getNetworkPlacementId() {
        return this.b;
    }

    @Override
    public Map<String, Object> getNetworkInfoMap() {
        return this.c;
    }

    @Override
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        Object obj;
        Object obj2;
        this.b = map.get("unit_id") != null ? map.get("unit_id").toString() : "";
        int i = 0;
        if (map.containsKey("close_button") && (obj2 = map.get("close_button")) != null) {
            i = Integer.parseInt(obj2.toString());
        }
        String string = (!map.containsKey(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE) || (obj = map.get(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE)) == null) ? j.a : obj.toString();
        this.a = (i) map.get(f.k.a);
        a aVar = new a(context, b.a.b, this.a);
        this.d = aVar;
        aVar.a(new c.a().c(i).b(string).a());
        this.d.a(new 2());
        this.d.a(new com.tkay.basead.e.c() {
            @Override
            public final void onAdDataLoaded() {
                if (OnlineApiTYBannerAdapter.this.mLoadListener != null) {
                    OnlineApiTYBannerAdapter.this.mLoadListener.onAdDataLoaded();
                }
            }

            @Override
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

            @Override
            public final void onAdLoadFailed(e eVar) {
                if (OnlineApiTYBannerAdapter.this.mLoadListener != null) {
                    OnlineApiTYBannerAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }
}
