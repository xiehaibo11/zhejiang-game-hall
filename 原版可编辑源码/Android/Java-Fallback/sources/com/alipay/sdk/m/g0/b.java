package com.alipay.sdk.m.g0;

public class b implements com.alipay.sdk.m.g0.a {
    public static com.alipay.sdk.m.g0.a a;
    public static com.alipay.sdk.m.d0.a b;

    static {
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alipay.sdk.m.g0.a a(android.content.Context r1, java.lang.String r2) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.alipay.sdk.m.g0.a r0 = com.alipay.sdk.m.g0.b.a
            if (r0 != 0) goto L15
            com.alipay.sdk.m.d0.a r1 = com.alipay.sdk.m.d0.d.a(r1, r2)
            com.alipay.sdk.m.g0.b.b = r1
            com.alipay.sdk.m.g0.b r1 = new com.alipay.sdk.m.g0.b
            r1.<init>()
            com.alipay.sdk.m.g0.b.a = r1
        L15:
            com.alipay.sdk.m.g0.a r1 = com.alipay.sdk.m.g0.b.a
            return r1
    }

    @Override
    public com.alipay.sdk.m.f0.c a(com.alipay.sdk.m.f0.d r2) {
            r1 = this;
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest r2 = com.alipay.sdk.m.f0.b.a(r2)
            com.alipay.sdk.m.d0.a r0 = com.alipay.sdk.m.g0.b.b
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult r2 = r0.a(r2)
            com.alipay.sdk.m.f0.c r2 = com.alipay.sdk.m.f0.b.a(r2)
            return r2
    }

    @Override
    public boolean logCollect(java.lang.String r2) {
            r1 = this;
            com.alipay.sdk.m.d0.a r0 = com.alipay.sdk.m.g0.b.b
            boolean r2 = r0.logCollect(r2)
            return r2
    }
}
