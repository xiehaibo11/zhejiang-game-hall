package com.xiaomi.push;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class ir implements iu<ir, Object>, Serializable, Cloneable {
    public hy a;
    public String a;
    public List<String> a;
    public String b;
    public String c;
    public String d;
    public String e;
    public String f;
    private static final jk a = new jk("XmPushActionUnSubscription");
    private static final jc a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 11, 5);
    private static final jc f = new jc("", (byte) 11, 6);
    private static final jc g = new jc("", (byte) 11, 7);
    private static final jc h = new jc("", (byte) 15, 8);

    @Override
    public int compareTo(ir irVar) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        int iA7;
        int iA8;
        if (!getClass().equals(irVar.getClass())) {
            return getClass().getName().compareTo(irVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(irVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA8 = iv.a(this.a, irVar.a)) != 0) {
            return iA8;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(irVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA7 = iv.a(this.a, irVar.a)) != 0) {
            return iA7;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(irVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA6 = iv.a(this.b, irVar.b)) != 0) {
            return iA6;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(irVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA5 = iv.a(this.c, irVar.c)) != 0) {
            return iA5;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(irVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA4 = iv.a(this.d, irVar.d)) != 0) {
            return iA4;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(irVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA3 = iv.a(this.e, irVar.e)) != 0) {
            return iA3;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(irVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA2 = iv.a(this.f, irVar.f)) != 0) {
            return iA2;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(irVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (!h() || (iA = iv.a(this.a, irVar.a)) == 0) {
            return 0;
        }
        return iA;
    }

    public ir a(String str) {
        this.b = str;
        return this;
    }

    public void a() throws jg {
        if (this.b == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.c == null) {
            throw new jg("Required field 'appId' was not present! Struct: " + toString());
        }
        if (this.d != null) {
            return;
        }
        throw new jg("Required field 'topic' was not present! Struct: " + toString());
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
                    if (jcVarA.a == 15) {
                        jd jdVarA = jfVar.a();
                        this.a = new ArrayList(jdVarA.a);
                        for (int i = 0; i < jdVarA.a; i++) {
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

    public boolean a() {
        return this.a != null;
    }

    public boolean a(ir irVar) {
        if (irVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = irVar.a();
        if ((zA || zA2) && !(zA && zA2 && this.a.equals(irVar.a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = irVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.a.a(irVar.a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = irVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.b.equals(irVar.b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = irVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.c.equals(irVar.c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = irVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.d.equals(irVar.d))) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = irVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.e.equals(irVar.e))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = irVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f.equals(irVar.f))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = irVar.h();
        if (zH || zH2) {
            return zH && zH2 && this.a.equals(irVar.a);
        }
        return true;
    }

    public ir b(String str) {
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
        if (this.d != null) {
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
        if (this.a != null && h()) {
            jfVar.a(h);
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

    public boolean b() {
        return this.a != null;
    }

    public ir c(String str) {
        this.d = str;
        return this;
    }

    public boolean c() {
        return this.b != null;
    }

    public ir d(String str) {
        this.e = str;
        return this;
    }

    public boolean d() {
        return this.c != null;
    }

    public ir e(String str) {
        this.f = str;
        return this;
    }

    public boolean e() {
        return this.d != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof ir)) {
            return a((ir) obj);
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
        return this.a != null;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionUnSubscription(");
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
        sb.append("topic:");
        String str4 = this.d;
        if (str4 == null) {
            sb.append("null");
        } else {
            sb.append(str4);
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
        if (g()) {
            sb.append(", ");
            sb.append("category:");
            String str6 = this.f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("aliases:");
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
