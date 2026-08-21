package com.xiaomi.push;

import java.io.Serializable;
import java.nio.ByteBuffer;
import java.util.BitSet;
import java.util.HashMap;
import java.util.Map;

public class ii implements iu<ii, Object>, Serializable, Cloneable {
    public long a;
    public hy a;
    public String a;
    public ByteBuffer a;
    private BitSet a;
    public Map<String, String> a;
    public boolean a;
    public String b;
    public boolean b;
    public String c;
    public String d;
    public String e;
    public String f;
    public String g;
    public String h;
    public String i;
    private static final jk a = new jk("XmPushActionNotification");
    private static final jc a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 11, 5);
    private static final jc f = new jc("", (byte) 2, 6);
    private static final jc g = new jc("", (byte) 11, 7);
    private static final jc h = new jc("", (byte) 13, 8);
    private static final jc i = new jc("", (byte) 11, 9);
    private static final jc j = new jc("", (byte) 11, 10);
    private static final jc k = new jc("", (byte) 11, 12);
    private static final jc l = new jc("", (byte) 11, 13);
    private static final jc m = new jc("", (byte) 11, 14);
    private static final jc n = new jc("", (byte) 10, 15);
    private static final jc o = new jc("", (byte) 2, 20);

    public ii() {
        this.a = new BitSet(3);
        this.a = true;
        this.b = false;
    }

    public ii(String str, boolean z) {
        this();
        this.b = str;
        this.a = z;
        a(true);
    }

    @Override
    public int compareTo(ii iiVar) {
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
        if (!getClass().equals(iiVar.getClass())) {
            return getClass().getName().compareTo(iiVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(iiVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA15 = iv.a(this.a, iiVar.a)) != 0) {
            return iA15;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(iiVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA14 = iv.a(this.a, iiVar.a)) != 0) {
            return iA14;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(iiVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA13 = iv.a(this.b, iiVar.b)) != 0) {
            return iA13;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(iiVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA12 = iv.a(this.c, iiVar.c)) != 0) {
            return iA12;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(iiVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA11 = iv.a(this.d, iiVar.d)) != 0) {
            return iA11;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(iiVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA10 = iv.a(this.a, iiVar.a)) != 0) {
            return iA10;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(iiVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA9 = iv.a(this.e, iiVar.e)) != 0) {
            return iA9;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(iiVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA8 = iv.a(this.a, iiVar.a)) != 0) {
            return iA8;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(iiVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA7 = iv.a(this.f, iiVar.f)) != 0) {
            return iA7;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(iiVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA6 = iv.a(this.g, iiVar.g)) != 0) {
            return iA6;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(iiVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (k() && (iA5 = iv.a(this.h, iiVar.h)) != 0) {
            return iA5;
        }
        int iCompareTo12 = Boolean.valueOf(l()).compareTo(Boolean.valueOf(iiVar.l()));
        if (iCompareTo12 != 0) {
            return iCompareTo12;
        }
        if (l() && (iA4 = iv.a(this.i, iiVar.i)) != 0) {
            return iA4;
        }
        int iCompareTo13 = Boolean.valueOf(m()).compareTo(Boolean.valueOf(iiVar.m()));
        if (iCompareTo13 != 0) {
            return iCompareTo13;
        }
        if (m() && (iA3 = iv.a(this.a, iiVar.a)) != 0) {
            return iA3;
        }
        int iCompareTo14 = Boolean.valueOf(n()).compareTo(Boolean.valueOf(iiVar.n()));
        if (iCompareTo14 != 0) {
            return iCompareTo14;
        }
        if (n() && (iA2 = iv.a(this.a, iiVar.a)) != 0) {
            return iA2;
        }
        int iCompareTo15 = Boolean.valueOf(o()).compareTo(Boolean.valueOf(iiVar.o()));
        if (iCompareTo15 != 0) {
            return iCompareTo15;
        }
        if (!o() || (iA = iv.a(this.b, iiVar.b)) == 0) {
            return 0;
        }
        return iA;
    }

    public hy a() {
        return this.a;
    }

    public ii a(String str) {
        this.b = str;
        return this;
    }

    public ii a(ByteBuffer byteBuffer) {
        this.a = byteBuffer;
        return this;
    }

    public ii a(Map<String, String> map) {
        this.a = map;
        return this;
    }

    public ii a(boolean z) {
        this.a = z;
        a(true);
        return this;
    }

    public ii a(byte[] bArr) {
        a(ByteBuffer.wrap(bArr));
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
    /* JADX WARN: Removed duplicated region for block: B:13:0x003c  */
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
                if (f()) {
                    a();
                    return;
                }
                throw new jg("Required field 'requireAck' was not found in serialized data! Struct: " + toString());
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
                    if (jcVarA.a == 2) {
                        this.a = jfVar.a();
                        a(true);
                        break;
                    }
                    break;
                case 7:
                    if (jcVarA.a == 11) {
                        this.e = jfVar.a();
                        break;
                    }
                    break;
                case 8:
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
                    if (jcVarA.a == 11) {
                        this.a = jfVar.a();
                        break;
                    }
                    break;
                case 15:
                    if (jcVarA.a == 10) {
                        this.a = jfVar.a();
                        b(true);
                        break;
                    }
                    break;
                case 20:
                    if (jcVarA.a == 2) {
                        this.b = jfVar.a();
                        c(true);
                        break;
                    }
                    break;
            }
            jfVar.g();
        }
    }

    public void a(String str, String str2) {
        if (this.a == null) {
            this.a = new HashMap();
        }
        this.a.put(str, str2);
    }

    public void a(boolean z) {
        this.a.set(0, z);
    }

    public boolean a() {
        return this.a != null;
    }

    public boolean a(ii iiVar) {
        if (iiVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = iiVar.a();
        if ((zA || zA2) && !(zA && zA2 && this.a.equals(iiVar.a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = iiVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.a.a(iiVar.a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = iiVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.b.equals(iiVar.b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = iiVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.c.equals(iiVar.c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = iiVar.e();
        if (((zE || zE2) && !(zE && zE2 && this.d.equals(iiVar.d))) || this.a != iiVar.a) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = iiVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.e.equals(iiVar.e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = iiVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.a.equals(iiVar.a))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = iiVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.f.equals(iiVar.f))) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = iiVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.g.equals(iiVar.g))) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = iiVar.k();
        if ((zK || zK2) && !(zK && zK2 && this.h.equals(iiVar.h))) {
            return false;
        }
        boolean zL = l();
        boolean zL2 = iiVar.l();
        if ((zL || zL2) && !(zL && zL2 && this.i.equals(iiVar.i))) {
            return false;
        }
        boolean zM = m();
        boolean zM2 = iiVar.m();
        if ((zM || zM2) && !(zM && zM2 && this.a.equals(iiVar.a))) {
            return false;
        }
        boolean zN = n();
        boolean zN2 = iiVar.n();
        if ((zN || zN2) && !(zN && zN2 && this.a == iiVar.a)) {
            return false;
        }
        boolean zO = o();
        boolean zO2 = iiVar.o();
        if (zO || zO2) {
            return zO && zO2 && this.b == iiVar.b;
        }
        return true;
    }

    public byte[] a() {
        a(iv.a(this.a));
        return this.a.array();
    }

    public ii b(String str) {
        this.c = str;
        return this;
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
        jfVar.a(f);
        jfVar.a(this.a);
        jfVar.b();
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
        if (this.a != null && m()) {
            jfVar.a(m);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (n()) {
            jfVar.a(n);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (o()) {
            jfVar.a(o);
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
        return this.a != null;
    }

    public ii c(String str) {
        this.d = str;
        return this;
    }

    public String c() {
        return this.f;
    }

    public void c(boolean z) {
        this.a.set(2, z);
    }

    public boolean c() {
        return this.b != null;
    }

    public ii d(String str) {
        this.f = str;
        return this;
    }

    public boolean d() {
        return this.c != null;
    }

    public boolean e() {
        return this.d != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof ii)) {
            return a((ii) obj);
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

    public boolean k() {
        return this.h != null;
    }

    public boolean l() {
        return this.i != null;
    }

    public boolean m() {
        return this.a != null;
    }

    public boolean n() {
        return this.a.get(1);
    }

    public boolean o() {
        return this.a.get(2);
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionNotification(");
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
        sb.append(", ");
        sb.append("requireAck:");
        sb.append(this.a);
        if (g()) {
            sb.append(", ");
            sb.append("payload:");
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
        if (k()) {
            sb.append(", ");
            sb.append("regId:");
            String str8 = this.h;
            if (str8 == null) {
                sb.append("null");
            } else {
                sb.append(str8);
            }
        }
        if (l()) {
            sb.append(", ");
            sb.append("aliasName:");
            String str9 = this.i;
            if (str9 == null) {
                sb.append("null");
            } else {
                sb.append(str9);
            }
        }
        if (m()) {
            sb.append(", ");
            sb.append("binaryExtra:");
            ByteBuffer byteBuffer = this.a;
            if (byteBuffer == null) {
                sb.append("null");
            } else {
                iv.a(byteBuffer, sb);
            }
        }
        if (n()) {
            sb.append(", ");
            sb.append("createdTs:");
            sb.append(this.a);
        }
        if (o()) {
            sb.append(", ");
            sb.append("alreadyLogClickInXmq:");
            sb.append(this.b);
        }
        sb.append(")");
        return sb.toString();
    }
}
