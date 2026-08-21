package com.tkay.network.sigmob;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.sigmob.windad.WindAdOptions;
import com.sigmob.windad.WindAds;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfo;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.core.api.TYBiddingResult;
import com.tkay.core.api.TYCustomLoadListener;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.api.TYSDK;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public class SigmobTYInitManager extends TYInitMediation {
    public static final String SIGMOB_CURRENCY = "USD";
    private static volatile SigmobTYInitManager j;
    int d;
    private boolean f;
    private List<MediationInitCallback> h;
    public static final String TAG = SigmobTYInitManager.class.getSimpleName();
    private static final Map<Object, String> k = new ConcurrentHashMap(2);
    final int a = 0;
    final int b = 1;
    final int c = 2;
    private ConcurrentHashMap<String, WeakReference> e = new ConcurrentHashMap<>();
    private final Object g = new Object();
    private int i = 0;

    interface a {
        void onError(String str);

        void onSuccess();
    }

    @Override
    public String getNetworkName() {
        return "Sigmob";
    }

    @Override
    public String getNetworkSDKClass() {
        return "com.sigmob.windad.WindAds";
    }

    private SigmobTYInitManager() {
    }

    public static SigmobTYInitManager getInstance() {
        if (j == null) {
            synchronized (SigmobTYInitManager.class) {
                if (j == null) {
                    j = new SigmobTYInitManager();
                }
            }
        }
        return j;
    }

    public void initSDK(Context context, Map<String, Object> map) {
        initSDK(context, map, null);
    }

    public void setIsAdult(boolean z) {
        this.i = z ? 1 : 2;
    }

    private void a(WindAds windAds) {
        boolean z = this.d != 2;
        windAds.setPersonalizedAdvertisingOn(z);
        if (TYSDK.isNetworkLogDebug()) {
            Log.i(TAG, "setPersonalizedAdvertisingOn:".concat(String.valueOf(z)));
        }
    }

    private void b(WindAds windAds) {
        int i = this.i;
        if (i != 0) {
            windAds.setAdult(i == 1);
            if (TYSDK.isNetworkLogDebug()) {
                String str = TAG;
                StringBuilder sb = new StringBuilder("setIsAdult:");
                sb.append(this.i == 1);
                Log.i(str, sb.toString());
            }
        }
    }

    private void a(boolean z, String str) {
        synchronized (this.g) {
            int size = this.h.size();
            for (int i = 0; i < size; i++) {
                MediationInitCallback mediationInitCallback = this.h.get(i);
                if (mediationInitCallback != null) {
                    if (z) {
                        mediationInitCallback.onSuccess();
                    } else {
                        mediationInitCallback.onFail(str);
                    }
                }
            }
            this.h.clear();
            this.f = false;
        }
    }

    private void a(String str, WeakReference weakReference) {
        try {
            this.e.put(str, weakReference);
        } catch (Throwable unused) {
        }
    }

    private void a() {
        try {
            for (Map.Entry<String, WeakReference> entry : this.e.entrySet()) {
                if (entry.getValue().get() == null) {
                    this.e.remove(entry.getKey());
                }
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public String getNetworkVersion() {
        return SigmobTYConst.getNetworkVersion();
    }

    @Override
    public Map<String, Boolean> getPluginClassStatus() {
        HashMap map = new HashMap();
        map.put("implementation 'com.android.support:localbroadcastmanager:+'", Boolean.FALSE);
        try {
            map.put("implementation 'com.android.support:localbroadcastmanager:+'", Boolean.TRUE);
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return map;
    }

    @Override
    public List getActivityStatus() {
        ArrayList arrayList = new ArrayList();
        arrayList.add("com.sigmob.sdk.base.common.AdActivity");
        return arrayList;
    }

    @Override
    public List getProviderStatus() {
        ArrayList arrayList = new ArrayList();
        arrayList.add("com.sigmob.sdk.SigmobFileProvider");
        return arrayList;
    }

    final void a(Context context, final Map<String, Object> map, final Map<String, Object> map2, final TYBidRequestInfoListener tYBidRequestInfoListener) {
        getInstance().initSDK(context, map, new MediationInitCallback() {
            @Override
            public final void onSuccess() {
                SigmobTYInitManager.this.runOnThreadPool(new Runnable() {
                    @Override
                    public final void run() {
                        SigmobBidRequestInfo sigmobBidRequestInfo = new SigmobBidRequestInfo(map);
                        if (!sigmobBidRequestInfo.isValid()) {
                            if (tYBidRequestInfoListener != null) {
                                tYBidRequestInfoListener.onFailed(TYBidRequestInfo.BIDTOKEN_EMPTY_ERROR_TYPE);
                            }
                        } else if (tYBidRequestInfoListener != null) {
                            tYBidRequestInfoListener.onSuccess(sigmobBidRequestInfo);
                        }
                    }
                });
            }

            @Override
            public final void onFail(String str) {
                TYBidRequestInfoListener tYBidRequestInfoListener2 = tYBidRequestInfoListener;
                if (tYBidRequestInfoListener2 != null) {
                    tYBidRequestInfoListener2.onFailed(TYBidRequestInfo.INIT_ERROR_TYPE);
                }
            }
        });
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v3 */
    /* JADX WARN: Type inference failed for: r0v4 */
    public static void onC2SBiddingResultWithCache(String str, String str2, TYBiddingListener tYBiddingListener, Object obj, BaseAd baseAd) {
        String str3 = "";
        if (obj != null && !TextUtils.isEmpty(str)) {
            k.put(obj, str);
        }
        double d = 0.0d;
        try {
            if (!TextUtils.isEmpty(str)) {
                str3 = 4636737291354636288;
                d = Double.parseDouble(str) / 100.0d;
            } else {
                onAdLoadError("", "ecpm is null", true, tYBiddingListener, null);
                str3 = str3;
            }
        } catch (Exception unused) {
            onAdLoadError(str3, "ecpm is null", true, tYBiddingListener, null);
        }
        StringBuilder sb = new StringBuilder();
        sb.append(System.currentTimeMillis());
        tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(d, sb.toString(), new SigmobTYBiddingNotice(obj), TYAdConst.CURRENCY.USD), baseAd);
    }

    public static void onAdLoadError(String str, String str2, boolean z, TYBiddingListener tYBiddingListener, TYCustomLoadListener tYCustomLoadListener) {
        if (z) {
            if (tYBiddingListener != null) {
                tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.fail(str2), null);
            }
        } else if (tYCustomLoadListener != null) {
            tYCustomLoadListener.onAdLoadError(str, str2);
        }
    }

    public static int getEcpmInt(Object obj) {
        if (obj == null) {
            return 0;
        }
        String str = k.get(obj);
        if (TextUtils.isEmpty(str)) {
            return 0;
        }
        try {
            return Integer.parseInt(str);
        } catch (NumberFormatException unused) {
            return 0;
        }
    }

    @Override
    public void initSDK(Context context, Map<String, Object> map, MediationInitCallback mediationInitCallback) {
        try {
            for (Map.Entry<String, WeakReference> entry : this.e.entrySet()) {
                if (entry.getValue().get() == null) {
                    this.e.remove(entry.getKey());
                }
            }
        } catch (Throwable unused) {
        }
        try {
            this.d = TYSDK.getPersionalizedAdStatus();
        } catch (Throwable unused2) {
        }
        WindAds windAdsSharedAds = WindAds.sharedAds();
        if (windAdsSharedAds != null && windAdsSharedAds.isInit()) {
            a(windAdsSharedAds);
            b(windAdsSharedAds);
            if (mediationInitCallback != null) {
                mediationInitCallback.onSuccess();
                return;
            }
            return;
        }
        synchronized (this.g) {
            if (this.f) {
                if (mediationInitCallback != null) {
                    this.h.add(mediationInitCallback);
                }
                return;
            }
            if (this.h == null) {
                this.h = new ArrayList();
            }
            this.f = true;
            List<MediationInitCallback> list = this.h;
            if (list != null) {
                list.add(mediationInitCallback);
            }
            String stringFromMap = getStringFromMap(map, "app_id");
            String stringFromMap2 = getStringFromMap(map, "app_key");
            windAdsSharedAds.setDebugEnable(TYSDK.isNetworkLogDebug());
            if (windAdsSharedAds.startWithOptions(context, new WindAdOptions(stringFromMap, stringFromMap2))) {
                a(windAdsSharedAds);
                b(windAdsSharedAds);
                a(true, (String) null);
                return;
            }
            a(false, "Sigmob init failed");
        }
    }
}
