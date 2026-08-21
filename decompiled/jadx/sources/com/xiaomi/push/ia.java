package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class ia implements iu<ia, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hy f598a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f599a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public Map<String, String> f601a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f602b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f603c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f604d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f605e;

    /* JADX INFO: renamed from: f, reason: collision with other field name */
    public String f606f;

    /* JADX INFO: renamed from: g, reason: collision with other field name */
    public String f607g;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f596a = new jk("XmPushActionAckNotification");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8223a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 11, 5);
    private static final jc f = new jc("", (byte) 10, 7);
    private static final jc g = new jc("", (byte) 11, 8);
    private static final jc h = new jc("", (byte) 13, 9);
    private static final jc i = new jc("", (byte) 11, 10);
    private static final jc j = new jc("", (byte) 11, 11);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f600a = new BitSet(1);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f597a = 0;

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(ia iaVar) {
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
        if (!getClass().equals(iaVar.getClass())) {
            return getClass().getName().compareTo(iaVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m461a()).compareTo(Boolean.valueOf(iaVar.m461a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m461a() && (iA10 = iv.a(this.f599a, iaVar.f599a)) != 0) {
            return iA10;
        }
        int iCompareTo2 = Boolean.valueOf(m463b()).compareTo(Boolean.valueOf(iaVar.m463b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (m463b() && (iA9 = iv.a(this.f598a, iaVar.f598a)) != 0) {
            return iA9;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(iaVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA8 = iv.a(this.f602b, iaVar.f602b)) != 0) {
            return iA8;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(iaVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA7 = iv.a(this.f603c, iaVar.f603c)) != 0) {
            return iA7;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(iaVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA6 = iv.a(this.f604d, iaVar.f604d)) != 0) {
            return iA6;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(iaVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA5 = iv.a(this.f597a, iaVar.f597a)) != 0) {
            return iA5;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(iaVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA4 = iv.a(this.f605e, iaVar.f605e)) != 0) {
            return iA4;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(iaVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA3 = iv.a(this.f601a, iaVar.f601a)) != 0) {
            return iA3;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(iaVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA2 = iv.a(this.f606f, iaVar.f606f)) != 0) {
            return iA2;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(iaVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (!j() || (iA = iv.a(this.f607g, iaVar.f607g)) == 0) {
            return 0;
        }
        return iA;
    }

    public ia a(long j2) {
        this.f597a = j2;
        a(true);
        return this;
    }

    public ia a(hy hyVar) {
        this.f598a = hyVar;
        return this;
    }

    public ia a(String str) {
        this.f602b = str;
        return this;
    }

    public String a() {
        return this.f602b;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public Map<String, String> m459a() {
        return this.f601a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m460a() throws jg {
        if (this.f602b != null) {
            return;
        }
        throw new jg("Required field 'id' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0019  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r6) throws com.xiaomi.push.jg {
        /*
            Method dump skipped, instruction units count: 222
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.ia.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z) {
        this.f600a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m461a() {
        return this.f599a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m462a(ia iaVar) {
        if (iaVar == null) {
            return false;
        }
        boolean zM461a = m461a();
        boolean zM461a2 = iaVar.m461a();
        if ((zM461a || zM461a2) && !(zM461a && zM461a2 && this.f599a.equals(iaVar.f599a))) {
            return false;
        }
        boolean zM463b = m463b();
        boolean zM463b2 = iaVar.m463b();
        if ((zM463b || zM463b2) && !(zM463b && zM463b2 && this.f598a.m456a(iaVar.f598a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = iaVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.f602b.equals(iaVar.f602b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = iaVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.f603c.equals(iaVar.f603c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = iaVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.f604d.equals(iaVar.f604d))) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = iaVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.f597a == iaVar.f597a)) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = iaVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f605e.equals(iaVar.f605e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = iaVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f601a.equals(iaVar.f601a))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = iaVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.f606f.equals(iaVar.f606f))) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = iaVar.j();
        if (zJ || zJ2) {
            return zJ && zJ2 && this.f607g.equals(iaVar.f607g);
        }
        return true;
    }

    public ia b(String str) {
        this.f603c = str;
        return this;
    }

    public String b() {
        return this.f604d;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m460a();
        jfVar.a(f596a);
        if (this.f599a != null && m461a()) {
            jfVar.a(f8223a);
            jfVar.a(this.f599a);
            jfVar.b();
        }
        if (this.f598a != null && m463b()) {
            jfVar.a(b);
            this.f598a.b(jfVar);
            jfVar.b();
        }
        if (this.f602b != null) {
            jfVar.a(c);
            jfVar.a(this.f602b);
            jfVar.b();
        }
        if (this.f603c != null && d()) {
            jfVar.a(d);
            jfVar.a(this.f603c);
            jfVar.b();
        }
        if (this.f604d != null && e()) {
            jfVar.a(e);
            jfVar.a(this.f604d);
            jfVar.b();
        }
        if (f()) {
            jfVar.a(f);
            jfVar.a(this.f597a);
            jfVar.b();
        }
        if (this.f605e != null && g()) {
            jfVar.a(g);
            jfVar.a(this.f605e);
            jfVar.b();
        }
        if (this.f601a != null && h()) {
            jfVar.a(h);
            jfVar.a(new je((byte) 11, (byte) 11, this.f601a.size()));
            for (Map.Entry<String, String> entry : this.f601a.entrySet()) {
                jfVar.a(entry.getKey());
                jfVar.a(entry.getValue());
            }
            jfVar.d();
            jfVar.b();
        }
        if (this.f606f != null && i()) {
            jfVar.a(i);
            jfVar.a(this.f606f);
            jfVar.b();
        }
        if (this.f607g != null && j()) {
            jfVar.a(j);
            jfVar.a(this.f607g);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m463b() {
        return this.f598a != null;
    }

    public ia c(String str) {
        this.f604d = str;
        return this;
    }

    public boolean c() {
        return this.f602b != null;
    }

    public ia d(String str) {
        this.f605e = str;
        return this;
    }

    public boolean d() {
        return this.f603c != null;
    }

    public ia e(String str) {
        this.f606f = str;
        return this;
    }

    public boolean e() {
        return this.f604d != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof ia)) {
            return m462a((ia) obj);
        }
        return false;
    }

    public boolean f() {
        return this.f600a.get(0);
    }

    public boolean g() {
        return this.f605e != null;
    }

    public boolean h() {
        return this.f601a != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f606f != null;
    }

    public boolean j() {
        return this.f607g != null;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionAckNotification(");
        boolean z2 = false;
        if (m461a()) {
            sb.append("debug:");
            String str = this.f599a;
            if (str == null) {
                sb.append("null");
            } else {
                sb.append(str);
            }
            z = false;
        } else {
            z = true;
        }
        if (m463b()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("target:");
            hy hyVar = this.f598a;
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
        String str2 = this.f602b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        if (d()) {
            sb.append(", ");
            sb.append("appId:");
            String str3 = this.f603c;
            if (str3 == null) {
                sb.append("null");
            } else {
                sb.append(str3);
            }
        }
        if (e()) {
            sb.append(", ");
            sb.append("type:");
            String str4 = this.f604d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (f()) {
            sb.append(", ");
            sb.append("errorCode:");
            sb.append(this.f597a);
        }
        if (g()) {
            sb.append(", ");
            sb.append("reason:");
            String str5 = this.f605e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("extra:");
            Map<String, String> map = this.f601a;
            if (map == null) {
                sb.append("null");
            } else {
                sb.append(map);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("packageName:");
            String str6 = this.f606f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (j()) {
            sb.append(", ");
            sb.append("category:");
            String str7 = this.f607g;
            if (str7 == null) {
                sb.append("null");
            } else {
                sb.append(str7);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}
