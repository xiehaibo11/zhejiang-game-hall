package com.tkay.network.onlineapi;

import android.app.Activity;
import android.content.Context;
import com.tkay.basead.b;
import com.tkay.basead.c.e;
import com.tkay.basead.d.b;
import com.tkay.basead.d.c;
import com.tkay.basead.d.f;
import com.tkay.basead.e.g;
import com.tkay.basead.f.c;
import com.tkay.core.api.BaseAd;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.i;
import com.tkay.core.common.l.d;
import com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter;
import java.util.HashMap;
import java.util.Map;

public class OnlineApiTYRewardedVideoAdapter extends CustomRewardVideoAdapter {
    i a;
    f b;
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
        int iG = d.g(activity);
        HashMap map = new HashMap(1);
        map.put("extra_scenario", this.mScenario);
        map.put(c.j, Integer.valueOf(iG));
        this.b.a(new g() {
            @Override
            public final void onVideoAdPlayStart() {
            }

            @Override
            public final void onVideoAdPlayEnd() {
                if (OnlineApiTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    OnlineApiTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayEnd();
                }
            }

            @Override
            public final void onShowFailed(e eVar) {
                if (OnlineApiTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    OnlineApiTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayFailed(eVar.a(), eVar.b());
                }
            }

            @Override
            public final void onRewarded() {
                if (OnlineApiTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    OnlineApiTYRewardedVideoAdapter.this.mImpressionListener.onReward();
                }
            }

            @Override
            public final void onAdShow() {
                if (OnlineApiTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    OnlineApiTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayStart();
                }
            }

            @Override
            public final void onAdClosed() {
                if (OnlineApiTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    OnlineApiTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdClosed();
                }
            }

            @Override
            public final void onAdClick(int i) {
                com.tkay.core.common.f.d trackingInfo = OnlineApiTYRewardedVideoAdapter.this.getTrackingInfo();
                if (trackingInfo != null) {
                    trackingInfo.x(i);
                }
                if (OnlineApiTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    OnlineApiTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayClicked();
                }
            }

            @Override
            public final void onDeeplinkCallback(boolean z) {
                if (OnlineApiTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    OnlineApiTYRewardedVideoAdapter.this.mImpressionListener.onDeeplinkCallback(z);
                }
            }
        });
        f fVar = this.b;
        if (fVar != null) {
            fVar.a(activity, map);
        }
    }

    @Override
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        a(context, map);
        this.b.a(new com.tkay.basead.e.c() {
            @Override
            public final void onAdDataLoaded() {
                if (OnlineApiTYRewardedVideoAdapter.this.mLoadListener != null) {
                    OnlineApiTYRewardedVideoAdapter.this.mLoadListener.onAdDataLoaded();
                }
            }

            @Override
            public final void onAdCacheLoaded() {
                OnlineApiTYRewardedVideoAdapter onlineApiTYRewardedVideoAdapter = OnlineApiTYRewardedVideoAdapter.this;
                onlineApiTYRewardedVideoAdapter.d = b.a(onlineApiTYRewardedVideoAdapter.b);
                if (OnlineApiTYRewardedVideoAdapter.this.mLoadListener != null) {
                    OnlineApiTYRewardedVideoAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            }

            @Override
            public final void onAdLoadFailed(e eVar) {
                if (OnlineApiTYRewardedVideoAdapter.this.mLoadListener != null) {
                    OnlineApiTYRewardedVideoAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
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
        com.tkay.basead.d.f fVar = new com.tkay.basead.d.f(context, b.a.b, this.a);
        this.b = fVar;
        fVar.a(new c.a().a(i).b(i2).a());
    }

    @Override
    public void destory() {
        com.tkay.basead.d.f fVar = this.b;
        if (fVar != null) {
            fVar.b();
            this.b = null;
        }
    }

    @Override
    public String getNetworkPlacementId() {
        return this.c;
    }

    @Override
    public boolean isAdReady() {
        com.tkay.basead.d.f fVar = this.b;
        boolean z = fVar != null && fVar.c();
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
