package com.tkay.network.toutiao;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import com.bykv.vk.openvk.TTClientBidding;
import com.bykv.vk.openvk.TTCustomController;
import com.bykv.vk.openvk.TTVfConfig;
import com.bykv.vk.openvk.TTVfSdk;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.core.api.TYBiddingResult;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.api.TYSDK;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicBoolean;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class TTTYInitManager extends TYInitMediation {
    public static final String TAG = TTTYInitManager.class.getSimpleName();
    private static volatile TTTYInitManager d;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    TTCustomController f7732a;
    private boolean h;
    private List<MediationInitCallback> j;
    private Map<String, WeakReference> g = new ConcurrentHashMap();
    private final Object k = new Object();
    private final long l = 100;
    int b = 0;
    String c = "price";
    private Handler e = new Handler(Looper.getMainLooper());
    private boolean f = true;
    private AtomicBoolean i = new AtomicBoolean(false);

    @Override // com.tkay.core.api.TYInitMediation
    public String getNetworkName() {
        return "CSJ";
    }

    @Override // com.tkay.core.api.TYInitMediation
    public String getNetworkSDKClass() {
        return "com.bykv.vk.openvk.TTVfSdk";
    }

    static /* synthetic */ boolean b(TTTYInitManager tTTYInitManager) {
        tTTYInitManager.h = true;
        return true;
    }

    private TTTYInitManager() {
    }

    public static TTTYInitManager getInstance() {
        if (d == null) {
            synchronized (TTTYInitManager.class) {
                if (d == null) {
                    d = new TTTYInitManager();
                }
            }
        }
        return d;
    }

    public void setTtCustomController(TTCustomController tTCustomController) {
        this.f7732a = tTCustomController;
    }

    protected final void a(String str, WeakReference weakReference) {
        try {
            this.g.put(str, weakReference);
        } catch (Throwable unused) {
        }
    }

    private void a() {
        try {
            for (Map.Entry<String, WeakReference> entry : this.g.entrySet()) {
                if (entry.getValue().get() == null) {
                    this.g.remove(entry.getKey());
                }
            }
        } catch (Throwable unused) {
        }
    }

    public void initSDK(Context context, Map<String, Object> map) {
        initSDK(context, map, null);
    }

    /* JADX INFO: renamed from: com.tkay.network.toutiao.TTTYInitManager$1, reason: invalid class name */
    final class AnonymousClass1 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ String f7733a;
        final /* synthetic */ String b;
        final /* synthetic */ int[] c;
        final /* synthetic */ Context d;

        AnonymousClass1(String str, String str2, int[] iArr, Context context) {
            this.f7733a = str;
            this.b = str2;
            this.c = iArr;
            this.d = context;
        }

        @Override // java.lang.Runnable
        public final void run() {
            try {
                TTVfConfig.Builder builderSupportMultiProcess = new TTVfConfig.Builder().appId(this.f7733a).useTextureView(true).appName(this.b).titleBarTheme(1).directDownloadNetworkType(this.c).data(TTTYInitManager.this.b()).supportMultiProcess(false);
                if (TTTYInitManager.this.f7732a != null) {
                    builderSupportMultiProcess.customController(TTTYInitManager.this.f7732a);
                }
                TTVfSdk.init(this.d, builderSupportMultiProcess.build(), new TTVfSdk.InitCallback() { // from class: com.tkay.network.toutiao.TTTYInitManager.1.1
                    @Override // com.bykv.vk.openvk.TTVfSdk.InitCallback
                    public final void success() {
                        TTTYInitManager.this.e.postDelayed(new Runnable() { // from class: com.tkay.network.toutiao.TTTYInitManager.1.1.1
                            @Override // java.lang.Runnable
                            public final void run() {
                                TTTYInitManager.b(TTTYInitManager.this);
                                TTTYInitManager.a(TTTYInitManager.this, true, (String) null, (String) null);
                            }
                        }, 100L);
                    }

                    @Override // com.bykv.vk.openvk.TTVfSdk.InitCallback
                    public final void fail(int i, String str) {
                        TTTYInitManager.a(TTTYInitManager.this, false, String.valueOf(i), str);
                    }
                });
            } catch (Throwable th) {
                TTTYInitManager.a(TTTYInitManager.this, false, "", th.getMessage());
            }
        }
    }

    private void a(boolean z, String str, String str2) {
        synchronized (this.k) {
            int size = this.j.size();
            for (int i = 0; i < size; i++) {
                MediationInitCallback mediationInitCallback = this.j.get(i);
                if (mediationInitCallback != null) {
                    if (z) {
                        mediationInitCallback.onSuccess();
                    } else {
                        mediationInitCallback.onFail(str + " | " + str2);
                    }
                }
            }
            this.j.clear();
            this.i.set(false);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String b() {
        try {
            this.b = TYSDK.getPersionalizedAdStatus();
        } catch (Throwable unused) {
        }
        try {
            String str = this.b == 2 ? "0" : "";
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("name", "personal_ads_type");
            jSONObject.put("value", str);
            JSONArray jSONArray = new JSONArray();
            jSONArray.put(jSONObject);
            String string = jSONArray.toString();
            if (TYSDK.isNetworkLogDebug()) {
                Log.i(TAG, "TTPrivateData:".concat(String.valueOf(string)));
            }
            return string;
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public void setIsOpenDirectDownload(boolean z) {
        this.f = z;
    }

    @Override // com.tkay.core.api.TYInitMediation
    public String getNetworkVersion() {
        return TTTYConst.getNetworkVersion();
    }

    @Override // com.tkay.core.api.TYInitMediation
    public List getProviderStatus() {
        ArrayList arrayList = new ArrayList();
        arrayList.add("com.bykv.vk.openvk.TTFileProvider");
        arrayList.add("com.bykv.vk.openvk.multipro.TTMultiProvider");
        return arrayList;
    }

    @Override // com.tkay.core.api.TYInitMediation
    public List getPermissionStatus() {
        ArrayList arrayList = new ArrayList();
        arrayList.add("android.permission.WAKE_LOCK");
        return arrayList;
    }

    protected final synchronized void a(Map<String, Object> map, TTClientBidding tTClientBidding, TYBiddingListener tYBiddingListener) {
        a(map, (BaseAd) null, tTClientBidding, tYBiddingListener);
    }

    protected final synchronized void a(Map<String, Object> map, BaseAd baseAd, TTClientBidding tTClientBidding, TYBiddingListener tYBiddingListener) {
        if (tYBiddingListener != null) {
            double d2 = 0.0d;
            if (map.containsKey(this.c)) {
                try {
                    d2 = Double.parseDouble(String.valueOf(map.get(this.c)));
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
            TTTYBiddingNotify tTTYBiddingNotify = new TTTYBiddingNotify(tTClientBidding);
            StringBuilder sb = new StringBuilder();
            sb.append(System.currentTimeMillis());
            tYBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.success(d2, sb.toString(), tTTYBiddingNotify, TYAdConst.CURRENCY.RMB_CENT), baseAd);
        }
    }

    @Override // com.tkay.core.api.TYInitMediation
    public void initSDK(Context context, Map<String, Object> map, MediationInitCallback mediationInitCallback) {
        try {
            for (Map.Entry<String, WeakReference> entry : this.g.entrySet()) {
                if (entry.getValue().get() == null) {
                    this.g.remove(entry.getKey());
                }
            }
        } catch (Throwable unused) {
        }
        if (TTVfSdk.isInitSuccess() || this.h) {
            TTVfSdk.updateAdConfig(new TTVfConfig.Builder().data(b()).build());
            if (mediationInitCallback != null) {
                mediationInitCallback.onSuccess();
                return;
            }
            return;
        }
        synchronized (this.k) {
            if (this.i.get()) {
                if (mediationInitCallback != null) {
                    this.j.add(mediationInitCallback);
                }
                return;
            }
            if (this.j == null) {
                this.j = new ArrayList();
            }
            this.i.set(true);
            String str = (String) map.get("app_id");
            if (mediationInitCallback != null) {
                this.j.add(mediationInitCallback);
            }
            int[] iArr = this.f ? new int[]{1, 2, 3, 4, 5} : new int[]{2};
            this.e.post(new AnonymousClass1(str, context.getPackageManager().getApplicationLabel(context.getApplicationInfo()).toString(), iArr, context.getApplicationContext()));
        }
    }

    static /* synthetic */ void a(TTTYInitManager tTTYInitManager, boolean z, String str, String str2) {
        synchronized (tTTYInitManager.k) {
            int size = tTTYInitManager.j.size();
            for (int i = 0; i < size; i++) {
                MediationInitCallback mediationInitCallback = tTTYInitManager.j.get(i);
                if (mediationInitCallback != null) {
                    if (z) {
                        mediationInitCallback.onSuccess();
                    } else {
                        mediationInitCallback.onFail(str + " | " + str2);
                    }
                }
            }
            tTTYInitManager.j.clear();
            tTTYInitManager.i.set(false);
        }
    }
}
