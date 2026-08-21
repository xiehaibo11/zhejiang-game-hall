package com.xiaomi.push;

import java.io.Serializable;
import java.nio.ByteBuffer;
import java.util.BitSet;

/* JADX INFO: renamed from: com.xiaomi.push.if, reason: invalid class name */
/* JADX INFO: loaded from: classes4.dex */
public class Cif implements iu<Cif, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hj f639a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hw f640a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hy f641a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f642a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public ByteBuffer f643a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f646b;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f638a = new jk("XmPushActionContainer");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8228a = new jc("", (byte) 8, 1);
    private static final jc b = new jc("", (byte) 2, 2);
    private static final jc c = new jc("", (byte) 2, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 11, 5);
    private static final jc f = new jc("", (byte) 11, 6);
    private static final jc g = new jc("", (byte) 12, 7);
    private static final jc h = new jc("", (byte) 12, 8);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f644a = new BitSet(2);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public boolean f645a = true;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public boolean f647b = true;

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(Cif cif) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        int iA7;
        int iA8;
        if (!getClass().equals(cif.getClass())) {
            return getClass().getName().compareTo(cif.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m482a()).compareTo(Boolean.valueOf(cif.m482a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m482a() && (iA8 = iv.a(this.f639a, cif.f639a)) != 0) {
            return iA8;
        }
        int iCompareTo2 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(cif.c()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (c() && (iA7 = iv.a(this.f645a, cif.f645a)) != 0) {
            return iA7;
        }
        int iCompareTo3 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(cif.d()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (d() && (iA6 = iv.a(this.f647b, cif.f647b)) != 0) {
            return iA6;
        }
        int iCompareTo4 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(cif.e()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (e() && (iA5 = iv.a(this.f643a, cif.f643a)) != 0) {
            return iA5;
        }
        int iCompareTo5 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(cif.f()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (f() && (iA4 = iv.a(this.f642a, cif.f642a)) != 0) {
            return iA4;
        }
        int iCompareTo6 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(cif.g()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (g() && (iA3 = iv.a(this.f646b, cif.f646b)) != 0) {
            return iA3;
        }
        int iCompareTo7 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(cif.h()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (h() && (iA2 = iv.a(this.f641a, cif.f641a)) != 0) {
            return iA2;
        }
        int iCompareTo8 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(cif.i()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (!i() || (iA = iv.a(this.f640a, cif.f640a)) == 0) {
            return 0;
        }
        return iA;
    }

    public hj a() {
        return this.f639a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public hw m478a() {
        return this.f640a;
    }

    public Cif a(hj hjVar) {
        this.f639a = hjVar;
        return this;
    }

    public Cif a(hw hwVar) {
        this.f640a = hwVar;
        return this;
    }

    public Cif a(hy hyVar) {
        this.f641a = hyVar;
        return this;
    }

    public Cif a(String str) {
        this.f642a = str;
        return this;
    }

    public Cif a(ByteBuffer byteBuffer) {
        this.f643a = byteBuffer;
        return this;
    }

    public Cif a(boolean z) {
        this.f645a = z;
        m481a(true);
        return this;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m479a() {
        return this.f642a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m480a() throws jg {
        if (this.f639a == null) {
            throw new jg("Required field 'action' was not present! Struct: " + toString());
        }
        if (this.f643a == null) {
            throw new jg("Required field 'pushAction' was not present! Struct: " + toString());
        }
        if (this.f641a != null) {
            return;
        }
        throw new jg("Required field 'target' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:17:0x005f  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r7) throws com.xiaomi.push.jg {
        /*
            Method dump skipped, instruction units count: 234
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.Cif.a(com.xiaomi.push.jf):void");
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m481a(boolean z) {
        this.f644a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m482a() {
        return this.f639a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m483a(Cif cif) {
        if (cif == null) {
            return false;
        }
        boolean zM482a = m482a();
        boolean zM482a2 = cif.m482a();
        if (((zM482a || zM482a2) && (!zM482a || !zM482a2 || !this.f639a.equals(cif.f639a))) || this.f645a != cif.f645a || this.f647b != cif.f647b) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = cif.e();
        if ((zE || zE2) && !(zE && zE2 && this.f643a.equals(cif.f643a))) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = cif.f();
        if ((zF || zF2) && !(zF && zF2 && this.f642a.equals(cif.f642a))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = cif.g();
        if ((zG || zG2) && !(zG && zG2 && this.f646b.equals(cif.f646b))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = cif.h();
        if ((zH || zH2) && !(zH && zH2 && this.f641a.m456a(cif.f641a))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = cif.i();
        if (zI || zI2) {
            return zI && zI2 && this.f640a.m448a(cif.f640a);
        }
        return true;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public byte[] m484a() {
        a(iv.a(this.f643a));
        return this.f643a.array();
    }

    public Cif b(String str) {
        this.f646b = str;
        return this;
    }

    public Cif b(boolean z) {
        this.f647b = z;
        m485b(true);
        return this;
    }

    public String b() {
        return this.f646b;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m480a();
        jfVar.a(f638a);
        if (this.f639a != null) {
            jfVar.a(f8228a);
            jfVar.mo567a(this.f639a.a());
            jfVar.b();
        }
        jfVar.a(b);
        jfVar.a(this.f645a);
        jfVar.b();
        jfVar.a(c);
        jfVar.a(this.f647b);
        jfVar.b();
        if (this.f643a != null) {
            jfVar.a(d);
            jfVar.a(this.f643a);
            jfVar.b();
        }
        if (this.f642a != null && f()) {
            jfVar.a(e);
            jfVar.a(this.f642a);
            jfVar.b();
        }
        if (this.f646b != null && g()) {
            jfVar.a(f);
            jfVar.a(this.f646b);
            jfVar.b();
        }
        if (this.f641a != null) {
            jfVar.a(g);
            this.f641a.b(jfVar);
            jfVar.b();
        }
        if (this.f640a != null && i()) {
            jfVar.a(h);
            this.f640a.b(jfVar);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public void m485b(boolean z) {
        this.f644a.set(1, z);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m486b() {
        return this.f645a;
    }

    public boolean c() {
        return this.f644a.get(0);
    }

    public boolean d() {
        return this.f644a.get(1);
    }

    public boolean e() {
        return this.f643a != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof Cif)) {
            return m483a((Cif) obj);
        }
        return false;
    }

    public boolean f() {
        return this.f642a != null;
    }

    public boolean g() {
        return this.f646b != null;
    }

    public boolean h() {
        return this.f641a != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f640a != null;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("XmPushActionContainer(");
        sb.append("action:");
        hj hjVar = this.f639a;
        if (hjVar == null) {
            sb.append("null");
        } else {
            sb.append(hjVar);
        }
        sb.append(", ");
        sb.append("encryptAction:");
        sb.append(this.f645a);
        sb.append(", ");
        sb.append("isRequest:");
        sb.append(this.f647b);
        sb.append(", ");
        sb.append("pushAction:");
        ByteBuffer byteBuffer = this.f643a;
        if (byteBuffer == null) {
            sb.append("null");
        } else {
            iv.a(byteBuffer, sb);
        }
        if (f()) {
            sb.append(", ");
            sb.append("appid:");
            String str = this.f642a;
            if (str == null) {
                sb.append("null");
            } else {
                sb.append(str);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("packageName:");
            String str2 = this.f646b;
            if (str2 == null) {
                sb.append("null");
            } else {
                sb.append(str2);
            }
        }
        sb.append(", ");
        sb.append("target:");
        hy hyVar = this.f641a;
        if (hyVar == null) {
            sb.append("null");
        } else {
            sb.append(hyVar);
        }
        if (i()) {
            sb.append(", ");
            sb.append("metaInfo:");
            hw hwVar = this.f640a;
            if (hwVar == null) {
                sb.append("null");
            } else {
                sb.append(hwVar);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}
