package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

/* JADX INFO: loaded from: classes4.dex */
public class iq implements iu<iq, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f780a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hy f781a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f782a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f783a = new BitSet(3);

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public long f784b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f785b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public long f786c;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f787c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f788d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f789e;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f779a = new jk("XmPushActionUnRegistrationResult");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8239a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 10, 6);
    private static final jc f = new jc("", (byte) 11, 7);
    private static final jc g = new jc("", (byte) 11, 8);
    private static final jc h = new jc("", (byte) 10, 9);
    private static final jc i = new jc("", (byte) 10, 10);

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(iq iqVar) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        int iA7;
        int iA8;
        int iA9;
        if (!getClass().equals(iqVar.getClass())) {
            return getClass().getName().compareTo(iqVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m535a()).compareTo(Boolean.valueOf(iqVar.m535a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m535a() && (iA9 = iv.a(this.f782a, iqVar.f782a)) != 0) {
            return iA9;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(iqVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA8 = iv.a(this.f781a, iqVar.f781a)) != 0) {
            return iA8;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(iqVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA7 = iv.a(this.f785b, iqVar.f785b)) != 0) {
            return iA7;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(iqVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA6 = iv.a(this.f787c, iqVar.f787c)) != 0) {
            return iA6;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(iqVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA5 = iv.a(this.f780a, iqVar.f780a)) != 0) {
            return iA5;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(iqVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA4 = iv.a(this.f788d, iqVar.f788d)) != 0) {
            return iA4;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(iqVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA3 = iv.a(this.f789e, iqVar.f789e)) != 0) {
            return iA3;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(iqVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA2 = iv.a(this.f784b, iqVar.f784b)) != 0) {
            return iA2;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(iqVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (!i() || (iA = iv.a(this.f786c, iqVar.f786c)) == 0) {
            return 0;
        }
        return iA;
    }

    public String a() {
        return this.f789e;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m534a() throws jg {
        if (this.f785b == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.f787c != null) {
            return;
        }
        throw new jg("Required field 'appId' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:13:0x003d  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r6) throws com.xiaomi.push.jg {
        /*
            Method dump skipped, instruction units count: 210
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.iq.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z) {
        this.f783a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m535a() {
        return this.f782a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m536a(iq iqVar) {
        if (iqVar == null) {
            return false;
        }
        boolean zM535a = m535a();
        boolean zM535a2 = iqVar.m535a();
        if ((zM535a || zM535a2) && !(zM535a && zM535a2 && this.f782a.equals(iqVar.f782a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = iqVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.f781a.m456a(iqVar.f781a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = iqVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.f785b.equals(iqVar.f785b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = iqVar.d();
        if (((zD || zD2) && !(zD && zD2 && this.f787c.equals(iqVar.f787c))) || this.f780a != iqVar.f780a) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = iqVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.f788d.equals(iqVar.f788d))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = iqVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f789e.equals(iqVar.f789e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = iqVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f784b == iqVar.f784b)) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = iqVar.i();
        if (zI || zI2) {
            return zI && zI2 && this.f786c == iqVar.f786c;
        }
        return true;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m534a();
        jfVar.a(f779a);
        if (this.f782a != null && m535a()) {
            jfVar.a(f8239a);
            jfVar.a(this.f782a);
            jfVar.b();
        }
        if (this.f781a != null && b()) {
            jfVar.a(b);
            this.f781a.b(jfVar);
            jfVar.b();
        }
        if (this.f785b != null) {
            jfVar.a(c);
            jfVar.a(this.f785b);
            jfVar.b();
        }
        if (this.f787c != null) {
            jfVar.a(d);
            jfVar.a(this.f787c);
            jfVar.b();
        }
        jfVar.a(e);
        jfVar.a(this.f780a);
        jfVar.b();
        if (this.f788d != null && f()) {
            jfVar.a(f);
            jfVar.a(this.f788d);
            jfVar.b();
        }
        if (this.f789e != null && g()) {
            jfVar.a(g);
            jfVar.a(this.f789e);
            jfVar.b();
        }
        if (h()) {
            jfVar.a(h);
            jfVar.a(this.f784b);
            jfVar.b();
        }
        if (i()) {
            jfVar.a(i);
            jfVar.a(this.f786c);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public void b(boolean z) {
        this.f783a.set(1, z);
    }

    public boolean b() {
        return this.f781a != null;
    }

    public void c(boolean z) {
        this.f783a.set(2, z);
    }

    public boolean c() {
        return this.f785b != null;
    }

    public boolean d() {
        return this.f787c != null;
    }

    public boolean e() {
        return this.f783a.get(0);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof iq)) {
            return m536a((iq) obj);
        }
        return false;
    }

    public boolean f() {
        return this.f788d != null;
    }

    public boolean g() {
        return this.f789e != null;
    }

    public boolean h() {
        return this.f783a.get(1);
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f783a.get(2);
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionUnRegistrationResult(");
        boolean z2 = false;
        if (m535a()) {
            sb.append("debug:");
            String str = this.f782a;
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
            hy hyVar = this.f781a;
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
        String str2 = this.f785b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        sb.append(", ");
        sb.append("appId:");
        String str3 = this.f787c;
        if (str3 == null) {
            sb.append("null");
        } else {
            sb.append(str3);
        }
        sb.append(", ");
        sb.append("errorCode:");
        sb.append(this.f780a);
        if (f()) {
            sb.append(", ");
            sb.append("reason:");
            String str4 = this.f788d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("packageName:");
            String str5 = this.f789e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("unRegisteredAt:");
            sb.append(this.f784b);
        }
        if (i()) {
            sb.append(", ");
            sb.append("costTime:");
            sb.append(this.f786c);
        }
        sb.append(")");
        return sb.toString();
    }
}
