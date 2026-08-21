package com.tkay.network.onlineapi;

import android.content.Context;
import com.tkay.basead.d.b;
import com.tkay.basead.d.e;
import com.tkay.basead.d.h;
import com.tkay.basead.e.d;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.i;
import com.tkay.nativead.unitgroup.api.CustomNativeAdapter;
import java.util.Map;

public class OnlineApiTYAdapter extends CustomNativeAdapter {
    e a;
    i b;
    String c;

    @Override
    public String getNetworkName() {
        return "";
    }

    @Override
    public String getNetworkSDKVersion() {
        return "";
    }

    private void a(Context context, Map<String, Object> map) {
        this.c = map.get("unit_id") != null ? map.get("unit_id").toString() : "";
        this.b = (i) map.get(f.k.a);
        this.a = new e(context, b.a.b, this.b);
    }

    @Override
    public void destory() {
        if (this.a != null) {
            this.a = null;
        }
    }

    @Override
    public String getNetworkPlacementId() {
        return this.c;
    }

    @Override
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        int i;
        int i2;
        this.c = map.get("unit_id") != null ? map.get("unit_id").toString() : "";
        this.b = (i) map.get(f.k.a);
        this.a = new e(context, b.a.b, this.b);
        int iMin = -1;
        if (map2 != null) {
            try {
                i = Integer.parseInt(map2.get(TYAdConst.KEY.AD_WIDTH).toString());
            } catch (Throwable unused) {
                i = -1;
            }
            try {
                iMin = Integer.parseInt(map2.get(TYAdConst.KEY.AD_HEIGHT).toString());
            } catch (Throwable unused2) {
            }
            i2 = iMin;
            iMin = i;
        } else {
            i2 = -1;
        }
        final int i3 = context.getResources().getDisplayMetrics().widthPixels;
        final int i4 = context.getResources().getDisplayMetrics().heightPixels;
        if (iMin <= 0) {
            iMin = Math.min(i3, i4);
        }
        if (i2 <= 0) {
            i2 = (iMin * 3) / 4;
        }
        if (iMin <= i3) {
            i3 = iMin;
        }
        if (i2 <= i4) {
            i4 = i2;
        }
        final Context applicationContext = context.getApplicationContext();
        this.a.a(new d() {
            @Override
            public final void onNativeAdLoaded(h... hVarArr) {
                OnlineApiTYNativeAd[] onlineApiTYNativeAdArr = new OnlineApiTYNativeAd[hVarArr.length];
                for (int i5 = 0; i5 < hVarArr.length; i5++) {
                    hVarArr[i5].a(i3, i4);
                    onlineApiTYNativeAdArr[i5] = new OnlineApiTYNativeAd(applicationContext, hVarArr[i5]);
                }
                if (OnlineApiTYAdapter.this.mLoadListener != null) {
                    OnlineApiTYAdapter.this.mLoadListener.onAdCacheLoaded(onlineApiTYNativeAdArr);
                }
            }

            @Override
            public final void onNativeAdLoadError(com.tkay.basead.c.e eVar) {
                if (OnlineApiTYAdapter.this.mLoadListener != null) {
                    OnlineApiTYAdapter.this.mLoadListener.onAdLoadError(eVar.a(), eVar.b());
                }
            }
        });
    }
}
