package com.bianfeng.trackingio;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class TrackingIOInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper {
    public static final java.lang.String ASSET_FILE_NAME_CERT = ".cert.pem";
    private final java.lang.String FUNCTION_SET_APP_DURATION;
    private final java.lang.String FUNCTION_SET_CLICK;
    private final java.lang.String FUNCTION_SET_EVENT;
    private final java.lang.String FUNCTION_SET_LOGINSUCCESSBUSINESS;
    private final java.lang.String FUNCTION_SET_ORDER;
    private final java.lang.String FUNCTION_SET_PAGE_DURATION;
    private final java.lang.String FUNCTION_SET_PAYMENT;
    private final java.lang.String FUNCTION_SET_PAYMENTSTART;

    @java.lang.Deprecated
    private final java.lang.String FUNCTION_SET_PROFILE;
    private final java.lang.String FUNCTION_SET_REGISTERWITHACCOUNTID;
    private final java.lang.String FUNCTION_SET_SHOW;
    private final java.lang.String TAG;
    private final java.lang.String TRACKINGIO_ACCOUNTID;
    private final java.lang.String TRACKINGIO_AD_PLATFORM;
    private final java.lang.String TRACKINGIO_APP_DURATION;
    private final java.lang.String TRACKINGIO_APP_PAGE_DURATION;
    private final java.lang.String TRACKINGIO_APP_PAGE_NAME;
    private final java.lang.String TRACKINGIO_CURRENCYAMOUNT;
    private final java.lang.String TRACKINGIO_CURRENCYTYPE;
    private final java.lang.String TRACKINGIO_EVENTNAME;
    private final java.lang.String TRACKINGIO_PAYMENTTYPE;
    private final java.lang.String TRACKINGIO_TRANSACTIONID;
    private final java.lang.String TRACKINGIO_adId;
    private final java.lang.String TRACKINGIO_fill;
    private boolean isInit;

    public TrackingIOInterface() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "TrackingIOInterface : "
            r2.TAG = r0
            java.lang.String r0 = "trackingio_set_registerwithaccountid"
            r2.FUNCTION_SET_REGISTERWITHACCOUNTID = r0
            java.lang.String r0 = "trackingio_set_loginsuccessbusiness"
            r2.FUNCTION_SET_LOGINSUCCESSBUSINESS = r0
            java.lang.String r0 = "trackingio_set_paymentstart"
            r2.FUNCTION_SET_PAYMENTSTART = r0
            java.lang.String r0 = "trackingio_set_payment"
            r2.FUNCTION_SET_PAYMENT = r0
            java.lang.String r0 = "trackingio_set_event"
            r2.FUNCTION_SET_EVENT = r0
            java.lang.String r0 = "trackingio_set_profile"
            r2.FUNCTION_SET_PROFILE = r0
            java.lang.String r0 = "trackingio_set_order"
            r2.FUNCTION_SET_ORDER = r0
            java.lang.String r0 = "trackingio_set_show"
            r2.FUNCTION_SET_SHOW = r0
            java.lang.String r0 = "trackingio_set_click"
            r2.FUNCTION_SET_CLICK = r0
            java.lang.String r0 = "trackingio_set_app_duration"
            r2.FUNCTION_SET_APP_DURATION = r0
            java.lang.String r0 = "trackingio_set_page_duration"
            r2.FUNCTION_SET_PAGE_DURATION = r0
            java.lang.String r0 = "accountId"
            r2.TRACKINGIO_ACCOUNTID = r0
            java.lang.String r0 = "transactionId"
            r2.TRACKINGIO_TRANSACTIONID = r0
            java.lang.String r0 = "paymentType"
            r2.TRACKINGIO_PAYMENTTYPE = r0
            java.lang.String r0 = "currencyType"
            r2.TRACKINGIO_CURRENCYTYPE = r0
            java.lang.String r0 = "currencyAmount"
            r2.TRACKINGIO_CURRENCYAMOUNT = r0
            java.lang.String r0 = "eventName"
            r2.TRACKINGIO_EVENTNAME = r0
            java.lang.String r0 = "adPlatform"
            r2.TRACKINGIO_AD_PLATFORM = r0
            java.lang.String r0 = "adId"
            r2.TRACKINGIO_adId = r0
            java.lang.String r0 = "fill"
            r2.TRACKINGIO_fill = r0
            java.lang.String r0 = "duration"
            r2.TRACKINGIO_APP_DURATION = r0
            java.lang.String r1 = "app_page_name"
            r2.TRACKINGIO_APP_PAGE_NAME = r1
            r2.TRACKINGIO_APP_PAGE_DURATION = r0
            r0 = 0
            r2.isInit = r0
            return
    }

    private float getCurrencyAmount(java.util.LinkedHashMap<java.lang.String, java.lang.String> r2) {
            r1 = this;
            java.lang.String r0 = "currencyAmount"
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L13
            float r2 = java.lang.Float.parseFloat(r2)
            goto L14
        L13:
            r2 = 0
        L14:
            return r2
    }

    private java.util.Map<java.lang.String, java.lang.Object> getExtraMap(java.util.LinkedHashMap<java.lang.String, java.lang.String> r4) {
            r3 = this;
            java.lang.String r0 = "extra"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getExtraMap: map : "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "TrackingIOInterface : "
            com.bianfeng.ymnsdk.util.Logger.d(r1, r4)
            java.util.Map r4 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.getMapFrom(r0)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L23
            return r4
        L23:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "getExtraMap ERROR: "
            r0.append(r2)
            java.lang.String r2 = r4.getMessage()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r1, r0)
            r4.printStackTrace()
            r4 = 0
            return r4
    }

    private com.reyun.tracking.sdk.InitParameters getInitParameters() {
            r2 = this;
            com.reyun.tracking.sdk.InitParameters r0 = new com.reyun.tracking.sdk.InitParameters
            r0.<init>()
            java.lang.String r1 = "trackingio_appkey"
            java.lang.String r1 = r2.getPropertie(r1)
            r0.appKey = r1
            java.lang.String r1 = com.bianfeng.platform.executor.AppConfig.getChannelId()
            r0.channelId = r1
            return r0
    }

    public long getLongTime(java.util.LinkedHashMap<java.lang.String, java.lang.String> r1, java.lang.String r2) {
            r0 = this;
            java.lang.Object r1 = r1.get(r2)
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto Lf
            r1 = 0
            return r1
        Lf:
            long r1 = java.lang.Long.parseLong(r1)
            return r1
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = "31"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "trackingio"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 12
            return r0
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "1.9.5"
            return r0
    }

    @Override
    public void onDestroy() {
            r2 = this;
            super.onDestroy()
            java.lang.String r0 = "TrackingIOInterface : "
            java.lang.String r1 = "onDestroy"
            com.bianfeng.ymnsdk.util.Logger.d(r0, r1)
            com.reyun.tracking.sdk.Tracking.exitSdk()
            return
    }

    @Override
    public void onInit(android.content.Context r2) {
            r1 = this;
            super.onInit(r2)
            boolean r2 = r1.isInit
            if (r2 != 0) goto L35
            java.lang.String r2 = "TrackingIOInterface : "
            java.lang.String r0 = " into onInit"
            com.bianfeng.ymnsdk.util.Logger.d(r2, r0)
            android.content.Context r2 = r1.getContext()
            android.content.Context r2 = r2.getApplicationContext()
            android.app.Application r2 = (android.app.Application) r2
            java.lang.String r0 = "trackingio_appkey"
            java.lang.String r0 = r1.getPropertie(r0)
            com.reyun.tracking.sdk.Tracking.preInit(r2, r0)
            android.content.Context r2 = r1.getContext()
            android.content.Context r2 = r2.getApplicationContext()
            android.app.Application r2 = (android.app.Application) r2
            com.reyun.tracking.sdk.InitParameters r0 = r1.getInitParameters()
            com.reyun.tracking.sdk.Tracking.initWithKeyAndChannelId(r2, r0)
            r2 = 1
            r1.isInit = r2
        L35:
            return
    }

    @Override
    public void onRequestPermissionsResult(int r1, java.lang.String[] r2, int[] r3) {
            r0 = this;
            super.onRequestPermissionsResult(r1, r2, r3)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "onRequestPermissionsResult: request code : "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "TrackingIOInterface : "
            com.bianfeng.ymnsdk.util.Logger.d(r2, r1)
            android.content.Context r1 = r0.getContext()
            android.content.Context r1 = r1.getApplicationContext()
            android.app.Application r1 = (android.app.Application) r1
            com.reyun.tracking.sdk.InitParameters r2 = r0.getInitParameters()
            com.reyun.tracking.sdk.Tracking.initWithKeyAndChannelId(r1, r2)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "trackingio_set_click")
    public void setAdClick(java.util.LinkedHashMap<java.lang.String, java.lang.String> r3) {
            r2 = this;
            java.lang.String r0 = "adPlatform"
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "adId"
            java.lang.Object r1 = r3.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            java.util.Map r3 = r2.getExtraMap(r3)
            com.reyun.tracking.sdk.Tracking.setAdClick(r0, r1, r3)
            java.lang.String r3 = "TrackingIOInterface : "
            java.lang.String r0 = "call functiontrackingio_set_click"
            com.bianfeng.ymnsdk.util.Logger.d(r3, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "trackingio_set_show")
    public void setAdShow(java.util.LinkedHashMap<java.lang.String, java.lang.String> r4) {
            r3 = this;
            java.lang.String r0 = "adPlatform"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "adId"
            java.lang.Object r1 = r4.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "fill"
            java.lang.Object r2 = r4.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            java.util.Map r4 = r3.getExtraMap(r4)
            com.reyun.tracking.sdk.Tracking.setAdShow(r0, r1, r2, r4)
            java.lang.String r4 = "TrackingIOInterface : "
            java.lang.String r0 = "call functiontrackingio_set_show"
            com.bianfeng.ymnsdk.util.Logger.d(r4, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "trackingio_set_app_duration")
    public void setAppDuration(java.util.LinkedHashMap<java.lang.String, java.lang.String> r3) {
            r2 = this;
            java.lang.String r0 = "duration"
            long r0 = r2.getLongTime(r3, r0)
            java.util.Map r3 = r2.getExtraMap(r3)
            com.reyun.tracking.sdk.Tracking.setAppDuration(r0, r3)
            java.lang.String r3 = "TrackingIOInterface : "
            java.lang.String r0 = "call functiontrackingio_set_app_duration"
            com.bianfeng.ymnsdk.util.Logger.d(r3, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "trackingio_set_event")
    public void setEvent(java.util.LinkedHashMap<java.lang.String, java.lang.String> r2) {
            r1 = this;
            java.lang.String r0 = "eventName"
            java.lang.Object r0 = r2.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.util.Map r2 = r1.getExtraMap(r2)
            com.reyun.tracking.sdk.Tracking.setEvent(r0, r2)
            java.lang.String r2 = "TrackingIOInterface : "
            java.lang.String r0 = "call function trackingio_set_event"
            com.bianfeng.ymnsdk.util.Logger.d(r2, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "trackingio_set_loginsuccessbusiness")
    public void setLoginSuccessBusiness(java.util.LinkedHashMap<java.lang.String, java.lang.String> r2) {
            r1 = this;
            java.lang.String r0 = "accountId"
            java.lang.Object r0 = r2.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.util.Map r2 = r1.getExtraMap(r2)
            com.reyun.tracking.sdk.Tracking.setLoginSuccessBusiness(r0, r2)
            java.lang.String r2 = "TrackingIOInterface : "
            java.lang.String r0 = "call functiontrackingio_set_loginsuccessbusiness"
            com.bianfeng.ymnsdk.util.Logger.d(r2, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "trackingio_set_order")
    public void setOrder(java.util.LinkedHashMap<java.lang.String, java.lang.String> r4) {
            r3 = this;
            java.lang.String r0 = "transactionId"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "currencyType"
            java.lang.Object r1 = r4.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            float r2 = r3.getCurrencyAmount(r4)
            java.util.Map r4 = r3.getExtraMap(r4)
            com.reyun.tracking.sdk.Tracking.setOrder(r0, r1, r2, r4)
            java.lang.String r4 = "TrackingIOInterface : "
            java.lang.String r0 = "call functiontrackingio_set_order"
            com.bianfeng.ymnsdk.util.Logger.d(r4, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "trackingio_set_page_duration")
    public void setPageDuration(java.util.LinkedHashMap<java.lang.String, java.lang.String> r6) {
            r5 = this;
            java.lang.String r0 = "app_page_name"
            java.lang.Object r0 = r6.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "TrackingIOInterface : "
            if (r1 == 0) goto L25
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = "setPageDuration: activityName不合法："
            r6.append(r1)
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r2, r6)
            return
        L25:
            java.lang.String r1 = "duration"
            long r3 = r5.getLongTime(r6, r1)
            java.util.Map r6 = r5.getExtraMap(r6)
            com.reyun.tracking.sdk.Tracking.setPageDuration(r0, r3, r6)
            java.lang.String r6 = "call functiontrackingio_set_page_duration"
            com.bianfeng.ymnsdk.util.Logger.d(r2, r6)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "trackingio_set_payment")
    public void setPayment(java.util.LinkedHashMap<java.lang.String, java.lang.String> r5) {
            r4 = this;
            java.lang.String r0 = "transactionId"
            java.lang.Object r0 = r5.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "paymentType"
            java.lang.Object r1 = r5.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "currencyType"
            java.lang.Object r2 = r5.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            float r3 = r4.getCurrencyAmount(r5)
            java.util.Map r5 = r4.getExtraMap(r5)
            com.reyun.tracking.sdk.Tracking.setPayment(r0, r1, r2, r3, r5)
            java.lang.String r5 = "TrackingIOInterface : "
            java.lang.String r0 = "call function trackingio_set_payment"
            com.bianfeng.ymnsdk.util.Logger.d(r5, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "trackingio_set_paymentstart")
    @java.lang.Deprecated
    public void setPaymentStart(java.util.LinkedHashMap<java.lang.String, java.lang.String> r2) {
            r1 = this;
            r1.setPayment(r2)
            java.lang.String r2 = "TrackingIOInterface : "
            java.lang.String r0 = "call function trackingio_set_paymentstart"
            com.bianfeng.ymnsdk.util.Logger.d(r2, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "trackingio_set_profile")
    @java.lang.Deprecated
    public void setProfile(java.util.LinkedHashMap<java.lang.String, java.lang.String> r2) {
            r1 = this;
            java.lang.String r2 = "TrackingIOInterface : "
            java.lang.String r0 = "call functiontrackingio_set_profile"
            com.bianfeng.ymnsdk.util.Logger.d(r2, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "trackingio_set_registerwithaccountid")
    public void setRegisterWithAccountid(java.util.LinkedHashMap<java.lang.String, java.lang.String> r2) {
            r1 = this;
            java.lang.String r0 = "accountId"
            java.lang.Object r0 = r2.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.util.Map r2 = r1.getExtraMap(r2)
            com.reyun.tracking.sdk.Tracking.setRegisterWithAccountID(r0, r2)
            java.lang.String r2 = "TrackingIOInterface : "
            java.lang.String r0 = "call function trackingio_set_registerwithaccountid"
            com.bianfeng.ymnsdk.util.Logger.d(r2, r0)
            return
    }
}
