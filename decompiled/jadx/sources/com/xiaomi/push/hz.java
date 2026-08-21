package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class hz implements iu<hz, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public int f575a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f576a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hy f577a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public im f578a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f579a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public Map<String, String> f581a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public short f582a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f584b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public short f585b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f586c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f587d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f588e;

    /* JADX INFO: renamed from: f, reason: collision with other field name */
    public String f589f;

    /* JADX INFO: renamed from: g, reason: collision with other field name */
    public String f590g;

    /* JADX INFO: renamed from: h, reason: collision with other field name */
    public String f591h;

    /* JADX INFO: renamed from: i, reason: collision with other field name */
    public String f592i;

    /* JADX INFO: renamed from: j, reason: collision with other field name */
    public String f593j;

    /* JADX INFO: renamed from: k, reason: collision with other field name */
    public String f594k;

    /* JADX INFO: renamed from: l, reason: collision with other field name */
    public String f595l;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f574a = new jk("XmPushActionAckMessage");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8221a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 10, 5);
    private static final jc f = new jc("", (byte) 11, 6);
    private static final jc g = new jc("", (byte) 11, 7);
    private static final jc h = new jc("", (byte) 12, 8);
    private static final jc i = new jc("", (byte) 11, 9);
    private static final jc j = new jc("", (byte) 11, 10);
    private static final jc k = new jc("", (byte) 2, 11);
    private static final jc l = new jc("", (byte) 11, 12);
    private static final jc m = new jc("", (byte) 11, 13);
    private static final jc n = new jc("", (byte) 11, 14);
    private static final jc o = new jc("", (byte) 6, 15);
    private static final jc p = new jc("", (byte) 6, 16);
    private static final jc q = new jc("", (byte) 11, 20);
    private static final jc r = new jc("", (byte) 11, 21);
    private static final jc s = new jc("", (byte) 8, 22);
    private static final jc t = new jc("", (byte) 13, 23);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f580a = new BitSet(5);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public boolean f583a = false;

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(hz hzVar) {
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
        int iA19;
        int iA20;
        if (!getClass().equals(hzVar.getClass())) {
            return getClass().getName().compareTo(hzVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m457a()).compareTo(Boolean.valueOf(hzVar.m457a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m457a() && (iA20 = iv.a(this.f579a, hzVar.f579a)) != 0) {
            return iA20;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(hzVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA19 = iv.a(this.f577a, hzVar.f577a)) != 0) {
            return iA19;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(hzVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA18 = iv.a(this.f584b, hzVar.f584b)) != 0) {
            return iA18;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(hzVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA17 = iv.a(this.f586c, hzVar.f586c)) != 0) {
            return iA17;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(hzVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA16 = iv.a(this.f576a, hzVar.f576a)) != 0) {
            return iA16;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(hzVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA15 = iv.a(this.f587d, hzVar.f587d)) != 0) {
            return iA15;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(hzVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA14 = iv.a(this.f588e, hzVar.f588e)) != 0) {
            return iA14;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(hzVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA13 = iv.a(this.f578a, hzVar.f578a)) != 0) {
            return iA13;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(hzVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA12 = iv.a(this.f589f, hzVar.f589f)) != 0) {
            return iA12;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(hzVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA11 = iv.a(this.f590g, hzVar.f590g)) != 0) {
            return iA11;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(hzVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (k() && (iA10 = iv.a(this.f583a, hzVar.f583a)) != 0) {
            return iA10;
        }
        int iCompareTo12 = Boolean.valueOf(l()).compareTo(Boolean.valueOf(hzVar.l()));
        if (iCompareTo12 != 0) {
            return iCompareTo12;
        }
        if (l() && (iA9 = iv.a(this.f591h, hzVar.f591h)) != 0) {
            return iA9;
        }
        int iCompareTo13 = Boolean.valueOf(m()).compareTo(Boolean.valueOf(hzVar.m()));
        if (iCompareTo13 != 0) {
            return iCompareTo13;
        }
        if (m() && (iA8 = iv.a(this.f592i, hzVar.f592i)) != 0) {
            return iA8;
        }
        int iCompareTo14 = Boolean.valueOf(n()).compareTo(Boolean.valueOf(hzVar.n()));
        if (iCompareTo14 != 0) {
            return iCompareTo14;
        }
        if (n() && (iA7 = iv.a(this.f593j, hzVar.f593j)) != 0) {
            return iA7;
        }
        int iCompareTo15 = Boolean.valueOf(o()).compareTo(Boolean.valueOf(hzVar.o()));
        if (iCompareTo15 != 0) {
            return iCompareTo15;
        }
        if (o() && (iA6 = iv.a(this.f582a, hzVar.f582a)) != 0) {
            return iA6;
        }
        int iCompareTo16 = Boolean.valueOf(p()).compareTo(Boolean.valueOf(hzVar.p()));
        if (iCompareTo16 != 0) {
            return iCompareTo16;
        }
        if (p() && (iA5 = iv.a(this.f585b, hzVar.f585b)) != 0) {
            return iA5;
        }
        int iCompareTo17 = Boolean.valueOf(q()).compareTo(Boolean.valueOf(hzVar.q()));
        if (iCompareTo17 != 0) {
            return iCompareTo17;
        }
        if (q() && (iA4 = iv.a(this.f594k, hzVar.f594k)) != 0) {
            return iA4;
        }
        int iCompareTo18 = Boolean.valueOf(r()).compareTo(Boolean.valueOf(hzVar.r()));
        if (iCompareTo18 != 0) {
            return iCompareTo18;
        }
        if (r() && (iA3 = iv.a(this.f595l, hzVar.f595l)) != 0) {
            return iA3;
        }
        int iCompareTo19 = Boolean.valueOf(s()).compareTo(Boolean.valueOf(hzVar.s()));
        if (iCompareTo19 != 0) {
            return iCompareTo19;
        }
        if (s() && (iA2 = iv.a(this.f575a, hzVar.f575a)) != 0) {
            return iA2;
        }
        int iCompareTo20 = Boolean.valueOf(t()).compareTo(Boolean.valueOf(hzVar.t()));
        if (iCompareTo20 != 0) {
            return iCompareTo20;
        }
        if (!t() || (iA = iv.a(this.f581a, hzVar.f581a)) == 0) {
            return 0;
        }
        return iA;
    }

    public hz a(long j2) {
        this.f576a = j2;
        a(true);
        return this;
    }

    public hz a(String str) {
        this.f584b = str;
        return this;
    }

    public hz a(short s2) {
        this.f582a = s2;
        c(true);
        return this;
    }

    public void a() throws jg {
        if (this.f584b == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.f586c != null) {
            return;
        }
        throw new jg("Required field 'appId' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:13:0x003f  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r8) throws com.xiaomi.push.jg {
        /*
            Method dump skipped, instruction units count: 416
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.hz.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z) {
        this.f580a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m457a() {
        return this.f579a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m458a(hz hzVar) {
        if (hzVar == null) {
            return false;
        }
        boolean zM457a = m457a();
        boolean zM457a2 = hzVar.m457a();
        if ((zM457a || zM457a2) && !(zM457a && zM457a2 && this.f579a.equals(hzVar.f579a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = hzVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.f577a.m456a(hzVar.f577a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = hzVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.f584b.equals(hzVar.f584b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = hzVar.d();
        if (((zD || zD2) && !(zD && zD2 && this.f586c.equals(hzVar.f586c))) || this.f576a != hzVar.f576a) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = hzVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.f587d.equals(hzVar.f587d))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = hzVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f588e.equals(hzVar.f588e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = hzVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f578a.m519a(hzVar.f578a))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = hzVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.f589f.equals(hzVar.f589f))) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = hzVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.f590g.equals(hzVar.f590g))) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = hzVar.k();
        if ((zK || zK2) && !(zK && zK2 && this.f583a == hzVar.f583a)) {
            return false;
        }
        boolean zL = l();
        boolean zL2 = hzVar.l();
        if ((zL || zL2) && !(zL && zL2 && this.f591h.equals(hzVar.f591h))) {
            return false;
        }
        boolean zM = m();
        boolean zM2 = hzVar.m();
        if ((zM || zM2) && !(zM && zM2 && this.f592i.equals(hzVar.f592i))) {
            return false;
        }
        boolean zN = n();
        boolean zN2 = hzVar.n();
        if ((zN || zN2) && !(zN && zN2 && this.f593j.equals(hzVar.f593j))) {
            return false;
        }
        boolean zO = o();
        boolean zO2 = hzVar.o();
        if ((zO || zO2) && !(zO && zO2 && this.f582a == hzVar.f582a)) {
            return false;
        }
        boolean zP = p();
        boolean zP2 = hzVar.p();
        if ((zP || zP2) && !(zP && zP2 && this.f585b == hzVar.f585b)) {
            return false;
        }
        boolean zQ = q();
        boolean zQ2 = hzVar.q();
        if ((zQ || zQ2) && !(zQ && zQ2 && this.f594k.equals(hzVar.f594k))) {
            return false;
        }
        boolean zR = r();
        boolean zR2 = hzVar.r();
        if ((zR || zR2) && !(zR && zR2 && this.f595l.equals(hzVar.f595l))) {
            return false;
        }
        boolean zS = s();
        boolean zS2 = hzVar.s();
        if ((zS || zS2) && !(zS && zS2 && this.f575a == hzVar.f575a)) {
            return false;
        }
        boolean zT = t();
        boolean zT2 = hzVar.t();
        if (zT || zT2) {
            return zT && zT2 && this.f581a.equals(hzVar.f581a);
        }
        return true;
    }

    public hz b(String str) {
        this.f586c = str;
        return this;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        a();
        jfVar.a(f574a);
        if (this.f579a != null && m457a()) {
            jfVar.a(f8221a);
            jfVar.a(this.f579a);
            jfVar.b();
        }
        if (this.f577a != null && b()) {
            jfVar.a(b);
            this.f577a.b(jfVar);
            jfVar.b();
        }
        if (this.f584b != null) {
            jfVar.a(c);
            jfVar.a(this.f584b);
            jfVar.b();
        }
        if (this.f586c != null) {
            jfVar.a(d);
            jfVar.a(this.f586c);
            jfVar.b();
        }
        jfVar.a(e);
        jfVar.a(this.f576a);
        jfVar.b();
        if (this.f587d != null && f()) {
            jfVar.a(f);
            jfVar.a(this.f587d);
            jfVar.b();
        }
        if (this.f588e != null && g()) {
            jfVar.a(g);
            jfVar.a(this.f588e);
            jfVar.b();
        }
        if (this.f578a != null && h()) {
            jfVar.a(h);
            this.f578a.b(jfVar);
            jfVar.b();
        }
        if (this.f589f != null && i()) {
            jfVar.a(i);
            jfVar.a(this.f589f);
            jfVar.b();
        }
        if (this.f590g != null && j()) {
            jfVar.a(j);
            jfVar.a(this.f590g);
            jfVar.b();
        }
        if (k()) {
            jfVar.a(k);
            jfVar.a(this.f583a);
            jfVar.b();
        }
        if (this.f591h != null && l()) {
            jfVar.a(l);
            jfVar.a(this.f591h);
            jfVar.b();
        }
        if (this.f592i != null && m()) {
            jfVar.a(m);
            jfVar.a(this.f592i);
            jfVar.b();
        }
        if (this.f593j != null && n()) {
            jfVar.a(n);
            jfVar.a(this.f593j);
            jfVar.b();
        }
        if (o()) {
            jfVar.a(o);
            jfVar.a(this.f582a);
            jfVar.b();
        }
        if (p()) {
            jfVar.a(p);
            jfVar.a(this.f585b);
            jfVar.b();
        }
        if (this.f594k != null && q()) {
            jfVar.a(q);
            jfVar.a(this.f594k);
            jfVar.b();
        }
        if (this.f595l != null && r()) {
            jfVar.a(r);
            jfVar.a(this.f595l);
            jfVar.b();
        }
        if (s()) {
            jfVar.a(s);
            jfVar.mo567a(this.f575a);
            jfVar.b();
        }
        if (this.f581a != null && t()) {
            jfVar.a(t);
            jfVar.a(new je((byte) 11, (byte) 11, this.f581a.size()));
            for (Map.Entry<String, String> entry : this.f581a.entrySet()) {
                jfVar.a(entry.getKey());
                jfVar.a(entry.getValue());
            }
            jfVar.d();
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public void b(boolean z) {
        this.f580a.set(1, z);
    }

    public boolean b() {
        return this.f577a != null;
    }

    public hz c(String str) {
        this.f587d = str;
        return this;
    }

    public void c(boolean z) {
        this.f580a.set(2, z);
    }

    public boolean c() {
        return this.f584b != null;
    }

    public hz d(String str) {
        this.f588e = str;
        return this;
    }

    public void d(boolean z) {
        this.f580a.set(3, z);
    }

    public boolean d() {
        return this.f586c != null;
    }

    public void e(boolean z) {
        this.f580a.set(4, z);
    }

    public boolean e() {
        return this.f580a.get(0);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof hz)) {
            return m458a((hz) obj);
        }
        return false;
    }

    public boolean f() {
        return this.f587d != null;
    }

    public boolean g() {
        return this.f588e != null;
    }

    public boolean h() {
        return this.f578a != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f589f != null;
    }

    public boolean j() {
        return this.f590g != null;
    }

    public boolean k() {
        return this.f580a.get(1);
    }

    public boolean l() {
        return this.f591h != null;
    }

    public boolean m() {
        return this.f592i != null;
    }

    public boolean n() {
        return this.f593j != null;
    }

    public boolean o() {
        return this.f580a.get(2);
    }

    public boolean p() {
        return this.f580a.get(3);
    }

    public boolean q() {
        return this.f594k != null;
    }

    public boolean r() {
        return this.f595l != null;
    }

    public boolean s() {
        return this.f580a.get(4);
    }

    public boolean t() {
        return this.f581a != null;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionAckMessage(");
        boolean z2 = false;
        if (m457a()) {
            sb.append("debug:");
            String str = this.f579a;
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
            hy hyVar = this.f577a;
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
        String str2 = this.f584b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        sb.append(", ");
        sb.append("appId:");
        String str3 = this.f586c;
        if (str3 == null) {
            sb.append("null");
        } else {
            sb.append(str3);
        }
        sb.append(", ");
        sb.append("messageTs:");
        sb.append(this.f576a);
        if (f()) {
            sb.append(", ");
            sb.append("topic:");
            String str4 = this.f587d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("aliasName:");
            String str5 = this.f588e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("request:");
            im imVar = this.f578a;
            if (imVar == null) {
                sb.append("null");
            } else {
                sb.append(imVar);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("packageName:");
            String str6 = this.f589f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (j()) {
            sb.append(", ");
            sb.append("category:");
            String str7 = this.f590g;
            if (str7 == null) {
                sb.append("null");
            } else {
                sb.append(str7);
            }
        }
        if (k()) {
            sb.append(", ");
            sb.append("isOnline:");
            sb.append(this.f583a);
        }
        if (l()) {
            sb.append(", ");
            sb.append("regId:");
            String str8 = this.f591h;
            if (str8 == null) {
                sb.append("null");
            } else {
                sb.append(str8);
            }
        }
        if (m()) {
            sb.append(", ");
            sb.append("callbackUrl:");
            String str9 = this.f592i;
            if (str9 == null) {
                sb.append("null");
            } else {
                sb.append(str9);
            }
        }
        if (n()) {
            sb.append(", ");
            sb.append("userAccount:");
            String str10 = this.f593j;
            if (str10 == null) {
                sb.append("null");
            } else {
                sb.append(str10);
            }
        }
        if (o()) {
            sb.append(", ");
            sb.append("deviceStatus:");
            sb.append((int) this.f582a);
        }
        if (p()) {
            sb.append(", ");
            sb.append("geoMsgStatus:");
            sb.append((int) this.f585b);
        }
        if (q()) {
            sb.append(", ");
            sb.append("imeiMd5:");
            String str11 = this.f594k;
            if (str11 == null) {
                sb.append("null");
            } else {
                sb.append(str11);
            }
        }
        if (r()) {
            sb.append(", ");
            sb.append("deviceId:");
            String str12 = this.f595l;
            if (str12 == null) {
                sb.append("null");
            } else {
                sb.append(str12);
            }
        }
        if (s()) {
            sb.append(", ");
            sb.append("passThrough:");
            sb.append(this.f575a);
        }
        if (t()) {
            sb.append(", ");
            sb.append("extra:");
            Map<String, String> map = this.f581a;
            if (map == null) {
                sb.append("null");
            } else {
                sb.append(map);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}
