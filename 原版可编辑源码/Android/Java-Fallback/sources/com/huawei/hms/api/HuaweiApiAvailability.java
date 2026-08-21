package com.huawei.hms.api;

public abstract class HuaweiApiAvailability {
    public static final java.lang.String ACTIVITY_NAME = "com.huawei.hms.core.activity.JumpActivity";
    public static final java.lang.String APPID_HMS = "C10132067";
    public static final java.lang.String APPID_HMS_TV = "C100636709";
    public static final java.lang.String HMS_API_NAME_GAME = "HuaweiGame.API";
    public static final java.lang.String HMS_API_NAME_IAP = "HuaweiIap.API";
    public static final java.lang.String HMS_API_NAME_ID = "HuaweiID.API";
    public static final java.lang.String HMS_API_NAME_OD = "HuaweiOpenDevice.API";
    public static final java.lang.String HMS_API_NAME_PAY = "HuaweiPay.API";
    public static final java.lang.String HMS_API_NAME_PPS = "HuaweiPPSkit.API";
    public static final java.lang.String HMS_API_NAME_PUSH = "HuaweiPush.API";
    public static final java.lang.String HMS_API_NAME_SNS = "HuaweiSns.API";
    public static final int HMS_JSON_VERSION_MIN = 30000000;
    public static final int HMS_SDK_VERSION_CODE = 50300301;
    public static final java.lang.String HMS_SDK_VERSION_NAME = "5.3.0.301";
    public static final int HMS_VERSION_CODE_GAME = 20503000;
    public static final int HMS_VERSION_CODE_IAP = 20700300;
    public static final int HMS_VERSION_CODE_ID = 30000000;
    public static final int HMS_VERSION_CODE_MIN = 20503000;
    public static final int HMS_VERSION_CODE_OD = 20601000;
    public static final int HMS_VERSION_CODE_PAY = 20503000;
    public static final int HMS_VERSION_CODE_PPS = 20700300;
    public static final int HMS_VERSION_CODE_PUSH = 20503000;
    public static final int HMS_VERSION_CODE_SNS = 20503000;
    public static final int HMS_VERSION_MAX = 20600000;
    public static final int HMS_VERSION_MIN = 20503000;
    public static final int NOTICE_VERSION_CODE = 20600000;
    public static final java.lang.String SERVICES_ACTION = "com.huawei.hms.core.aidlservice";

    @java.lang.Deprecated
    public static final java.lang.String SERVICES_PACKAGE = "com.huawei.hwid";

    @java.lang.Deprecated
    public static final java.lang.String SERVICES_PACKAGE_TV = "com.huawei.hwid.tv";

    @java.lang.Deprecated
    public static final java.lang.String SERVICES_SIGNATURE = "B92825C2BD5D6D6D1E7F39EECD17843B7D9016F611136B75441BC6F4D3F00F05";

    @java.lang.Deprecated
    public static final java.lang.String SERVICES_SIGNATURE_CAR = "3517262215D8D3008CBF888750B6418EDC4D562AC33ED6874E0D73ABA667BC3C";

