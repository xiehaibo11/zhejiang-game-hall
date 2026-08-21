package com.huawei.hms.utils;

public class HMSBIInitializer {
    public static final java.lang.Object d = null;
    public static com.huawei.hms.utils.HMSBIInitializer e;
    public static com.huawei.hianalytics.process.HiAnalyticsInstance f;
    public final android.content.Context a;
    public java.util.concurrent.atomic.AtomicBoolean b;
    public boolean c;

    public class a implements com.huawei.hms.framework.network.grs.IQueryUrlCallBack {
        public final com.huawei.hms.utils.HMSBIInitializer a;

        public a(com.huawei.hms.utils.HMSBIInitializer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onCallBackFail(int r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "get grs failed, the errorcode is "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r0 = "HMSBIInitializer"
                com.huawei.hms.support.log.HMSLog.e(r0, r3)
                com.huawei.hms.utils.HMSBIInitializer r3 = r2.a
                java.util.concurrent.atomic.AtomicBoolean r3 = com.huawei.hms.utils.HMSBIInitializer.c(r3)
                r0 = 0
                r3.set(r0)
                return
        }

        @Override
        public void onCallBackSuccess(java.lang.String r9) {
                r8 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r9)
                r1 = 0
                if (r0 != 0) goto L7d
                com.huawei.hms.utils.HMSBIInitializer r0 = r8.a
                boolean r0 = com.huawei.hms.utils.HMSBIInitializer.a(r0)
                if (r0 != 0) goto L1f
                com.huawei.hms.utils.HMSBIInitializer r0 = r8.a
                android.content.Context r2 = com.huawei.hms.utils.HMSBIInitializer.b(r0)
                r3 = 0
                r4 = 0
                r5 = 0
                java.lang.String r7 = "com.huawei.hwid"
                r6 = r9
                com.huawei.hms.hatool.HmsHiAnalyticsUtils.init(r2, r3, r4, r5, r6, r7)
                goto L76
            L1f:
                com.huawei.hianalytics.process.HiAnalyticsConfig$Builder r0 = new com.huawei.hianalytics.process.HiAnalyticsConfig$Builder
                r0.<init>()
                com.huawei.hianalytics.process.HiAnalyticsConfig$Builder r0 = r0.setEnableImei(r1)
                com.huawei.hianalytics.process.HiAnalyticsConfig$Builder r0 = r0.setEnableUDID(r1)
                com.huawei.hianalytics.process.HiAnalyticsConfig$Builder r0 = r0.setEnableSN(r1)
                com.huawei.hianalytics.process.HiAnalyticsConfig$Builder r0 = r0.setCollectURL(r9)
                com.huawei.hianalytics.process.HiAnalyticsConfig r0 = r0.build()
                com.huawei.hianalytics.process.HiAnalyticsConfig$Builder r2 = new com.huawei.hianalytics.process.HiAnalyticsConfig$Builder
                r2.<init>()
                com.huawei.hianalytics.process.HiAnalyticsConfig$Builder r2 = r2.setEnableImei(r1)
                com.huawei.hianalytics.process.HiAnalyticsConfig$Builder r2 = r2.setEnableUDID(r1)
                com.huawei.hianalytics.process.HiAnalyticsConfig$Builder r2 = r2.setEnableSN(r1)
                com.huawei.hianalytics.process.HiAnalyticsConfig$Builder r9 = r2.setCollectURL(r9)
                com.huawei.hianalytics.process.HiAnalyticsConfig r9 = r9.build()
                com.huawei.hianalytics.process.HiAnalyticsInstance$Builder r2 = new com.huawei.hianalytics.process.HiAnalyticsInstance$Builder
                com.huawei.hms.utils.HMSBIInitializer r3 = r8.a
                android.content.Context r3 = com.huawei.hms.utils.HMSBIInitializer.b(r3)
                r2.<init>(r3)
                com.huawei.hianalytics.process.HiAnalyticsInstance$Builder r0 = r2.setOperConf(r0)
                com.huawei.hianalytics.process.HiAnalyticsInstance$Builder r9 = r0.setMaintConf(r9)
                java.lang.String r0 = "hms_config_tag"
                com.huawei.hianalytics.process.HiAnalyticsInstance r9 = r9.create(r0)
                com.huawei.hms.utils.HMSBIInitializer.a(r9)
                com.huawei.hianalytics.process.HiAnalyticsInstance r9 = com.huawei.hms.utils.HMSBIInitializer.a()
                java.lang.String r0 = "com.huawei.hwid"
                r9.setAppid(r0)
            L76:
                java.lang.String r9 = "HMSBIInitializer"
                java.lang.String r0 = "BI URL acquired successfully"
                com.huawei.hms.support.log.HMSLog.i(r9, r0)
            L7d:
                com.huawei.hms.utils.HMSBIInitializer r9 = r8.a
                java.util.concurrent.atomic.AtomicBoolean r9 = com.huawei.hms.utils.HMSBIInitializer.c(r9)
                r9.set(r1)
                return
        }
    }

