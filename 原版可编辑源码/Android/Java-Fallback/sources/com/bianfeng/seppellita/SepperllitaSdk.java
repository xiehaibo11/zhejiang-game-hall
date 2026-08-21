package com.bianfeng.seppellita;

public class SepperllitaSdk {
    private static volatile com.bianfeng.seppellita.SepperllitaSdk sdk;
    private com.bianfeng.seppellita.SepperllitaCallback callback;
    private com.bianfeng.seppellita.utils.ConfigUtils configUtils;
    private volatile android.content.Context context;
    private com.bianfeng.seppellita.db.DBManager dbManager;
    private com.bianfeng.seppellita.manager.EventBeanManager eventBeanManager;
    private com.bianfeng.seppellita.SepperllitaSdk.InitCallback initCallback;
    private volatile boolean isPostImmediately;
    private java.lang.String mSiteID;
    private com.bianfeng.seppellita.net.NetManager netManager;
    private com.bianfeng.seppellita.manager.IPolicysManager policysManager;


    public interface InitCallback {
        void onFail(java.lang.String r1);

        void onSuc();
    }

    private SepperllitaSdk() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.isPostImmediately = r0
            r0 = 0
            r1.context = r0
            com.bianfeng.seppellita.SepperllitaSdk$1 r0 = new com.bianfeng.seppellita.SepperllitaSdk$1
            r0.<init>(r1)
            r1.callback = r0
            return
    }

    static boolean access$000(com.bianfeng.seppellita.SepperllitaSdk r0) {
            boolean r0 = r0.isPostImmediately
            return r0
    }

    static boolean access$002(com.bianfeng.seppellita.SepperllitaSdk r0, boolean r1) {
            r0.isPostImmediately = r1
            return r1
    }

    static void access$100(com.bianfeng.seppellita.SepperllitaSdk r0, java.util.List r1) {
            r0.post(r1)
            return
    }

    static android.content.Context access$200(com.bianfeng.seppellita.SepperllitaSdk r0) {
            android.content.Context r0 = r0.context
            return r0
    }

    static java.lang.String access$300(com.bianfeng.seppellita.SepperllitaSdk r0) {
            java.lang.String r0 = r0.mSiteID
            return r0
    }

    static void access$400(com.bianfeng.seppellita.SepperllitaSdk r0, android.content.Context r1, java.util.List r2, java.lang.String r3) {
            r0.postImmediately(r1, r2, r3)
            return
    }

    static com.bianfeng.seppellita.db.DBManager access$500(com.bianfeng.seppellita.SepperllitaSdk r0) {
            com.bianfeng.seppellita.db.DBManager r0 = r0.dbManager
            return r0
    }

    static com.bianfeng.seppellita.utils.ConfigUtils access$600(com.bianfeng.seppellita.SepperllitaSdk r0) {
            com.bianfeng.seppellita.utils.ConfigUtils r0 = r0.configUtils
            return r0
    }

    static com.bianfeng.seppellita.manager.IPolicysManager access$700(com.bianfeng.seppellita.SepperllitaSdk r0) {
            com.bianfeng.seppellita.manager.IPolicysManager r0 = r0.policysManager
            return r0
    }

    static com.bianfeng.seppellita.SepperllitaSdk.InitCallback access$800(com.bianfeng.seppellita.SepperllitaSdk r0) {
            com.bianfeng.seppellita.SepperllitaSdk$InitCallback r0 = r0.initCallback
            return r0
    }

    static void access$900(com.bianfeng.seppellita.SepperllitaSdk r0) {
            r0.select()
            return
    }

    public static com.bianfeng.seppellita.SepperllitaSdk getInstance() {
            com.bianfeng.seppellita.SepperllitaSdk r0 = com.bianfeng.seppellita.SepperllitaSdk.sdk
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.seppellita.net.UrlManager> r0 = com.bianfeng.seppellita.net.UrlManager.class
            monitor-enter(r0)
            com.bianfeng.seppellita.SepperllitaSdk r1 = com.bianfeng.seppellita.SepperllitaSdk.sdk     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.seppellita.SepperllitaSdk r1 = new com.bianfeng.seppellita.SepperllitaSdk     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.seppellita.SepperllitaSdk.sdk = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.seppellita.SepperllitaSdk r0 = com.bianfeng.seppellita.SepperllitaSdk.sdk
            return r0
    }

    public static java.lang.String getMetaData(android.content.Context r2, java.lang.String r3) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L22
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r2 = r0.getApplicationInfo(r2, r1)     // Catch: java.lang.Exception -> L22
            android.os.Bundle r0 = r2.metaData     // Catch: java.lang.Exception -> L22
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Exception -> L22
            if (r0 == 0) goto L1f
            android.os.Bundle r2 = r2.metaData     // Catch: java.lang.Exception -> L22
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L22
            goto L27
        L1f:
            java.lang.String r2 = ""
            return r2
        L22:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
        L27:
            return r2
    }

    private void post(java.util.List<java.lang.String> r3) {
            r2 = this;
            com.bianfeng.seppellita.net.NetManager r0 = r2.netManager     // Catch: java.lang.Exception -> Le
            com.bianfeng.seppellita.manager.EventBeanManager r1 = r2.eventBeanManager     // Catch: java.lang.Exception -> Le
            java.util.List r3 = r1.creatEventBean(r3)     // Catch: java.lang.Exception -> Le
            com.bianfeng.seppellita.SepperllitaCallback r1 = r2.callback     // Catch: java.lang.Exception -> Le
            r0.postData(r3, r1)     // Catch: java.lang.Exception -> Le
            goto L12
        Le:
            r3 = move-exception
            r3.printStackTrace()
        L12:
            return
    }

    private void postImmediately(android.content.Context r6, java.util.List<java.lang.String> r7, java.lang.String r8) {
            r5 = this;
            int r6 = r7.size()     // Catch: java.lang.Exception -> L93
            if (r6 != 0) goto L7
            return
        L7:
            com.bianfeng.netlibsdk.BasicNetwork r6 = new com.bianfeng.netlibsdk.BasicNetwork     // Catch: java.lang.Exception -> L93
            com.bianfeng.netlibsdk.HurlStack r0 = new com.bianfeng.netlibsdk.HurlStack     // Catch: java.lang.Exception -> L93
            r0.<init>()     // Catch: java.lang.Exception -> L93
            r6.<init>(r0)     // Catch: java.lang.Exception -> L93
            com.bianfeng.seppellita.manager.EventBeanManager r0 = r5.eventBeanManager     // Catch: java.lang.Exception -> L93
            java.util.List r7 = r0.creatEventBean(r7, r8)     // Catch: java.lang.Exception -> L93
            r0 = 0
        L18:
            int r1 = r7.size()     // Catch: java.lang.Exception -> L93
            if (r0 >= r1) goto L97
            java.lang.Object r1 = r7.get(r0)     // Catch: java.lang.Exception -> L93
            com.bianfeng.seppellita.bean.PostDataBean r1 = (com.bianfeng.seppellita.bean.PostDataBean) r1     // Catch: java.lang.Exception -> L93
            r1.setSite(r8)     // Catch: java.lang.Exception -> L93
            com.bianfeng.seppellita.net.PostRequest r2 = new com.bianfeng.seppellita.net.PostRequest     // Catch: java.lang.Exception -> L93
            r2.<init>(r1)     // Catch: java.lang.Exception -> L93
            com.bianfeng.seppellita.SepperllitaCallback r3 = r5.callback     // Catch: java.lang.Exception -> L93
            r2.setCallback(r3)     // Catch: java.lang.Exception -> L93
            java.lang.String r3 = "network-queue-take"
            r2.addMarker(r3)     // Catch: java.lang.Exception -> L6d com.bianfeng.netlibsdk.utils.NetException -> L8c
            boolean r3 = r2.isCanceled()     // Catch: java.lang.Exception -> L6d com.bianfeng.netlibsdk.utils.NetException -> L8c
            if (r3 == 0) goto L3d
            return
        L3d:
            com.bianfeng.netlibsdk.NetworkResponse r3 = r6.performRequest(r2)     // Catch: java.lang.Exception -> L6d com.bianfeng.netlibsdk.utils.NetException -> L8c
            java.lang.String r4 = "network-http-complete"
            r2.addMarker(r4)     // Catch: java.lang.Exception -> L6d com.bianfeng.netlibsdk.utils.NetException -> L8c
            boolean r4 = r3.notModified     // Catch: java.lang.Exception -> L6d com.bianfeng.netlibsdk.utils.NetException -> L8c
            if (r4 == 0) goto L51
            boolean r4 = r2.hasHadResponseDelivered()     // Catch: java.lang.Exception -> L6d com.bianfeng.netlibsdk.utils.NetException -> L8c
            if (r4 == 0) goto L51
            return
        L51:
            com.bianfeng.netlibsdk.Response r3 = r2.parseNetworkResponse(r3)     // Catch: java.lang.Exception -> L6d com.bianfeng.netlibsdk.utils.NetException -> L8c
            java.lang.String r4 = "network-parse-complete"
            r2.addMarker(r4)     // Catch: java.lang.Exception -> L6d com.bianfeng.netlibsdk.utils.NetException -> L8c
            r2.markDelivered()     // Catch: java.lang.Exception -> L6d com.bianfeng.netlibsdk.utils.NetException -> L8c
            boolean r2 = r3.isSuccess()     // Catch: java.lang.Exception -> L6d com.bianfeng.netlibsdk.utils.NetException -> L8c
            if (r2 == 0) goto L90
            com.bianfeng.seppellita.db.DBManager r2 = r5.dbManager     // Catch: java.lang.Exception -> L6d com.bianfeng.netlibsdk.utils.NetException -> L8c
            java.util.List r1 = r1.getIdList()     // Catch: java.lang.Exception -> L6d com.bianfeng.netlibsdk.utils.NetException -> L8c
            r2.del(r1)     // Catch: java.lang.Exception -> L6d com.bianfeng.netlibsdk.utils.NetException -> L8c
            goto L90
        L6d:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L93
            r2.<init>()     // Catch: java.lang.Exception -> L93
            java.lang.String r3 = "测试  Unhandled exception %s"
            r2.append(r3)     // Catch: java.lang.Exception -> L93
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Exception -> L93
            r2.append(r3)     // Catch: java.lang.Exception -> L93
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L93
            com.bianfeng.netlibsdk.utils.NetLogger.e(r2)     // Catch: java.lang.Exception -> L93
            com.bianfeng.netlibsdk.utils.NetException r2 = new com.bianfeng.netlibsdk.utils.NetException     // Catch: java.lang.Exception -> L93
            r2.<init>(r1)     // Catch: java.lang.Exception -> L93
            goto L90
        L8c:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Exception -> L93
        L90:
            int r0 = r0 + 1
            goto L18
        L93:
            r6 = move-exception
            r6.printStackTrace()
        L97:
            return
    }

    private void select() {
            r3 = this;
            com.bianfeng.seppellita.db.DBManager r0 = r3.dbManager
            if (r0 == 0) goto L15
            com.bianfeng.seppellita.utils.ConfigUtils r1 = r3.configUtils
            if (r1 == 0) goto L15
            java.lang.String r1 = r1.getLastTime()
            com.bianfeng.seppellita.utils.ConfigUtils r2 = r3.configUtils
            java.lang.String r2 = r2.getCurrentTimeFormat()
            r0.selectDbLastMonthByteData(r1, r2)
        L15:
            return
    }

    public java.lang.String getPolicys(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.seppellita.manager.IPolicysManager r0 = r1.policysManager
            if (r0 == 0) goto L9
            java.lang.String r2 = r0.getPolicys(r2, r3)
            return r2
        L9:
            java.lang.String r2 = ""
            return r2
    }

    public java.lang.String getVersion() {
            r1 = this;
            java.lang.String r0 = "1.0.3"
            return r0
    }

    public void onInit(android.content.Context r3, java.lang.String r4, com.bianfeng.seppellita.SepperllitaSdk.InitCallback r5) {
            r2 = this;
            com.bianfeng.ymnsdk.utilslib.UtilsSdk.initContext(r3)     // Catch: java.lang.Exception -> L5a
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.setYmnagreeprivacy()     // Catch: java.lang.Exception -> L5a
            java.lang.String r0 = "sl_site"
            java.lang.String r0 = getMetaData(r3, r0)     // Catch: java.lang.Exception -> L5a
            r2.mSiteID = r0     // Catch: java.lang.Exception -> L5a
            java.lang.String r1 = "ymn-site"
            android.util.Log.e(r1, r0)     // Catch: java.lang.Exception -> L5a
            com.bianfeng.seppellita.utils.ConfigUtils r0 = new com.bianfeng.seppellita.utils.ConfigUtils     // Catch: java.lang.Exception -> L5a
            com.bianfeng.seppellita.SepperllitaCallback r1 = r2.callback     // Catch: java.lang.Exception -> L5a
            r0.<init>(r1)     // Catch: java.lang.Exception -> L5a
            r2.configUtils = r0     // Catch: java.lang.Exception -> L5a
            r2.initCallback = r5     // Catch: java.lang.Exception -> L5a
            com.bianfeng.seppellita.manager.EventBeanManager r5 = new com.bianfeng.seppellita.manager.EventBeanManager     // Catch: java.lang.Exception -> L5a
            com.bianfeng.seppellita.utils.ConfigUtils r0 = r2.configUtils     // Catch: java.lang.Exception -> L5a
            r5.<init>(r3, r0)     // Catch: java.lang.Exception -> L5a
            r2.eventBeanManager = r5     // Catch: java.lang.Exception -> L5a
            com.bianfeng.seppellita.net.NetManager r3 = new com.bianfeng.seppellita.net.NetManager     // Catch: java.lang.Exception -> L5a
            com.bianfeng.seppellita.manager.EventBeanManager r5 = r2.eventBeanManager     // Catch: java.lang.Exception -> L5a
            java.util.Map r5 = r5.getGetParameters()     // Catch: java.lang.Exception -> L5a
            r3.<init>(r5)     // Catch: java.lang.Exception -> L5a
            r2.netManager = r3     // Catch: java.lang.Exception -> L5a
            com.bianfeng.seppellita.db.DBManager r3 = new com.bianfeng.seppellita.db.DBManager     // Catch: java.lang.Exception -> L5a
            r3.<init>()     // Catch: java.lang.Exception -> L5a
            r2.dbManager = r3     // Catch: java.lang.Exception -> L5a
            com.bianfeng.seppellita.SepperllitaCallback r5 = r2.callback     // Catch: java.lang.Exception -> L5a
            r3.setCallback(r5)     // Catch: java.lang.Exception -> L5a
            com.bianfeng.seppellita.net.NetManager r3 = r2.netManager     // Catch: java.lang.Exception -> L5a
            com.bianfeng.seppellita.SepperllitaCallback r5 = r2.callback     // Catch: java.lang.Exception -> L5a
            r3.postInit(r4, r5)     // Catch: java.lang.Exception -> L5a
            com.bianfeng.seppellita.db.DBManager r3 = r2.dbManager     // Catch: java.lang.Exception -> L5a
            com.bianfeng.seppellita.utils.ConfigUtils r4 = r2.configUtils     // Catch: java.lang.Exception -> L5a
            java.lang.String r4 = r4.getLastTime()     // Catch: java.lang.Exception -> L5a
            r3.delBeforeOneMouthData(r4)     // Catch: java.lang.Exception -> L5a
            com.bianfeng.seppellita.manager.PolicysManager r3 = new com.bianfeng.seppellita.manager.PolicysManager     // Catch: java.lang.Exception -> L5a
            r3.<init>()     // Catch: java.lang.Exception -> L5a
            r2.policysManager = r3     // Catch: java.lang.Exception -> L5a
            goto L61
        L5a:
            java.lang.String r3 = "ymn"
            java.lang.String r4 = "初始化时异常"
            android.util.Log.e(r3, r4)
        L61:
            return
    }

    public void onInit(android.content.Context r2, java.lang.String r3, java.lang.String r4, com.bianfeng.seppellita.SepperllitaSdk.InitCallback r5) {
            r1 = this;
            com.bianfeng.ymnsdk.utilslib.UtilsSdk.initContext(r2)     // Catch: java.lang.Exception -> L4f
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.setYmnagreeprivacy()     // Catch: java.lang.Exception -> L4f
            r1.mSiteID = r4     // Catch: java.lang.Exception -> L4f
            com.bianfeng.seppellita.utils.ConfigUtils r4 = new com.bianfeng.seppellita.utils.ConfigUtils     // Catch: java.lang.Exception -> L4f
            com.bianfeng.seppellita.SepperllitaCallback r0 = r1.callback     // Catch: java.lang.Exception -> L4f
            r4.<init>(r0)     // Catch: java.lang.Exception -> L4f
            r1.configUtils = r4     // Catch: java.lang.Exception -> L4f
            r1.initCallback = r5     // Catch: java.lang.Exception -> L4f
            com.bianfeng.seppellita.manager.EventBeanManager r4 = new com.bianfeng.seppellita.manager.EventBeanManager     // Catch: java.lang.Exception -> L4f
            com.bianfeng.seppellita.utils.ConfigUtils r5 = r1.configUtils     // Catch: java.lang.Exception -> L4f
            r4.<init>(r2, r5)     // Catch: java.lang.Exception -> L4f
            r1.eventBeanManager = r4     // Catch: java.lang.Exception -> L4f
            com.bianfeng.seppellita.net.NetManager r2 = new com.bianfeng.seppellita.net.NetManager     // Catch: java.lang.Exception -> L4f
            com.bianfeng.seppellita.manager.EventBeanManager r4 = r1.eventBeanManager     // Catch: java.lang.Exception -> L4f
            java.util.Map r4 = r4.getGetParameters()     // Catch: java.lang.Exception -> L4f
            r2.<init>(r4)     // Catch: java.lang.Exception -> L4f
            r1.netManager = r2     // Catch: java.lang.Exception -> L4f
            com.bianfeng.seppellita.db.DBManager r2 = new com.bianfeng.seppellita.db.DBManager     // Catch: java.lang.Exception -> L4f
            r2.<init>()     // Catch: java.lang.Exception -> L4f
            r1.dbManager = r2     // Catch: java.lang.Exception -> L4f
            com.bianfeng.seppellita.SepperllitaCallback r4 = r1.callback     // Catch: java.lang.Exception -> L4f
            r2.setCallback(r4)     // Catch: java.lang.Exception -> L4f
            com.bianfeng.seppellita.net.NetManager r2 = r1.netManager     // Catch: java.lang.Exception -> L4f
            com.bianfeng.seppellita.SepperllitaCallback r4 = r1.callback     // Catch: java.lang.Exception -> L4f
            r2.postInit(r3, r4)     // Catch: java.lang.Exception -> L4f
            com.bianfeng.seppellita.db.DBManager r2 = r1.dbManager     // Catch: java.lang.Exception -> L4f
            com.bianfeng.seppellita.utils.ConfigUtils r3 = r1.configUtils     // Catch: java.lang.Exception -> L4f
            java.lang.String r3 = r3.getLastTime()     // Catch: java.lang.Exception -> L4f
            r2.delBeforeOneMouthData(r3)     // Catch: java.lang.Exception -> L4f
            com.bianfeng.seppellita.manager.PolicysManager r2 = new com.bianfeng.seppellita.manager.PolicysManager     // Catch: java.lang.Exception -> L4f
            r2.<init>()     // Catch: java.lang.Exception -> L4f
            r1.policysManager = r2     // Catch: java.lang.Exception -> L4f
            goto L56
        L4f:
            java.lang.String r2 = "ymn"
            java.lang.String r3 = "初始化时异常"
            android.util.Log.e(r2, r3)
        L56:
            return
    }

    public void onInitOnlyPostId(android.content.Context r3, com.bianfeng.seppellita.SepperllitaSdk.InitCallback r4) {
            r2 = this;
            r2.initCallback = r4
            r2.context = r3
            com.bianfeng.seppellita.utils.ConfigUtils r4 = r2.configUtils
            if (r4 != 0) goto L11
            com.bianfeng.seppellita.utils.ConfigUtils r4 = new com.bianfeng.seppellita.utils.ConfigUtils
            com.bianfeng.seppellita.SepperllitaCallback r0 = r2.callback
            r4.<init>(r0)
            r2.configUtils = r4
        L11:
            com.bianfeng.seppellita.manager.EventBeanManager r4 = r2.eventBeanManager
            if (r4 != 0) goto L1f
            com.bianfeng.seppellita.manager.EventBeanManager r4 = new com.bianfeng.seppellita.manager.EventBeanManager
            com.bianfeng.seppellita.utils.ConfigUtils r0 = r2.configUtils
            r1 = 0
            r4.<init>(r3, r0, r1)
            r2.eventBeanManager = r4
        L1f:
            com.bianfeng.seppellita.net.NetManager r4 = r2.netManager
            if (r4 != 0) goto L30
            com.bianfeng.seppellita.net.NetManager r4 = new com.bianfeng.seppellita.net.NetManager
            com.bianfeng.seppellita.manager.EventBeanManager r0 = r2.eventBeanManager
            java.util.Map r0 = r0.getGetParameters()
            r4.<init>(r0)
            r2.netManager = r4
        L30:
            com.bianfeng.seppellita.db.DBManager r4 = r2.dbManager
            if (r4 != 0) goto L3b
            com.bianfeng.seppellita.db.DBManager r4 = new com.bianfeng.seppellita.db.DBManager
            r4.<init>()
            r2.dbManager = r4
        L3b:
            com.bianfeng.ymnsdk.utilslib.cache.FileUtils.init(r3)
            com.bianfeng.seppellita.net.UrlManager r4 = com.bianfeng.seppellita.net.UrlManager.getInstance()
            java.lang.String r0 = "sl_url_main"
            java.lang.String r0 = getMetaData(r3, r0)
            java.lang.String r1 = "sl_url_alternate"
            java.lang.String r3 = getMetaData(r3, r1)
            r4.setUrlBean(r0, r3)
            com.bianfeng.seppellita.db.DBManager r3 = r2.dbManager
            com.bianfeng.seppellita.SepperllitaCallback r4 = r2.callback
            r3.setCallback(r4)
            com.bianfeng.seppellita.net.NetManager r3 = r2.netManager
            com.bianfeng.seppellita.SepperllitaCallback r4 = r2.callback
            java.lang.String r0 = ""
            r3.postInit(r0, r4)
            com.bianfeng.seppellita.db.DBManager r3 = r2.dbManager
            com.bianfeng.seppellita.utils.ConfigUtils r4 = r2.configUtils
            java.lang.String r4 = r4.getLastTime()
            r3.delBeforeOneMouthData(r4)
            com.bianfeng.seppellita.manager.IPolicysManager r3 = r2.policysManager
            if (r3 != 0) goto L77
            com.bianfeng.seppellita.manager.PolicysManager r3 = new com.bianfeng.seppellita.manager.PolicysManager
            r3.<init>()
            r2.policysManager = r3
        L77:
            return
    }

    public void onPause() {
            r1 = this;
            com.bianfeng.seppellita.utils.ConfigUtils r0 = r1.configUtils
            if (r0 == 0) goto L10
            r0.onPause()
            com.bianfeng.seppellita.utils.ConfigUtils r0 = r1.configUtils
            java.lang.String r0 = r0.getOnLineTime()
            com.bianfeng.seppellita.event.EventManager.onPause(r0)
        L10:
            return
    }

    public void onResume() {
            r1 = this;
            com.bianfeng.seppellita.utils.ConfigUtils r0 = r1.configUtils
            if (r0 == 0) goto L7
            r0.onResume()
        L7:
            return
    }

    public void post(java.lang.String r6) {
            r5 = this;
            boolean r0 = com.bianfeng.seppellita.utils.CheckKeyUtils.check(r6)
            if (r0 != 0) goto Lc
            java.lang.String r6 = "数据不全，或数据错误,缺失act或pg"
            com.bianfeng.seppellita.utils.SeppellitaLogger.e(r6)
            return
        Lc:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "post---->"
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            java.lang.Class<com.bianfeng.seppellita.SepperllitaSdk> r0 = com.bianfeng.seppellita.SepperllitaSdk.class
            monitor-enter(r0)
            com.bianfeng.seppellita.manager.IPolicysManager r1 = r5.policysManager     // Catch: java.lang.Throwable -> L50
            if (r1 == 0) goto L2d
            com.bianfeng.seppellita.manager.IPolicysManager r1 = r5.policysManager     // Catch: java.lang.Throwable -> L50
            java.lang.String r6 = r1.getPolicys(r6)     // Catch: java.lang.Throwable -> L50
        L2d:
            com.bianfeng.seppellita.db.DBManager r1 = r5.dbManager     // Catch: java.lang.Throwable -> L50
            if (r1 == 0) goto L4e
            com.bianfeng.seppellita.manager.EventBeanManager r1 = r5.eventBeanManager     // Catch: java.lang.Throwable -> L50
            r2 = 1
            r3 = 0
            if (r1 == 0) goto L39
            r1 = r2
            goto L3a
        L39:
            r1 = r3
        L3a:
            com.bianfeng.seppellita.utils.ConfigUtils r4 = r5.configUtils     // Catch: java.lang.Throwable -> L50
            if (r4 == 0) goto L3f
            goto L40
        L3f:
            r2 = r3
        L40:
            r1 = r1 & r2
            if (r1 == 0) goto L4e
            com.bianfeng.seppellita.db.DBManager r1 = r5.dbManager     // Catch: java.lang.Throwable -> L50
            com.bianfeng.seppellita.manager.EventBeanManager r2 = r5.eventBeanManager     // Catch: java.lang.Throwable -> L50
            com.bianfeng.seppellita.bean.DataBean r6 = r2.buildDataBean(r6)     // Catch: java.lang.Throwable -> L50
            r1.add(r6)     // Catch: java.lang.Throwable -> L50
        L4e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L50
            return
        L50:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L50
            throw r6
    }

    public void postBeforeInit(java.lang.String r2) {
            r1 = this;
            com.bianfeng.seppellita.SepperllitaSdk r0 = getInstance()
            r0.post(r2)
            r2 = 1
            r1.isPostImmediately = r2
            r1.select()
            return
    }

    public void postPrivacy(java.lang.String r6) {
            r5 = this;
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L70
            java.lang.Class<java.util.LinkedHashMap> r1 = java.util.LinkedHashMap.class
            java.lang.Object r6 = r0.fromJson(r6, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L70
            java.util.LinkedHashMap r6 = (java.util.LinkedHashMap) r6     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L70
            java.lang.String r0 = "pg"
            java.lang.String r1 = "P1182"
            r6.put(r0, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L70
            java.lang.String r0 = "bl"
            java.lang.String r1 = "BHO001"
            r6.put(r0, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L70
            java.lang.String r0 = "act"
            java.lang.String r1 = "push"
            r6.put(r0, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L70
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L70
            java.lang.String r6 = r0.toJson(r6)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L70
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L70
            r0.<init>()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L70
            java.lang.String r1 = "post---->"
            r0.append(r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L70
            r0.append(r6)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L70
            java.lang.String r0 = r0.toString()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L70
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L70
            java.lang.Class<com.bianfeng.seppellita.SepperllitaSdk> r0 = com.bianfeng.seppellita.SepperllitaSdk.class
            monitor-enter(r0)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L70
            com.bianfeng.seppellita.manager.IPolicysManager r1 = r5.policysManager     // Catch: java.lang.Throwable -> L6d
            if (r1 == 0) goto L4a
            com.bianfeng.seppellita.manager.IPolicysManager r1 = r5.policysManager     // Catch: java.lang.Throwable -> L6d
            java.lang.String r6 = r1.getPolicys(r6)     // Catch: java.lang.Throwable -> L6d
        L4a:
            com.bianfeng.seppellita.db.DBManager r1 = r5.dbManager     // Catch: java.lang.Throwable -> L6d
            if (r1 == 0) goto L6b
            com.bianfeng.seppellita.manager.EventBeanManager r1 = r5.eventBeanManager     // Catch: java.lang.Throwable -> L6d
            r2 = 1
            r3 = 0
            if (r1 == 0) goto L56
            r1 = r2
            goto L57
        L56:
            r1 = r3
        L57:
            com.bianfeng.seppellita.utils.ConfigUtils r4 = r5.configUtils     // Catch: java.lang.Throwable -> L6d
            if (r4 == 0) goto L5c
            goto L5d
        L5c:
            r2 = r3
        L5d:
            r1 = r1 & r2
            if (r1 == 0) goto L6b
            com.bianfeng.seppellita.db.DBManager r1 = r5.dbManager     // Catch: java.lang.Throwable -> L6d
            com.bianfeng.seppellita.manager.EventBeanManager r2 = r5.eventBeanManager     // Catch: java.lang.Throwable -> L6d
            com.bianfeng.seppellita.bean.DataBean r6 = r2.buildDataBean(r6)     // Catch: java.lang.Throwable -> L6d
            r1.add(r6)     // Catch: java.lang.Throwable -> L6d
        L6b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6d
            goto L7b
        L6d:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6d
            throw r6     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L70
        L70:
            r6 = move-exception
            r6.printStackTrace()
            java.lang.String r6 = "Ymnsdk"
            java.lang.String r0 = "上抛隐私数据异常"
            android.util.Log.e(r6, r0)
        L7b:
            return
    }

    public void postYmnId(java.lang.String r6) {
            r5 = this;
            java.lang.String r0 = "postYmnId"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "act"
            java.lang.String r2 = "push"
            r0.put(r1, r2)
            java.lang.String r1 = "pg"
            java.lang.String r2 = "P1109"
            r0.put(r1, r2)
            java.lang.String r1 = "blk"
            java.lang.String r2 = "BHF001"
            r0.put(r1, r2)
            java.lang.String r1 = "bl"
            java.lang.String r2 = "获取唯一码"
            r0.put(r1, r2)
            java.lang.String r1 = "label"
            java.lang.String r2 = "同意"
            r0.put(r1, r2)
            java.lang.String r1 = com.bianfeng.seppellita.utils.DeviceUtils.createYmnDeviceId()
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            java.lang.String r3 = "ymn_user_id"
            r2.put(r3, r1)
            android.content.Context r4 = r5.context
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.init(r4)
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r3, r1)     // Catch: java.lang.Exception -> L44
            goto L48
        L44:
            r1 = move-exception
            r1.printStackTrace()
        L48:
            if (r6 != 0) goto L4c
            java.lang.String r6 = ""
        L4c:
            java.lang.String r1 = "channel_id"
            r2.put(r1, r6)
            java.lang.String r6 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r2)
            java.lang.String r1 = "cust"
            r0.put(r1, r6)
            java.util.HashMap r6 = new java.util.HashMap
            r6.<init>()
            java.lang.String r1 = "id"
            java.lang.String r2 = "2089"
            r6.put(r1, r2)
            java.lang.String r6 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r6)
            java.lang.String r1 = "extended"
            r0.put(r1, r6)
            com.bianfeng.seppellita.SepperllitaSdk r6 = getInstance()
            java.lang.String r1 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r0)
            r6.post(r1)
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r0)
            r6.add(r0)
            r6 = 1
            r5.isPostImmediately = r6
            r5.select()
            return
    }
}
