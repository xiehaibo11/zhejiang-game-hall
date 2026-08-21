package com.kwad.sdk.core.report;

public final class KSLoggerReporter {
    private static float arb = -1.0f;
    private static double arc = -1.0d;
    private static boolean ard;
    private static volatile boolean are;
    private static java.util.List<com.kwai.adclient.kscommerciallogger.model.c> arf;
    private static com.kwad.sdk.core.report.KSLoggerReporter.a arg;
    private static final java.util.concurrent.atomic.AtomicBoolean sHasInit = null;




    public enum ReportClient extends java.lang.Enum<com.kwad.sdk.core.report.KSLoggerReporter.ReportClient> {
        private static final com.kwad.sdk.core.report.KSLoggerReporter.ReportClient[] $VALUES = null;
        public static final com.kwad.sdk.core.report.KSLoggerReporter.ReportClient CONVERT_DPLINK = null;
        public static final com.kwad.sdk.core.report.KSLoggerReporter.ReportClient CONVERT_H5WEB = null;
        public static final com.kwad.sdk.core.report.KSLoggerReporter.ReportClient CORE_CONVERT = null;
        public static final com.kwad.sdk.core.report.KSLoggerReporter.ReportClient RESPONE_MONITOR = null;
        private java.lang.String mCategory;
        private java.lang.String mEventId;
        private com.kwad.sdk.core.report.KSLoggerReporter.b.a mSubIniter;


        static {
                com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r0 = new com.kwad.sdk.core.report.KSLoggerReporter$ReportClient
                r1 = 0
                java.lang.String r2 = "ad_client_apm_log"
                java.lang.String r3 = "CORE_CONVERT"
                java.lang.String r4 = "ad_convert_method_call"
                r0.<init>(r3, r1, r2, r4)
                com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT = r0
                com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r0 = new com.kwad.sdk.core.report.KSLoggerReporter$ReportClient
                r3 = 1
                java.lang.String r4 = "CONVERT_H5WEB"
                java.lang.String r5 = "ad_h5convert_method"
                r0.<init>(r4, r3, r2, r5)
                com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CONVERT_H5WEB = r0
                com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r0 = new com.kwad.sdk.core.report.KSLoggerReporter$ReportClient
                r4 = 2
                java.lang.String r5 = "CONVERT_DPLINK"
                java.lang.String r6 = "ad_dplink_convert_method"
                r0.<init>(r5, r4, r2, r6)
                com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CONVERT_DPLINK = r0
                com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r0 = new com.kwad.sdk.core.report.KSLoggerReporter$ReportClient
                com.kwad.sdk.core.report.KSLoggerReporter$ReportClient$1 r2 = new com.kwad.sdk.core.report.KSLoggerReporter$ReportClient$1
                r2.<init>()
                r5 = 3
                java.lang.String r6 = "RESPONE_MONITOR"
                r0.<init>(r6, r5, r2)
                com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.RESPONE_MONITOR = r0
                r2 = 4
                com.kwad.sdk.core.report.KSLoggerReporter$ReportClient[] r2 = new com.kwad.sdk.core.report.KSLoggerReporter.ReportClient[r2]
                com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r6 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
                r2[r1] = r6
                com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r1 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CONVERT_H5WEB
                r2[r3] = r1
                com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r1 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CONVERT_DPLINK
                r2[r4] = r1
                r2[r5] = r0
                com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.$VALUES = r2
                return
        }

        ReportClient(java.lang.String r1, int r2, com.kwad.sdk.core.report.KSLoggerReporter.b.a r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.mSubIniter = r3
                return
        }

        ReportClient(java.lang.String r1, int r2, java.lang.String r3, java.lang.String r4) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.mCategory = r3
                r0.mEventId = r4
                return
        }

