package com.tkay.network.onlineapi;

import android.app.Activity;
import android.content.Context;
import android.view.ViewGroup;
import com.tkay.basead.b;
import com.tkay.basead.c.e;
import com.tkay.basead.d.b;
import com.tkay.basead.d.c;
import com.tkay.basead.d.g;
import com.tkay.basead.e.a;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.d;
import com.tkay.core.common.f.i;
import com.tkay.splashad.unitgroup.api.CustomSplashAdapter;
import java.util.Map;

public class OnlineApiTYSplashAdapter extends CustomSplashAdapter {
    g a;
    i b;
    String c;
    Map<String, Object> d;

    @Override
    public String getNetworkName() {
        return "";
    }

    @Override
    public String getNetworkSDKVersion() {
        return "";
    }

    @Override
    public boolean isSupportCustomSkipView() {
        return true;
    }

    @Override
    public boolean isAdReady() {
        g gVar = this.a;
        boolean z = gVar != null && gVar.c();
        if (z && this.d == null) {
            this.d = b.a(this.a);
        }
        return z;
    }

    @Override
    public void show(Activity activity, ViewGroup viewGroup) {
        if (this.a != null) {
            if (isCustomSkipView()) {
                this.a.a();
            }
            this.a.a(viewGroup);
        }
    }

    @Override
    public void destory() {
        g gVar = this.a;
        if (gVar != null) {
            gVar.b();
            this.a = null;
        }
        this.b = null;
    }

    private void a(Context context, Map<String, Object> map) {
        Object obj;
        int i;
        Object obj2;
        Object obj3;
        this.c = map.get("unit_id") != null ? map.get("unit_id").toString() : "";
        int i2 = 5;
        int i3 = 1;
        int i4 = (!map.containsKey("orientation") || (obj3 = map.get("orientation")) == null) ? 1 : Integer.parseInt(obj3.toString());
        if (map.containsKey(com.tkay.expressad.d.a.b.dk) && (obj2 = map.get(com.tkay.expressad.d.a.b.dk)) != null) {
            i2 = Integer.parseInt(obj2.toString()) * 1000;
        }
        if (map.containsKey("allows_skip") && (obj = map.get("allows_skip")) != null && (i = Integer.parseInt(obj.toString())) != 0) {
            i3 = i == 1 ? 0 : i;
        }
        this.b = (i) map.get(f.k.a);
        g gVar = new g(context, b.a.b, this.b);
        this.a = gVar;
        gVar.a(new c.a().d(i4).e(i2).f(i3).a());
        this.a.a(new 2());
    }

    final class 2 implements a {
        2() {
        }

        @Override
        public final void onAdShow() {
            if (OnlineApiTYSplashAdapter.this.mImpressionListener != null) {
                OnlineApiTYSplashAdapter.this.mImpressionListener.onSplashAdShow();
            }
        }

        @Override
        public final void onAdClosed() {
            if (OnlineApiTYSplashAdapter.this.mImpressionListener != null) {
                OnlineApiTYSplashAdapter.this.mImpressionListener.onSplashAdDismiss();
            }
        }

        @Override
        public final void onAdClick(int i) {
            d trackingInfo = OnlineApiTYSplashAdapter.this.getTrackingInfo();
            if (trackingInfo != null) {
                trackingInfo.x(i);
            }
            if (OnlineApiTYSplashAdapter.this.mImpressionListener != null) {
                OnlineApiTYSplashAdapter.this.mImpressionListener.onSplashAdClicked();
            }
        }

        @Override
        public final void onDeeplinkCallback(boolean z) {
            if (OnlineApiTYSplashAdapter.this.mImpressionListener != null) {
                OnlineApiTYSplashAdapter.this.mImpressionListener.onDeeplinkCallback(z);
            }
        }

        @Override
        public final void onShowFailed(e eVar) {
            if (OnlineApiTYSplashAdapter.this.mImpressionListener != null) {
                OnlineApiTYSplashAdapter.this.mImpressionListener.onSplashAdShowFail(ErrorCode.getErrorCode(ErrorCode.adShowError, eVar.a(), eVar.b()));
            }
        }
    }

    @Override
    public String getNetworkPlacementId() {
        return this.c;
    }

    @Override
    public Map<String, Object> getNetworkInfoMap() {
        return this.d;
    }

    @Override
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        Object obj;
        int i;
        Object obj2;
        Object obj3;
        this.c = map.get("unit_id") != null ? map.get("unit_id").toString() : "";
        int i2 = 5;
        int i3 = 1;
        int i4 = (!map.containsKey("orientation") || (obj3 = map.get("orientation")) == null) ? 1 : Integer.parseInt(obj3.toString());
        if (map.containsKey(com.tkay.expressad.d.a.b.dk) && (obj2 = map.get(com.tkay.expressad.d.a.b.dk)) != null) {
            i2 = Integer.parseInt(obj2.toString()) * 1000;
        }
        if (map.containsKey("allows_skip") && (obj = map.get("allows_skip")) != null && (i = Integer.parseInt(obj.toString())) != 0) {
            i3 = i == 1 ? 0 : i;
        }
        this.b = (i) map.get(f.k.a);
        g gVar = new g(context, b.a.b, this.b);
        this.a = gVar;
        gVar.a(new c.a().d(i4).e(i2).f(i3).a());
        this.a.a(new 2());
        this.a.a(new com.tkay.basead.e.c() {
            @Override
            public final void onAdDataLoaded() {
                if (OnlineApiTYSplashAdapter.this.mLoadListener != null) {
                    OnlineApiTYSplashAdapter.this.mLoadListener.onAdDataLoaded();
                }
            }

            @Override
            public final void onAdCacheLoaded() {
                OnlineApiTYSplashAdapter onlineApiTYSplashAdapter = OnlineApiTYSplashAdapter.this;
                onlineApiTYSplashAdapter.d = com.tkay.basead.b.a(onlineApiTYSplashAdapter.a);
                if (OnlineApiTYSplashAdapter.this.mLoadListener != null) {
                    OnlineApiTYSplashAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            }

            @Override
            public final void onAdLoadFailed(e eVar) {
                if (OnlineApiTYSplashAdapter.this.mLoadListener != null) {
                    OnlineApiTYSplashAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }
}
