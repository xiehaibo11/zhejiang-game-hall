package com.huawei.hms.framework.common.hianalytics;

public class HianalyticsHelper {
    private static final java.lang.String EVENT_ID = "networkkit_restclient";
    private static final java.lang.String HWID_HA_SERVICE_TAG = "hms_hwid";
    private static final java.lang.String TAG = "HianalyticsHelper";
    private static final int TYPE_MAINTF = 1;
    private static final java.lang.String USER_EXPERIENCE_INVOLVED = "user_experience_involved";
    private static final int USER_EXPERIENCE_ON = 1;
    private static volatile com.huawei.hms.framework.common.hianalytics.HianalyticsHelper instance;
    private com.huawei.hianalytics.process.HiAnalyticsInstance hInstance;
    private java.lang.String haTag;
    private boolean hasHianalytics;
    private java.util.concurrent.ExecutorService reportExecutor;


    private HianalyticsHelper() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "hms_hwid"
            r2.haTag = r0
            r0 = 0
            r2.hInstance = r0
            java.lang.String r0 = "report_ha"
            java.util.concurrent.ExecutorService r0 = com.huawei.hms.framework.common.ExecutorsUtils.newSingleThreadExecutor(r0)
            r2.reportExecutor = r0
            com.huawei.hianalytics.v2.HiAnalytics.getInitFlag()     // Catch: java.lang.Throwable -> L19
            r0 = 1
            r2.hasHianalytics = r0     // Catch: java.lang.Throwable -> L19
            goto L23
        L19:
            java.lang.String r0 = "HianalyticsHelper"
            java.lang.String r1 = "maybe you need add Hianalytics sdk"
            com.huawei.hms.framework.common.Logger.w(r0, r1)
            r0 = 0
            r2.hasHianalytics = r0
        L23:
            return
    }

    public static com.huawei.hms.framework.common.hianalytics.HianalyticsHelper getInstance() {
            com.huawei.hms.framework.common.hianalytics.HianalyticsHelper r0 = com.huawei.hms.framework.common.hianalytics.HianalyticsHelper.instance
            if (r0 != 0) goto L17
            java.lang.Class<com.huawei.hms.framework.common.hianalytics.HianalyticsHelper> r0 = com.huawei.hms.framework.common.hianalytics.HianalyticsHelper.class
            monitor-enter(r0)
            com.huawei.hms.framework.common.hianalytics.HianalyticsHelper r1 = com.huawei.hms.framework.common.hianalytics.HianalyticsHelper.instance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.huawei.hms.framework.common.hianalytics.HianalyticsHelper r1 = new com.huawei.hms.framework.common.hianalytics.HianalyticsHelper     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.huawei.hms.framework.common.hianalytics.HianalyticsHelper.instance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.huawei.hms.framework.common.hianalytics.HianalyticsHelper r0 = com.huawei.hms.framework.common.hianalytics.HianalyticsHelper.instance
            return r0
    }

    public java.util.concurrent.ExecutorService getReportExecutor() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.reportExecutor
            return r0
    }

    public boolean isEnableReport(android.content.Context r2) {
            r1 = this;
            boolean r0 = r1.hasHianalytics
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            boolean r2 = r1.isEnableReportNoSeed(r2)
            return r2
    }

    public boolean isEnableReportNoSeed(android.content.Context r5) {
            r4 = this;
            boolean r0 = r4.hasHianalytics
            java.lang.String r1 = "HianalyticsHelper"
            r2 = 0
            if (r0 != 0) goto Ld
            java.lang.String r5 = "Hianalytics sdk need to be initialized"
        L9:
            com.huawei.hms.framework.common.Logger.i(r1, r5)
            return r2
        Ld:
            if (r5 != 0) goto L12
            java.lang.String r5 = "HianalyticsHelper context can't be null"
            goto L9
        L12:
            android.content.ContentResolver r5 = r5.getContentResolver()
            r0 = -1
            java.lang.String r3 = "user_experience_involved"
            int r5 = android.provider.Settings.Secure.getInt(r5, r3, r0)
            r0 = 1
            if (r5 != r0) goto L39
            boolean r5 = com.huawei.hianalytics.v2.HiAnalytics.getInitFlag()
            if (r5 == 0) goto L27
            return r0
        L27:
            com.huawei.hianalytics.process.HiAnalyticsInstance r5 = r4.hInstance
            if (r5 != 0) goto L33
            java.lang.String r5 = r4.haTag
            com.huawei.hianalytics.process.HiAnalyticsInstance r5 = com.huawei.hianalytics.process.HiAnalyticsManager.getInstanceByTag(r5)
            r4.hInstance = r5
        L33:
            com.huawei.hianalytics.process.HiAnalyticsInstance r5 = r4.hInstance
            if (r5 == 0) goto L38
            r2 = r0
        L38:
            return r2
        L39:
            java.lang.String r5 = "user experience involved needs to be opened"
            goto L9
    }

    public void onEvent(java.util.LinkedHashMap<java.lang.String, java.lang.String> r2) {
            r1 = this;
            java.lang.String r0 = "networkkit_restclient"
            r1.onEvent(r2, r0)
            return
    }

    public void onEvent(java.util.LinkedHashMap<java.lang.String, java.lang.String> r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = r4.hasHianalytics
            if (r0 != 0) goto L5
            return
        L5:
            if (r5 != 0) goto L8
            return
        L8:
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]
            r2 = 0
            r1[r2] = r5
            java.lang.String r2 = "HianalyticsHelper"
            java.lang.String r3 = "data = %s"
            com.huawei.hms.framework.common.Logger.v(r2, r3, r1)
            boolean r1 = com.huawei.hianalytics.v2.HiAnalytics.getInitFlag()
            if (r1 == 0) goto L1f
            com.huawei.hianalytics.v2.HiAnalytics.onEvent(r0, r6, r5)
            goto L26
        L1f:
            com.huawei.hianalytics.process.HiAnalyticsInstance r1 = r4.hInstance
            if (r1 == 0) goto L26
            r1.onEvent(r0, r6, r5)
        L26:
            return
    }

    public void reportException(java.lang.Throwable r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "HianalyticsHelper"
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            java.lang.String r1 = r1.getName()
            java.util.concurrent.ExecutorService r2 = r4.reportExecutor     // Catch: java.lang.Exception -> L15 java.util.concurrent.RejectedExecutionException -> L21
            com.huawei.hms.framework.common.hianalytics.HianalyticsHelper$1 r3 = new com.huawei.hms.framework.common.hianalytics.HianalyticsHelper$1     // Catch: java.lang.Exception -> L15 java.util.concurrent.RejectedExecutionException -> L21
            r3.<init>(r4, r1, r5, r6)     // Catch: java.lang.Exception -> L15 java.util.concurrent.RejectedExecutionException -> L21
            r2.submit(r3)     // Catch: java.lang.Exception -> L15 java.util.concurrent.RejectedExecutionException -> L21
            goto L26
        L15:
            r6 = 1
            java.lang.Object[] r6 = new java.lang.Object[r6]
            r1 = 0
            r6[r1] = r5
            java.lang.String r5 = "reportException error!"
            com.huawei.hms.framework.common.Logger.i(r0, r5, r6)
            goto L26
        L21:
            java.lang.String r5 = "reportException error RejectedExecutionException"
            com.huawei.hms.framework.common.Logger.i(r0, r5)
        L26:
            return
    }

    public void setHaTag(java.lang.String r1) {
            r0 = this;
            r0.haTag = r1
            return
    }
}
