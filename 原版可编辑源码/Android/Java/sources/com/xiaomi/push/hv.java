package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

public class hv implements iu<hv, Object>, Serializable, Cloneable {
    public long a;
    public hw a;
    public hy a;
    public String a;
    private BitSet a = new BitSet(4);
    public boolean a = false;
    public long b;
    public String b;
    public long c;
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
    private static final jk a = new jk("PushMessage");
    private static final jc a = new jc("", (byte) 12, 1);
    private static final jc b = new jc("", (byte) 11, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 10, 5);
    private static final jc f = new jc("", (byte) 10, 6);
    private static final jc g = new jc("", (byte) 11, 7);
    private static final jc h = new jc("", (byte) 11, 8);
    private static final jc i = new jc("", (byte) 11, 9);
    private static final jc j = new jc("", (byte) 11, 10);
    private static final jc k = new jc("", (byte) 11, 11);
    private static final jc l = new jc("", (byte) 12, 12);
    private static final jc m = new jc("", (byte) 11, 13);
    private static final jc n = new jc("", (byte) 2, 14);
    private static final jc o = new jc("", (byte) 11, 15);
    private static final jc p = new jc("", (byte) 10, 16);
    private static final jc q = new jc("", (byte) 11, 20);
    private static final jc r = new jc("", (byte) 11, 21);

