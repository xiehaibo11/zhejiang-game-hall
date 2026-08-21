package com.tkay.network.gdt;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.qq.e.ads.interstitial2.UnifiedInterstitialAD;
import com.qq.e.ads.rewardvideo.RewardVideoAD;
import com.qq.e.comm.constants.LoadAdParams;
import com.qq.e.comm.managers.GDTAdSdk;
import com.qq.e.comm.managers.setting.GlobalSetting;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYBidRequestInfo;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.api.TYSDK;
import com.tkay.core.common.b.f;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class GDTTYInitManager extends TYInitMediation {
    public static final String TAG = GDTTYInitManager.class.getSimpleName();
    private static volatile GDTTYInitManager b;
    private boolean f;
    private String g;
    private Map<String, WeakReference> c = new ConcurrentHashMap();
    private Map<String, RewardVideoAD> d = new ConcurrentHashMap();
    private Map<String, UnifiedInterstitialAD> e = new ConcurrentHashMap();
    private final Object h = new Object();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f7551a = 0;

    @Override // com.tkay.core.api.TYInitMediation
    public String getNetworkName() {
        return "Tencent";
    }

    @Override // com.tkay.core.api.TYInitMediation
    public String getNetworkSDKClass() {
        return "com.qq.e.ads.ADActivity";
    }

    private GDTTYInitManager() {
    }

    public static GDTTYInitManager getInstance() {
        if (b == null) {
            synchronized (GDTTYInitManager.class) {
                if (b == null) {
                    b = new GDTTYInitManager();
                }
            }
        }
        return b;
    }

    public void setGDTTYCustomController(GDTTYCustomController gDTTYCustomController) {
        if (gDTTYCustomController != null) {
            GlobalSetting.setAgreePrivacyStrategy(gDTTYCustomController.getAgreePrivacyStrategy());
        }
    }

    protected final void a(String str, WeakReference weakReference) {
        try {
            this.c.put(str, weakReference);
        } catch (Throwable unused) {
        }
    }

    protected final void a(String str, RewardVideoAD rewardVideoAD) {
        this.d.clear();
        this.d.put(str, rewardVideoAD);
    }

    protected final void a() {
        this.d.clear();
    }

    protected final void a(String str, UnifiedInterstitialAD unifiedInterstitialAD) {
        this.e.clear();
        this.e.put(str, unifiedInterstitialAD);
    }

    protected final void b() {
        this.e.clear();
    }

    private void c() {
        try {
            for (Map.Entry<String, WeakReference> entry : this.c.entrySet()) {
                if (entry.getValue().get() == null) {
                    this.c.remove(entry.getKey());
                }
            }
        } catch (Throwable unused) {
        }
    }

    public synchronized void initSDK(Context context, Map<String, Object> map) {
        initSDK(context, map, null);
    }

    @Override // com.tkay.core.api.TYInitMediation
    public synchronized void initSDK(Context context, Map<String, Object> map, MediationInitCallback mediationInitCallback) {
        try {
            this.f7551a = TYSDK.getPersionalizedAdStatus();
        } catch (Throwable unused) {
        }
        if (this.f7551a == 2) {
            GlobalSetting.setPersonalizedState(1);
        } else {
            GlobalSetting.setPersonalizedState(0);
        }
        if (TYSDK.isNetworkLogDebug()) {
            Log.i(TAG, "GlobalSetting.getPersonalizedState():" + GlobalSetting.getPersonalizedState());
        }
        c();
        String stringFromMap = getStringFromMap(map, "app_id");
        if (map.containsKey(TYInitMediation.KEY_LOCAL)) {
            this.g = stringFromMap;
        } else if (this.g != null && !TextUtils.equals(this.g, stringFromMap)) {
            checkToSaveInitData(getNetworkName(), map, this.g);
            this.g = null;
        }
        if (!this.f) {
            GDTAdSdk.init(context.getApplicationContext(), stringFromMap);
            this.f = true;
        }
        if (mediationInitCallback != null) {
            mediationInitCallback.onSuccess();
        }
    }

    @Override // com.tkay.core.api.TYInitMediation
    public String getNetworkVersion() {
        return GDTTYConst.getNetworkVersion();
    }

    @Override // com.tkay.core.api.TYInitMediation
    public List getActivityStatus() {
        ArrayList arrayList = new ArrayList();
        arrayList.add("com.qq.e.ads.ADActivity");
        arrayList.add("com.qq.e.ads.PortraitADActivity");
        arrayList.add("com.qq.e.ads.LandscapeADActivity");
        arrayList.add("com.qq.e.ads.RewardvideoPortraitADActivity");
        arrayList.add("com.qq.e.ads.RewardvideoLandscapeADActivity");
        return arrayList;
    }

    @Override // com.tkay.core.api.TYInitMediation
    public List getServiceStatus() {
        ArrayList arrayList = new ArrayList();
        arrayList.add("com.qq.e.comm.DownloadService");
        return arrayList;
    }

    protected static int a(Context context, float f) {
        float f2 = context.getResources().getDisplayMetrics().density;
        if (f2 <= 0.0f) {
            f2 = 1.0f;
        }
        return (int) ((f / f2) + 0.5f);
    }

    final void a(Context context, final Map<String, Object> map, final Map<String, Object> map2, final TYBidRequestInfoListener tYBidRequestInfoListener) {
        getInstance().initSDK(context, map, new MediationInitCallback() { // from class: com.tkay.network.gdt.GDTTYInitManager.1
            @Override // com.tkay.core.api.MediationInitCallback
            public final void onSuccess() {
                GDTTYInitManager.this.runOnThreadPool(new Runnable() { // from class: com.tkay.network.gdt.GDTTYInitManager.1.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        GDTBidRequestInfo gDTBidRequestInfo;
                        synchronized (GDTTYInitManager.this.h) {
                            gDTBidRequestInfo = new GDTBidRequestInfo(map);
                        }
                        if (!gDTBidRequestInfo.isValid()) {
                            if (tYBidRequestInfoListener != null) {
                                tYBidRequestInfoListener.onFailed(TYBidRequestInfo.BIDTOKEN_EMPTY_ERROR_TYPE);
                            }
                        } else if (tYBidRequestInfoListener != null) {
                            tYBidRequestInfoListener.onSuccess(gDTBidRequestInfo);
                        }
                    }
                });
            }

            @Override // com.tkay.core.api.MediationInitCallback
            public final void onFail(String str) {
                TYBidRequestInfoListener tYBidRequestInfoListener2 = tYBidRequestInfoListener;
                if (tYBidRequestInfoListener2 != null) {
                    tYBidRequestInfoListener2.onFailed(TYBidRequestInfo.INIT_ERROR_TYPE);
                }
            }
        });
    }

    protected static LoadAdParams a(Map<String, Object> map) {
        LoadAdParams loadAdParams = new LoadAdParams();
        HashMap map2 = new HashMap();
        a(map2, map);
        loadAdParams.setDevExtra(map2);
        return loadAdParams;
    }

    protected static void a(Map map, Map<String, Object> map2) {
        try {
            Object obj = map2.get(f.k.n);
            map.put("staIn", obj != null ? obj.toString() : "");
            map.put("meSrc", "299");
            Object obj2 = map2.get(f.k.m);
            map.put("thrmei", obj2 != null ? obj2.toString() : "");
        } catch (Exception unused) {
        }
    }
}
