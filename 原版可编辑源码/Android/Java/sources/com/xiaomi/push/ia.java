package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;
import java.util.HashMap;
import java.util.Map;

public class ia implements iu<ia, Object>, Serializable, Cloneable {
    public hy a;
    public String a;
    public Map<String, String> a;
    public String b;
    public String c;
    public String d;
    public String e;
    public String f;
    public String g;
    private static final jk a = new jk("XmPushActionAckNotification");
    private static final jc a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 11, 5);
    private static final jc f = new jc("", (byte) 10, 7);
    private static final jc g = new jc("", (byte) 11, 8);
    private static final jc h = new jc("", (byte) 13, 9);
    private static final jc i = new jc("", (byte) 11, 10);
    private static final jc j = new jc("", (byte) 11, 11);
    private BitSet a = new BitSet(1);
    public long a = 0;

    @Override
    public int compareTo(ia iaVar) {
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
        if (!getClass().equals(iaVar.getClass())) {
            return getClass().getName().compareTo(iaVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(iaVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA10 = iv.a(this.a, iaVar.a)) != 0) {
            return iA10;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(iaVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA9 = iv.a(this.a, iaVar.a)) != 0) {
            return iA9;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(iaVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA8 = iv.a(this.b, iaVar.b)) != 0) {
            return iA8;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(iaVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA7 = iv.a(this.c, iaVar.c)) != 0) {
            return iA7;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(iaVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA6 = iv.a(this.d, iaVar.d)) != 0) {
            return iA6;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(iaVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA5 = iv.a(this.a, iaVar.a)) != 0) {
            return iA5;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(iaVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA4 = iv.a(this.e, iaVar.e)) != 0) {
            return iA4;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(iaVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA3 = iv.a(this.a, iaVar.a)) != 0) {
            return iA3;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(iaVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA2 = iv.a(this.f, iaVar.f)) != 0) {
            return iA2;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(iaVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (!j() || (iA = iv.a(this.g, iaVar.g)) == 0) {
            return 0;
        }
        return iA;
    }

    public ia a(long j2) {
        this.a = j2;
        a(true);
        return this;
    }

    public ia a(hy hyVar) {
        this.a = hyVar;
        return this;
    }

    public ia a(String str) {
        this.b = str;
        return this;
    }

    public String a() {
        return this.b;
    }

    public Map<String, String> a() {
        return this.a;
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
                case 7:
                    if (jcVarA.a == 10) {
                        this.a = jfVar.a();
                        a(true);
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
                case 10:
                    if (jcVarA.a == 11) {
                        this.f = jfVar.a();
                        break;
                    }
                    break;
                case 11:
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

    public boolean a(ia iaVar) {
        if (iaVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = iaVar.a();
        if ((zA || zA2) && !(zA && zA2 && this.a.equals(iaVar.a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = iaVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.a.a(iaVar.a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = iaVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.b.equals(iaVar.b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = iaVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.c.equals(iaVar.c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = iaVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.d.equals(iaVar.d))) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = iaVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.a == iaVar.a)) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = iaVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.e.equals(iaVar.e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = iaVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.a.equals(iaVar.a))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = iaVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.f.equals(iaVar.f))) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = iaVar.j();
        if (zJ || zJ2) {
            return zJ && zJ2 && this.g.equals(iaVar.g);
        }
        return true;
    }

    public ia b(String str) {
        this.c = str;
        return this;
    }

    public String b() {
        return this.d;
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
        if (this.d != null && e()) {
            jfVar.a(e);
            jfVar.a(this.d);
            jfVar.b();
        }
        if (f()) {
            jfVar.a(f);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.e != null && g()) {
            jfVar.a(g);
            jfVar.a(this.e);
            jfVar.b();
        }
        if (this.a != null && h()) {
            jfVar.a(h);
            jfVar.a(new je((byte) 11, (byte) 11, this.a.size()));
            for (Map.Entry<String, String> entry : this.a.entrySet()) {
                jfVar.a(entry.getKey());
                jfVar.a(entry.getValue());
            }
            jfVar.d();
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
        jfVar.c();
        jfVar.a();
    }

    public boolean b() {
        return this.a != null;
    }

    public ia c(String str) {
        this.d = str;
        return this;
    }

    public boolean c() {
        return this.b != null;
    }

    public ia d(String str) {
        this.e = str;
        return this;
    }

    public boolean d() {
        return this.c != null;
    }

    public ia e(String str) {
        this.f = str;
        return this;
    }

    public boolean e() {
        return this.d != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof ia)) {
            return a((ia) obj);
        }
        return false;
    }

    public boolean f() {
        return this.a.get(0);
    }

    public boolean g() {
        return this.e != null;
    }

    public boolean h() {
        return this.a != null;
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

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionAckNotification(");
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
            sb.append("type:");
            String str4 = this.d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (f()) {
            sb.append(", ");
            sb.append("errorCode:");
            sb.append(this.a);
        }
        if (g()) {
            sb.append(", ");
            sb.append("reason:");
            String str5 = this.e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("extra:");
            Map<String, String> map = this.a;
            if (map == null) {
                sb.append("null");
            } else {
                sb.append(map);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("packageName:");
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
        sb.append(")");
        return sb.toString();
    }
}