    @java.lang.Deprecated
    public static final java.lang.String SERVICES_SIGNATURE_TV = "3517262215D8D3008CBF888750B6418EDC4D562AC33ED6874E0D73ABA667BC3C";
    public static int SERVICES_VERSION_CODE = 30000100;
    private static final java.util.Map<java.lang.String, java.lang.Integer> a = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.huawei.hms.api.HuaweiApiAvailability.a = r0
            r1 = 30000000(0x1c9c380, float:7.411627E-38)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "HuaweiID.API"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.huawei.hms.api.HuaweiApiAvailability.a
            r1 = 20503000(0x138d9d8, float:3.3951758E-38)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "HuaweiSns.API"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.huawei.hms.api.HuaweiApiAvailability.a
            java.lang.String r2 = "HuaweiPay.API"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.huawei.hms.api.HuaweiApiAvailability.a
            java.lang.String r2 = "HuaweiPush.API"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.huawei.hms.api.HuaweiApiAvailability.a
            java.lang.String r2 = "HuaweiGame.API"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.huawei.hms.api.HuaweiApiAvailability.a
            r1 = 20601000(0x13a58a8, float:3.4226412E-38)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "HuaweiOpenDevice.API"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.huawei.hms.api.HuaweiApiAvailability.a
            r1 = 20700300(0x13bdc8c, float:3.450471E-38)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "HuaweiIap.API"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.huawei.hms.api.HuaweiApiAvailability.a
            java.lang.String r2 = "HuaweiPPSkit.API"
            r0.put(r2, r1)
            return
    }

    public HuaweiApiAvailability() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.Map<java.lang.String, java.lang.Integer> getApiMap() {
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.huawei.hms.api.HuaweiApiAvailability.a
            return r0
    }

    public static com.huawei.hms.api.HuaweiApiAvailability getInstance() {
            com.huawei.hms.api.b r0 = com.huawei.hms.api.b.getInstance()
            return r0
    }

    public static int getServicesVersionCode() {
            int r0 = com.huawei.hms.api.HuaweiApiAvailability.SERVICES_VERSION_CODE
            return r0
    }

    public static void setServicesVersionCode(int r0) {
            com.huawei.hms.api.HuaweiApiAvailability.SERVICES_VERSION_CODE = r0
            return
    }

    public abstract com.huawei.hmf.tasks.Task<java.lang.Void> checkApiAccessible(com.huawei.hms.common.HuaweiApi<?> r1, com.huawei.hms.common.HuaweiApi<?>... r2);

    public abstract com.huawei.hmf.tasks.Task<java.lang.Void> checkApiAccessible(com.huawei.hms.common.api.HuaweiApiCallable r1, com.huawei.hms.common.api.HuaweiApiCallable... r2);

    public abstract android.app.PendingIntent getErrPendingIntent(android.content.Context r1, int r2, int r3);

    public abstract android.app.PendingIntent getErrPendingIntent(android.content.Context r1, com.huawei.hms.api.ConnectionResult r2);

    public abstract android.app.Dialog getErrorDialog(android.app.Activity r1, int r2, int r3);

    public abstract android.app.Dialog getErrorDialog(android.app.Activity r1, int r2, int r3, android.content.DialogInterface.OnCancelListener r4);

    public abstract java.lang.String getErrorString(int r1);

    public abstract com.huawei.hmf.tasks.Task<java.lang.Void> getHuaweiServicesReady(android.app.Activity r1);

    public abstract android.content.Intent getResolveErrorIntent(android.app.Activity r1, int r2);

    public abstract android.app.PendingIntent getResolveErrorPendingIntent(android.app.Activity r1, int r2);

    public abstract int isHuaweiMobileNoticeAvailable(android.content.Context r1);

    public abstract int isHuaweiMobileServicesAvailable(android.content.Context r1);

    public abstract int isHuaweiMobileServicesAvailable(android.content.Context r1, int r2);

    public abstract boolean isUserResolvableError(int r1);

    public abstract boolean isUserResolvableError(int r1, android.app.PendingIntent r2);

    public abstract void popupErrNotification(android.content.Context r1, com.huawei.hms.api.ConnectionResult r2);

    public abstract void resolveError(android.app.Activity r1, int r2, int r3);

    public abstract void resolveError(android.app.Activity r1, int r2, int r3, android.app.PendingIntent r4);

    public abstract boolean showErrorDialogFragment(android.app.Activity r1, int r2, int r3);

    public abstract boolean showErrorDialogFragment(android.app.Activity r1, int r2, int r3, android.content.DialogInterface.OnCancelListener r4);

    public abstract boolean showErrorDialogFragment(android.app.Activity r1, int r2, android.app.Fragment r3, int r4, android.content.DialogInterface.OnCancelListener r5);

    public abstract void showErrorNotification(android.content.Context r1, int r2);
}
