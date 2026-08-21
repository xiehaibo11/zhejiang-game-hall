package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

/* JADX INFO: loaded from: classes4.dex */
public class is implements iu<is, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f800a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hy f801a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f802a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f803a = new BitSet(1);

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f804b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f805c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f806d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f807e;

    /* JADX INFO: renamed from: f, reason: collision with other field name */
    public String f808f;

    /* JADX INFO: renamed from: g, reason: collision with other field name */
    public String f809g;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f799a = new jk("XmPushActionUnSubscriptionResult");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8241a = new jc("", (byte) 11, 1);
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
    public int compareTo(is isVar) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        int iA7;
        int iA8;
        int iA9;
        if (!getClass().equals(isVar.getClass())) {
            return getClass().getName().compareTo(isVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m540a()).compareTo(Boolean.valueOf(isVar.m540a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m540a() && (iA9 = iv.a(this.f802a, isVar.f802a)) != 0) {
            return iA9;
        }
        int iCompareTo2 = Boolean.valueOf(m542b()).compareTo(Boolean.valueOf(isVar.m542b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (m542b() && (iA8 = iv.a(this.f801a, isVar.f801a)) != 0) {
            return iA8;
        }
        int iCompareTo3 = Boolean.valueOf(m543c()).compareTo(Boolean.valueOf(isVar.m543c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (m543c() && (iA7 = iv.a(this.f804b, isVar.f804b)) != 0) {
            return iA7;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(isVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA6 = iv.a(this.f805c, isVar.f805c)) != 0) {
            return iA6;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(isVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA5 = iv.a(this.f800a, isVar.f800a)) != 0) {
            return iA5;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(isVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA4 = iv.a(this.f806d, isVar.f806d)) != 0) {
            return iA4;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(isVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA3 = iv.a(this.f807e, isVar.f807e)) != 0) {
            return iA3;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(isVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA2 = iv.a(this.f808f, isVar.f808f)) != 0) {
            return iA2;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(isVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (!i() || (iA = iv.a(this.f809g, isVar.f809g)) == 0) {
            return 0;
        }
        return iA;
    }

    public String a() {
        return this.f804b;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m539a() throws jg {
        if (this.f804b != null) {
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
            r3.m539a()
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
            r3.f809g = r0
            goto L8e
        L2b:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r4.mo563a()
            r3.f808f = r0
            goto L8e
        L36:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r4.mo563a()
            r3.f807e = r0
            goto L8e
        L41:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r4.mo563a()
            r3.f806d = r0
            goto L8e
        L4c:
            byte r1 = r0.f8248a
            r2 = 10
            if (r1 != r2) goto L19
            long r0 = r4.mo557a()
            r3.f800a = r0
            r0 = 1
            r3.a(r0)
            goto L8e
        L5d:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r4.mo563a()
            r3.f805c = r0
            goto L8e
        L68:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r4.mo563a()
            r3.f804b = r0
            goto L8e
        L73:
            byte r1 = r0.f8248a
            r2 = 12
            if (r1 != r2) goto L19
            com.xiaomi.push.hy r0 = new com.xiaomi.push.hy
            r0.<init>()
            r3.f801a = r0
            r0.a(r4)
            goto L8e
        L84:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r4.mo563a()
            r3.f802a = r0
        L8e:
            r4.g()
            goto L3
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.is.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z) {
        this.f803a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m540a() {
        return this.f802a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m541a(is isVar) {
        if (isVar == null) {
            return false;
        }
        boolean zM540a = m540a();
        boolean zM540a2 = isVar.m540a();
        if ((zM540a || zM540a2) && !(zM540a && zM540a2 && this.f802a.equals(isVar.f802a))) {
            return false;
        }
        boolean zM542b = m542b();
        boolean zM542b2 = isVar.m542b();
        if ((zM542b || zM542b2) && !(zM542b && zM542b2 && this.f801a.m456a(isVar.f801a))) {
            return false;
        }
        boolean zM543c = m543c();
        boolean zM543c2 = isVar.m543c();
        if ((zM543c || zM543c2) && !(zM543c && zM543c2 && this.f804b.equals(isVar.f804b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = isVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.f805c.equals(isVar.f805c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = isVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.f800a == isVar.f800a)) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = isVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.f806d.equals(isVar.f806d))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = isVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f807e.equals(isVar.f807e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = isVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f808f.equals(isVar.f808f))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = isVar.i();
        if (zI || zI2) {
            return zI && zI2 && this.f809g.equals(isVar.f809g);
        }
        return true;
    }

    public String b() {
        return this.f807e;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m539a();
        jfVar.a(f799a);
        if (this.f802a != null && m540a()) {
            jfVar.a(f8241a);
            jfVar.a(this.f802a);
            jfVar.b();
        }
        if (this.f801a != null && m542b()) {
            jfVar.a(b);
            this.f801a.b(jfVar);
            jfVar.b();
        }
        if (this.f804b != null) {
            jfVar.a(c);
            jfVar.a(this.f804b);
            jfVar.b();
        }
        if (this.f805c != null && d()) {
            jfVar.a(d);
            jfVar.a(this.f805c);
            jfVar.b();
        }
        if (e()) {
            jfVar.a(e);
            jfVar.a(this.f800a);
            jfVar.b();
        }
        if (this.f806d != null && f()) {
            jfVar.a(f);
            jfVar.a(this.f806d);
            jfVar.b();
        }
        if (this.f807e != null && g()) {
            jfVar.a(g);
            jfVar.a(this.f807e);
            jfVar.b();
        }
        if (this.f808f != null && h()) {
            jfVar.a(h);
            jfVar.a(this.f808f);
            jfVar.b();
        }
        if (this.f809g != null && i()) {
            jfVar.a(i);
            jfVar.a(this.f809g);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m542b() {
        return this.f801a != null;
    }

    public String c() {
        return this.f809g;
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public boolean m543c() {
        return this.f804b != null;
    }

    public boolean d() {
        return this.f805c != null;
    }

    public boolean e() {
        return this.f803a.get(0);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof is)) {
            return m541a((is) obj);
        }
        return false;
    }

    public boolean f() {
        return this.f806d != null;
    }

    public boolean g() {
        return this.f807e != null;
    }

    public boolean h() {
        return this.f808f != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f809g != null;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionUnSubscriptionResult(");
        boolean z2 = false;
        if (m540a()) {
            sb.append("debug:");
            String str = this.f802a;
            if (str == null) {
                sb.append("null");
            } else {
                sb.append(str);
            }
            z = false;
        } else {
            z = true;
        }
        if (m542b()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("target:");
            hy hyVar = this.f801a;
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
        String str2 = this.f804b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        if (d()) {
            sb.append(", ");
            sb.append("appId:");
            String str3 = this.f805c;
            if (str3 == null) {
                sb.append("null");
            } else {
                sb.append(str3);
            }
        }
        if (e()) {
            sb.append(", ");
            sb.append("errorCode:");
            sb.append(this.f800a);
        }
        if (f()) {
            sb.append(", ");
            sb.append("reason:");
            String str4 = this.f806d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("topic:");
            String str5 = this.f807e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("packageName:");
            String str6 = this.f808f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (i()) {
            sb.append(", ");
            sb.append("category:");
            String str7 = this.f809g;
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
