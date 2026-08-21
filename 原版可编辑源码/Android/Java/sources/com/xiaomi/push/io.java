package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

public class io implements iu<io, Object>, Serializable, Cloneable {
    public long a;
    public hy a;
    public String a;
    private BitSet a = new BitSet(1);
    public String b;
    public String c;
    public String d;
    public String e;
    public String f;
    public String g;
    private static final jk a = new jk("XmPushActionSubscriptionResult");
    private static final jc a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 10, 6);
    private static final jc f = new jc("", (byte) 11, 7);
    private static final jc g = new jc("", (byte) 11, 8);
    private static final jc h = new jc("", (byte) 11, 9);
    private static final jc i = new jc("", (byte) 11, 10);

    @Override
    public int compareTo(io ioVar) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        int iA7;
        int iA8;
        int iA9;
        if (!getClass().equals(ioVar.getClass())) {
            return getClass().getName().compareTo(ioVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(ioVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA9 = iv.a(this.a, ioVar.a)) != 0) {
            return iA9;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(ioVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA8 = iv.a(this.a, ioVar.a)) != 0) {
            return iA8;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(ioVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA7 = iv.a(this.b, ioVar.b)) != 0) {
            return iA7;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(ioVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA6 = iv.a(this.c, ioVar.c)) != 0) {
            return iA6;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(ioVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA5 = iv.a(this.a, ioVar.a)) != 0) {
            return iA5;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(ioVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA4 = iv.a(this.d, ioVar.d)) != 0) {
            return iA4;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(ioVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA3 = iv.a(this.e, ioVar.e)) != 0) {
            return iA3;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(ioVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA2 = iv.a(this.f, ioVar.f)) != 0) {
            return iA2;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(ioVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (!i() || (iA = iv.a(this.g, ioVar.g)) == 0) {
            return 0;
        }
        return iA;
    }

    public String a() {
        return this.b;
    }

    public void a() throws jg {
        if (this.b != null) {
            return;
        }
        throw new jg("Required field 'id' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0019  */
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

    public boolean a(io ioVar) {
        if (ioVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = ioVar.a();
        if ((zA || zA2) && !(zA && zA2 && this.a.equals(ioVar.a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = ioVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.a.a(ioVar.a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = ioVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.b.equals(ioVar.b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = ioVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.c.equals(ioVar.c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = ioVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.a == ioVar.a)) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = ioVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.d.equals(ioVar.d))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = ioVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.e.equals(ioVar.e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = ioVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f.equals(ioVar.f))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = ioVar.i();
        if (zI || zI2) {
            return zI && zI2 && this.g.equals(ioVar.g);
        }
        return true;
    }

    public String b() {
        return this.e;
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
        if (this.c != null && d()) {
            jfVar.a(d);
            jfVar.a(this.c);
            jfVar.b();
        }
        if (e()) {
            jfVar.a(e);
            jfVar.a(this.a);
            jfVar.b();
        }
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
        jfVar.c();
        jfVar.a();
    }

    public boolean b() {
        return this.a != null;
    }

    public String c() {
        return this.g;
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
        if (obj != null && (obj instanceof io)) {
            return a((io) obj);
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
        return this.f != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.g != null;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionSubscriptionResult(");
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
        if (d()) {
            sb.append(", ");
            sb.append("appId:");
            String str3 = this.c;
            if (str3 == null) {
                sb.append("null");
            } else {
                sb.append(str3);
            }
        }
        if (e()) {
            sb.append(", ");
            sb.append("errorCode:");
            sb.append(this.a);
        }
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
            sb.append("topic:");
            String str5 = this.e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("packageName:");
            String str6 = this.f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("category:");
            String str7 = this.g;
            if (str7 == null) {
                sb.append("null");
            } else {
                sb.append(str7);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}
