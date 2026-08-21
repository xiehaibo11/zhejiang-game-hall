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

/* JADX INFO: loaded from: classes3.dex */
public class SigmobTYAdapter extends CustomNativeAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private WindNativeUnifiedAd f7680a;
    private String b = "";
    private String c;
    private volatile boolean d;
    private double e;

    private void a(Context context, int i) {
        WindNativeUnifiedAd windNativeUnifiedAd;
        if (this.f7680a == null) {
            this.f7680a = new WindNativeUnifiedAd(new WindNativeAdRequest(this.b, null, i, null));
        }
        this.f7680a.setNativeAdLoadListener(new AnonymousClass1(context));
        if (this.d && (windNativeUnifiedAd = this.f7680a) != null) {
            double d = this.e;
            if (d > 0.0d) {
                windNativeUnifiedAd.setBidFloor((int) d);
            }
            this.f7680a.setCurrency("USD");
            this.f7680a.loadAd();
            return;
        }
        if (!TextUtils.isEmpty(this.c)) {
            this.f7680a.loadAd(this.c);
        } else {
            this.f7680a.loadAd();
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.sigmob.SigmobTYAdapter$1, reason: invalid class name */
    final class AnonymousClass1 implements WindNativeUnifiedAd.WindNativeAdLoadListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ Context f7681a;

        AnonymousClass1(Context context) {
            this.f7681a = context;
        }

        @Override // com.sigmob.windad.natives.WindNativeUnifiedAd.WindNativeAdLoadListener
        public final void onAdError(WindAdError windAdError, String str) {
            if (!TextUtils.equals(SigmobTYAdapter.this.b, str) || windAdError == null) {
                return;
            }
            SigmobTYAdapter.this.a(String.valueOf(windAdError.getErrorCode()), windAdError.getMessage());
        }

        @Override // com.sigmob.windad.natives.WindNativeUnifiedAd.WindNativeAdLoadListener
        public final void onAdLoad(List<WindNativeAdData> list, String str) {
            if (TextUtils.equals(SigmobTYAdapter.this.b, str)) {
                if (list == null || list.size() <= 0) {
                    SigmobTYAdapter.this.a("", "no ad return");
                    return;
                }
                ArrayList arrayList = new ArrayList();
                Iterator<WindNativeAdData> it = list.iterator();
                while (it.hasNext()) {
                    arrayList.add(new SigmobTYNativeAd(this.f7681a, it.next(), SigmobTYAdapter.this.f7680a));
                }
                CustomNativeAd[] customNativeAdArr = (CustomNativeAd[]) arrayList.toArray(new CustomNativeAd[arrayList.size()]);
                if (!SigmobTYAdapter.this.d || SigmobTYAdapter.this.f7680a == null) {
                    if (SigmobTYAdapter.this.mLoadListener != null) {
                        SigmobTYAdapter.this.mLoadListener.onAdCacheLoaded(customNativeAdArr);
                        return;
                    }
                    return;
                }
                SigmobTYInitManager.onC2SBiddingResultWithCache(SigmobTYAdapter.this.f7680a.getEcpm(), SigmobTYAdapter.this.b, SigmobTYAdapter.this.mBiddingListener, SigmobTYAdapter.this.f7680a, customNativeAdArr[0]);
            }
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
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
        postOnMainThread(new Runnable() { // from class: com.tkay.network.sigmob.SigmobTYAdapter.2
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    SigmobTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() { // from class: com.tkay.network.sigmob.SigmobTYAdapter.2.1
                        @Override // com.tkay.core.api.MediationInitCallback
                        public final void onSuccess() {
                            SigmobTYAdapter.a(SigmobTYAdapter.this, context, i);
                        }

                        @Override // com.tkay.core.api.MediationInitCallback
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

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return SigmobTYInitManager.getInstance().getNetworkName();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        WindNativeUnifiedAd windNativeUnifiedAd = this.f7680a;
        if (windNativeUnifiedAd != null) {
            windNativeUnifiedAd.destroy();
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.b;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return SigmobTYInitManager.getInstance().getNetworkVersion();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.b = TYInitMediation.getStringFromMap(map, l.a.c);
        SigmobTYInitManager.getInstance().a(context, map, map2, tYBidRequestInfoListener);
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.d = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str, String str2) {
        SigmobTYInitManager.onAdLoadError(str, str2, this.d, this.mBiddingListener, this.mLoadListener);
    }

    static /* synthetic */ void a(SigmobTYAdapter sigmobTYAdapter, Context context, int i) {
        WindNativeUnifiedAd windNativeUnifiedAd;
        if (sigmobTYAdapter.f7680a == null) {
            sigmobTYAdapter.f7680a = new WindNativeUnifiedAd(new WindNativeAdRequest(sigmobTYAdapter.b, null, i, null));
        }
        sigmobTYAdapter.f7680a.setNativeAdLoadListener(sigmobTYAdapter.new AnonymousClass1(context));
        if (sigmobTYAdapter.d && (windNativeUnifiedAd = sigmobTYAdapter.f7680a) != null) {
            double d = sigmobTYAdapter.e;
            if (d > 0.0d) {
                windNativeUnifiedAd.setBidFloor((int) d);
            }
            sigmobTYAdapter.f7680a.setCurrency("USD");
            sigmobTYAdapter.f7680a.loadAd();
            return;
        }
        if (!TextUtils.isEmpty(sigmobTYAdapter.c)) {
            sigmobTYAdapter.f7680a.loadAd(sigmobTYAdapter.c);
        } else {
            sigmobTYAdapter.f7680a.loadAd();
        }
    }
}
