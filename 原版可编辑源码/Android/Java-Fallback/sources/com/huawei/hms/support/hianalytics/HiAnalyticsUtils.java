package com.huawei.hms.support.hianalytics;

public class HiAnalyticsUtils {
    public static final java.lang.Object c = null;
    public static final java.lang.Object d = null;
    public static com.huawei.hms.support.hianalytics.HiAnalyticsUtils e;
    public int a;
    public boolean b;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.support.hianalytics.HiAnalyticsUtils.c = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.support.hianalytics.HiAnalyticsUtils.d = r0
            return
    }

    public HiAnalyticsUtils() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            boolean r0 = com.huawei.hms.stats.c.a()
            r1.b = r0
            return
    }

    public static java.util.LinkedHashMap<java.lang.String, java.lang.String> a(java.util.Map<java.lang.String, java.lang.String> r4) {
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.util.Set r1 = r4.keySet()
            java.util.Iterator r1 = r1.iterator()
        Ld:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L21
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r4.get(r2)
            r0.put(r2, r3)
            goto Ld
        L21:
            return r0
    }

    public static com.huawei.hms.support.hianalytics.HiAnalyticsUtils getInstance() {
            java.lang.Object r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtils.c
            monitor-enter(r0)
            com.huawei.hms.support.hianalytics.HiAnalyticsUtils r1 = com.huawei.hms.support.hianalytics.HiAnalyticsUtils.e     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.huawei.hms.support.hianalytics.HiAnalyticsUtils r1 = new com.huawei.hms.support.hianalytics.HiAnalyticsUtils     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.huawei.hms.support.hianalytics.HiAnalyticsUtils.e = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.huawei.hms.support.hianalytics.HiAnalyticsUtils r1 = com.huawei.hms.support.hianalytics.HiAnalyticsUtils.e     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r1
    }

    public static java.lang.String versionCodeToName(java.lang.String r5) {
            java.lang.String r0 = "."
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r2 = ""
            if (r1 != 0) goto L81
            int r1 = r5.length()
            r3 = 8
            if (r1 == r3) goto L1a
            int r1 = r5.length()
            r3 = 9
            if (r1 != r3) goto L81
        L1a:
            java.lang.Integer.parseInt(r5)     // Catch: java.lang.NumberFormatException -> L81
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.NumberFormatException -> L81
            r1.<init>()     // Catch: java.lang.NumberFormatException -> L81
            r3 = 0
            int r4 = r5.length()     // Catch: java.lang.NumberFormatException -> L81
            int r4 = r4 + (-7)
            java.lang.String r3 = r5.substring(r3, r4)     // Catch: java.lang.NumberFormatException -> L81
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.NumberFormatException -> L81
            r1.append(r3)     // Catch: java.lang.NumberFormatException -> L81
            r1.append(r0)     // Catch: java.lang.NumberFormatException -> L81
            int r3 = r5.length()     // Catch: java.lang.NumberFormatException -> L81
            int r3 = r3 + (-7)
            int r4 = r5.length()     // Catch: java.lang.NumberFormatException -> L81
            int r4 = r4 + (-5)
            java.lang.String r3 = r5.substring(r3, r4)     // Catch: java.lang.NumberFormatException -> L81
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.NumberFormatException -> L81
            r1.append(r3)     // Catch: java.lang.NumberFormatException -> L81
            r1.append(r0)     // Catch: java.lang.NumberFormatException -> L81
            int r3 = r5.length()     // Catch: java.lang.NumberFormatException -> L81
            int r3 = r3 + (-5)
            int r4 = r5.length()     // Catch: java.lang.NumberFormatException -> L81
            int r4 = r4 + (-3)
            java.lang.String r3 = r5.substring(r3, r4)     // Catch: java.lang.NumberFormatException -> L81
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.NumberFormatException -> L81
            r1.append(r3)     // Catch: java.lang.NumberFormatException -> L81
            r1.append(r0)     // Catch: java.lang.NumberFormatException -> L81
            int r0 = r5.length()     // Catch: java.lang.NumberFormatException -> L81
            int r0 = r0 + (-3)
            java.lang.String r5 = r5.substring(r0)     // Catch: java.lang.NumberFormatException -> L81
            int r5 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.NumberFormatException -> L81
            r1.append(r5)     // Catch: java.lang.NumberFormatException -> L81
            java.lang.String r5 = r1.toString()     // Catch: java.lang.NumberFormatException -> L81
            return r5
        L81:
            return r2
    }

    public final void a(android.content.Context r5) {
            r4 = this;
            java.lang.Object r0 = com.huawei.hms.support.hianalytics.HiAnalyticsUtils.d
            monitor-enter(r0)
            int r1 = r4.a     // Catch: java.lang.Throwable -> L23
            r2 = 60
            r3 = 1
            if (r1 >= r2) goto L10
            int r5 = r4.a     // Catch: java.lang.Throwable -> L23
            int r5 = r5 + r3
            r4.a = r5     // Catch: java.lang.Throwable -> L23
            goto L21
        L10:
            r1 = 0
            r4.a = r1     // Catch: java.lang.Throwable -> L23
            boolean r2 = r4.b     // Catch: java.lang.Throwable -> L23
            if (r2 != 0) goto L1b
            com.huawei.hms.hatool.HmsHiAnalyticsUtils.onReport()     // Catch: java.lang.Throwable -> L23
            goto L21
        L1b:
            com.huawei.hms.stats.b.a(r5, r1)     // Catch: java.lang.Throwable -> L23
            com.huawei.hms.stats.b.a(r5, r3)     // Catch: java.lang.Throwable -> L23
        L21:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
            return
        L23:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
            throw r5
    }

    public void enableLog() {
            r2 = this;
            java.lang.String r0 = "HiAnalyticsUtils"
            java.lang.String r1 = "Enable Log"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            boolean r1 = r2.b
            if (r1 != 0) goto Lf
            com.huawei.hms.hatool.HmsHiAnalyticsUtils.enableLog()
            goto L14
        Lf:
            java.lang.String r1 = "cp needs to pass in the context, this method is not supported"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
        L14:
            return
    }

    public void enableLog(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = "HiAnalyticsUtils"
            java.lang.String r1 = "Enable Log"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            boolean r0 = r2.b
            if (r0 != 0) goto Lf
            com.huawei.hms.hatool.HmsHiAnalyticsUtils.enableLog()
            goto L12
        Lf:
            com.huawei.hianalytics.util.HiAnalyticTools.enableLog(r3)
        L12:
            return
    }

    public boolean getInitFlag() {
            r1 = this;
            boolean r0 = r1.b
            if (r0 != 0) goto L9
            boolean r0 = com.huawei.hms.hatool.HmsHiAnalyticsUtils.getInitFlag()
            return r0
        L9:
            java.lang.String r0 = "hms_config_tag"
            boolean r0 = com.huawei.hianalytics.process.HiAnalyticsManager.getInitFlag(r0)
            return r0
    }

    public boolean hasError(android.content.Context r1) {
            r0 = this;
            boolean r1 = com.huawei.hms.stats.a.c(r1)
            return r1
    }

    public void onBuoyEvent(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            boolean r0 = r1.hasError(r2)
            if (r0 == 0) goto L7
            return
        L7:
            if (r2 == 0) goto Lc
            r1.onEvent2(r2, r3, r4)
        Lc:
            return
    }

    public void onEvent(android.content.Context r4, java.lang.String r5, java.util.Map<java.lang.String, java.lang.String> r6) {
            r3 = this;
            boolean r0 = r3.hasError(r4)
            if (r0 == 0) goto L7
            return
        L7:
            if (r6 == 0) goto L3e
            boolean r0 = r6.isEmpty()
            if (r0 != 0) goto L3e
            if (r4 == 0) goto L3e
            boolean r0 = r3.getInitFlag()
            if (r0 != 0) goto L18
            goto L3e
        L18:
            boolean r0 = r3.b
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L2d
            java.util.LinkedHashMap r0 = a(r6)
            com.huawei.hms.hatool.HmsHiAnalyticsUtils.onEvent(r2, r5, r0)
            java.util.LinkedHashMap r6 = a(r6)
            com.huawei.hms.hatool.HmsHiAnalyticsUtils.onEvent(r1, r5, r6)
            goto L3b
        L2d:
            java.util.LinkedHashMap r0 = a(r6)
            com.huawei.hms.stats.b.a(r4, r2, r5, r0)
            java.util.LinkedHashMap r6 = a(r6)
            com.huawei.hms.stats.b.a(r4, r1, r5, r6)
        L3b:
            r3.a(r4)
        L3e:
            return
    }

    public void onEvent2(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            boolean r0 = r1.hasError(r2)
            if (r0 == 0) goto L7
            return
        L7:
            if (r2 == 0) goto L1b
            boolean r0 = r1.getInitFlag()
            if (r0 != 0) goto L10
            goto L1b
        L10:
            boolean r0 = r1.b
            if (r0 != 0) goto L18
            com.huawei.hms.hatool.HmsHiAnalyticsUtils.onEvent(r2, r3, r4)
            goto L1b
        L18:
            com.huawei.hms.stats.b.a(r2, r3, r4)
        L1b:
            return
    }

    public void onNewEvent(android.content.Context r4, java.lang.String r5, java.util.Map r6) {
            r3 = this;
            boolean r0 = r3.hasError(r4)
            if (r0 == 0) goto L7
            return
        L7:
            if (r6 == 0) goto L3e
            boolean r0 = r6.isEmpty()
            if (r0 != 0) goto L3e
            if (r4 == 0) goto L3e
            boolean r0 = r3.getInitFlag()
            if (r0 != 0) goto L18
            goto L3e
        L18:
            boolean r0 = r3.b
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L2d
            java.util.LinkedHashMap r0 = a(r6)
            com.huawei.hms.hatool.HmsHiAnalyticsUtils.onEvent(r2, r5, r0)
            java.util.LinkedHashMap r6 = a(r6)
            com.huawei.hms.hatool.HmsHiAnalyticsUtils.onEvent(r1, r5, r6)
            goto L3b
        L2d:
            java.util.LinkedHashMap r0 = a(r6)
            com.huawei.hms.stats.b.a(r4, r2, r5, r0)
            java.util.LinkedHashMap r6 = a(r6)
            com.huawei.hms.stats.b.a(r4, r1, r5, r6)
        L3b:
            r3.a(r4)
        L3e:
            return
    }

    public void onNewEvent(android.content.Context r2, java.lang.String r3, java.util.Map r4, int r5) {
            r1 = this;
            boolean r0 = r1.hasError(r2)
            if (r0 == 0) goto L7
            return
        L7:
            if (r5 == 0) goto L14
            r0 = 1
            if (r5 == r0) goto L14
            java.lang.String r2 = "HiAnalyticsUtils"
            java.lang.String r3 = "Data reporting type is not supported"
            com.huawei.hms.support.log.HMSLog.e(r2, r3)
            return
        L14:
            if (r4 == 0) goto L3b
            boolean r0 = r4.isEmpty()
            if (r0 != 0) goto L3b
            if (r2 == 0) goto L3b
            boolean r0 = r1.getInitFlag()
            if (r0 != 0) goto L25
            goto L3b
        L25:
            boolean r0 = r1.b
            if (r0 != 0) goto L31
            java.util.LinkedHashMap r4 = a(r4)
            com.huawei.hms.hatool.HmsHiAnalyticsUtils.onEvent(r5, r3, r4)
            goto L38
        L31:
            java.util.LinkedHashMap r4 = a(r4)
            com.huawei.hms.stats.b.a(r2, r5, r3, r4)
        L38:
            r1.a(r2)
        L3b:
            return
    }

    public void onReport(android.content.Context r4, java.lang.String r5, java.util.Map r6) {
            r3 = this;
            boolean r0 = r3.hasError(r4)
            if (r0 == 0) goto L7
            return
        L7:
            if (r6 == 0) goto L44
            boolean r0 = r6.isEmpty()
            if (r0 != 0) goto L44
            if (r4 == 0) goto L44
            boolean r0 = r3.getInitFlag()
            if (r0 != 0) goto L18
            goto L44
        L18:
            boolean r0 = r3.b
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L30
            java.util.LinkedHashMap r4 = a(r6)
            com.huawei.hms.hatool.HmsHiAnalyticsUtils.onEvent(r2, r5, r4)
            java.util.LinkedHashMap r4 = a(r6)
            com.huawei.hms.hatool.HmsHiAnalyticsUtils.onEvent(r1, r5, r4)
            com.huawei.hms.hatool.HmsHiAnalyticsUtils.onReport()
            goto L44
        L30:
            java.util.LinkedHashMap r0 = a(r6)
            com.huawei.hms.stats.b.a(r4, r2, r5, r0)
            java.util.LinkedHashMap r6 = a(r6)
            com.huawei.hms.stats.b.a(r4, r1, r5, r6)
            com.huawei.hms.stats.b.a(r4, r2)
            com.huawei.hms.stats.b.a(r4, r1)
        L44:
            return
    }

    public void onReport(android.content.Context r2, java.lang.String r3, java.util.Map r4, int r5) {
            r1 = this;
            boolean r0 = r1.hasError(r2)
            if (r0 == 0) goto L7
            return
        L7:
            if (r5 == 0) goto L14
            r0 = 1
            if (r5 == r0) goto L14
            java.lang.String r2 = "HiAnalyticsUtils"
            java.lang.String r3 = "Data reporting type is not supported"
            com.huawei.hms.support.log.HMSLog.e(r2, r3)
            return
        L14:
            if (r4 == 0) goto L3e
            boolean r0 = r4.isEmpty()
            if (r0 != 0) goto L3e
            if (r2 == 0) goto L3e
            boolean r0 = r1.getInitFlag()
            if (r0 != 0) goto L25
            goto L3e
        L25:
            boolean r0 = r1.b
            if (r0 != 0) goto L34
            java.util.LinkedHashMap r2 = a(r4)
            com.huawei.hms.hatool.HmsHiAnalyticsUtils.onEvent(r5, r3, r2)
            com.huawei.hms.hatool.HmsHiAnalyticsUtils.onReport()
            goto L3e
        L34:
            java.util.LinkedHashMap r4 = a(r4)
            com.huawei.hms.stats.b.a(r2, r5, r3, r4)
            com.huawei.hms.stats.b.a(r2, r5)
        L3e:
            return
    }
}
