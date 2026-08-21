package com.xiaomi.push;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.BitSet;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class id implements iu<id, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f615a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hy f616a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f617a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public List<String> f619a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f621b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f623c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f624d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f625e;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f614a = new jk("XmPushActionCommand");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8226a = new jc("", (byte) 12, 2);
    private static final jc b = new jc("", (byte) 11, 3);
    private static final jc c = new jc("", (byte) 11, 4);
    private static final jc d = new jc("", (byte) 11, 5);
    private static final jc e = new jc("", (byte) 15, 6);
    private static final jc f = new jc("", (byte) 11, 7);
    private static final jc g = new jc("", (byte) 11, 9);
    private static final jc h = new jc("", (byte) 2, 10);
    private static final jc i = new jc("", (byte) 2, 11);
    private static final jc j = new jc("", (byte) 10, 12);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f618a = new BitSet(3);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public boolean f620a = false;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public boolean f622b = true;

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(id idVar) {
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
        if (!getClass().equals(idVar.getClass())) {
            return getClass().getName().compareTo(idVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m470a()).compareTo(Boolean.valueOf(idVar.m470a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m470a() && (iA10 = iv.a(this.f616a, idVar.f616a)) != 0) {
            return iA10;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(idVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA9 = iv.a(this.f617a, idVar.f617a)) != 0) {
            return iA9;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(idVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA8 = iv.a(this.f621b, idVar.f621b)) != 0) {
            return iA8;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(idVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA7 = iv.a(this.f623c, idVar.f623c)) != 0) {
            return iA7;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(idVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA6 = iv.a(this.f619a, idVar.f619a)) != 0) {
            return iA6;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(idVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA5 = iv.a(this.f624d, idVar.f624d)) != 0) {
            return iA5;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(idVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA4 = iv.a(this.f625e, idVar.f625e)) != 0) {
            return iA4;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(idVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA3 = iv.a(this.f620a, idVar.f620a)) != 0) {
            return iA3;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(idVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA2 = iv.a(this.f622b, idVar.f622b)) != 0) {
            return iA2;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(idVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (!j() || (iA = iv.a(this.f615a, idVar.f615a)) == 0) {
            return 0;
        }
        return iA;
    }

    public id a(String str) {
        this.f617a = str;
        return this;
    }

    public String a() {
        return this.f623c;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m468a() throws jg {
        if (this.f617a == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.f621b == null) {
            throw new jg("Required field 'appId' was not present! Struct: " + toString());
        }
        if (this.f623c != null) {
            return;
        }
        throw new jg("Required field 'cmdName' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:9:0x001b  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r6) throws com.xiaomi.push.jg {
        /*
            Method dump skipped, instruction units count: 224
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.id.a(com.xiaomi.push.jf):void");
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m469a(String str) {
        if (this.f619a == null) {
            this.f619a = new ArrayList();
        }
        this.f619a.add(str);
    }

    public void a(boolean z) {
        this.f618a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m470a() {
        return this.f616a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m471a(id idVar) {
        if (idVar == null) {
            return false;
        }
        boolean zM470a = m470a();
        boolean zM470a2 = idVar.m470a();
        if ((zM470a || zM470a2) && !(zM470a && zM470a2 && this.f616a.m456a(idVar.f616a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = idVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.f617a.equals(idVar.f617a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = idVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.f621b.equals(idVar.f621b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = idVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.f623c.equals(idVar.f623c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = idVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.f619a.equals(idVar.f619a))) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = idVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.f624d.equals(idVar.f624d))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = idVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f625e.equals(idVar.f625e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = idVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f620a == idVar.f620a)) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = idVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.f622b == idVar.f622b)) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = idVar.j();
        if (zJ || zJ2) {
            return zJ && zJ2 && this.f615a == idVar.f615a;
        }
        return true;
    }

    public id b(String str) {
        this.f621b = str;
        return this;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m468a();
        jfVar.a(f614a);
        if (this.f616a != null && m470a()) {
            jfVar.a(f8226a);
            this.f616a.b(jfVar);
            jfVar.b();
        }
        if (this.f617a != null) {
            jfVar.a(b);
            jfVar.a(this.f617a);
            jfVar.b();
        }
        if (this.f621b != null) {
            jfVar.a(c);
            jfVar.a(this.f621b);
            jfVar.b();
        }
        if (this.f623c != null) {
            jfVar.a(d);
            jfVar.a(this.f623c);
            jfVar.b();
        }
        if (this.f619a != null && e()) {
            jfVar.a(e);
            jfVar.a(new jd((byte) 11, this.f619a.size()));
            Iterator<String> it = this.f619a.iterator();
            while (it.hasNext()) {
                jfVar.a(it.next());
            }
            jfVar.e();
            jfVar.b();
        }
        if (this.f624d != null && f()) {
            jfVar.a(f);
            jfVar.a(this.f624d);
            jfVar.b();
        }
        if (this.f625e != null && g()) {
            jfVar.a(g);
            jfVar.a(this.f625e);
            jfVar.b();
        }
        if (h()) {
            jfVar.a(h);
            jfVar.a(this.f620a);
            jfVar.b();
        }
        if (i()) {
            jfVar.a(i);
            jfVar.a(this.f622b);
            jfVar.b();
        }
        if (j()) {
            jfVar.a(j);
            jfVar.a(this.f615a);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public void b(boolean z) {
        this.f618a.set(1, z);
    }

    public boolean b() {
        return this.f617a != null;
    }

    public id c(String str) {
        this.f623c = str;
        return this;
    }

    public void c(boolean z) {
        this.f618a.set(2, z);
    }

    public boolean c() {
        return this.f621b != null;
    }

    public id d(String str) {
        this.f624d = str;
        return this;
    }

    public boolean d() {
        return this.f623c != null;
    }

    public id e(String str) {
        this.f625e = str;
        return this;
    }

    public boolean e() {
        return this.f619a != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof id)) {
            return m471a((id) obj);
        }
        return false;
    }

    public boolean f() {
        return this.f624d != null;
    }

    public boolean g() {
        return this.f625e != null;
    }

    public boolean h() {
        return this.f618a.get(0);
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f618a.get(1);
    }

    public boolean j() {
        return this.f618a.get(2);
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionCommand(");
        if (m470a()) {
            sb.append("target:");
            hy hyVar = this.f616a;
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
        String str = this.f617a;
        if (str == null) {
            sb.append("null");
        } else {
            sb.append(str);
        }
        sb.append(", ");
        sb.append("appId:");
        String str2 = this.f621b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        sb.append(", ");
        sb.append("cmdName:");
        String str3 = this.f623c;
        if (str3 == null) {
            sb.append("null");
        } else {
            sb.append(str3);
        }
        if (e()) {
            sb.append(", ");
            sb.append("cmdArgs:");
            List<String> list = this.f619a;
            if (list == null) {
                sb.append("null");
            } else {
                sb.append(list);
            }
        }
        if (f()) {
            sb.append(", ");
            sb.append("packageName:");
            String str4 = this.f624d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("category:");
            String str5 = this.f625e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("updateCache:");
            sb.append(this.f620a);
        }
        if (i()) {
            sb.append(", ");
            sb.append("response2Client:");
            sb.append(this.f622b);
        }
        if (j()) {
            sb.append(", ");
            sb.append("createdTs:");
            sb.append(this.f615a);
        }
        sb.append(")");
        return sb.toString();
    }
}
