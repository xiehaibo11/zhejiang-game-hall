package com.bianfeng.ymnsdk.gongxiang;

public final class d<A, B> {
    private final A a;
    private final B b;

    private d(A a, B b) {
        this.a = a;
        this.b = b;
    }

    public static <A, B> d<A, B> a(A a, B b) {
        return new d<>(a, b);
    }

    public B b() {
        return this.b;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || d.class != obj.getClass()) {
            return false;
        }
        d dVar = (d) obj;
        A a = this.a;
        if (a == null) {
            if (dVar.a != null) {
                return false;
            }
        } else if (!a.equals(dVar.a)) {
            return false;
        }
        B b = this.b;
        if (b == null) {
            if (dVar.b != null) {
                return false;
            }
        } else if (!b.equals(dVar.b)) {
            return false;
        }
        return true;
    }

    public int hashCode() {
        A a = this.a;
        int iHashCode = ((a == null ? 0 : a.hashCode()) + 31) * 31;
        B b = this.b;
        return iHashCode + (b != null ? b.hashCode() : 0);
    }

    public A a() {
        return this.a;
    }
}
