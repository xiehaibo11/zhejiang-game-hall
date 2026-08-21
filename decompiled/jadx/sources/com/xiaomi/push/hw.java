package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class hw implements iu<hw, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public int f550a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f551a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f552a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f553a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public Map<String, String> f554a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public boolean f555a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public int f556b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f557b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public Map<String, String> f558b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public int f559c;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f560c;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public Map<String, String> f561c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f562d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f563e;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f549a = new jk("PushMetaInfo");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8218a = new jc("", (byte) 11, 1);
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
        this.f553a = new BitSet(5);
        this.f555a = false;
    }

    public hw(hw hwVar) {
        BitSet bitSet = new BitSet(5);
        this.f553a = bitSet;
        bitSet.clear();
        this.f553a.or(hwVar.f553a);
        if (hwVar.m447a()) {
            this.f552a = hwVar.f552a;
        }
        this.f551a = hwVar.f551a;
        if (hwVar.m453c()) {
            this.f557b = hwVar.f557b;
        }
        if (hwVar.m454d()) {
            this.f560c = hwVar.f560c;
        }
        if (hwVar.e()) {
            this.f562d = hwVar.f562d;
        }
        this.f550a = hwVar.f550a;
        if (hwVar.g()) {
            this.f563e = hwVar.f563e;
        }
        this.f556b = hwVar.f556b;
        this.f559c = hwVar.f559c;
        if (hwVar.j()) {
            HashMap map = new HashMap();
            for (Map.Entry<String, String> entry : hwVar.f554a.entrySet()) {
                map.put(entry.getKey(), entry.getValue());
            }
            this.f554a = map;
        }
        if (hwVar.k()) {
            HashMap map2 = new HashMap();
            for (Map.Entry<String, String> entry2 : hwVar.f558b.entrySet()) {
                map2.put(entry2.getKey(), entry2.getValue());
            }
            this.f558b = map2;
        }
        this.f555a = hwVar.f555a;
        if (hwVar.n()) {
            HashMap map3 = new HashMap();
            for (Map.Entry<String, String> entry3 : hwVar.f561c.entrySet()) {
                map3.put(entry3.getKey(), entry3.getValue());
            }
            this.f561c = map3;
        }
    }

    public int a() {
        return this.f550a;
    }

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
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
        int iCompareTo = Boolean.valueOf(m447a()).compareTo(Boolean.valueOf(hwVar.m447a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m447a() && (iA13 = iv.a(this.f552a, hwVar.f552a)) != 0) {
            return iA13;
        }
        int iCompareTo2 = Boolean.valueOf(m451b()).compareTo(Boolean.valueOf(hwVar.m451b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (m451b() && (iA12 = iv.a(this.f551a, hwVar.f551a)) != 0) {
            return iA12;
        }
        int iCompareTo3 = Boolean.valueOf(m453c()).compareTo(Boolean.valueOf(hwVar.m453c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (m453c() && (iA11 = iv.a(this.f557b, hwVar.f557b)) != 0) {
            return iA11;
        }
        int iCompareTo4 = Boolean.valueOf(m454d()).compareTo(Boolean.valueOf(hwVar.m454d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (m454d() && (iA10 = iv.a(this.f560c, hwVar.f560c)) != 0) {
            return iA10;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(hwVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA9 = iv.a(this.f562d, hwVar.f562d)) != 0) {
            return iA9;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(hwVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA8 = iv.a(this.f550a, hwVar.f550a)) != 0) {
            return iA8;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(hwVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA7 = iv.a(this.f563e, hwVar.f563e)) != 0) {
            return iA7;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(hwVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA6 = iv.a(this.f556b, hwVar.f556b)) != 0) {
            return iA6;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(hwVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA5 = iv.a(this.f559c, hwVar.f559c)) != 0) {
            return iA5;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(hwVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA4 = iv.a(this.f554a, hwVar.f554a)) != 0) {
            return iA4;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(hwVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (k() && (iA3 = iv.a(this.f558b, hwVar.f558b)) != 0) {
            return iA3;
        }
        int iCompareTo12 = Boolean.valueOf(m()).compareTo(Boolean.valueOf(hwVar.m()));
        if (iCompareTo12 != 0) {
            return iCompareTo12;
        }
        if (m() && (iA2 = iv.a(this.f555a, hwVar.f555a)) != 0) {
            return iA2;
        }
        int iCompareTo13 = Boolean.valueOf(n()).compareTo(Boolean.valueOf(hwVar.n()));
        if (iCompareTo13 != 0) {
            return iCompareTo13;
        }
        if (!n() || (iA = iv.a(this.f561c, hwVar.f561c)) == 0) {
            return 0;
        }
        return iA;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public long m442a() {
        return this.f551a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public hw m443a() {
        return new hw(this);
    }

    public hw a(int i2) {
        this.f550a = i2;
        b(true);
        return this;
    }

    public hw a(String str) {
        this.f552a = str;
        return this;
    }

    public hw a(Map<String, String> map) {
        this.f554a = map;
        return this;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m444a() {
        return this.f552a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public Map<String, String> m445a() {
        return this.f554a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m446a() throws jg {
        if (this.f552a != null) {
            return;
        }
        throw new jg("Required field 'id' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0041  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r9) throws com.xiaomi.push.jg {
        /*
            Method dump skipped, instruction units count: 354
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.hw.a(com.xiaomi.push.jf):void");
    }

    public void a(String str, String str2) {
        if (this.f554a == null) {
            this.f554a = new HashMap();
        }
        this.f554a.put(str, str2);
    }

    public void a(boolean z) {
        this.f553a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m447a() {
        return this.f552a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m448a(hw hwVar) {
        if (hwVar == null) {
            return false;
        }
        boolean zM447a = m447a();
        boolean zM447a2 = hwVar.m447a();
        if (((zM447a || zM447a2) && !(zM447a && zM447a2 && this.f552a.equals(hwVar.f552a))) || this.f551a != hwVar.f551a) {
            return false;
        }
        boolean zM453c = m453c();
        boolean zM453c2 = hwVar.m453c();
        if ((zM453c || zM453c2) && !(zM453c && zM453c2 && this.f557b.equals(hwVar.f557b))) {
            return false;
        }
        boolean zM454d = m454d();
        boolean zM454d2 = hwVar.m454d();
        if ((zM454d || zM454d2) && !(zM454d && zM454d2 && this.f560c.equals(hwVar.f560c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = hwVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.f562d.equals(hwVar.f562d))) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = hwVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.f550a == hwVar.f550a)) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = hwVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f563e.equals(hwVar.f563e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = hwVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f556b == hwVar.f556b)) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = hwVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.f559c == hwVar.f559c)) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = hwVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.f554a.equals(hwVar.f554a))) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = hwVar.k();
        if ((zK || zK2) && !(zK && zK2 && this.f558b.equals(hwVar.f558b))) {
            return false;
        }
        boolean zM = m();
        boolean zM2 = hwVar.m();
        if ((zM || zM2) && !(zM && zM2 && this.f555a == hwVar.f555a)) {
            return false;
        }
        boolean zN = n();
        boolean zN2 = hwVar.n();
        if (zN || zN2) {
            return zN && zN2 && this.f561c.equals(hwVar.f561c);
        }
        return true;
    }

    public int b() {
        return this.f556b;
    }

    public hw b(int i2) {
        this.f556b = i2;
        c(true);
        return this;
    }

    public hw b(String str) {
        this.f557b = str;
        return this;
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public String m449b() {
        return this.f557b;
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public Map<String, String> m450b() {
        return this.f558b;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m446a();
        jfVar.a(f549a);
        if (this.f552a != null) {
            jfVar.a(f8218a);
            jfVar.a(this.f552a);
            jfVar.b();
        }
        jfVar.a(b);
        jfVar.a(this.f551a);
        jfVar.b();
        if (this.f557b != null && m453c()) {
            jfVar.a(c);
            jfVar.a(this.f557b);
            jfVar.b();
        }
        if (this.f560c != null && m454d()) {
            jfVar.a(d);
            jfVar.a(this.f560c);
            jfVar.b();
        }
        if (this.f562d != null && e()) {
            jfVar.a(e);
            jfVar.a(this.f562d);
            jfVar.b();
        }
        if (f()) {
            jfVar.a(f);
            jfVar.mo567a(this.f550a);
            jfVar.b();
        }
        if (this.f563e != null && g()) {
            jfVar.a(g);
            jfVar.a(this.f563e);
            jfVar.b();
        }
        if (h()) {
            jfVar.a(h);
            jfVar.mo567a(this.f556b);
            jfVar.b();
        }
        if (i()) {
            jfVar.a(i);
            jfVar.mo567a(this.f559c);
            jfVar.b();
        }
        if (this.f554a != null && j()) {
            jfVar.a(j);
            jfVar.a(new je((byte) 11, (byte) 11, this.f554a.size()));
            for (Map.Entry<String, String> entry : this.f554a.entrySet()) {
                jfVar.a(entry.getKey());
                jfVar.a(entry.getValue());
            }
            jfVar.d();
            jfVar.b();
        }
        if (this.f558b != null && k()) {
            jfVar.a(k);
            jfVar.a(new je((byte) 11, (byte) 11, this.f558b.size()));
            for (Map.Entry<String, String> entry2 : this.f558b.entrySet()) {
                jfVar.a(entry2.getKey());
                jfVar.a(entry2.getValue());
            }
            jfVar.d();
            jfVar.b();
        }
        if (m()) {
            jfVar.a(l);
            jfVar.a(this.f555a);
            jfVar.b();
        }
        if (this.f561c != null && n()) {
            jfVar.a(m);
            jfVar.a(new je((byte) 11, (byte) 11, this.f561c.size()));
            for (Map.Entry<String, String> entry3 : this.f561c.entrySet()) {
                jfVar.a(entry3.getKey());
                jfVar.a(entry3.getValue());
            }
            jfVar.d();
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public void b(String str, String str2) {
        if (this.f558b == null) {
            this.f558b = new HashMap();
        }
        this.f558b.put(str, str2);
    }

    public void b(boolean z) {
        this.f553a.set(1, z);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m451b() {
        return this.f553a.get(0);
    }

    public int c() {
        return this.f559c;
    }

    public hw c(int i2) {
        this.f559c = i2;
        d(true);
        return this;
    }

    public hw c(String str) {
        this.f560c = str;
        return this;
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public String m452c() {
        return this.f560c;
    }

    public void c(boolean z) {
        this.f553a.set(2, z);
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public boolean m453c() {
        return this.f557b != null;
    }

    public hw d(String str) {
        this.f562d = str;
        return this;
    }

    public String d() {
        return this.f562d;
    }

    public void d(boolean z) {
        this.f553a.set(3, z);
    }

    /* JADX INFO: renamed from: d, reason: collision with other method in class */
    public boolean m454d() {
        return this.f560c != null;
    }

    public void e(boolean z) {
        this.f553a.set(4, z);
    }

    public boolean e() {
        return this.f562d != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof hw)) {
            return m448a((hw) obj);
        }
        return false;
    }

    public boolean f() {
        return this.f553a.get(1);
    }

    public boolean g() {
        return this.f563e != null;
    }

    public boolean h() {
        return this.f553a.get(2);
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f553a.get(3);
    }

    public boolean j() {
        return this.f554a != null;
    }

    public boolean k() {
        return this.f558b != null;
    }

    public boolean l() {
        return this.f555a;
    }

    public boolean m() {
        return this.f553a.get(4);
    }

    public boolean n() {
        return this.f561c != null;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("PushMetaInfo(");
        sb.append("id:");
        String str = this.f552a;
        if (str == null) {
            sb.append("null");
        } else {
            sb.append(str);
        }
        sb.append(", ");
        sb.append("messageTs:");
        sb.append(this.f551a);
        if (m453c()) {
            sb.append(", ");
            sb.append("topic:");
            String str2 = this.f557b;
            if (str2 == null) {
                sb.append("null");
            } else {
                sb.append(str2);
            }
        }
        if (m454d()) {
            sb.append(", ");
            sb.append("title:");
            String str3 = this.f560c;
            if (str3 == null) {
                sb.append("null");
            } else {
                sb.append(str3);
            }
        }
        if (e()) {
            sb.append(", ");
            sb.append("description:");
            String str4 = this.f562d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (f()) {
            sb.append(", ");
            sb.append("notifyType:");
            sb.append(this.f550a);
        }
        if (g()) {
            sb.append(", ");
            sb.append("url:");
            String str5 = this.f563e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("passThrough:");
            sb.append(this.f556b);
        }
        if (i()) {
            sb.append(", ");
            sb.append("notifyId:");
            sb.append(this.f559c);
        }
        if (j()) {
            sb.append(", ");
            sb.append("extra:");
            Map<String, String> map = this.f554a;
            if (map == null) {
                sb.append("null");
            } else {
                sb.append(map);
            }
        }
        if (k()) {
            sb.append(", ");
            sb.append("internal:");
            Map<String, String> map2 = this.f558b;
            if (map2 == null) {
                sb.append("null");
            } else {
                sb.append(map2);
            }
        }
        if (m()) {
            sb.append(", ");
            sb.append("ignoreRegInfo:");
            sb.append(this.f555a);
        }
        if (n()) {
            sb.append(", ");
            sb.append("apsProperFields:");
            Map<String, String> map3 = this.f561c;
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
