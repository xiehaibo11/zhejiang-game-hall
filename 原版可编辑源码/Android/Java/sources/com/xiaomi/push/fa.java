package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

public class fa implements iu<fa, Object>, Serializable, Cloneable {
    public byte a;
    public int a;
    public String a;
    private BitSet a = new BitSet(6);
    public int b;
    public String b;
    public int c;
    public String c;
    public int d;
    public String d;
    public int e;
    private static final jk a = new jk("StatsEvent");
    private static final jc a = new jc("", (byte) 3, 1);
    private static final jc b = new jc("", (byte) 8, 2);
    private static final jc c = new jc("", (byte) 8, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 11, 5);
    private static final jc f = new jc("", (byte) 8, 6);
    private static final jc g = new jc("", (byte) 11, 7);
    private static final jc h = new jc("", (byte) 11, 8);
    private static final jc i = new jc("", (byte) 8, 9);
    private static final jc j = new jc("", (byte) 8, 10);

    @Override
    public int compareTo(fa faVar) {
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
        if (!getClass().equals(faVar.getClass())) {
            return getClass().getName().compareTo(faVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(faVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA10 = iv.a(this.a, faVar.a)) != 0) {
            return iA10;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(faVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA9 = iv.a(this.a, faVar.a)) != 0) {
            return iA9;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(faVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA8 = iv.a(this.b, faVar.b)) != 0) {
            return iA8;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(faVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA7 = iv.a(this.a, faVar.a)) != 0) {
            return iA7;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(faVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA6 = iv.a(this.b, faVar.b)) != 0) {
            return iA6;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(faVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA5 = iv.a(this.c, faVar.c)) != 0) {
            return iA5;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(faVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA4 = iv.a(this.c, faVar.c)) != 0) {
            return iA4;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(faVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA3 = iv.a(this.d, faVar.d)) != 0) {
            return iA3;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(faVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA2 = iv.a(this.d, faVar.d)) != 0) {
            return iA2;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(faVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (!j() || (iA = iv.a(this.e, faVar.e)) == 0) {
            return 0;
        }
        return iA;
    }

    public fa a(byte b2) {
        this.a = b2;
        a(true);
        return this;
    }

    public fa a(int i2) {
        this.a = i2;
        b(true);
        return this;
    }

    public fa a(String str) {
        this.a = str;
        return this;
    }

    public void a() throws jg {
        if (this.a != null) {
            return;
        }
        throw new jg("Required field 'connpt' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:21:0x007f  */
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
                if (!a()) {
                    throw new jg("Required field 'chid' was not found in serialized data! Struct: " + toString());
                }
                if (!b()) {
                    throw new jg("Required field 'type' was not found in serialized data! Struct: " + toString());
                }
                if (c()) {
                    a();
                    return;
                }
                throw new jg("Required field 'value' was not found in serialized data! Struct: " + toString());
            }
            switch (jcVarA.a) {
                case 1:
                    if (jcVarA.a != 3) {
                        ji.a(jfVar, jcVarA.a);
                    } else {
                        this.a = jfVar.a();
                        a(true);
                    }
                    break;
                case 2:
                    if (jcVarA.a == 8) {
                        this.a = jfVar.a();
                        b(true);
                        break;
                    }
                    break;
                case 3:
                    if (jcVarA.a == 8) {
                        this.b = jfVar.a();
                        c(true);
                        break;
                    }
                    break;
                case 4:
                    if (jcVarA.a == 11) {
                        this.a = jfVar.a();
                        break;
                    }
                    break;
                case 5:
                    if (jcVarA.a == 11) {
                        this.b = jfVar.a();
                        break;
                    }
                    break;
                case 6:
                    if (jcVarA.a == 8) {
                        this.c = jfVar.a();
                        d(true);
                        break;
                    }
                    break;
                case 7:
                    if (jcVarA.a == 11) {
                        this.c = jfVar.a();
                        break;
                    }
                    break;
                case 8:
                    if (jcVarA.a == 11) {
                        this.d = jfVar.a();
                        break;
                    }
                    break;
                case 9:
                    if (jcVarA.a == 8) {
                        this.d = jfVar.a();
                        e(true);
                        break;
                    }
                    break;
                case 10:
                    if (jcVarA.a == 8) {
                        this.e = jfVar.a();
                        f(true);
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
        return this.a.get(0);
    }

    public boolean a(fa faVar) {
        if (faVar == null || this.a != faVar.a || this.a != faVar.a || this.b != faVar.b) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = faVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.a.equals(faVar.a))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = faVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.b.equals(faVar.b))) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = faVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.c == faVar.c)) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = faVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.c.equals(faVar.c))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = faVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.d.equals(faVar.d))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = faVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.d == faVar.d)) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = faVar.j();
        if (zJ || zJ2) {
            return zJ && zJ2 && this.e == faVar.e;
        }
        return true;
    }

    public fa b(int i2) {
        this.b = i2;
        c(true);
        return this;
    }

    public fa b(String str) {
        this.b = str;
        return this;
    }

    @Override
    public void b(jf jfVar) {
        a();
        jfVar.a(a);
        jfVar.a(a);
        jfVar.a(this.a);
        jfVar.b();
        jfVar.a(b);
        jfVar.a(this.a);
        jfVar.b();
        jfVar.a(c);
        jfVar.a(this.b);
        jfVar.b();
        if (this.a != null) {
            jfVar.a(d);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.b != null && e()) {
            jfVar.a(e);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (f()) {
            jfVar.a(f);
            jfVar.a(this.c);
            jfVar.b();
        }
        if (this.c != null && g()) {
            jfVar.a(g);
            jfVar.a(this.c);
            jfVar.b();
        }
        if (this.d != null && h()) {
            jfVar.a(h);
            jfVar.a(this.d);
            jfVar.b();
        }
        if (i()) {
            jfVar.a(i);
            jfVar.a(this.d);
            jfVar.b();
        }
        if (j()) {
            jfVar.a(j);
            jfVar.a(this.e);
            jfVar.b();
        }
        jfVar.c();
        jfVar.a();
    }

    public void b(boolean z) {
        this.a.set(1, z);
    }

    public boolean b() {
        return this.a.get(1);
    }

    public fa c(int i2) {
        this.c = i2;
        d(true);
        return this;
    }

    public fa c(String str) {
        this.c = str;
        return this;
    }

    public void c(boolean z) {
        this.a.set(2, z);
    }

    public boolean c() {
        return this.a.get(2);
    }

    public fa d(int i2) {
        this.d = i2;
        e(true);
        return this;
    }

    public fa d(String str) {
        this.d = str;
        return this;
    }

    public void d(boolean z) {
        this.a.set(3, z);
    }

    public boolean d() {
        return this.a != null;
    }

    public void e(boolean z) {
        this.a.set(4, z);
    }

    public boolean e() {
        return this.b != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof fa)) {
            return a((fa) obj);
        }
        return false;
    }

    public void f(boolean z) {
        this.a.set(5, z);
    }

    public boolean f() {
        return this.a.get(3);
    }

    public boolean g() {
        return this.c != null;
    }

    public boolean h() {
        return this.d != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.a.get(4);
    }

    public boolean j() {
        return this.a.get(5);
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("StatsEvent(");
        sb.append("chid:");
        sb.append((int) this.a);
        sb.append(", ");
        sb.append("type:");
        sb.append(this.a);
        sb.append(", ");
        sb.append("value:");
        sb.append(this.b);
        sb.append(", ");
        sb.append("connpt:");
        String str = this.a;
        if (str == null) {
            sb.append("null");
        } else {
            sb.append(str);
        }
        if (e()) {
            sb.append(", ");
            sb.append("host:");
            String str2 = this.b;
            if (str2 == null) {
                sb.append("null");
            } else {
                sb.append(str2);
            }
        }
        if (f()) {
            sb.append(", ");
            sb.append("subvalue:");
            sb.append(this.c);
        }
        if (g()) {
            sb.append(", ");
            sb.append("annotation:");
            String str3 = this.c;
            if (str3 == null) {
                sb.append("null");
            } else {
                sb.append(str3);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("user:");
            String str4 = this.d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("time:");
            sb.append(this.d);
        }
        if (j()) {
            sb.append(", ");
            sb.append("clientIp:");
            sb.append(this.e);
        }
        sb.append(")");
        return sb.toString();
    }
}
