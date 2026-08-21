package com.xiaomi.push;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.BitSet;
import java.util.Iterator;
import java.util.List;

public class ik implements iu<ik, Object>, Serializable, Cloneable {
    public int a;
    public long a;
    public hy a;
    public String a;
    public List<String> a;
    public int b;
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
    private static final jk a = new jk("XmPushActionRegistrationResult");
    private static final jc a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 10, 6);
    private static final jc f = new jc("", (byte) 11, 7);
    private static final jc g = new jc("", (byte) 11, 8);
    private static final jc h = new jc("", (byte) 11, 9);
    private static final jc i = new jc("", (byte) 11, 10);
    private static final jc j = new jc("", (byte) 10, 11);
    private static final jc k = new jc("", (byte) 11, 12);
    private static final jc l = new jc("", (byte) 11, 13);
    private static final jc m = new jc("", (byte) 10, 14);
    private static final jc n = new jc("", (byte) 11, 15);
    private static final jc o = new jc("", (byte) 8, 16);
    private static final jc p = new jc("", (byte) 11, 17);
    private static final jc q = new jc("", (byte) 8, 18);
    private static final jc r = new jc("", (byte) 11, 19);
    private static final jc s = new jc("", (byte) 2, 20);
    private static final jc t = new jc("", (byte) 15, 21);
    private BitSet a = new BitSet(6);
    public boolean a = false;

    @Override
    public int compareTo(ik ikVar) {
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
        if (!getClass().equals(ikVar.getClass())) {
            return getClass().getName().compareTo(ikVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(ikVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA20 = iv.a(this.a, ikVar.a)) != 0) {
            return iA20;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(ikVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA19 = iv.a(this.a, ikVar.a)) != 0) {
            return iA19;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(ikVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA18 = iv.a(this.b, ikVar.b)) != 0) {
            return iA18;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(ikVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA17 = iv.a(this.c, ikVar.c)) != 0) {
            return iA17;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(ikVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA16 = iv.a(this.a, ikVar.a)) != 0) {
            return iA16;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(ikVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA15 = iv.a(this.d, ikVar.d)) != 0) {
            return iA15;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(ikVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA14 = iv.a(this.e, ikVar.e)) != 0) {
            return iA14;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(ikVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA13 = iv.a(this.f, ikVar.f)) != 0) {
            return iA13;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(ikVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA12 = iv.a(this.g, ikVar.g)) != 0) {
            return iA12;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(ikVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA11 = iv.a(this.b, ikVar.b)) != 0) {
            return iA11;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(ikVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (k() && (iA10 = iv.a(this.h, ikVar.h)) != 0) {
            return iA10;
        }
        int iCompareTo12 = Boolean.valueOf(l()).compareTo(Boolean.valueOf(ikVar.l()));
        if (iCompareTo12 != 0) {
            return iCompareTo12;
        }
        if (l() && (iA9 = iv.a(this.i, ikVar.i)) != 0) {
            return iA9;
        }
        int iCompareTo13 = Boolean.valueOf(m()).compareTo(Boolean.valueOf(ikVar.m()));
        if (iCompareTo13 != 0) {
            return iCompareTo13;
        }
        if (m() && (iA8 = iv.a(this.c, ikVar.c)) != 0) {
            return iA8;
        }
        int iCompareTo14 = Boolean.valueOf(n()).compareTo(Boolean.valueOf(ikVar.n()));
        if (iCompareTo14 != 0) {
            return iCompareTo14;
        }
        if (n() && (iA7 = iv.a(this.j, ikVar.j)) != 0) {
            return iA7;
        }
        int iCompareTo15 = Boolean.valueOf(o()).compareTo(Boolean.valueOf(ikVar.o()));
        if (iCompareTo15 != 0) {
            return iCompareTo15;
        }
        if (o() && (iA6 = iv.a(this.a, ikVar.a)) != 0) {
            return iA6;
        }
        int iCompareTo16 = Boolean.valueOf(p()).compareTo(Boolean.valueOf(ikVar.p()));
        if (iCompareTo16 != 0) {
            return iCompareTo16;
        }
        if (p() && (iA5 = iv.a(this.k, ikVar.k)) != 0) {
            return iA5;
        }
        int iCompareTo17 = Boolean.valueOf(q()).compareTo(Boolean.valueOf(ikVar.q()));
        if (iCompareTo17 != 0) {
            return iCompareTo17;
        }
        if (q() && (iA4 = iv.a(this.b, ikVar.b)) != 0) {
            return iA4;
        }
        int iCompareTo18 = Boolean.valueOf(r()).compareTo(Boolean.valueOf(ikVar.r()));
        if (iCompareTo18 != 0) {
            return iCompareTo18;
        }
        if (r() && (iA3 = iv.a(this.l, ikVar.l)) != 0) {
            return iA3;
        }
        int iCompareTo19 = Boolean.valueOf(s()).compareTo(Boolean.valueOf(ikVar.s()));
        if (iCompareTo19 != 0) {
            return iCompareTo19;
        }
        if (s() && (iA2 = iv.a(this.a, ikVar.a)) != 0) {
            return iA2;
        }
        int iCompareTo20 = Boolean.valueOf(t()).compareTo(Boolean.valueOf(ikVar.t()));
        if (iCompareTo20 != 0) {
            return iCompareTo20;
        }
        if (!t() || (iA = iv.a(this.a, ikVar.a)) == 0) {
            return 0;
        }
        return iA;
    }

    public long a() {
        return this.a;
    }

    public String a() {
        return this.b;
    }

    public List<String> a() {
        return this.a;
    }

    public void a() throws jg {
        if (this.b == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.c != null) {
            return;
        }
        throw new jg("Required field 'appId' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:13:0x003f  */
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
                if (e()) {
                    a();
                    return;
                }
                throw new jg("Required field 'errorCode' was not found in serialized data! Struct: " + toString());
            }
            switch (jcVarA.a) {
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
                case 6:
                    if (jcVarA.a == 10) {
                        this.a = jfVar.a();
                        a(true);
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
                    if (jcVarA.a == 10) {
                        this.b = jfVar.a();
                        b(true);
                        break;
                    }
                    break;
                case 12:
                    if (jcVarA.a == 11) {
                        this.h = jfVar.a();
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
                    if (jcVarA.a == 10) {
                        this.c = jfVar.a();
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
                    if (jcVarA.a == 8) {
                        this.a = jfVar.a();
                        d(true);
                        break;
                    }
                    break;
                case 17:
                    if (jcVarA.a == 11) {
                        this.k = jfVar.a();
                        break;
                    }
                    break;
                case 18:
                    if (jcVarA.a == 8) {
                        this.b = jfVar.a();
                        e(true);
                        break;
                    }
                    break;
                case 19:
                    if (jcVarA.a == 11) {
                        this.l = jfVar.a();
                        break;
                    }
                    break;
                case 20:
                    if (jcVarA.a == 2) {
                        this.a = jfVar.a();
                        f(true);
                        break;
                    }
                    break;
                case 21:
                    if (jcVarA.a == 15) {
                        jd jdVarA = jfVar.a();
                        this.a = new ArrayList(jdVarA.a);
                        for (int i2 = 0; i2 < jdVarA.a; i2++) {
                            this.a.add(jfVar.a());
                        }
                        jfVar.i();
                        break;
                    }
                    break;
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

    public boolean a(ik ikVar) {
        if (ikVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = ikVar.a();
        if ((zA || zA2) && !(zA && zA2 && this.a.equals(ikVar.a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = ikVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.a.a(ikVar.a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = ikVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.b.equals(ikVar.b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = ikVar.d();
        if (((zD || zD2) && !(zD && zD2 && this.c.equals(ikVar.c))) || this.a != ikVar.a) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = ikVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.d.equals(ikVar.d))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = ikVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.e.equals(ikVar.e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = ikVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f.equals(ikVar.f))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = ikVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.g.equals(ikVar.g))) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = ikVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.b == ikVar.b)) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = ikVar.k();
        if ((zK || zK2) && !(zK && zK2 && this.h.equals(ikVar.h))) {
            return false;
        }
        boolean zL = l();
        boolean zL2 = ikVar.l();
        if ((zL || zL2) && !(zL && zL2 && this.i.equals(ikVar.i))) {
            return false;
        }
        boolean zM = m();
        boolean zM2 = ikVar.m();
        if ((zM || zM2) && !(zM && zM2 && this.c == ikVar.c)) {
            return false;
        }
        boolean zN = n();
        boolean zN2 = ikVar.n();
        if ((zN || zN2) && !(zN && zN2 && this.j.equals(ikVar.j))) {
            return false;
        }
        boolean zO = o();
        boolean zO2 = ikVar.o();
        if ((zO || zO2) && !(zO && zO2 && this.a == ikVar.a)) {
            return false;
        }
        boolean zP = p();
        boolean zP2 = ikVar.p();
        if ((zP || zP2) && !(zP && zP2 && this.k.equals(ikVar.k))) {
            return false;
        }
        boolean zQ = q();
        boolean zQ2 = ikVar.q();
        if ((zQ || zQ2) && !(zQ && zQ2 && this.b == ikVar.b)) {
            return false;
        }
        boolean zR = r();
        boolean zR2 = ikVar.r();
        if ((zR || zR2) && !(zR && zR2 && this.l.equals(ikVar.l))) {
            return false;
        }
        boolean zS = s();
        boolean zS2 = ikVar.s();
        if ((zS || zS2) && !(zS && zS2 && this.a == ikVar.a)) {
            return false;
        }
        boolean zT = t();
        boolean zT2 = ikVar.t();
        if (zT || zT2) {
            return zT && zT2 && this.a.equals(ikVar.a);
        }
        return true;
    }

    public String b() {
        return this.f;
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
        jfVar.a(e);
        jfVar.a(this.a);
        jfVar.b();
        if (this.d != null && f()) {
            jfVar.a(f);
            jfVar.a(this.d);
            jfVar.b();
        }
        if (this.e != null && g()) {
            jfVar.a(g);
            jfVar.a(this.e);
            jfVar.b();
        }
        if (this.f != null && h()) {
            jfVar.a(h);
            jfVar.a(this.f);
            jfVar.b();
        }
        if (this.g != null && i()) {
            jfVar.a(i);
            jfVar.a(this.g);
            jfVar.b();
        }
        if (j()) {
            jfVar.a(j);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (this.h != null && k()) {
            jfVar.a(k);
            jfVar.a(this.h);
            jfVar.b();
        }
        if (this.i != null && l()) {
            jfVar.a(l);
            jfVar.a(this.i);
            jfVar.b();
        }
        if (m()) {
            jfVar.a(m);
            jfVar.a(this.c);
            jfVar.b();
        }
        if (this.j != null && n()) {
            jfVar.a(n);
            jfVar.a(this.j);
            jfVar.b();
        }
        if (o()) {
            jfVar.a(o);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.k != null && p()) {
            jfVar.a(p);
            jfVar.a(this.k);
            jfVar.b();
        }
        if (q()) {
            jfVar.a(q);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (this.l != null && r()) {
            jfVar.a(r);
            jfVar.a(this.l);
            jfVar.b();
        }
        if (s()) {
            jfVar.a(s);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.a != null && t()) {
            jfVar.a(t);
            jfVar.a(new jd((byte) 11, this.a.size()));
            Iterator<String> it = this.a.iterator();
            while (it.hasNext()) {
                jfVar.a(it.next());
            }
            jfVar.e();
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
        return this.g;
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

    public void e(boolean z) {
        this.a.set(4, z);
    }

    public boolean e() {
        return this.a.get(0);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof ik)) {
            return a((ik) obj);
        }
        return false;
    }

    public void f(boolean z) {
        this.a.set(5, z);
    }

    public boolean f() {
        return this.d != null;
    }

    public boolean g() {
        return this.e != null;
    }

    public boolean h() {
        return this.f != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.g != null;
    }

    public boolean j() {
        return this.a.get(1);
    }

    public boolean k() {
        return this.h != null;
    }

    public boolean l() {
        return this.i != null;
    }

    public boolean m() {
        return this.a.get(2);
    }

    public boolean n() {
        return this.j != null;
    }

    public boolean o() {
        return this.a.get(3);
    }

    public boolean p() {
        return this.k != null;
    }

    public boolean q() {
        return this.a.get(4);
    }

    public boolean r() {
        return this.l != null;
    }

    public boolean s() {
        return this.a.get(5);
    }

    public boolean t() {
        return this.a != null;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionRegistrationResult(");
        boolean z2 = false;
        if (a()) {
            sb.append("debug:");
            String str = this.a;
            if (str == null) {
                sb.append("null");
            } else {
                sb.append(str);
            }
            z = false;
        } else {
            z = true;
        }
        if (b()) {
            if (!z) {
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
            z2 = z;
        }
        if (!z2) {
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
        sb.append(", ");
        sb.append("errorCode:");
        sb.append(this.a);
        if (f()) {
            sb.append(", ");
            sb.append("reason:");
            String str4 = this.d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("regId:");
            String str5 = this.e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("regSecret:");
            String str6 = this.f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("packageName:");
            String str7 = this.g;
            if (str7 == null) {
                sb.append("null");
            } else {
                sb.append(str7);
            }
        }
        if (j()) {
            sb.append(", ");
            sb.append("registeredAt:");
            sb.append(this.b);
        }
        if (k()) {
            sb.append(", ");
            sb.append("aliasName:");
            String str8 = this.h;
            if (str8 == null) {
                sb.append("null");
            } else {
                sb.append(str8);
            }
        }
        if (l()) {
            sb.append(", ");
            sb.append("clientId:");
            String str9 = this.i;
            if (str9 == null) {
                sb.append("null");
            } else {
                sb.append(str9);
            }
        }
        if (m()) {
            sb.append(", ");
            sb.append("costTime:");
            sb.append(this.c);
        }
        if (n()) {
            sb.append(", ");
            sb.append("appVersion:");
            String str10 = this.j;
            if (str10 == null) {
                sb.append("null");
            } else {
                sb.append(str10);
            }
        }
        if (o()) {
            sb.append(", ");
            sb.append("pushSdkVersionCode:");
            sb.append(this.a);
        }
        if (p()) {
            sb.append(", ");
            sb.append("hybridPushEndpoint:");
            String str11 = this.k;
            if (str11 == null) {
                sb.append("null");
            } else {
                sb.append(str11);
            }
        }
        if (q()) {
            sb.append(", ");
            sb.append("appVersionCode:");
            sb.append(this.b);
        }
        if (r()) {
            sb.append(", ");
            sb.append("region:");
            String str12 = this.l;
            if (str12 == null) {
                sb.append("null");
            } else {
                sb.append(str12);
            }
        }
        if (s()) {
            sb.append(", ");
            sb.append("isHybridFrame:");
            sb.append(this.a);
        }
        if (t()) {
            sb.append(", ");
            sb.append("autoMarkPkgs:");
            List<String> list = this.a;
            if (list == null) {
                sb.append("null");
            } else {
                sb.append(list);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}
