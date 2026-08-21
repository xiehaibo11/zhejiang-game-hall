package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

public class ip implements iu<ip, Object>, Serializable, Cloneable {
    public long a;
    public hy a;
    public String a;
    private BitSet a = new BitSet(2);
    public boolean a = true;
    public String b;
    public String c;
    public String d;
    public String e;
    public String f;
    public String g;
    public String h;
    public String i;
    private static final jk a = new jk("XmPushActionUnRegistration");
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
    private static final jc k = new jc("", (byte) 2, 11);
    private static final jc l = new jc("", (byte) 10, 12);

    @Override
    public int compareTo(ip ipVar) {
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
        if (!getClass().equals(ipVar.getClass())) {
            return getClass().getName().compareTo(ipVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(ipVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA12 = iv.a(this.a, ipVar.a)) != 0) {
            return iA12;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(ipVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA11 = iv.a(this.a, ipVar.a)) != 0) {
            return iA11;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(ipVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA10 = iv.a(this.b, ipVar.b)) != 0) {
            return iA10;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(ipVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA9 = iv.a(this.c, ipVar.c)) != 0) {
            return iA9;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(ipVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA8 = iv.a(this.d, ipVar.d)) != 0) {
            return iA8;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(ipVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA7 = iv.a(this.e, ipVar.e)) != 0) {
            return iA7;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(ipVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA6 = iv.a(this.f, ipVar.f)) != 0) {
            return iA6;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(ipVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA5 = iv.a(this.g, ipVar.g)) != 0) {
            return iA5;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(ipVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA4 = iv.a(this.h, ipVar.h)) != 0) {
            return iA4;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(ipVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA3 = iv.a(this.i, ipVar.i)) != 0) {
            return iA3;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(ipVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (k() && (iA2 = iv.a(this.a, ipVar.a)) != 0) {
            return iA2;
        }
        int iCompareTo12 = Boolean.valueOf(l()).compareTo(Boolean.valueOf(ipVar.l()));
        if (iCompareTo12 != 0) {
            return iCompareTo12;
        }
        if (!l() || (iA = iv.a(this.a, ipVar.a)) == 0) {
            return 0;
        }
        return iA;
    }

    public ip a(String str) {
        this.b = str;
        return this;
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
    /* JADX WARN: Removed duplicated region for block: B:9:0x001a  */
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
            switch (jcVarA.a) {
                case 1:
                    if (jcVarA.a != 11) {
                        ji.a(jfVar, jcVarA.a);
                    } else {
                        this.a = jfVar.a();
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
                    if (jcVarA.a == 2) {
                        this.a = jfVar.a();
                        a(true);
                        break;
                    }
                    break;
                case 12:
                    if (jcVarA.a == 10) {
                        this.a = jfVar.a();
                        b(true);
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

    public boolean a(ip ipVar) {
        if (ipVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = ipVar.a();
        if ((zA || zA2) && !(zA && zA2 && this.a.equals(ipVar.a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = ipVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.a.a(ipVar.a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = ipVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.b.equals(ipVar.b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = ipVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.c.equals(ipVar.c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = ipVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.d.equals(ipVar.d))) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = ipVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.e.equals(ipVar.e))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = ipVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f.equals(ipVar.f))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = ipVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.g.equals(ipVar.g))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = ipVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.h.equals(ipVar.h))) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = ipVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.i.equals(ipVar.i))) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = ipVar.k();
        if ((zK || zK2) && !(zK && zK2 && this.a == ipVar.a)) {
            return false;
        }
        boolean zL = l();
        boolean zL2 = ipVar.l();
        if (zL || zL2) {
            return zL && zL2 && this.a == ipVar.a;
        }
        return true;
    }

    public ip b(String str) {
        this.c = str;
        return this;
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
        if (this.f != null && g()) {
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
        if (k()) {
            jfVar.a(k);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (l()) {
            jfVar.a(l);
            jfVar.a(this.a);
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

    public ip c(String str) {
        this.d = str;
        return this;
    }

    public boolean c() {
        return this.b != null;
    }

    public ip d(String str) {
        this.f = str;
        return this;
    }

    public boolean d() {
        return this.c != null;
    }

    public ip e(String str) {
        this.g = str;
        return this;
    }

    public boolean e() {
        return this.d != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof ip)) {
            return a((ip) obj);
        }
        return false;
    }

    public boolean f() {
        return this.e != null;
    }

    public boolean g() {
        return this.f != null;
    }

    public boolean h() {
        return this.g != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.h != null;
    }

    public boolean j() {
        return this.i != null;
    }

    public boolean k() {
        return this.a.get(0);
    }

    public boolean l() {
        return this.a.get(1);
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionUnRegistration(");
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
        if (e()) {
            sb.append(", ");
            sb.append("regId:");
            String str4 = this.d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (f()) {
            sb.append(", ");
            sb.append("appVersion:");
            String str5 = this.e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("packageName:");
            String str6 = this.f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("token:");
            String str7 = this.g;
            if (str7 == null) {
                sb.append("null");
            } else {
                sb.append(str7);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("deviceId:");
            String str8 = this.h;
            if (str8 == null) {
                sb.append("null");
            } else {
                sb.append(str8);
            }
        }
        if (j()) {
            sb.append(", ");
            sb.append("aliasName:");
            String str9 = this.i;
            if (str9 == null) {
                sb.append("null");
            } else {
                sb.append(str9);
            }
        }
        if (k()) {
            sb.append(", ");
            sb.append("needAck:");
            sb.append(this.a);
        }
        if (l()) {
            sb.append(", ");
            sb.append("createdTs:");
            sb.append(this.a);
        }
        sb.append(")");
        return sb.toString();
    }
}
