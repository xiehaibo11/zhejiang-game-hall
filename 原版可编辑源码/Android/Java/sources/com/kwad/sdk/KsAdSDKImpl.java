package com.kwad.sdk;

import android.content.Context;
import android.os.SystemClock;
import android.text.TextUtils;
import android.util.Log;
import com.kwad.components.core.p.f;
import com.kwad.components.offline.api.BuildConfig;
import com.kwad.library.solder.a.a;
import com.kwad.library.solder.lib.ext.PluginError;
import com.kwad.sdk.api.KsInitCallback;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.SdkConfig;
import com.kwad.sdk.api.core.IKsAdSDK;
import com.kwad.sdk.api.core.KsAdSdkDynamicImpl;
import com.kwad.sdk.api.loader.DynamicInstallReceiver;
import com.kwad.sdk.api.proxy.BaseProxyActivity;
import com.kwad.sdk.api.proxy.BaseProxyFragmentActivity;
import com.kwad.sdk.api.proxy.IComponentProxy;
import com.kwad.sdk.core.download.a;
import com.kwad.sdk.core.imageloader.ImageLoaderPerfUtil;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.SdkConfigData;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ap;
import com.kwad.sdk.utils.au;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.ax;
import com.kwad.sdk.utils.bg;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.utils.y;
import java.io.File;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

@KsAdSdkDynamicImpl(IKsAdSDK.class)
public class KsAdSDKImpl implements IKsAdSDK {
    private static final String TAG = "KSAdSDK";
    private boolean adxEnable;
    private boolean isExternal;
    private KsLoadManager mAdRequestManager;
    private int mApiVersionCode;
    private String mApiVersionName;
    private String mAppTag;
    private long mInitTime;
    private volatile boolean mIsSdkInit;
    private long mLaunchTime;
    private volatile boolean personalRecommend;
    private boolean programmaticRecommend;

    static class a {
        private static final KsAdSDKImpl ahf = new KsAdSDKImpl();
    }

    private KsAdSDKImpl() {
        this.mIsSdkInit = false;
        this.mApiVersionName = "";
        this.personalRecommend = true;
        this.programmaticRecommend = true;
        this.adxEnable = false;
    }

    @KsAdSdkDynamicImpl(IKsAdSDK.class)
    public static KsAdSDKImpl get() {
        return a.ahf;
    }