        public static com.kwad.sdk.core.report.KSLoggerReporter.ReportClient valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.core.report.KSLoggerReporter$ReportClient> r0 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r1 = (com.kwad.sdk.core.report.KSLoggerReporter.ReportClient) r1
                return r1
        }

        public static com.kwad.sdk.core.report.KSLoggerReporter.ReportClient[] values() {
                com.kwad.sdk.core.report.KSLoggerReporter$ReportClient[] r0 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.core.report.KSLoggerReporter$ReportClient[] r0 = (com.kwad.sdk.core.report.KSLoggerReporter.ReportClient[]) r0
                return r0
        }

        public final com.kwad.sdk.core.report.KSLoggerReporter.b buildMethodCheck(com.kwai.adclient.kscommerciallogger.model.BusinessType r4, java.lang.String r5) {
                r3 = this;
                com.kwad.sdk.core.report.KSLoggerReporter$b r0 = new com.kwad.sdk.core.report.KSLoggerReporter$b
                java.lang.String r1 = r3.mCategory
                java.lang.String r2 = r3.mEventId
                r0.<init>(r1, r2, r4)
                java.lang.String r4 = "method_name"
                com.kwad.sdk.core.report.KSLoggerReporter$b r4 = r0.c(r4, r5)
                return r4
        }

        public final com.kwad.sdk.core.report.KSLoggerReporter.b buildNormalApmReporter() {
                r2 = this;
                com.kwad.sdk.core.report.KSLoggerReporter$b r0 = new com.kwad.sdk.core.report.KSLoggerReporter$b
                com.kwad.sdk.core.report.KSLoggerReporter$b$a r1 = r2.mSubIniter
                r0.<init>(r1)
                return r0
        }
    }

    public interface a {
        void j(java.lang.String r1, java.lang.String r2, boolean r3);

        boolean xl();

        org.json.JSONObject xm();
    }

    public static class b {
        private org.json.JSONObject ari;
        private com.kwai.adclient.kscommerciallogger.model.BusinessType arj;
        private com.kwad.sdk.core.report.KSLoggerReporter.b.a ark;
        private java.lang.String mCategory;
        private java.lang.String mEventId;
        private java.lang.String mTag;

        interface a {
            void a(com.kwad.sdk.core.report.KSLoggerReporter.b r1);
        }

        b(com.kwad.sdk.core.report.KSLoggerReporter.b.a r2) {
                r1 = this;
                r1.<init>()
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                r1.ari = r0
                r1.ark = r2
                return
        }

        b(java.lang.String r2, java.lang.String r3, com.kwai.adclient.kscommerciallogger.model.BusinessType r4) {
                r1 = this;
                r1.<init>()
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                r1.ari = r0
                r1.arj = r4
                r1.mCategory = r2
                r1.mEventId = r3
                return
        }

        public final com.kwad.sdk.core.report.KSLoggerReporter.b W(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                java.lang.String r0 = "error_name"
                r1.c(r0, r2)
                java.lang.String r2 = "error_data"
                r1.c(r2, r3)
                return r1
        }

        public final com.kwad.sdk.core.report.KSLoggerReporter.b a(com.kwai.adclient.kscommerciallogger.model.BusinessType r1) {
                r0 = this;
                r0.arj = r1
                return r0
        }

        public final com.kwad.sdk.core.report.KSLoggerReporter.b aK(com.kwad.sdk.core.response.model.AdTemplate r6) {
                r5 = this;
                long r0 = com.kwad.sdk.core.response.b.d.cq(r6)
                long r2 = com.kwad.sdk.core.response.b.d.cd(r6)
                com.kwad.sdk.internal.api.SceneImpl r4 = r6.mAdScene
                if (r4 == 0) goto L18
                com.kwad.sdk.internal.api.SceneImpl r6 = r6.mAdScene
                int r6 = r6.getAdStyle()
                com.kwai.adclient.kscommerciallogger.model.BusinessType r6 = com.kwad.sdk.core.report.KSLoggerReporter.cs(r6)
                r5.arj = r6
            L18:
                java.lang.Long r6 = java.lang.Long.valueOf(r0)
                java.lang.String r0 = "creative_id"
                r5.c(r0, r6)
                java.lang.Long r6 = java.lang.Long.valueOf(r2)
                java.lang.String r0 = "llsid"
                r5.c(r0, r6)
                return r5
        }

        public final com.kwad.sdk.core.report.KSLoggerReporter.b be(boolean r2) {
                r1 = this;
                java.lang.Boolean r2 = java.lang.Boolean.TRUE
                java.lang.String r0 = "is_api_native"
                com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r1.c(r0, r2)
                return r2
        }

        public final com.kwad.sdk.core.report.KSLoggerReporter.b c(java.lang.String r2, java.lang.Object r3) {
                r1 = this;
                org.json.JSONObject r0 = r1.ari
                com.kwad.sdk.utils.u.a(r0, r2, r3)
                return r1
        }

        public final com.kwad.sdk.core.report.KSLoggerReporter.b ct(int r2) {
                r1 = this;
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                java.lang.String r0 = "ad_num"
                com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r1.c(r0, r2)
                return r2
        }

        public final com.kwad.sdk.core.report.KSLoggerReporter.b dw(java.lang.String r1) {
                r0 = this;
                r0.mCategory = r1
                return r0
        }

        public final com.kwad.sdk.core.report.KSLoggerReporter.b dx(java.lang.String r1) {
                r0 = this;
                r0.mEventId = r1
                return r0
        }

        public final com.kwad.sdk.core.report.KSLoggerReporter.b dy(java.lang.String r1) {
                r0 = this;
                r0.mTag = r1
                return r0
        }

        public final void report() {
                r2 = this;
                com.kwad.sdk.core.report.KSLoggerReporter$b$a r0 = r2.ark     // Catch: java.lang.Exception -> L40
                if (r0 == 0) goto L9
                com.kwad.sdk.core.report.KSLoggerReporter$b$a r0 = r2.ark     // Catch: java.lang.Exception -> L40
                r0.a(r2)     // Catch: java.lang.Exception -> L40
            L9:
                com.kwad.sdk.core.report.p$a r0 = new com.kwad.sdk.core.report.p$a     // Catch: java.lang.Exception -> L40
                r0.<init>()     // Catch: java.lang.Exception -> L40
                java.lang.String r1 = r2.mCategory     // Catch: java.lang.Exception -> L40
                com.kwad.sdk.core.report.p$a r0 = r0.dz(r1)     // Catch: java.lang.Exception -> L40
                com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = r2.arj     // Catch: java.lang.Exception -> L40
                com.kwad.sdk.core.report.p$a r0 = r0.b(r1)     // Catch: java.lang.Exception -> L40
                java.lang.String r1 = r2.mTag     // Catch: java.lang.Exception -> L40
                com.kwad.sdk.core.report.p$a r0 = r0.dB(r1)     // Catch: java.lang.Exception -> L40
                com.kwai.adclient.kscommerciallogger.model.SubBusinessType r1 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER     // Catch: java.lang.Exception -> L40
                com.kwad.sdk.core.report.p$a r0 = r0.a(r1)     // Catch: java.lang.Exception -> L40
                com.kwai.adclient.kscommerciallogger.model.d r1 = com.kwai.adclient.kscommerciallogger.model.a.aNg     // Catch: java.lang.Exception -> L40
                com.kwad.sdk.core.report.p$a r0 = r0.a(r1)     // Catch: java.lang.Exception -> L40
                java.lang.String r1 = r2.mEventId     // Catch: java.lang.Exception -> L40
                com.kwad.sdk.core.report.p$a r0 = r0.dA(r1)     // Catch: java.lang.Exception -> L40
                org.json.JSONObject r1 = r2.ari     // Catch: java.lang.Exception -> L40
                com.kwad.sdk.core.report.p$a r0 = r0.A(r1)     // Catch: java.lang.Exception -> L40
                com.kwad.sdk.core.report.p r0 = r0.Cd()     // Catch: java.lang.Exception -> L40
                com.kwad.sdk.core.report.KSLoggerReporter.a(r0)     // Catch: java.lang.Exception -> L40
                return
            L40:
                r0 = move-exception
                com.kwad.sdk.core.e.c.printStackTrace(r0)
                return
        }
    }

    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>()
            com.kwad.sdk.core.report.KSLoggerReporter.sHasInit = r0
            return
    }

    private static com.kwad.sdk.core.report.f a(java.lang.String r7, java.lang.String r8, org.json.JSONObject r9, java.lang.String r10) {
            java.lang.String r0 = "ratio"
            java.lang.String r1 = "ratio_count"
            com.kwad.sdk.core.report.f r2 = new com.kwad.sdk.core.report.f
            r2.<init>()
            boolean r3 = r9.has(r0)     // Catch: java.lang.Throwable -> L80
            if (r3 == 0) goto L16
            double r7 = r9.getDouble(r0)     // Catch: java.lang.Throwable -> L80
            r2.aqQ = r7     // Catch: java.lang.Throwable -> L80
            return r2
        L16:
            boolean r0 = r9.has(r1)     // Catch: java.lang.Throwable -> L80
            if (r0 == 0) goto L30
            double r3 = r9.getDouble(r1)     // Catch: java.lang.Throwable -> L80
            r5 = 0
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 <= 0) goto L30
            r7 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r9 = r9.getDouble(r1)     // Catch: java.lang.Throwable -> L80
            double r7 = r7 / r9
            r2.aqQ = r7     // Catch: java.lang.Throwable -> L80
            return r2
        L30:
            com.kwad.sdk.core.report.KSLoggerReporter$a r9 = com.kwad.sdk.core.report.KSLoggerReporter.arg     // Catch: java.lang.Throwable -> L80
            org.json.JSONObject r9 = r9.xm()     // Catch: java.lang.Throwable -> L80
            if (r9 != 0) goto L55
            java.lang.Boolean r7 = com.kwad.framework.a.a.ml     // Catch: java.lang.Throwable -> L80
            boolean r7 = r7.booleanValue()     // Catch: java.lang.Throwable -> L80
            if (r7 != 0) goto L41
            return r2
        L41:
            java.lang.Exception r7 = new java.lang.Exception     // Catch: java.lang.Throwable -> L80
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L80
            java.lang.String r10 = "reportConf未初始化 eventId:"
            r9.<init>(r10)     // Catch: java.lang.Throwable -> L80
            r9.append(r8)     // Catch: java.lang.Throwable -> L80
            java.lang.String r8 = r9.toString()     // Catch: java.lang.Throwable -> L80
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L80
            throw r7     // Catch: java.lang.Throwable -> L80
        L55:
            java.lang.String r0 = dv(r8)     // Catch: java.lang.Throwable -> L80
            org.json.JSONObject r9 = r9.optJSONObject(r0)     // Catch: java.lang.Throwable -> L80
            if (r9 != 0) goto L7c
            java.lang.Boolean r7 = com.kwad.framework.a.a.ml     // Catch: java.lang.Throwable -> L80
            boolean r7 = r7.booleanValue()     // Catch: java.lang.Throwable -> L80
            if (r7 != 0) goto L68
            return r2
        L68:
            java.lang.Exception r7 = new java.lang.Exception     // Catch: java.lang.Throwable -> L80
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L80
            java.lang.String r10 = "EventSamplingKey未包含 eventId "
            r9.<init>(r10)     // Catch: java.lang.Throwable -> L80
            r9.append(r8)     // Catch: java.lang.Throwable -> L80
            java.lang.String r8 = r9.toString()     // Catch: java.lang.Throwable -> L80
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L80
            throw r7     // Catch: java.lang.Throwable -> L80
        L7c:
            r2.a(r7, r9, r10)     // Catch: java.lang.Throwable -> L80
            goto L84
        L80:
            r7 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r7)
        L84:
            return r2
    }

    private static java.lang.String a(java.lang.String r4, com.kwad.sdk.core.report.f r5) {
            java.lang.String r0 = "ad_client_apm_log"
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto L12
            double r0 = com.kwad.sdk.core.report.KSLoggerReporter.arc
            double r2 = r5.aqR
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 >= 0) goto L12
            java.lang.String r4 = "ad_client_error_log"
        L12:
            return r4
    }

    private static org.json.JSONObject a(org.json.JSONObject r8, com.kwad.sdk.core.report.f r9) {
            java.lang.String r0 = "ratio"
            double r1 = r9.aqQ     // Catch: java.lang.Exception -> L40
            com.kwad.sdk.utils.t.putValue(r8, r0, r1)     // Catch: java.lang.Exception -> L40
            double r0 = r9.aqQ     // Catch: java.lang.Exception -> L40
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r4 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            if (r0 <= 0) goto L1a
            java.lang.String r0 = "ratio_count"
            double r6 = r9.aqQ     // Catch: java.lang.Exception -> L40
            double r6 = r4 / r6
            com.kwad.sdk.utils.t.putValue(r8, r0, r6)     // Catch: java.lang.Exception -> L40
        L1a:
            java.lang.String r0 = "debug_mode"
            java.lang.Boolean r1 = com.kwad.framework.a.a.ml     // Catch: java.lang.Exception -> L40
            boolean r1 = r1.booleanValue()     // Catch: java.lang.Exception -> L40
            if (r1 == 0) goto L26
            r1 = 1
            goto L27
        L26:
            r1 = 0
        L27:
            com.kwad.sdk.utils.t.putValue(r8, r0, r1)     // Catch: java.lang.Exception -> L40
            java.lang.String r0 = "convert_ratio"
            double r6 = r9.aqR     // Catch: java.lang.Exception -> L40
            com.kwad.sdk.utils.t.putValue(r8, r0, r6)     // Catch: java.lang.Exception -> L40
            double r0 = r9.aqR     // Catch: java.lang.Exception -> L40
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L3f
            java.lang.String r0 = "convert_ratio_count"
            double r1 = r9.aqR     // Catch: java.lang.Exception -> L40
            double r4 = r4 / r1
            com.kwad.sdk.utils.t.putValue(r8, r0, r4)     // Catch: java.lang.Exception -> L40
        L3f:
            return r8
        L40:
            r9 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r9)
            return r8
    }

    public static synchronized void a(com.kwad.sdk.core.report.KSLoggerReporter.a r2) {
            java.lang.Class<com.kwad.sdk.core.report.KSLoggerReporter> r0 = com.kwad.sdk.core.report.KSLoggerReporter.class
            monitor-enter(r0)
            boolean r1 = com.kwad.sdk.core.report.KSLoggerReporter.ard     // Catch: java.lang.Throwable -> L18
            if (r1 == 0) goto L9
            monitor-exit(r0)
            return
        L9:
            r1 = 1
            com.kwad.sdk.core.report.KSLoggerReporter.ard = r1     // Catch: java.lang.Throwable -> L18
            com.kwad.sdk.core.report.KSLoggerReporter.arg = r2     // Catch: java.lang.Throwable -> L18
            com.kwad.sdk.core.report.KSLoggerReporter$1 r1 = new com.kwad.sdk.core.report.KSLoggerReporter$1     // Catch: java.lang.Throwable -> L18
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18
            com.kwad.sdk.utils.g.execute(r1)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)
            return
        L18:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static void a(com.kwad.sdk.core.report.m r2, java.lang.String r3) {
            com.kwad.sdk.core.report.p$a r0 = new com.kwad.sdk.core.report.p$a
            r0.<init>()
            java.lang.String r1 = "ad_client_error_log"
            com.kwad.sdk.core.report.p$a r0 = r0.dz(r1)
            java.lang.String r1 = "ad_union_error_log"
            com.kwad.sdk.core.report.p$a r0 = r0.dA(r1)
            com.kwad.sdk.core.report.p$a r3 = r0.dB(r3)
            org.json.JSONObject r2 = r2.toJson()
            com.kwad.sdk.core.report.p$a r2 = r3.A(r2)
            com.kwad.sdk.core.report.p r2 = r2.Cd()
            a(r2)
            return
    }

    public static synchronized void a(com.kwad.sdk.core.report.p r9) {
            java.lang.Class<com.kwad.sdk.core.report.KSLoggerReporter> r0 = com.kwad.sdk.core.report.KSLoggerReporter.class
            monitor-enter(r0)
            java.lang.String r1 = r9.tag     // Catch: java.lang.Throwable -> L24
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L24
            if (r1 == 0) goto Lf
            java.lang.String r1 = r9.eventId     // Catch: java.lang.Throwable -> L24
            r9.tag = r1     // Catch: java.lang.Throwable -> L24
        Lf:
            java.lang.String r1 = r9.category     // Catch: java.lang.Throwable -> L24
            com.kwai.adclient.kscommerciallogger.model.BusinessType r2 = r9.biz     // Catch: java.lang.Throwable -> L24
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r3 = r9.arl     // Catch: java.lang.Throwable -> L24
            com.kwai.adclient.kscommerciallogger.model.d r4 = r9.arm     // Catch: java.lang.Throwable -> L24
            java.lang.String r5 = r9.eventId     // Catch: java.lang.Throwable -> L24
            java.lang.String r6 = r9.tag     // Catch: java.lang.Throwable -> L24
            java.lang.String r7 = r9.suffixRatio     // Catch: java.lang.Throwable -> L24
            org.json.JSONObject r8 = r9.msg     // Catch: java.lang.Throwable -> L24
            a(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L24
            monitor-exit(r0)
            return
        L24:
            r9 = move-exception
            monitor-exit(r0)
            throw r9
    }

    private static synchronized void a(com.kwai.adclient.kscommerciallogger.model.c r2) {
            java.lang.Class<com.kwad.sdk.core.report.KSLoggerReporter> r0 = com.kwad.sdk.core.report.KSLoggerReporter.class
            monitor-enter(r0)
            java.util.List<com.kwai.adclient.kscommerciallogger.model.c> r1 = com.kwad.sdk.core.report.KSLoggerReporter.arf     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto Le
            java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Throwable -> L15
            r1.<init>()     // Catch: java.lang.Throwable -> L15
            com.kwad.sdk.core.report.KSLoggerReporter.arf = r1     // Catch: java.lang.Throwable -> L15
        Le:
            java.util.List<com.kwai.adclient.kscommerciallogger.model.c> r1 = com.kwad.sdk.core.report.KSLoggerReporter.arf     // Catch: java.lang.Throwable -> L15
            r1.add(r2)     // Catch: java.lang.Throwable -> L15
            monitor-exit(r0)
            return
        L15:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static void a(java.lang.String r6, com.kwad.sdk.commercial.model.HybridLoadMsg r7) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.WEB_CACHE
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.d.aNG
            org.json.JSONObject r5 = r7.toJson()
            java.lang.String r4 = "union_web_cache_download_event"
            r0 = r6
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void a(java.lang.String r11, com.kwad.sdk.commercial.model.WebViewCommercialMsg r12) {
            double r0 = r12.rate
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L11
            org.json.JSONObject r0 = r12.msg
            double r1 = r12.rate
            java.lang.String r3 = "ratio"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
        L11:
            com.kwai.adclient.kscommerciallogger.model.BusinessType r5 = r12.biz
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r6 = r12.subBiz
            com.kwai.adclient.kscommerciallogger.model.b r7 = r12.type
            java.lang.String r8 = r12.eventId
            java.lang.String r9 = r12.suffixRatio
            org.json.JSONObject r10 = r12.msg
            r4 = r11
            a(r4, r5, r6, r7, r8, r9, r10)
            return
    }

    public static void a(java.lang.String r6, com.kwad.sdk.commercial.model.WebViewLoadMsg r7) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.d.aNG
            org.json.JSONObject r5 = r7.toJson()
            java.lang.String r4 = "union_webview_load_event"
            r0 = r6
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    @java.lang.Deprecated
    private static synchronized void a(java.lang.String r5, com.kwai.adclient.kscommerciallogger.model.BusinessType r6, com.kwai.adclient.kscommerciallogger.model.SubBusinessType r7, com.kwai.adclient.kscommerciallogger.model.d r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, org.json.JSONObject r12) {
            java.lang.Class<com.kwad.sdk.core.report.KSLoggerReporter> r0 = com.kwad.sdk.core.report.KSLoggerReporter.class
            monitor-enter(r0)
            com.kwad.sdk.core.report.f r11 = a(r5, r9, r12, r11)     // Catch: java.lang.Throwable -> L9e
            float r1 = com.kwad.sdk.core.report.KSLoggerReporter.arb     // Catch: java.lang.Throwable -> L9e
            r2 = -1082130432(0xffffffffbf800000, float:-1.0)
            int r1 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r1 != 0) goto L1a
            java.util.Random r1 = new java.util.Random     // Catch: java.lang.Throwable -> L9e
            r1.<init>()     // Catch: java.lang.Throwable -> L9e
            float r1 = r1.nextFloat()     // Catch: java.lang.Throwable -> L9e
            com.kwad.sdk.core.report.KSLoggerReporter.arb = r1     // Catch: java.lang.Throwable -> L9e
        L1a:
            double r1 = com.kwad.sdk.core.report.KSLoggerReporter.arc     // Catch: java.lang.Throwable -> L9e
            r3 = -4616189618054758400(0xbff0000000000000, double:-1.0)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L2e
            java.util.Random r1 = new java.util.Random     // Catch: java.lang.Throwable -> L9e
            r1.<init>()     // Catch: java.lang.Throwable -> L9e
            float r1 = r1.nextFloat()     // Catch: java.lang.Throwable -> L9e
            double r1 = (double) r1     // Catch: java.lang.Throwable -> L9e
            com.kwad.sdk.core.report.KSLoggerReporter.arc = r1     // Catch: java.lang.Throwable -> L9e
        L2e:
            float r1 = com.kwad.sdk.core.report.KSLoggerReporter.arb     // Catch: java.lang.Throwable -> L9e
            double r1 = (double) r1     // Catch: java.lang.Throwable -> L9e
            double r3 = r11.aqQ     // Catch: java.lang.Throwable -> L9e
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L39
            monitor-exit(r0)
            return
        L39:
            java.lang.String r1 = "3.3.42"
            java.lang.String r2 = r11.aqS     // Catch: java.lang.Throwable -> L9e
            boolean r1 = com.kwad.sdk.utils.bk.aw(r1, r2)     // Catch: java.lang.Throwable -> L9e
            if (r1 != 0) goto L45
            monitor-exit(r0)
            return
        L45:
            java.lang.String r1 = "ad_client_error_log"
            java.lang.String r5 = a(r5, r11)     // Catch: java.lang.Throwable -> L8b
            boolean r5 = r1.equals(r5)     // Catch: java.lang.Throwable -> L8b
            if (r5 == 0) goto L56
            com.kwai.adclient.kscommerciallogger.model.c$a r5 = com.kwai.adclient.kscommerciallogger.model.c.a.Lg()     // Catch: java.lang.Throwable -> L8b
            goto L5a
        L56:
            com.kwai.adclient.kscommerciallogger.model.c$a r5 = com.kwai.adclient.kscommerciallogger.model.c.a.Lh()     // Catch: java.lang.Throwable -> L8b
        L5a:
            com.kwai.adclient.kscommerciallogger.model.c$a r5 = r5.c(r6)     // Catch: java.lang.Throwable -> L8b
            com.kwai.adclient.kscommerciallogger.model.c$a r5 = r5.b(r7)     // Catch: java.lang.Throwable -> L8b
            com.kwai.adclient.kscommerciallogger.model.c$a r5 = r5.fZ(r10)     // Catch: java.lang.Throwable -> L8b
            com.kwai.adclient.kscommerciallogger.model.c$a r5 = r5.b(r8)     // Catch: java.lang.Throwable -> L8b
            com.kwai.adclient.kscommerciallogger.model.c$a r5 = r5.ga(r9)     // Catch: java.lang.Throwable -> L8b
            org.json.JSONObject r6 = a(r12, r11)     // Catch: java.lang.Throwable -> L8b
            com.kwai.adclient.kscommerciallogger.model.c$a r5 = r5.P(r6)     // Catch: java.lang.Throwable -> L8b
            com.kwai.adclient.kscommerciallogger.model.c r5 = r5.Li()     // Catch: java.lang.Throwable -> L8b
            java.util.concurrent.atomic.AtomicBoolean r6 = com.kwad.sdk.core.report.KSLoggerReporter.sHasInit     // Catch: java.lang.Throwable -> L8b
            boolean r6 = r6.get()     // Catch: java.lang.Throwable -> L8b
            if (r6 == 0) goto L86
            b(r5)     // Catch: java.lang.Throwable -> L8b
            goto L9c
        L86:
            a(r5)     // Catch: java.lang.Throwable -> L8b
            monitor-exit(r0)
            return
        L8b:
            r5 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r5)     // Catch: java.lang.Throwable -> L9e
            java.lang.Class<com.kwad.sdk.service.a.d> r6 = com.kwad.sdk.service.a.d.class
            java.lang.Object r6 = com.kwad.sdk.service.ServiceProvider.get(r6)     // Catch: java.lang.Throwable -> L9e
            com.kwad.sdk.service.a.d r6 = (com.kwad.sdk.service.a.d) r6     // Catch: java.lang.Throwable -> L9e
            if (r6 == 0) goto L9c
            r6.gatherException(r5)     // Catch: java.lang.Throwable -> L9e
        L9c:
            monitor-exit(r0)
            return
        L9e:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }

    @java.lang.Deprecated
    private static synchronized void a(java.lang.String r9, com.kwai.adclient.kscommerciallogger.model.BusinessType r10, com.kwai.adclient.kscommerciallogger.model.SubBusinessType r11, com.kwai.adclient.kscommerciallogger.model.d r12, java.lang.String r13, java.lang.String r14, org.json.JSONObject r15) {
            java.lang.Class<com.kwad.sdk.core.report.KSLoggerReporter> r0 = com.kwad.sdk.core.report.KSLoggerReporter.class
            monitor-enter(r0)
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r13
            r7 = r14
            r8 = r15
            a(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)
            return
        L10:
            r9 = move-exception
            monitor-exit(r0)
            throw r9
    }

    @java.lang.Deprecated
    public static synchronized void a(java.lang.String r8, com.kwai.adclient.kscommerciallogger.model.BusinessType r9, com.kwai.adclient.kscommerciallogger.model.SubBusinessType r10, com.kwai.adclient.kscommerciallogger.model.d r11, java.lang.String r12, org.json.JSONObject r13) {
            java.lang.Class<com.kwad.sdk.core.report.KSLoggerReporter> r0 = com.kwad.sdk.core.report.KSLoggerReporter.class
            monitor-enter(r0)
            java.lang.String r6 = ""
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r7 = r13
            a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)
            return
        L10:
            r8 = move-exception
            monitor-exit(r0)
            throw r8
    }

    public static void a(java.lang.String r6, com.kwai.adclient.kscommerciallogger.model.d r7, org.json.JSONObject r8) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_SDK_INIT
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            java.lang.String r0 = "ad_client_error_log"
            boolean r0 = r0.equals(r6)
            if (r0 == 0) goto Lf
            java.lang.String r0 = "ad_sdk_init_error_performance"
            goto L11
        Lf:
            java.lang.String r0 = "ad_sdk_init_performance"
        L11:
            r4 = r0
            r0 = r6
            r3 = r7
            r5 = r8
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void a(boolean r7, org.json.JSONObject r8) {
            if (r7 == 0) goto L5
            java.lang.String r0 = "ad_sdk_reward_download_error"
            goto L7
        L5:
            java.lang.String r0 = "ad_sdk_fullscreen_download_error"
        L7:
            r5 = r0
            if (r7 == 0) goto Ld
            com.kwai.adclient.kscommerciallogger.model.BusinessType r7 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_REWARD
            goto Lf
        Ld:
            com.kwai.adclient.kscommerciallogger.model.BusinessType r7 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_FULLSCREEN
        Lf:
            r2 = r7
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r3 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r4 = com.kwai.adclient.kscommerciallogger.model.b.aNt
            java.lang.String r1 = "ad_client_error_log"
            r6 = r8
            a(r1, r2, r3, r4, r5, r6)
            return
    }

    public static void a(boolean r7, org.json.JSONObject r8, com.kwai.adclient.kscommerciallogger.model.d r9) {
            if (r7 == 0) goto L5
            java.lang.String r0 = "ad_sdk_reward_load"
            goto L7
        L5:
            java.lang.String r0 = "ad_sdk_fullscreen_load"
        L7:
            r5 = r0
            if (r7 == 0) goto Ld
            com.kwai.adclient.kscommerciallogger.model.BusinessType r7 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_REWARD
            goto Lf
        Ld:
            com.kwai.adclient.kscommerciallogger.model.BusinessType r7 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_FULLSCREEN
        Lf:
            r2 = r7
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r3 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            java.lang.String r1 = "ad_client_apm_log"
            r4 = r9
            r6 = r8
            a(r1, r2, r3, r4, r5, r6)
            return
    }

    private static void b(com.kwad.sdk.core.report.KSLoggerReporter.a r7) {
            boolean r0 = r7.xl()
            com.kwad.sdk.core.report.KSLoggerReporter.are = r0
            if (r0 != 0) goto L9
            return
        L9:
            com.kwai.adclient.kscommerciallogger.a r1 = com.kwai.adclient.kscommerciallogger.a.KW()
            com.kwad.sdk.core.report.KSLoggerReporter$2 r2 = new com.kwad.sdk.core.report.KSLoggerReporter$2
            r2.<init>()
            com.kwad.sdk.core.report.KSLoggerReporter$3 r3 = new com.kwad.sdk.core.report.KSLoggerReporter$3
            r3.<init>(r7)
            r4 = 0
            java.lang.Boolean r7 = com.kwad.framework.a.a.ml
            boolean r5 = r7.booleanValue()
            java.lang.Boolean r7 = com.kwad.framework.a.a.ml
            boolean r6 = r7.booleanValue()
            r1.a(r2, r3, r4, r5, r6)
            return
    }

    public static void b(com.kwad.sdk.utils.b.a r6) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.d.aNG
            org.json.JSONObject r5 = r6.toJson()
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_union_kv_fail_rate"
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    private static void b(com.kwai.adclient.kscommerciallogger.model.c r1) {
            boolean r0 = com.kwad.sdk.core.report.KSLoggerReporter.are
            if (r0 == 0) goto Lb
            com.kwai.adclient.kscommerciallogger.a r0 = com.kwai.adclient.kscommerciallogger.a.KW()
            r0.c(r1)
        Lb:
            return
    }

    public static void b(java.lang.String r6, com.kwad.sdk.commercial.model.HybridLoadMsg r7) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.WEB_CACHE
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.d.aNG
            org.json.JSONObject r5 = r7.toJson()
            java.lang.String r4 = "union_web_cache_load_event"
            r0 = r6
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void b(boolean r7, org.json.JSONObject r8) {
            if (r7 == 0) goto L5
            java.lang.String r0 = "ad_sdk_reward_page_show"
            goto L7
        L5:
            java.lang.String r0 = "ad_sdk_fullscreen_page_show"
        L7:
            r5 = r0
            if (r7 == 0) goto Ld
            com.kwai.adclient.kscommerciallogger.model.BusinessType r7 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_REWARD
            goto Lf
        Ld:
            com.kwai.adclient.kscommerciallogger.model.BusinessType r7 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_FULLSCREEN
        Lf:
            r2 = r7
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r3 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r4 = com.kwai.adclient.kscommerciallogger.model.a.aMW
            java.lang.String r1 = "ad_client_apm_log"
            r6 = r8
            a(r1, r2, r3, r4, r5, r6)
            return
    }

    public static void c(com.kwad.sdk.core.network.j r6) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.d.aNG
            org.json.JSONObject r5 = r6.toJson()
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_perf_monitor_net_error"
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void c(com.kwad.sdk.core.network.k r6) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.d.aNG
            org.json.JSONObject r5 = r6.toJson()
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_perf_monitor_net_success"
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    static void c(com.kwad.sdk.core.report.KSLoggerReporter.a r0) {
            b(r0)
            return
    }

    public static void c(boolean r7, org.json.JSONObject r8) {
            if (r7 == 0) goto L5
            java.lang.String r0 = "ad_sdk_reward_play_error"
            goto L7
        L5:
            java.lang.String r0 = "ad_sdk_fullscreen_play_error"
        L7:
            r5 = r0
            if (r7 == 0) goto Ld
            com.kwai.adclient.kscommerciallogger.model.BusinessType r7 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_REWARD
            goto Lf
        Ld:
            com.kwai.adclient.kscommerciallogger.model.BusinessType r7 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_FULLSCREEN
        Lf:
            r2 = r7
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r3 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r4 = com.kwai.adclient.kscommerciallogger.model.b.aNz
            java.lang.String r1 = "ad_client_error_log"
            r6 = r8
            a(r1, r2, r3, r4, r5, r6)
            return
    }

    public static com.kwai.adclient.kscommerciallogger.model.BusinessType cs(int r1) {
            r0 = 1
            if (r1 == r0) goto L25
            r0 = 2
            if (r1 == r0) goto L22
            r0 = 3
            if (r1 == r0) goto L1f
            r0 = 4
            if (r1 == r0) goto L1c
            r0 = 13
            if (r1 == r0) goto L19
            r0 = 10000(0x2710, float:1.4013E-41)
            if (r1 == r0) goto L16
            r1 = 0
            goto L27
        L16:
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_NATIVE
            goto L27
        L19:
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_INTERSTITIAL
            goto L27
        L1c:
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_SPLASH
            goto L27
        L1f:
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_FULLSCREEN
            goto L27
        L22:
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_REWARD
            goto L27
        L25:
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_FEED
        L27:
            return r1
    }

    private static java.lang.String dv(java.lang.String r9) {
            java.lang.String r0 = "_"
            java.lang.String[] r9 = r9.split(r0)     // Catch: java.lang.Throwable -> L5f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f
            r0.<init>()     // Catch: java.lang.Throwable -> L5f
            int r1 = r9.length     // Catch: java.lang.Throwable -> L5f
            r2 = 0
            r3 = r2
            r4 = r3
        Lf:
            if (r3 >= r1) goto L54
            r5 = r9[r3]     // Catch: java.lang.Throwable -> L5f
            r6 = 1
            if (r4 == 0) goto L32
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f
            r7.<init>()     // Catch: java.lang.Throwable -> L5f
            char r8 = r5.charAt(r2)     // Catch: java.lang.Throwable -> L5f
            char r8 = java.lang.Character.toUpperCase(r8)     // Catch: java.lang.Throwable -> L5f
            r7.append(r8)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r5 = r5.substring(r6)     // Catch: java.lang.Throwable -> L5f
            r7.append(r5)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r5 = r7.toString()     // Catch: java.lang.Throwable -> L5f
            goto L4e
        L32:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f
            r4.<init>()     // Catch: java.lang.Throwable -> L5f
            char r7 = r5.charAt(r2)     // Catch: java.lang.Throwable -> L5f
            char r7 = java.lang.Character.toLowerCase(r7)     // Catch: java.lang.Throwable -> L5f
            r4.append(r7)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r5 = r5.substring(r6)     // Catch: java.lang.Throwable -> L5f
            r4.append(r5)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r5 = r4.toString()     // Catch: java.lang.Throwable -> L5f
            r4 = r6
        L4e:
            r0.append(r5)     // Catch: java.lang.Throwable -> L5f
            int r3 = r3 + 1
            goto Lf
        L54:
            java.lang.String r9 = "ReportRate"
            r0.append(r9)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r9 = new java.lang.String     // Catch: java.lang.Throwable -> L5f
            r9.<init>(r0)     // Catch: java.lang.Throwable -> L5f
            return r9
        L5f:
            java.lang.String r9 = ""
            return r9
    }

    public static void i(org.json.JSONObject r6) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_REWARD
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.b r3 = new com.kwai.adclient.kscommerciallogger.model.b
            java.lang.String r0 = "RESULT_CHECK_REWARD"
            r3.<init>(r0)
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_sdk_reward_check_result"
            r5 = r6
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void j(org.json.JSONObject r6) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_WEBVIEW
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.a.aNg
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_sdk_webview_track"
            r5 = r6
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void k(org.json.JSONObject r6) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_REWARD
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.b.aNG
            java.lang.String r0 = "ad_client_error_log"
            java.lang.String r4 = "ad_sdk_reward_performance"
            r5 = r6
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void l(org.json.JSONObject r6) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_SPLASH
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.a.aNg
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_sdk_splash_load"
            r5 = r6
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void m(org.json.JSONObject r6) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_SPLASH
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.a.aNg
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_sdk_splash_preload"
            r5 = r6
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    private static synchronized void mC() {
            java.lang.Class<com.kwad.sdk.core.report.KSLoggerReporter> r0 = com.kwad.sdk.core.report.KSLoggerReporter.class
            monitor-enter(r0)
            java.util.List<com.kwai.adclient.kscommerciallogger.model.c> r1 = com.kwad.sdk.core.report.KSLoggerReporter.arf     // Catch: java.lang.Throwable -> L29
            if (r1 != 0) goto L9
            monitor-exit(r0)
            return
        L9:
            java.util.List<com.kwai.adclient.kscommerciallogger.model.c> r1 = com.kwad.sdk.core.report.KSLoggerReporter.arf     // Catch: java.lang.Throwable -> L29
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L29
        Lf:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L29
            if (r2 == 0) goto L1f
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L29
            com.kwai.adclient.kscommerciallogger.model.c r2 = (com.kwai.adclient.kscommerciallogger.model.c) r2     // Catch: java.lang.Throwable -> L29
            b(r2)     // Catch: java.lang.Throwable -> L29
            goto Lf
        L1f:
            java.util.List<com.kwai.adclient.kscommerciallogger.model.c> r1 = com.kwad.sdk.core.report.KSLoggerReporter.arf     // Catch: java.lang.Throwable -> L29
            r1.clear()     // Catch: java.lang.Throwable -> L29
            r1 = 0
            com.kwad.sdk.core.report.KSLoggerReporter.arf = r1     // Catch: java.lang.Throwable -> L29
            monitor-exit(r0)
            return
        L29:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    static java.util.concurrent.atomic.AtomicBoolean mH() {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.core.report.KSLoggerReporter.sHasInit
            return r0
    }

    static void mI() {
            mC()
            return
    }

    public static void n(org.json.JSONObject r6) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_SPLASH
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.a.aNf
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_sdk_splash_single_cache"
            r5 = r6
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void o(org.json.JSONObject r6) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_SPLASH
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.a.aNf
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_sdk_splash_cache"
            r5 = r6
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void p(org.json.JSONObject r6) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_SPLASH
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.a.aNg
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_sdk_splash_show"
            r5 = r6
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void q(org.json.JSONObject r2) {
            java.lang.String r0 = "load_status"
            int r0 = r2.optInt(r0)
            r1 = 3
            if (r0 == r1) goto L13
            r1 = 4
            if (r0 == r1) goto L13
            r1 = 7
            if (r0 != r1) goto L10
            goto L13
        L10:
            java.lang.String r0 = "ad_client_apm_log"
            goto L15
        L13:
            java.lang.String r0 = "ad_client_error_log"
        L15:
            com.kwad.sdk.core.report.p$a r1 = new com.kwad.sdk.core.report.p$a
            r1.<init>()
            com.kwad.sdk.core.report.p$a r0 = r1.dz(r0)
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.OTHER
            com.kwad.sdk.core.report.p$a r0 = r0.b(r1)
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r1 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwad.sdk.core.report.p$a r0 = r0.a(r1)
            com.kwai.adclient.kscommerciallogger.model.d r1 = com.kwai.adclient.kscommerciallogger.model.a.aNg
            com.kwad.sdk.core.report.p$a r0 = r0.a(r1)
            java.lang.String r1 = "ad_sdk_dynamic_update"
            com.kwad.sdk.core.report.p$a r0 = r0.dA(r1)
            com.kwad.sdk.core.report.p$a r2 = r0.A(r2)
            com.kwad.sdk.core.report.p r2 = r2.Cd()
            a(r2)
            return
    }

    public static void r(org.json.JSONObject r2) {
            com.kwad.sdk.core.report.p$a r0 = new com.kwad.sdk.core.report.p$a
            r0.<init>()
            java.lang.String r1 = "ad_client_error_log"
            com.kwad.sdk.core.report.p$a r0 = r0.dz(r1)
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.OTHER
            com.kwad.sdk.core.report.p$a r0 = r0.b(r1)
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r1 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwad.sdk.core.report.p$a r0 = r0.a(r1)
            com.kwai.adclient.kscommerciallogger.model.d r1 = com.kwai.adclient.kscommerciallogger.model.a.aNg
            com.kwad.sdk.core.report.p$a r0 = r0.a(r1)
            java.lang.String r1 = "ad_sdk_dynamic_run"
            com.kwad.sdk.core.report.p$a r0 = r0.dA(r1)
            com.kwad.sdk.core.report.p$a r2 = r0.A(r2)
            com.kwad.sdk.core.report.p r2 = r2.Cd()
            a(r2)
            return
    }

    public static void s(org.json.JSONObject r6) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_INTERSTITIAL
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.a.aNg
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_sdk_interstitial_load"
            r5 = r6
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void t(org.json.JSONObject r7) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_INTERSTITIAL
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.b.aNt
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_sdk_interstitial_download_error"
            java.lang.String r5 = "1"
            r6 = r7
            a(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    public static void u(org.json.JSONObject r6) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_INTERSTITIAL
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.b.aNt
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_sdk_interstitial_download_error"
            r5 = r6
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void v(org.json.JSONObject r7) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_INTERSTITIAL
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.b.aNz
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_sdk_interstitial_play_error"
            java.lang.String r5 = "1"
            r6 = r7
            a(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    public static void w(org.json.JSONObject r6) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_INTERSTITIAL
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.b.aNz
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_sdk_interstitial_play_error"
            r5 = r6
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void x(org.json.JSONObject r6) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.d.aNG
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_sdk_block_info"
            r5 = r6
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void y(org.json.JSONObject r6) {
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.d.aNG
            java.lang.String r0 = "ad_client_apm_log"
            java.lang.String r4 = "ad_image_load_perf"
            r5 = r6
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void z(org.json.JSONObject r3) {
            com.kwad.sdk.core.report.p$a r0 = new com.kwad.sdk.core.report.p$a
            r0.<init>()
            java.lang.String r1 = "ad_client_apm_log"
            com.kwad.sdk.core.report.p$a r0 = r0.dz(r1)
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.OTHER
            com.kwad.sdk.core.report.p$a r0 = r0.b(r1)
            java.lang.String r1 = "ad_thread_monitor"
            com.kwad.sdk.core.report.p$a r0 = r0.dB(r1)
            com.kwai.adclient.kscommerciallogger.model.d r2 = com.kwai.adclient.kscommerciallogger.model.d.aNG
            com.kwad.sdk.core.report.p$a r0 = r0.a(r2)
            com.kwad.sdk.core.report.p$a r0 = r0.dA(r1)
            com.kwad.sdk.core.report.p$a r3 = r0.A(r3)
            com.kwad.sdk.core.report.p r3 = r3.Cd()
            a(r3)
            return
    }
}
