package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class im implements iu<im, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hv f732a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hy f733a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f734a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public Map<String, String> f736a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f738b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f739c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f740d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f741e;

    /* JADX INFO: renamed from: f, reason: collision with other field name */
    public String f742f;

    /* JADX INFO: renamed from: g, reason: collision with other field name */
    public String f743g;

    /* JADX INFO: renamed from: h, reason: collision with other field name */
    public String f744h;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f731a = new jk("XmPushActionSendMessage");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8235a = new jc("", (byte) 11, 1);
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

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f735a = new BitSet(1);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public boolean f737a = true;

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
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
        int iCompareTo = Boolean.valueOf(m518a()).compareTo(Boolean.valueOf(imVar.m518a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m518a() && (iA12 = iv.a(this.f734a, imVar.f734a)) != 0) {
            return iA12;
        }
        int iCompareTo2 = Boolean.valueOf(m520b()).compareTo(Boolean.valueOf(imVar.m520b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (m520b() && (iA11 = iv.a(this.f733a, imVar.f733a)) != 0) {
            return iA11;
        }
        int iCompareTo3 = Boolean.valueOf(m521c()).compareTo(Boolean.valueOf(imVar.m521c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (m521c() && (iA10 = iv.a(this.f738b, imVar.f738b)) != 0) {
            return iA10;
        }
        int iCompareTo4 = Boolean.valueOf(m522d()).compareTo(Boolean.valueOf(imVar.m522d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (m522d() && (iA9 = iv.a(this.f739c, imVar.f739c)) != 0) {
            return iA9;
        }
        int iCompareTo5 = Boolean.valueOf(m523e()).compareTo(Boolean.valueOf(imVar.m523e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (m523e() && (iA8 = iv.a(this.f740d, imVar.f740d)) != 0) {
            return iA8;
        }
        int iCompareTo6 = Boolean.valueOf(m524f()).compareTo(Boolean.valueOf(imVar.m524f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (m524f() && (iA7 = iv.a(this.f741e, imVar.f741e)) != 0) {
            return iA7;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(imVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA6 = iv.a(this.f742f, imVar.f742f)) != 0) {
            return iA6;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(imVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA5 = iv.a(this.f732a, imVar.f732a)) != 0) {
            return iA5;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(imVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA4 = iv.a(this.f737a, imVar.f737a)) != 0) {
            return iA4;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(imVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA3 = iv.a(this.f736a, imVar.f736a)) != 0) {
            return iA3;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(imVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (k() && (iA2 = iv.a(this.f743g, imVar.f743g)) != 0) {
            return iA2;
        }
        int iCompareTo12 = Boolean.valueOf(l()).compareTo(Boolean.valueOf(imVar.l()));
        if (iCompareTo12 != 0) {
            return iCompareTo12;
        }
        if (!l() || (iA = iv.a(this.f744h, imVar.f744h)) == 0) {
            return 0;
        }
        return iA;
    }

    public hv a() {
        return this.f732a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m516a() {
        return this.f738b;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m517a() throws jg {
        if (this.f738b == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.f739c != null) {
            return;
        }
        throw new jg("Required field 'appId' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:9:0x001c  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r6) throws com.xiaomi.push.jg {
        /*
            Method dump skipped, instruction units count: 248
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.im.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z) {
        this.f735a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m518a() {
        return this.f734a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m519a(im imVar) {
        if (imVar == null) {
            return false;
        }
        boolean zM518a = m518a();
        boolean zM518a2 = imVar.m518a();
        if ((zM518a || zM518a2) && !(zM518a && zM518a2 && this.f734a.equals(imVar.f734a))) {
            return false;
        }
        boolean zM520b = m520b();
        boolean zM520b2 = imVar.m520b();
        if ((zM520b || zM520b2) && !(zM520b && zM520b2 && this.f733a.m456a(imVar.f733a))) {
            return false;
        }
        boolean zM521c = m521c();
        boolean zM521c2 = imVar.m521c();
        if ((zM521c || zM521c2) && !(zM521c && zM521c2 && this.f738b.equals(imVar.f738b))) {
            return false;
        }
        boolean zM522d = m522d();
        boolean zM522d2 = imVar.m522d();
        if ((zM522d || zM522d2) && !(zM522d && zM522d2 && this.f739c.equals(imVar.f739c))) {
            return false;
        }
        boolean zM523e = m523e();
        boolean zM523e2 = imVar.m523e();
        if ((zM523e || zM523e2) && !(zM523e && zM523e2 && this.f740d.equals(imVar.f740d))) {
            return false;
        }
        boolean zM524f = m524f();
        boolean zM524f2 = imVar.m524f();
        if ((zM524f || zM524f2) && !(zM524f && zM524f2 && this.f741e.equals(imVar.f741e))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = imVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f742f.equals(imVar.f742f))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = imVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f732a.m439a(imVar.f732a))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = imVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.f737a == imVar.f737a)) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = imVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.f736a.equals(imVar.f736a))) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = imVar.k();
        if ((zK || zK2) && !(zK && zK2 && this.f743g.equals(imVar.f743g))) {
            return false;
        }
        boolean zL = l();
        boolean zL2 = imVar.l();
        if (zL || zL2) {
            return zL && zL2 && this.f744h.equals(imVar.f744h);
        }
        return true;
    }

    public String b() {
        return this.f739c;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m517a();
        jfVar.a(f731a);
        if (this.f734a != null && m518a()) {
            jfVar.a(f8235a);
            jfVar.a(this.f734a);
            jfVar.b();
        }
        if (this.f733a != null && m520b()) {
            jfVar.a(b);
            this.f733a.b(jfVar);
            jfVar.b();
        }
        if (this.f738b != null) {
            jfVar.a(c);
            jfVar.a(this.f738b);
            jfVar.b();
        }
        if (this.f739c != null) {
            jfVar.a(d);
            jfVar.a(this.f739c);
            jfVar.b();
        }
        if (this.f740d != null && m523e()) {
            jfVar.a(e);
            jfVar.a(this.f740d);
            jfVar.b();
        }
        if (this.f741e != null && m524f()) {
            jfVar.a(f);
            jfVar.a(this.f741e);
            jfVar.b();
        }
        if (this.f742f != null && g()) {
            jfVar.a(g);
            jfVar.a(this.f742f);
            jfVar.b();
        }
        if (this.f732a != null && h()) {
            jfVar.a(h);
            this.f732a.b(jfVar);
            jfVar.b();
        }
        if (i()) {
            jfVar.a(i);
            jfVar.a(this.f737a);
            jfVar.b();
        }
        if (this.f736a != null && j()) {
            jfVar.a(j);
            jfVar.a(new je((byte) 11, (byte) 11, this.f736a.size()));
            for (Map.Entry<String, String> entry : this.f736a.entrySet()) {
                jfVar.a(entry.getKey());
                jfVar.a(entry.getValue());
            }
            jfVar.d();
            jfVar.b();
        }
        if (this.f743g != null && k()) {
            jfVar.a(k);
            jfVar.a(this.f743g);
            jfVar.b();
        }
        if (this.f744h != null && l()) {
            jfVar.a(l);
            jfVar.a(this.f744h);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m520b() {
        return this.f733a != null;
    }

    public String c() {
        return this.f741e;
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public boolean m521c() {
        return this.f738b != null;
    }

    public String d() {
        return this.f742f;
    }

    /* JADX INFO: renamed from: d, reason: collision with other method in class */
    public boolean m522d() {
        return this.f739c != null;
    }

    public String e() {
        return this.f743g;
    }

    /* JADX INFO: renamed from: e, reason: collision with other method in class */
    public boolean m523e() {
        return this.f740d != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof im)) {
            return m519a((im) obj);
        }
        return false;
    }

    public String f() {
        return this.f744h;
    }

    /* JADX INFO: renamed from: f, reason: collision with other method in class */
    public boolean m524f() {
        return this.f741e != null;
    }

    public boolean g() {
        return this.f742f != null;
    }

    public boolean h() {
        return this.f732a != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f735a.get(0);
    }

    public boolean j() {
        return this.f736a != null;
    }

    public boolean k() {
        return this.f743g != null;
    }

    public boolean l() {
        return this.f744h != null;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionSendMessage(");
        boolean z2 = false;
        if (m518a()) {
            sb.append("debug:");
            String str = this.f734a;
            if (str == null) {
                sb.append("null");
            } else {
                sb.append(str);
            }
            z = false;
        } else {
            z = true;
        }
        if (m520b()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("target:");
            hy hyVar = this.f733a;
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
        String str2 = this.f738b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        sb.append(", ");
        sb.append("appId:");
        String str3 = this.f739c;
        if (str3 == null) {
            sb.append("null");
        } else {
            sb.append(str3);
        }
        if (m523e()) {
            sb.append(", ");
            sb.append("packageName:");
            String str4 = this.f740d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (m524f()) {
            sb.append(", ");
            sb.append("topic:");
            String str5 = this.f741e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("aliasName:");
            String str6 = this.f742f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("message:");
            hv hvVar = this.f732a;
            if (hvVar == null) {
                sb.append("null");
            } else {
                sb.append(hvVar);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("needAck:");
            sb.append(this.f737a);
        }
        if (j()) {
            sb.append(", ");
            sb.append("params:");
            Map<String, String> map = this.f736a;
            if (map == null) {
                sb.append("null");
            } else {
                sb.append(map);
            }
        }
        if (k()) {
            sb.append(", ");
            sb.append("category:");
            String str7 = this.f743g;
            if (str7 == null) {
                sb.append("null");
            } else {
                sb.append(str7);
            }
        }
        if (l()) {
            sb.append(", ");
            sb.append("userAccount:");
            String str8 = this.f744h;
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
