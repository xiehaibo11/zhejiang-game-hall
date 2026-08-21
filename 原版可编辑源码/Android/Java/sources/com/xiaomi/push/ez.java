package com.xiaomi.push;

import com.tencent.connect.common.Constants;

public enum ez {
    a(1),
    b(2),
    c(3),
    d(4),
    e(5),
    f(6),
    g(7),
    h(8),
    i(1000),
    j(1001),
    k(8000),
    l(10000),
    m(10101),
    n(Constants.REQUEST_APPBAR),
    o(Constants.REQUEST_QQ_SHARE),
    p(Constants.REQUEST_QZONE_SHARE),
    q(Constants.REQUEST_QQ_FAVORITES),
    r(Constants.REQUEST_SEND_TO_MY_COMPUTER),
    s(Constants.REQUEST_SHARE_TO_TROOP_BAR),
    t(10199),
    u(10999),
    v(20000),
    w(20101),
    x(20102),
    y(20103),
    z(20104),
    A(20105),
    B(20106),
    C(20107),
    D(20199),
    E(20399),
    F(20407),
    G(20499),
    H(30000),
    I(30101),
    J(30102),
    K(30103),
    L(30108),
    M(30109),
    N(30110),
    O(30199),
    P(30399),
    Q(30401),
    R(30499),
    S(30501),
    T(30502),
    U(40101),
    V(40102),
    W(40103),
    X(40108),
    Y(40109),
    Z(40110),
    aa(40199),
    ab(40399),
    ac(40401),
    ad(40499),
    ae(50001);

    private final int a;

    ez(int i2) {
        this.a = i2;
    }

    public static ez a(int i2) {
        if (i2 == 30501) {
            return S;
        }
        if (i2 == 30502) {
            return T;
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
            default:
                switch (i2) {
                    case 8000:
                        return k;
                    case 10000:
                        return l;
                    case 10199:
                        return t;
                    case 10999:
                        return u;
                    case 20000:
                        return v;
                    case 20199:
                        return D;
                    case 20399:
                        return E;
                    case 20407:
                        return F;
                    case 20499:
                        return G;
                    case 30000:
                        return H;
                    case 30199:
                        return O;
                    case 30399:
                        return P;
                    case 30401:
                        return Q;
                    case 30499:
                        return R;
                    case 40199:
                        return aa;
                    case 40399:
                        return ab;
                    case 40401:
                        return ac;
                    case 40499:
                        return ad;
                    case 50001:
                        return ae;
                    default:
                        switch (i2) {
                            case 10101:
                                return m;
                            case Constants.REQUEST_APPBAR:
                                return n;
                            case Constants.REQUEST_QQ_SHARE:
                                return o;
                            case Constants.REQUEST_QZONE_SHARE:
                                return p;
                            case Constants.REQUEST_QQ_FAVORITES:
                                return q;
                            case Constants.REQUEST_SEND_TO_MY_COMPUTER:
                                return r;
                            case Constants.REQUEST_SHARE_TO_TROOP_BAR:
                                return s;
                            default:
                                switch (i2) {
                                    case 20101:
                                        return w;
                                    case 20102:
                                        return x;
                                    case 20103:
                                        return y;
                                    case 20104:
                                        return z;
                                    case 20105:
                                        return A;
                                    case 20106:
                                        return B;
                                    case 20107:
                                        return C;
                                    default:
                                        switch (i2) {
                                            case 30101:
                                                return I;
                                            case 30102:
                                                return J;
                                            case 30103:
                                                return K;
                                            default:
                                                switch (i2) {
                                                    case 30108:
                                                        return L;
                                                    case 30109:
                                                        return M;
                                                    case 30110:
                                                        return N;
                                                    default:
                                                        switch (i2) {
                                                            case 40101:
                                                                return U;
                                                            case 40102:
                                                                return V;
                                                            case 40103:
                                                                return W;
                                                            default:
                                                                switch (i2) {
                                                                    case 40108:
                                                                        return X;
                                                                    case 40109:
                                                                        return Y;
                                                                    case 40110:
                                                                        return Z;
                                                                    default:
                                                                        return null;
                                                                }
                                                        }
                                                }
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
