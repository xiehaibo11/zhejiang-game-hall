package com.tkay.expressad.exoplayer;

public final class ac {
    public static final ac a = new ac(0, 0);
    public static final ac b = new ac(Long.MAX_VALUE, Long.MAX_VALUE);
    public static final ac c = new ac(Long.MAX_VALUE, 0);
    public static final ac d = new ac(0, Long.MAX_VALUE);
    public static final ac e = a;
    public final long f;
    public final long g;

    public ac(long j, long j2) {
        com.tkay.expressad.exoplayer.k.a.a(j >= 0);
        com.tkay.expressad.exoplayer.k.a.a(j2 >= 0);
        this.f = j;
        this.g = j2;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            ac acVar = (ac) obj;
            if (this.f == acVar.f && this.g == acVar.g) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (((int) this.f) * 31) + ((int) this.g);
    }
}
