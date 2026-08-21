package com.alipay.sdk.m.d0;

public class b implements java.lang.Runnable {
    public final com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest a;
    public final com.alipay.sdk.m.d0.c b;

    public b(com.alipay.sdk.m.d0.c r1, com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r4 = this;
            com.alipay.sdk.m.d0.c r0 = r4.b     // Catch: java.lang.Throwable -> L10
            com.alipay.tscenter.biz.rpc.report.general.DataReportService r0 = com.alipay.sdk.m.d0.c.a(r0)     // Catch: java.lang.Throwable -> L10
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest r1 = r4.a     // Catch: java.lang.Throwable -> L10
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult r0 = r0.reportData(r1)     // Catch: java.lang.Throwable -> L10
            com.alipay.sdk.m.d0.c.a(r0)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r0 = move-exception
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult r1 = new com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult
            r1.<init>()
            com.alipay.sdk.m.d0.c.a(r1)
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult r1 = com.alipay.sdk.m.d0.c.a()
            r2 = 0
            r1.success = r2
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult r1 = com.alipay.sdk.m.d0.c.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "static data rpc upload error, "
            r2.<init>(r3)
            java.lang.String r3 = com.alipay.sdk.m.z.a.a(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.resultCode = r2
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "rpc failed:"
            r1.<init>(r2)
            java.lang.String r0 = com.alipay.sdk.m.z.a.a(r0)
            r1.append(r0)
            return
    }
}
