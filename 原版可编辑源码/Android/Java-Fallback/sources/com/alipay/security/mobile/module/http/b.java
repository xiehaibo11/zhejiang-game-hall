package com.alipay.security.mobile.module.http;

public class b implements com.alipay.security.mobile.module.http.a {
    private static com.alipay.security.mobile.module.http.b d;
    private static com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult e;
    private com.alipay.android.phone.mrpc.core.w a;
    private com.alipay.tscenter.biz.rpc.a.a b;
    private com.alipay.tscenter.biz.rpc.report.general.a c;

    static {
            return
    }

    private b(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r0
            r1.c = r0
            com.alipay.android.phone.mrpc.core.aa r0 = new com.alipay.android.phone.mrpc.core.aa
            r0.<init>()
            r0.a(r3)
            com.alipay.android.phone.mrpc.core.h r3 = new com.alipay.android.phone.mrpc.core.h
            r3.<init>(r2)
            r1.a = r3
            com.alipay.android.phone.mrpc.core.w r2 = r1.a
            java.lang.Class<com.alipay.tscenter.biz.rpc.a.a> r3 = com.alipay.tscenter.biz.rpc.a.a.class
            java.lang.Object r2 = r2.a(r3, r0)
            com.alipay.tscenter.biz.rpc.a.a r2 = (com.alipay.tscenter.biz.rpc.a.a) r2
            r1.b = r2
            com.alipay.android.phone.mrpc.core.w r2 = r1.a
            java.lang.Class<com.alipay.tscenter.biz.rpc.report.general.a> r3 = com.alipay.tscenter.biz.rpc.report.general.a.class
            java.lang.Object r2 = r2.a(r3, r0)
            com.alipay.tscenter.biz.rpc.report.general.a r2 = (com.alipay.tscenter.biz.rpc.report.general.a) r2
            r1.c = r2
            return
    }

    public static synchronized com.alipay.security.mobile.module.http.b a(android.content.Context r2, java.lang.String r3) {
            java.lang.Class<com.alipay.security.mobile.module.http.b> r0 = com.alipay.security.mobile.module.http.b.class
            monitor-enter(r0)
            com.alipay.security.mobile.module.http.b r1 = com.alipay.security.mobile.module.http.b.d     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.alipay.security.mobile.module.http.b r1 = new com.alipay.security.mobile.module.http.b     // Catch: java.lang.Throwable -> L12
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L12
            com.alipay.security.mobile.module.http.b.d = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.alipay.security.mobile.module.http.b r2 = com.alipay.security.mobile.module.http.b.d     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r2
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    static com.alipay.tscenter.biz.rpc.report.general.a a(com.alipay.security.mobile.module.http.b r0) {
            com.alipay.tscenter.biz.rpc.report.general.a r0 = r0.c
            return r0
    }

    static com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult a() {
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult r0 = com.alipay.security.mobile.module.http.b.e
            return r0
    }

    static com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult a(com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult r0) {
            com.alipay.security.mobile.module.http.b.e = r0
            return r0
    }

    @Override
    public com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult a(com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            com.alipay.tscenter.biz.rpc.report.general.a r1 = r2.c
            if (r1 == 0) goto L28
            com.alipay.security.mobile.module.http.b.e = r0
            java.lang.Thread r0 = new java.lang.Thread
            com.alipay.security.mobile.module.http.c r1 = new com.alipay.security.mobile.module.http.c
            r1.<init>(r2, r3)
            r0.<init>(r1)
            r0.start()
            r3 = 300000(0x493e0, float:4.2039E-40)
        L1a:
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult r0 = com.alipay.security.mobile.module.http.b.e
            if (r0 != 0) goto L28
            if (r3 < 0) goto L28
            r0 = 50
            java.lang.Thread.sleep(r0)
            int r3 = r3 + (-50)
            goto L1a
        L28:
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult r3 = com.alipay.security.mobile.module.http.b.e
            return r3
    }

    @Override
    public boolean a(java.lang.String r4) {
            r3 = this;
            boolean r0 = com.alipay.security.mobile.module.a.a.a(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            com.alipay.tscenter.biz.rpc.a.a r0 = r3.b
            if (r0 == 0) goto L2d
            r2 = 0
            com.alipay.security.mobile.module.a.a.f(r4)     // Catch: java.lang.Throwable -> L15
            java.lang.String r2 = r0.a()     // Catch: java.lang.Throwable -> L15
            goto L16
        L15:
        L16:
            boolean r4 = com.alipay.security.mobile.module.a.a.a(r2)
            if (r4 != 0) goto L2d
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>(r2)
            java.lang.String r0 = "success"
            java.lang.Object r4 = r4.get(r0)
            java.lang.Boolean r4 = (java.lang.Boolean) r4
            boolean r1 = r4.booleanValue()
        L2d:
            return r1
    }
}
