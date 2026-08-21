package com.bianfeng.afext.read;

public final class Pair<A, B> {
    private final A mFirst;
    private final B mSecond;

    private Pair(A r1, B r2) {
            r0 = this;
            r0.<init>()
            r0.mFirst = r1
            r0.mSecond = r2
            return
    }

    public static <A, B> com.bianfeng.afext.read.Pair<A, B> of(A r1, B r2) {
            com.bianfeng.afext.read.Pair r0 = new com.bianfeng.afext.read.Pair
            r0.<init>(r1, r2)
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
            com.bianfeng.afext.read.Pair r5 = (com.bianfeng.afext.read.Pair) r5
            A r2 = r4.mFirst
            if (r2 != 0) goto L1e
            A r2 = r5.mFirst
            if (r2 == 0) goto L27
            return r1
        L1e:
            A r3 = r5.mFirst
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L27
            return r1
        L27:
            B r2 = r4.mSecond
            if (r2 != 0) goto L30
            B r5 = r5.mSecond
            if (r5 == 0) goto L39
            return r1
        L30:
            B r5 = r5.mSecond
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L39
            return r1
        L39:
            return r0
    }

    public A getFirst() {
            r1 = this;
            A r0 = r1.mFirst
            return r0
    }

    public B getSecond() {
            r1 = this;
            B r0 = r1.mSecond
            return r0
    }

    public int hashCode() {
            r3 = this;
            A r0 = r3.mFirst
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
            B r2 = r3.mSecond
            if (r2 != 0) goto L15
            goto L19
        L15:
            int r1 = r2.hashCode()
        L19:
            int r0 = r0 + r1
            return r0
    }
}
