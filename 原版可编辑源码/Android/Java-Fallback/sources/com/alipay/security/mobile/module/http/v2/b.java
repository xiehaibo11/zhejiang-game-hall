package com.alipay.security.mobile.module.http.v2;

public class b implements com.alipay.security.mobile.module.http.v2.a {
    private static com.alipay.security.mobile.module.http.v2.a a;
    private static com.alipay.security.mobile.module.http.a b;

    static {
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alipay.security.mobile.module.http.v2.a a(android.content.Context r1, java.lang.String r2) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.alipay.security.mobile.module.http.v2.a r0 = com.alipay.security.mobile.module.http.v2.b.a
            if (r0 != 0) goto L15
            com.alipay.security.mobile.module.http.a r1 = com.alipay.security.mobile.module.http.d.a(r1, r2)
            com.alipay.security.mobile.module.http.v2.b.b = r1
            com.alipay.security.mobile.module.http.v2.b r1 = new com.alipay.security.mobile.module.http.v2.b
            r1.<init>()
            com.alipay.security.mobile.module.http.v2.b.a = r1
        L15:
            com.alipay.security.mobile.module.http.v2.a r1 = com.alipay.security.mobile.module.http.v2.b.a
            return r1
    }

    @Override
    public com.alipay.security.mobile.module.http.model.c a(com.alipay.security.mobile.module.http.model.d r2) {
            r1 = this;
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest r2 = com.alipay.security.mobile.module.http.model.b.a(r2)
            com.alipay.security.mobile.module.http.a r0 = com.alipay.security.mobile.module.http.v2.b.b
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult r2 = r0.a(r2)
            com.alipay.security.mobile.module.http.model.c r2 = com.alipay.security.mobile.module.http.model.b.a(r2)
            return r2
    }

    @Override
    public boolean a(java.lang.String r2) {
            r1 = this;
            com.alipay.security.mobile.module.http.a r0 = com.alipay.security.mobile.module.http.v2.b.b
            boolean r2 = r0.a(r2)
            return r2
    }
}
