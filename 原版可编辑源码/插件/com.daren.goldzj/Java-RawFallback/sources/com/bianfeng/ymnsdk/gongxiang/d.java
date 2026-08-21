package com.bianfeng.ymnsdk.gongxiang;

public final class d<A, B> {
    private final A a;
    private final B b;

    private d(A r1, B r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public static <A, B> com.bianfeng.ymnsdk.gongxiang.d<A, B> a(A r1, B r2) {
            com.bianfeng.ymnsdk.gongxiang.d r0 = new com.bianfeng.ymnsdk.gongxiang.d
            r0.<init>(r1, r2)
            return r0
    }

    public A a() {
            r1 = this;
            A r0 = r1.a
            return r0
    }

    public B b() {
            r1 = this;
            B r0 = r1.b
            return r0
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 != 0) goto L8
            return r1
        L8:
            java.lang.Class r2 = r5.getClass()
            java.lang.Class<com.bianfeng.ymnsdk.gongxiang.d> r3 = com.bianfeng.ymnsdk.gongxiang.d.class
            if (r3 == r2) goto L11
            return r1
        L11:
            com.bianfeng.ymnsdk.gongxiang.d r5 = (com.bianfeng.ymnsdk.gongxiang.d) r5
            A r2 = r4.a
            if (r2 != 0) goto L1c
            A r2 = r5.a
            if (r2 == 0) goto L25
            return r1
        L1c:
            A r3 = r5.a
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L25
            return r1
        L25:
            B r2 = r4.b
            if (r2 != 0) goto L2e
            B r5 = r5.b
            if (r5 == 0) goto L37
            return r1
        L2e:
            B r5 = r5.b
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L37
            return r1
        L37:
            return r0
    }

    public int hashCode() {
            r3 = this;
            A r0 = r3.a
            r1 = 0
            if (r0 != 0) goto L7
            r0 = 0
            goto Lb
        L7:
            int r0 = r0.hashCode()
        Lb:
            int r0 = r0 + 31
            int r0 = r0 * 31
            B r2 = r3.b
            if (r2 != 0) goto L14
            goto L18
        L14:
            int r1 = r2.hashCode()
        L18:
            int r0 = r0 + r1
            return r0
    }
}
