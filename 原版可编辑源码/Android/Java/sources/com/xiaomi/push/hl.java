package com.xiaomi.push;

public enum hl {
    a(1),
    b(2),
    c(3),
    d(4),
    e(5),
    f(6),
    g(7),
    h(8),
    i(9),
    j(10),
    k(11),
    l(12),
    m(13),
    n(14),
    o(15),
    p(16),
    q(17),
    r(18),
    s(19),
    t(20),
    u(21),
    v(22),
    w(23),
    x(24);

    private final int a;

    hl(int i2) {
        this.a = i2;
    }

    public static hl a(int i2) {
        switch (i2) {
            case 1:
                return a;
            case 2:
                return b;
            case 3:
                return c;
            case 4:
                return d;
            case 5:
                return e;
            case 6:
                return f;
            case 7:
                return g;
            case 8:
                return h;
            case 9:
                return i;
            case 10:
                return j;
            case 11:
                return k;
            case 12:
                return l;
            case 13:
                return m;
            case 14:
                return n;
            case 15:
                return o;
            case 16:
                return p;
            case 17:
                return q;
            case 18:
                return r;
            case 19:
                return s;
            case 20:
                return t;
            case 21:
                return u;
            case 22:
                return v;
            case 23:
                return w;
            case 24:
                return x;
            default:
                return null;
        }
    }

    public int a() {
        return this.a;
    }
}