    private void initApkClean() {
        try {
            com.kwad.sdk.core.diskcache.a.aS(getContext());
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initAppTag() {
        y.ad(ServiceProvider.getContext(), this.mAppTag);
        this.mAppTag = null;
    }

    private void initCommercialLogger() {
        try {
            KSLoggerReporter.a(new KSLoggerReporter.a() {
                @Override
                public final void j(String str, String str2, boolean z) {
                    com.kwad.components.core.o.a.pA().e(str, str2, false);
                }

                @Override
                public final boolean xl() {
                    return com.kwad.sdk.core.config.d.b(com.kwad.sdk.core.config.c.akF);
                }

                @Override
                public final JSONObject xm() {
                    return com.kwad.sdk.core.config.d.a(com.kwad.sdk.core.config.c.akQ);
                }
            });
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initComponents() {
        try {
            com.kwad.sdk.components.b.init(ServiceProvider.getContext());
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initComponentsManager() {
        try {
            com.kwad.sdk.components.c.init(getContext());
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initConfigRequestManager() {
        try {
            com.kwad.components.core.p.f.a(ServiceProvider.getContext(), new f.a() {
                @Override
                public final void a(SdkConfigData sdkConfigData) {
                    com.kwad.sdk.core.e.c.i(KsAdSDKImpl.TAG, "onConfigRefresh()");
                    try {
                        KsAdSDKImpl.this.initOnConfigRefresh(sdkConfigData);
                    } catch (Throwable th) {
                        com.kwad.components.core.d.a.b(th);
                    }
                }

                @Override
                public final void on() {
                    com.kwad.sdk.core.e.c.M(KsAdSDKImpl.TAG, "onCacheLoaded()");
                    if (((com.kwad.components.a.a.a) com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class)) != null) {
                        ServiceProvider.getContext();
                    }
                }
            });
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initDownload() {
        try {
            com.kwad.sdk.core.download.a.aT(ServiceProvider.getContext());
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initExceptionModule() {
        try {
            com.kwad.components.core.d.a.initAsync(ServiceProvider.getContext());
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initHybrid() {
        try {
            com.kwad.sdk.core.webview.b.a.Ee().init(getContext());
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initIDC() {
        try {
            com.kwad.sdk.core.network.idc.a.Bo().init(getContext());
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initInstalledReceiver() {
        try {
            com.kwad.sdk.b.b.yB().checkInit();
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initKSPlugin() {
        try {
            com.kwad.sdk.m.e.KO().init();
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initLifecycleHolder() {
        try {
            com.kwad.sdk.core.c.b.AU().init(ServiceProvider.getContext());
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initLottie() {
    }

    private void initOAID() {
        try {
            com.kwad.sdk.core.f.a.initAsync(getContext());
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initOfflineComponents() {
        try {
            com.kwad.components.core.offline.init.b.init(getContext());
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initOnConfigRefresh(SdkConfigData sdkConfigData) {
        com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class);
        initHybrid();
        com.kwad.sdk.core.config.d.xs();
        if (com.kwad.sdk.core.config.d.ze() || com.kwad.framework.a.a.ml.booleanValue()) {
            DynamicInstallReceiver.registerToApp(ServiceProvider.getContext());
        }
        if (com.kwad.sdk.core.config.d.zN()) {
            com.kwad.sdk.c.a.init(com.kwad.sdk.m.l.KT());
        }
        initSpeedLimitConfig();
        ax.init(getContext());
        com.kwad.components.core.a.a.md().eX();
        com.kwad.sdk.utils.f.a(getContext(), 30000L, new com.kwad.sdk.collector.h() {
            @Override
            public final void c(JSONArray jSONArray) {
                com.kwad.components.core.o.a.pA().c(jSONArray);
            }
        });
        com.kwad.sdk.core.network.idc.a.Bo().a(com.kwad.sdk.core.config.d.zO());
        bg.a(com.kwad.sdk.core.config.d.zP(), com.kwad.sdk.core.config.d.zQ(), ServiceProvider.getContext());
        initInstalledReceiver();
        initApkClean();
        com.kwad.components.core.h.a.nY().ac(getContext());
        com.kwad.sdk.crash.online.monitor.a.dG(com.kwad.sdk.core.config.d.a(com.kwad.sdk.core.config.c.amn));
        ImageLoaderPerfUtil.report();
        com.kwad.sdk.ranger.e.dG(com.kwad.sdk.core.config.d.a(com.kwad.sdk.core.config.c.amr));
        com.kwad.sdk.core.threads.c.dG(com.kwad.sdk.core.config.d.a(com.kwad.sdk.core.config.c.ams));
        com.kwad.sdk.i.b.Gg();
        com.kwad.sdk.m.l.x(getContext(), ((Boolean) com.kwad.sdk.core.config.d.zw().getAppConfigData(Boolean.FALSE, new com.kwad.sdk.g.b<JSONObject, Boolean>() {
            private static Boolean e(JSONObject jSONObject) {
                return Boolean.valueOf(jSONObject.optBoolean("useContextClassLoader"));
            }

            @Override
            public final Boolean apply(JSONObject jSONObject) {
                return e(jSONObject);
            }
        })).booleanValue());
    }

    private void initPackCheck() {
        try {
            com.kwad.components.core.t.k.qo().init();
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initPrivateData() {
        try {
            au.init(getContext());
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initSDKModule() {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        this.mInitTime = jElapsedRealtime;
        com.kwad.sdk.service.b.init();
        j.xo();
        initSdkLog();
        initKSPlugin();
        initCommercialLogger();
        l.S(this.mLaunchTime);
        initComponents();
        initOAID();
        initIDC();
        initDownload();
        initSOLoader();
        initAppTag();
        initConfigRequestManager();
        initExceptionModule();
        initComponentsManager();
        initOfflineComponents();
        initLifecycleHolder();
        initLottie();
        initPrivateData();
        initPackCheck();
        com.kwad.sdk.a.a.c.yb().yd();
        com.kwad.components.core.o.a.pA().pB();
        long jElapsedRealtime2 = SystemClock.elapsedRealtime() - jElapsedRealtime;
        com.kwad.sdk.core.e.c.d(TAG, "KSAdSDK init time:" + jElapsedRealtime2);
        l.T(jElapsedRealtime2);
        notifyInitSuccess(ServiceProvider.HE());
        com.kwad.sdk.i.a.report();
        this.mIsSdkInit = true;
    }

    private void initSOLoader() {
        try {
            com.kwad.library.solder.a.a.a(new a.a() {
                @Override
                public final void a(com.kwad.library.solder.lib.a.f fVar, File file) throws PluginError.UpdateError {
                    try {
                        com.kwad.sdk.core.download.a.a(fVar.getDownloadUrl(), file, (a.b) null, -1, true);
                    } catch (Throwable th) {
                        if (th instanceof Exception) {
                            com.kwad.sdk.core.network.idc.a.Bo().d(fVar.getDownloadUrl(), th);
                        }
                        throw new PluginError.UpdateError(th.getMessage(), -4);
                    }
                }

                @Override
                public final int getMaxRetryCount() {
                    return com.kwad.sdk.core.config.d.a(com.kwad.sdk.core.config.c.alO);
                }

                @Override
                public final boolean vY() {
                    return com.kwad.sdk.core.config.d.a(com.kwad.sdk.core.config.c.alN);
                }
            });
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initSdkLog() {
        try {
            com.kwad.sdk.core.e.c.a(ServiceProvider.HE().enableDebug, new com.kwad.sdk.core.e.a.a() {
                @Override
                public final void B(String str, String str2) {
                    com.kwad.sdk.core.report.m mVar = new com.kwad.sdk.core.report.m();
                    mVar.ara = str;
                    KSLoggerReporter.a(mVar, str2);
                }
            });
        } catch (Throwable th) {
            m.k(th);
        }
    }

    private void initSpeedLimitConfig() {
        com.kwad.components.core.q.b.pL();
        com.kwad.components.core.q.b.e(com.kwad.sdk.core.config.d.zh(), com.kwad.sdk.core.config.d.zi());
    }

    private boolean isRemoteService(Context context) {
        String processName = ap.getProcessName(context);
        return !TextUtils.isEmpty(processName) && processName.endsWith("kssdk_remote");
    }

    public static void notifyInitFail(SdkConfig sdkConfig, final f fVar) {
        if (sdkConfig != null) {
            try {
                final KsInitCallback ksInitCallback = sdkConfig.ksInitCallback;
                if (ksInitCallback != null) {
                    bj.postOnUiThread(new aw() {
                        @Override
                        public final void doTask() {
                            ksInitCallback.onFail(fVar.code, fVar.msg);
                        }
                    });
                }
            } catch (Throwable unused) {
            }
        }
    }

    public static void notifyInitSuccess(SdkConfig sdkConfig) {
        if (sdkConfig != null) {
            try {
                final KsInitCallback ksInitCallback = sdkConfig.ksInitCallback;
                if (ksInitCallback != null) {
                    bj.postOnUiThread(new aw() {
                        @Override
                        public final void doTask() {
                            ksInitCallback.onSuccess();
                        }
                    });
                }
            } catch (Throwable unused) {
            }
        }
    }

    @Override
    public void addHp(Map<String, String> map) {
        com.kwad.sdk.core.a.d.e(map);
    }

    @Override
    public Object dM(String str, Object... objArr) {
        if ("autoRT".equals(str)) {
            return -1;
        }
        if ("getAutoRevertTime".equals(str)) {
            return 10000;
        }
        boolean z = false;
        if ("TRANSFORM_API_HOST".equals(str)) {
            return com.kwad.sdk.core.network.idc.a.Bo().R(objArr[0].toString(), "api");
        }
        if ("reportDynamicUpdate".equals(str)) {
            KSLoggerReporter.q((JSONObject) objArr[0]);
            return Boolean.TRUE;
        }
        if (!"enableDynamic".equals(str)) {
            return null;
        }
        if (ap.isInMainProcess(ServiceProvider.getContext()) && com.kwad.framework.a.a.aad.booleanValue()) {
            z = true;
        }
        return Boolean.valueOf(z);
    }

    @Override
    public void deleteCache() {
        com.kwad.sdk.core.diskcache.b.a.Au().delete();
    }

    @Override
    public KsLoadManager getAdManager() {
        if (this.mAdRequestManager == null) {
            this.mAdRequestManager = new com.kwad.components.core.b();
        }
        return this.mAdRequestManager;
    }

    @Override
    public String getApiVersion() {
        return this.mApiVersionName;
    }

    @Override
    public int getApiVersionCode() {
        return this.mApiVersionCode;
    }

    @Override
    public String getAppId() {
        return ServiceProvider.HE().appId;
    }

    @Override
    public JSONObject getAppInfo() {
        return com.kwad.sdk.core.request.model.a.Cr();
    }

    @Override
    public String getAppName() {
        return ServiceProvider.HE().appName;
    }

    @Override
    public Context getContext() {
        return ServiceProvider.getContext();
    }

    @Override
    public JSONObject getDeviceInfo() {
        return com.kwad.sdk.core.request.model.b.Ct().toJson();
    }

    @Override
    public String getDid() {
        return au.getDeviceId();
    }

    public boolean getIsExternal() {
        return this.isExternal;
    }

    @Override
    public JSONObject getNetworkInfo() {
        return com.kwad.sdk.core.request.model.d.Cw().toJson();
    }

    @Override
    public String getRD(String str) {
        return com.kwad.sdk.core.a.d.getResponseData(str);
    }

    @Override
    public String getRM(String str) {
        return com.kwad.sdk.core.a.d.cQ(str);
    }

    public long getSDKInitTime() {
        return this.mInitTime;
    }

    @Override
    public int getSDKType() {
        return 1;
    }

    @Override
    public String getSDKVersion() {
        return BuildConfig.VERSION_NAME;
    }

    @Override
    public int getSDKVersionCode() {
        return BuildConfig.VERSION_CODE;
    }

    public boolean hasInitFinish() {
        return this.mIsSdkInit;
    }

    @Override
    public synchronized void init(Context context, SdkConfig sdkConfig) {
        if (context != null && sdkConfig != null) {
            try {
                if (!TextUtils.isEmpty(sdkConfig.appId)) {
                    Log.d(TAG, "init appId:" + sdkConfig.appId + "--mIsSdkInit:" + this.mIsSdkInit);
                    if (this.mIsSdkInit) {
                        ServiceProvider.a(sdkConfig);
                        return;
                    }
                    ServiceProvider.a(sdkConfig);
                    ServiceProvider.bC(context);
                    if (isRemoteService(context)) {
                        Log.d(TAG, "intKSRemoteProcess appId=" + sdkConfig.appId);
                        ServiceProvider.HC();
                        j.xo();
                        initSdkLog();
                        this.mIsSdkInit = true;
                    } else {
                        try {
                            m.xT();
                            initSDKModule();
                        } catch (Throwable th) {
                            String stackTraceString = Log.getStackTraceString(th);
                            m.a(th, stackTraceString);
                            Log.e(TAG, "init error", th);
                            notifyInitFail(sdkConfig, new f(10002, stackTraceString));
                            return;
                        }
                    }
                }
            } finally {
            }
            return;
        }
        Log.e(TAG, "KSAdSDK SDKInit:init error,please check appID and config item");
        notifyInitFail(sdkConfig, f.agV);
    }

    public boolean isAdxEnable() {
        return this.adxEnable;
    }

    @Override
    public boolean isDebugLogEnable() {
        return ServiceProvider.HE().enableDebug;
    }

    public boolean isPersonalRecommend() {
        return this.personalRecommend;
    }

    public boolean isProgrammaticRecommend() {
        return this.programmaticRecommend;
    }

    @Override
    public <T extends IComponentProxy> T newComponentProxy(Class<?> cls, Object obj) {
        try {
            Class clsG = com.kwad.sdk.service.b.g(cls);
            if (clsG == null) {
                if (obj instanceof BaseProxyActivity) {
                    clsG = com.kwad.components.core.n.a.class;
                } else if (obj instanceof BaseProxyFragmentActivity) {
                    clsG = com.kwad.components.core.n.b.class;
                }
                com.kwad.components.core.d.a.b(new RuntimeException("--getIsExternal:" + getIsExternal() + "--mIsSdkInit:" + hasInitFinish() + "--componentClass" + cls));
            }
            return (T) clsG.newInstance();
        } catch (Exception e) {
            com.kwad.components.core.d.a.b(e);
            com.kwad.sdk.core.e.c.printStackTrace(e);
            return null;
        }
    }

    @Override
    public <T> T newInstance(Class<T> cls) {
        try {
            return (T) com.kwad.sdk.service.b.h(cls).newInstance();
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    @Override
    public void pauseCurrentPlayer() {
        com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class);
    }

    @Override
    public void re(Object obj) {
        if (obj instanceof Throwable) {
            Throwable th = (Throwable) obj;
            if (com.kwad.framework.a.a.ml.booleanValue()) {
                th.printStackTrace();
            }
            com.kwad.components.core.d.a.b(th);
        }
    }

    @Override
    public void reportBatchEvent(int i, Map<String, Object> map) {
    }

    @Override
    public void resumeCurrentPlayer() {
        com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class);
    }

    @Override
    public void sR(String str, Map<String, String> map, String str2) {
        com.kwad.sdk.core.a.d.a(str, map, str2);
    }

    @Override
    public void setAdxEnable(boolean z) {
        this.adxEnable = z;
    }

    @Override
    public void setApiVersion(String str) {
        this.mApiVersionName = str;
    }

    @Override
    public void setApiVersionCode(int i) {
        this.mApiVersionCode = i;
    }

    @Override
    public void setAppTag(String str) {
        if (this.mIsSdkInit) {
            y.ad(ServiceProvider.getContext(), this.mAppTag);
        } else {
            this.mAppTag = str;
        }
    }

    @Override
    public void setIsExternal(boolean z) {
        this.isExternal = z;
    }

    @Override
    public void setLaunchTime(long j) {
        this.mLaunchTime = j;
    }

    @Override
    public void setLoadingLottieAnimation(boolean z, int i) {
        com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class);
    }

    @Override
    public void setLoadingLottieAnimationColor(boolean z, int i) {
        com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class);
    }

    @Override
    public void setPersonalRecommend(boolean z) {
        this.personalRecommend = z;
    }

    @Override
    public void setProgrammaticRecommend(boolean z) {
        this.programmaticRecommend = z;
    }

    @Override
    public void setThemeMode(int i) {
        com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class);
    }

    @Override
    public void unInit() {
        com.kwad.sdk.core.download.c.Aw().aV(getContext());
    }
}
