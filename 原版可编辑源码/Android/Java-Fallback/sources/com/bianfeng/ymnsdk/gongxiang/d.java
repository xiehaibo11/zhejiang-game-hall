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

    public boolean equals(java.lang.Object r6) {
            r5 = this;
            r0 = 1
            if (r5 != r6) goto L4
            return r0
        L4:
            r1 = 0
            if (r6 != 0) goto L8
            return r1
        L8:
            java.lang.Class r2 = r5.getClass()
            java.lang.Class r3 = r6.getClass()
            if (r2 == r3) goto L13
            return r1
        L13:
            r2 = r6
            com.bianfeng.ymnsdk.gongxiang.d r2 = (com.bianfeng.ymnsdk.gongxiang.d) r2
            A r3 = r5.a
            if (r3 != 0) goto L1f
            A r3 = r2.a
            if (r3 == 0) goto L28
            return r1
        L1f:
            A r4 = r2.a
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L28
            return r1
        L28:
            B r3 = r5.b
            if (r3 != 0) goto L31
            B r3 = r2.b
            if (r3 == 0) goto L3a
            return r1
        L31:
            B r4 = r2.b
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L3a
            return r1
        L3a:
            return r0
    }

    public int hashCode() {
            r5 = this;
            r0 = 31
            r1 = 1
            int r2 = r1 * 31
            A r3 = r5.a
            r4 = 0
            if (r3 != 0) goto Lc
            r3 = 0
            goto L10
        Lc:
            int r3 = r3.hashCode()
        L10:
            int r2 = r2 + r3
            int r1 = r2 * 31
            B r3 = r5.b
            if (r3 != 0) goto L18
            goto L1c
        L18:
            int r4 = r3.hashCode()
        L1c:
            int r1 = r1 + r4
            return r1
    }
}
