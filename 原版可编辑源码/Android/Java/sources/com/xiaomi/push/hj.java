package com.xiaomi.push;

public enum hj {
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
    t(22),
    u(23),
    v(24),
    w(99),
    x(100),
    y(101),
    z(102),
    A(103),
    B(104),
    C(105),
    D(107),
    E(108),
    F(109),
    G(110),
    H(112),
    I(113),
    J(114),
    K(200);

    private final int a;

    hj(int i2) {
        this.a = i2;
    }

    public static hj a(int i2) {
        if (i2 == 200) {
            return K;
        }
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
            default:
                switch (i2) {
                    case 22:
                        return t;
                    case 23:
                        return u;
                    case 24:
                        return v;
                    default:
                        switch (i2) {
                            case 99:
                                return w;
                            case 100:
                                return x;
                            case 101:
                                return y;
                            case 102:
                                return z;
                            case 103:
                                return A;
                            case 104:
                                return B;
                            case 105:
                                return C;
                            default:
                                switch (i2) {
                                    case 107:
                                        return D;
                                    case 108:
                                        return E;
                                    case 109:
                                        return F;
                                    case 110:
                                        return G;
                                    default:
                                        switch (i2) {
                                            case 112:
                                                return H;
                                            case 113:
                                                return I;
                                            case 114:
                                                return J;
                                            default:
                                                return null;
                                        }
                                }
                        }
                }
        }
    }

    public int a() {
        return this.a;
    }
}
