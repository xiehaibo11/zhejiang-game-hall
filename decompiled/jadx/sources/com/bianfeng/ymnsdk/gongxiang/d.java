package com.bianfeng.ymnsdk.gongxiang;

/* JADX INFO: compiled from: Pair.java */
/* JADX INFO: loaded from: classes.dex */
public final class d<A, B> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final A f1469a;
    private final B b;

    /* JADX WARN: Generic types in debug info not equals: com.bianfeng.ymnsdk.gongxiang.d != com.bianfeng.afext.read.Pair<A, B> */
    private d(A first, B second) {
        this.f1469a = first;
        this.b = second;
    }

    public static <A, B> d<A, B> a(A first, B second) {
        return new d<>(first, second);
    }

    /* JADX WARN: Generic types in debug info not equals: com.bianfeng.ymnsdk.gongxiang.d != com.bianfeng.afext.read.Pair<A, B> */
    public A a() {
        return this.f1469a;
    }

    /* JADX WARN: Generic types in debug info not equals: com.bianfeng.ymnsdk.gongxiang.d != com.bianfeng.afext.read.Pair<A, B> */
    public B b() {
        return this.b;
    }

    /* JADX WARN: Generic types in debug info not equals: com.bianfeng.ymnsdk.gongxiang.d != com.bianfeng.afext.read.Pair<A, B> */
    public int hashCode() {
        int i = 1 * 31;
        A a2 = this.f1469a;
        int result = i + (a2 == null ? 0 : a2.hashCode());
        int result2 = result * 31;
        B b = this.b;
        return result2 + (b != null ? b.hashCode() : 0);
    }

    /* JADX WARN: Generic types in debug info not equals: com.bianfeng.ymnsdk.gongxiang.d != com.bianfeng.afext.read.Pair<A, B> */
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        d other = (d) obj;
        A a2 = this.f1469a;
        if (a2 == null) {
            if (other.f1469a != null) {
                return false;
            }
        } else if (!a2.equals(other.f1469a)) {
            return false;
        }
        B b = this.b;
        if (b == null) {
            if (other.b != null) {
                return false;
            }
        } else if (!b.equals(other.b)) {
            return false;
        }
        return true;
    }
}
