package com.tkay.network.onlineapi;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.tkay.basead.b;
import com.tkay.basead.c.e;
import com.tkay.basead.d.b;
import com.tkay.basead.d.c;
import com.tkay.basead.d.d;
import com.tkay.basead.e.g;
import com.tkay.basead.f.c;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.i;
import com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter;
import java.util.HashMap;
import java.util.Map;

public class OnlineApiTYInterstitialAdapter extends CustomInterstitialAdapter {
    i a;
    d b;
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
    public void show(Activity activity) {
        int iG = com.tkay.core.common.l.d.g(activity);
        HashMap map = new HashMap(1);
        map.put("extra_scenario", this.mScenario);
        map.put(c.j, Integer.valueOf(iG));
        this.b.a(new g() {
            @Override
            public final void onRewarded() {
            }

            @Override
            public final void onVideoAdPlayStart() {
                if (OnlineApiTYInterstitialAdapter.this.mImpressListener != null) {
                    OnlineApiTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoStart();
                }
            }

            @Override
            public final void onVideoAdPlayEnd() {
                if (OnlineApiTYInterstitialAdapter.this.mImpressListener != null) {
                    OnlineApiTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoEnd();
                }
            }

            @Override
            public final void onShowFailed(e eVar) {
                if (OnlineApiTYInterstitialAdapter.this.mImpressListener != null) {
                    OnlineApiTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoError(eVar.a(), eVar.b());
                }
            }

            @Override
            public final void onAdShow() {
                if (OnlineApiTYInterstitialAdapter.this.mImpressListener != null) {
                    OnlineApiTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
                }
            }

            @Override
            public final void onAdClosed() {
                if (OnlineApiTYInterstitialAdapter.this.mImpressListener != null) {
                    OnlineApiTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
                }
            }

            @Override
            public final void onAdClick(int i) {
                com.tkay.core.common.f.d trackingInfo = OnlineApiTYInterstitialAdapter.this.getTrackingInfo();
                if (trackingInfo != null) {
                    trackingInfo.x(i);
                }
                if (OnlineApiTYInterstitialAdapter.this.mImpressListener != null) {
                    OnlineApiTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
                }
            }

            @Override
            public final void onDeeplinkCallback(boolean z) {
                if (OnlineApiTYInterstitialAdapter.this.mImpressListener != null) {
                    OnlineApiTYInterstitialAdapter.this.mImpressListener.onDeeplinkCallback(z);
                }
            }
        });
        d dVar = this.b;
        if (dVar != null) {
            dVar.a(activity, map);
        }
    }

    @Override
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        a(context, map);
        this.b.a(new com.tkay.basead.e.c() {
            @Override
            public final void onAdDataLoaded() {
                if (OnlineApiTYInterstitialAdapter.this.mLoadListener != null) {
                    OnlineApiTYInterstitialAdapter.this.mLoadListener.onAdDataLoaded();
                }
            }

            @Override
            public final void onAdCacheLoaded() {
                OnlineApiTYInterstitialAdapter onlineApiTYInterstitialAdapter = OnlineApiTYInterstitialAdapter.this;
                onlineApiTYInterstitialAdapter.d = b.a(onlineApiTYInterstitialAdapter.b);
                if (OnlineApiTYInterstitialAdapter.this.mLoadListener != null) {
                    OnlineApiTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            }

            @Override
            public final void onAdLoadFailed(e eVar) {
                if (OnlineApiTYInterstitialAdapter.this.mLoadListener != null) {
                    OnlineApiTYInterstitialAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
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
        this.c = map.get("unit_id") != null ? map.get("unit_id").toString() : "";
        int i = 0;
        int i2 = -1;
        if (map.containsKey("v_m") && (obj2 = map.get("v_m")) != null) {
            i = Integer.parseInt(obj2.toString());
        }
        if (map.containsKey("s_c_t") && (obj = map.get("s_c_t")) != null) {
            i2 = Integer.parseInt(obj.toString());
        }
        this.a = (i) map.get(f.k.a);
        d dVar = new d(context, b.a.b, this.a);
        this.b = dVar;
        dVar.a(new c.a().a(i).b(i2).a());
        String stringFromMap = TYInitMediation.getStringFromMap(map, "unit_type");
        if (TextUtils.isEmpty(stringFromMap)) {
            return;
        }
        this.b.a(stringFromMap);
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
        return this.c;
    }

    @Override
    public boolean isAdReady() {
        d dVar = this.b;
        boolean z = dVar != null && dVar.c();
        if (z && this.d == null) {
            this.d = com.tkay.basead.b.a(this.b);
        }
        return z;
    }

    @Override
    public Map<String, Object> getNetworkInfoMap() {
        return this.d;
    }
}
