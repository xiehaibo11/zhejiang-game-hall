package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

public class hu implements iu<hu, Object>, Serializable, Cloneable {
    public int a;
    public long a;
    public String a;
    private BitSet a = new BitSet(6);
    public boolean a;
    public int b;
    public boolean b;
    public int c;
    private static final jk a = new jk("OnlineConfigItem");
    private static final jc a = new jc("", (byte) 8, 1);
    private static final jc b = new jc("", (byte) 8, 2);
    private static final jc c = new jc("", (byte) 2, 3);
    private static final jc d = new jc("", (byte) 8, 4);
    private static final jc e = new jc("", (byte) 10, 5);
    private static final jc f = new jc("", (byte) 11, 6);
    private static final jc g = new jc("", (byte) 2, 7);

    public int a() {
        return this.a;
    }

    @Override
    public int compareTo(hu huVar) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        int iA7;
        if (!getClass().equals(huVar.getClass())) {
            return getClass().getName().compareTo(huVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(huVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA7 = iv.a(this.a, huVar.a)) != 0) {
            return iA7;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(huVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA6 = iv.a(this.b, huVar.b)) != 0) {
            return iA6;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(huVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA5 = iv.a(this.a, huVar.a)) != 0) {
            return iA5;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(huVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA4 = iv.a(this.c, huVar.c)) != 0) {
            return iA4;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(huVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA3 = iv.a(this.a, huVar.a)) != 0) {
            return iA3;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(huVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA2 = iv.a(this.a, huVar.a)) != 0) {
            return iA2;
        }
        int iCompareTo7 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(huVar.h()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (!h() || (iA = iv.a(this.b, huVar.b)) == 0) {
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

    public void a() {
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:9:0x001b  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void a(jf jfVar) {
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
                    if (jcVarA.a != 8) {
                        ji.a(jfVar, jcVarA.a);
                    } else {
                        this.a = jfVar.a();
                        a(true);
                    }
                    break;
                case 2:
                    if (jcVarA.a == 8) {
                        this.b = jfVar.a();
                        b(true);
                        break;
                    }
                    break;
                case 3:
                    if (jcVarA.a == 2) {
                        this.a = jfVar.a();
                        c(true);
                        break;
                    }
                    break;
                case 4:
                    if (jcVarA.a == 8) {
                        this.c = jfVar.a();
                        d(true);
                        break;
                    }
                    break;
                case 5:
                    if (jcVarA.a == 10) {
                        this.a = jfVar.a();
                        e(true);
                        break;
                    }
                    break;
                case 6:
                    if (jcVarA.a == 11) {
                        this.a = jfVar.a();
                        break;
                    }
                    break;
                case 7:
                    if (jcVarA.a == 2) {
                        this.b = jfVar.a();
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

    public boolean a(hu huVar) {
        if (huVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = huVar.a();
        if ((zA || zA2) && !(zA && zA2 && this.a == huVar.a)) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = huVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.b == huVar.b)) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = huVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.a == huVar.a)) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = huVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.c == huVar.c)) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = huVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.a == huVar.a)) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = huVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.a.equals(huVar.a))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = huVar.h();
        if (zH || zH2) {
            return zH && zH2 && this.b == huVar.b;
        }
        return true;
    }

    public int b() {
        return this.b;
    }

    @Override
    public void b(jf jfVar) {
        a();
        jfVar.a(a);
        if (a()) {
            jfVar.a(a);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (b()) {
            jfVar.a(b);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (c()) {
            jfVar.a(c);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (d()) {
            jfVar.a(d);
            jfVar.a(this.c);
            jfVar.b();
        }
        if (e()) {
            jfVar.a(e);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.a != null && f()) {
            jfVar.a(f);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (h()) {
            jfVar.a(g);
            jfVar.a(this.b);
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

    public int c() {
        return this.c;
    }

    public void c(boolean z) {
        this.a.set(2, z);
    }

    public boolean c() {
        return this.a.get(2);
    }

    public void d(boolean z) {
        this.a.set(3, z);
    }

    public boolean d() {
        return this.a.get(3);
    }

    public void e(boolean z) {
        this.a.set(4, z);
    }

    public boolean e() {
        return this.a.get(4);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof hu)) {
            return a((hu) obj);
        }
        return false;
    }

    public void f(boolean z) {
        this.a.set(5, z);
    }

    public boolean f() {
        return this.a != null;
    }

    public boolean g() {
        return this.b;
    }

    public boolean h() {
        return this.a.get(5);
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("OnlineConfigItem(");
        boolean z2 = false;
        if (a()) {
            sb.append("key:");
            sb.append(this.a);
            z = false;
        } else {
            z = true;
        }
        if (b()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("type:");
            sb.append(this.b);
            z = false;
        }
        if (c()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("clear:");
            sb.append(this.a);
            z = false;
        }
        if (d()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("intValue:");
            sb.append(this.c);
            z = false;
        }
        if (e()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("longValue:");
            sb.append(this.a);
            z = false;
        }
        if (f()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("stringValue:");
            String str = this.a;
            if (str == null) {
                str = "null";
            }
            sb.append(str);
        } else {
            z2 = z;
        }
        if (h()) {
            if (!z2) {
                sb.append(", ");
            }
            sb.append("boolValue:");
            sb.append(this.b);
        }
        sb.append(")");
        return sb.toString();
    }
}
