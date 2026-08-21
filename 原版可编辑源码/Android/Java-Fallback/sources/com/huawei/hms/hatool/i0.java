package com.huawei.hms.hatool;

public class i0 implements com.huawei.hms.hatool.m0 {
    public byte[] a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public java.util.List<com.huawei.hms.hatool.q> f;

    public i0(byte[] r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.util.List<com.huawei.hms.hatool.q> r6) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = r1.clone()
            byte[] r1 = (byte[]) r1
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.e = r4
            r0.d = r5
            r0.f = r6
            return
    }

    public final com.huawei.hms.hatool.b0 a(java.util.Map<java.lang.String, java.lang.String> r3) {
            r2 = this;
            java.lang.String r0 = r2.b
            byte[] r1 = r2.a
            com.huawei.hms.hatool.b0 r3 = com.huawei.hms.hatool.a0.a(r0, r1, r3)
            return r3
    }

    public final java.util.Map<java.lang.String, java.lang.String> a() {
            r3 = this;
            java.lang.String r0 = r3.c
            java.lang.String r1 = r3.e
            java.lang.String r2 = r3.d
            java.util.Map r0 = com.huawei.hms.hatool.b1.b(r0, r1, r2)
            return r0
    }

    public final void b() {
            r5 = this;
            com.huawei.hms.hatool.l0 r0 = new com.huawei.hms.hatool.l0
            java.util.List<com.huawei.hms.hatool.q> r1 = r5.f
            java.lang.String r2 = r5.c
            java.lang.String r3 = r5.d
            java.lang.String r4 = r5.e
            r0.<init>(r1, r2, r3, r4)
            com.huawei.hms.hatool.n0 r1 = com.huawei.hms.hatool.n0.b()
            r1.a(r0)
            return
    }

    @Override
    public void run() {
            r6 = this;
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "send data running"
            com.huawei.hms.hatool.y.c(r0, r1)
            java.util.Map r1 = r6.a()
            com.huawei.hms.hatool.b0 r1 = r6.a(r1)
            int r1 = r1.a()
            r2 = 200(0xc8, float:2.8E-43)
            if (r1 == r2) goto L1b
            r6.b()
            goto L45
        L1b:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "events PostRequest sendevent TYPE : %s, TAG : %s, resultCode: %d ,reqID:"
            r2.append(r3)
            java.lang.String r3 = r6.d
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r3 = 3
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r4 = r6.e
            r5 = 0
            r3[r5] = r4
            java.lang.String r4 = r6.c
            r5 = 1
            r3[r5] = r4
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r4 = 2
            r3[r4] = r1
            com.huawei.hms.hatool.y.b(r0, r2, r3)
        L45:
            return
    }
}
