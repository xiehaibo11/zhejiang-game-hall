package com.xiaomi.push;

import java.io.Serializable;
import java.nio.ByteBuffer;
import java.util.BitSet;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class ii implements iu<ii, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f653a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hy f654a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f655a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public ByteBuffer f656a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f657a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public Map<String, String> f658a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public boolean f659a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f660b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public boolean f661b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f662c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f663d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f664e;

    /* JADX INFO: renamed from: f, reason: collision with other field name */
    public String f665f;

    /* JADX INFO: renamed from: g, reason: collision with other field name */
    public String f666g;

    /* JADX INFO: renamed from: h, reason: collision with other field name */
    public String f667h;

    /* JADX INFO: renamed from: i, reason: collision with other field name */
    public String f668i;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f652a = new jk("XmPushActionNotification");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8231a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 11, 5);
    private static final jc f = new jc("", (byte) 2, 6);
    private static final jc g = new jc("", (byte) 11, 7);
    private static final jc h = new jc("", (byte) 13, 8);
    private static final jc i = new jc("", (byte) 11, 9);
    private static final jc j = new jc("", (byte) 11, 10);
    private static final jc k = new jc("", (byte) 11, 12);
    private static final jc l = new jc("", (byte) 11, 13);
    private static final jc m = new jc("", (byte) 11, 14);
    private static final jc n = new jc("", (byte) 10, 15);
    private static final jc o = new jc("", (byte) 2, 20);

    public ii() {
        this.f657a = new BitSet(3);
        this.f659a = true;
        this.f661b = false;
    }

    public ii(String str, boolean z) {
        this();
        this.f660b = str;
        this.f659a = z;
        m496a(true);
    }

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(ii iiVar) {
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
        if (!getClass().equals(iiVar.getClass())) {
            return getClass().getName().compareTo(iiVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m497a()).compareTo(Boolean.valueOf(iiVar.m497a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m497a() && (iA15 = iv.a(this.f655a, iiVar.f655a)) != 0) {
            return iA15;
        }
        int iCompareTo2 = Boolean.valueOf(m500b()).compareTo(Boolean.valueOf(iiVar.m500b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (m500b() && (iA14 = iv.a(this.f654a, iiVar.f654a)) != 0) {
            return iA14;
        }
        int iCompareTo3 = Boolean.valueOf(m501c()).compareTo(Boolean.valueOf(iiVar.m501c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (m501c() && (iA13 = iv.a(this.f660b, iiVar.f660b)) != 0) {
            return iA13;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(iiVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA12 = iv.a(this.f662c, iiVar.f662c)) != 0) {
            return iA12;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(iiVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA11 = iv.a(this.f663d, iiVar.f663d)) != 0) {
            return iA11;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(iiVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA10 = iv.a(this.f659a, iiVar.f659a)) != 0) {
            return iA10;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(iiVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA9 = iv.a(this.f664e, iiVar.f664e)) != 0) {
            return iA9;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(iiVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA8 = iv.a(this.f658a, iiVar.f658a)) != 0) {
            return iA8;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(iiVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA7 = iv.a(this.f665f, iiVar.f665f)) != 0) {
            return iA7;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(iiVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA6 = iv.a(this.f666g, iiVar.f666g)) != 0) {
            return iA6;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(iiVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (k() && (iA5 = iv.a(this.f667h, iiVar.f667h)) != 0) {
            return iA5;
        }
        int iCompareTo12 = Boolean.valueOf(l()).compareTo(Boolean.valueOf(iiVar.l()));
        if (iCompareTo12 != 0) {
            return iCompareTo12;
        }
        if (l() && (iA4 = iv.a(this.f668i, iiVar.f668i)) != 0) {
            return iA4;
        }
        int iCompareTo13 = Boolean.valueOf(m()).compareTo(Boolean.valueOf(iiVar.m()));
        if (iCompareTo13 != 0) {
            return iCompareTo13;
        }
        if (m() && (iA3 = iv.a(this.f656a, iiVar.f656a)) != 0) {
            return iA3;
        }
        int iCompareTo14 = Boolean.valueOf(n()).compareTo(Boolean.valueOf(iiVar.n()));
        if (iCompareTo14 != 0) {
            return iCompareTo14;
        }
        if (n() && (iA2 = iv.a(this.f653a, iiVar.f653a)) != 0) {
            return iA2;
        }
        int iCompareTo15 = Boolean.valueOf(o()).compareTo(Boolean.valueOf(iiVar.o()));
        if (iCompareTo15 != 0) {
            return iCompareTo15;
        }
        if (!o() || (iA = iv.a(this.f661b, iiVar.f661b)) == 0) {
            return 0;
        }
        return iA;
    }

    public hy a() {
        return this.f654a;
    }

    public ii a(String str) {
        this.f660b = str;
        return this;
    }

    public ii a(ByteBuffer byteBuffer) {
        this.f656a = byteBuffer;
        return this;
    }

    public ii a(Map<String, String> map) {
        this.f658a = map;
        return this;
    }

    public ii a(boolean z) {
        this.f659a = z;
        m496a(true);
        return this;
    }

    public ii a(byte[] bArr) {
        a(ByteBuffer.wrap(bArr));
        return this;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m493a() {
        return this.f660b;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public Map<String, String> m494a() {
        return this.f658a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m495a() throws jg {
        if (this.f660b != null) {
            return;
        }
        throw new jg("Required field 'id' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:13:0x003c  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r6) throws com.xiaomi.push.jg {
        /*
            Method dump skipped, instruction units count: 338
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.ii.a(com.xiaomi.push.jf):void");
    }

    public void a(String str, String str2) {
        if (this.f658a == null) {
            this.f658a = new HashMap();
        }
        this.f658a.put(str, str2);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m496a(boolean z) {
        this.f657a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m497a() {
        return this.f655a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m498a(ii iiVar) {
        if (iiVar == null) {
            return false;
        }
        boolean zM497a = m497a();
        boolean zM497a2 = iiVar.m497a();
        if ((zM497a || zM497a2) && !(zM497a && zM497a2 && this.f655a.equals(iiVar.f655a))) {
            return false;
        }
        boolean zM500b = m500b();
        boolean zM500b2 = iiVar.m500b();
        if ((zM500b || zM500b2) && !(zM500b && zM500b2 && this.f654a.m456a(iiVar.f654a))) {
            return false;
        }
        boolean zM501c = m501c();
        boolean zM501c2 = iiVar.m501c();
        if ((zM501c || zM501c2) && !(zM501c && zM501c2 && this.f660b.equals(iiVar.f660b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = iiVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.f662c.equals(iiVar.f662c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = iiVar.e();
        if (((zE || zE2) && !(zE && zE2 && this.f663d.equals(iiVar.f663d))) || this.f659a != iiVar.f659a) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = iiVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f664e.equals(iiVar.f664e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = iiVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f658a.equals(iiVar.f658a))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = iiVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.f665f.equals(iiVar.f665f))) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = iiVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.f666g.equals(iiVar.f666g))) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = iiVar.k();
        if ((zK || zK2) && !(zK && zK2 && this.f667h.equals(iiVar.f667h))) {
            return false;
        }
        boolean zL = l();
        boolean zL2 = iiVar.l();
        if ((zL || zL2) && !(zL && zL2 && this.f668i.equals(iiVar.f668i))) {
            return false;
        }
        boolean zM = m();
        boolean zM2 = iiVar.m();
        if ((zM || zM2) && !(zM && zM2 && this.f656a.equals(iiVar.f656a))) {
            return false;
        }
        boolean zN = n();
        boolean zN2 = iiVar.n();
        if ((zN || zN2) && !(zN && zN2 && this.f653a == iiVar.f653a)) {
            return false;
        }
        boolean zO = o();
        boolean zO2 = iiVar.o();
        if (zO || zO2) {
            return zO && zO2 && this.f661b == iiVar.f661b;
        }
        return true;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public byte[] m499a() {
        a(iv.a(this.f656a));
        return this.f656a.array();
    }

    public ii b(String str) {
        this.f662c = str;
        return this;
    }

    public String b() {
        return this.f662c;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m495a();
        jfVar.a(f652a);
        if (this.f655a != null && m497a()) {
            jfVar.a(f8231a);
            jfVar.a(this.f655a);
            jfVar.b();
        }
        if (this.f654a != null && m500b()) {
            jfVar.a(b);
            this.f654a.b(jfVar);
            jfVar.b();
        }
        if (this.f660b != null) {
            jfVar.a(c);
            jfVar.a(this.f660b);
            jfVar.b();
        }
        if (this.f662c != null && d()) {
            jfVar.a(d);
            jfVar.a(this.f662c);
            jfVar.b();
        }
        if (this.f663d != null && e()) {
            jfVar.a(e);
            jfVar.a(this.f663d);
            jfVar.b();
        }
        jfVar.a(f);
        jfVar.a(this.f659a);
        jfVar.b();
        if (this.f664e != null && g()) {
            jfVar.a(g);
            jfVar.a(this.f664e);
            jfVar.b();
        }
        if (this.f658a != null && h()) {
            jfVar.a(h);
            jfVar.a(new je((byte) 11, (byte) 11, this.f658a.size()));
            for (Map.Entry<String, String> entry : this.f658a.entrySet()) {
                jfVar.a(entry.getKey());
                jfVar.a(entry.getValue());
            }
            jfVar.d();
            jfVar.b();
        }
        if (this.f665f != null && i()) {
            jfVar.a(i);
            jfVar.a(this.f665f);
            jfVar.b();
        }
        if (this.f666g != null && j()) {
            jfVar.a(j);
            jfVar.a(this.f666g);
            jfVar.b();
        }
        if (this.f667h != null && k()) {
            jfVar.a(k);
            jfVar.a(this.f667h);
            jfVar.b();
        }
        if (this.f668i != null && l()) {
            jfVar.a(l);
            jfVar.a(this.f668i);
            jfVar.b();
        }
        if (this.f656a != null && m()) {
            jfVar.a(m);
            jfVar.a(this.f656a);
            jfVar.b();
        }
        if (n()) {
            jfVar.a(n);
            jfVar.a(this.f653a);
            jfVar.b();
        }
        if (o()) {
            jfVar.a(o);
            jfVar.a(this.f661b);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public void b(boolean z) {
        this.f657a.set(1, z);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m500b() {
        return this.f654a != null;
    }

    public ii c(String str) {
        this.f663d = str;
        return this;
    }

    public String c() {
        return this.f665f;
    }

    public void c(boolean z) {
        this.f657a.set(2, z);
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public boolean m501c() {
        return this.f660b != null;
    }

    public ii d(String str) {
        this.f665f = str;
        return this;
    }

    public boolean d() {
        return this.f662c != null;
    }

    public boolean e() {
        return this.f663d != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof ii)) {
            return m498a((ii) obj);
        }
        return false;
    }

    public boolean f() {
        return this.f657a.get(0);
    }

    public boolean g() {
        return this.f664e != null;
    }

    public boolean h() {
        return this.f658a != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f665f != null;
    }

    public boolean j() {
        return this.f666g != null;
    }

    public boolean k() {
        return this.f667h != null;
    }

    public boolean l() {
        return this.f668i != null;
    }

    public boolean m() {
        return this.f656a != null;
    }

    public boolean n() {
        return this.f657a.get(1);
    }

    public boolean o() {
        return this.f657a.get(2);
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionNotification(");
        boolean z2 = false;
        if (m497a()) {
            sb.append("debug:");
            String str = this.f655a;
            if (str == null) {
                sb.append("null");
            } else {
                sb.append(str);
            }
            z = false;
        } else {
            z = true;
        }
        if (m500b()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("target:");
            hy hyVar = this.f654a;
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
        String str2 = this.f660b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        if (d()) {
            sb.append(", ");
            sb.append("appId:");
            String str3 = this.f662c;
            if (str3 == null) {
                sb.append("null");
            } else {
                sb.append(str3);
            }
        }
        if (e()) {
            sb.append(", ");
            sb.append("type:");
            String str4 = this.f663d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        sb.append(", ");
        sb.append("requireAck:");
        sb.append(this.f659a);
        if (g()) {
            sb.append(", ");
            sb.append("payload:");
            String str5 = this.f664e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("extra:");
            Map<String, String> map = this.f658a;
            if (map == null) {
                sb.append("null");
            } else {
                sb.append(map);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("packageName:");
            String str6 = this.f665f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (j()) {
            sb.append(", ");
            sb.append("category:");
            String str7 = this.f666g;
            if (str7 == null) {
                sb.append("null");
            } else {
                sb.append(str7);
            }
        }
        if (k()) {
            sb.append(", ");
            sb.append("regId:");
            String str8 = this.f667h;
            if (str8 == null) {
                sb.append("null");
            } else {
                sb.append(str8);
            }
        }
        if (l()) {
            sb.append(", ");
            sb.append("aliasName:");
            String str9 = this.f668i;
            if (str9 == null) {
                sb.append("null");
            } else {
                sb.append(str9);
            }
        }
        if (m()) {
            sb.append(", ");
            sb.append("binaryExtra:");
            ByteBuffer byteBuffer = this.f656a;
            if (byteBuffer == null) {
                sb.append("null");
            } else {
                iv.a(byteBuffer, sb);
            }
        }
        if (n()) {
            sb.append(", ");
            sb.append("createdTs:");
            sb.append(this.f653a);
        }
        if (o()) {
            sb.append(", ");
            sb.append("alreadyLogClickInXmq:");
            sb.append(this.f661b);
        }
        sb.append(")");
        return sb.toString();
    }
}
