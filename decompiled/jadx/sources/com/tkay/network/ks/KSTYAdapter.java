package com.tkay.network.ks;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.api.KsAdSDK;
import com.kwad.sdk.api.KsDrawAd;
import com.kwad.sdk.api.KsFeedAd;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsNativeAd;
import com.kwad.sdk.api.KsScene;
import com.mbridge.msdk.MBridgeConstans;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.core.api.TYBiddingResult;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.common.b.f;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import com.tkay.nativead.unitgroup.api.CustomNativeAdapter;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class KSTYAdapter extends CustomNativeAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    long f7584a;
    String b = "0";
    boolean c = false;
    String d = "0";
    String e;
    Context f;
    boolean g;
    double h;

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return KSTYInitManager.getInstance().getNetworkName();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, final Map<String, Object> map2) {
        if (!a(map)) {
            notifyATLoadFail("", "kuaishou app_id or position_id is empty.");
        } else {
            this.f = context.getApplicationContext();
            KSTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() { // from class: com.tkay.network.ks.KSTYAdapter.1
                @Override // com.tkay.core.api.MediationInitCallback
                public final void onSuccess() {
                    KSTYAdapter kSTYAdapter = KSTYAdapter.this;
                    KSTYAdapter.a(kSTYAdapter, kSTYAdapter.f, map2, KSTYAdapter.this.mRequestNum);
                }

                @Override // com.tkay.core.api.MediationInitCallback
                public final void onFail(String str) {
                    KSTYAdapter.this.notifyATLoadFail("", str);
                }
            });
        }
    }

    private void a(Context context, Map<String, Object> map, int i) {
        Object obj = map.containsKey(TYAdConst.KEY.AD_WIDTH) ? map.get(TYAdConst.KEY.AD_WIDTH) : null;
        Object obj2 = map.containsKey(TYAdConst.KEY.AD_HEIGHT) ? map.get(TYAdConst.KEY.AD_HEIGHT) : null;
        KsScene.Builder builderAdNum = new KsScene.Builder(this.f7584a).adNum(this.g ? 1 : Math.min(i, 5));
        if (obj != null) {
            try {
                int i2 = (int) Double.parseDouble(obj.toString());
                if (i2 > 0) {
                    builderAdNum.width(i2);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        if (obj2 != null) {
            try {
                int i3 = (int) Double.parseDouble(obj2.toString());
                if (i3 > 0) {
                    builderAdNum.height(i3);
                }
            } catch (Throwable th2) {
                th2.printStackTrace();
            }
        }
        if (!TextUtils.isEmpty(this.e)) {
            builderAdNum.setBidResponseV2(this.e);
            builderAdNum.adNum(1);
        }
        KsScene ksSceneBuild = builderAdNum.build();
        if (TextUtils.equals("1", this.d)) {
            KsAdSDK.getLoadManager().loadDrawAd(ksSceneBuild, new AnonymousClass2(context));
        } else if (TextUtils.equals("1", this.b)) {
            KsAdSDK.getLoadManager().loadConfigFeedAd(ksSceneBuild, new AnonymousClass3(context));
        } else {
            KsAdSDK.getLoadManager().loadNativeAd(ksSceneBuild, new AnonymousClass4(context));
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.ks.KSTYAdapter$2, reason: invalid class name */
    final class AnonymousClass2 implements KsLoadManager.DrawAdListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ Context f7586a;

        AnonymousClass2(Context context) {
            this.f7586a = context;
        }

        @Override // com.kwad.sdk.api.KsLoadManager.DrawAdListener
        public final void onError(int i, String str) {
            KSTYAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override // com.kwad.sdk.api.KsLoadManager.DrawAdListener
        public final void onDrawAdLoad(List<KsDrawAd> list) {
            if (list == null || list.size() == 0) {
                KSTYAdapter.this.notifyATLoadFail("", "kuaishou no fill");
                return;
            }
            ArrayList arrayList = new ArrayList();
            Iterator<KsDrawAd> it = list.iterator();
            while (it.hasNext()) {
                arrayList.add(new KSATDrawAd(this.f7586a, it.next()));
            }
            CustomNativeAd[] customNativeAdArr = (CustomNativeAd[]) arrayList.toArray(new CustomNativeAd[arrayList.size()]);
            if (!KSTYAdapter.this.g) {
                if (KSTYAdapter.this.mLoadListener != null) {
                    KSTYAdapter.this.mLoadListener.onAdCacheLoaded(customNativeAdArr);
                    return;
                }
                return;
            }
            KsDrawAd ksDrawAd = list.get(0);
            if (KSTYAdapter.this.mBiddingListener != null) {
                double ecpm = 0.0d;
                try {
                    ecpm = ksDrawAd.getECPM();
                } catch (Throwable th) {
                    th.printStackTrace();
                }
                KSTYBiddingNotice kSTYBiddingNotice = new KSTYBiddingNotice(ksDrawAd);
                TYBiddingListener tYBiddingListener = KSTYAdapter.this.mBiddingListener;
                StringBuilder sb = new StringBuilder();
                sb.append(System.currentTimeMillis());
                tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(ecpm, sb.toString(), kSTYBiddingNotice, TYAdConst.CURRENCY.RMB_CENT), customNativeAdArr[0]);
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.ks.KSTYAdapter$3, reason: invalid class name */
    final class AnonymousClass3 implements KsLoadManager.FeedAdListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ Context f7587a;

        AnonymousClass3(Context context) {
            this.f7587a = context;
        }

        @Override // com.kwad.sdk.api.KsLoadManager.FeedAdListener
        public final void onError(int i, String str) {
            KSTYAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override // com.kwad.sdk.api.KsLoadManager.FeedAdListener
        public final void onFeedAdLoad(List<KsFeedAd> list) {
            if (list == null || list.size() == 0) {
                KSTYAdapter.this.notifyATLoadFail("", "kuaishou no fill");
                return;
            }
            ArrayList arrayList = new ArrayList();
            Iterator<KsFeedAd> it = list.iterator();
            while (it.hasNext()) {
                arrayList.add(new KSATFeedAd(this.f7587a, it.next(), KSTYAdapter.this.c));
            }
            CustomNativeAd[] customNativeAdArr = (CustomNativeAd[]) arrayList.toArray(new CustomNativeAd[arrayList.size()]);
            if (!KSTYAdapter.this.g) {
                if (KSTYAdapter.this.mLoadListener != null) {
                    KSTYAdapter.this.mLoadListener.onAdCacheLoaded(customNativeAdArr);
                    return;
                }
                return;
            }
            KsFeedAd ksFeedAd = list.get(0);
            if (KSTYAdapter.this.mBiddingListener != null) {
                double ecpm = 0.0d;
                try {
                    ecpm = ksFeedAd.getECPM();
                } catch (Throwable th) {
                    th.printStackTrace();
                }
                KSTYBiddingNotice kSTYBiddingNotice = new KSTYBiddingNotice(ksFeedAd);
                TYBiddingListener tYBiddingListener = KSTYAdapter.this.mBiddingListener;
                StringBuilder sb = new StringBuilder();
                sb.append(System.currentTimeMillis());
                tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(ecpm, sb.toString(), kSTYBiddingNotice, TYAdConst.CURRENCY.RMB_CENT), customNativeAdArr[0]);
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.ks.KSTYAdapter$4, reason: invalid class name */
    final class AnonymousClass4 implements KsLoadManager.NativeAdListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ Context f7588a;

        AnonymousClass4(Context context) {
            this.f7588a = context;
        }

        @Override // com.kwad.sdk.api.KsLoadManager.NativeAdListener
        public final void onError(int i, String str) {
            KSTYAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }

        @Override // com.kwad.sdk.api.KsLoadManager.NativeAdListener
        public final void onNativeAdLoad(List<KsNativeAd> list) {
            if (list == null || list.size() == 0) {
                KSTYAdapter.this.notifyATLoadFail("", "kuaishou no fill");
                return;
            }
            ArrayList arrayList = new ArrayList();
            Iterator<KsNativeAd> it = list.iterator();
            while (it.hasNext()) {
                arrayList.add(new KSTYNativeAd(this.f7588a, it.next(), KSTYAdapter.this.c));
            }
            CustomNativeAd[] customNativeAdArr = (CustomNativeAd[]) arrayList.toArray(new CustomNativeAd[arrayList.size()]);
            if (!KSTYAdapter.this.g) {
                if (KSTYAdapter.this.mLoadListener != null) {
                    KSTYAdapter.this.mLoadListener.onAdCacheLoaded(customNativeAdArr);
                    return;
                }
                return;
            }
            KsNativeAd ksNativeAd = list.get(0);
            if (KSTYAdapter.this.mBiddingListener != null) {
                double ecpm = 0.0d;
                try {
                    ecpm = ksNativeAd.getECPM();
                } catch (Throwable th) {
                    th.printStackTrace();
                }
                KSTYBiddingNotice kSTYBiddingNotice = new KSTYBiddingNotice(ksNativeAd);
                TYBiddingListener tYBiddingListener = KSTYAdapter.this.mBiddingListener;
                StringBuilder sb = new StringBuilder();
                sb.append(System.currentTimeMillis());
                tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(ecpm, sb.toString(), kSTYBiddingNotice, TYAdConst.CURRENCY.RMB_CENT), customNativeAdArr[0]);
            }
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        try {
            return String.valueOf(this.f7584a);
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return KSTYInitManager.getInstance().getNetworkVersion();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.g = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    private boolean a(Map<String, Object> map) {
        String stringFromMap = TYInitMediation.getStringFromMap(map, "app_id");
        String stringFromMap2 = TYInitMediation.getStringFromMap(map, "position_id");
        if (TextUtils.isEmpty(stringFromMap) || TextUtils.isEmpty(stringFromMap2)) {
            return false;
        }
        try {
            this.f7584a = Long.parseLong(stringFromMap2);
        } catch (NumberFormatException unused) {
        }
        this.b = TYInitMediation.getStringFromMap(map, MBridgeConstans.PROPERTIES_LAYOUT_TYPE, "0");
        if (map.containsKey("video_sound")) {
            this.c = TextUtils.equals("1", TYInitMediation.getStringFromMap(map, "video_sound"));
        }
        this.d = TYInitMediation.getStringFromMap(map, "unit_type", "0");
        this.h = TYInitMediation.getDoubleFromMap(map, f.k.o);
        if (!map.containsKey("payload")) {
            return true;
        }
        this.e = KSTYInitManager.getInstance().getPayloadInfo(TYInitMediation.getStringFromMap(map, "payload"), this.h);
        return true;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.f7584a = TYInitMediation.getLongFromMap(map, "position_id");
        KSTYInitManager.getInstance().a(context, map, map2, tYBidRequestInfoListener);
    }

    static /* synthetic */ void a(KSTYAdapter kSTYAdapter, Context context, Map map, int i) {
        Object obj = map.containsKey(TYAdConst.KEY.AD_WIDTH) ? map.get(TYAdConst.KEY.AD_WIDTH) : null;
        Object obj2 = map.containsKey(TYAdConst.KEY.AD_HEIGHT) ? map.get(TYAdConst.KEY.AD_HEIGHT) : null;
        KsScene.Builder builderAdNum = new KsScene.Builder(kSTYAdapter.f7584a).adNum(kSTYAdapter.g ? 1 : Math.min(i, 5));
        if (obj != null) {
            try {
                int i2 = (int) Double.parseDouble(obj.toString());
                if (i2 > 0) {
                    builderAdNum.width(i2);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        if (obj2 != null) {
            try {
                int i3 = (int) Double.parseDouble(obj2.toString());
                if (i3 > 0) {
                    builderAdNum.height(i3);
                }
            } catch (Throwable th2) {
                th2.printStackTrace();
            }
        }
        if (!TextUtils.isEmpty(kSTYAdapter.e)) {
            builderAdNum.setBidResponseV2(kSTYAdapter.e);
            builderAdNum.adNum(1);
        }
        KsScene ksSceneBuild = builderAdNum.build();
        if (TextUtils.equals("1", kSTYAdapter.d)) {
            KsAdSDK.getLoadManager().loadDrawAd(ksSceneBuild, kSTYAdapter.new AnonymousClass2(context));
        } else if (TextUtils.equals("1", kSTYAdapter.b)) {
            KsAdSDK.getLoadManager().loadConfigFeedAd(ksSceneBuild, kSTYAdapter.new AnonymousClass3(context));
        } else {
            KsAdSDK.getLoadManager().loadNativeAd(ksSceneBuild, kSTYAdapter.new AnonymousClass4(context));
        }
    }
}
