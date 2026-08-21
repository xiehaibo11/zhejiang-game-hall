package com.alipay.sdk.m.c;

public class c implements com.alipay.sdk.m.b.b {
    public static final int d = 1;
    public com.alipay.sdk.m.r0.b a;
    public boolean b;
    public boolean c;

    public c() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            r1.c = r0
            return
    }

    @Override
    public java.lang.String a(android.content.Context r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            boolean r1 = r4.b
            r2 = 0
            r3 = 1
            if (r1 != 0) goto L1e
            com.alipay.sdk.m.r0.b r1 = new com.alipay.sdk.m.r0.b
            r1.<init>()
            r4.a = r1
            int r5 = r1.a(r5, r0)
            if (r5 != r3) goto L19
            r5 = 1
            goto L1a
        L19:
            r5 = 0
        L1a:
            r4.c = r5
            r4.b = r3
        L1e:
            r5 = 2
            java.lang.Object[] r5 = new java.lang.Object[r5]
            java.lang.String r1 = "isSupported"
            r5[r2] = r1
            boolean r1 = r4.c
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r5[r3] = r1
            java.lang.String r1 = "getOAID"
            com.alipay.sdk.m.d.a.b(r1, r5)
            boolean r5 = r4.c
            if (r5 == 0) goto L45
            com.alipay.sdk.m.r0.b r5 = r4.a
            boolean r5 = r5.e()
            if (r5 == 0) goto L45
            com.alipay.sdk.m.r0.b r5 = r4.a
            java.lang.String r5 = r5.b()
            return r5
        L45:
            return r0
    }
}
