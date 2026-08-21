package com.alipay.android.app.helper;

public class TidHelper extends com.alipay.sdk.tid.TidHelper {
    public TidHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void clearTID(android.content.Context r0) {
            com.alipay.sdk.tid.TidHelper.clearTID(r0)
            return
    }

    public static java.lang.String getIMEI(android.content.Context r0) {
            java.lang.String r0 = com.alipay.sdk.tid.TidHelper.getIMEI(r0)
            return r0
    }

    public static java.lang.String getIMSI(android.content.Context r0) {
            java.lang.String r0 = com.alipay.sdk.tid.TidHelper.getIMSI(r0)
            return r0
    }

    public static synchronized java.lang.String getTIDValue(android.content.Context r1) {
            java.lang.Class<com.alipay.android.app.helper.TidHelper> r0 = com.alipay.android.app.helper.TidHelper.class
            monitor-enter(r0)
            java.lang.String r1 = com.alipay.sdk.tid.TidHelper.getTIDValue(r1)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r0)
            return r1
        L9:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static java.lang.String getVirtualImei(android.content.Context r0) {
            java.lang.String r0 = com.alipay.sdk.tid.TidHelper.getVirtualImei(r0)
            return r0
    }

    public static java.lang.String getVirtualImsi(android.content.Context r0) {
            java.lang.String r0 = com.alipay.sdk.tid.TidHelper.getVirtualImsi(r0)
            return r0
    }

    public static com.alipay.android.app.helper.Tid loadLocalTid(android.content.Context r0) {
            com.alipay.sdk.tid.Tid r0 = com.alipay.sdk.tid.TidHelper.loadLocalTid(r0)
            com.alipay.android.app.helper.Tid r0 = com.alipay.android.app.helper.Tid.fromRealTidModel(r0)
            return r0
    }

    public static synchronized com.alipay.android.app.helper.Tid loadOrCreateTID(android.content.Context r1) {
            java.lang.Class<com.alipay.android.app.helper.TidHelper> r0 = com.alipay.android.app.helper.TidHelper.class
            monitor-enter(r0)
            com.alipay.sdk.tid.Tid r1 = com.alipay.sdk.tid.TidHelper.loadOrCreateTID(r1)     // Catch: java.lang.Throwable -> Ld
            com.alipay.android.app.helper.Tid r1 = com.alipay.android.app.helper.Tid.fromRealTidModel(r1)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)
            return r1
        Ld:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static com.alipay.android.app.helper.Tid loadTID(android.content.Context r0) {
            com.alipay.sdk.tid.Tid r0 = com.alipay.sdk.tid.TidHelper.loadTID(r0)
            com.alipay.android.app.helper.Tid r0 = com.alipay.android.app.helper.Tid.fromRealTidModel(r0)
            return r0
    }

    public static boolean resetTID(android.content.Context r0) throws java.lang.Exception {
            boolean r0 = com.alipay.sdk.tid.TidHelper.resetTID(r0)
            return r0
    }
}
