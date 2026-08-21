package com.tkay.network.adx;

import android.content.Context;
import android.view.View;
import com.tkay.banner.unitgroup.api.CustomBannerAdapter;
import com.tkay.basead.d.a;
import com.tkay.basead.d.b;
import com.tkay.basead.d.c;
import com.tkay.basead.e.e;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.d;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.j;
import java.util.Map;

public class AdxTYBannerAdapter extends CustomBannerAdapter {
    i a;
    Map<String, Object> b;
    private a c;
    private View d;

    @Override
    public String getNetworkSDKVersion() {
        return "";
    }

    @Override
    public View getBannerView() {
        return this.d;
    }

    private void a(Context context, Map<String, Object> map, Map<String, Object> map2) {
        Object obj;
        Object obj2;
        int i = 0;
        int i2 = (!map.containsKey("close_button") || (obj2 = map.get("close_button")) == null) ? 0 : Integer.parseInt(obj2.toString());
        String string = (!map.containsKey(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE) || (obj = map.get(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE)) == null) ? j.a : obj.toString();
        if (map2 != null && map2.containsKey(TYAdConst.KEY.AD_HEIGHT)) {
            try {
                i = (int) Double.parseDouble(map2.get(TYAdConst.KEY.AD_HEIGHT).toString());
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        this.a = (i) map.get(f.k.a);
        a aVar = new a(context, b.a.a, this.a);
        this.c = aVar;
        aVar.a(new c.a().c(i2).b(string).g(i).a());
    }

    @Override
    public void destory() {
        this.d = null;
        a aVar = this.c;
        if (aVar != null) {
            aVar.a((com.tkay.basead.e.a) null);
            this.c.b();
            this.c = null;
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
    public Map<String, Object> getNetworkInfoMap() {
        return this.b;
    }

    @Override
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        i iVar = (i) map.get(f.k.a);
        AdxBidRequestInfo adxBidRequestInfo = new AdxBidRequestInfo(context, iVar != null ? iVar.b : "");
        adxBidRequestInfo.fillBannerData(map);
        if (tYBidRequestInfoListener != null) {
            tYBidRequestInfoListener.onSuccess(adxBidRequestInfo);
        }
    }

    @Override
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        Object obj;
        Object obj2;
        int i = 0;
        int i2 = (!map.containsKey("close_button") || (obj2 = map.get("close_button")) == null) ? 0 : Integer.parseInt(obj2.toString());
        String string = (!map.containsKey(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE) || (obj = map.get(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE)) == null) ? j.a : obj.toString();
        if (map2 != null && map2.containsKey(TYAdConst.KEY.AD_HEIGHT)) {
            try {
                i = (int) Double.parseDouble(map2.get(TYAdConst.KEY.AD_HEIGHT).toString());
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        this.a = (i) map.get(f.k.a);
        a aVar = new a(context, b.a.a, this.a);
        this.c = aVar;
        aVar.a(new c.a().c(i2).b(string).g(i).a());
        this.c.a(new com.tkay.basead.e.c() {
            @Override
            public final void onAdDataLoaded() {
                if (AdxTYBannerAdapter.this.mLoadListener != null) {
                    AdxTYBannerAdapter.this.mLoadListener.onAdDataLoaded();
                }
            }

            @Override
            public final void onAdCacheLoaded() {
                if (AdxTYBannerAdapter.this.c == null || AdxTYBannerAdapter.this.mLoadListener == null) {
                    return;
                }
                AdxTYBannerAdapter adxTYBannerAdapter = AdxTYBannerAdapter.this;
                adxTYBannerAdapter.b = com.tkay.basead.b.a(adxTYBannerAdapter.c);
                AdxTYBannerAdapter.this.c.a(new e(AdxTYBannerAdapter.this.c.e()) {
                    @Override
                    public final void onShowFailed(com.tkay.basead.c.e eVar) {
                    }

                    @Override
                    public final void onAdShow() {
                        super.onAdShow();
                        if (AdxTYBannerAdapter.this.mImpressionEventListener != null) {
                            AdxTYBannerAdapter.this.mImpressionEventListener.onBannerAdShow();
                        }
                    }

                    @Override
                    public final void onAdClosed() {
                        if (AdxTYBannerAdapter.this.mImpressionEventListener != null) {
                            AdxTYBannerAdapter.this.mImpressionEventListener.onBannerAdClose();
                        }
                    }

                    @Override
                    public final void onAdClick(int i3) {
                        d trackingInfo = AdxTYBannerAdapter.this.getTrackingInfo();
                        if (trackingInfo != null) {
                            trackingInfo.x(i3);
                        }
                        if (AdxTYBannerAdapter.this.mImpressionEventListener != null) {
                            AdxTYBannerAdapter.this.mImpressionEventListener.onBannerAdClicked();
                        }
                    }

                    @Override
                    public final void onDeeplinkCallback(boolean z) {
                        if (AdxTYBannerAdapter.this.mImpressionEventListener != null) {
                            AdxTYBannerAdapter.this.mImpressionEventListener.onDeeplinkCallback(z);
                        }
                    }
                });
                AdxTYBannerAdapter adxTYBannerAdapter2 = AdxTYBannerAdapter.this;
                adxTYBannerAdapter2.d = adxTYBannerAdapter2.c.a();
                if (AdxTYBannerAdapter.this.d != null) {
                    AdxTYBannerAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                } else {
                    AdxTYBannerAdapter.this.mLoadListener.onAdLoadError("", "Adx bannerView = null");
                }
            }

            @Override
            public final void onAdLoadFailed(com.tkay.basead.c.e eVar) {
                if (AdxTYBannerAdapter.this.mLoadListener != null) {
                    AdxTYBannerAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }
}
