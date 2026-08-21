package com.tkay.network.ks;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.util.Log;
import com.kwad.sdk.api.KsAdSDK;
import com.kwad.sdk.api.SdkConfig;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYBidRequestInfo;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.api.TYSDK;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class KSTYInitManager extends TYInitMediation {
    private static final String d = KSTYInitManager.class.getSimpleName();
    private static volatile KSTYInitManager e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Boolean f7591a;
    Boolean b;
    private boolean h;
    private KSTYCustomController i;
    private final Object g = new Object();
    private Map<String, WeakReference> j = new ConcurrentHashMap();
    int c = 0;
    private Handler f = new Handler(Looper.getMainLooper());

    @Override // com.tkay.core.api.TYInitMediation
    public String getNetworkName() {
        return "Kuaishou";
    }

    @Override // com.tkay.core.api.TYInitMediation
    public String getNetworkSDKClass() {
        return "com.kwad.sdk.api.KsAdSDK";
    }

    static /* synthetic */ boolean e(KSTYInitManager kSTYInitManager) {
        kSTYInitManager.h = true;
        return true;
    }

    private KSTYInitManager() {
    }

    protected final void a(String str, WeakReference weakReference) {
        try {
            this.j.put(str, weakReference);
        } catch (Throwable unused) {
        }
    }

    private void a() {
        try {
            for (Map.Entry<String, WeakReference> entry : this.j.entrySet()) {
                if (entry.getValue().get() == null) {
                    this.j.remove(entry.getKey());
                }
            }
        } catch (Throwable unused) {
        }
    }

    public static KSTYInitManager getInstance() {
        if (e == null) {
            synchronized (KSTYInitManager.class) {
                if (e == null) {
                    e = new KSTYInitManager();
                }
            }
        }
        return e;
    }

    public void setKSTYCustomController(KSTYCustomController kSTYCustomController) {
        if (kSTYCustomController != null) {
            this.i = kSTYCustomController;
        }
    }

    public void initSDK(Context context, Map<String, Object> map) {
        initSDK(context, map, null);
    }

    public void setPersonalRecommend(boolean z) {
        this.f7591a = Boolean.valueOf(z);
    }

    public void setProgrammaticRecommend(boolean z) {
        this.b = Boolean.valueOf(z);
    }

    final void a(Context context, final Map<String, Object> map, final Map<String, Object> map2, final TYBidRequestInfoListener tYBidRequestInfoListener) {
        initSDK(context, map, new MediationInitCallback() { // from class: com.tkay.network.ks.KSTYInitManager.2
            @Override // com.tkay.core.api.MediationInitCallback
            public final void onSuccess() {
                KSTYInitManager.this.runOnThreadPool(new Runnable() { // from class: com.tkay.network.ks.KSTYInitManager.2.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        KSBidRequestInfo kSBidRequestInfo = new KSBidRequestInfo(map, map2);
                        if (!kSBidRequestInfo.isValid()) {
                            if (tYBidRequestInfoListener != null) {
                                tYBidRequestInfoListener.onFailed(TYBidRequestInfo.BIDTOKEN_EMPTY_ERROR_TYPE);
                            }
                        } else if (tYBidRequestInfoListener != null) {
                            tYBidRequestInfoListener.onSuccess(kSBidRequestInfo);
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

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        boolean zBooleanValue = this.c != 2;
        boolean zBooleanValue2 = this.c != 2;
        Boolean bool = this.f7591a;
        if (bool != null) {
            zBooleanValue = bool.booleanValue();
        }
        Boolean bool2 = this.b;
        if (bool2 != null) {
            zBooleanValue2 = bool2.booleanValue();
        }
        KsAdSDK.setPersonalRecommend(zBooleanValue);
        KsAdSDK.setProgrammaticRecommend(zBooleanValue2);
        if (TYSDK.isNetworkLogDebug()) {
            Log.i(d, "PersonalRecommend: ".concat(String.valueOf(zBooleanValue)));
            Log.i(d, "ProgrammaticRecommend: ".concat(String.valueOf(zBooleanValue2)));
        }
    }

    public String getPayloadInfo(String str, double d2) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            jSONObject.getJSONArray("adBids").getJSONObject(0).put("bidEcpm", d2);
            str = jSONObject.toString();
            Log.i(d, jSONObject.toString());
            return str;
        } catch (Throwable unused) {
            return str;
        }
    }

    @Override // com.tkay.core.api.TYInitMediation
    public String getNetworkVersion() {
        return KSTYConst.getNetworkVersion();
    }

    @Override // com.tkay.core.api.TYInitMediation
    public Map<String, Boolean> getPluginClassStatus() {
        HashMap map = new HashMap();
        map.put("recyclerview-*.aar", Boolean.FALSE);
        try {
            map.put("recyclerview-*.aar", Boolean.TRUE);
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return map;
    }

    @Override // com.tkay.core.api.TYInitMediation
    public List getResourceStatus() {
        ArrayList arrayList = new ArrayList();
        arrayList.add("ksad_reward_order_end_dialog");
        return arrayList;
    }

    @Override // com.tkay.core.api.TYInitMediation
    public void initSDK(Context context, Map<String, Object> map, final MediationInitCallback mediationInitCallback) {
        try {
            for (Map.Entry<String, WeakReference> entry : this.j.entrySet()) {
                if (entry.getValue().get() == null) {
                    this.j.remove(entry.getKey());
                }
            }
        } catch (Throwable unused) {
        }
        final Context applicationContext = context.getApplicationContext();
        try {
            this.c = TYSDK.getPersionalizedAdStatus();
        } catch (Throwable unused2) {
        }
        if (this.h) {
            b();
            if (mediationInitCallback != null) {
                mediationInitCallback.onSuccess();
                return;
            }
            return;
        }
        final String stringFromMap = getStringFromMap(map, "app_id");
        if (TextUtils.isEmpty(stringFromMap)) {
            return;
        }
        this.f.post(new Runnable() { // from class: com.tkay.network.ks.KSTYInitManager.1
            @Override // java.lang.Runnable
            public final void run() {
                synchronized (KSTYInitManager.this.g) {
                    if (KSTYInitManager.this.h) {
                        if (mediationInitCallback != null) {
                            mediationInitCallback.onSuccess();
                        }
                        return;
                    }
                    SdkConfig.Builder builder = new SdkConfig.Builder();
                    builder.appId(stringFromMap);
                    if (KSTYInitManager.this.i != null) {
                        builder.canReadICCID(KSTYInitManager.this.i.getCanReadICCID());
                        builder.canReadMacAddress(KSTYInitManager.this.i.getCanReadMacAddress());
                        builder.canReadNearbyWifiList(KSTYInitManager.this.i.getCanReadNearbyWifiList());
                        if (KSTYInitManager.this.i.getKsCustomeController() != null) {
                            builder.customController(KSTYInitManager.this.i.getKsCustomeController());
                        }
                    }
                    boolean zInit = KsAdSDK.init(applicationContext, builder.build());
                    KSTYInitManager.this.b();
                    if (zInit) {
                        KSTYInitManager.e(KSTYInitManager.this);
                        if (mediationInitCallback != null) {
                            mediationInitCallback.onSuccess();
                        }
                    } else if (mediationInitCallback != null) {
                        mediationInitCallback.onFail("Kuaishou init failed");
                    }
                }
            }
        });
    }
}
