package com.alipay.security.mobile.module.http.model;

public class b {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alipay.security.mobile.module.http.model.c a(com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult r4) {
            com.alipay.security.mobile.module.http.model.c r0 = new com.alipay.security.mobile.module.http.model.c
            r0.<init>()
            if (r4 != 0) goto L9
            r4 = 0
            return r4
        L9:
            boolean r1 = r4.success
            r0.a = r1
            java.lang.String r1 = r4.resultCode
            r0.b = r1
            java.util.Map<java.lang.String, java.lang.String> r4 = r4.resultData
            if (r4 == 0) goto L9d
            java.lang.String r1 = "apdid"
            java.lang.Object r1 = r4.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            r0.h = r1
            java.lang.String r1 = "apdidToken"
            java.lang.Object r1 = r4.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            r0.i = r1
            java.lang.String r1 = "dynamicKey"
            java.lang.Object r1 = r4.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            r0.l = r1
            java.lang.String r1 = "timeInterval"
            java.lang.Object r1 = r4.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            r0.m = r1
            java.lang.String r1 = "webrtcUrl"
            java.lang.Object r1 = r4.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            r0.n = r1
            java.lang.String r1 = ""
            r0.o = r1
            java.lang.String r1 = "drmSwitch"
            java.lang.Object r1 = r4.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = com.alipay.security.mobile.module.a.a.b(r1)
            if (r2 == 0) goto L8c
            int r2 = r1.length()
            if (r2 <= 0) goto L72
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r3 = 0
            char r3 = r1.charAt(r3)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.j = r2
        L72:
            int r2 = r1.length()
            r3 = 3
            if (r2 < r3) goto L8c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r3 = 2
            char r1 = r1.charAt(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.k = r1
        L8c:
            java.lang.String r1 = "apse_degrade"
            boolean r2 = r4.containsKey(r1)
            if (r2 == 0) goto L9d
            java.lang.Object r4 = r4.get(r1)
            java.lang.String r4 = (java.lang.String) r4
            r0.b(r4)
        L9d:
            return r0
    }

    public static com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest a(com.alipay.security.mobile.module.http.model.d r4) {
            com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest r0 = new com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest
            r0.<init>()
            if (r4 != 0) goto L9
            r4 = 0
            return r4
        L9:
            java.lang.String r1 = r4.b()
            r0.os = r1
            java.lang.String r1 = r4.a()
            r0.rpcVersion = r1
            java.lang.String r1 = "1"
            r0.bizType = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.bizData = r1
            java.util.Map<java.lang.String, java.lang.String> r1 = r0.bizData
            java.lang.String r2 = r4.c()
            java.lang.String r3 = "apdid"
            r1.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.String> r1 = r0.bizData
            java.lang.String r2 = r4.d()
            java.lang.String r3 = "apdidToken"
            r1.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.String> r1 = r0.bizData
            java.lang.String r2 = r4.e()
            java.lang.String r3 = "umidToken"
            r1.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.String> r1 = r0.bizData
            java.lang.String r2 = r4.g()
            java.lang.String r3 = "dynamicKey"
            r1.put(r3, r2)
            java.util.Map r4 = r4.f()
            r0.deviceData = r4
            return r0
    }
}
