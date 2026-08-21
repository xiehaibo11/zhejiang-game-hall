package com.huawei.hms.support.hianalytics;

public class HiAnalyticsUtil {
    private static final java.lang.Object a = null;
    private static com.huawei.hms.support.hianalytics.HiAnalyticsUtil b;
    private static com.huawei.hms.support.hianalytics.HiAnalyticsUtils c;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil.a = r0
            return
    }

    public HiAnalyticsUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String a(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = r4.getPackageName()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "01|"
            r1.append(r2)
            java.lang.String r2 = ""
            r1.append(r2)
            java.lang.String r2 = "|"
            r1.append(r2)
            r1.append(r0)
            r1.append(r2)
            java.lang.String r4 = com.huawei.hms.utils.Util.getAppId(r4)
            r1.append(r4)
            r1.append(r2)
            r4 = 50300301(0x2ff858d, float:3.7545537E-37)
            r1.append(r4)
            r1.append(r2)
            r1.append(r5)
            java.lang.String r4 = r1.toString()
            return r4
    }

    public static com.huawei.hms.support.hianalytics.HiAnalyticsUtil getInstance() {
            java.lang.Object r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.a
            monitor-enter(r0)
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r1 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.b     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L14
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r1 = new com.huawei.hms.support.hianalytics.HiAnalyticsUtil     // Catch: java.lang.Throwable -> L18
            r1.<init>()     // Catch: java.lang.Throwable -> L18
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil.b = r1     // Catch: java.lang.Throwable -> L18
            com.huawei.hms.support.hianalytics.HiAnalyticsUtils r1 = com.huawei.hms.support.hianalytics.HiAnalyticsUtils.getInstance()     // Catch: java.lang.Throwable -> L18
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil.c = r1     // Catch: java.lang.Throwable -> L18
        L14:
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r1 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.b     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            return r1
        L18:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r1
    }

    public static java.util.Map<java.lang.String, java.lang.String> getMapFromForegroundResponseHeader(com.huawei.hms.common.internal.ResponseHeader r3) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r3 != 0) goto L8
            return r0
        L8:
            java.lang.String r1 = r3.getTransactionId()
            java.lang.String r2 = "transId"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getActualAppID()
            java.lang.String r2 = "appid"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getSrvName()
            java.lang.String r2 = "service"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getApiName()
            java.lang.String r2 = "apiName"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getPkgName()
            java.lang.String r2 = "package"
            r0.put(r2, r1)
            int r1 = r3.getStatusCode()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "statusCode"
            r0.put(r2, r1)
            int r1 = r3.getErrorCode()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "result"
            r0.put(r2, r1)
            java.lang.String r3 = r3.getErrorReason()
            java.lang.String r1 = "errorReason"
            r0.put(r1, r3)
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.String r3 = java.lang.String.valueOf(r1)
            java.lang.String r1 = "callTime"
            r0.put(r1, r3)
            java.lang.String r3 = "baseVersion"
            java.lang.String r1 = "5.3.0.301"
            r0.put(r3, r1)
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> getMapFromRequestHeader(com.huawei.hms.common.internal.ResponseHeader r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r4 != 0) goto L8
            return r0
        L8:
            java.lang.String r1 = r4.getTransactionId()
            java.lang.String r2 = "transId"
            r0.put(r2, r1)
            java.lang.String r1 = r4.getActualAppID()
            java.lang.String r2 = "appid"
            r0.put(r2, r1)
            java.lang.String r1 = r4.getSrvName()
            java.lang.String r2 = "service"
            r0.put(r2, r1)
            java.lang.String r1 = r4.getApiName()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L3f
            java.lang.String r2 = "\\."
            java.lang.String[] r1 = r1.split(r2)
            int r2 = r1.length
            r3 = 2
            if (r2 < r3) goto L3f
            r2 = 1
            r1 = r1[r2]
            java.lang.String r2 = "apiName"
            r0.put(r2, r1)
        L3f:
            java.lang.String r1 = r4.getPkgName()
            java.lang.String r2 = "package"
            r0.put(r2, r1)
            int r1 = r4.getStatusCode()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "statusCode"
            r0.put(r2, r1)
            int r1 = r4.getErrorCode()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "result"
            r0.put(r2, r1)
            java.lang.String r4 = r4.getErrorReason()
            java.lang.String r1 = "errorReason"
            r0.put(r1, r4)
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.String r4 = java.lang.String.valueOf(r1)
            java.lang.String r1 = "callTime"
            r0.put(r1, r4)
            java.lang.String r4 = "baseVersion"
            java.lang.String r1 = "5.3.0.301"
            r0.put(r4, r1)
            return r0
    }

    public static java.lang.String versionCodeToName(java.lang.String r0) {
            java.lang.String r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtils.versionCodeToName(r0)
            return r0
    }

    @java.lang.Deprecated
    public java.util.Map<java.lang.String, java.lang.String> getMapForBi(android.content.Context r6, java.lang.String r7) {
            r5 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "\\."
            java.lang.String[] r1 = r7.split(r1)
            int r2 = r1.length
            r3 = 2
            if (r2 < r3) goto L4e
            r2 = 0
            r2 = r1[r2]
            r3 = 1
            r1 = r1[r3]
            java.lang.String r3 = com.huawei.hms.utils.Util.getAppId(r6)
            java.lang.String r7 = com.huawei.hms.common.internal.TransactionIdCreater.getId(r3, r7)
            java.lang.String r4 = "transId"
            r0.put(r4, r7)
            java.lang.String r7 = "appid"
            r0.put(r7, r3)
            java.lang.String r7 = "service"
            r0.put(r7, r2)
            java.lang.String r7 = "apiName"
            r0.put(r7, r1)
            java.lang.String r6 = r6.getPackageName()
            java.lang.String r7 = "package"
            r0.put(r7, r6)
            java.lang.String r6 = "version"
            java.lang.String r7 = "5.3.0.301"
            r0.put(r6, r7)
            long r6 = java.lang.System.currentTimeMillis()
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.String r7 = "callTime"
            r0.put(r7, r6)
        L4e:
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getMapFromForegroundRequestHeader(com.huawei.hms.common.internal.RequestHeader r4) {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r4 != 0) goto L8
            return r0
        L8:
            java.lang.String r1 = r4.getTransactionId()
            java.lang.String r2 = "transId"
            r0.put(r2, r1)
            java.lang.String r1 = r4.getActualAppID()
            java.lang.String r2 = "appid"
            r0.put(r2, r1)
            java.lang.String r1 = r4.getSrvName()
            java.lang.String r2 = "service"
            r0.put(r2, r1)
            java.lang.String r1 = r4.getApiName()
            java.lang.String r2 = "apiName"
            r0.put(r2, r1)
            java.lang.String r4 = r4.getPkgName()
            java.lang.String r1 = "package"
            r0.put(r1, r4)
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.String r4 = java.lang.String.valueOf(r1)
            java.lang.String r1 = "callTime"
            r0.put(r1, r4)
            java.lang.String r4 = "baseVersion"
            java.lang.String r1 = "5.3.0.301"
            r0.put(r4, r1)
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getMapFromRequestHeader(com.huawei.hms.common.internal.RequestHeader r5) {
            r4 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r5 != 0) goto L8
            return r0
        L8:
            java.lang.String r1 = r5.getTransactionId()
            java.lang.String r2 = "transId"
            r0.put(r2, r1)
            java.lang.String r1 = r5.getActualAppID()
            java.lang.String r2 = "appid"
            r0.put(r2, r1)
            java.lang.String r1 = r5.getSrvName()
            java.lang.String r2 = "service"
            r0.put(r2, r1)
            java.lang.String r1 = r5.getApiName()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L3f
            java.lang.String r2 = "\\."
            java.lang.String[] r1 = r1.split(r2)
            int r2 = r1.length
            r3 = 2
            if (r2 < r3) goto L3f
            r2 = 1
            r1 = r1[r2]
            java.lang.String r2 = "apiName"
            r0.put(r2, r1)
        L3f:
            java.lang.String r5 = r5.getPkgName()
            java.lang.String r1 = "package"
            r0.put(r1, r5)
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.String r5 = java.lang.String.valueOf(r1)
            java.lang.String r1 = "callTime"
            r0.put(r1, r5)
            java.lang.String r5 = "baseVersion"
            java.lang.String r1 = "5.3.0.301"
            r0.put(r5, r1)
            return r0
    }

    @java.lang.Deprecated
    public boolean hasError() {
            r2 = this;
            boolean r0 = com.huawei.hms.android.SystemUtils.isChinaROM()
            if (r0 != 0) goto Lf
            java.lang.String r0 = "HiAnalyticsUtil"
            java.lang.String r1 = "not ChinaROM "
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            r0 = 1
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public boolean hasError(android.content.Context r2) {
            r1 = this;
            com.huawei.hms.support.hianalytics.HiAnalyticsUtils r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.c
            boolean r2 = r0.hasError(r2)
            return r2
    }

    public void onBuoyEvent(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.huawei.hms.support.hianalytics.HiAnalyticsUtils r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.c
            r0.onBuoyEvent(r2, r3, r4)
            return
    }

    public void onEvent(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            if (r1 == 0) goto L9
            java.lang.String r3 = r0.a(r1, r3)
            r0.onEvent2(r1, r2, r3)
        L9:
            return
    }

    public void onEvent(android.content.Context r2, java.lang.String r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            r1 = this;
            com.huawei.hms.support.hianalytics.HiAnalyticsUtils r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.c
            r0.onEvent(r2, r3, r4)
            return
    }

    public void onEvent2(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.huawei.hms.support.hianalytics.HiAnalyticsUtils r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.c
            r0.onEvent2(r2, r3, r4)
            return
    }

    public void onNewEvent(android.content.Context r2, java.lang.String r3, java.util.Map r4) {
            r1 = this;
            com.huawei.hms.support.hianalytics.HiAnalyticsUtils r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.c
            r0.onNewEvent(r2, r3, r4)
            return
    }
}