    public class b extends android.os.AsyncTask<java.lang.String, java.lang.Integer, java.lang.Void> {
        public final com.huawei.hms.utils.HMSBIInitializer a;

        public b(com.huawei.hms.utils.HMSBIInitializer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        public b(com.huawei.hms.utils.HMSBIInitializer r1, com.huawei.hms.utils.HMSBIInitializer.a r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public java.lang.Void a(java.lang.String... r3) {
                r2 = this;
                com.huawei.hms.utils.HMSBIInitializer r0 = r2.a
                r1 = 0
                r3 = r3[r1]
                com.huawei.hms.utils.HMSBIInitializer.a(r0, r3)
                r3 = 0
                return r3
        }

        @Override
        public java.lang.Void doInBackground(java.lang.String[] r1) {
                r0 = this;
                java.lang.String[] r1 = (java.lang.String[]) r1
                java.lang.Void r1 = r0.a(r1)
                return r1
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.utils.HMSBIInitializer.d = r0
            return
    }

    public HMSBIInitializer(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.b = r0
            r2.a = r3
            boolean r3 = com.huawei.hms.stats.c.a()
            r2.c = r3
            return
    }

    public static com.huawei.hianalytics.process.HiAnalyticsInstance a() {
            com.huawei.hianalytics.process.HiAnalyticsInstance r0 = com.huawei.hms.utils.HMSBIInitializer.f
            return r0
    }

    public static com.huawei.hianalytics.process.HiAnalyticsInstance a(com.huawei.hianalytics.process.HiAnalyticsInstance r0) {
            com.huawei.hms.utils.HMSBIInitializer.f = r0
            return r0
    }

    public static void a(com.huawei.hms.utils.HMSBIInitializer r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    public static boolean a(com.huawei.hms.utils.HMSBIInitializer r0) {
            boolean r0 = r0.c
            return r0
    }

    public static android.content.Context b(com.huawei.hms.utils.HMSBIInitializer r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    public static java.util.concurrent.atomic.AtomicBoolean c(com.huawei.hms.utils.HMSBIInitializer r0) {
            java.util.concurrent.atomic.AtomicBoolean r0 = r0.b
            return r0
    }

    public static com.huawei.hms.utils.HMSBIInitializer getInstance(android.content.Context r2) {
            java.lang.Object r0 = com.huawei.hms.utils.HMSBIInitializer.d
            monitor-enter(r0)
            com.huawei.hms.utils.HMSBIInitializer r1 = com.huawei.hms.utils.HMSBIInitializer.e     // Catch: java.lang.Throwable -> L20
            if (r1 != 0) goto L1c
            android.content.Context r1 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L20
            if (r1 == 0) goto L15
            com.huawei.hms.utils.HMSBIInitializer r2 = new com.huawei.hms.utils.HMSBIInitializer     // Catch: java.lang.Throwable -> L20
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L20
            com.huawei.hms.utils.HMSBIInitializer.e = r2     // Catch: java.lang.Throwable -> L20
            goto L1c
        L15:
            com.huawei.hms.utils.HMSBIInitializer r1 = new com.huawei.hms.utils.HMSBIInitializer     // Catch: java.lang.Throwable -> L20
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L20
            com.huawei.hms.utils.HMSBIInitializer.e = r1     // Catch: java.lang.Throwable -> L20
        L1c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            com.huawei.hms.utils.HMSBIInitializer r2 = com.huawei.hms.utils.HMSBIInitializer.e
            return r2
        L20:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            throw r2
    }

    public final void a(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "HMSBIInitializer"
            java.lang.String r1 = "Start to query GRS"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = new com.huawei.hms.framework.network.grs.GrsBaseInfo
            r0.<init>()
            r0.setIssueCountry(r4)
            com.huawei.hms.framework.network.grs.GrsClient r4 = new com.huawei.hms.framework.network.grs.GrsClient
            android.content.Context r1 = r3.a
            r4.<init>(r1, r0)
            com.huawei.hms.utils.HMSBIInitializer$a r0 = new com.huawei.hms.utils.HMSBIInitializer$a
            r0.<init>(r3)
            java.lang.String r1 = "com.huawei.cloud.opensdkhianalytics"
            java.lang.String r2 = "ROOT"
            r4.ayncGetGrsUrl(r1, r2, r0)
            return
    }

    public com.huawei.hianalytics.process.HiAnalyticsInstance getAnalyticsInstance() {
            r1 = this;
            com.huawei.hianalytics.process.HiAnalyticsInstance r0 = com.huawei.hms.utils.HMSBIInitializer.f
            return r0
    }

    public void initBI() {
            r5 = this;
            boolean r0 = r5.c
            if (r0 != 0) goto L9
            boolean r0 = com.huawei.hms.hatool.HmsHiAnalyticsUtils.getInitFlag()
            goto Lf
        L9:
            java.lang.String r0 = "hms_config_tag"
            boolean r0 = com.huawei.hianalytics.process.HiAnalyticsManager.getInitFlag(r0)
        Lf:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Builder->biInitFlag :"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "HMSBIInitializer"
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
            if (r0 == 0) goto L28
            return
        L28:
            android.content.Context r0 = r5.a
            boolean r0 = com.huawei.hms.stats.a.c(r0)
            if (r0 == 0) goto L31
            return
        L31:
            java.util.concurrent.atomic.AtomicBoolean r0 = r5.b
            r1 = 1
            r3 = 0
            boolean r0 = r0.compareAndSet(r3, r1)
            if (r0 == 0) goto L78
            com.huawei.hms.framework.network.grs.GrsApp r0 = com.huawei.hms.framework.network.grs.GrsApp.getInstance()
            android.content.Context r4 = r5.a
            java.lang.String r0 = r0.getIssueCountryCode(r4)
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            if (r4 != 0) goto L51
            java.util.Locale r4 = java.util.Locale.ENGLISH
            java.lang.String r0 = r0.toUpperCase(r4)
        L51:
            java.lang.String r4 = "UNKNOWN"
            boolean r4 = r4.equalsIgnoreCase(r0)
            if (r4 != 0) goto L6e
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            if (r4 == 0) goto L60
            goto L6e
        L60:
            com.huawei.hms.utils.HMSBIInitializer$b r2 = new com.huawei.hms.utils.HMSBIInitializer$b
            r4 = 0
            r2.<init>(r5, r4)
            java.lang.String[] r1 = new java.lang.String[r1]
            r1[r3] = r0
            r2.execute(r1)
            goto L78
        L6e:
            java.lang.String r0 = "Failed to get device issue country"
            com.huawei.hms.support.log.HMSLog.e(r2, r0)
            java.util.concurrent.atomic.AtomicBoolean r0 = r5.b
            r0.set(r3)
        L78:
            return
    }

    public boolean isInit() {
            r1 = this;
            boolean r0 = r1.c
            if (r0 != 0) goto L9
            boolean r0 = com.huawei.hms.hatool.HmsHiAnalyticsUtils.getInitFlag()
            return r0
        L9:
            java.lang.String r0 = "hms_config_tag"
            boolean r0 = com.huawei.hianalytics.process.HiAnalyticsManager.getInitFlag(r0)
            return r0
    }
}
