package com.bianfeng.a.a;

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

    public static <A, B> com.bianfeng.a.a.d<A, B> a(A r1, B r2) {
            com.bianfeng.a.a.d r0 = new com.bianfeng.a.a.d
            r0.<init>(r1, r2)
            return r0
    }

    public A a() {
            r1 = this;
            A r0 = r1.a
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
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L13
            return r1
        L13:
            com.bianfeng.a.a.d r5 = (com.bianfeng.a.a.d) r5
            A r2 = r4.a
            if (r2 != 0) goto L1e
            A r2 = r5.a
            if (r2 == 0) goto L27
            return r1
        L1e:
            A r3 = r5.a
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L27
            return r1
        L27:
            B r2 = r4.b
            if (r2 != 0) goto L30
            B r5 = r5.b
            if (r5 == 0) goto L39
            return r1
        L30:
            B r5 = r5.b
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L39
            return r1
        L39:
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
            r2 = 31
            int r0 = r0 + r2
            int r0 = r0 * 31
            B r2 = r3.b
            if (r2 != 0) goto L15
            goto L19
        L15:
            int r1 = r2.hashCode()
        L19:
            int r0 = r0 + r1
            return r0
    }
}
