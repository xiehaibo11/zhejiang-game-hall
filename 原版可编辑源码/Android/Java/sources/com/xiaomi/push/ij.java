package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;
import java.util.HashMap;
import java.util.Map;

public class ij implements iu<ij, Object>, Serializable, Cloneable {
    public int a;
    public long a;
    public hx a;
    public hy a;
    public String a;
    public Map<String, String> a;
    public int b;
    public long b;
    public String b;
    public int c;
    public String c;
    public String d;
    public String e;
    public String f;
    public String g;
    public String h;
    public String i;
    public String j;
    public String k;
    public String l;
    public String m;
    public String n;
    public String o;
    public String p;
    public String q;
    public String r;
    private static final jk a = new jk("XmPushActionRegistration");
    private static final jc a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 11, 5);
    private static final jc f = new jc("", (byte) 11, 6);
    private static final jc g = new jc("", (byte) 11, 7);
    private static final jc h = new jc("", (byte) 11, 8);
    private static final jc i = new jc("", (byte) 11, 9);
    private static final jc j = new jc("", (byte) 11, 10);
    private static final jc k = new jc("", (byte) 11, 11);
    private static final jc l = new jc("", (byte) 11, 12);
    private static final jc m = new jc("", (byte) 8, 13);
    private static final jc n = new jc("", (byte) 8, 14);
    private static final jc o = new jc("", (byte) 11, 15);
    private static final jc p = new jc("", (byte) 11, 16);
    private static final jc q = new jc("", (byte) 11, 17);
    private static final jc r = new jc("", (byte) 11, 18);
    private static final jc s = new jc("", (byte) 8, 19);
    private static final jc t = new jc("", (byte) 8, 20);
    private static final jc u = new jc("", (byte) 2, 21);
    private static final jc v = new jc("", (byte) 10, 22);
    private static final jc w = new jc("", (byte) 10, 23);
    private static final jc x = new jc("", (byte) 11, 24);
    private static final jc y = new jc("", (byte) 11, 25);
    private static final jc z = new jc("", (byte) 2, 26);
    private static final jc A = new jc("", (byte) 13, 100);
    private static final jc B = new jc("", (byte) 2, 101);
    private static final jc C = new jc("", (byte) 11, 102);
    private BitSet a = new BitSet(8);
    public boolean a = true;
    public boolean c = false;
    public boolean b = false;

    public boolean A() {
        return this.a != null;
    }

    public boolean B() {
        return this.a.get(7);
    }

    public boolean C() {
        return this.r != null;
    }

    @Override
    public int compareTo(ij ijVar) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        int iA7;
        int iA8;
        int iA9;
        int iA10;
        int iA11;
        int iA12;
        int iA13;
        int iA14;
        int iA15;
        int iA16;
        int iA17;
        int iA18;
        int iA19;
        int iA20;
        int iA21;
        int iA22;
        int iA23;
        int iA24;
        int iA25;
        int iA26;
        int iA27;
        int iA28;
        int iA29;
        if (!getClass().equals(ijVar.getClass())) {
            return getClass().getName().compareTo(ijVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(ijVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA29 = iv.a(this.a, ijVar.a)) != 0) {
            return iA29;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(ijVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA28 = iv.a(this.a, ijVar.a)) != 0) {
            return iA28;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(ijVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA27 = iv.a(this.b, ijVar.b)) != 0) {
            return iA27;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(ijVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA26 = iv.a(this.c, ijVar.c)) != 0) {
            return iA26;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(ijVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA25 = iv.a(this.d, ijVar.d)) != 0) {
            return iA25;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(ijVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA24 = iv.a(this.e, ijVar.e)) != 0) {
            return iA24;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(ijVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA23 = iv.a(this.f, ijVar.f)) != 0) {
            return iA23;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(ijVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA22 = iv.a(this.g, ijVar.g)) != 0) {
            return iA22;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(ijVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA21 = iv.a(this.h, ijVar.h)) != 0) {
            return iA21;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(ijVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA20 = iv.a(this.i, ijVar.i)) != 0) {
            return iA20;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(ijVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (k() && (iA19 = iv.a(this.j, ijVar.j)) != 0) {
            return iA19;
        }
        int iCompareTo12 = Boolean.valueOf(l()).compareTo(Boolean.valueOf(ijVar.l()));
        if (iCompareTo12 != 0) {
            return iCompareTo12;
        }
        if (l() && (iA18 = iv.a(this.k, ijVar.k)) != 0) {
            return iA18;
        }
        int iCompareTo13 = Boolean.valueOf(m()).compareTo(Boolean.valueOf(ijVar.m()));
        if (iCompareTo13 != 0) {
            return iCompareTo13;
        }
        if (m() && (iA17 = iv.a(this.a, ijVar.a)) != 0) {
            return iA17;
        }
        int iCompareTo14 = Boolean.valueOf(n()).compareTo(Boolean.valueOf(ijVar.n()));
        if (iCompareTo14 != 0) {
            return iCompareTo14;
        }
        if (n() && (iA16 = iv.a(this.b, ijVar.b)) != 0) {
            return iA16;
        }
        int iCompareTo15 = Boolean.valueOf(o()).compareTo(Boolean.valueOf(ijVar.o()));
        if (iCompareTo15 != 0) {
            return iCompareTo15;
        }
        if (o() && (iA15 = iv.a(this.l, ijVar.l)) != 0) {
            return iA15;
        }
        int iCompareTo16 = Boolean.valueOf(p()).compareTo(Boolean.valueOf(ijVar.p()));
        if (iCompareTo16 != 0) {
            return iCompareTo16;
        }
        if (p() && (iA14 = iv.a(this.m, ijVar.m)) != 0) {
            return iA14;
        }
        int iCompareTo17 = Boolean.valueOf(q()).compareTo(Boolean.valueOf(ijVar.q()));
        if (iCompareTo17 != 0) {
            return iCompareTo17;
        }
        if (q() && (iA13 = iv.a(this.n, ijVar.n)) != 0) {
            return iA13;
        }
        int iCompareTo18 = Boolean.valueOf(r()).compareTo(Boolean.valueOf(ijVar.r()));
        if (iCompareTo18 != 0) {
            return iCompareTo18;
        }
        if (r() && (iA12 = iv.a(this.o, ijVar.o)) != 0) {
            return iA12;
        }
        int iCompareTo19 = Boolean.valueOf(s()).compareTo(Boolean.valueOf(ijVar.s()));
        if (iCompareTo19 != 0) {
            return iCompareTo19;
        }
        if (s() && (iA11 = iv.a(this.c, ijVar.c)) != 0) {
            return iA11;
        }
        int iCompareTo20 = Boolean.valueOf(t()).compareTo(Boolean.valueOf(ijVar.t()));
        if (iCompareTo20 != 0) {
            return iCompareTo20;
        }
        if (t() && (iA10 = iv.a(this.a, ijVar.a)) != 0) {
            return iA10;
        }
        int iCompareTo21 = Boolean.valueOf(u()).compareTo(Boolean.valueOf(ijVar.u()));
        if (iCompareTo21 != 0) {
            return iCompareTo21;
        }
        if (u() && (iA9 = iv.a(this.a, ijVar.a)) != 0) {
            return iA9;
        }
        int iCompareTo22 = Boolean.valueOf(v()).compareTo(Boolean.valueOf(ijVar.v()));
        if (iCompareTo22 != 0) {
            return iCompareTo22;
        }
        if (v() && (iA8 = iv.a(this.a, ijVar.a)) != 0) {
            return iA8;
        }
        int iCompareTo23 = Boolean.valueOf(w()).compareTo(Boolean.valueOf(ijVar.w()));
        if (iCompareTo23 != 0) {
            return iCompareTo23;
        }
        if (w() && (iA7 = iv.a(this.b, ijVar.b)) != 0) {
            return iA7;
        }
        int iCompareTo24 = Boolean.valueOf(x()).compareTo(Boolean.valueOf(ijVar.x()));
        if (iCompareTo24 != 0) {
            return iCompareTo24;
        }
        if (x() && (iA6 = iv.a(this.p, ijVar.p)) != 0) {
            return iA6;
        }
        int iCompareTo25 = Boolean.valueOf(y()).compareTo(Boolean.valueOf(ijVar.y()));
        if (iCompareTo25 != 0) {
            return iCompareTo25;
        }
        if (y() && (iA5 = iv.a(this.q, ijVar.q)) != 0) {
            return iA5;
        }
        int iCompareTo26 = Boolean.valueOf(z()).compareTo(Boolean.valueOf(ijVar.z()));
        if (iCompareTo26 != 0) {
            return iCompareTo26;
        }
        if (z() && (iA4 = iv.a(this.b, ijVar.b)) != 0) {
            return iA4;
        }
        int iCompareTo27 = Boolean.valueOf(A()).compareTo(Boolean.valueOf(ijVar.A()));
        if (iCompareTo27 != 0) {
            return iCompareTo27;
        }
        if (A() && (iA3 = iv.a(this.a, ijVar.a)) != 0) {
            return iA3;
        }
        int iCompareTo28 = Boolean.valueOf(B()).compareTo(Boolean.valueOf(ijVar.B()));
        if (iCompareTo28 != 0) {
            return iCompareTo28;
        }
        if (B() && (iA2 = iv.a(this.c, ijVar.c)) != 0) {
            return iA2;
        }
        int iCompareTo29 = Boolean.valueOf(C()).compareTo(Boolean.valueOf(ijVar.C()));
        if (iCompareTo29 != 0) {
            return iCompareTo29;
        }
        if (!C() || (iA = iv.a(this.r, ijVar.r)) == 0) {
            return 0;
        }
        return iA;
    }

    public ij a(int i2) {
        this.a = i2;
        a(true);
        return this;
    }

    public ij a(hx hxVar) {
        this.a = hxVar;
        return this;
    }

    public ij a(String str) {
        this.b = str;
        return this;
    }

    public String a() {
        return this.b;
    }

    public void a() throws jg {
        if (this.b == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.c == null) {
            throw new jg("Required field 'appId' was not present! Struct: " + toString());
        }
        if (this.f != null) {
            return;
        }
        throw new jg("Required field 'token' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:10:0x0022  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void a(jf jfVar) throws jg {
        jfVar.a();
        while (true) {
            jc jcVarA = jfVar.a();
            if (jcVarA.a == 0) {
                jfVar.f();
                a();
                return;
            }
            short s2 = jcVarA.a;
            switch (s2) {
                case 1:
                    if (jcVarA.a == 11) {
                        this.a = jfVar.a();
                    } else {
                        ji.a(jfVar, jcVarA.a);
                    }
                    break;
                case 2:
                    if (jcVarA.a == 12) {
                        hy hyVar = new hy();
                        this.a = hyVar;
                        hyVar.a(jfVar);
                        break;
                    }
                    break;
                case 3:
                    if (jcVarA.a == 11) {
                        this.b = jfVar.a();
                        break;
                    }
                    break;
                case 4:
                    if (jcVarA.a == 11) {
                        this.c = jfVar.a();
                        break;
                    }
                    break;
                case 5:
                    if (jcVarA.a == 11) {
                        this.d = jfVar.a();
                        break;
                    }
                    break;
                case 6:
                    if (jcVarA.a == 11) {
                        this.e = jfVar.a();
                        break;
                    }
                    break;
                case 7:
                    if (jcVarA.a == 11) {
                        this.f = jfVar.a();
                        break;
                    }
                    break;
                case 8:
                    if (jcVarA.a == 11) {
                        this.g = jfVar.a();
                        break;
                    }
                    break;
                case 9:
                    if (jcVarA.a == 11) {
                        this.h = jfVar.a();
                        break;
                    }
                    break;
                case 10:
                    if (jcVarA.a == 11) {
                        this.i = jfVar.a();
                        break;
                    }
                    break;
                case 11:
                    if (jcVarA.a == 11) {
                        this.j = jfVar.a();
                        break;
                    }
                    break;
                case 12:
                    if (jcVarA.a == 11) {
                        this.k = jfVar.a();
                        break;
                    }
                    break;
                case 13:
                    if (jcVarA.a == 8) {
                        this.a = jfVar.a();
                        a(true);
                        break;
                    }
                    break;
                case 14:
                    if (jcVarA.a == 8) {
                        this.b = jfVar.a();
                        b(true);
                        break;
                    }
                    break;
                case 15:
                    if (jcVarA.a == 11) {
                        this.l = jfVar.a();
                        break;
                    }
                    break;
                case 16:
                    if (jcVarA.a == 11) {
                        this.m = jfVar.a();
                        break;
                    }
                    break;
                case 17:
                    if (jcVarA.a == 11) {
                        this.n = jfVar.a();
                        break;
                    }
                    break;
                case 18:
                    if (jcVarA.a == 11) {
                        this.o = jfVar.a();
                        break;
                    }
                    break;
                case 19:
                    if (jcVarA.a == 8) {
                        this.c = jfVar.a();
                        c(true);
                        break;
                    }
                    break;
                case 20:
                    if (jcVarA.a == 8) {
                        this.a = hx.a(jfVar.a());
                        break;
                    }
                    break;
                case 21:
                    if (jcVarA.a == 2) {
                        this.a = jfVar.a();
                        d(true);
                        break;
                    }
                    break;
                case 22:
                    if (jcVarA.a == 10) {
                        this.a = jfVar.a();
                        e(true);
                        break;
                    }
                    break;
                case 23:
                    if (jcVarA.a == 10) {
                        this.b = jfVar.a();
                        f(true);
                        break;
                    }
                    break;
                case 24:
                    if (jcVarA.a == 11) {
                        this.p = jfVar.a();
                        break;
                    }
                    break;
                case 25:
                    if (jcVarA.a == 11) {
                        this.q = jfVar.a();
                        break;
                    }
                    break;
                case 26:
                    if (jcVarA.a == 2) {
                        this.b = jfVar.a();
                        g(true);
                        break;
                    }
                    break;
                default:
                    switch (s2) {
                        case 100:
                            if (jcVarA.a == 13) {
                                je jeVarA = jfVar.a();
                                this.a = new HashMap(jeVarA.a * 2);
                                for (int i2 = 0; i2 < jeVarA.a; i2++) {
                                    this.a.put(jfVar.a(), jfVar.a());
                                }
                                jfVar.h();
                                break;
                            }
                            break;
                        case 101:
                            if (jcVarA.a == 2) {
                                this.c = jfVar.a();
                                h(true);
                                break;
                            }
                            break;
                        case 102:
                            if (jcVarA.a == 11) {
                                this.r = jfVar.a();
                                break;
                            }
                            break;
                    }
                    break;
            }
            jfVar.g();
        }
    }

    public void a(boolean z2) {
        this.a.set(0, z2);
    }

    public boolean a() {
        return this.a != null;
    }

    public boolean a(ij ijVar) {
        if (ijVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = ijVar.a();
        if ((zA || zA2) && !(zA && zA2 && this.a.equals(ijVar.a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = ijVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.a.a(ijVar.a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = ijVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.b.equals(ijVar.b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = ijVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.c.equals(ijVar.c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = ijVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.d.equals(ijVar.d))) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = ijVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.e.equals(ijVar.e))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = ijVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f.equals(ijVar.f))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = ijVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.g.equals(ijVar.g))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = ijVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.h.equals(ijVar.h))) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = ijVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.i.equals(ijVar.i))) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = ijVar.k();
        if ((zK || zK2) && !(zK && zK2 && this.j.equals(ijVar.j))) {
            return false;
        }
        boolean zL = l();
        boolean zL2 = ijVar.l();
        if ((zL || zL2) && !(zL && zL2 && this.k.equals(ijVar.k))) {
            return false;
        }
        boolean zM = m();
        boolean zM2 = ijVar.m();
        if ((zM || zM2) && !(zM && zM2 && this.a == ijVar.a)) {
            return false;
        }
        boolean zN = n();
        boolean zN2 = ijVar.n();
        if ((zN || zN2) && !(zN && zN2 && this.b == ijVar.b)) {
            return false;
        }
        boolean zO = o();
        boolean zO2 = ijVar.o();
        if ((zO || zO2) && !(zO && zO2 && this.l.equals(ijVar.l))) {
            return false;
        }
        boolean zP = p();
        boolean zP2 = ijVar.p();
        if ((zP || zP2) && !(zP && zP2 && this.m.equals(ijVar.m))) {
            return false;
        }
        boolean zQ = q();
        boolean zQ2 = ijVar.q();
        if ((zQ || zQ2) && !(zQ && zQ2 && this.n.equals(ijVar.n))) {
            return false;
        }
        boolean zR = r();
        boolean zR2 = ijVar.r();
        if ((zR || zR2) && !(zR && zR2 && this.o.equals(ijVar.o))) {
            return false;
        }
        boolean zS = s();
        boolean zS2 = ijVar.s();
        if ((zS || zS2) && !(zS && zS2 && this.c == ijVar.c)) {
            return false;
        }
        boolean zT = t();
        boolean zT2 = ijVar.t();
        if ((zT || zT2) && !(zT && zT2 && this.a.equals(ijVar.a))) {
            return false;
        }
        boolean zU = u();
        boolean zU2 = ijVar.u();
        if ((zU || zU2) && !(zU && zU2 && this.a == ijVar.a)) {
            return false;
        }
        boolean zV = v();
        boolean zV2 = ijVar.v();
        if ((zV || zV2) && !(zV && zV2 && this.a == ijVar.a)) {
            return false;
        }
        boolean zW = w();
        boolean zW2 = ijVar.w();
        if ((zW || zW2) && !(zW && zW2 && this.b == ijVar.b)) {
            return false;
        }
        boolean zX = x();
        boolean zX2 = ijVar.x();
        if ((zX || zX2) && !(zX && zX2 && this.p.equals(ijVar.p))) {
            return false;
        }
        boolean zY = y();
        boolean zY2 = ijVar.y();
        if ((zY || zY2) && !(zY && zY2 && this.q.equals(ijVar.q))) {
            return false;
        }
        boolean z2 = z();
        boolean z3 = ijVar.z();
        if ((z2 || z3) && !(z2 && z3 && this.b == ijVar.b)) {
            return false;
        }
        boolean zA3 = A();
        boolean zA4 = ijVar.A();
        if ((zA3 || zA4) && !(zA3 && zA4 && this.a.equals(ijVar.a))) {
            return false;
        }
        boolean zB3 = B();
        boolean zB4 = ijVar.B();
        if ((zB3 || zB4) && !(zB3 && zB4 && this.c == ijVar.c)) {
            return false;
        }
        boolean zC3 = C();
        boolean zC4 = ijVar.C();
        if (zC3 || zC4) {
            return zC3 && zC4 && this.r.equals(ijVar.r);
        }
        return true;
    }

    public ij b(int i2) {
        this.b = i2;
        b(true);
        return this;
    }

    public ij b(String str) {
        this.c = str;
        return this;
    }

    public String b() {
        return this.c;
    }

    @Override
    public void b(jf jfVar) throws jg {
        a();
        jfVar.a(a);
        if (this.a != null && a()) {
            jfVar.a(a);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.a != null && b()) {
            jfVar.a(b);
            this.a.b(jfVar);
            jfVar.b();
        }
        if (this.b != null) {
            jfVar.a(c);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (this.c != null) {
            jfVar.a(d);
            jfVar.a(this.c);
            jfVar.b();
        }
        if (this.d != null && e()) {
            jfVar.a(e);
            jfVar.a(this.d);
            jfVar.b();
        }
        if (this.e != null && f()) {
            jfVar.a(f);
            jfVar.a(this.e);
            jfVar.b();
        }
        if (this.f != null) {
            jfVar.a(g);
            jfVar.a(this.f);
            jfVar.b();
        }
        if (this.g != null && h()) {
            jfVar.a(h);
            jfVar.a(this.g);
            jfVar.b();
        }
        if (this.h != null && i()) {
            jfVar.a(i);
            jfVar.a(this.h);
            jfVar.b();
        }
        if (this.i != null && j()) {
            jfVar.a(j);
            jfVar.a(this.i);
            jfVar.b();
        }
        if (this.j != null && k()) {
            jfVar.a(k);
            jfVar.a(this.j);
            jfVar.b();
        }
        if (this.k != null && l()) {
            jfVar.a(l);
            jfVar.a(this.k);
            jfVar.b();
        }
        if (m()) {
            jfVar.a(m);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (n()) {
            jfVar.a(n);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (this.l != null && o()) {
            jfVar.a(o);
            jfVar.a(this.l);
            jfVar.b();
        }
        if (this.m != null && p()) {
            jfVar.a(p);
            jfVar.a(this.m);
            jfVar.b();
        }
        if (this.n != null && q()) {
            jfVar.a(q);
            jfVar.a(this.n);
            jfVar.b();
        }
        if (this.o != null && r()) {
            jfVar.a(r);
            jfVar.a(this.o);
            jfVar.b();
        }
        if (s()) {
            jfVar.a(s);
            jfVar.a(this.c);
            jfVar.b();
        }
        if (this.a != null && t()) {
            jfVar.a(t);
            jfVar.a(this.a.a());
            jfVar.b();
        }
        if (u()) {
            jfVar.a(u);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (v()) {
            jfVar.a(v);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (w()) {
            jfVar.a(w);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (this.p != null && x()) {
            jfVar.a(x);
            jfVar.a(this.p);
            jfVar.b();
        }
        if (this.q != null && y()) {
            jfVar.a(y);
            jfVar.a(this.q);
            jfVar.b();
        }
        if (z()) {
            jfVar.a(z);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (this.a != null && A()) {
            jfVar.a(A);
            jfVar.a(new je((byte) 11, (byte) 11, this.a.size()));
            for (Map.Entry<String, String> entry : this.a.entrySet()) {
                jfVar.a(entry.getKey());
                jfVar.a(entry.getValue());
            }
            jfVar.d();
            jfVar.b();
        }
        if (B()) {
            jfVar.a(B);
            jfVar.a(this.c);
            jfVar.b();
        }
        if (this.r != null && C()) {
            jfVar.a(C);
            jfVar.a(this.r);
            jfVar.b();
        }
        jfVar.c();
        jfVar.a();
    }

    public void b(boolean z2) {
        this.a.set(1, z2);
    }

    public boolean b() {
        return this.a != null;
    }

    public ij c(int i2) {
        this.c = i2;
        c(true);
        return this;
    }

    public ij c(String str) {
        this.d = str;
        return this;
    }

    public String c() {
        return this.f;
    }

    public void c(boolean z2) {
        this.a.set(2, z2);
    }

    public boolean c() {
        return this.b != null;
    }

    public ij d(String str) {
        this.e = str;
        return this;
    }

    public void d(boolean z2) {
        this.a.set(3, z2);
    }

    public boolean d() {
        return this.c != null;
    }

    public ij e(String str) {
        this.f = str;
        return this;
    }

    public void e(boolean z2) {
        this.a.set(4, z2);
    }

    public boolean e() {
        return this.d != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof ij)) {
            return a((ij) obj);
        }
        return false;
    }

    public ij f(String str) {
        this.g = str;
        return this;
    }

    public void f(boolean z2) {
        this.a.set(5, z2);
    }

    public boolean f() {
        return this.e != null;
    }

    public ij g(String str) {
        this.h = str;
        return this;
    }

    public void g(boolean z2) {
        this.a.set(6, z2);
    }

    public boolean g() {
        return this.f != null;
    }

    public ij h(String str) {
        this.k = str;
        return this;
    }

    public void h(boolean z2) {
        this.a.set(7, z2);
    }

    public boolean h() {
        return this.g != null;
    }

    public int hashCode() {
        return 0;
    }

    public ij i(String str) {
        this.o = str;
        return this;
    }

    public boolean i() {
        return this.h != null;
    }

    public boolean j() {
        return this.i != null;
    }

    public boolean k() {
        return this.j != null;
    }

    public boolean l() {
        return this.k != null;
    }

    public boolean m() {
        return this.a.get(0);
    }

    public boolean n() {
        return this.a.get(1);
    }

    public boolean o() {
        return this.l != null;
    }

    public boolean p() {
        return this.m != null;
    }

    public boolean q() {
        return this.n != null;
    }

    public boolean r() {
        return this.o != null;
    }

    public boolean s() {
        return this.a.get(2);
    }

    public boolean t() {
        return this.a != null;
    }

    public String toString() {
        boolean z2;
        StringBuilder sb = new StringBuilder("XmPushActionRegistration(");
        boolean z3 = false;
        if (a()) {
            sb.append("debug:");
            String str = this.a;
            if (str == null) {
                sb.append("null");
            } else {
                sb.append(str);
            }
            z2 = false;
        } else {
            z2 = true;
        }
        if (b()) {
            if (!z2) {
                sb.append(", ");
            }
            sb.append("target:");
            hy hyVar = this.a;
            if (hyVar == null) {
                sb.append("null");
            } else {
                sb.append(hyVar);
            }
        } else {
            z3 = z2;
        }
        if (!z3) {
            sb.append(", ");
        }
        sb.append("id:");
        String str2 = this.b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        sb.append(", ");
        sb.append("appId:");
        String str3 = this.c;
        if (str3 == null) {
            sb.append("null");
        } else {
            sb.append(str3);
        }
        if (e()) {
            sb.append(", ");
            sb.append("appVersion:");
            String str4 = this.d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (f()) {
            sb.append(", ");
            sb.append("packageName:");
            String str5 = this.e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        sb.append(", ");
        sb.append("token:");
        String str6 = this.f;
        if (str6 == null) {
            sb.append("null");
        } else {
            sb.append(str6);
        }
        if (h()) {
            sb.append(", ");
            sb.append("deviceId:");
            String str7 = this.g;
            if (str7 == null) {
                sb.append("null");
            } else {
                sb.append(str7);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("aliasName:");
            String str8 = this.h;
            if (str8 == null) {
                sb.append("null");
            } else {
                sb.append(str8);
            }
        }
        if (j()) {
            sb.append(", ");
            sb.append("sdkVersion:");
            String str9 = this.i;
            if (str9 == null) {
                sb.append("null");
            } else {
                sb.append(str9);
            }
        }
        if (k()) {
            sb.append(", ");
            sb.append("regId:");
            String str10 = this.j;
            if (str10 == null) {
                sb.append("null");
            } else {
                sb.append(str10);
            }
        }
        if (l()) {
            sb.append(", ");
            sb.append("pushSdkVersionName:");
            String str11 = this.k;
            if (str11 == null) {
                sb.append("null");
            } else {
                sb.append(str11);
            }
        }
        if (m()) {
            sb.append(", ");
            sb.append("pushSdkVersionCode:");
            sb.append(this.a);
        }
        if (n()) {
            sb.append(", ");
            sb.append("appVersionCode:");
            sb.append(this.b);
        }
        if (o()) {
            sb.append(", ");
            sb.append("androidId:");
            String str12 = this.l;
            if (str12 == null) {
                sb.append("null");
            } else {
                sb.append(str12);
            }
        }
        if (p()) {
            sb.append(", ");
            sb.append("imei:");
            String str13 = this.m;
            if (str13 == null) {
                sb.append("null");
            } else {
                sb.append(str13);
            }
        }
        if (q()) {
            sb.append(", ");
            sb.append("serial:");
            String str14 = this.n;
            if (str14 == null) {
                sb.append("null");
            } else {
                sb.append(str14);
            }
        }
        if (r()) {
            sb.append(", ");
            sb.append("imeiMd5:");
            String str15 = this.o;
            if (str15 == null) {
                sb.append("null");
            } else {
                sb.append(str15);
            }
        }
        if (s()) {
            sb.append(", ");
            sb.append("spaceId:");
            sb.append(this.c);
        }
        if (t()) {
            sb.append(", ");
            sb.append("reason:");
            hx hxVar = this.a;
            if (hxVar == null) {
                sb.append("null");
            } else {
                sb.append(hxVar);
            }
        }
        if (u()) {
            sb.append(", ");
            sb.append("validateToken:");
            sb.append(this.a);
        }
        if (v()) {
            sb.append(", ");
            sb.append("miid:");
            sb.append(this.a);
        }
        if (w()) {
            sb.append(", ");
            sb.append("createdTs:");
            sb.append(this.b);
        }
        if (x()) {
            sb.append(", ");
            sb.append("subImei:");
            String str16 = this.p;
            if (str16 == null) {
                sb.append("null");
            } else {
                sb.append(str16);
            }
        }
        if (y()) {
            sb.append(", ");
            sb.append("subImeiMd5:");
            String str17 = this.q;
            if (str17 == null) {
                sb.append("null");
            } else {
                sb.append(str17);
            }
        }
        if (z()) {
            sb.append(", ");
            sb.append("isHybridFrame:");
            sb.append(this.b);
        }
        if (A()) {
            sb.append(", ");
            sb.append("connectionAttrs:");
            Map<String, String> map = this.a;
            if (map == null) {
                sb.append("null");
            } else {
                sb.append(map);
            }
        }
        if (B()) {
            sb.append(", ");
            sb.append("cleanOldRegInfo:");
            sb.append(this.c);
        }
        if (C()) {
            sb.append(", ");
            sb.append("oldRegId:");
            String str18 = this.r;
            if (str18 == null) {
                sb.append("null");
            } else {
                sb.append(str18);
            }
        }
        sb.append(")");
        return sb.toString();
    }

    public boolean u() {
        return this.a.get(3);
    }

    public boolean v() {
        return this.a.get(4);
    }

    public boolean w() {
        return this.a.get(5);
    }

    public boolean x() {
        return this.p != null;
    }

    public boolean y() {
        return this.q != null;
    }

    public boolean z() {
        return this.a.get(6);
    }
}
