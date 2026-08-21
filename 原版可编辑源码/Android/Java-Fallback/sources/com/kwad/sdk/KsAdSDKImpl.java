package com.kwad.sdk;

@com.kwad.sdk.api.core.KsAdSdkDynamicImpl(com.kwad.sdk.api.core.IKsAdSDK.class)
public class KsAdSDKImpl implements com.kwad.sdk.api.core.IKsAdSDK {
    private static final java.lang.String TAG = "KSAdSDK";
    private boolean adxEnable;
    private boolean isExternal;
    private com.kwad.sdk.api.KsLoadManager mAdRequestManager;
    private int mApiVersionCode;
    private java.lang.String mApiVersionName;
    private java.lang.String mAppTag;
    private long mInitTime;
    private volatile boolean mIsSdkInit;
    private long mLaunchTime;
    private volatile boolean personalRecommend;
    private boolean programmaticRecommend;









    static class a {
        private static final com.kwad.sdk.KsAdSDKImpl ahf = null;

        static {
                com.kwad.sdk.KsAdSDKImpl r0 = new com.kwad.sdk.KsAdSDKImpl
                r1 = 0
                r0.<init>(r1)
                com.kwad.sdk.KsAdSDKImpl.a.ahf = r0
                return
        }

        static com.kwad.sdk.KsAdSDKImpl xn() {
                com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.a.ahf
                return r0
        }
    }

