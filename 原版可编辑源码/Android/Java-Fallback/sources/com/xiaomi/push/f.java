package com.xiaomi.push;

public final class f {
    static final int a = 0;
    static final int b = 0;
    static final int c = 0;
    static final int d = 0;

    static {
            r0 = 3
            r1 = 1
            int r2 = a(r1, r0)
            com.xiaomi.push.f.a = r2
            r2 = 4
            int r1 = a(r1, r2)
            com.xiaomi.push.f.b = r1
            r1 = 2
            r2 = 0
            int r2 = a(r1, r2)
            com.xiaomi.push.f.c = r2
            int r0 = a(r0, r1)
            com.xiaomi.push.f.d = r0
            return
    }

    static int a(int r0) {
            r0 = r0 & 7
            return r0
    }

    static int a(int r0, int r1) {
            int r0 = r0 << 3
            r0 = r0 | r1
            return r0
    }

    public static int b(int r0) {
            int r0 = r0 >>> 3
            return r0
    }
}
