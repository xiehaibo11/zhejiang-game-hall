package com.tkay.network.gdt;

import android.content.Context;
import android.text.TextUtils;
import com.qq.e.ads.nativ.NativeADUnifiedListener;
import com.qq.e.ads.nativ.NativeUnifiedAD;
import com.qq.e.ads.nativ.NativeUnifiedADData;
import com.qq.e.comm.util.AdError;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.core.api.TYBiddingResult;
import com.tkay.core.api.TYInitMediation;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import com.tkay.nativead.unitgroup.api.CustomNativeAdapter;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class GDTTYAdapter extends CustomNativeAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f7540a;
    String b;
    int c;
    String d;
    int e;
    int f;
    int g;
    int h;
    private int j = -1;
    private int k = -2;
    boolean i = false;

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
    }

    private void a(Context context, Map<String, Object> map) {
        NativeUnifiedAD nativeUnifiedAD;
        try {
            int i = this.e;
            if (i == 2 || i == 4) {
                Context applicationContext = context.getApplicationContext();
                AnonymousClass2 anonymousClass2 = new AnonymousClass2(applicationContext);
                if (TextUtils.isEmpty(this.d)) {
                    nativeUnifiedAD = new NativeUnifiedAD(applicationContext, this.b, anonymousClass2);
                } else {
                    nativeUnifiedAD = new NativeUnifiedAD(applicationContext, this.b, anonymousClass2, this.d);
                }
                if (this.h != -1) {
                    nativeUnifiedAD.setMaxVideoDuration(this.h);
                }
                if (TextUtils.isEmpty(this.d)) {
                    int i2 = this.c;
                    GDTTYInitManager.getInstance();
                    nativeUnifiedAD.loadData(i2, GDTTYInitManager.a(map));
                    return;
                }
                nativeUnifiedAD.loadData(this.c);
                return;
            }
            AnonymousClass1 anonymousClass1 = new AnonymousClass1();
            if (this.e == 3) {
                GDTTYNativeExpressPatchAd gDTTYNativeExpressPatchAd = new GDTTYNativeExpressPatchAd(context, this.b, this.j, this.k, this.f, this.g, this.h, this.d);
                GDTTYInitManager.getInstance();
                gDTTYNativeExpressPatchAd.a(anonymousClass1, GDTTYInitManager.a(map));
            } else {
                GDTTYNativeExpressAd gDTTYNativeExpressAd = new GDTTYNativeExpressAd(context, this.b, this.j, this.k, this.f, this.g, this.h, this.d);
                GDTTYInitManager.getInstance();
                gDTTYNativeExpressAd.a(anonymousClass1, GDTTYInitManager.a(map));
            }
        } catch (Throwable th) {
            notifyATLoadFail("", th.getMessage());
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.gdt.GDTTYAdapter$1, reason: invalid class name */
    final class AnonymousClass1 implements a {
        AnonymousClass1() {
        }

        @Override // com.tkay.network.gdt.a
        public final void notifyLoaded(CustomNativeAd... customNativeAdArr) {
            if (!GDTTYAdapter.this.i || !(customNativeAdArr[0] instanceof GDTTYNativeExpressAd)) {
                if (GDTTYAdapter.this.mLoadListener != null) {
                    GDTTYAdapter.this.mLoadListener.onAdCacheLoaded(customNativeAdArr);
                    return;
                }
                return;
            }
            GDTTYNativeExpressAd gDTTYNativeExpressAd = (GDTTYNativeExpressAd) customNativeAdArr[0];
            if (GDTTYAdapter.this.mBiddingListener != null) {
                double ecpm = gDTTYNativeExpressAd.b.getECPM();
                GDTTYBiddingNotice gDTTYBiddingNotice = new GDTTYBiddingNotice(gDTTYNativeExpressAd);
                TYBiddingListener tYBiddingListener = GDTTYAdapter.this.mBiddingListener;
                StringBuilder sb = new StringBuilder();
                sb.append(System.currentTimeMillis());
                tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(ecpm, sb.toString(), gDTTYBiddingNotice, TYAdConst.CURRENCY.RMB_CENT), gDTTYNativeExpressAd);
            }
        }

        @Override // com.tkay.network.gdt.a
        public final void notifyError(String str, String str2) {
            GDTTYAdapter.this.notifyATLoadFail(str, str2);
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.gdt.GDTTYAdapter$2, reason: invalid class name */
    final class AnonymousClass2 implements NativeADUnifiedListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ Context f7542a;

        AnonymousClass2(Context context) {
            this.f7542a = context;
        }

        @Override // com.qq.e.ads.nativ.NativeADUnifiedListener
        public final void onADLoaded(List<NativeUnifiedADData> list) {
            ArrayList arrayList = new ArrayList();
            if (list != null && list.size() > 0) {
                GDTTYNativePatchAd gDTTYNativePatchAd = null;
                GDTTYNativeAd gDTTYNativeAd = null;
                for (NativeUnifiedADData nativeUnifiedADData : list) {
                    if (GDTTYAdapter.this.e == 4) {
                        gDTTYNativePatchAd = new GDTTYNativePatchAd(this.f7542a, nativeUnifiedADData, GDTTYAdapter.this.f, GDTTYAdapter.this.g, GDTTYAdapter.this.h);
                        arrayList.add(gDTTYNativePatchAd);
                    } else {
                        gDTTYNativeAd = new GDTTYNativeAd(this.f7542a, nativeUnifiedADData, GDTTYAdapter.this.f, GDTTYAdapter.this.g, GDTTYAdapter.this.h);
                        arrayList.add(gDTTYNativeAd);
                    }
                }
                CustomNativeAd[] customNativeAdArr = (CustomNativeAd[]) arrayList.toArray(new CustomNativeAd[arrayList.size()]);
                if (!GDTTYAdapter.this.i) {
                    if (GDTTYAdapter.this.mLoadListener != null) {
                        GDTTYAdapter.this.mLoadListener.onAdCacheLoaded(customNativeAdArr);
                        return;
                    }
                    return;
                }
                if (GDTTYAdapter.this.mBiddingListener != null) {
                    if (GDTTYAdapter.this.e == 4 && gDTTYNativePatchAd != null) {
                        double ecpm = gDTTYNativePatchAd.c.getECPM();
                        GDTTYBiddingNotice gDTTYBiddingNotice = new GDTTYBiddingNotice(gDTTYNativePatchAd);
                        TYBiddingListener tYBiddingListener = GDTTYAdapter.this.mBiddingListener;
                        StringBuilder sb = new StringBuilder();
                        sb.append(System.currentTimeMillis());
                        tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(ecpm, sb.toString(), gDTTYBiddingNotice, TYAdConst.CURRENCY.RMB_CENT), gDTTYNativePatchAd);
                        return;
                    }
                    if (gDTTYNativeAd != null) {
                        double ecpm2 = gDTTYNativeAd.c.getECPM();
                        GDTTYBiddingNotice gDTTYBiddingNotice2 = new GDTTYBiddingNotice(gDTTYNativeAd);
                        TYBiddingListener tYBiddingListener2 = GDTTYAdapter.this.mBiddingListener;
                        StringBuilder sb2 = new StringBuilder();
                        sb2.append(System.currentTimeMillis());
                        tYBiddingListener2.onC2SBiddingResultWithCache(TYBiddingResult.success(ecpm2, sb2.toString(), gDTTYBiddingNotice2, TYAdConst.CURRENCY.RMB_CENT), gDTTYNativeAd);
                        return;
                    }
                    return;
                }
                return;
            }
            GDTTYAdapter.this.notifyATLoadFail("", "Ad list is empty");
        }

        @Override // com.qq.e.ads.NativeAbstractAD.BasicADListener
        public final void onNoAD(AdError adError) {
            GDTTYAdapter gDTTYAdapter = GDTTYAdapter.this;
            StringBuilder sb = new StringBuilder();
            sb.append(adError.getErrorCode());
            gDTTYAdapter.notifyATLoadFail(sb.toString(), adError.getErrorMsg());
        }
    }

    private void b(Context context, Map<String, Object> map) {
        NativeUnifiedAD nativeUnifiedAD;
        AnonymousClass2 anonymousClass2 = new AnonymousClass2(context);
        if (TextUtils.isEmpty(this.d)) {
            nativeUnifiedAD = new NativeUnifiedAD(context, this.b, anonymousClass2);
        } else {
            nativeUnifiedAD = new NativeUnifiedAD(context, this.b, anonymousClass2, this.d);
        }
        int i = this.h;
        if (i != -1) {
            nativeUnifiedAD.setMaxVideoDuration(i);
        }
        if (TextUtils.isEmpty(this.d)) {
            int i2 = this.c;
            GDTTYInitManager.getInstance();
            nativeUnifiedAD.loadData(i2, GDTTYInitManager.a(map));
            return;
        }
        nativeUnifiedAD.loadData(this.c);
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return GDTTYInitManager.getInstance().getNetworkName();
    }

    private void a(Map<String, Object> map, Map<String, Object> map2) {
        this.f7540a = TYInitMediation.getStringFromMap(map, "app_id");
        this.b = TYInitMediation.getStringFromMap(map, "unit_id");
        this.e = TYInitMediation.getIntFromMap(map, "unit_type");
        this.d = TYInitMediation.getStringFromMap(map, "payload");
        this.c = this.i ? 1 : this.mRequestNum;
        try {
            this.j = TYInitMediation.getIntFromMap(map2, TYAdConst.KEY.AD_WIDTH, -1);
            if (map2.containsKey(GDTTYConst.AD_HEIGHT)) {
                this.k = TYInitMediation.getIntFromMap(map2, GDTTYConst.AD_HEIGHT, -2);
            } else if (map2.containsKey(TYAdConst.KEY.AD_HEIGHT)) {
                this.k = TYInitMediation.getIntFromMap(map2, TYAdConst.KEY.AD_HEIGHT, -2);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        int intFromMap = TYInitMediation.getIntFromMap(map, "video_muted", 0);
        int intFromMap2 = TYInitMediation.getIntFromMap(map, "video_autoplay", 1);
        int intFromMap3 = TYInitMediation.getIntFromMap(map, "video_duration", -1);
        this.f = intFromMap;
        this.g = intFromMap2;
        this.h = intFromMap3;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.b;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return GDTTYInitManager.getInstance().getNetworkVersion();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public TYInitMediation getMediationInitManager() {
        return GDTTYInitManager.getInstance();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.b = TYInitMediation.getStringFromMap(map, "unit_id");
        GDTTYInitManager.getInstance().a(context, map, map2, tYBidRequestInfoListener);
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.i = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, Map<String, Object> map2) {
        this.f7540a = TYInitMediation.getStringFromMap(map, "app_id");
        this.b = TYInitMediation.getStringFromMap(map, "unit_id");
        this.e = TYInitMediation.getIntFromMap(map, "unit_type");
        this.d = TYInitMediation.getStringFromMap(map, "payload");
        this.c = this.i ? 1 : this.mRequestNum;
        try {
            this.j = TYInitMediation.getIntFromMap(map2, TYAdConst.KEY.AD_WIDTH, -1);
            if (map2.containsKey(GDTTYConst.AD_HEIGHT)) {
                this.k = TYInitMediation.getIntFromMap(map2, GDTTYConst.AD_HEIGHT, -2);
            } else if (map2.containsKey(TYAdConst.KEY.AD_HEIGHT)) {
                this.k = TYInitMediation.getIntFromMap(map2, TYAdConst.KEY.AD_HEIGHT, -2);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        int intFromMap = TYInitMediation.getIntFromMap(map, "video_muted", 0);
        int intFromMap2 = TYInitMediation.getIntFromMap(map, "video_autoplay", 1);
        int intFromMap3 = TYInitMediation.getIntFromMap(map, "video_duration", -1);
        this.f = intFromMap;
        this.g = intFromMap2;
        this.h = intFromMap3;
        if (TextUtils.isEmpty(this.f7540a) || TextUtils.isEmpty(this.b)) {
            notifyATLoadFail("", "GTD appid or unitId is empty.");
        } else {
            GDTTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() { // from class: com.tkay.network.gdt.GDTTYAdapter.3
                @Override // com.tkay.core.api.MediationInitCallback
                public final void onSuccess() {
                    GDTTYAdapter.a(GDTTYAdapter.this, context, map);
                }

                @Override // com.tkay.core.api.MediationInitCallback
                public final void onFail(String str) {
                    GDTTYAdapter.this.notifyATLoadFail("", str);
                }
            });
        }
    }

    static /* synthetic */ void a(GDTTYAdapter gDTTYAdapter, Context context, Map map) {
        NativeUnifiedAD nativeUnifiedAD;
        try {
            int i = gDTTYAdapter.e;
            if (i == 2 || i == 4) {
                Context applicationContext = context.getApplicationContext();
                AnonymousClass2 anonymousClass2 = gDTTYAdapter.new AnonymousClass2(applicationContext);
                if (TextUtils.isEmpty(gDTTYAdapter.d)) {
                    nativeUnifiedAD = new NativeUnifiedAD(applicationContext, gDTTYAdapter.b, anonymousClass2);
                } else {
                    nativeUnifiedAD = new NativeUnifiedAD(applicationContext, gDTTYAdapter.b, anonymousClass2, gDTTYAdapter.d);
                }
                if (gDTTYAdapter.h != -1) {
                    nativeUnifiedAD.setMaxVideoDuration(gDTTYAdapter.h);
                }
                if (TextUtils.isEmpty(gDTTYAdapter.d)) {
                    int i2 = gDTTYAdapter.c;
                    GDTTYInitManager.getInstance();
                    nativeUnifiedAD.loadData(i2, GDTTYInitManager.a((Map<String, Object>) map));
                    return;
                }
                nativeUnifiedAD.loadData(gDTTYAdapter.c);
                return;
            }
            AnonymousClass1 anonymousClass1 = gDTTYAdapter.new AnonymousClass1();
            if (gDTTYAdapter.e == 3) {
                GDTTYNativeExpressPatchAd gDTTYNativeExpressPatchAd = new GDTTYNativeExpressPatchAd(context, gDTTYAdapter.b, gDTTYAdapter.j, gDTTYAdapter.k, gDTTYAdapter.f, gDTTYAdapter.g, gDTTYAdapter.h, gDTTYAdapter.d);
                GDTTYInitManager.getInstance();
                gDTTYNativeExpressPatchAd.a(anonymousClass1, GDTTYInitManager.a((Map<String, Object>) map));
            } else {
                GDTTYNativeExpressAd gDTTYNativeExpressAd = new GDTTYNativeExpressAd(context, gDTTYAdapter.b, gDTTYAdapter.j, gDTTYAdapter.k, gDTTYAdapter.f, gDTTYAdapter.g, gDTTYAdapter.h, gDTTYAdapter.d);
                GDTTYInitManager.getInstance();
                gDTTYNativeExpressAd.a(anonymousClass1, GDTTYInitManager.a((Map<String, Object>) map));
            }
        } catch (Throwable th) {
            gDTTYAdapter.notifyATLoadFail("", th.getMessage());
        }
    }
}
