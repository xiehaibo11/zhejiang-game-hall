package com.tkay.network.adx;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.tkay.basead.d.b;
import com.tkay.basead.d.e;
import com.tkay.basead.d.h;
import com.tkay.basead.e.d;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.i;
import com.tkay.nativead.unitgroup.api.CustomNativeAdapter;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class AdxTYAdapter extends CustomNativeAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    e f7526a;
    i b;
    private boolean c;

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return "";
    }

    private void a(Context context, Map<String, Object> map) {
        this.b = (i) map.get(f.k.f6060a);
        this.f7526a = new e(context, b.a.ADX_OFFER_REQUEST_TYPE, this.b);
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        if (this.f7526a != null) {
            this.f7526a = null;
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return AdxTYInitManager.getInstance().getNetworkName();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        i iVar = this.b;
        return iVar != null ? iVar.b : "";
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        i iVar = (i) map.get(f.k.f6060a);
        AdxBidRequestInfo adxBidRequestInfo = new AdxBidRequestInfo(context, iVar != null ? iVar.b : "");
        boolean zEquals = TextUtils.equals("1", TYInitMediation.getStringFromMap(map, MBridgeConstans.PROPERTIES_LAYOUT_TYPE));
        this.c = zEquals;
        if (zEquals) {
            adxBidRequestInfo.fillAdAcceptType();
        }
        if (tYBidRequestInfoListener != null) {
            tYBidRequestInfoListener.onSuccess(adxBidRequestInfo);
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        int intFromMap;
        this.b = (i) map.get(f.k.f6060a);
        this.f7526a = new e(context, b.a.ADX_OFFER_REQUEST_TYPE, this.b);
        this.c = TextUtils.equals("1", TYInitMediation.getStringFromMap(map, MBridgeConstans.PROPERTIES_LAYOUT_TYPE));
        final boolean zEquals = TextUtils.equals("0", TYInitMediation.getStringFromMap(map, "close_button", "0"));
        final boolean zEquals2 = TextUtils.equals("0", TYInitMediation.getStringFromMap(map, "v_m", "0"));
        final String stringFromMap = TYInitMediation.getStringFromMap(map, "video_autoplay", "1");
        int iMin = -1;
        if (map2 != null) {
            iMin = TYInitMediation.getIntFromMap(map2, TYAdConst.KEY.AD_WIDTH);
            intFromMap = TYInitMediation.getIntFromMap(map2, TYAdConst.KEY.AD_HEIGHT);
        } else {
            intFromMap = -1;
        }
        int i = context.getResources().getDisplayMetrics().widthPixels;
        int i2 = context.getResources().getDisplayMetrics().heightPixels;
        if (iMin <= 0) {
            iMin = Math.min(i, i2);
        }
        if (intFromMap <= 0) {
            intFromMap = (iMin * 3) / 4;
        }
        final int i3 = iMin > i ? i : iMin;
        final int i4 = intFromMap > i2 ? i2 : intFromMap;
        final Context applicationContext = context.getApplicationContext();
        this.f7526a.a(new d() { // from class: com.tkay.network.adx.AdxTYAdapter.1
            @Override // com.tkay.basead.e.d
            public final void onNativeAdLoaded(h... hVarArr) {
                AdxTYNativeAd[] adxTYNativeAdArr = new AdxTYNativeAd[hVarArr.length];
                for (int i5 = 0; i5 < hVarArr.length; i5++) {
                    h hVar = hVarArr[i5];
                    hVar.a(i3, i4);
                    hVar.a(zEquals2);
                    hVar.a(stringFromMap);
                    adxTYNativeAdArr[i5] = new AdxTYNativeAd(applicationContext, hVar, AdxTYAdapter.this.c, zEquals);
                }
                if (AdxTYAdapter.this.mLoadListener != null) {
                    AdxTYAdapter.this.mLoadListener.onAdCacheLoaded(adxTYNativeAdArr);
                }
            }

            @Override // com.tkay.basead.e.d
            public final void onNativeAdLoadError(com.tkay.basead.c.e eVar) {
                if (AdxTYAdapter.this.mLoadListener != null) {
                    AdxTYAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }
}
