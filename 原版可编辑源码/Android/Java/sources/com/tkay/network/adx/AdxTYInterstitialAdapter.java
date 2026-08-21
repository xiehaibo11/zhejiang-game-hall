package com.tkay.network.adx;

import android.app.Activity;
import android.content.Context;
import com.tkay.basead.b;
import com.tkay.basead.c.e;
import com.tkay.basead.d.b;
import com.tkay.basead.d.c;
import com.tkay.basead.d.d;
import com.tkay.basead.e.f;
import com.tkay.basead.f.c;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.i;
import com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter;
import java.util.HashMap;
import java.util.Map;

public class AdxTYInterstitialAdapter extends CustomInterstitialAdapter {
    protected i a;
    protected d b;
    Map<String, Object> c;

    @Override
    public String getNetworkSDKVersion() {
        return "";
    }

    @Override
    public void show(Activity activity) {
        int iG = com.tkay.core.common.l.d.g(activity);
        HashMap map = new HashMap(1);
        map.put("extra_scenario", this.mScenario);
        map.put(c.j, Integer.valueOf(iG));
        d dVar = this.b;
        dVar.a(new f(dVar.e()) {
            @Override
            public final void onRewarded() {
            }

            @Override
            public final void onVideoAdPlayStart() {
                if (AdxTYInterstitialAdapter.this.mImpressListener != null) {
                    AdxTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoStart();
                }
            }

            @Override
            public final void onVideoAdPlayEnd() {
                if (AdxTYInterstitialAdapter.this.mImpressListener != null) {
                    AdxTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoEnd();
                }
            }

            @Override
            public final void onShowFailed(e eVar) {
                if (AdxTYInterstitialAdapter.this.mImpressListener != null) {
                    AdxTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoError(eVar.a(), eVar.b());
                }
            }

            @Override
            public final void onAdShow() {
                super.onAdShow();
                if (AdxTYInterstitialAdapter.this.mImpressListener != null) {
                    AdxTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
                }
            }

            @Override
            public final void onAdClosed() {
                if (AdxTYInterstitialAdapter.this.mImpressListener != null) {
                    AdxTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
                }
            }

            @Override
            public final void onAdClick(int i) {
                com.tkay.core.common.f.d trackingInfo = AdxTYInterstitialAdapter.this.getTrackingInfo();
                if (trackingInfo != null) {
                    trackingInfo.x(i);
                }
                if (AdxTYInterstitialAdapter.this.mImpressListener != null) {
                    AdxTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
                }
            }

            @Override
            public final void onDeeplinkCallback(boolean z) {
                if (AdxTYInterstitialAdapter.this.mImpressListener != null) {
                    AdxTYInterstitialAdapter.this.mImpressListener.onDeeplinkCallback(z);
                }
            }
        });
        d dVar2 = this.b;
        if (dVar2 != null) {
            dVar2.a(activity, map);
        }
    }

    @Override
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        a(context, map);
        this.b.a(new com.tkay.basead.e.c() {
            @Override
            public final void onAdDataLoaded() {
                if (AdxTYInterstitialAdapter.this.mLoadListener != null) {
                    AdxTYInterstitialAdapter.this.mLoadListener.onAdDataLoaded();
                }
            }

            @Override
            public final void onAdCacheLoaded() {
                AdxTYInterstitialAdapter adxTYInterstitialAdapter = AdxTYInterstitialAdapter.this;
                adxTYInterstitialAdapter.c = b.a(adxTYInterstitialAdapter.b);
                if (AdxTYInterstitialAdapter.this.mLoadListener != null) {
                    AdxTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            }

            @Override
            public final void onAdLoadFailed(e eVar) {
                if (AdxTYInterstitialAdapter.this.mLoadListener != null) {
                    AdxTYInterstitialAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }

    @Override
    public boolean initNetworkObjectByPlacementId(Context context, Map<String, Object> map, Map<String, Object> map2) {
        a(context, map);
        return true;
    }

    private void a(Context context, Map<String, Object> map) {
        Object obj;
        Object obj2;
        Object obj3;
        int i = (!map.containsKey("v_m") || (obj3 = map.get("v_m")) == null) ? 0 : Integer.parseInt(obj3.toString());
        int i2 = (!map.containsKey("s_c_t") || (obj2 = map.get("s_c_t")) == null) ? -1 : Integer.parseInt(obj2.toString());
        this.a = (i) map.get(f.k.a);
        this.b = new d(context, b.a.a, this.a);
        this.b.a(new c.a().a((!map.containsKey("inter_type") || (obj = map.get("inter_type")) == null) ? "1" : obj.toString()).a(i).b(i2).a());
    }

    @Override
    public void destory() {
        d dVar = this.b;
        if (dVar != null) {
            dVar.b();
            this.b = null;
        }
    }

    @Override
    public String getNetworkPlacementId() {
        i iVar = this.a;
        return iVar != null ? iVar.b : "";
    }

    @Override
    public String getNetworkName() {
        return AdxTYInitManager.getInstance().getNetworkName();
    }

    @Override
    public boolean isAdReady() {
        d dVar = this.b;
        boolean z = dVar != null && dVar.c();
        if (z && this.c == null) {
            this.c = com.tkay.basead.b.a(this.b);
        }
        return z;
    }

    @Override
    public Map<String, Object> getNetworkInfoMap() {
        return this.c;
    }

    @Override
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        i iVar = (i) map.get(f.k.a);
        AdxBidRequestInfo adxBidRequestInfo = new AdxBidRequestInfo(context, iVar != null ? iVar.b : "");
        adxBidRequestInfo.fillInterstitial(map);
        if (tYBidRequestInfoListener != null) {
            tYBidRequestInfoListener.onSuccess(adxBidRequestInfo);
        }
    }
}
