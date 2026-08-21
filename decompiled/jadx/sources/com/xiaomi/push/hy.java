package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

/* JADX INFO: loaded from: classes4.dex */
public class hy implements iu<hy, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f568a;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f573d;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f566a = new jk("Target");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8220a = new jc("", (byte) 10, 1);
    private static final jc b = new jc("", (byte) 11, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 2, 5);
    private static final jc f = new jc("", (byte) 11, 7);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f569a = new BitSet(2);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f567a = 5;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f571b = "xiaomi.com";

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f572c = "";

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public boolean f570a = false;

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(hy hyVar) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        if (!getClass().equals(hyVar.getClass())) {
            return getClass().getName().compareTo(hyVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m455a()).compareTo(Boolean.valueOf(hyVar.m455a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m455a() && (iA6 = iv.a(this.f567a, hyVar.f567a)) != 0) {
            return iA6;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(hyVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA5 = iv.a(this.f568a, hyVar.f568a)) != 0) {
            return iA5;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(hyVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA4 = iv.a(this.f571b, hyVar.f571b)) != 0) {
            return iA4;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(hyVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA3 = iv.a(this.f572c, hyVar.f572c)) != 0) {
            return iA3;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(hyVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA2 = iv.a(this.f570a, hyVar.f570a)) != 0) {
            return iA2;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(hyVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (!f() || (iA = iv.a(this.f573d, hyVar.f573d)) == 0) {
            return 0;
        }
        return iA;
    }

    public void a() throws jg {
        if (this.f568a != null) {
            return;
        }
        throw new jg("Required field 'userId' was not present! Struct: " + toString());
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x0049  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r7) {
        /*
            r6 = this;
            r7.mo562a()
        L3:
            com.xiaomi.push.jc r0 = r7.mo558a()
            byte r1 = r0.f8248a
            if (r1 != 0) goto L33
            r7.f()
            boolean r7 = r6.m455a()
            if (r7 == 0) goto L18
            r6.a()
            return
        L18:
            com.xiaomi.push.jg r7 = new com.xiaomi.push.jg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Required field 'channelId' was not found in serialized data! Struct: "
            r0.append(r1)
            java.lang.String r1 = r6.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r7.<init>(r0)
            throw r7
        L33:
            short r1 = r0.f823a
            r2 = 1
            if (r1 == r2) goto L89
            r3 = 2
            r4 = 11
            if (r1 == r3) goto L7e
            r5 = 3
            if (r1 == r5) goto L73
            r5 = 4
            if (r1 == r5) goto L68
            r5 = 5
            if (r1 == r5) goto L5a
            r2 = 7
            if (r1 == r2) goto L4f
        L49:
            byte r0 = r0.f8248a
            com.xiaomi.push.ji.a(r7, r0)
            goto L98
        L4f:
            byte r1 = r0.f8248a
            if (r1 != r4) goto L49
            java.lang.String r0 = r7.mo563a()
            r6.f573d = r0
            goto L98
        L5a:
            byte r1 = r0.f8248a
            if (r1 != r3) goto L49
            boolean r0 = r7.mo568a()
            r6.f570a = r0
            r6.b(r2)
            goto L98
        L68:
            byte r1 = r0.f8248a
            if (r1 != r4) goto L49
            java.lang.String r0 = r7.mo563a()
            r6.f572c = r0
            goto L98
        L73:
            byte r1 = r0.f8248a
            if (r1 != r4) goto L49
            java.lang.String r0 = r7.mo563a()
            r6.f571b = r0
            goto L98
        L7e:
            byte r1 = r0.f8248a
            if (r1 != r4) goto L49
            java.lang.String r0 = r7.mo563a()
            r6.f568a = r0
            goto L98
        L89:
            byte r1 = r0.f8248a
            r3 = 10
            if (r1 != r3) goto L49
            long r0 = r7.mo557a()
            r6.f567a = r0
            r6.a(r2)
        L98:
            r7.g()
            goto L3
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.hy.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z) {
        this.f569a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m455a() {
        return this.f569a.get(0);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m456a(hy hyVar) {
        if (hyVar == null || this.f567a != hyVar.f567a) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = hyVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.f568a.equals(hyVar.f568a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = hyVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.f571b.equals(hyVar.f571b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = hyVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.f572c.equals(hyVar.f572c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = hyVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.f570a == hyVar.f570a)) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = hyVar.f();
        if (zF || zF2) {
            return zF && zF2 && this.f573d.equals(hyVar.f573d);
        }
        return true;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) {
        a();
        jfVar.a(f566a);
        jfVar.a(f8220a);
        jfVar.a(this.f567a);
        jfVar.b();
        if (this.f568a != null) {
            jfVar.a(b);
            jfVar.a(this.f568a);
            jfVar.b();
        }
        if (this.f571b != null && c()) {
            jfVar.a(c);
            jfVar.a(this.f571b);
            jfVar.b();
        }
        if (this.f572c != null && d()) {
            jfVar.a(d);
            jfVar.a(this.f572c);
            jfVar.b();
        }
        if (e()) {
            jfVar.a(e);
            jfVar.a(this.f570a);
            jfVar.b();
        }
        if (this.f573d != null && f()) {
            jfVar.a(f);
            jfVar.a(this.f573d);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public void b(boolean z) {
        this.f569a.set(1, z);
    }

    public boolean b() {
        return this.f568a != null;
    }

    public boolean c() {
        return this.f571b != null;
    }

    public boolean d() {
        return this.f572c != null;
    }

    public boolean e() {
        return this.f569a.get(1);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof hy)) {
            return m456a((hy) obj);
        }
        return false;
    }

    public boolean f() {
        return this.f573d != null;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("Target(");
        sb.append("channelId:");
        sb.append(this.f567a);
        sb.append(", ");
        sb.append("userId:");
        String str = this.f568a;
        if (str == null) {
            sb.append("null");
        } else {
            sb.append(str);
        }
        if (c()) {
            sb.append(", ");
            sb.append("server:");
            String str2 = this.f571b;
            if (str2 == null) {
                sb.append("null");
            } else {
                sb.append(str2);
            }
        }
        if (d()) {
            sb.append(", ");
            sb.append("resource:");
            String str3 = this.f572c;
            if (str3 == null) {
                sb.append("null");
            } else {
                sb.append(str3);
            }
        }
        if (e()) {
            sb.append(", ");
            sb.append("isPreview:");
            sb.append(this.f570a);
        }
        if (f()) {
            sb.append(", ");
            sb.append("token:");
            String str4 = this.f573d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}