    @Override
    public int compareTo(hv hvVar) {
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
        if (!getClass().equals(hvVar.getClass())) {
            return getClass().getName().compareTo(hvVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(hvVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA18 = iv.a(this.a, hvVar.a)) != 0) {
            return iA18;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(hvVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA17 = iv.a(this.a, hvVar.a)) != 0) {
            return iA17;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(hvVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA16 = iv.a(this.b, hvVar.b)) != 0) {
            return iA16;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(hvVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA15 = iv.a(this.c, hvVar.c)) != 0) {
            return iA15;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(hvVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA14 = iv.a(this.a, hvVar.a)) != 0) {
            return iA14;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(hvVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA13 = iv.a(this.b, hvVar.b)) != 0) {
            return iA13;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(hvVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA12 = iv.a(this.d, hvVar.d)) != 0) {
            return iA12;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(hvVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA11 = iv.a(this.e, hvVar.e)) != 0) {
            return iA11;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(hvVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA10 = iv.a(this.f, hvVar.f)) != 0) {
            return iA10;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(hvVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA9 = iv.a(this.g, hvVar.g)) != 0) {
            return iA9;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(hvVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (k() && (iA8 = iv.a(this.h, hvVar.h)) != 0) {
            return iA8;
        }
        int iCompareTo12 = Boolean.valueOf(l()).compareTo(Boolean.valueOf(hvVar.l()));
        if (iCompareTo12 != 0) {
            return iCompareTo12;
        }
        if (l() && (iA7 = iv.a(this.a, hvVar.a)) != 0) {
            return iA7;
        }
        int iCompareTo13 = Boolean.valueOf(m()).compareTo(Boolean.valueOf(hvVar.m()));
        if (iCompareTo13 != 0) {
            return iCompareTo13;
        }
        if (m() && (iA6 = iv.a(this.i, hvVar.i)) != 0) {
            return iA6;
        }
        int iCompareTo14 = Boolean.valueOf(n()).compareTo(Boolean.valueOf(hvVar.n()));
        if (iCompareTo14 != 0) {
            return iCompareTo14;
        }
        if (n() && (iA5 = iv.a(this.a, hvVar.a)) != 0) {
            return iA5;
        }
        int iCompareTo15 = Boolean.valueOf(o()).compareTo(Boolean.valueOf(hvVar.o()));
        if (iCompareTo15 != 0) {
            return iCompareTo15;
        }
        if (o() && (iA4 = iv.a(this.j, hvVar.j)) != 0) {
            return iA4;
        }
        int iCompareTo16 = Boolean.valueOf(p()).compareTo(Boolean.valueOf(hvVar.p()));
        if (iCompareTo16 != 0) {
            return iCompareTo16;
        }
        if (p() && (iA3 = iv.a(this.c, hvVar.c)) != 0) {
            return iA3;
        }
        int iCompareTo17 = Boolean.valueOf(q()).compareTo(Boolean.valueOf(hvVar.q()));
        if (iCompareTo17 != 0) {
            return iCompareTo17;
        }
        if (q() && (iA2 = iv.a(this.k, hvVar.k)) != 0) {
            return iA2;
        }
        int iCompareTo18 = Boolean.valueOf(r()).compareTo(Boolean.valueOf(hvVar.r()));
        if (iCompareTo18 != 0) {
            return iCompareTo18;
        }
        if (!r() || (iA = iv.a(this.l, hvVar.l)) == 0) {
            return 0;
        }
        return iA;
    }

    public long a() {
        return this.a;
    }

    public String a() {
        return this.a;
    }

    public void a() throws jg {
        if (this.a == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.b == null) {
            throw new jg("Required field 'appId' was not present! Struct: " + toString());
        }
        if (this.c != null) {
            return;
        }
        throw new jg("Required field 'payload' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0026  */
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
            short s = jcVarA.a;
            if (s != 20) {
                if (s != 21) {
                    switch (s) {
                        case 1:
                            if (jcVarA.a != 12) {
                                ji.a(jfVar, jcVarA.a);
                            } else {
                                hy hyVar = new hy();
                                this.a = hyVar;
                                hyVar.a(jfVar);
                            }
                            break;
                        case 2:
                            if (jcVarA.a == 11) {
                                this.a = jfVar.a();
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
                            if (jcVarA.a == 10) {
                                this.a = jfVar.a();
                                a(true);
                                break;
                            }
                            break;
                        case 6:
                            if (jcVarA.a == 10) {
                                this.b = jfVar.a();
                                b(true);
                                break;
                            }
                            break;
                        case 7:
                            if (jcVarA.a == 11) {
                                this.d = jfVar.a();
                                break;
                            }
                            break;
                        case 8:
                            if (jcVarA.a == 11) {
                                this.e = jfVar.a();
                                break;
                            }
                            break;
                        case 9:
                            if (jcVarA.a == 11) {
                                this.f = jfVar.a();
                                break;
                            }
                            break;
                        case 10:
                            if (jcVarA.a == 11) {
                                this.g = jfVar.a();
                                break;
                            }
                            break;
                        case 11:
                            if (jcVarA.a == 11) {
                                this.h = jfVar.a();
                                break;
                            }
                            break;
                        case 12:
                            if (jcVarA.a == 12) {
                                hw hwVar = new hw();
                                this.a = hwVar;
                                hwVar.a(jfVar);
                                break;
                            }
                            break;
                        case 13:
                            if (jcVarA.a == 11) {
                                this.i = jfVar.a();
                                break;
                            }
                            break;
                        case 14:
                            if (jcVarA.a == 2) {
                                this.a = jfVar.a();
                                c(true);
                                break;
                            }
                            break;
                        case 15:
                            if (jcVarA.a == 11) {
                                this.j = jfVar.a();
                                break;
                            }
                            break;
                        case 16:
                            if (jcVarA.a == 10) {
                                this.c = jfVar.a();
                                d(true);
                                break;
                            }
                            break;
                    }
                } else if (jcVarA.a == 11) {
                    this.l = jfVar.a();
                }
            } else if (jcVarA.a == 11) {
                this.k = jfVar.a();
            }
            jfVar.g();
        }
    }

    public void a(boolean z) {
        this.a.set(0, z);
    }

    public boolean a() {
        return this.a != null;
    }

    public boolean a(hv hvVar) {
        if (hvVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = hvVar.a();
        if ((zA || zA2) && !(zA && zA2 && this.a.a(hvVar.a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = hvVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.a.equals(hvVar.a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = hvVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.b.equals(hvVar.b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = hvVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.c.equals(hvVar.c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = hvVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.a == hvVar.a)) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = hvVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.b == hvVar.b)) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = hvVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.d.equals(hvVar.d))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = hvVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.e.equals(hvVar.e))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = hvVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.f.equals(hvVar.f))) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = hvVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.g.equals(hvVar.g))) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = hvVar.k();
        if ((zK || zK2) && !(zK && zK2 && this.h.equals(hvVar.h))) {
            return false;
        }
        boolean zL = l();
        boolean zL2 = hvVar.l();
        if ((zL || zL2) && !(zL && zL2 && this.a.a(hvVar.a))) {
            return false;
        }
        boolean zM = m();
        boolean zM2 = hvVar.m();
        if ((zM || zM2) && !(zM && zM2 && this.i.equals(hvVar.i))) {
            return false;
        }
        boolean zN = n();
        boolean zN2 = hvVar.n();
        if ((zN || zN2) && !(zN && zN2 && this.a == hvVar.a)) {
            return false;
        }
        boolean zO = o();
        boolean zO2 = hvVar.o();
        if ((zO || zO2) && !(zO && zO2 && this.j.equals(hvVar.j))) {
            return false;
        }
        boolean zP = p();
        boolean zP2 = hvVar.p();
        if ((zP || zP2) && !(zP && zP2 && this.c == hvVar.c)) {
            return false;
        }
        boolean zQ = q();
        boolean zQ2 = hvVar.q();
        if ((zQ || zQ2) && !(zQ && zQ2 && this.k.equals(hvVar.k))) {
            return false;
        }
        boolean zR = r();
        boolean zR2 = hvVar.r();
        if (zR || zR2) {
            return zR && zR2 && this.l.equals(hvVar.l);
        }
        return true;
    }

    public String b() {
        return this.b;
    }

    @Override
    public void b(jf jfVar) throws jg {
        a();
        jfVar.a(a);
        if (this.a != null && a()) {
            jfVar.a(a);
            this.a.b(jfVar);
            jfVar.b();
        }
        if (this.a != null) {
            jfVar.a(b);
            jfVar.a(this.a);
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
        if (e()) {
            jfVar.a(e);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (f()) {
            jfVar.a(f);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (this.d != null && g()) {
            jfVar.a(g);
            jfVar.a(this.d);
            jfVar.b();
        }
        if (this.e != null && h()) {
            jfVar.a(h);
            jfVar.a(this.e);
            jfVar.b();
        }
        if (this.f != null && i()) {
            jfVar.a(i);
            jfVar.a(this.f);
            jfVar.b();
        }
        if (this.g != null && j()) {
            jfVar.a(j);
            jfVar.a(this.g);
            jfVar.b();
        }
        if (this.h != null && k()) {
            jfVar.a(k);
            jfVar.a(this.h);
            jfVar.b();
        }
        if (this.a != null && l()) {
            jfVar.a(l);
            this.a.b(jfVar);
            jfVar.b();
        }
        if (this.i != null && m()) {
            jfVar.a(m);
            jfVar.a(this.i);
            jfVar.b();
        }
        if (n()) {
            jfVar.a(n);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.j != null && o()) {
            jfVar.a(o);
            jfVar.a(this.j);
            jfVar.b();
        }
        if (p()) {
            jfVar.a(p);
            jfVar.a(this.c);
            jfVar.b();
        }
        if (this.k != null && q()) {
            jfVar.a(q);
            jfVar.a(this.k);
            jfVar.b();
        }
        if (this.l != null && r()) {
            jfVar.a(r);
            jfVar.a(this.l);
            jfVar.b();
        }
        jfVar.c();
        jfVar.a();
    }

    public void b(boolean z) {
        this.a.set(1, z);
    }

    public boolean b() {
        return this.a != null;
    }

    public String c() {
        return this.c;
    }

    public void c(boolean z) {
        this.a.set(2, z);
    }

    public boolean c() {
        return this.b != null;
    }

    public void d(boolean z) {
        this.a.set(3, z);
    }

    public boolean d() {
        return this.c != null;
    }

    public boolean e() {
        return this.a.get(0);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof hv)) {
            return a((hv) obj);
        }
        return false;
    }

    public boolean f() {
        return this.a.get(1);
    }

    public boolean g() {
        return this.d != null;
    }

    public boolean h() {
        return this.e != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f != null;
    }

    public boolean j() {
        return this.g != null;
    }

    public boolean k() {
        return this.h != null;
    }

    public boolean l() {
        return this.a != null;
    }

    public boolean m() {
        return this.i != null;
    }

    public boolean n() {
        return this.a.get(2);
    }

    public boolean o() {
        return this.j != null;
    }

    public boolean p() {
        return this.a.get(3);
    }

    public boolean q() {
        return this.k != null;
    }

    public boolean r() {
        return this.l != null;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("PushMessage(");
        if (a()) {
            sb.append("to:");
            hy hyVar = this.a;
            if (hyVar == null) {
                sb.append("null");
            } else {
                sb.append(hyVar);
            }
            z = false;
        } else {
            z = true;
        }
        if (!z) {
            sb.append(", ");
        }
        sb.append("id:");
        String str = this.a;
        if (str == null) {
            sb.append("null");
        } else {
            sb.append(str);
        }
        sb.append(", ");
        sb.append("appId:");
        String str2 = this.b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        sb.append(", ");
        sb.append("payload:");
        String str3 = this.c;
        if (str3 == null) {
            sb.append("null");
        } else {
            sb.append(str3);
        }
        if (e()) {
            sb.append(", ");
            sb.append("createAt:");
            sb.append(this.a);
        }
        if (f()) {
            sb.append(", ");
            sb.append("ttl:");
            sb.append(this.b);
        }
        if (g()) {
            sb.append(", ");
            sb.append("collapseKey:");
            String str4 = this.d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("packageName:");
            String str5 = this.e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("regId:");
            String str6 = this.f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (j()) {
            sb.append(", ");
            sb.append("category:");
            String str7 = this.g;
            if (str7 == null) {
                sb.append("null");
            } else {
                sb.append(str7);
            }
        }
        if (k()) {
            sb.append(", ");
            sb.append("topic:");
            String str8 = this.h;
            if (str8 == null) {
                sb.append("null");
            } else {
                sb.append(str8);
            }
        }
        if (l()) {
            sb.append(", ");
            sb.append("metaInfo:");
            hw hwVar = this.a;
            if (hwVar == null) {
                sb.append("null");
            } else {
                sb.append(hwVar);
            }
        }
        if (m()) {
            sb.append(", ");
            sb.append("aliasName:");
            String str9 = this.i;
            if (str9 == null) {
                sb.append("null");
            } else {
                sb.append(str9);
            }
        }
        if (n()) {
            sb.append(", ");
            sb.append("isOnline:");
            sb.append(this.a);
        }
        if (o()) {
            sb.append(", ");
            sb.append("userAccount:");
            String str10 = this.j;
            if (str10 == null) {
                sb.append("null");
            } else {
                sb.append(str10);
            }
        }
        if (p()) {
            sb.append(", ");
            sb.append("miid:");
            sb.append(this.c);
        }
        if (q()) {
            sb.append(", ");
            sb.append("imeiMd5:");
            String str11 = this.k;
            if (str11 == null) {
                sb.append("null");
            } else {
                sb.append(str11);
            }
        }
        if (r()) {
            sb.append(", ");
            sb.append("deviceId:");
            String str12 = this.l;
            if (str12 == null) {
                sb.append("null");
            } else {
                sb.append(str12);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}
