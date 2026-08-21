package com.tkay.network.myoffer;

import android.app.Activity;
import android.content.Context;
import android.view.ViewGroup;
import com.tkay.basead.b;
import com.tkay.basead.c.e;
import com.tkay.basead.e.a;
import com.tkay.basead.e.c;
import com.tkay.basead.f.g;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.d;
import com.tkay.core.common.f.i;
import com.tkay.splashad.unitgroup.api.CustomSplashAdapter;
import java.util.Map;

public class MyOfferTYSplashAdapter extends CustomSplashAdapter {
    String a;
    g b;
    i c;
    Map<String, Object> d;

    @Override
    public String getNetworkName() {
        return "MyOffer";
    }

    @Override
    public boolean isSupportCustomSkipView() {
        return true;
    }

    @Override
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        if (map.containsKey("my_oid")) {
            this.a = map.get("my_oid").toString();
        }
        if (map.containsKey(f.k.a)) {
            this.c = (i) map.get(f.k.a);
        }
        g gVar = new g(context, this.c, this.a);
        this.b = gVar;
        gVar.a(new 2());
        this.b.a(new c() {
            @Override
            public final void onAdDataLoaded() {
            }

            @Override
            public final void onAdCacheLoaded() {
                if (MyOfferTYSplashAdapter.this.mLoadListener != null) {
                    MyOfferTYSplashAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            }

            @Override
            public final void onAdLoadFailed(e eVar) {
                if (MyOfferTYSplashAdapter.this.mLoadListener != null) {
                    MyOfferTYSplashAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }

    @Override
    public boolean isAdReady() {
        g gVar = this.b;
        boolean z = gVar != null && gVar.a();
        if (z && this.d == null) {
            this.d = b.a(this.b);
        }
        return z;
    }

    @Override
    public void show(Activity activity, ViewGroup viewGroup) {
        if (this.b != null) {
            if (isCustomSkipView()) {
                this.b.b();
            }
            this.b.a(viewGroup);
        }
    }

    @Override
    public void destory() {
        g gVar = this.b;
        if (gVar != null) {
            gVar.f();
            this.b = null;
        }
        this.c = null;
    }

    final class 2 implements a {
        @Override
        public final void onDeeplinkCallback(boolean z) {
        }

        2() {
        }

        @Override
        public final void onAdShow() {
            if (MyOfferTYSplashAdapter.this.mImpressionListener != null) {
                MyOfferTYSplashAdapter.this.mImpressionListener.onSplashAdShow();
            }
        }

        @Override
        public final void onAdClosed() {
            if (MyOfferTYSplashAdapter.this.mImpressionListener != null) {
                MyOfferTYSplashAdapter.this.mImpressionListener.onSplashAdDismiss();
            }
        }

        @Override
        public final void onAdClick(int i) {
            d trackingInfo = MyOfferTYSplashAdapter.this.getTrackingInfo();
            if (trackingInfo != null) {
                trackingInfo.x(i);
            }
            if (MyOfferTYSplashAdapter.this.mImpressionListener != null) {
                MyOfferTYSplashAdapter.this.mImpressionListener.onSplashAdClicked();
            }
        }

        @Override
        public final void onShowFailed(e eVar) {
            if (MyOfferTYSplashAdapter.this.mImpressionListener != null) {
                MyOfferTYSplashAdapter.this.mImpressionListener.onSplashAdShowFail(ErrorCode.getErrorCode(ErrorCode.adShowError, eVar.a(), eVar.b()));
            }
        }
    }

    private void a(Context context) {
        g gVar = new g(context, this.c, this.a);
        this.b = gVar;
        gVar.a(new 2());
    }

    @Override
    public String getNetworkPlacementId() {
        return this.a;
    }

    @Override
    public String getNetworkSDKVersion() {
        return com.tkay.core.common.l.g.a();
    }

    @Override
    public Map<String, Object> getNetworkInfoMap() {
        return this.d;
    }
}
