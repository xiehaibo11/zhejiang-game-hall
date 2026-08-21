package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;
import java.util.HashMap;
import java.util.Map;

public class im implements iu<im, Object>, Serializable, Cloneable {
    public hv a;
    public hy a;
    public String a;
    public Map<String, String> a;
    public String b;
    public String c;
    public String d;
    public String e;
    public String f;
    public String g;
    public String h;
    private static final jk a = new jk("XmPushActionSendMessage");
    private static final jc a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 11, 5);
    private static final jc f = new jc("", (byte) 11, 6);
    private static final jc g = new jc("", (byte) 11, 7);
    private static final jc h = new jc("", (byte) 12, 8);
    private static final jc i = new jc("", (byte) 2, 9);
    private static final jc j = new jc("", (byte) 13, 10);
    private static final jc k = new jc("", (byte) 11, 11);
    private static final jc l = new jc("", (byte) 11, 12);
    private BitSet a = new BitSet(1);
    public boolean a = true;

    @Override
    public int compareTo(im imVar) {
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
        if (!getClass().equals(imVar.getClass())) {
            return getClass().getName().compareTo(imVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(imVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA12 = iv.a(this.a, imVar.a)) != 0) {
            return iA12;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(imVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA11 = iv.a(this.a, imVar.a)) != 0) {
            return iA11;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(imVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA10 = iv.a(this.b, imVar.b)) != 0) {
            return iA10;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(imVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA9 = iv.a(this.c, imVar.c)) != 0) {
            return iA9;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(imVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA8 = iv.a(this.d, imVar.d)) != 0) {
            return iA8;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(imVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA7 = iv.a(this.e, imVar.e)) != 0) {
            return iA7;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(imVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA6 = iv.a(this.f, imVar.f)) != 0) {
            return iA6;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(imVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA5 = iv.a(this.a, imVar.a)) != 0) {
            return iA5;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(imVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA4 = iv.a(this.a, imVar.a)) != 0) {
            return iA4;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(imVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA3 = iv.a(this.a, imVar.a)) != 0) {
            return iA3;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(imVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (k() && (iA2 = iv.a(this.g, imVar.g)) != 0) {
            return iA2;
        }
        int iCompareTo12 = Boolean.valueOf(l()).compareTo(Boolean.valueOf(imVar.l()));
        if (iCompareTo12 != 0) {
            return iCompareTo12;
        }
        if (!l() || (iA = iv.a(this.h, imVar.h)) == 0) {
            return 0;
        }
        return iA;
    }

    public hv a() {
        return this.a;
    }

    public String a() {
        return this.b;
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
    /* JADX WARN: Removed duplicated region for block: B:9:0x001c  */
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
                    if (jcVarA.a == 12) {
                        hv hvVar = new hv();
                        this.a = hvVar;
                        hvVar.a(jfVar);
                        break;
                    }
                    break;
                case 9:
                    if (jcVarA.a == 2) {
                        this.a = jfVar.a();
                        a(true);
                        break;
                    }
                    break;
                case 10:
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
                case 11:
                    if (jcVarA.a == 11) {
                        this.g = jfVar.a();
                        break;
                    }
                    break;
                case 12:
                    if (jcVarA.a == 11) {
                        this.h = jfVar.a();
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

    public boolean a(im imVar) {
        if (imVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = imVar.a();
        if ((zA || zA2) && !(zA && zA2 && this.a.equals(imVar.a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = imVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.a.a(imVar.a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = imVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.b.equals(imVar.b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = imVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.c.equals(imVar.c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = imVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.d.equals(imVar.d))) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = imVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.e.equals(imVar.e))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = imVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f.equals(imVar.f))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = imVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.a.a(imVar.a))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = imVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.a == imVar.a)) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = imVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.a.equals(imVar.a))) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = imVar.k();
        if ((zK || zK2) && !(zK && zK2 && this.g.equals(imVar.g))) {
            return false;
        }
        boolean zL = l();
        boolean zL2 = imVar.l();
        if (zL || zL2) {
            return zL && zL2 && this.h.equals(imVar.h);
        }
        return true;
    }

    public String b() {
        return this.c;
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
        if (this.a != null && h()) {
            jfVar.a(h);
            this.a.b(jfVar);
            jfVar.b();
        }
        if (i()) {
            jfVar.a(i);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.a != null && j()) {
            jfVar.a(j);
            jfVar.a(new je((byte) 11, (byte) 11, this.a.size()));
            for (Map.Entry<String, String> entry : this.a.entrySet()) {
                jfVar.a(entry.getKey());
                jfVar.a(entry.getValue());
            }
            jfVar.d();
            jfVar.b();
        }
        if (this.g != null && k()) {
            jfVar.a(k);
            jfVar.a(this.g);
            jfVar.b();
        }
        if (this.h != null && l()) {
            jfVar.a(l);
            jfVar.a(this.h);
            jfVar.b();
        }
        jfVar.c();
        jfVar.a();
    }

    public boolean b() {
        return this.a != null;
    }

    public String c() {
        return this.e;
    }

    public boolean c() {
        return this.b != null;
    }

    public String d() {
        return this.f;
    }

    public boolean d() {
        return this.c != null;
    }

    public String e() {
        return this.g;
    }

    public boolean e() {
        return this.d != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof im)) {
            return a((im) obj);
        }
        return false;
    }

    public String f() {
        return this.h;
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

    public boolean i() {
        return this.a.get(0);
    }

    public boolean j() {
        return this.a != null;
    }

    public boolean k() {
        return this.g != null;
    }

    public boolean l() {
        return this.h != null;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionSendMessage(");
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
            sb.append("packageName:");
            String str4 = this.d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (f()) {
            sb.append(", ");
            sb.append("topic:");
            String str5 = this.e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("aliasName:");
            String str6 = this.f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("message:");
            hv hvVar = this.a;
            if (hvVar == null) {
                sb.append("null");
            } else {
                sb.append(hvVar);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("needAck:");
            sb.append(this.a);
        }
        if (j()) {
            sb.append(", ");
            sb.append("params:");
            Map<String, String> map = this.a;
            if (map == null) {
                sb.append("null");
            } else {
                sb.append(map);
            }
        }
        if (k()) {
            sb.append(", ");
            sb.append("category:");
            String str7 = this.g;
            if (str7 == null) {
                sb.append("null");
            } else {
                sb.append(str7);
            }
        }
        if (l()) {
            sb.append(", ");
            sb.append("userAccount:");
            String str8 = this.h;
            if (str8 == null) {
                sb.append("null");
            } else {
                sb.append(str8);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}
