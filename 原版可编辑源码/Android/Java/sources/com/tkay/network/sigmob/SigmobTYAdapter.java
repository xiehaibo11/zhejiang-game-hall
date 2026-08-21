package com.tkay.network.sigmob;

import android.content.Context;
import android.text.TextUtils;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.natives.WindNativeAdData;
import com.sigmob.windad.natives.WindNativeAdRequest;
import com.sigmob.windad.natives.WindNativeUnifiedAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.common.c.l;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import com.tkay.nativead.unitgroup.api.CustomNativeAdapter;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public class SigmobTYAdapter extends CustomNativeAdapter {
    private WindNativeUnifiedAd a;
    private String b = "";
    private String c;
    private volatile boolean d;
    private double e;

    private void a(Context context, int i) {
        WindNativeUnifiedAd windNativeUnifiedAd;
        if (this.a == null) {
            this.a = new WindNativeUnifiedAd(new WindNativeAdRequest(this.b, null, i, null));
        }
        this.a.setNativeAdLoadListener(new 1(context));
        if (this.d && (windNativeUnifiedAd = this.a) != null) {
            double d = this.e;
            if (d > 0.0d) {
                windNativeUnifiedAd.setBidFloor((int) d);
            }
            this.a.setCurrency("USD");
            this.a.loadAd();
            return;
        }
        if (!TextUtils.isEmpty(this.c)) {
            this.a.loadAd(this.c);
        } else {
            this.a.loadAd();
        }
    }

    final class 1 implements WindNativeUnifiedAd.WindNativeAdLoadListener {
        final Context a;

        1(Context context) {
            this.a = context;
        }

        @Override
        public final void onAdError(WindAdError windAdError, String str) {
            if (!TextUtils.equals(SigmobTYAdapter.this.b, str) || windAdError == null) {
                return;
            }
            SigmobTYAdapter.this.a(String.valueOf(windAdError.getErrorCode()), windAdError.getMessage());
        }

        @Override
        public final void onAdLoad(List<WindNativeAdData> list, String str) {
            if (TextUtils.equals(SigmobTYAdapter.this.b, str)) {
                if (list == null || list.size() <= 0) {
                    SigmobTYAdapter.this.a("", "no ad return");
                    return;
                }
                ArrayList arrayList = new ArrayList();
                Iterator<WindNativeAdData> it = list.iterator();
                while (it.hasNext()) {
                    arrayList.add(new SigmobTYNativeAd(this.a, it.next(), SigmobTYAdapter.this.a));
                }
                CustomNativeAd[] customNativeAdArr = (CustomNativeAd[]) arrayList.toArray(new CustomNativeAd[arrayList.size()]);
                if (!SigmobTYAdapter.this.d || SigmobTYAdapter.this.a == null) {
                    if (SigmobTYAdapter.this.mLoadListener != null) {
                        SigmobTYAdapter.this.mLoadListener.onAdCacheLoaded(customNativeAdArr);
                        return;
                    }
                    return;
                }
                SigmobTYInitManager.onC2SBiddingResultWithCache(SigmobTYAdapter.this.a.getEcpm(), SigmobTYAdapter.this.b, SigmobTYAdapter.this.mBiddingListener, SigmobTYAdapter.this.a, customNativeAdArr[0]);
            }
        }
    }

    @Override
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, Map<String, Object> map2) {
        String stringFromMap = TYInitMediation.getStringFromMap(map, "app_id");
        String stringFromMap2 = TYInitMediation.getStringFromMap(map, "app_key");
        this.b = TYInitMediation.getStringFromMap(map, l.a.c);
        this.c = TYInitMediation.getStringFromMap(map, "payload");
        this.e = TYInitMediation.getDoubleFromMap(map, "bid_floor");
        if (TextUtils.isEmpty(stringFromMap) || TextUtils.isEmpty(stringFromMap2) || TextUtils.isEmpty(this.b)) {
            a("", "app_id、app_key、placement_id could not be null.");
            return;
        }
        if (this.mRequestNum > 3) {
            this.mRequestNum = 3;
        }
        final int i = this.mRequestNum;
        postOnMainThread(new Runnable() {
            @Override
            public final void run() {
                try {
                    SigmobTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() {
                        @Override
                        public final void onSuccess() {
                            SigmobTYAdapter.a(SigmobTYAdapter.this, context, i);
                        }

                        @Override
                        public final void onFail(String str) {
                            SigmobTYAdapter.this.a("", str);
                        }
                    });
                } catch (Throwable th) {
                    SigmobTYAdapter.this.a("", th.getMessage());
                }
            }
        });
    }

    @Override
    public String getNetworkName() {
        return SigmobTYInitManager.getInstance().getNetworkName();
    }

    @Override
    public void destory() {
        WindNativeUnifiedAd windNativeUnifiedAd = this.a;
        if (windNativeUnifiedAd != null) {
            windNativeUnifiedAd.destroy();
        }
    }

    @Override
    public String getNetworkPlacementId() {
        return this.b;
    }

    @Override
    public String getNetworkSDKVersion() {
        return SigmobTYInitManager.getInstance().getNetworkVersion();
    }

    @Override
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.b = TYInitMediation.getStringFromMap(map, l.a.c);
        SigmobTYInitManager.getInstance().a(context, map, map2, tYBidRequestInfoListener);
    }

    @Override
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.d = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    private void a(String str, String str2) {
        SigmobTYInitManager.onAdLoadError(str, str2, this.d, this.mBiddingListener, this.mLoadListener);
    }

    static void a(SigmobTYAdapter sigmobTYAdapter, Context context, int i) {
        WindNativeUnifiedAd windNativeUnifiedAd;
        if (sigmobTYAdapter.a == null) {
            sigmobTYAdapter.a = new WindNativeUnifiedAd(new WindNativeAdRequest(sigmobTYAdapter.b, null, i, null));
        }
        sigmobTYAdapter.a.setNativeAdLoadListener(sigmobTYAdapter.new 1(context));
        if (sigmobTYAdapter.d && (windNativeUnifiedAd = sigmobTYAdapter.a) != null) {
            double d = sigmobTYAdapter.e;
            if (d > 0.0d) {
                windNativeUnifiedAd.setBidFloor((int) d);
            }
            sigmobTYAdapter.a.setCurrency("USD");
            sigmobTYAdapter.a.loadAd();
            return;
        }
        if (!TextUtils.isEmpty(sigmobTYAdapter.c)) {
            sigmobTYAdapter.a.loadAd(sigmobTYAdapter.c);
        } else {
            sigmobTYAdapter.a.loadAd();
        }
    }
}
