package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

/* JADX INFO: loaded from: classes4.dex */
public class il implements iu<il, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f723a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hy f724a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f725a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f726a = new BitSet(1);

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f727b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f728c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f729d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f730e;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f722a = new jk("XmPushActionSendFeedbackResult");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8234a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 10, 6);
    private static final jc f = new jc("", (byte) 11, 7);
    private static final jc g = new jc("", (byte) 11, 8);

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(il ilVar) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        int iA7;
        if (!getClass().equals(ilVar.getClass())) {
            return getClass().getName().compareTo(ilVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m514a()).compareTo(Boolean.valueOf(ilVar.m514a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m514a() && (iA7 = iv.a(this.f725a, ilVar.f725a)) != 0) {
            return iA7;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(ilVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA6 = iv.a(this.f724a, ilVar.f724a)) != 0) {
            return iA6;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(ilVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA5 = iv.a(this.f727b, ilVar.f727b)) != 0) {
            return iA5;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(ilVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA4 = iv.a(this.f728c, ilVar.f728c)) != 0) {
            return iA4;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(ilVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA3 = iv.a(this.f723a, ilVar.f723a)) != 0) {
            return iA3;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(ilVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA2 = iv.a(this.f729d, ilVar.f729d)) != 0) {
            return iA2;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(ilVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (!g() || (iA = iv.a(this.f730e, ilVar.f730e)) == 0) {
            return 0;
        }
        return iA;
    }

    public void a() throws jg {
        if (this.f727b == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.f728c != null) {
            return;
        }
        throw new jg("Required field 'appId' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:13:0x003a  */
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
            if (r1 != 0) goto L33
            r4.f()
            boolean r4 = r3.e()
            if (r4 == 0) goto L18
            r3.a()
            return
        L18:
            com.xiaomi.push.jg r4 = new com.xiaomi.push.jg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Required field 'errorCode' was not found in serialized data! Struct: "
            r0.append(r1)
            java.lang.String r1 = r3.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            throw r4
        L33:
            short r1 = r0.f823a
            r2 = 11
            switch(r1) {
                case 1: goto L8e;
                case 2: goto L7d;
                case 3: goto L72;
                case 4: goto L67;
                case 5: goto L3a;
                case 6: goto L56;
                case 7: goto L4b;
                case 8: goto L40;
                default: goto L3a;
            }
        L3a:
            byte r0 = r0.f8248a
            com.xiaomi.push.ji.a(r4, r0)
            goto L98
        L40:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L3a
            java.lang.String r0 = r4.mo563a()
            r3.f730e = r0
            goto L98
        L4b:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L3a
            java.lang.String r0 = r4.mo563a()
            r3.f729d = r0
            goto L98
        L56:
            byte r1 = r0.f8248a
            r2 = 10
            if (r1 != r2) goto L3a
            long r0 = r4.mo557a()
            r3.f723a = r0
            r0 = 1
            r3.a(r0)
            goto L98
        L67:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L3a
            java.lang.String r0 = r4.mo563a()
            r3.f728c = r0
            goto L98
        L72:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L3a
            java.lang.String r0 = r4.mo563a()
            r3.f727b = r0
            goto L98
        L7d:
            byte r1 = r0.f8248a
            r2 = 12
            if (r1 != r2) goto L3a
            com.xiaomi.push.hy r0 = new com.xiaomi.push.hy
            r0.<init>()
            r3.f724a = r0
            r0.a(r4)
            goto L98
        L8e:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L3a
            java.lang.String r0 = r4.mo563a()
            r3.f725a = r0
        L98:
            r4.g()
            goto L3
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.il.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z) {
        this.f726a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m514a() {
        return this.f725a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m515a(il ilVar) {
        if (ilVar == null) {
            return false;
        }
        boolean zM514a = m514a();
        boolean zM514a2 = ilVar.m514a();
        if ((zM514a || zM514a2) && !(zM514a && zM514a2 && this.f725a.equals(ilVar.f725a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = ilVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.f724a.m456a(ilVar.f724a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = ilVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.f727b.equals(ilVar.f727b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = ilVar.d();
        if (((zD || zD2) && !(zD && zD2 && this.f728c.equals(ilVar.f728c))) || this.f723a != ilVar.f723a) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = ilVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.f729d.equals(ilVar.f729d))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = ilVar.g();
        if (zG || zG2) {
            return zG && zG2 && this.f730e.equals(ilVar.f730e);
        }
        return true;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        a();
        jfVar.a(f722a);
        if (this.f725a != null && m514a()) {
            jfVar.a(f8234a);
            jfVar.a(this.f725a);
            jfVar.b();
        }
        if (this.f724a != null && b()) {
            jfVar.a(b);
            this.f724a.b(jfVar);
            jfVar.b();
        }
        if (this.f727b != null) {
            jfVar.a(c);
            jfVar.a(this.f727b);
            jfVar.b();
        }
        if (this.f728c != null) {
            jfVar.a(d);
            jfVar.a(this.f728c);
            jfVar.b();
        }
        jfVar.a(e);
        jfVar.a(this.f723a);
        jfVar.b();
        if (this.f729d != null && f()) {
            jfVar.a(f);
            jfVar.a(this.f729d);
            jfVar.b();
        }
        if (this.f730e != null && g()) {
            jfVar.a(g);
            jfVar.a(this.f730e);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public boolean b() {
        return this.f724a != null;
    }

    public boolean c() {
        return this.f727b != null;
    }

    public boolean d() {
        return this.f728c != null;
    }

    public boolean e() {
        return this.f726a.get(0);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof il)) {
            return m515a((il) obj);
        }
        return false;
    }

    public boolean f() {
        return this.f729d != null;
    }

    public boolean g() {
        return this.f730e != null;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionSendFeedbackResult(");
        boolean z2 = false;
        if (m514a()) {
            sb.append("debug:");
            String str = this.f725a;
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
            hy hyVar = this.f724a;
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
        String str2 = this.f727b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        sb.append(", ");
        sb.append("appId:");
        String str3 = this.f728c;
        if (str3 == null) {
            sb.append("null");
        } else {
            sb.append(str3);
        }
        sb.append(", ");
        sb.append("errorCode:");
        sb.append(this.f723a);
        if (f()) {
            sb.append(", ");
            sb.append("reason:");
            String str4 = this.f729d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("category:");
            String str5 = this.f730e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}
