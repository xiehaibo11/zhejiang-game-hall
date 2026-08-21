package com.bianfeng.ymnsdk.gongxiang;

public final class d<A, B> {
    private final A a;
    private final B b;

    private d(A r1, B r2) {
        this.a = r1;
        this.b = r2;
    }

    public static <A, B> d<A, B> a(A r1, B r2) {
        return new d(r1, r2);
    }

    public B b() {
        return this.b;
    }

    public boolean equals(Object r5) {
        if (this != r5) goto L6;
        return true;
    L6:
        if (r5 != null) goto L9;
        return false;
    L9:
        if (d.class == r5.getClass()) goto L11;
        return false;
    L11:
        d r52 = (d) r5;
        A r2 = this.a;
        if (r2 != null) goto L17;
        if (r52.a == null) goto L19;
        return false;
    L19:
        B r22 = this.b;
        if (r22 != null) goto L25;
        if (r52.b == null) goto L27;
        return false;
    L27:
        return true;
    L25:
        if (r22.equals(r52.b) == true) goto L27;
        return false;
    L17:
        if (r2.equals(r52.a) == true) goto L19;
        return false;
    }

    public int hashCode() {
        A r0 = this.a;
        int r1 = 0;
        if (r0 != null) goto L5;
        int r02 = 0;
    L6:
        int r03 = (r02 + 31) * 31;
        B r2 = this.b;
        if (r2 == null) goto L11;
        r1 = r2.hashCode();
    L11:
        return r03 + r1;
    L5:
        r02 = r0.hashCode();
        goto L6
    }

    public A a() {
        return this.a;
    }
}
