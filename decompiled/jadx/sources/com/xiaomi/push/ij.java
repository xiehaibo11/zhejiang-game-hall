package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class ij implements iu<ij, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public int f670a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f671a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hx f672a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hy f673a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f674a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public Map<String, String> f676a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public int f678b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public long f679b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f680b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public int f682c;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f683c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f685d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f686e;

    /* JADX INFO: renamed from: f, reason: collision with other field name */
    public String f687f;

    /* JADX INFO: renamed from: g, reason: collision with other field name */
    public String f688g;

    /* JADX INFO: renamed from: h, reason: collision with other field name */
    public String f689h;

    /* JADX INFO: renamed from: i, reason: collision with other field name */
    public String f690i;

    /* JADX INFO: renamed from: j, reason: collision with other field name */
    public String f691j;

    /* JADX INFO: renamed from: k, reason: collision with other field name */
    public String f692k;

    /* JADX INFO: renamed from: l, reason: collision with other field name */
    public String f693l;

    /* JADX INFO: renamed from: m, reason: collision with other field name */
    public String f694m;

    /* JADX INFO: renamed from: n, reason: collision with other field name */
    public String f695n;

    /* JADX INFO: renamed from: o, reason: collision with other field name */
    public String f696o;

    /* JADX INFO: renamed from: p, reason: collision with other field name */
    public String f697p;

    /* JADX INFO: renamed from: q, reason: collision with other field name */
    public String f698q;

    /* JADX INFO: renamed from: r, reason: collision with other field name */
    public String f699r;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f669a = new jk("XmPushActionRegistration");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8232a = new jc("", (byte) 11, 1);
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

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f675a = new BitSet(8);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public boolean f677a = true;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public boolean f684c = false;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public boolean f681b = false;

    public boolean A() {
        return this.f676a != null;
    }

    public boolean B() {
        return this.f675a.get(7);
    }

    public boolean C() {
        return this.f699r != null;
    }

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
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
        int iCompareTo = Boolean.valueOf(m503a()).compareTo(Boolean.valueOf(ijVar.m503a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m503a() && (iA29 = iv.a(this.f674a, ijVar.f674a)) != 0) {
            return iA29;
        }
        int iCompareTo2 = Boolean.valueOf(m505b()).compareTo(Boolean.valueOf(ijVar.m505b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (m505b() && (iA28 = iv.a(this.f673a, ijVar.f673a)) != 0) {
            return iA28;
        }
        int iCompareTo3 = Boolean.valueOf(m506c()).compareTo(Boolean.valueOf(ijVar.m506c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (m506c() && (iA27 = iv.a(this.f680b, ijVar.f680b)) != 0) {
            return iA27;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(ijVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA26 = iv.a(this.f683c, ijVar.f683c)) != 0) {
            return iA26;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(ijVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA25 = iv.a(this.f685d, ijVar.f685d)) != 0) {
            return iA25;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(ijVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA24 = iv.a(this.f686e, ijVar.f686e)) != 0) {
            return iA24;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(ijVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA23 = iv.a(this.f687f, ijVar.f687f)) != 0) {
            return iA23;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(ijVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA22 = iv.a(this.f688g, ijVar.f688g)) != 0) {
            return iA22;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(ijVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA21 = iv.a(this.f689h, ijVar.f689h)) != 0) {
            return iA21;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(ijVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA20 = iv.a(this.f690i, ijVar.f690i)) != 0) {
            return iA20;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(ijVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (k() && (iA19 = iv.a(this.f691j, ijVar.f691j)) != 0) {
            return iA19;
        }
        int iCompareTo12 = Boolean.valueOf(l()).compareTo(Boolean.valueOf(ijVar.l()));
        if (iCompareTo12 != 0) {
            return iCompareTo12;
        }
        if (l() && (iA18 = iv.a(this.f692k, ijVar.f692k)) != 0) {
            return iA18;
        }
        int iCompareTo13 = Boolean.valueOf(m()).compareTo(Boolean.valueOf(ijVar.m()));
        if (iCompareTo13 != 0) {
            return iCompareTo13;
        }
        if (m() && (iA17 = iv.a(this.f670a, ijVar.f670a)) != 0) {
            return iA17;
        }
        int iCompareTo14 = Boolean.valueOf(n()).compareTo(Boolean.valueOf(ijVar.n()));
        if (iCompareTo14 != 0) {
            return iCompareTo14;
        }
        if (n() && (iA16 = iv.a(this.f678b, ijVar.f678b)) != 0) {
            return iA16;
        }
        int iCompareTo15 = Boolean.valueOf(o()).compareTo(Boolean.valueOf(ijVar.o()));
        if (iCompareTo15 != 0) {
            return iCompareTo15;
        }
        if (o() && (iA15 = iv.a(this.f693l, ijVar.f693l)) != 0) {
            return iA15;
        }
        int iCompareTo16 = Boolean.valueOf(p()).compareTo(Boolean.valueOf(ijVar.p()));
        if (iCompareTo16 != 0) {
            return iCompareTo16;
        }
        if (p() && (iA14 = iv.a(this.f694m, ijVar.f694m)) != 0) {
            return iA14;
        }
        int iCompareTo17 = Boolean.valueOf(q()).compareTo(Boolean.valueOf(ijVar.q()));
        if (iCompareTo17 != 0) {
            return iCompareTo17;
        }
        if (q() && (iA13 = iv.a(this.f695n, ijVar.f695n)) != 0) {
            return iA13;
        }
        int iCompareTo18 = Boolean.valueOf(r()).compareTo(Boolean.valueOf(ijVar.r()));
        if (iCompareTo18 != 0) {
            return iCompareTo18;
        }
        if (r() && (iA12 = iv.a(this.f696o, ijVar.f696o)) != 0) {
            return iA12;
        }
        int iCompareTo19 = Boolean.valueOf(s()).compareTo(Boolean.valueOf(ijVar.s()));
        if (iCompareTo19 != 0) {
            return iCompareTo19;
        }
        if (s() && (iA11 = iv.a(this.f682c, ijVar.f682c)) != 0) {
            return iA11;
        }
        int iCompareTo20 = Boolean.valueOf(t()).compareTo(Boolean.valueOf(ijVar.t()));
        if (iCompareTo20 != 0) {
            return iCompareTo20;
        }
        if (t() && (iA10 = iv.a(this.f672a, ijVar.f672a)) != 0) {
            return iA10;
        }
        int iCompareTo21 = Boolean.valueOf(u()).compareTo(Boolean.valueOf(ijVar.u()));
        if (iCompareTo21 != 0) {
            return iCompareTo21;
        }
        if (u() && (iA9 = iv.a(this.f677a, ijVar.f677a)) != 0) {
            return iA9;
        }
        int iCompareTo22 = Boolean.valueOf(v()).compareTo(Boolean.valueOf(ijVar.v()));
        if (iCompareTo22 != 0) {
            return iCompareTo22;
        }
        if (v() && (iA8 = iv.a(this.f671a, ijVar.f671a)) != 0) {
            return iA8;
        }
        int iCompareTo23 = Boolean.valueOf(w()).compareTo(Boolean.valueOf(ijVar.w()));
        if (iCompareTo23 != 0) {
            return iCompareTo23;
        }
        if (w() && (iA7 = iv.a(this.f679b, ijVar.f679b)) != 0) {
            return iA7;
        }
        int iCompareTo24 = Boolean.valueOf(x()).compareTo(Boolean.valueOf(ijVar.x()));
        if (iCompareTo24 != 0) {
            return iCompareTo24;
        }
        if (x() && (iA6 = iv.a(this.f697p, ijVar.f697p)) != 0) {
            return iA6;
        }
        int iCompareTo25 = Boolean.valueOf(y()).compareTo(Boolean.valueOf(ijVar.y()));
        if (iCompareTo25 != 0) {
            return iCompareTo25;
        }
        if (y() && (iA5 = iv.a(this.f698q, ijVar.f698q)) != 0) {
            return iA5;
        }
        int iCompareTo26 = Boolean.valueOf(z()).compareTo(Boolean.valueOf(ijVar.z()));
        if (iCompareTo26 != 0) {
            return iCompareTo26;
        }
        if (z() && (iA4 = iv.a(this.f681b, ijVar.f681b)) != 0) {
            return iA4;
        }
        int iCompareTo27 = Boolean.valueOf(A()).compareTo(Boolean.valueOf(ijVar.A()));
        if (iCompareTo27 != 0) {
            return iCompareTo27;
        }
        if (A() && (iA3 = iv.a(this.f676a, ijVar.f676a)) != 0) {
            return iA3;
        }
        int iCompareTo28 = Boolean.valueOf(B()).compareTo(Boolean.valueOf(ijVar.B()));
        if (iCompareTo28 != 0) {
            return iCompareTo28;
        }
        if (B() && (iA2 = iv.a(this.f684c, ijVar.f684c)) != 0) {
            return iA2;
        }
        int iCompareTo29 = Boolean.valueOf(C()).compareTo(Boolean.valueOf(ijVar.C()));
        if (iCompareTo29 != 0) {
            return iCompareTo29;
        }
        if (!C() || (iA = iv.a(this.f699r, ijVar.f699r)) == 0) {
            return 0;
        }
        return iA;
    }

    public ij a(int i2) {
        this.f670a = i2;
        a(true);
        return this;
    }

    public ij a(hx hxVar) {
        this.f672a = hxVar;
        return this;
    }

    public ij a(String str) {
        this.f680b = str;
        return this;
    }

    public String a() {
        return this.f680b;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m502a() throws jg {
        if (this.f680b == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.f683c == null) {
            throw new jg("Required field 'appId' was not present! Struct: " + toString());
        }
        if (this.f687f != null) {
            return;
        }
        throw new jg("Required field 'token' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:10:0x0022  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r8) throws com.xiaomi.push.jg {
        /*
            Method dump skipped, instruction units count: 518
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.ij.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z2) {
        this.f675a.set(0, z2);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m503a() {
        return this.f674a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m504a(ij ijVar) {
        if (ijVar == null) {
            return false;
        }
        boolean zM503a = m503a();
        boolean zM503a2 = ijVar.m503a();
        if ((zM503a || zM503a2) && !(zM503a && zM503a2 && this.f674a.equals(ijVar.f674a))) {
            return false;
        }
        boolean zM505b = m505b();
        boolean zM505b2 = ijVar.m505b();
        if ((zM505b || zM505b2) && !(zM505b && zM505b2 && this.f673a.m456a(ijVar.f673a))) {
            return false;
        }
        boolean zM506c = m506c();
        boolean zM506c2 = ijVar.m506c();
        if ((zM506c || zM506c2) && !(zM506c && zM506c2 && this.f680b.equals(ijVar.f680b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = ijVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.f683c.equals(ijVar.f683c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = ijVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.f685d.equals(ijVar.f685d))) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = ijVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.f686e.equals(ijVar.f686e))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = ijVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f687f.equals(ijVar.f687f))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = ijVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f688g.equals(ijVar.f688g))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = ijVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.f689h.equals(ijVar.f689h))) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = ijVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.f690i.equals(ijVar.f690i))) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = ijVar.k();
        if ((zK || zK2) && !(zK && zK2 && this.f691j.equals(ijVar.f691j))) {
            return false;
        }
        boolean zL = l();
        boolean zL2 = ijVar.l();
        if ((zL || zL2) && !(zL && zL2 && this.f692k.equals(ijVar.f692k))) {
            return false;
        }
        boolean zM = m();
        boolean zM2 = ijVar.m();
        if ((zM || zM2) && !(zM && zM2 && this.f670a == ijVar.f670a)) {
            return false;
        }
        boolean zN = n();
        boolean zN2 = ijVar.n();
        if ((zN || zN2) && !(zN && zN2 && this.f678b == ijVar.f678b)) {
            return false;
        }
        boolean zO = o();
        boolean zO2 = ijVar.o();
        if ((zO || zO2) && !(zO && zO2 && this.f693l.equals(ijVar.f693l))) {
            return false;
        }
        boolean zP = p();
        boolean zP2 = ijVar.p();
        if ((zP || zP2) && !(zP && zP2 && this.f694m.equals(ijVar.f694m))) {
            return false;
        }
        boolean zQ = q();
        boolean zQ2 = ijVar.q();
        if ((zQ || zQ2) && !(zQ && zQ2 && this.f695n.equals(ijVar.f695n))) {
            return false;
        }
        boolean zR = r();
        boolean zR2 = ijVar.r();
        if ((zR || zR2) && !(zR && zR2 && this.f696o.equals(ijVar.f696o))) {
            return false;
        }
        boolean zS = s();
        boolean zS2 = ijVar.s();
        if ((zS || zS2) && !(zS && zS2 && this.f682c == ijVar.f682c)) {
            return false;
        }
        boolean zT = t();
        boolean zT2 = ijVar.t();
        if ((zT || zT2) && !(zT && zT2 && this.f672a.equals(ijVar.f672a))) {
            return false;
        }
        boolean zU = u();
        boolean zU2 = ijVar.u();
        if ((zU || zU2) && !(zU && zU2 && this.f677a == ijVar.f677a)) {
            return false;
        }
        boolean zV = v();
        boolean zV2 = ijVar.v();
        if ((zV || zV2) && !(zV && zV2 && this.f671a == ijVar.f671a)) {
            return false;
        }
        boolean zW = w();
        boolean zW2 = ijVar.w();
        if ((zW || zW2) && !(zW && zW2 && this.f679b == ijVar.f679b)) {
            return false;
        }
        boolean zX = x();
        boolean zX2 = ijVar.x();
        if ((zX || zX2) && !(zX && zX2 && this.f697p.equals(ijVar.f697p))) {
            return false;
        }
        boolean zY = y();
        boolean zY2 = ijVar.y();
        if ((zY || zY2) && !(zY && zY2 && this.f698q.equals(ijVar.f698q))) {
            return false;
        }
        boolean z2 = z();
        boolean z3 = ijVar.z();
        if ((z2 || z3) && !(z2 && z3 && this.f681b == ijVar.f681b)) {
            return false;
        }
        boolean zA = A();
        boolean zA2 = ijVar.A();
        if ((zA || zA2) && !(zA && zA2 && this.f676a.equals(ijVar.f676a))) {
            return false;
        }
        boolean zB = B();
        boolean zB2 = ijVar.B();
        if ((zB || zB2) && !(zB && zB2 && this.f684c == ijVar.f684c)) {
            return false;
        }
        boolean zC = C();
        boolean zC2 = ijVar.C();
        if (zC || zC2) {
            return zC && zC2 && this.f699r.equals(ijVar.f699r);
        }
        return true;
    }

    public ij b(int i2) {
        this.f678b = i2;
        b(true);
        return this;
    }

    public ij b(String str) {
        this.f683c = str;
        return this;
    }

    public String b() {
        return this.f683c;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m502a();
        jfVar.a(f669a);
        if (this.f674a != null && m503a()) {
            jfVar.a(f8232a);
            jfVar.a(this.f674a);
            jfVar.b();
        }
        if (this.f673a != null && m505b()) {
            jfVar.a(b);
            this.f673a.b(jfVar);
            jfVar.b();
        }
        if (this.f680b != null) {
            jfVar.a(c);
            jfVar.a(this.f680b);
            jfVar.b();
        }
        if (this.f683c != null) {
            jfVar.a(d);
            jfVar.a(this.f683c);
            jfVar.b();
        }
        if (this.f685d != null && e()) {
            jfVar.a(e);
            jfVar.a(this.f685d);
            jfVar.b();
        }
        if (this.f686e != null && f()) {
            jfVar.a(f);
            jfVar.a(this.f686e);
            jfVar.b();
        }
        if (this.f687f != null) {
            jfVar.a(g);
            jfVar.a(this.f687f);
            jfVar.b();
        }
        if (this.f688g != null && h()) {
            jfVar.a(h);
            jfVar.a(this.f688g);
            jfVar.b();
        }
        if (this.f689h != null && i()) {
            jfVar.a(i);
            jfVar.a(this.f689h);
            jfVar.b();
        }
        if (this.f690i != null && j()) {
            jfVar.a(j);
            jfVar.a(this.f690i);
            jfVar.b();
        }
        if (this.f691j != null && k()) {
            jfVar.a(k);
            jfVar.a(this.f691j);
            jfVar.b();
        }
        if (this.f692k != null && l()) {
            jfVar.a(l);
            jfVar.a(this.f692k);
            jfVar.b();
        }
        if (m()) {
            jfVar.a(m);
            jfVar.mo567a(this.f670a);
            jfVar.b();
        }
        if (n()) {
            jfVar.a(n);
            jfVar.mo567a(this.f678b);
            jfVar.b();
        }
        if (this.f693l != null && o()) {
            jfVar.a(o);
            jfVar.a(this.f693l);
            jfVar.b();
        }
        if (this.f694m != null && p()) {
            jfVar.a(p);
            jfVar.a(this.f694m);
            jfVar.b();
        }
        if (this.f695n != null && q()) {
            jfVar.a(q);
            jfVar.a(this.f695n);
            jfVar.b();
        }
        if (this.f696o != null && r()) {
            jfVar.a(r);
            jfVar.a(this.f696o);
            jfVar.b();
        }
        if (s()) {
            jfVar.a(s);
            jfVar.mo567a(this.f682c);
            jfVar.b();
        }
        if (this.f672a != null && t()) {
            jfVar.a(t);
            jfVar.mo567a(this.f672a.a());
            jfVar.b();
        }
        if (u()) {
            jfVar.a(u);
            jfVar.a(this.f677a);
            jfVar.b();
        }
        if (v()) {
            jfVar.a(v);
            jfVar.a(this.f671a);
            jfVar.b();
        }
        if (w()) {
            jfVar.a(w);
            jfVar.a(this.f679b);
            jfVar.b();
        }
        if (this.f697p != null && x()) {
            jfVar.a(x);
            jfVar.a(this.f697p);
            jfVar.b();
        }
        if (this.f698q != null && y()) {
            jfVar.a(y);
            jfVar.a(this.f698q);
            jfVar.b();
        }
        if (z()) {
            jfVar.a(z);
            jfVar.a(this.f681b);
            jfVar.b();
        }
        if (this.f676a != null && A()) {
            jfVar.a(A);
            jfVar.a(new je((byte) 11, (byte) 11, this.f676a.size()));
            for (Map.Entry<String, String> entry : this.f676a.entrySet()) {
                jfVar.a(entry.getKey());
                jfVar.a(entry.getValue());
            }
            jfVar.d();
            jfVar.b();
        }
        if (B()) {
            jfVar.a(B);
            jfVar.a(this.f684c);
            jfVar.b();
        }
        if (this.f699r != null && C()) {
            jfVar.a(C);
            jfVar.a(this.f699r);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public void b(boolean z2) {
        this.f675a.set(1, z2);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m505b() {
        return this.f673a != null;
    }

    public ij c(int i2) {
        this.f682c = i2;
        c(true);
        return this;
    }

    public ij c(String str) {
        this.f685d = str;
        return this;
    }

    public String c() {
        return this.f687f;
    }

    public void c(boolean z2) {
        this.f675a.set(2, z2);
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public boolean m506c() {
        return this.f680b != null;
    }

    public ij d(String str) {
        this.f686e = str;
        return this;
    }

    public void d(boolean z2) {
        this.f675a.set(3, z2);
    }

    public boolean d() {
        return this.f683c != null;
    }

    public ij e(String str) {
        this.f687f = str;
        return this;
    }

    public void e(boolean z2) {
        this.f675a.set(4, z2);
    }

    public boolean e() {
        return this.f685d != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof ij)) {
            return m504a((ij) obj);
        }
        return false;
    }

    public ij f(String str) {
        this.f688g = str;
        return this;
    }

    public void f(boolean z2) {
        this.f675a.set(5, z2);
    }

    public boolean f() {
        return this.f686e != null;
    }

    public ij g(String str) {
        this.f689h = str;
        return this;
    }

    public void g(boolean z2) {
        this.f675a.set(6, z2);
    }

    public boolean g() {
        return this.f687f != null;
    }

    public ij h(String str) {
        this.f692k = str;
        return this;
    }

    public void h(boolean z2) {
        this.f675a.set(7, z2);
    }

    public boolean h() {
        return this.f688g != null;
    }

    public int hashCode() {
        return 0;
    }

    public ij i(String str) {
        this.f696o = str;
        return this;
    }

    public boolean i() {
        return this.f689h != null;
    }

    public boolean j() {
        return this.f690i != null;
    }

    public boolean k() {
        return this.f691j != null;
    }

    public boolean l() {
        return this.f692k != null;
    }

    public boolean m() {
        return this.f675a.get(0);
    }

    public boolean n() {
        return this.f675a.get(1);
    }

    public boolean o() {
        return this.f693l != null;
    }

    public boolean p() {
        return this.f694m != null;
    }

    public boolean q() {
        return this.f695n != null;
    }

    public boolean r() {
        return this.f696o != null;
    }

    public boolean s() {
        return this.f675a.get(2);
    }

    public boolean t() {
        return this.f672a != null;
    }

    public String toString() {
        boolean z2;
        StringBuilder sb = new StringBuilder("XmPushActionRegistration(");
        boolean z3 = false;
        if (m503a()) {
            sb.append("debug:");
            String str = this.f674a;
            if (str == null) {
                sb.append("null");
            } else {
                sb.append(str);
            }
            z2 = false;
        } else {
            z2 = true;
        }
        if (m505b()) {
            if (!z2) {
                sb.append(", ");
            }
            sb.append("target:");
            hy hyVar = this.f673a;
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
        String str2 = this.f680b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        sb.append(", ");
        sb.append("appId:");
        String str3 = this.f683c;
        if (str3 == null) {
            sb.append("null");
        } else {
            sb.append(str3);
        }
        if (e()) {
            sb.append(", ");
            sb.append("appVersion:");
            String str4 = this.f685d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (f()) {
            sb.append(", ");
            sb.append("packageName:");
            String str5 = this.f686e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        sb.append(", ");
        sb.append("token:");
        String str6 = this.f687f;
        if (str6 == null) {
            sb.append("null");
        } else {
            sb.append(str6);
        }
        if (h()) {
            sb.append(", ");
            sb.append("deviceId:");
            String str7 = this.f688g;
            if (str7 == null) {
                sb.append("null");
            } else {
                sb.append(str7);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("aliasName:");
            String str8 = this.f689h;
            if (str8 == null) {
                sb.append("null");
            } else {
                sb.append(str8);
            }
        }
        if (j()) {
            sb.append(", ");
            sb.append("sdkVersion:");
            String str9 = this.f690i;
            if (str9 == null) {
                sb.append("null");
            } else {
                sb.append(str9);
            }
        }
        if (k()) {
            sb.append(", ");
            sb.append("regId:");
            String str10 = this.f691j;
            if (str10 == null) {
                sb.append("null");
            } else {
                sb.append(str10);
            }
        }
        if (l()) {
            sb.append(", ");
            sb.append("pushSdkVersionName:");
            String str11 = this.f692k;
            if (str11 == null) {
                sb.append("null");
            } else {
                sb.append(str11);
            }
        }
        if (m()) {
            sb.append(", ");
            sb.append("pushSdkVersionCode:");
            sb.append(this.f670a);
        }
        if (n()) {
            sb.append(", ");
            sb.append("appVersionCode:");
            sb.append(this.f678b);
        }
        if (o()) {
            sb.append(", ");
            sb.append("androidId:");
            String str12 = this.f693l;
            if (str12 == null) {
                sb.append("null");
            } else {
                sb.append(str12);
            }
        }
        if (p()) {
            sb.append(", ");
            sb.append("imei:");
            String str13 = this.f694m;
            if (str13 == null) {
                sb.append("null");
            } else {
                sb.append(str13);
            }
        }
        if (q()) {
            sb.append(", ");
            sb.append("serial:");
            String str14 = this.f695n;
            if (str14 == null) {
                sb.append("null");
            } else {
                sb.append(str14);
            }
        }
        if (r()) {
            sb.append(", ");
            sb.append("imeiMd5:");
            String str15 = this.f696o;
            if (str15 == null) {
                sb.append("null");
            } else {
                sb.append(str15);
            }
        }
        if (s()) {
            sb.append(", ");
            sb.append("spaceId:");
            sb.append(this.f682c);
        }
        if (t()) {
            sb.append(", ");
            sb.append("reason:");
            hx hxVar = this.f672a;
            if (hxVar == null) {
                sb.append("null");
            } else {
                sb.append(hxVar);
            }
        }
        if (u()) {
            sb.append(", ");
            sb.append("validateToken:");
            sb.append(this.f677a);
        }
        if (v()) {
            sb.append(", ");
            sb.append("miid:");
            sb.append(this.f671a);
        }
        if (w()) {
            sb.append(", ");
            sb.append("createdTs:");
            sb.append(this.f679b);
        }
        if (x()) {
            sb.append(", ");
            sb.append("subImei:");
            String str16 = this.f697p;
            if (str16 == null) {
                sb.append("null");
            } else {
                sb.append(str16);
            }
        }
        if (y()) {
            sb.append(", ");
            sb.append("subImeiMd5:");
            String str17 = this.f698q;
            if (str17 == null) {
                sb.append("null");
            } else {
                sb.append(str17);
            }
        }
        if (z()) {
            sb.append(", ");
            sb.append("isHybridFrame:");
            sb.append(this.f681b);
        }
        if (A()) {
            sb.append(", ");
            sb.append("connectionAttrs:");
            Map<String, String> map = this.f676a;
            if (map == null) {
                sb.append("null");
            } else {
                sb.append(map);
            }
        }
        if (B()) {
            sb.append(", ");
            sb.append("cleanOldRegInfo:");
            sb.append(this.f684c);
        }
        if (C()) {
            sb.append(", ");
            sb.append("oldRegId:");
            String str18 = this.f699r;
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
        return this.f675a.get(3);
    }

    public boolean v() {
        return this.f675a.get(4);
    }

    public boolean w() {
        return this.f675a.get(5);
    }

    public boolean x() {
        return this.f697p != null;
    }

    public boolean y() {
        return this.f698q != null;
    }

    public boolean z() {
        return this.f675a.get(6);
    }
}
