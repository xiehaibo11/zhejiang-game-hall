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

/* JADX INFO: loaded from: classes3.dex */
public class AdxTYRewardedVideoAdapter extends CustomRewardVideoAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    i f7535a;
    f b;
    Map<String, Object> c;

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return "";
    }

    @Override // com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter
    public void show(Activity activity) {
        int iG = d.g(activity);
        HashMap map = new HashMap(1);
        map.put("extra_scenario", this.mScenario);
        map.put(c.j, Integer.valueOf(iG));
        f fVar = this.b;
        fVar.a(new com.tkay.basead.e.f(fVar.e()) { // from class: com.tkay.network.adx.AdxTYRewardedVideoAdapter.1
            @Override // com.tkay.basead.e.g
            public final void onVideoAdPlayStart() {
            }

            @Override // com.tkay.basead.e.g
            public final void onVideoAdPlayEnd() {
                if (AdxTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    AdxTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayEnd();
                }
            }

            @Override // com.tkay.basead.e.a
            public final void onShowFailed(e eVar) {
                if (AdxTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    AdxTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayFailed(eVar.a(), eVar.b());
                }
            }

            @Override // com.tkay.basead.e.g
            public final void onRewarded() {
                if (AdxTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    AdxTYRewardedVideoAdapter.this.mImpressionListener.onReward();
                }
            }

            @Override // com.tkay.basead.e.f, com.tkay.basead.e.a
            public final void onAdShow() {
                super.onAdShow();
                if (AdxTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    AdxTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayStart();
                }
            }

            @Override // com.tkay.basead.e.a
            public final void onAdClosed() {
                if (AdxTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    AdxTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdClosed();
                }
            }

            @Override // com.tkay.basead.e.a
            public final void onAdClick(int i) {
                com.tkay.core.common.f.d trackingInfo = AdxTYRewardedVideoAdapter.this.getTrackingInfo();
                if (trackingInfo != null) {
                    trackingInfo.x(i);
                }
                if (AdxTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    AdxTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayClicked();
                }
            }

            @Override // com.tkay.basead.e.a
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

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        a(context, map);
        this.b.a(new com.tkay.basead.e.c() { // from class: com.tkay.network.adx.AdxTYRewardedVideoAdapter.2
            @Override // com.tkay.basead.e.c
            public final void onAdDataLoaded() {
                if (AdxTYRewardedVideoAdapter.this.mLoadListener != null) {
                    AdxTYRewardedVideoAdapter.this.mLoadListener.onAdDataLoaded();
                }
            }

            @Override // com.tkay.basead.e.c
            public final void onAdCacheLoaded() {
                AdxTYRewardedVideoAdapter adxTYRewardedVideoAdapter = AdxTYRewardedVideoAdapter.this;
                adxTYRewardedVideoAdapter.c = b.a(adxTYRewardedVideoAdapter.b);
                if (AdxTYRewardedVideoAdapter.this.mLoadListener != null) {
                    AdxTYRewardedVideoAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            }

            @Override // com.tkay.basead.e.c
            public final void onAdLoadFailed(e eVar) {
                if (AdxTYRewardedVideoAdapter.this.mLoadListener != null) {
                    AdxTYRewardedVideoAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean initNetworkObjectByPlacementId(Context context, Map<String, Object> map, Map<String, Object> map2) {
        a(context, map);
        return true;
    }

    private void a(Context context, Map<String, Object> map) {
        Object obj;
        Object obj2;
        int i = (!map.containsKey("v_m") || (obj2 = map.get("v_m")) == null) ? 0 : Integer.parseInt(obj2.toString());
        int i2 = (!map.containsKey("s_c_t") || (obj = map.get("s_c_t")) == null) ? -1 : Integer.parseInt(obj.toString());
        this.f7535a = (i) map.get(f.k.f6060a);
        com.tkay.basead.d.f fVar = new com.tkay.basead.d.f(context, b.a.ADX_OFFER_REQUEST_TYPE, this.f7535a);
        this.b = fVar;
        fVar.a(new c.a().a(i).b(i2).a());
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        com.tkay.basead.d.f fVar = this.b;
        if (fVar != null) {
            fVar.b();
            this.b = null;
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        i iVar = this.f7535a;
        return iVar != null ? iVar.b : "";
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return AdxTYInitManager.getInstance().getNetworkName();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean isAdReady() {
        com.tkay.basead.d.f fVar = this.b;
        boolean z = fVar != null && fVar.c();
        if (z && this.c == null) {
            this.c = com.tkay.basead.b.a(this.b);
        }
        return z;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public Map<String, Object> getNetworkInfoMap() {
        return this.c;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        AdxBidRequestInfo adxBidRequestInfo = new AdxBidRequestInfo(context, ((i) map.get(f.k.f6060a)).b);
        adxBidRequestInfo.fillAdAcceptType();
        if (tYBidRequestInfoListener != null) {
            tYBidRequestInfoListener.onSuccess(adxBidRequestInfo);
        }
    }
}
