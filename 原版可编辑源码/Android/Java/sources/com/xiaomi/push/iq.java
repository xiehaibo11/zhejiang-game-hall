package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

public class iq implements iu<iq, Object>, Serializable, Cloneable {
    public long a;
    public hy a;
    public String a;
    private BitSet a = new BitSet(3);
    public long b;
    public String b;
    public long c;
    public String c;
    public String d;
    public String e;
    private static final jk a = new jk("XmPushActionUnRegistrationResult");
    private static final jc a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 10, 6);
    private static final jc f = new jc("", (byte) 11, 7);
    private static final jc g = new jc("", (byte) 11, 8);
    private static final jc h = new jc("", (byte) 10, 9);
    private static final jc i = new jc("", (byte) 10, 10);

    @Override
    public int compareTo(iq iqVar) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        int iA7;
        int iA8;
        int iA9;
        if (!getClass().equals(iqVar.getClass())) {
            return getClass().getName().compareTo(iqVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(iqVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA9 = iv.a(this.a, iqVar.a)) != 0) {
            return iA9;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(iqVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA8 = iv.a(this.a, iqVar.a)) != 0) {
            return iA8;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(iqVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA7 = iv.a(this.b, iqVar.b)) != 0) {
            return iA7;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(iqVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA6 = iv.a(this.c, iqVar.c)) != 0) {
            return iA6;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(iqVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA5 = iv.a(this.a, iqVar.a)) != 0) {
            return iA5;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(iqVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA4 = iv.a(this.d, iqVar.d)) != 0) {
            return iA4;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(iqVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA3 = iv.a(this.e, iqVar.e)) != 0) {
            return iA3;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(iqVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA2 = iv.a(this.b, iqVar.b)) != 0) {
            return iA2;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(iqVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (!i() || (iA = iv.a(this.c, iqVar.c)) == 0) {
            return 0;
        }
        return iA;
    }

    public String a() {
        return this.e;
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
    /* JADX WARN: Removed duplicated region for block: B:13:0x003d  */
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
                    if (jcVarA.a == 10) {
                        this.b = jfVar.a();
                        b(true);
                        break;
                    }
                    break;
                case 10:
                    if (jcVarA.a == 10) {
                        this.c = jfVar.a();
                        c(true);
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

    public boolean a(iq iqVar) {
        if (iqVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = iqVar.a();
        if ((zA || zA2) && !(zA && zA2 && this.a.equals(iqVar.a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = iqVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.a.a(iqVar.a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = iqVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.b.equals(iqVar.b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = iqVar.d();
        if (((zD || zD2) && !(zD && zD2 && this.c.equals(iqVar.c))) || this.a != iqVar.a) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = iqVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.d.equals(iqVar.d))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = iqVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.e.equals(iqVar.e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = iqVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.b == iqVar.b)) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = iqVar.i();
        if (zI || zI2) {
            return zI && zI2 && this.c == iqVar.c;
        }
        return true;
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
        if (h()) {
            jfVar.a(h);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (i()) {
            jfVar.a(i);
            jfVar.a(this.c);
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

    public void c(boolean z) {
        this.a.set(2, z);
    }

    public boolean c() {
        return this.b != null;
    }

    public boolean d() {
        return this.c != null;
    }

    public boolean e() {
        return this.a.get(0);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof iq)) {
            return a((iq) obj);
        }
        return false;
    }

    public boolean f() {
        return this.d != null;
    }

    public boolean g() {
        return this.e != null;
    }

    public boolean h() {
        return this.a.get(1);
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.a.get(2);
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionUnRegistrationResult(");
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
            sb.append("packageName:");
            String str5 = this.e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("unRegisteredAt:");
            sb.append(this.b);
        }
        if (i()) {
            sb.append(", ");
            sb.append("costTime:");
            sb.append(this.c);
        }
        sb.append(")");
        return sb.toString();
    }
}
