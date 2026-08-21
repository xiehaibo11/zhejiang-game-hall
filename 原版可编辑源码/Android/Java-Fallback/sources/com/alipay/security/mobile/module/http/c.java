package com.alipay.security.mobile.module.http;

class c implements java.lang.Runnable {
    final com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest a;
    final com.alipay.security.mobile.module.http.b b;

    c(com.alipay.security.mobile.module.http.b r1, com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r4 = this;
            com.alipay.security.mobile.module.http.b r0 = r4.b     // Catch: java.lang.Throwable -> L10
            com.alipay.tscenter.biz.rpc.report.general.a r0 = com.alipay.security.mobile.module.http.b.a(r0)     // Catch: java.lang.Throwable -> L10
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest r1 = r4.a     // Catch: java.lang.Throwable -> L10
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult r0 = r0.a()     // Catch: java.lang.Throwable -> L10
            com.alipay.security.mobile.module.http.b.a(r0)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r0 = move-exception
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult r1 = new com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult
            r1.<init>()
            com.alipay.security.mobile.module.http.b.a(r1)
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult r1 = com.alipay.security.mobile.module.http.b.a()
            r2 = 0
            r1.success = r2
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult r1 = com.alipay.security.mobile.module.http.b.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "static data rpc upload error, "
            r2.<init>(r3)
            java.lang.String r3 = com.alipay.security.mobile.module.a.a.a(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.resultCode = r2
            com.alipay.security.mobile.module.a.a.a(r0)
            return
    }
}
