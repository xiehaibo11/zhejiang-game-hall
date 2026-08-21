package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class ie implements iu<ie, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f627a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hy f628a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f629a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public List<String> f631a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f633b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f634c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f635d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f636e;

    /* JADX INFO: renamed from: f, reason: collision with other field name */
    public String f637f;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f626a = new jk("XmPushActionCommandResult");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8227a = new jc("", (byte) 12, 2);
    private static final jc b = new jc("", (byte) 11, 3);
    private static final jc c = new jc("", (byte) 11, 4);
    private static final jc d = new jc("", (byte) 11, 5);
    private static final jc e = new jc("", (byte) 10, 7);
    private static final jc f = new jc("", (byte) 11, 8);
    private static final jc g = new jc("", (byte) 11, 9);
    private static final jc h = new jc("", (byte) 15, 10);
    private static final jc i = new jc("", (byte) 11, 12);
    private static final jc j = new jc("", (byte) 2, 13);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f630a = new BitSet(2);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public boolean f632a = true;

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(ie ieVar) {
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
        if (!getClass().equals(ieVar.getClass())) {
            return getClass().getName().compareTo(ieVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m474a()).compareTo(Boolean.valueOf(ieVar.m474a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m474a() && (iA10 = iv.a(this.f628a, ieVar.f628a)) != 0) {
            return iA10;
        }
        int iCompareTo2 = Boolean.valueOf(m476b()).compareTo(Boolean.valueOf(ieVar.m476b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (m476b() && (iA9 = iv.a(this.f629a, ieVar.f629a)) != 0) {
            return iA9;
        }
        int iCompareTo3 = Boolean.valueOf(m477c()).compareTo(Boolean.valueOf(ieVar.m477c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (m477c() && (iA8 = iv.a(this.f633b, ieVar.f633b)) != 0) {
            return iA8;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(ieVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA7 = iv.a(this.f634c, ieVar.f634c)) != 0) {
            return iA7;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(ieVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA6 = iv.a(this.f627a, ieVar.f627a)) != 0) {
            return iA6;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(ieVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA5 = iv.a(this.f635d, ieVar.f635d)) != 0) {
            return iA5;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(ieVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA4 = iv.a(this.f636e, ieVar.f636e)) != 0) {
            return iA4;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(ieVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA3 = iv.a(this.f631a, ieVar.f631a)) != 0) {
            return iA3;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(ieVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA2 = iv.a(this.f637f, ieVar.f637f)) != 0) {
            return iA2;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(ieVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (!j() || (iA = iv.a(this.f632a, ieVar.f632a)) == 0) {
            return 0;
        }
        return iA;
    }

    public String a() {
        return this.f629a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public List<String> m472a() {
        return this.f631a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m473a() throws jg {
        if (this.f629a == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.f633b == null) {
            throw new jg("Required field 'appId' was not present! Struct: " + toString());
        }
        if (this.f634c != null) {
            return;
        }
        throw new jg("Required field 'cmdName' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:13:0x003b  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r5) throws com.xiaomi.push.jg {
        /*
            Method dump skipped, instruction units count: 254
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.ie.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z) {
        this.f630a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m474a() {
        return this.f628a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m475a(ie ieVar) {
        if (ieVar == null) {
            return false;
        }
        boolean zM474a = m474a();
        boolean zM474a2 = ieVar.m474a();
        if ((zM474a || zM474a2) && !(zM474a && zM474a2 && this.f628a.m456a(ieVar.f628a))) {
            return false;
        }
        boolean zM476b = m476b();
        boolean zM476b2 = ieVar.m476b();
        if ((zM476b || zM476b2) && !(zM476b && zM476b2 && this.f629a.equals(ieVar.f629a))) {
            return false;
        }
        boolean zM477c = m477c();
        boolean zM477c2 = ieVar.m477c();
        if ((zM477c || zM477c2) && !(zM477c && zM477c2 && this.f633b.equals(ieVar.f633b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = ieVar.d();
        if (((zD || zD2) && !(zD && zD2 && this.f634c.equals(ieVar.f634c))) || this.f627a != ieVar.f627a) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = ieVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.f635d.equals(ieVar.f635d))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = ieVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f636e.equals(ieVar.f636e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = ieVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f631a.equals(ieVar.f631a))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = ieVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.f637f.equals(ieVar.f637f))) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = ieVar.j();
        if (zJ || zJ2) {
            return zJ && zJ2 && this.f632a == ieVar.f632a;
        }
        return true;
    }

    public String b() {
        return this.f634c;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m473a();
        jfVar.a(f626a);
        if (this.f628a != null && m474a()) {
            jfVar.a(f8227a);
            this.f628a.b(jfVar);
            jfVar.b();
        }
        if (this.f629a != null) {
            jfVar.a(b);
            jfVar.a(this.f629a);
            jfVar.b();
        }
        if (this.f633b != null) {
            jfVar.a(c);
            jfVar.a(this.f633b);
            jfVar.b();
        }
        if (this.f634c != null) {
            jfVar.a(d);
            jfVar.a(this.f634c);
            jfVar.b();
        }
        jfVar.a(e);
        jfVar.a(this.f627a);
        jfVar.b();
        if (this.f635d != null && f()) {
            jfVar.a(f);
            jfVar.a(this.f635d);
            jfVar.b();
        }
        if (this.f636e != null && g()) {
            jfVar.a(g);
            jfVar.a(this.f636e);
            jfVar.b();
        }
        if (this.f631a != null && h()) {
            jfVar.a(h);
            jfVar.a(new jd((byte) 11, this.f631a.size()));
            Iterator<String> it = this.f631a.iterator();
            while (it.hasNext()) {
                jfVar.a(it.next());
            }
            jfVar.e();
            jfVar.b();
        }
        if (this.f637f != null && i()) {
            jfVar.a(i);
            jfVar.a(this.f637f);
            jfVar.b();
        }
        if (j()) {
            jfVar.a(j);
            jfVar.a(this.f632a);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public void b(boolean z) {
        this.f630a.set(1, z);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m476b() {
        return this.f629a != null;
    }

    public String c() {
        return this.f637f;
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public boolean m477c() {
        return this.f633b != null;
    }

    public boolean d() {
        return this.f634c != null;
    }

    public boolean e() {
        return this.f630a.get(0);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof ie)) {
            return m475a((ie) obj);
        }
        return false;
    }

    public boolean f() {
        return this.f635d != null;
    }

    public boolean g() {
        return this.f636e != null;
    }

    public boolean h() {
        return this.f631a != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f637f != null;
    }

    public boolean j() {
        return this.f630a.get(1);
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionCommandResult(");
        if (m474a()) {
            sb.append("target:");
            hy hyVar = this.f628a;
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
        String str = this.f629a;
        if (str == null) {
            sb.append("null");
        } else {
            sb.append(str);
        }
        sb.append(", ");
        sb.append("appId:");
        String str2 = this.f633b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        sb.append(", ");
        sb.append("cmdName:");
        String str3 = this.f634c;
        if (str3 == null) {
            sb.append("null");
        } else {
            sb.append(str3);
        }
        sb.append(", ");
        sb.append("errorCode:");
        sb.append(this.f627a);
        if (f()) {
            sb.append(", ");
            sb.append("reason:");
            String str4 = this.f635d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("packageName:");
            String str5 = this.f636e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("cmdArgs:");
            List<String> list = this.f631a;
            if (list == null) {
                sb.append("null");
            } else {
                sb.append(list);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("category:");
            String str6 = this.f637f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (j()) {
            sb.append(", ");
            sb.append("response2Client:");
            sb.append(this.f632a);
        }
        sb.append(")");
        return sb.toString();
    }
}
