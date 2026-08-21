package com.xiaomi.push;

import com.qihoo360.loader2.PluginIntent;
import java.io.Serializable;
import java.util.BitSet;
import java.util.HashMap;
import java.util.Map;

public class hn implements iu<hn, Object>, Serializable, Cloneable {
    public long a;
    public String a;
    private BitSet a = new BitSet(3);
    public Map<String, String> a;
    public boolean a;
    public long b;
    public String b;
    public String c;
    public String d;
    public String e;
    public String f;
    public String g;
    private static final jk a = new jk("ClientUploadDataItem");
    private static final jc a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 11, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 10, 4);
    private static final jc e = new jc("", (byte) 10, 5);
    private static final jc f = new jc("", (byte) 2, 6);
    private static final jc g = new jc("", (byte) 11, 7);
    private static final jc h = new jc("", (byte) 11, 8);
    private static final jc i = new jc("", (byte) 11, 9);
    private static final jc j = new jc("", (byte) 13, 10);
    private static final jc k = new jc("", (byte) 11, 11);

    @Override
    public int compareTo(hn hnVar) {
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
        if (!getClass().equals(hnVar.getClass())) {
            return getClass().getName().compareTo(hnVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(hnVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA11 = iv.a(this.a, hnVar.a)) != 0) {
            return iA11;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(hnVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA10 = iv.a(this.b, hnVar.b)) != 0) {
            return iA10;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(hnVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA9 = iv.a(this.c, hnVar.c)) != 0) {
            return iA9;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(hnVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA8 = iv.a(this.a, hnVar.a)) != 0) {
            return iA8;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(hnVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA7 = iv.a(this.b, hnVar.b)) != 0) {
            return iA7;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(hnVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA6 = iv.a(this.a, hnVar.a)) != 0) {
            return iA6;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(hnVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA5 = iv.a(this.d, hnVar.d)) != 0) {
            return iA5;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(hnVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA4 = iv.a(this.e, hnVar.e)) != 0) {
            return iA4;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(hnVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA3 = iv.a(this.f, hnVar.f)) != 0) {
            return iA3;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(hnVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA2 = iv.a(this.a, hnVar.a)) != 0) {
            return iA2;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(hnVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (!k() || (iA = iv.a(this.g, hnVar.g)) == 0) {
            return 0;
        }
        return iA;
    }

    public long a() {
        return this.b;
    }

    public hn a(long j2) {
        this.a = j2;
        a(true);
        return this;
    }

    public hn a(String str) {
        this.a = str;
        return this;
    }

    public hn a(Map<String, String> map) {
        this.a = map;
        return this;
    }

    public hn a(boolean z) {
        this.a = z;
        c(true);
        return this;
    }

    public String a() {
        return this.a;
    }

    public Map<String, String> a() {
        return this.a;
    }

    public void a() {
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:9:0x001d  */
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
                    if (jcVarA.a == 11) {
                        this.a = jfVar.a();
                    } else {
                        ji.a(jfVar, jcVarA.a);
                    }
                    break;
                case 2:
                    if (jcVarA.a == 11) {
                        this.b = jfVar.a();
                        break;
                    }
                    break;
                case 3:
                    if (jcVarA.a == 11) {
                        this.c = jfVar.a();
                        break;
                    }
                    break;
                case 4:
                    if (jcVarA.a == 10) {
                        this.a = jfVar.a();
                        a(true);
                        break;
                    }
                    break;
                case 5:
                    if (jcVarA.a == 10) {
                        this.b = jfVar.a();
                        b(true);
                        break;
                    }
                    break;
                case 6:
                    if (jcVarA.a == 2) {
                        this.a = jfVar.a();
                        c(true);
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

    public boolean a(hn hnVar) {
        if (hnVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = hnVar.a();
        if ((zA || zA2) && !(zA && zA2 && this.a.equals(hnVar.a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = hnVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.b.equals(hnVar.b))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = hnVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.c.equals(hnVar.c))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = hnVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.a == hnVar.a)) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = hnVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.b == hnVar.b)) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = hnVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.a == hnVar.a)) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = hnVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.d.equals(hnVar.d))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = hnVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.e.equals(hnVar.e))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = hnVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.f.equals(hnVar.f))) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = hnVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.a.equals(hnVar.a))) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = hnVar.k();
        if (zK || zK2) {
            return zK && zK2 && this.g.equals(hnVar.g);
        }
        return true;
    }

    public hn b(long j2) {
        this.b = j2;
        b(true);
        return this;
    }

    public hn b(String str) {
        this.b = str;
        return this;
    }

    public String b() {
        return this.c;
    }

    @Override
    public void b(jf jfVar) {
        a();
        jfVar.a(a);
        if (this.a != null && a()) {
            jfVar.a(a);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.b != null && b()) {
            jfVar.a(b);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (this.c != null && c()) {
            jfVar.a(c);
            jfVar.a(this.c);
            jfVar.b();
        }
        if (d()) {
            jfVar.a(d);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (e()) {
            jfVar.a(e);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (f()) {
            jfVar.a(f);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.d != null && g()) {
            jfVar.a(g);
            jfVar.a(this.d);
            jfVar.b();
        }
        if (this.e != null && h()) {
            jfVar.a(h);
            jfVar.a(this.e);
            jfVar.b();
        }
        if (this.f != null && i()) {
            jfVar.a(i);
            jfVar.a(this.f);
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
        jfVar.c();
        jfVar.a();
    }

    public void b(boolean z) {
        this.a.set(1, z);
    }

    public boolean b() {
        return this.b != null;
    }

    public hn c(String str) {
        this.c = str;
        return this;
    }

    public String c() {
        return this.e;
    }

    public void c(boolean z) {
        this.a.set(2, z);
    }

    public boolean c() {
        return this.c != null;
    }

    public hn d(String str) {
        this.d = str;
        return this;
    }

    public String d() {
        return this.f;
    }

    public boolean d() {
        return this.a.get(0);
    }

    public hn e(String str) {
        this.e = str;
        return this;
    }

    public String e() {
        return this.g;
    }

    public boolean e() {
        return this.a.get(1);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof hn)) {
            return a((hn) obj);
        }
        return false;
    }

    public hn f(String str) {
        this.f = str;
        return this;
    }

    public boolean f() {
        return this.a.get(2);
    }

    public hn g(String str) {
        this.g = str;
        return this;
    }

    public boolean g() {
        return this.d != null;
    }

    public boolean h() {
        return this.e != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f != null;
    }

    public boolean j() {
        return this.a != null;
    }

    public boolean k() {
        return this.g != null;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("ClientUploadDataItem(");
        boolean z2 = false;
        if (a()) {
            sb.append("channel:");
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
            sb.append("data:");
            String str2 = this.b;
            if (str2 == null) {
                sb.append("null");
            } else {
                sb.append(str2);
            }
            z = false;
        }
        if (c()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("name:");
            String str3 = this.c;
            if (str3 == null) {
                sb.append("null");
            } else {
                sb.append(str3);
            }
            z = false;
        }
        if (d()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append(PluginIntent.EXTRA_COUNTER);
            sb.append(this.a);
            z = false;
        }
        if (e()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("timestamp:");
            sb.append(this.b);
            z = false;
        }
        if (f()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("fromSdk:");
            sb.append(this.a);
            z = false;
        }
        if (g()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("category:");
            String str4 = this.d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
            z = false;
        }
        if (h()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("sourcePackage:");
            String str5 = this.e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
            z = false;
        }
        if (i()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("id:");
            String str6 = this.f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
            z = false;
        }
        if (j()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("extra:");
            Map<String, String> map = this.a;
            if (map == null) {
                sb.append("null");
            } else {
                sb.append(map);
            }
        } else {
            z2 = z;
        }
        if (k()) {
            if (!z2) {
                sb.append(", ");
            }
            sb.append("pkgName:");
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
