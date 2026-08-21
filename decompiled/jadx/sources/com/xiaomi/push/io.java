package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

/* JADX INFO: loaded from: classes4.dex */
public class io implements iu<io, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f755a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hy f756a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f757a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f758a = new BitSet(1);

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f759b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f760c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f761d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f762e;

    /* JADX INFO: renamed from: f, reason: collision with other field name */
    public String f763f;

    /* JADX INFO: renamed from: g, reason: collision with other field name */
    public String f764g;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f754a = new jk("XmPushActionSubscriptionResult");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8237a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 10, 6);
    private static final jc f = new jc("", (byte) 11, 7);
    private static final jc g = new jc("", (byte) 11, 8);
    private static final jc h = new jc("", (byte) 11, 9);
    private static final jc i = new jc("", (byte) 11, 10);

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(io ioVar) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        int iA7;
        int iA8;
        int iA9;
        if (!getClass().equals(ioVar.getClass())) {
            return getClass().getName().compareTo(ioVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m528a()).compareTo(Boolean.valueOf(ioVar.m528a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m528a() && (iA9 = iv.a(this.f757a, ioVar.f757a)) != 0) {
            return iA9;
        }
        int iCompareTo2 = Boolean.valueOf(m530b()).compareTo(Boolean.valueOf(ioVar.m530b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (m530b() && (iA8 = iv.a(this.f756a, ioVar.f756a)) != 0) {
            return iA8;
        }
        int iCompareTo3 = Boolean.valueOf(m531c()).compareTo(Boolean.valueOf(ioVar.m531c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (m531c() && (iA7 = iv.a(this.f759b, ioVar.f759b)) != 0) {
            return iA7;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(ioVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA6 = iv.a(this.f760c, ioVar.f760c)) != 0) {
            return iA6;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(ioVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA5 = iv.a(this.f755a, ioVar.f755a)) != 0) {
            return iA5;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(ioVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA4 = iv.a(this.f761d, ioVar.f761d)) != 0) {
            return iA4;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(ioVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA3 = iv.a(this.f762e, ioVar.f762e)) != 0) {
            return iA3;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(ioVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA2 = iv.a(this.f763f, ioVar.f763f)) != 0) {
            return iA2;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(ioVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (!i() || (iA = iv.a(this.f764g, ioVar.f764g)) == 0) {
            return 0;
        }
        return iA;
    }

    public String a() {
        return this.f759b;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m527a() throws jg {
        if (this.f759b != null) {
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
    public void a(com.xiaomi.push.jf r4) throws com.xiaomi.push.jg {
        /*
            r3 = this;
            r4.mo562a()
        L3:
            com.xiaomi.push.jc r0 = r4.mo558a()
            byte r1 = r0.f8248a
            if (r1 != 0) goto L12
            r4.f()
            r3.m527a()
            return
        L12:
            short r1 = r0.f823a
            r2 = 11
            switch(r1) {
                case 1: goto L84;
                case 2: goto L73;
                case 3: goto L68;
                case 4: goto L5d;
                case 5: goto L19;
                case 6: goto L4c;
                case 7: goto L41;
                case 8: goto L36;
                case 9: goto L2b;
                case 10: goto L20;
                default: goto L19;
            }
        L19:
            byte r0 = r0.f8248a
            com.xiaomi.push.ji.a(r4, r0)
            goto L8e
        L20:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r4.mo563a()
            r3.f764g = r0
            goto L8e
        L2b:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r4.mo563a()
            r3.f763f = r0
            goto L8e
        L36:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r4.mo563a()
            r3.f762e = r0
            goto L8e
        L41:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r4.mo563a()
            r3.f761d = r0
            goto L8e
        L4c:
            byte r1 = r0.f8248a
            r2 = 10
            if (r1 != r2) goto L19
            long r0 = r4.mo557a()
            r3.f755a = r0
            r0 = 1
            r3.a(r0)
            goto L8e
        L5d:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r4.mo563a()
            r3.f760c = r0
            goto L8e
        L68:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r4.mo563a()
            r3.f759b = r0
            goto L8e
        L73:
            byte r1 = r0.f8248a
            r2 = 12
            if (r1 != r2) goto L19
            com.xiaomi.push.hy r0 = new com.xiaomi.push.hy
            r0.<init>()
            r3.f756a = r0
            r0.a(r4)
            goto L8e
        L84:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r4.mo563a()
            r3.f757a = r0
        L8e:
            r4.g()
            goto L3
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.io.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z) {
        this.f758a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m528a() {
        return this.f757a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m529a(io ioVar) {
        if (ioVar == null) {
            return false;
        }
        boolean zM528a = m528a();
        boolean zM528a2 = ioVar.m528a();
        if ((zM528a || zM528a2) && !(zM528a && zM528a2 && this.f757a.equals(ioVar.f757a))) {
            return false;
        }
        boolean zM530b = m530b();
        boolean zM530b2 = ioVar.m530b();
        if ((zM530b || zM530b2) && !(zM530b && zM530b2 && this.f756a.m456a(ioVar.f756a))) {
            return false;
        }
        boolean zM531c = m531c();
        boolean zM531c2 = ioVar.m531c();
        if ((zM531c || zM531c2) && !(zM531c && zM531c2 && this.f759b.equals(ioVar.f759b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = ioVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.f760c.equals(ioVar.f760c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = ioVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.f755a == ioVar.f755a)) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = ioVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.f761d.equals(ioVar.f761d))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = ioVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f762e.equals(ioVar.f762e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = ioVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f763f.equals(ioVar.f763f))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = ioVar.i();
        if (zI || zI2) {
            return zI && zI2 && this.f764g.equals(ioVar.f764g);
        }
        return true;
    }

    public String b() {
        return this.f762e;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m527a();
        jfVar.a(f754a);
        if (this.f757a != null && m528a()) {
            jfVar.a(f8237a);
            jfVar.a(this.f757a);
            jfVar.b();
        }
        if (this.f756a != null && m530b()) {
            jfVar.a(b);
            this.f756a.b(jfVar);
            jfVar.b();
        }
        if (this.f759b != null) {
            jfVar.a(c);
            jfVar.a(this.f759b);
            jfVar.b();
        }
        if (this.f760c != null && d()) {
            jfVar.a(d);
            jfVar.a(this.f760c);
            jfVar.b();
        }
        if (e()) {
            jfVar.a(e);
            jfVar.a(this.f755a);
            jfVar.b();
        }
        if (this.f761d != null && f()) {
            jfVar.a(f);
            jfVar.a(this.f761d);
            jfVar.b();
        }
        if (this.f762e != null && g()) {
            jfVar.a(g);
            jfVar.a(this.f762e);
            jfVar.b();
        }
        if (this.f763f != null && h()) {
            jfVar.a(h);
            jfVar.a(this.f763f);
            jfVar.b();
        }
        if (this.f764g != null && i()) {
            jfVar.a(i);
            jfVar.a(this.f764g);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m530b() {
        return this.f756a != null;
    }

    public String c() {
        return this.f764g;
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public boolean m531c() {
        return this.f759b != null;
    }

    public boolean d() {
        return this.f760c != null;
    }

    public boolean e() {
        return this.f758a.get(0);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof io)) {
            return m529a((io) obj);
        }
        return false;
    }

    public boolean f() {
        return this.f761d != null;
    }

    public boolean g() {
        return this.f762e != null;
    }

    public boolean h() {
        return this.f763f != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f764g != null;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionSubscriptionResult(");
        boolean z2 = false;
        if (m528a()) {
            sb.append("debug:");
            String str = this.f757a;
            if (str == null) {
                sb.append("null");
            } else {
                sb.append(str);
            }
            z = false;
        } else {
            z = true;
        }
        if (m530b()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("target:");
            hy hyVar = this.f756a;
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
        String str2 = this.f759b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        if (d()) {
            sb.append(", ");
            sb.append("appId:");
            String str3 = this.f760c;
            if (str3 == null) {
                sb.append("null");
            } else {
                sb.append(str3);
            }
        }
        if (e()) {
            sb.append(", ");
            sb.append("errorCode:");
            sb.append(this.f755a);
        }
        if (f()) {
            sb.append(", ");
            sb.append("reason:");
            String str4 = this.f761d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("topic:");
            String str5 = this.f762e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("packageName:");
            String str6 = this.f763f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("category:");
            String str7 = this.f764g;
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
