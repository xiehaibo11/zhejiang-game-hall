package com.alipay.sdk.m.c;

public class d implements com.alipay.sdk.m.b.b {
    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String a(android.content.Context r6) {
            r5 = this;
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            boolean r1 = com.alipay.sdk.m.i0.b.a()
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            java.lang.String r4 = "isSupported"
            r2[r3] = r4
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r1)
            r4 = 1
            r2[r4] = r3
            java.lang.String r3 = "getOAID"
            com.alipay.sdk.m.d.a.b(r3, r2)
            if (r1 != 0) goto L1f
            return r0
        L1f:
            java.lang.String r6 = com.alipay.sdk.m.i0.b.b(r6)
            return r6
    }
}
