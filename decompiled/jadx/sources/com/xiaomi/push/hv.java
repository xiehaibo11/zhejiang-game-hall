package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

/* JADX INFO: loaded from: classes4.dex */
public class hv implements iu<hv, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f530a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hw f531a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hy f532a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f533a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f534a = new BitSet(4);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public boolean f535a = false;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public long f536b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f537b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public long f538c;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f539c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f540d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f541e;

    /* JADX INFO: renamed from: f, reason: collision with other field name */
    public String f542f;

    /* JADX INFO: renamed from: g, reason: collision with other field name */
    public String f543g;

    /* JADX INFO: renamed from: h, reason: collision with other field name */
    public String f544h;

    /* JADX INFO: renamed from: i, reason: collision with other field name */
    public String f545i;

    /* JADX INFO: renamed from: j, reason: collision with other field name */
    public String f546j;

    /* JADX INFO: renamed from: k, reason: collision with other field name */
    public String f547k;

    /* JADX INFO: renamed from: l, reason: collision with other field name */
    public String f548l;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f529a = new jk("PushMessage");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8217a = new jc("", (byte) 12, 1);
    private static final jc b = new jc("", (byte) 11, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 10, 5);
    private static final jc f = new jc("", (byte) 10, 6);
    private static final jc g = new jc("", (byte) 11, 7);
    private static final jc h = new jc("", (byte) 11, 8);
    private static final jc i = new jc("", (byte) 11, 9);
    private static final jc j = new jc("", (byte) 11, 10);
    private static final jc k = new jc("", (byte) 11, 11);
    private static final jc l = new jc("", (byte) 12, 12);
    private static final jc m = new jc("", (byte) 11, 13);
    private static final jc n = new jc("", (byte) 2, 14);
    private static final jc o = new jc("", (byte) 11, 15);
    private static final jc p = new jc("", (byte) 10, 16);
    private static final jc q = new jc("", (byte) 11, 20);
    private static final jc r = new jc("", (byte) 11, 21);

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(hv hvVar) {
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
        int iA16;
        int iA17;
        int iA18;
        if (!getClass().equals(hvVar.getClass())) {
            return getClass().getName().compareTo(hvVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m438a()).compareTo(Boolean.valueOf(hvVar.m438a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m438a() && (iA18 = iv.a(this.f532a, hvVar.f532a)) != 0) {
            return iA18;
        }
        int iCompareTo2 = Boolean.valueOf(m440b()).compareTo(Boolean.valueOf(hvVar.m440b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (m440b() && (iA17 = iv.a(this.f533a, hvVar.f533a)) != 0) {
            return iA17;
        }
        int iCompareTo3 = Boolean.valueOf(m441c()).compareTo(Boolean.valueOf(hvVar.m441c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (m441c() && (iA16 = iv.a(this.f537b, hvVar.f537b)) != 0) {
            return iA16;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(hvVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA15 = iv.a(this.f539c, hvVar.f539c)) != 0) {
            return iA15;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(hvVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA14 = iv.a(this.f530a, hvVar.f530a)) != 0) {
            return iA14;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(hvVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA13 = iv.a(this.f536b, hvVar.f536b)) != 0) {
            return iA13;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(hvVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA12 = iv.a(this.f540d, hvVar.f540d)) != 0) {
            return iA12;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(hvVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA11 = iv.a(this.f541e, hvVar.f541e)) != 0) {
            return iA11;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(hvVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA10 = iv.a(this.f542f, hvVar.f542f)) != 0) {
            return iA10;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(hvVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA9 = iv.a(this.f543g, hvVar.f543g)) != 0) {
            return iA9;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(hvVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (k() && (iA8 = iv.a(this.f544h, hvVar.f544h)) != 0) {
            return iA8;
        }
        int iCompareTo12 = Boolean.valueOf(l()).compareTo(Boolean.valueOf(hvVar.l()));
        if (iCompareTo12 != 0) {
            return iCompareTo12;
        }
        if (l() && (iA7 = iv.a(this.f531a, hvVar.f531a)) != 0) {
            return iA7;
        }
        int iCompareTo13 = Boolean.valueOf(m()).compareTo(Boolean.valueOf(hvVar.m()));
        if (iCompareTo13 != 0) {
            return iCompareTo13;
        }
        if (m() && (iA6 = iv.a(this.f545i, hvVar.f545i)) != 0) {
            return iA6;
        }
        int iCompareTo14 = Boolean.valueOf(n()).compareTo(Boolean.valueOf(hvVar.n()));
        if (iCompareTo14 != 0) {
            return iCompareTo14;
        }
        if (n() && (iA5 = iv.a(this.f535a, hvVar.f535a)) != 0) {
            return iA5;
        }
        int iCompareTo15 = Boolean.valueOf(o()).compareTo(Boolean.valueOf(hvVar.o()));
        if (iCompareTo15 != 0) {
            return iCompareTo15;
        }
        if (o() && (iA4 = iv.a(this.f546j, hvVar.f546j)) != 0) {
            return iA4;
        }
        int iCompareTo16 = Boolean.valueOf(p()).compareTo(Boolean.valueOf(hvVar.p()));
        if (iCompareTo16 != 0) {
            return iCompareTo16;
        }
        if (p() && (iA3 = iv.a(this.f538c, hvVar.f538c)) != 0) {
            return iA3;
        }
        int iCompareTo17 = Boolean.valueOf(q()).compareTo(Boolean.valueOf(hvVar.q()));
        if (iCompareTo17 != 0) {
            return iCompareTo17;
        }
        if (q() && (iA2 = iv.a(this.f547k, hvVar.f547k)) != 0) {
            return iA2;
        }
        int iCompareTo18 = Boolean.valueOf(r()).compareTo(Boolean.valueOf(hvVar.r()));
        if (iCompareTo18 != 0) {
            return iCompareTo18;
        }
        if (!r() || (iA = iv.a(this.f548l, hvVar.f548l)) == 0) {
            return 0;
        }
        return iA;
    }

    public long a() {
        return this.f530a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m436a() {
        return this.f533a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m437a() throws jg {
        if (this.f533a == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.f537b == null) {
            throw new jg("Required field 'appId' was not present! Struct: " + toString());
        }
        if (this.f539c != null) {
            return;
        }
        throw new jg("Required field 'payload' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0026  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r7) throws com.xiaomi.push.jg {
        /*
            Method dump skipped, instruction units count: 314
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.hv.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z) {
        this.f534a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m438a() {
        return this.f532a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m439a(hv hvVar) {
        if (hvVar == null) {
            return false;
        }
        boolean zM438a = m438a();
        boolean zM438a2 = hvVar.m438a();
        if ((zM438a || zM438a2) && !(zM438a && zM438a2 && this.f532a.m456a(hvVar.f532a))) {
            return false;
        }
        boolean zM440b = m440b();
        boolean zM440b2 = hvVar.m440b();
        if ((zM440b || zM440b2) && !(zM440b && zM440b2 && this.f533a.equals(hvVar.f533a))) {
            return false;
        }
        boolean zM441c = m441c();
        boolean zM441c2 = hvVar.m441c();
        if ((zM441c || zM441c2) && !(zM441c && zM441c2 && this.f537b.equals(hvVar.f537b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = hvVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.f539c.equals(hvVar.f539c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = hvVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.f530a == hvVar.f530a)) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = hvVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.f536b == hvVar.f536b)) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = hvVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f540d.equals(hvVar.f540d))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = hvVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f541e.equals(hvVar.f541e))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = hvVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.f542f.equals(hvVar.f542f))) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = hvVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.f543g.equals(hvVar.f543g))) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = hvVar.k();
        if ((zK || zK2) && !(zK && zK2 && this.f544h.equals(hvVar.f544h))) {
            return false;
        }
        boolean zL = l();
        boolean zL2 = hvVar.l();
        if ((zL || zL2) && !(zL && zL2 && this.f531a.m448a(hvVar.f531a))) {
            return false;
        }
        boolean zM = m();
        boolean zM2 = hvVar.m();
        if ((zM || zM2) && !(zM && zM2 && this.f545i.equals(hvVar.f545i))) {
            return false;
        }
        boolean zN = n();
        boolean zN2 = hvVar.n();
        if ((zN || zN2) && !(zN && zN2 && this.f535a == hvVar.f535a)) {
            return false;
        }
        boolean zO = o();
        boolean zO2 = hvVar.o();
        if ((zO || zO2) && !(zO && zO2 && this.f546j.equals(hvVar.f546j))) {
            return false;
        }
        boolean zP = p();
        boolean zP2 = hvVar.p();
        if ((zP || zP2) && !(zP && zP2 && this.f538c == hvVar.f538c)) {
            return false;
        }
        boolean zQ = q();
        boolean zQ2 = hvVar.q();
        if ((zQ || zQ2) && !(zQ && zQ2 && this.f547k.equals(hvVar.f547k))) {
            return false;
        }
        boolean zR = r();
        boolean zR2 = hvVar.r();
        if (zR || zR2) {
            return zR && zR2 && this.f548l.equals(hvVar.f548l);
        }
        return true;
    }

    public String b() {
        return this.f537b;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m437a();
        jfVar.a(f529a);
        if (this.f532a != null && m438a()) {
            jfVar.a(f8217a);
            this.f532a.b(jfVar);
            jfVar.b();
        }
        if (this.f533a != null) {
            jfVar.a(b);
            jfVar.a(this.f533a);
            jfVar.b();
        }
        if (this.f537b != null) {
            jfVar.a(c);
            jfVar.a(this.f537b);
            jfVar.b();
        }
        if (this.f539c != null) {
            jfVar.a(d);
            jfVar.a(this.f539c);
            jfVar.b();
        }
        if (e()) {
            jfVar.a(e);
            jfVar.a(this.f530a);
            jfVar.b();
        }
        if (f()) {
            jfVar.a(f);
            jfVar.a(this.f536b);
            jfVar.b();
        }
        if (this.f540d != null && g()) {
            jfVar.a(g);
            jfVar.a(this.f540d);
            jfVar.b();
        }
        if (this.f541e != null && h()) {
            jfVar.a(h);
            jfVar.a(this.f541e);
            jfVar.b();
        }
        if (this.f542f != null && i()) {
            jfVar.a(i);
            jfVar.a(this.f542f);
            jfVar.b();
        }
        if (this.f543g != null && j()) {
            jfVar.a(j);
            jfVar.a(this.f543g);
            jfVar.b();
        }
        if (this.f544h != null && k()) {
            jfVar.a(k);
            jfVar.a(this.f544h);
            jfVar.b();
        }
        if (this.f531a != null && l()) {
            jfVar.a(l);
            this.f531a.b(jfVar);
            jfVar.b();
        }
        if (this.f545i != null && m()) {
            jfVar.a(m);
            jfVar.a(this.f545i);
            jfVar.b();
        }
        if (n()) {
            jfVar.a(n);
            jfVar.a(this.f535a);
            jfVar.b();
        }
        if (this.f546j != null && o()) {
            jfVar.a(o);
            jfVar.a(this.f546j);
            jfVar.b();
        }
        if (p()) {
            jfVar.a(p);
            jfVar.a(this.f538c);
            jfVar.b();
        }
        if (this.f547k != null && q()) {
            jfVar.a(q);
            jfVar.a(this.f547k);
            jfVar.b();
        }
        if (this.f548l != null && r()) {
            jfVar.a(r);
            jfVar.a(this.f548l);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public void b(boolean z) {
        this.f534a.set(1, z);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m440b() {
        return this.f533a != null;
    }

    public String c() {
        return this.f539c;
    }

    public void c(boolean z) {
        this.f534a.set(2, z);
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public boolean m441c() {
        return this.f537b != null;
    }

    public void d(boolean z) {
        this.f534a.set(3, z);
    }

    public boolean d() {
        return this.f539c != null;
    }

    public boolean e() {
        return this.f534a.get(0);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof hv)) {
            return m439a((hv) obj);
        }
        return false;
    }

    public boolean f() {
        return this.f534a.get(1);
    }

    public boolean g() {
        return this.f540d != null;
    }

    public boolean h() {
        return this.f541e != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f542f != null;
    }

    public boolean j() {
        return this.f543g != null;
    }

    public boolean k() {
        return this.f544h != null;
    }

    public boolean l() {
        return this.f531a != null;
    }

    public boolean m() {
        return this.f545i != null;
    }

    public boolean n() {
        return this.f534a.get(2);
    }

    public boolean o() {
        return this.f546j != null;
    }

    public boolean p() {
        return this.f534a.get(3);
    }

    public boolean q() {
        return this.f547k != null;
    }

    public boolean r() {
        return this.f548l != null;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("PushMessage(");
        if (m438a()) {
            sb.append("to:");
            hy hyVar = this.f532a;
            if (hyVar == null) {
                sb.append("null");
            } else {
                sb.append(hyVar);
            }
            z = false;
        } else {
            z = true;
        }
        if (!z) {
            sb.append(", ");
        }
        sb.append("id:");
        String str = this.f533a;
        if (str == null) {
            sb.append("null");
        } else {
            sb.append(str);
        }
        sb.append(", ");
        sb.append("appId:");
        String str2 = this.f537b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        sb.append(", ");
        sb.append("payload:");
        String str3 = this.f539c;
        if (str3 == null) {
            sb.append("null");
        } else {
            sb.append(str3);
        }
        if (e()) {
            sb.append(", ");
            sb.append("createAt:");
            sb.append(this.f530a);
        }
        if (f()) {
            sb.append(", ");
            sb.append("ttl:");
            sb.append(this.f536b);
        }
        if (g()) {
            sb.append(", ");
            sb.append("collapseKey:");
            String str4 = this.f540d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("packageName:");
            String str5 = this.f541e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("regId:");
            String str6 = this.f542f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (j()) {
            sb.append(", ");
            sb.append("category:");
            String str7 = this.f543g;
            if (str7 == null) {
                sb.append("null");
            } else {
                sb.append(str7);
            }
        }
        if (k()) {
            sb.append(", ");
            sb.append("topic:");
            String str8 = this.f544h;
            if (str8 == null) {
                sb.append("null");
            } else {
                sb.append(str8);
            }
        }
        if (l()) {
            sb.append(", ");
            sb.append("metaInfo:");
            hw hwVar = this.f531a;
            if (hwVar == null) {
                sb.append("null");
            } else {
                sb.append(hwVar);
            }
        }
        if (m()) {
            sb.append(", ");
            sb.append("aliasName:");
            String str9 = this.f545i;
            if (str9 == null) {
                sb.append("null");
            } else {
                sb.append(str9);
            }
        }
        if (n()) {
            sb.append(", ");
            sb.append("isOnline:");
            sb.append(this.f535a);
        }
        if (o()) {
            sb.append(", ");
            sb.append("userAccount:");
            String str10 = this.f546j;
            if (str10 == null) {
                sb.append("null");
            } else {
                sb.append(str10);
            }
        }
        if (p()) {
            sb.append(", ");
            sb.append("miid:");
            sb.append(this.f538c);
        }
        if (q()) {
            sb.append(", ");
            sb.append("imeiMd5:");
            String str11 = this.f547k;
            if (str11 == null) {
                sb.append("null");
            } else {
                sb.append(str11);
            }
        }
        if (r()) {
            sb.append(", ");
            sb.append("deviceId:");
            String str12 = this.f548l;
            if (str12 == null) {
                sb.append("null");
            } else {
                sb.append(str12);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}
