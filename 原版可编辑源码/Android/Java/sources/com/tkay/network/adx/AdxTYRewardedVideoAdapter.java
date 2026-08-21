package com.tkay.network.adx;

import android.app.Activity;
import android.content.Context;
import com.tkay.basead.b;
import com.tkay.basead.c.e;
import com.tkay.basead.d.b;
import com.tkay.basead.d.c;
import com.tkay.basead.d.f;
import com.tkay.basead.f.c;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.i;
import com.tkay.core.common.l.d;
import com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter;
import java.util.HashMap;
import java.util.Map;

public class AdxTYRewardedVideoAdapter extends CustomRewardVideoAdapter {
    i a;
    f b;
    Map<String, Object> c;

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
        f fVar = this.b;
        fVar.a(new com.tkay.basead.e.f(fVar.e()) {
            @Override
            public final void onVideoAdPlayStart() {
            }

            @Override
            public final void onVideoAdPlayEnd() {
                if (AdxTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    AdxTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayEnd();
                }
            }

            @Override
            public final void onShowFailed(e eVar) {
                if (AdxTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    AdxTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayFailed(eVar.a(), eVar.b());
                }
            }

            @Override
            public final void onRewarded() {
                if (AdxTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    AdxTYRewardedVideoAdapter.this.mImpressionListener.onReward();
                }
            }

            @Override
            public final void onAdShow() {
                super.onAdShow();
                if (AdxTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    AdxTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayStart();
                }
            }

            @Override
            public final void onAdClosed() {
                if (AdxTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    AdxTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdClosed();
                }
            }

            @Override
            public final void onAdClick(int i) {
                com.tkay.core.common.f.d trackingInfo = AdxTYRewardedVideoAdapter.this.getTrackingInfo();
                if (trackingInfo != null) {
                    trackingInfo.x(i);
                }
                if (AdxTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    AdxTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayClicked();
                }
            }

            @Override
            public final void onDeeplinkCallback(boolean z) {
                if (AdxTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    AdxTYRewardedVideoAdapter.this.mImpressionListener.onDeeplinkCallback(z);
                }
            }
        });
        f fVar2 = this.b;
        if (fVar2 != null) {
            fVar2.a(activity, map);
        }
    }

    @Override
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        a(context, map);
        this.b.a(new com.tkay.basead.e.c() {
            @Override
            public final void onAdDataLoaded() {
                if (AdxTYRewardedVideoAdapter.this.mLoadListener != null) {
                    AdxTYRewardedVideoAdapter.this.mLoadListener.onAdDataLoaded();
                }
            }

            @Override
            public final void onAdCacheLoaded() {
                AdxTYRewardedVideoAdapter adxTYRewardedVideoAdapter = AdxTYRewardedVideoAdapter.this;
                adxTYRewardedVideoAdapter.c = b.a(adxTYRewardedVideoAdapter.b);
                if (AdxTYRewardedVideoAdapter.this.mLoadListener != null) {
                    AdxTYRewardedVideoAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            }

            @Override
            public final void onAdLoadFailed(e eVar) {
                if (AdxTYRewardedVideoAdapter.this.mLoadListener != null) {
                    AdxTYRewardedVideoAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
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
        int i = (!map.containsKey("v_m") || (obj2 = map.get("v_m")) == null) ? 0 : Integer.parseInt(obj2.toString());
        int i2 = (!map.containsKey("s_c_t") || (obj = map.get("s_c_t")) == null) ? -1 : Integer.parseInt(obj.toString());
        this.a = (i) map.get(f.k.a);
        com.tkay.basead.d.f fVar = new com.tkay.basead.d.f(context, b.a.a, this.a);
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
        i iVar = this.a;
        return iVar != null ? iVar.b : "";
    }

    @Override
    public String getNetworkName() {
        return AdxTYInitManager.getInstance().getNetworkName();
    }

    @Override
    public boolean isAdReady() {
        com.tkay.basead.d.f fVar = this.b;
        boolean z = fVar != null && fVar.c();
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
        AdxBidRequestInfo adxBidRequestInfo = new AdxBidRequestInfo(context, ((i) map.get(f.k.a)).b);
        adxBidRequestInfo.fillAdAcceptType();
        if (tYBidRequestInfoListener != null) {
            tYBidRequestInfoListener.onSuccess(adxBidRequestInfo);
        }
    }
}
