package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class ik implements iu<ik, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public int f701a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f702a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hy f703a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f704a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public List<String> f706a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public int f708b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public long f709b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f710b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public long f711c;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f712c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f713d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f714e;

    /* JADX INFO: renamed from: f, reason: collision with other field name */
    public String f715f;

    /* JADX INFO: renamed from: g, reason: collision with other field name */
    public String f716g;

    /* JADX INFO: renamed from: h, reason: collision with other field name */
    public String f717h;

    /* JADX INFO: renamed from: i, reason: collision with other field name */
    public String f718i;

    /* JADX INFO: renamed from: j, reason: collision with other field name */
    public String f719j;

    /* JADX INFO: renamed from: k, reason: collision with other field name */
    public String f720k;

    /* JADX INFO: renamed from: l, reason: collision with other field name */
    public String f721l;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f700a = new jk("XmPushActionRegistrationResult");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8233a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 10, 6);
    private static final jc f = new jc("", (byte) 11, 7);
    private static final jc g = new jc("", (byte) 11, 8);
    private static final jc h = new jc("", (byte) 11, 9);
    private static final jc i = new jc("", (byte) 11, 10);
    private static final jc j = new jc("", (byte) 10, 11);
    private static final jc k = new jc("", (byte) 11, 12);
    private static final jc l = new jc("", (byte) 11, 13);
    private static final jc m = new jc("", (byte) 10, 14);
    private static final jc n = new jc("", (byte) 11, 15);
    private static final jc o = new jc("", (byte) 8, 16);
    private static final jc p = new jc("", (byte) 11, 17);
    private static final jc q = new jc("", (byte) 8, 18);
    private static final jc r = new jc("", (byte) 11, 19);
    private static final jc s = new jc("", (byte) 2, 20);
    private static final jc t = new jc("", (byte) 15, 21);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f705a = new BitSet(6);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public boolean f707a = false;

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(ik ikVar) {
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
        if (!getClass().equals(ikVar.getClass())) {
            return getClass().getName().compareTo(ikVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m510a()).compareTo(Boolean.valueOf(ikVar.m510a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m510a() && (iA20 = iv.a(this.f704a, ikVar.f704a)) != 0) {
            return iA20;
        }
        int iCompareTo2 = Boolean.valueOf(m512b()).compareTo(Boolean.valueOf(ikVar.m512b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (m512b() && (iA19 = iv.a(this.f703a, ikVar.f703a)) != 0) {
            return iA19;
        }
        int iCompareTo3 = Boolean.valueOf(m513c()).compareTo(Boolean.valueOf(ikVar.m513c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (m513c() && (iA18 = iv.a(this.f710b, ikVar.f710b)) != 0) {
            return iA18;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(ikVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA17 = iv.a(this.f712c, ikVar.f712c)) != 0) {
            return iA17;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(ikVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA16 = iv.a(this.f702a, ikVar.f702a)) != 0) {
            return iA16;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(ikVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA15 = iv.a(this.f713d, ikVar.f713d)) != 0) {
            return iA15;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(ikVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA14 = iv.a(this.f714e, ikVar.f714e)) != 0) {
            return iA14;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(ikVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA13 = iv.a(this.f715f, ikVar.f715f)) != 0) {
            return iA13;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(ikVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA12 = iv.a(this.f716g, ikVar.f716g)) != 0) {
            return iA12;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(ikVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA11 = iv.a(this.f709b, ikVar.f709b)) != 0) {
            return iA11;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(ikVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (k() && (iA10 = iv.a(this.f717h, ikVar.f717h)) != 0) {
            return iA10;
        }
        int iCompareTo12 = Boolean.valueOf(l()).compareTo(Boolean.valueOf(ikVar.l()));
        if (iCompareTo12 != 0) {
            return iCompareTo12;
        }
        if (l() && (iA9 = iv.a(this.f718i, ikVar.f718i)) != 0) {
            return iA9;
        }
        int iCompareTo13 = Boolean.valueOf(m()).compareTo(Boolean.valueOf(ikVar.m()));
        if (iCompareTo13 != 0) {
            return iCompareTo13;
        }
        if (m() && (iA8 = iv.a(this.f711c, ikVar.f711c)) != 0) {
            return iA8;
        }
        int iCompareTo14 = Boolean.valueOf(n()).compareTo(Boolean.valueOf(ikVar.n()));
        if (iCompareTo14 != 0) {
            return iCompareTo14;
        }
        if (n() && (iA7 = iv.a(this.f719j, ikVar.f719j)) != 0) {
            return iA7;
        }
        int iCompareTo15 = Boolean.valueOf(o()).compareTo(Boolean.valueOf(ikVar.o()));
        if (iCompareTo15 != 0) {
            return iCompareTo15;
        }
        if (o() && (iA6 = iv.a(this.f701a, ikVar.f701a)) != 0) {
            return iA6;
        }
        int iCompareTo16 = Boolean.valueOf(p()).compareTo(Boolean.valueOf(ikVar.p()));
        if (iCompareTo16 != 0) {
            return iCompareTo16;
        }
        if (p() && (iA5 = iv.a(this.f720k, ikVar.f720k)) != 0) {
            return iA5;
        }
        int iCompareTo17 = Boolean.valueOf(q()).compareTo(Boolean.valueOf(ikVar.q()));
        if (iCompareTo17 != 0) {
            return iCompareTo17;
        }
        if (q() && (iA4 = iv.a(this.f708b, ikVar.f708b)) != 0) {
            return iA4;
        }
        int iCompareTo18 = Boolean.valueOf(r()).compareTo(Boolean.valueOf(ikVar.r()));
        if (iCompareTo18 != 0) {
            return iCompareTo18;
        }
        if (r() && (iA3 = iv.a(this.f721l, ikVar.f721l)) != 0) {
            return iA3;
        }
        int iCompareTo19 = Boolean.valueOf(s()).compareTo(Boolean.valueOf(ikVar.s()));
        if (iCompareTo19 != 0) {
            return iCompareTo19;
        }
        if (s() && (iA2 = iv.a(this.f707a, ikVar.f707a)) != 0) {
            return iA2;
        }
        int iCompareTo20 = Boolean.valueOf(t()).compareTo(Boolean.valueOf(ikVar.t()));
        if (iCompareTo20 != 0) {
            return iCompareTo20;
        }
        if (!t() || (iA = iv.a(this.f706a, ikVar.f706a)) == 0) {
            return 0;
        }
        return iA;
    }

    public long a() {
        return this.f702a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m507a() {
        return this.f710b;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public List<String> m508a() {
        return this.f706a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m509a() throws jg {
        if (this.f710b == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.f712c != null) {
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
    public void a(com.xiaomi.push.jf r7) throws com.xiaomi.push.jg {
        /*
            Method dump skipped, instruction units count: 406
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.ik.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z) {
        this.f705a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m510a() {
        return this.f704a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m511a(ik ikVar) {
        if (ikVar == null) {
            return false;
        }
        boolean zM510a = m510a();
        boolean zM510a2 = ikVar.m510a();
        if ((zM510a || zM510a2) && !(zM510a && zM510a2 && this.f704a.equals(ikVar.f704a))) {
            return false;
        }
        boolean zM512b = m512b();
        boolean zM512b2 = ikVar.m512b();
        if ((zM512b || zM512b2) && !(zM512b && zM512b2 && this.f703a.m456a(ikVar.f703a))) {
            return false;
        }
        boolean zM513c = m513c();
        boolean zM513c2 = ikVar.m513c();
        if ((zM513c || zM513c2) && !(zM513c && zM513c2 && this.f710b.equals(ikVar.f710b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = ikVar.d();
        if (((zD || zD2) && !(zD && zD2 && this.f712c.equals(ikVar.f712c))) || this.f702a != ikVar.f702a) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = ikVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.f713d.equals(ikVar.f713d))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = ikVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f714e.equals(ikVar.f714e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = ikVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f715f.equals(ikVar.f715f))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = ikVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.f716g.equals(ikVar.f716g))) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = ikVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.f709b == ikVar.f709b)) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = ikVar.k();
        if ((zK || zK2) && !(zK && zK2 && this.f717h.equals(ikVar.f717h))) {
            return false;
        }
        boolean zL = l();
        boolean zL2 = ikVar.l();
        if ((zL || zL2) && !(zL && zL2 && this.f718i.equals(ikVar.f718i))) {
            return false;
        }
        boolean zM = m();
        boolean zM2 = ikVar.m();
        if ((zM || zM2) && !(zM && zM2 && this.f711c == ikVar.f711c)) {
            return false;
        }
        boolean zN = n();
        boolean zN2 = ikVar.n();
        if ((zN || zN2) && !(zN && zN2 && this.f719j.equals(ikVar.f719j))) {
            return false;
        }
        boolean zO = o();
        boolean zO2 = ikVar.o();
        if ((zO || zO2) && !(zO && zO2 && this.f701a == ikVar.f701a)) {
            return false;
        }
        boolean zP = p();
        boolean zP2 = ikVar.p();
        if ((zP || zP2) && !(zP && zP2 && this.f720k.equals(ikVar.f720k))) {
            return false;
        }
        boolean zQ = q();
        boolean zQ2 = ikVar.q();
        if ((zQ || zQ2) && !(zQ && zQ2 && this.f708b == ikVar.f708b)) {
            return false;
        }
        boolean zR = r();
        boolean zR2 = ikVar.r();
        if ((zR || zR2) && !(zR && zR2 && this.f721l.equals(ikVar.f721l))) {
            return false;
        }
        boolean zS = s();
        boolean zS2 = ikVar.s();
        if ((zS || zS2) && !(zS && zS2 && this.f707a == ikVar.f707a)) {
            return false;
        }
        boolean zT = t();
        boolean zT2 = ikVar.t();
        if (zT || zT2) {
            return zT && zT2 && this.f706a.equals(ikVar.f706a);
        }
        return true;
    }

    public String b() {
        return this.f715f;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m509a();
        jfVar.a(f700a);
        if (this.f704a != null && m510a()) {
            jfVar.a(f8233a);
            jfVar.a(this.f704a);
            jfVar.b();
        }
        if (this.f703a != null && m512b()) {
            jfVar.a(b);
            this.f703a.b(jfVar);
            jfVar.b();
        }
        if (this.f710b != null) {
            jfVar.a(c);
            jfVar.a(this.f710b);
            jfVar.b();
        }
        if (this.f712c != null) {
            jfVar.a(d);
            jfVar.a(this.f712c);
            jfVar.b();
        }
        jfVar.a(e);
        jfVar.a(this.f702a);
        jfVar.b();
        if (this.f713d != null && f()) {
            jfVar.a(f);
            jfVar.a(this.f713d);
            jfVar.b();
        }
        if (this.f714e != null && g()) {
            jfVar.a(g);
            jfVar.a(this.f714e);
            jfVar.b();
        }
        if (this.f715f != null && h()) {
            jfVar.a(h);
            jfVar.a(this.f715f);
            jfVar.b();
        }
        if (this.f716g != null && i()) {
            jfVar.a(i);
            jfVar.a(this.f716g);
            jfVar.b();
        }
        if (j()) {
            jfVar.a(j);
            jfVar.a(this.f709b);
            jfVar.b();
        }
        if (this.f717h != null && k()) {
            jfVar.a(k);
            jfVar.a(this.f717h);
            jfVar.b();
        }
        if (this.f718i != null && l()) {
            jfVar.a(l);
            jfVar.a(this.f718i);
            jfVar.b();
        }
        if (m()) {
            jfVar.a(m);
            jfVar.a(this.f711c);
            jfVar.b();
        }
        if (this.f719j != null && n()) {
            jfVar.a(n);
            jfVar.a(this.f719j);
            jfVar.b();
        }
        if (o()) {
            jfVar.a(o);
            jfVar.mo567a(this.f701a);
            jfVar.b();
        }
        if (this.f720k != null && p()) {
            jfVar.a(p);
            jfVar.a(this.f720k);
            jfVar.b();
        }
        if (q()) {
            jfVar.a(q);
            jfVar.mo567a(this.f708b);
            jfVar.b();
        }
        if (this.f721l != null && r()) {
            jfVar.a(r);
            jfVar.a(this.f721l);
            jfVar.b();
        }
        if (s()) {
            jfVar.a(s);
            jfVar.a(this.f707a);
            jfVar.b();
        }
        if (this.f706a != null && t()) {
            jfVar.a(t);
            jfVar.a(new jd((byte) 11, this.f706a.size()));
            Iterator<String> it = this.f706a.iterator();
            while (it.hasNext()) {
                jfVar.a(it.next());
            }
            jfVar.e();
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public void b(boolean z) {
        this.f705a.set(1, z);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m512b() {
        return this.f703a != null;
    }

    public String c() {
        return this.f716g;
    }

    public void c(boolean z) {
        this.f705a.set(2, z);
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public boolean m513c() {
        return this.f710b != null;
    }

    public void d(boolean z) {
        this.f705a.set(3, z);
    }

    public boolean d() {
        return this.f712c != null;
    }

    public void e(boolean z) {
        this.f705a.set(4, z);
    }

    public boolean e() {
        return this.f705a.get(0);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof ik)) {
            return m511a((ik) obj);
        }
        return false;
    }

    public void f(boolean z) {
        this.f705a.set(5, z);
    }

    public boolean f() {
        return this.f713d != null;
    }

    public boolean g() {
        return this.f714e != null;
    }

    public boolean h() {
        return this.f715f != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f716g != null;
    }

    public boolean j() {
        return this.f705a.get(1);
    }

    public boolean k() {
        return this.f717h != null;
    }

    public boolean l() {
        return this.f718i != null;
    }

    public boolean m() {
        return this.f705a.get(2);
    }

    public boolean n() {
        return this.f719j != null;
    }

    public boolean o() {
        return this.f705a.get(3);
    }

    public boolean p() {
        return this.f720k != null;
    }

    public boolean q() {
        return this.f705a.get(4);
    }

    public boolean r() {
        return this.f721l != null;
    }

    public boolean s() {
        return this.f705a.get(5);
    }

    public boolean t() {
        return this.f706a != null;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionRegistrationResult(");
        boolean z2 = false;
        if (m510a()) {
            sb.append("debug:");
            String str = this.f704a;
            if (str == null) {
                sb.append("null");
            } else {
                sb.append(str);
            }
            z = false;
        } else {
            z = true;
        }
        if (m512b()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("target:");
            hy hyVar = this.f703a;
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
        String str2 = this.f710b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        sb.append(", ");
        sb.append("appId:");
        String str3 = this.f712c;
        if (str3 == null) {
            sb.append("null");
        } else {
            sb.append(str3);
        }
        sb.append(", ");
        sb.append("errorCode:");
        sb.append(this.f702a);
        if (f()) {
            sb.append(", ");
            sb.append("reason:");
            String str4 = this.f713d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("regId:");
            String str5 = this.f714e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("regSecret:");
            String str6 = this.f715f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("packageName:");
            String str7 = this.f716g;
            if (str7 == null) {
                sb.append("null");
            } else {
                sb.append(str7);
            }
        }
        if (j()) {
            sb.append(", ");
            sb.append("registeredAt:");
            sb.append(this.f709b);
        }
        if (k()) {
            sb.append(", ");
            sb.append("aliasName:");
            String str8 = this.f717h;
            if (str8 == null) {
                sb.append("null");
            } else {
                sb.append(str8);
            }
        }
        if (l()) {
            sb.append(", ");
            sb.append("clientId:");
            String str9 = this.f718i;
            if (str9 == null) {
                sb.append("null");
            } else {
                sb.append(str9);
            }
        }
        if (m()) {
            sb.append(", ");
            sb.append("costTime:");
            sb.append(this.f711c);
        }
        if (n()) {
            sb.append(", ");
            sb.append("appVersion:");
            String str10 = this.f719j;
            if (str10 == null) {
                sb.append("null");
            } else {
                sb.append(str10);
            }
        }
        if (o()) {
            sb.append(", ");
            sb.append("pushSdkVersionCode:");
            sb.append(this.f701a);
        }
        if (p()) {
            sb.append(", ");
            sb.append("hybridPushEndpoint:");
            String str11 = this.f720k;
            if (str11 == null) {
                sb.append("null");
            } else {
                sb.append(str11);
            }
        }
        if (q()) {
            sb.append(", ");
            sb.append("appVersionCode:");
            sb.append(this.f708b);
        }
        if (r()) {
            sb.append(", ");
            sb.append("region:");
            String str12 = this.f721l;
            if (str12 == null) {
                sb.append("null");
            } else {
                sb.append(str12);
            }
        }
        if (s()) {
            sb.append(", ");
            sb.append("isHybridFrame:");
            sb.append(this.f707a);
        }
        if (t()) {
            sb.append(", ");
            sb.append("autoMarkPkgs:");
            List<String> list = this.f706a;
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
