package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

/* JADX INFO: loaded from: classes4.dex */
public class ip implements iu<ip, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f766a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hy f767a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f768a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f769a = new BitSet(2);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public boolean f770a = true;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f771b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f772c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f773d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f774e;

    /* JADX INFO: renamed from: f, reason: collision with other field name */
    public String f775f;

    /* JADX INFO: renamed from: g, reason: collision with other field name */
    public String f776g;

    /* JADX INFO: renamed from: h, reason: collision with other field name */
    public String f777h;

    /* JADX INFO: renamed from: i, reason: collision with other field name */
    public String f778i;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f765a = new jk("XmPushActionUnRegistration");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8238a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 11, 5);
    private static final jc f = new jc("", (byte) 11, 6);
    private static final jc g = new jc("", (byte) 11, 7);
    private static final jc h = new jc("", (byte) 11, 8);
    private static final jc i = new jc("", (byte) 11, 9);
    private static final jc j = new jc("", (byte) 11, 10);
    private static final jc k = new jc("", (byte) 2, 11);
    private static final jc l = new jc("", (byte) 10, 12);

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(ip ipVar) {
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
        if (!getClass().equals(ipVar.getClass())) {
            return getClass().getName().compareTo(ipVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m532a()).compareTo(Boolean.valueOf(ipVar.m532a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m532a() && (iA12 = iv.a(this.f768a, ipVar.f768a)) != 0) {
            return iA12;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(ipVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA11 = iv.a(this.f767a, ipVar.f767a)) != 0) {
            return iA11;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(ipVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA10 = iv.a(this.f771b, ipVar.f771b)) != 0) {
            return iA10;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(ipVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA9 = iv.a(this.f772c, ipVar.f772c)) != 0) {
            return iA9;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(ipVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA8 = iv.a(this.f773d, ipVar.f773d)) != 0) {
            return iA8;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(ipVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA7 = iv.a(this.f774e, ipVar.f774e)) != 0) {
            return iA7;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(ipVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA6 = iv.a(this.f775f, ipVar.f775f)) != 0) {
            return iA6;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(ipVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA5 = iv.a(this.f776g, ipVar.f776g)) != 0) {
            return iA5;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(ipVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA4 = iv.a(this.f777h, ipVar.f777h)) != 0) {
            return iA4;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(ipVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA3 = iv.a(this.f778i, ipVar.f778i)) != 0) {
            return iA3;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(ipVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (k() && (iA2 = iv.a(this.f770a, ipVar.f770a)) != 0) {
            return iA2;
        }
        int iCompareTo12 = Boolean.valueOf(l()).compareTo(Boolean.valueOf(ipVar.l()));
        if (iCompareTo12 != 0) {
            return iCompareTo12;
        }
        if (!l() || (iA = iv.a(this.f766a, ipVar.f766a)) == 0) {
            return 0;
        }
        return iA;
    }

    public ip a(String str) {
        this.f771b = str;
        return this;
    }

    public void a() throws jg {
        if (this.f771b == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.f772c != null) {
            return;
        }
        throw new jg("Required field 'appId' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:9:0x001a  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r5) throws com.xiaomi.push.jg {
        /*
            Method dump skipped, instruction units count: 216
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.ip.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z) {
        this.f769a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m532a() {
        return this.f768a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m533a(ip ipVar) {
        if (ipVar == null) {
            return false;
        }
        boolean zM532a = m532a();
        boolean zM532a2 = ipVar.m532a();
        if ((zM532a || zM532a2) && !(zM532a && zM532a2 && this.f768a.equals(ipVar.f768a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = ipVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.f767a.m456a(ipVar.f767a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = ipVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.f771b.equals(ipVar.f771b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = ipVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.f772c.equals(ipVar.f772c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = ipVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.f773d.equals(ipVar.f773d))) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = ipVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.f774e.equals(ipVar.f774e))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = ipVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f775f.equals(ipVar.f775f))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = ipVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f776g.equals(ipVar.f776g))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = ipVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.f777h.equals(ipVar.f777h))) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = ipVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.f778i.equals(ipVar.f778i))) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = ipVar.k();
        if ((zK || zK2) && !(zK && zK2 && this.f770a == ipVar.f770a)) {
            return false;
        }
        boolean zL = l();
        boolean zL2 = ipVar.l();
        if (zL || zL2) {
            return zL && zL2 && this.f766a == ipVar.f766a;
        }
        return true;
    }

    public ip b(String str) {
        this.f772c = str;
        return this;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        a();
        jfVar.a(f765a);
        if (this.f768a != null && m532a()) {
            jfVar.a(f8238a);
            jfVar.a(this.f768a);
            jfVar.b();
        }
        if (this.f767a != null && b()) {
            jfVar.a(b);
            this.f767a.b(jfVar);
            jfVar.b();
        }
        if (this.f771b != null) {
            jfVar.a(c);
            jfVar.a(this.f771b);
            jfVar.b();
        }
        if (this.f772c != null) {
            jfVar.a(d);
            jfVar.a(this.f772c);
            jfVar.b();
        }
        if (this.f773d != null && e()) {
            jfVar.a(e);
            jfVar.a(this.f773d);
            jfVar.b();
        }
        if (this.f774e != null && f()) {
            jfVar.a(f);
            jfVar.a(this.f774e);
            jfVar.b();
        }
        if (this.f775f != null && g()) {
            jfVar.a(g);
            jfVar.a(this.f775f);
            jfVar.b();
        }
        if (this.f776g != null && h()) {
            jfVar.a(h);
            jfVar.a(this.f776g);
            jfVar.b();
        }
        if (this.f777h != null && i()) {
            jfVar.a(i);
            jfVar.a(this.f777h);
            jfVar.b();
        }
        if (this.f778i != null && j()) {
            jfVar.a(j);
            jfVar.a(this.f778i);
            jfVar.b();
        }
        if (k()) {
            jfVar.a(k);
            jfVar.a(this.f770a);
            jfVar.b();
        }
        if (l()) {
            jfVar.a(l);
            jfVar.a(this.f766a);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public void b(boolean z) {
        this.f769a.set(1, z);
    }

    public boolean b() {
        return this.f767a != null;
    }

    public ip c(String str) {
        this.f773d = str;
        return this;
    }

    public boolean c() {
        return this.f771b != null;
    }

    public ip d(String str) {
        this.f775f = str;
        return this;
    }

    public boolean d() {
        return this.f772c != null;
    }

    public ip e(String str) {
        this.f776g = str;
        return this;
    }

    public boolean e() {
        return this.f773d != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof ip)) {
            return m533a((ip) obj);
        }
        return false;
    }

    public boolean f() {
        return this.f774e != null;
    }

    public boolean g() {
        return this.f775f != null;
    }

    public boolean h() {
        return this.f776g != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f777h != null;
    }

    public boolean j() {
        return this.f778i != null;
    }

    public boolean k() {
        return this.f769a.get(0);
    }

    public boolean l() {
        return this.f769a.get(1);
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionUnRegistration(");
        boolean z2 = false;
        if (m532a()) {
            sb.append("debug:");
            String str = this.f768a;
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
            hy hyVar = this.f767a;
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
        String str2 = this.f771b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        sb.append(", ");
        sb.append("appId:");
        String str3 = this.f772c;
        if (str3 == null) {
            sb.append("null");
        } else {
            sb.append(str3);
        }
        if (e()) {
            sb.append(", ");
            sb.append("regId:");
            String str4 = this.f773d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (f()) {
            sb.append(", ");
            sb.append("appVersion:");
            String str5 = this.f774e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("packageName:");
            String str6 = this.f775f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("token:");
            String str7 = this.f776g;
            if (str7 == null) {
                sb.append("null");
            } else {
                sb.append(str7);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("deviceId:");
            String str8 = this.f777h;
            if (str8 == null) {
                sb.append("null");
            } else {
                sb.append(str8);
            }
        }
        if (j()) {
            sb.append(", ");
            sb.append("aliasName:");
            String str9 = this.f778i;
            if (str9 == null) {
                sb.append("null");
            } else {
                sb.append(str9);
            }
        }
        if (k()) {
            sb.append(", ");
            sb.append("needAck:");
            sb.append(this.f770a);
        }
        if (l()) {
            sb.append(", ");
            sb.append("createdTs:");
            sb.append(this.f766a);
        }
        sb.append(")");
        return sb.toString();
    }
}
