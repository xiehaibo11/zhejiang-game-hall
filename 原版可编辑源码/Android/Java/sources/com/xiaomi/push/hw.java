package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;
import java.util.HashMap;
import java.util.Map;

public class hw implements iu<hw, Object>, Serializable, Cloneable {
    public int a;
    public long a;
    public String a;
    private BitSet a;
    public Map<String, String> a;
    public boolean a;
    public int b;
    public String b;
    public Map<String, String> b;
    public int c;
    public String c;
    public Map<String, String> c;
    public String d;
    public String e;
    private static final jk a = new jk("PushMetaInfo");
    private static final jc a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 10, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 11, 5);
    private static final jc f = new jc("", (byte) 8, 6);
    private static final jc g = new jc("", (byte) 11, 7);
    private static final jc h = new jc("", (byte) 8, 8);
    private static final jc i = new jc("", (byte) 8, 9);
    private static final jc j = new jc("", (byte) 13, 10);
    private static final jc k = new jc("", (byte) 13, 11);
    private static final jc l = new jc("", (byte) 2, 12);
    private static final jc m = new jc("", (byte) 13, 13);

    public hw() {
        this.a = new BitSet(5);
        this.a = false;
    }

    public hw(hw hwVar) {
        BitSet bitSet = new BitSet(5);
        this.a = bitSet;
        bitSet.clear();
        this.a.or(hwVar.a);
        if (hwVar.a()) {
            this.a = hwVar.a;
        }
        this.a = hwVar.a;
        if (hwVar.c()) {
            this.b = hwVar.b;
        }
        if (hwVar.d()) {
            this.c = hwVar.c;
        }
        if (hwVar.e()) {
            this.d = hwVar.d;
        }
        this.a = hwVar.a;
        if (hwVar.g()) {
            this.e = hwVar.e;
        }
        this.b = hwVar.b;
        this.c = hwVar.c;
        if (hwVar.j()) {
            HashMap map = new HashMap();
            for (Map.Entry<String, String> entry : hwVar.a.entrySet()) {
                map.put(entry.getKey(), entry.getValue());
            }
            this.a = map;
        }
        if (hwVar.k()) {
            HashMap map2 = new HashMap();
            for (Map.Entry<String, String> entry2 : hwVar.b.entrySet()) {
                map2.put(entry2.getKey(), entry2.getValue());
            }
            this.b = map2;
        }
        this.a = hwVar.a;
        if (hwVar.n()) {
            HashMap map3 = new HashMap();
            for (Map.Entry<String, String> entry3 : hwVar.c.entrySet()) {
                map3.put(entry3.getKey(), entry3.getValue());
            }
            this.c = map3;
        }
    }

    public int a() {
        return this.a;
    }

    @Override
    public int compareTo(hw hwVar) {
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
        if (!getClass().equals(hwVar.getClass())) {
            return getClass().getName().compareTo(hwVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(hwVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA13 = iv.a(this.a, hwVar.a)) != 0) {
            return iA13;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(hwVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA12 = iv.a(this.a, hwVar.a)) != 0) {
            return iA12;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(hwVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA11 = iv.a(this.b, hwVar.b)) != 0) {
            return iA11;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(hwVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA10 = iv.a(this.c, hwVar.c)) != 0) {
            return iA10;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(hwVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA9 = iv.a(this.d, hwVar.d)) != 0) {
            return iA9;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(hwVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA8 = iv.a(this.a, hwVar.a)) != 0) {
            return iA8;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(hwVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA7 = iv.a(this.e, hwVar.e)) != 0) {
            return iA7;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(hwVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA6 = iv.a(this.b, hwVar.b)) != 0) {
            return iA6;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(hwVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA5 = iv.a(this.c, hwVar.c)) != 0) {
            return iA5;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(hwVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA4 = iv.a(this.a, hwVar.a)) != 0) {
            return iA4;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(hwVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (k() && (iA3 = iv.a(this.b, hwVar.b)) != 0) {
            return iA3;
        }
        int iCompareTo12 = Boolean.valueOf(m()).compareTo(Boolean.valueOf(hwVar.m()));
        if (iCompareTo12 != 0) {
            return iCompareTo12;
        }
        if (m() && (iA2 = iv.a(this.a, hwVar.a)) != 0) {
            return iA2;
        }
        int iCompareTo13 = Boolean.valueOf(n()).compareTo(Boolean.valueOf(hwVar.n()));
        if (iCompareTo13 != 0) {
            return iCompareTo13;
        }
        if (!n() || (iA = iv.a(this.c, hwVar.c)) == 0) {
            return 0;
        }
        return iA;
    }

    public long a() {
        return this.a;
    }

    public hw a() {
        return new hw(this);
    }

    public hw a(int i2) {
        this.a = i2;
        b(true);
        return this;
    }

    public hw a(String str) {
        this.a = str;
        return this;
    }

    public hw a(Map<String, String> map) {
        this.a = map;
        return this;
    }

    public String a() {
        return this.a;
    }

    public Map<String, String> a() {
        return this.a;
    }

    public void a() throws jg {
        if (this.a != null) {
            return;
        }
        throw new jg("Required field 'id' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0041  */
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
                if (b()) {
                    a();
                    return;
                }
                throw new jg("Required field 'messageTs' was not found in serialized data! Struct: " + toString());
            }
            int i2 = 0;
            switch (jcVarA.a) {
                case 1:
                    if (jcVarA.a != 11) {
                        ji.a(jfVar, jcVarA.a);
                    } else {
                        this.a = jfVar.a();
                    }
                    break;
                case 2:
                    if (jcVarA.a == 10) {
                        this.a = jfVar.a();
                        a(true);
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
                    if (jcVarA.a == 8) {
                        this.a = jfVar.a();
                        b(true);
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
                    if (jcVarA.a == 8) {
                        this.b = jfVar.a();
                        c(true);
                        break;
                    }
                    break;
                case 9:
                    if (jcVarA.a == 8) {
                        this.c = jfVar.a();
                        d(true);
                        break;
                    }
                    break;
                case 10:
                    if (jcVarA.a == 13) {
                        je jeVarA = jfVar.a();
                        this.a = new HashMap(jeVarA.a * 2);
                        while (i2 < jeVarA.a) {
                            this.a.put(jfVar.a(), jfVar.a());
                            i2++;
                        }
                        jfVar.h();
                    }
                    ji.a(jfVar, jcVarA.a);
                    break;
                case 11:
                    if (jcVarA.a == 13) {
                        je jeVarA2 = jfVar.a();
                        this.b = new HashMap(jeVarA2.a * 2);
                        while (i2 < jeVarA2.a) {
                            this.b.put(jfVar.a(), jfVar.a());
                            i2++;
                        }
                        jfVar.h();
                    }
                    ji.a(jfVar, jcVarA.a);
                    break;
                case 12:
                    if (jcVarA.a == 2) {
                        this.a = jfVar.a();
                        e(true);
                        break;
                    }
                    break;
                case 13:
                    if (jcVarA.a == 13) {
                        je jeVarA3 = jfVar.a();
                        this.c = new HashMap(jeVarA3.a * 2);
                        while (i2 < jeVarA3.a) {
                            this.c.put(jfVar.a(), jfVar.a());
                            i2++;
                        }
                        jfVar.h();
                    }
                    ji.a(jfVar, jcVarA.a);
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

    public boolean a(hw hwVar) {
        if (hwVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = hwVar.a();
        if (((zA || zA2) && !(zA && zA2 && this.a.equals(hwVar.a))) || this.a != hwVar.a) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = hwVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.b.equals(hwVar.b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = hwVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.c.equals(hwVar.c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = hwVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.d.equals(hwVar.d))) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = hwVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.a == hwVar.a)) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = hwVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.e.equals(hwVar.e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = hwVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.b == hwVar.b)) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = hwVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.c == hwVar.c)) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = hwVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.a.equals(hwVar.a))) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = hwVar.k();
        if ((zK || zK2) && !(zK && zK2 && this.b.equals(hwVar.b))) {
            return false;
        }
        boolean zM = m();
        boolean zM2 = hwVar.m();
        if ((zM || zM2) && !(zM && zM2 && this.a == hwVar.a)) {
            return false;
        }
        boolean zN = n();
        boolean zN2 = hwVar.n();
        if (zN || zN2) {
            return zN && zN2 && this.c.equals(hwVar.c);
        }
        return true;
    }

    public int b() {
        return this.b;
    }

    public hw b(int i2) {
        this.b = i2;
        c(true);
        return this;
    }

    public hw b(String str) {
        this.b = str;
        return this;
    }

    public String b() {
        return this.b;
    }

    public Map<String, String> b() {
        return this.b;
    }

    @Override
    public void b(jf jfVar) throws jg {
        a();
        jfVar.a(a);
        if (this.a != null) {
            jfVar.a(a);
            jfVar.a(this.a);
            jfVar.b();
        }
        jfVar.a(b);
        jfVar.a(this.a);
        jfVar.b();
        if (this.b != null && c()) {
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
        if (this.b != null && k()) {
            jfVar.a(k);
            jfVar.a(new je((byte) 11, (byte) 11, this.b.size()));
            for (Map.Entry<String, String> entry2 : this.b.entrySet()) {
                jfVar.a(entry2.getKey());
                jfVar.a(entry2.getValue());
            }
            jfVar.d();
            jfVar.b();
        }
        if (m()) {
            jfVar.a(l);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.c != null && n()) {
            jfVar.a(m);
            jfVar.a(new je((byte) 11, (byte) 11, this.c.size()));
            for (Map.Entry<String, String> entry3 : this.c.entrySet()) {
                jfVar.a(entry3.getKey());
                jfVar.a(entry3.getValue());
            }
            jfVar.d();
            jfVar.b();
        }
        jfVar.c();
        jfVar.a();
    }

    public void b(String str, String str2) {
        if (this.b == null) {
            this.b = new HashMap();
        }
        this.b.put(str, str2);
    }

    public void b(boolean z) {
        this.a.set(1, z);
    }

    public boolean b() {
        return this.a.get(0);
    }

    public int c() {
        return this.c;
    }

    public hw c(int i2) {
        this.c = i2;
        d(true);
        return this;
    }

    public hw c(String str) {
        this.c = str;
        return this;
    }

    public String c() {
        return this.c;
    }

    public void c(boolean z) {
        this.a.set(2, z);
    }

    public boolean c() {
        return this.b != null;
    }

    public hw d(String str) {
        this.d = str;
        return this;
    }

    public String d() {
        return this.d;
    }

    public void d(boolean z) {
        this.a.set(3, z);
    }

    public boolean d() {
        return this.c != null;
    }

    public void e(boolean z) {
        this.a.set(4, z);
    }

    public boolean e() {
        return this.d != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof hw)) {
            return a((hw) obj);
        }
        return false;
    }

    public boolean f() {
        return this.a.get(1);
    }

    public boolean g() {
        return this.e != null;
    }

    public boolean h() {
        return this.a.get(2);
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.a.get(3);
    }

    public boolean j() {
        return this.a != null;
    }

    public boolean k() {
        return this.b != null;
    }

    public boolean l() {
        return this.a;
    }

    public boolean m() {
        return this.a.get(4);
    }

    public boolean n() {
        return this.c != null;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("PushMetaInfo(");
        sb.append("id:");
        String str = this.a;
        if (str == null) {
            sb.append("null");
        } else {
            sb.append(str);
        }
        sb.append(", ");
        sb.append("messageTs:");
        sb.append(this.a);
        if (c()) {
            sb.append(", ");
            sb.append("topic:");
            String str2 = this.b;
            if (str2 == null) {
                sb.append("null");
            } else {
                sb.append(str2);
            }
        }
        if (d()) {
            sb.append(", ");
            sb.append("title:");
            String str3 = this.c;
            if (str3 == null) {
                sb.append("null");
            } else {
                sb.append(str3);
            }
        }
        if (e()) {
            sb.append(", ");
            sb.append("description:");
            String str4 = this.d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (f()) {
            sb.append(", ");
            sb.append("notifyType:");
            sb.append(this.a);
        }
        if (g()) {
            sb.append(", ");
            sb.append("url:");
            String str5 = this.e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("passThrough:");
            sb.append(this.b);
        }
        if (i()) {
            sb.append(", ");
            sb.append("notifyId:");
            sb.append(this.c);
        }
        if (j()) {
            sb.append(", ");
            sb.append("extra:");
            Map<String, String> map = this.a;
            if (map == null) {
                sb.append("null");
            } else {
                sb.append(map);
            }
        }
        if (k()) {
            sb.append(", ");
            sb.append("internal:");
            Map<String, String> map2 = this.b;
            if (map2 == null) {
                sb.append("null");
            } else {
                sb.append(map2);
            }
        }
        if (m()) {
            sb.append(", ");
            sb.append("ignoreRegInfo:");
            sb.append(this.a);
        }
        if (n()) {
            sb.append(", ");
            sb.append("apsProperFields:");
            Map<String, String> map3 = this.c;
            if (map3 == null) {
                sb.append("null");
            } else {
                sb.append(map3);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}
