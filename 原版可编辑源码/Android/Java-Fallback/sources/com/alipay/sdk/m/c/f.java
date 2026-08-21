package com.alipay.sdk.m.c;

public class f implements com.alipay.sdk.m.b.b {
    public boolean a;

    public f() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            return
    }

    @Override
    public java.lang.String a(android.content.Context r7) {
            r6 = this;
            r0 = 0
            if (r7 != 0) goto L4
            return r0
        L4:
            boolean r1 = r6.a
            r2 = 1
            if (r1 != 0) goto Le
            com.alipay.sdk.m.h0.a.e(r7)
            r6.a = r2
        Le:
            boolean r1 = com.alipay.sdk.m.h0.a.a()
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r4 = 0
            java.lang.String r5 = "isSupported"
            r3[r4] = r5
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r1)
            r3[r2] = r4
            java.lang.String r2 = "getOAID"
            com.alipay.sdk.m.d.a.b(r2, r3)
            if (r1 != 0) goto L28
            return r0
        L28:
            java.lang.String r7 = com.alipay.sdk.m.h0.a.b(r7)
            return r7
    }
}
