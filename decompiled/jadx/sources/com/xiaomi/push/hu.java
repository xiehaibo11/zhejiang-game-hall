package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

/* JADX INFO: loaded from: classes4.dex */
public class hu implements iu<hu, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public int f521a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f522a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f523a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f524a = new BitSet(6);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public boolean f525a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public int f526b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public boolean f527b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public int f528c;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f520a = new jk("OnlineConfigItem");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8216a = new jc("", (byte) 8, 1);
    private static final jc b = new jc("", (byte) 8, 2);
    private static final jc c = new jc("", (byte) 2, 3);
    private static final jc d = new jc("", (byte) 8, 4);
    private static final jc e = new jc("", (byte) 10, 5);
    private static final jc f = new jc("", (byte) 11, 6);
    private static final jc g = new jc("", (byte) 2, 7);

    public int a() {
        return this.f521a;
    }

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(hu huVar) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        int iA7;
        if (!getClass().equals(huVar.getClass())) {
            return getClass().getName().compareTo(huVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m432a()).compareTo(Boolean.valueOf(huVar.m432a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m432a() && (iA7 = iv.a(this.f521a, huVar.f521a)) != 0) {
            return iA7;
        }
        int iCompareTo2 = Boolean.valueOf(m434b()).compareTo(Boolean.valueOf(huVar.m434b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (m434b() && (iA6 = iv.a(this.f526b, huVar.f526b)) != 0) {
            return iA6;
        }
        int iCompareTo3 = Boolean.valueOf(m435c()).compareTo(Boolean.valueOf(huVar.m435c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (m435c() && (iA5 = iv.a(this.f525a, huVar.f525a)) != 0) {
            return iA5;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(huVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA4 = iv.a(this.f528c, huVar.f528c)) != 0) {
            return iA4;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(huVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA3 = iv.a(this.f522a, huVar.f522a)) != 0) {
            return iA3;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(huVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA2 = iv.a(this.f523a, huVar.f523a)) != 0) {
            return iA2;
        }
        int iCompareTo7 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(huVar.h()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (!h() || (iA = iv.a(this.f527b, huVar.f527b)) == 0) {
            return 0;
        }
        return iA;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public long m429a() {
        return this.f522a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m430a() {
        return this.f523a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m431a() {
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:9:0x001b  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r6) {
        /*
            r5 = this;
            r6.mo562a()
        L3:
            com.xiaomi.push.jc r0 = r6.mo558a()
            byte r1 = r0.f8248a
            if (r1 != 0) goto L12
            r6.f()
            r5.m431a()
            return
        L12:
            short r1 = r0.f823a
            r2 = 2
            r3 = 8
            r4 = 1
            switch(r1) {
                case 1: goto L76;
                case 2: goto L68;
                case 3: goto L5a;
                case 4: goto L4c;
                case 5: goto L3c;
                case 6: goto L2f;
                case 7: goto L21;
                default: goto L1b;
            }
        L1b:
            byte r0 = r0.f8248a
            com.xiaomi.push.ji.a(r6, r0)
            goto L83
        L21:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L1b
            boolean r0 = r6.mo568a()
            r5.f527b = r0
            r5.f(r4)
            goto L83
        L2f:
            byte r1 = r0.f8248a
            r2 = 11
            if (r1 != r2) goto L1b
            java.lang.String r0 = r6.mo563a()
            r5.f523a = r0
            goto L83
        L3c:
            byte r1 = r0.f8248a
            r2 = 10
            if (r1 != r2) goto L1b
            long r0 = r6.mo557a()
            r5.f522a = r0
            r5.e(r4)
            goto L83
        L4c:
            byte r1 = r0.f8248a
            if (r1 != r3) goto L1b
            int r0 = r6.mo556a()
            r5.f528c = r0
            r5.d(r4)
            goto L83
        L5a:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L1b
            boolean r0 = r6.mo568a()
            r5.f525a = r0
            r5.c(r4)
            goto L83
        L68:
            byte r1 = r0.f8248a
            if (r1 != r3) goto L1b
            int r0 = r6.mo556a()
            r5.f526b = r0
            r5.b(r4)
            goto L83
        L76:
            byte r1 = r0.f8248a
            if (r1 != r3) goto L1b
            int r0 = r6.mo556a()
            r5.f521a = r0
            r5.a(r4)
        L83:
            r6.g()
            goto L3
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.hu.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z) {
        this.f524a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m432a() {
        return this.f524a.get(0);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m433a(hu huVar) {
        if (huVar == null) {
            return false;
        }
        boolean zM432a = m432a();
        boolean zM432a2 = huVar.m432a();
        if ((zM432a || zM432a2) && !(zM432a && zM432a2 && this.f521a == huVar.f521a)) {
            return false;
        }
        boolean zM434b = m434b();
        boolean zM434b2 = huVar.m434b();
        if ((zM434b || zM434b2) && !(zM434b && zM434b2 && this.f526b == huVar.f526b)) {
            return false;
        }
        boolean zM435c = m435c();
        boolean zM435c2 = huVar.m435c();
        if ((zM435c || zM435c2) && !(zM435c && zM435c2 && this.f525a == huVar.f525a)) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = huVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.f528c == huVar.f528c)) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = huVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.f522a == huVar.f522a)) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = huVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.f523a.equals(huVar.f523a))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = huVar.h();
        if (zH || zH2) {
            return zH && zH2 && this.f527b == huVar.f527b;
        }
        return true;
    }

    public int b() {
        return this.f526b;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) {
        m431a();
        jfVar.a(f520a);
        if (m432a()) {
            jfVar.a(f8216a);
            jfVar.mo567a(this.f521a);
            jfVar.b();
        }
        if (m434b()) {
            jfVar.a(b);
            jfVar.mo567a(this.f526b);
            jfVar.b();
        }
        if (m435c()) {
            jfVar.a(c);
            jfVar.a(this.f525a);
            jfVar.b();
        }
        if (d()) {
            jfVar.a(d);
            jfVar.mo567a(this.f528c);
            jfVar.b();
        }
        if (e()) {
            jfVar.a(e);
            jfVar.a(this.f522a);
            jfVar.b();
        }
        if (this.f523a != null && f()) {
            jfVar.a(f);
            jfVar.a(this.f523a);
            jfVar.b();
        }
        if (h()) {
            jfVar.a(g);
            jfVar.a(this.f527b);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public void b(boolean z) {
        this.f524a.set(1, z);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m434b() {
        return this.f524a.get(1);
    }

    public int c() {
        return this.f528c;
    }

    public void c(boolean z) {
        this.f524a.set(2, z);
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public boolean m435c() {
        return this.f524a.get(2);
    }

    public void d(boolean z) {
        this.f524a.set(3, z);
    }

    public boolean d() {
        return this.f524a.get(3);
    }

    public void e(boolean z) {
        this.f524a.set(4, z);
    }

    public boolean e() {
        return this.f524a.get(4);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof hu)) {
            return m433a((hu) obj);
        }
        return false;
    }

    public void f(boolean z) {
        this.f524a.set(5, z);
    }

    public boolean f() {
        return this.f523a != null;
    }

    public boolean g() {
        return this.f527b;
    }

    public boolean h() {
        return this.f524a.get(5);
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("OnlineConfigItem(");
        boolean z2 = false;
        if (m432a()) {
            sb.append("key:");
            sb.append(this.f521a);
            z = false;
        } else {
            z = true;
        }
        if (m434b()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("type:");
            sb.append(this.f526b);
            z = false;
        }
        if (m435c()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("clear:");
            sb.append(this.f525a);
            z = false;
        }
        if (d()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("intValue:");
            sb.append(this.f528c);
            z = false;
        }
        if (e()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("longValue:");
            sb.append(this.f522a);
            z = false;
        }
        if (f()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("stringValue:");
            String str = this.f523a;
            if (str == null) {
                str = "null";
            }
            sb.append(str);
        } else {
            z2 = z;
        }
        if (h()) {
            if (!z2) {
                sb.append(", ");
            }
            sb.append("boolValue:");
            sb.append(this.f527b);
        }
        sb.append(")");
        return sb.toString();
    }
}
