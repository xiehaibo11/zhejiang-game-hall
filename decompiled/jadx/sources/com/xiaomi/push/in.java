package com.xiaomi.push;

import java.io.Serializable;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class in implements iu<in, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hy f746a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f747a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public List<String> f748a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f749b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f750c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f751d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f752e;

    /* JADX INFO: renamed from: f, reason: collision with other field name */
    public String f753f;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f745a = new jk("XmPushActionSubscription");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8236a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 11, 5);
    private static final jc f = new jc("", (byte) 11, 6);
    private static final jc g = new jc("", (byte) 11, 7);
    private static final jc h = new jc("", (byte) 15, 8);

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(in inVar) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        int iA7;
        int iA8;
        if (!getClass().equals(inVar.getClass())) {
            return getClass().getName().compareTo(inVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m525a()).compareTo(Boolean.valueOf(inVar.m525a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m525a() && (iA8 = iv.a(this.f747a, inVar.f747a)) != 0) {
            return iA8;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(inVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA7 = iv.a(this.f746a, inVar.f746a)) != 0) {
            return iA7;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(inVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA6 = iv.a(this.f749b, inVar.f749b)) != 0) {
            return iA6;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(inVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA5 = iv.a(this.f750c, inVar.f750c)) != 0) {
            return iA5;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(inVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA4 = iv.a(this.f751d, inVar.f751d)) != 0) {
            return iA4;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(inVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA3 = iv.a(this.f752e, inVar.f752e)) != 0) {
            return iA3;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(inVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA2 = iv.a(this.f753f, inVar.f753f)) != 0) {
            return iA2;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(inVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (!h() || (iA = iv.a(this.f748a, inVar.f748a)) == 0) {
            return 0;
        }
        return iA;
    }

    public in a(String str) {
        this.f749b = str;
        return this;
    }

    public void a() throws jg {
        if (this.f749b == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.f750c == null) {
            throw new jg("Required field 'appId' was not present! Struct: " + toString());
        }
        if (this.f751d != null) {
            return;
        }
        throw new jg("Required field 'topic' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0019  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r5) throws com.xiaomi.push.jg {
        /*
            r4 = this;
            r5.mo562a()
        L3:
            com.xiaomi.push.jc r0 = r5.mo558a()
            byte r1 = r0.f8248a
            if (r1 != 0) goto L12
            r5.f()
            r4.a()
            return
        L12:
            short r1 = r0.f823a
            r2 = 11
            switch(r1) {
                case 1: goto L90;
                case 2: goto L7f;
                case 3: goto L74;
                case 4: goto L69;
                case 5: goto L5e;
                case 6: goto L53;
                case 7: goto L48;
                case 8: goto L20;
                default: goto L19;
            }
        L19:
            byte r0 = r0.f8248a
            com.xiaomi.push.ji.a(r5, r0)
            goto L9a
        L20:
            byte r1 = r0.f8248a
            r2 = 15
            if (r1 != r2) goto L19
            com.xiaomi.push.jd r0 = r5.mo559a()
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.f824a
            r1.<init>(r2)
            r4.f748a = r1
            r1 = 0
        L34:
            int r2 = r0.f824a
            if (r1 >= r2) goto L44
            java.lang.String r2 = r5.mo563a()
            java.util.List<java.lang.String> r3 = r4.f748a
            r3.add(r2)
            int r1 = r1 + 1
            goto L34
        L44:
            r5.i()
            goto L9a
        L48:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r5.mo563a()
            r4.f753f = r0
            goto L9a
        L53:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r5.mo563a()
            r4.f752e = r0
            goto L9a
        L5e:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r5.mo563a()
            r4.f751d = r0
            goto L9a
        L69:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r5.mo563a()
            r4.f750c = r0
            goto L9a
        L74:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r5.mo563a()
            r4.f749b = r0
            goto L9a
        L7f:
            byte r1 = r0.f8248a
            r2 = 12
            if (r1 != r2) goto L19
            com.xiaomi.push.hy r0 = new com.xiaomi.push.hy
            r0.<init>()
            r4.f746a = r0
            r0.a(r5)
            goto L9a
        L90:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L19
            java.lang.String r0 = r5.mo563a()
            r4.f747a = r0
        L9a:
            r5.g()
            goto L3
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.in.a(com.xiaomi.push.jf):void");
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m525a() {
        return this.f747a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m526a(in inVar) {
        if (inVar == null) {
            return false;
        }
        boolean zM525a = m525a();
        boolean zM525a2 = inVar.m525a();
        if ((zM525a || zM525a2) && !(zM525a && zM525a2 && this.f747a.equals(inVar.f747a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = inVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.f746a.m456a(inVar.f746a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = inVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.f749b.equals(inVar.f749b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = inVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.f750c.equals(inVar.f750c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = inVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.f751d.equals(inVar.f751d))) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = inVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.f752e.equals(inVar.f752e))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = inVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f753f.equals(inVar.f753f))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = inVar.h();
        if (zH || zH2) {
            return zH && zH2 && this.f748a.equals(inVar.f748a);
        }
        return true;
    }

    public in b(String str) {
        this.f750c = str;
        return this;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        a();
        jfVar.a(f745a);
        if (this.f747a != null && m525a()) {
            jfVar.a(f8236a);
            jfVar.a(this.f747a);
            jfVar.b();
        }
        if (this.f746a != null && b()) {
            jfVar.a(b);
            this.f746a.b(jfVar);
            jfVar.b();
        }
        if (this.f749b != null) {
            jfVar.a(c);
            jfVar.a(this.f749b);
            jfVar.b();
        }
        if (this.f750c != null) {
            jfVar.a(d);
            jfVar.a(this.f750c);
            jfVar.b();
        }
        if (this.f751d != null) {
            jfVar.a(e);
            jfVar.a(this.f751d);
            jfVar.b();
        }
        if (this.f752e != null && f()) {
            jfVar.a(f);
            jfVar.a(this.f752e);
            jfVar.b();
        }
        if (this.f753f != null && g()) {
            jfVar.a(g);
            jfVar.a(this.f753f);
            jfVar.b();
        }
        if (this.f748a != null && h()) {
            jfVar.a(h);
            jfVar.a(new jd((byte) 11, this.f748a.size()));
            Iterator<String> it = this.f748a.iterator();
            while (it.hasNext()) {
                jfVar.a(it.next());
            }
            jfVar.e();
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public boolean b() {
        return this.f746a != null;
    }

    public in c(String str) {
        this.f751d = str;
        return this;
    }

    public boolean c() {
        return this.f749b != null;
    }

    public in d(String str) {
        this.f752e = str;
        return this;
    }

    public boolean d() {
        return this.f750c != null;
    }

    public in e(String str) {
        this.f753f = str;
        return this;
    }

    public boolean e() {
        return this.f751d != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof in)) {
            return m526a((in) obj);
        }
        return false;
    }

    public boolean f() {
        return this.f752e != null;
    }

    public boolean g() {
        return this.f753f != null;
    }

    public boolean h() {
        return this.f748a != null;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionSubscription(");
        boolean z2 = false;
        if (m525a()) {
            sb.append("debug:");
            String str = this.f747a;
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
            hy hyVar = this.f746a;
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
        String str2 = this.f749b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        sb.append(", ");
        sb.append("appId:");
        String str3 = this.f750c;
        if (str3 == null) {
            sb.append("null");
        } else {
            sb.append(str3);
        }
        sb.append(", ");
        sb.append("topic:");
        String str4 = this.f751d;
        if (str4 == null) {
            sb.append("null");
        } else {
            sb.append(str4);
        }
        if (f()) {
            sb.append(", ");
            sb.append("packageName:");
            String str5 = this.f752e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("category:");
            String str6 = this.f753f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("aliases:");
            List<String> list = this.f748a;
            if (list == null) {
                sb.append("null");
            } else {
                sb.append(list);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}