    private KsAdSDKImpl() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.mIsSdkInit = r0
            java.lang.String r1 = ""
            r2.mApiVersionName = r1
            r1 = 1
            r2.personalRecommend = r1
            r2.programmaticRecommend = r1
            r2.adxEnable = r0
            return
    }

    KsAdSDKImpl(com.kwad.sdk.KsAdSDKImpl.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static void access$200(com.kwad.sdk.KsAdSDKImpl r0, com.kwad.sdk.core.response.model.SdkConfigData r1) {
            r0.initOnConfigRefresh(r1)
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicImpl(com.kwad.sdk.api.core.IKsAdSDK.class)
    public static com.kwad.sdk.KsAdSDKImpl get() {
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.a.xn()
            return r0
    }

    private void initApkClean() {
            r1 = this;
            android.content.Context r0 = r1.getContext()     // Catch: java.lang.Throwable -> L8
            com.kwad.sdk.core.diskcache.a.aS(r0)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initAppTag() {
            r2 = this;
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.getContext()
            java.lang.String r1 = r2.mAppTag
            com.kwad.sdk.utils.y.ad(r0, r1)
            r0 = 0
            r2.mAppTag = r0
            return
    }

    private void initCommercialLogger() {
            r1 = this;
            com.kwad.sdk.KsAdSDKImpl$1 r0 = new com.kwad.sdk.KsAdSDKImpl$1     // Catch: java.lang.Throwable -> L9
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L9
            com.kwad.sdk.core.report.KSLoggerReporter.a(r0)     // Catch: java.lang.Throwable -> L9
            return
        L9:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initComponents() {
            r1 = this;
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.getContext()     // Catch: java.lang.Throwable -> L8
            com.kwad.sdk.components.b.init(r0)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initComponentsManager() {
            r1 = this;
            android.content.Context r0 = r1.getContext()     // Catch: java.lang.Throwable -> L8
            com.kwad.sdk.components.c.init(r0)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initConfigRequestManager() {
            r2 = this;
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.getContext()     // Catch: java.lang.Throwable -> Ld
            com.kwad.sdk.KsAdSDKImpl$4 r1 = new com.kwad.sdk.KsAdSDKImpl$4     // Catch: java.lang.Throwable -> Ld
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Ld
            com.kwad.components.core.p.f.a(r0, r1)     // Catch: java.lang.Throwable -> Ld
            return
        Ld:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initDownload() {
            r1 = this;
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.getContext()     // Catch: java.lang.Throwable -> L8
            com.kwad.sdk.core.download.a.aT(r0)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initExceptionModule() {
            r1 = this;
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.getContext()     // Catch: java.lang.Throwable -> L8
            com.kwad.components.core.d.a.initAsync(r0)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initHybrid() {
            r2 = this;
            com.kwad.sdk.core.webview.b.a r0 = com.kwad.sdk.core.webview.b.a.Ee()     // Catch: java.lang.Throwable -> Lc
            android.content.Context r1 = r2.getContext()     // Catch: java.lang.Throwable -> Lc
            r0.init(r1)     // Catch: java.lang.Throwable -> Lc
            return
        Lc:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initIDC() {
            r2 = this;
            com.kwad.sdk.core.network.idc.a r0 = com.kwad.sdk.core.network.idc.a.Bo()     // Catch: java.lang.Throwable -> Lc
            android.content.Context r1 = r2.getContext()     // Catch: java.lang.Throwable -> Lc
            r0.init(r1)     // Catch: java.lang.Throwable -> Lc
            return
        Lc:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initInstalledReceiver() {
            r1 = this;
            com.kwad.sdk.b.b r0 = com.kwad.sdk.b.b.yB()     // Catch: java.lang.Throwable -> L8
            r0.checkInit()     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initKSPlugin() {
            r1 = this;
            com.kwad.sdk.m.e r0 = com.kwad.sdk.m.e.KO()     // Catch: java.lang.Throwable -> L8
            r0.init()     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initLifecycleHolder() {
            r2 = this;
            com.kwad.sdk.core.c.b r0 = com.kwad.sdk.core.c.b.AU()     // Catch: java.lang.Throwable -> Lc
            android.content.Context r1 = com.kwad.sdk.service.ServiceProvider.getContext()     // Catch: java.lang.Throwable -> Lc
            r0.init(r1)     // Catch: java.lang.Throwable -> Lc
            return
        Lc:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initLottie() {
            r0 = this;
            return
    }

    private void initOAID() {
            r1 = this;
            android.content.Context r0 = r1.getContext()     // Catch: java.lang.Throwable -> L8
            com.kwad.sdk.core.f.a.initAsync(r0)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initOfflineComponents() {
            r1 = this;
            android.content.Context r0 = r1.getContext()     // Catch: java.lang.Throwable -> L8
            com.kwad.components.core.offline.init.b.init(r0)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initOnConfigRefresh(com.kwad.sdk.core.response.model.SdkConfigData r4) {
            r3 = this;
            java.lang.Class<com.kwad.components.a.a.a> r4 = com.kwad.components.a.a.a.class
            com.kwad.sdk.components.c.f(r4)
            r3.initHybrid()
            com.kwad.sdk.core.config.d.xs()
            boolean r4 = com.kwad.sdk.core.config.d.ze()
            if (r4 != 0) goto L19
            java.lang.Boolean r4 = com.kwad.framework.a.a.ml
            boolean r4 = r4.booleanValue()
            if (r4 == 0) goto L20
        L19:
            android.content.Context r4 = com.kwad.sdk.service.ServiceProvider.getContext()
            com.kwad.sdk.api.loader.DynamicInstallReceiver.registerToApp(r4)
        L20:
            boolean r4 = com.kwad.sdk.core.config.d.zN()
            if (r4 == 0) goto L2d
            android.app.Application r4 = com.kwad.sdk.m.l.KT()
            com.kwad.sdk.c.a.init(r4)
        L2d:
            r3.initSpeedLimitConfig()
            android.content.Context r4 = r3.getContext()
            com.kwad.sdk.utils.ax.init(r4)
            com.kwad.components.core.a.a r4 = com.kwad.components.core.a.a.md()
            r4.eX()
            android.content.Context r4 = r3.getContext()
            r0 = 30000(0x7530, double:1.4822E-319)
            com.kwad.sdk.KsAdSDKImpl$5 r2 = new com.kwad.sdk.KsAdSDKImpl$5
            r2.<init>(r3)
            com.kwad.sdk.utils.f.a(r4, r0, r2)
            com.kwad.sdk.core.network.idc.a r4 = com.kwad.sdk.core.network.idc.a.Bo()
            com.kwad.sdk.core.network.idc.a.a r0 = com.kwad.sdk.core.config.d.zO()
            r4.a(r0)
            long r0 = com.kwad.sdk.core.config.d.zP()
            int r4 = com.kwad.sdk.core.config.d.zQ()
            android.content.Context r2 = com.kwad.sdk.service.ServiceProvider.getContext()
            com.kwad.sdk.utils.bg.a(r0, r4, r2)
            r3.initInstalledReceiver()
            r3.initApkClean()
            com.kwad.components.core.h.a r4 = com.kwad.components.core.h.a.nY()
            android.content.Context r0 = r3.getContext()
            r4.ac(r0)
            com.kwad.sdk.core.config.item.p r4 = com.kwad.sdk.core.config.c.amn
            java.lang.String r4 = com.kwad.sdk.core.config.d.a(r4)
            com.kwad.sdk.crash.online.monitor.a.dG(r4)
            com.kwad.sdk.core.imageloader.ImageLoaderPerfUtil.report()
            com.kwad.sdk.core.config.item.p r4 = com.kwad.sdk.core.config.c.amr
            java.lang.String r4 = com.kwad.sdk.core.config.d.a(r4)
            com.kwad.sdk.ranger.e.dG(r4)
            com.kwad.sdk.core.config.item.p r4 = com.kwad.sdk.core.config.c.ams
            java.lang.String r4 = com.kwad.sdk.core.config.d.a(r4)
            com.kwad.sdk.core.threads.c.dG(r4)
            com.kwad.sdk.i.b.Gg()
            android.content.Context r4 = r3.getContext()
            com.kwad.sdk.core.response.model.SdkConfigData r0 = com.kwad.sdk.core.config.d.zw()
            java.lang.Boolean r1 = java.lang.Boolean.FALSE
            com.kwad.sdk.KsAdSDKImpl$6 r2 = new com.kwad.sdk.KsAdSDKImpl$6
            r2.<init>(r3)
            java.lang.Object r0 = r0.getAppConfigData(r1, r2)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            com.kwad.sdk.m.l.x(r4, r0)
            return
    }

    private void initPackCheck() {
            r1 = this;
            com.kwad.components.core.t.k r0 = com.kwad.components.core.t.k.qo()     // Catch: java.lang.Throwable -> L8
            r0.init()     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initPrivateData() {
            r1 = this;
            android.content.Context r0 = r1.getContext()     // Catch: java.lang.Throwable -> L8
            com.kwad.sdk.utils.au.init(r0)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initSDKModule() {
            r4 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            r4.mInitTime = r0
            com.kwad.sdk.service.b.init()
            com.kwad.sdk.j.xo()
            r4.initSdkLog()
            r4.initKSPlugin()
            r4.initCommercialLogger()
            long r2 = r4.mLaunchTime
            com.kwad.sdk.l.S(r2)
            r4.initComponents()
            r4.initOAID()
            r4.initIDC()
            r4.initDownload()
            r4.initSOLoader()
            r4.initAppTag()
            r4.initConfigRequestManager()
            r4.initExceptionModule()
            r4.initComponentsManager()
            r4.initOfflineComponents()
            r4.initLifecycleHolder()
            r4.initLottie()
            r4.initPrivateData()
            r4.initPackCheck()
            com.kwad.sdk.a.a.c r2 = com.kwad.sdk.a.a.c.yb()
            r2.yd()
            com.kwad.components.core.o.a r2 = com.kwad.components.core.o.a.pA()
            r2.pB()
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r2 = r2 - r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "KSAdSDK init time:"
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSAdSDK"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.sdk.l.T(r2)
            com.kwad.sdk.api.SdkConfig r0 = com.kwad.sdk.service.ServiceProvider.HE()
            notifyInitSuccess(r0)
            com.kwad.sdk.i.a.report()
            r0 = 1
            r4.mIsSdkInit = r0
            return
    }

    private void initSOLoader() {
            r1 = this;
            com.kwad.sdk.KsAdSDKImpl$8 r0 = new com.kwad.sdk.KsAdSDKImpl$8     // Catch: java.lang.Throwable -> L9
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L9
            com.kwad.library.solder.a.a.a(r0)     // Catch: java.lang.Throwable -> L9
            return
        L9:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initSdkLog() {
            r2 = this;
            com.kwad.sdk.api.SdkConfig r0 = com.kwad.sdk.service.ServiceProvider.HE()     // Catch: java.lang.Throwable -> Lf
            boolean r0 = r0.enableDebug     // Catch: java.lang.Throwable -> Lf
            com.kwad.sdk.KsAdSDKImpl$7 r1 = new com.kwad.sdk.KsAdSDKImpl$7     // Catch: java.lang.Throwable -> Lf
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lf
            com.kwad.sdk.core.e.c.a(r0, r1)     // Catch: java.lang.Throwable -> Lf
            return
        Lf:
            r0 = move-exception
            com.kwad.sdk.m.k(r0)
            return
    }

    private void initSpeedLimitConfig() {
            r2 = this;
            com.kwad.components.core.q.b.pL()
            boolean r0 = com.kwad.sdk.core.config.d.zh()
            int r1 = com.kwad.sdk.core.config.d.zi()
            com.kwad.components.core.q.b.e(r0, r1)
            return
    }

    private boolean isRemoteService(android.content.Context r2) {
            r1 = this;
            java.lang.String r2 = com.kwad.sdk.utils.ap.getProcessName(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L14
            java.lang.String r0 = "kssdk_remote"
            boolean r2 = r2.endsWith(r0)
            if (r2 == 0) goto L14
            r2 = 1
            return r2
        L14:
            r2 = 0
            return r2
    }

    public static void notifyInitFail(com.kwad.sdk.api.SdkConfig r1, com.kwad.sdk.f r2) {
            if (r1 == 0) goto Lf
            com.kwad.sdk.api.KsInitCallback r1 = r1.ksInitCallback     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Lf
            com.kwad.sdk.KsAdSDKImpl$2 r0 = new com.kwad.sdk.KsAdSDKImpl$2     // Catch: java.lang.Throwable -> Lf
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> Lf
            com.kwad.sdk.utils.bj.postOnUiThread(r0)     // Catch: java.lang.Throwable -> Lf
        Lf:
            return
    }

    public static void notifyInitSuccess(com.kwad.sdk.api.SdkConfig r1) {
            if (r1 == 0) goto Lf
            com.kwad.sdk.api.KsInitCallback r1 = r1.ksInitCallback     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Lf
            com.kwad.sdk.KsAdSDKImpl$3 r0 = new com.kwad.sdk.KsAdSDKImpl$3     // Catch: java.lang.Throwable -> Lf
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lf
            com.kwad.sdk.utils.bj.postOnUiThread(r0)     // Catch: java.lang.Throwable -> Lf
        Lf:
            return
    }

    @Override
    public void addHp(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            com.kwad.sdk.core.a.d.e(r1)
            return
    }

    @Override
    public java.lang.Object dM(java.lang.String r3, java.lang.Object... r4) {
            r2 = this;
            java.lang.String r0 = "autoRT"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto Le
            r3 = -1
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            return r3
        Le:
            java.lang.String r0 = "getAutoRevertTime"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L1d
            r3 = 10000(0x2710, float:1.4013E-41)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            return r3
        L1d:
            java.lang.String r0 = "TRANSFORM_API_HOST"
            boolean r0 = r0.equals(r3)
            r1 = 0
            if (r0 == 0) goto L37
            com.kwad.sdk.core.network.idc.a r3 = com.kwad.sdk.core.network.idc.a.Bo()
            r4 = r4[r1]
            java.lang.String r4 = r4.toString()
            java.lang.String r0 = "api"
            java.lang.String r3 = r3.R(r4, r0)
            return r3
        L37:
            java.lang.String r0 = "reportDynamicUpdate"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L49
            r3 = r4[r1]
            org.json.JSONObject r3 = (org.json.JSONObject) r3
            com.kwad.sdk.core.report.KSLoggerReporter.q(r3)
            java.lang.Boolean r3 = java.lang.Boolean.TRUE
            return r3
        L49:
            java.lang.String r4 = "enableDynamic"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L69
            android.content.Context r3 = com.kwad.sdk.service.ServiceProvider.getContext()
            boolean r3 = com.kwad.sdk.utils.ap.isInMainProcess(r3)
            if (r3 == 0) goto L64
            java.lang.Boolean r3 = com.kwad.framework.a.a.aad
            boolean r3 = r3.booleanValue()
            if (r3 == 0) goto L64
            r1 = 1
        L64:
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r1)
            return r3
        L69:
            r3 = 0
            return r3
    }

    @Override
    public void deleteCache() {
            r1 = this;
            com.kwad.sdk.core.diskcache.b.a r0 = com.kwad.sdk.core.diskcache.b.a.Au()
            r0.delete()
            return
    }

    @Override
    public com.kwad.sdk.api.KsLoadManager getAdManager() {
            r1 = this;
            com.kwad.sdk.api.KsLoadManager r0 = r1.mAdRequestManager
            if (r0 != 0) goto Lb
            com.kwad.components.core.b r0 = new com.kwad.components.core.b
            r0.<init>()
            r1.mAdRequestManager = r0
        Lb:
            com.kwad.sdk.api.KsLoadManager r0 = r1.mAdRequestManager
            return r0
    }

    @Override
    public java.lang.String getApiVersion() {
            r1 = this;
            java.lang.String r0 = r1.mApiVersionName
            return r0
    }

    @Override
    public int getApiVersionCode() {
            r1 = this;
            int r0 = r1.mApiVersionCode
            return r0
    }

    @Override
    public java.lang.String getAppId() {
            r1 = this;
            com.kwad.sdk.api.SdkConfig r0 = com.kwad.sdk.service.ServiceProvider.HE()
            java.lang.String r0 = r0.appId
            return r0
    }

    @Override
    public org.json.JSONObject getAppInfo() {
            r1 = this;
            org.json.JSONObject r0 = com.kwad.sdk.core.request.model.a.Cr()
            return r0
    }

    @Override
    public java.lang.String getAppName() {
            r1 = this;
            com.kwad.sdk.api.SdkConfig r0 = com.kwad.sdk.service.ServiceProvider.HE()
            java.lang.String r0 = r0.appName
            return r0
    }

    @Override
    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.getContext()
            return r0
    }

    @Override
    public org.json.JSONObject getDeviceInfo() {
            r1 = this;
            com.kwad.sdk.core.request.model.b r0 = com.kwad.sdk.core.request.model.b.Ct()
            org.json.JSONObject r0 = r0.toJson()
            return r0
    }

    @Override
    public java.lang.String getDid() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.utils.au.getDeviceId()
            return r0
    }

    public boolean getIsExternal() {
            r1 = this;
            boolean r0 = r1.isExternal
            return r0
    }

    @Override
    public org.json.JSONObject getNetworkInfo() {
            r1 = this;
            com.kwad.sdk.core.request.model.d r0 = com.kwad.sdk.core.request.model.d.Cw()
            org.json.JSONObject r0 = r0.toJson()
            return r0
    }

    @Override
    public java.lang.String getRD(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = com.kwad.sdk.core.a.d.getResponseData(r1)
            return r1
    }

    @Override
    public java.lang.String getRM(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = com.kwad.sdk.core.a.d.cQ(r1)
            return r1
    }

    public long getSDKInitTime() {
            r2 = this;
            long r0 = r2.mInitTime
            return r0
    }

    @Override
    public int getSDKType() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public java.lang.String getSDKVersion() {
            r1 = this;
            java.lang.String r0 = "3.3.42"
            return r0
    }

    @Override
    public int getSDKVersionCode() {
            r1 = this;
            r0 = 3034200(0x2e4c58, float:4.25182E-39)
            return r0
    }

    public boolean hasInitFinish() {
            r1 = this;
            boolean r0 = r1.mIsSdkInit
            return r0
    }

    @Override
    public synchronized void init(android.content.Context r5, com.kwad.sdk.api.SdkConfig r6) {
            r4 = this;
            monitor-enter(r4)
            r0 = 10002(0x2712, float:1.4016E-41)
            if (r5 == 0) goto L86
            if (r6 == 0) goto L86
            java.lang.String r1 = r6.appId     // Catch: java.lang.Throwable -> L94
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L94
            if (r1 == 0) goto L10
            goto L86
        L10:
            java.lang.String r1 = "KSAdSDK"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L94
            java.lang.String r3 = "init appId:"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L94
            java.lang.String r3 = r6.appId     // Catch: java.lang.Throwable -> L94
            r2.append(r3)     // Catch: java.lang.Throwable -> L94
            java.lang.String r3 = "--mIsSdkInit:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L94
            boolean r3 = r4.mIsSdkInit     // Catch: java.lang.Throwable -> L94
            r2.append(r3)     // Catch: java.lang.Throwable -> L94
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L94
            android.util.Log.d(r1, r2)     // Catch: java.lang.Throwable -> L94
            boolean r1 = r4.mIsSdkInit     // Catch: java.lang.Throwable -> L94
            if (r1 == 0) goto L38
            com.kwad.sdk.service.ServiceProvider.a(r6)     // Catch: java.lang.Throwable -> L94
            monitor-exit(r4)
            return
        L38:
            com.kwad.sdk.service.ServiceProvider.a(r6)     // Catch: java.lang.Throwable -> L94
            com.kwad.sdk.service.ServiceProvider.bC(r5)     // Catch: java.lang.Throwable -> L94
            boolean r5 = r4.isRemoteService(r5)     // Catch: java.lang.Throwable -> L94
            if (r5 == 0) goto L66
            java.lang.String r5 = "KSAdSDK"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L94
            java.lang.String r2 = "intKSRemoteProcess appId="
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L94
            java.lang.String r2 = r6.appId     // Catch: java.lang.Throwable -> L94
            r1.append(r2)     // Catch: java.lang.Throwable -> L94
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L94
            android.util.Log.d(r5, r1)     // Catch: java.lang.Throwable -> L94
            com.kwad.sdk.service.ServiceProvider.HC()     // Catch: java.lang.Throwable -> L94
            com.kwad.sdk.j.xo()     // Catch: java.lang.Throwable -> L94
            r4.initSdkLog()     // Catch: java.lang.Throwable -> L94
            r5 = 1
            r4.mIsSdkInit = r5     // Catch: java.lang.Throwable -> L94
            goto La8
        L66:
            com.kwad.sdk.m.xT()     // Catch: java.lang.Throwable -> L6d
            r4.initSDKModule()     // Catch: java.lang.Throwable -> L6d
            goto La8
        L6d:
            r5 = move-exception
            java.lang.String r1 = android.util.Log.getStackTraceString(r5)     // Catch: java.lang.Throwable -> L94
            com.kwad.sdk.m.a(r5, r1)     // Catch: java.lang.Throwable -> L94
            java.lang.String r2 = "KSAdSDK"
            java.lang.String r3 = "init error"
            android.util.Log.e(r2, r3, r5)     // Catch: java.lang.Throwable -> L94
            com.kwad.sdk.f r5 = new com.kwad.sdk.f     // Catch: java.lang.Throwable -> L94
            r5.<init>(r0, r1)     // Catch: java.lang.Throwable -> L94
            notifyInitFail(r6, r5)     // Catch: java.lang.Throwable -> L94
            monitor-exit(r4)
            return
        L86:
            java.lang.String r5 = "KSAdSDK"
            java.lang.String r1 = "KSAdSDK SDKInit:init error,please check appID and config item"
            android.util.Log.e(r5, r1)     // Catch: java.lang.Throwable -> L94
            com.kwad.sdk.f r5 = com.kwad.sdk.f.agV     // Catch: java.lang.Throwable -> L94
            notifyInitFail(r6, r5)     // Catch: java.lang.Throwable -> L94
            monitor-exit(r4)
            return
        L94:
            r5 = move-exception
            java.lang.String r1 = "KSAdSDK"
            java.lang.String r2 = "init error"
            android.util.Log.e(r1, r2, r5)     // Catch: java.lang.Throwable -> Laa
            com.kwad.sdk.f r1 = new com.kwad.sdk.f     // Catch: java.lang.Throwable -> Laa
            java.lang.String r5 = android.util.Log.getStackTraceString(r5)     // Catch: java.lang.Throwable -> Laa
            r1.<init>(r0, r5)     // Catch: java.lang.Throwable -> Laa
            notifyInitFail(r6, r1)     // Catch: java.lang.Throwable -> Laa
        La8:
            monitor-exit(r4)
            return
        Laa:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public boolean isAdxEnable() {
            r1 = this;
            boolean r0 = r1.adxEnable
            return r0
    }

    @Override
    public boolean isDebugLogEnable() {
            r1 = this;
            com.kwad.sdk.api.SdkConfig r0 = com.kwad.sdk.service.ServiceProvider.HE()
            boolean r0 = r0.enableDebug
            return r0
    }

    public boolean isPersonalRecommend() {
            r1 = this;
            boolean r0 = r1.personalRecommend
            return r0
    }

    public boolean isProgrammaticRecommend() {
            r1 = this;
            boolean r0 = r1.programmaticRecommend
            return r0
    }

    @Override
    public <T extends com.kwad.sdk.api.proxy.IComponentProxy> T newComponentProxy(java.lang.Class<?> r4, java.lang.Object r5) {
            r3 = this;
            java.lang.Class r0 = com.kwad.sdk.service.b.g(r4)     // Catch: java.lang.Exception -> L48
            if (r0 != 0) goto L41
            boolean r1 = r5 instanceof com.kwad.sdk.api.proxy.BaseProxyActivity     // Catch: java.lang.Exception -> L48
            if (r1 == 0) goto Ld
            java.lang.Class<com.kwad.components.core.n.a> r0 = com.kwad.components.core.n.a.class
            goto L13
        Ld:
            boolean r5 = r5 instanceof com.kwad.sdk.api.proxy.BaseProxyFragmentActivity     // Catch: java.lang.Exception -> L48
            if (r5 == 0) goto L13
            java.lang.Class<com.kwad.components.core.n.b> r0 = com.kwad.components.core.n.b.class
        L13:
            java.lang.RuntimeException r5 = new java.lang.RuntimeException     // Catch: java.lang.Exception -> L48
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L48
            java.lang.String r2 = "--getIsExternal:"
            r1.<init>(r2)     // Catch: java.lang.Exception -> L48
            boolean r2 = r3.getIsExternal()     // Catch: java.lang.Exception -> L48
            r1.append(r2)     // Catch: java.lang.Exception -> L48
            java.lang.String r2 = "--mIsSdkInit:"
            r1.append(r2)     // Catch: java.lang.Exception -> L48
            boolean r2 = r3.hasInitFinish()     // Catch: java.lang.Exception -> L48
            r1.append(r2)     // Catch: java.lang.Exception -> L48
            java.lang.String r2 = "--componentClass"
            r1.append(r2)     // Catch: java.lang.Exception -> L48
            r1.append(r4)     // Catch: java.lang.Exception -> L48
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L48
            r5.<init>(r4)     // Catch: java.lang.Exception -> L48
            com.kwad.components.core.d.a.b(r5)     // Catch: java.lang.Exception -> L48
        L41:
            java.lang.Object r4 = r0.newInstance()     // Catch: java.lang.Exception -> L48
            com.kwad.sdk.api.proxy.IComponentProxy r4 = (com.kwad.sdk.api.proxy.IComponentProxy) r4     // Catch: java.lang.Exception -> L48
            return r4
        L48:
            r4 = move-exception
            com.kwad.components.core.d.a.b(r4)
            com.kwad.sdk.core.e.c.printStackTrace(r4)
            r4 = 0
            return r4
    }

    @Override
    public <T> T newInstance(java.lang.Class<T> r2) {
            r1 = this;
            java.lang.Class r2 = com.kwad.sdk.service.b.h(r2)
            java.lang.Object r2 = r2.newInstance()     // Catch: java.lang.Exception -> L9
            return r2
        L9:
            r2 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r2)
            throw r0
    }

    @Override
    public void pauseCurrentPlayer() {
            r1 = this;
            java.lang.Class<com.kwad.components.a.a.a> r0 = com.kwad.components.a.a.a.class
            com.kwad.sdk.components.c.f(r0)
            return
    }

    @Override
    public void re(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof java.lang.Throwable
            if (r0 == 0) goto L14
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            java.lang.Boolean r0 = com.kwad.framework.a.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L11
            r2.printStackTrace()
        L11:
            com.kwad.components.core.d.a.b(r2)
        L14:
            return
    }

    @Override
    public void reportBatchEvent(int r1, java.util.Map<java.lang.String, java.lang.Object> r2) {
            r0 = this;
            return
    }

    @Override
    public void resumeCurrentPlayer() {
            r1 = this;
            java.lang.Class<com.kwad.components.a.a.a> r0 = com.kwad.components.a.a.a.class
            com.kwad.sdk.components.c.f(r0)
            return
    }

    @Override
    public void sR(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2, java.lang.String r3) {
            r0 = this;
            com.kwad.sdk.core.a.d.a(r1, r2, r3)
            return
    }

    @Override
    public void setAdxEnable(boolean r1) {
            r0 = this;
            r0.adxEnable = r1
            return
    }

    @Override
    public void setApiVersion(java.lang.String r1) {
            r0 = this;
            r0.mApiVersionName = r1
            return
    }

    @Override
    public void setApiVersionCode(int r1) {
            r0 = this;
            r0.mApiVersionCode = r1
            return
    }

    @Override
    public void setAppTag(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.mIsSdkInit
            if (r0 == 0) goto Le
            android.content.Context r2 = com.kwad.sdk.service.ServiceProvider.getContext()
            java.lang.String r0 = r1.mAppTag
            com.kwad.sdk.utils.y.ad(r2, r0)
            return
        Le:
            r1.mAppTag = r2
            return
    }

    @Override
    public void setIsExternal(boolean r1) {
            r0 = this;
            r0.isExternal = r1
            return
    }

    @Override
    public void setLaunchTime(long r1) {
            r0 = this;
            r0.mLaunchTime = r1
            return
    }

    @Override
    public void setLoadingLottieAnimation(boolean r1, int r2) {
            r0 = this;
            java.lang.Class<com.kwad.components.a.a.a> r1 = com.kwad.components.a.a.a.class
            com.kwad.sdk.components.c.f(r1)
            return
    }

    @Override
    public void setLoadingLottieAnimationColor(boolean r1, int r2) {
            r0 = this;
            java.lang.Class<com.kwad.components.a.a.a> r1 = com.kwad.components.a.a.a.class
            com.kwad.sdk.components.c.f(r1)
            return
    }

    @Override
    public void setPersonalRecommend(boolean r1) {
            r0 = this;
            r0.personalRecommend = r1
            return
    }

    @Override
    public void setProgrammaticRecommend(boolean r1) {
            r0 = this;
            r0.programmaticRecommend = r1
            return
    }

    @Override
    public void setThemeMode(int r1) {
            r0 = this;
            java.lang.Class<com.kwad.components.a.a.a> r1 = com.kwad.components.a.a.a.class
            com.kwad.sdk.components.c.f(r1)
            return
    }

    @Override
    public void unInit() {
            r2 = this;
            com.kwad.sdk.core.download.c r0 = com.kwad.sdk.core.download.c.Aw()
            android.content.Context r1 = r2.getContext()
            r0.aV(r1)
            return
    }
}
