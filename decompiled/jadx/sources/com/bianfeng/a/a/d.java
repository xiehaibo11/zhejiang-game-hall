package com.bianfeng.a.a;

/* JADX INFO: compiled from: Pair.java */
/* JADX INFO: loaded from: classes.dex */
public final class d<A, B> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final A f1386a;
    private final B b;

    private d(A a2, B b) {
        this.f1386a = a2;
        this.b = b;
    }

    public static <A, B> d<A, B> a(A a2, B b) {
        return new d<>(a2, b);
    }

    public A a() {
        return this.f1386a;
    }

    public int hashCode() {
        A a2 = this.f1386a;
        int iHashCode = ((a2 == null ? 0 : a2.hashCode()) + 31) * 31;
        B b = this.b;
        return iHashCode + (b != null ? b.hashCode() : 0);
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        d dVar = (d) obj;
        A a2 = this.f1386a;
        if (a2 == null) {
            if (dVar.f1386a != null) {
                return false;
            }
        } else if (!a2.equals(dVar.f1386a)) {
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
}
