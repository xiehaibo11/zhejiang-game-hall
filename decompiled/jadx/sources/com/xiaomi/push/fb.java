package com.xiaomi.push;

import java.io.Serializable;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class fb implements iu<fb, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f363a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public List<fa> f364a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f365b;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f362a = new jk("StatsEvents");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8148a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 11, 2);
    private static final jc c = new jc("", (byte) 15, 3);

    public fb() {
    }

    public fb(String str, List<fa> list) {
        this();
        this.f363a = str;
        this.f364a = list;
    }

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(fb fbVar) {
        int iA;
        int iA2;
        int iA3;
        if (!getClass().equals(fbVar.getClass())) {
            return getClass().getName().compareTo(fbVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m332a()).compareTo(Boolean.valueOf(fbVar.m332a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m332a() && (iA3 = iv.a(this.f363a, fbVar.f363a)) != 0) {
            return iA3;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(fbVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA2 = iv.a(this.f365b, fbVar.f365b)) != 0) {
            return iA2;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(fbVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (!c() || (iA = iv.a(this.f364a, fbVar.f364a)) == 0) {
            return 0;
        }
        return iA;
    }

    public fb a(String str) {
        this.f365b = str;
        return this;
    }

    public void a() throws jg {
        if (this.f363a == null) {
            throw new jg("Required field 'uuid' was not present! Struct: " + toString());
        }
        if (this.f364a != null) {
            return;
        }
        throw new jg("Required field 'events' was not present! Struct: " + toString());
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x001f  */
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
            r3 = 1
            if (r1 == r3) goto L5c
            r3 = 2
            if (r1 == r3) goto L51
            r2 = 3
            if (r1 == r2) goto L25
        L1f:
            byte r0 = r0.f8248a
            com.xiaomi.push.ji.a(r5, r0)
            goto L66
        L25:
            byte r1 = r0.f8248a
            r2 = 15
            if (r1 != r2) goto L1f
            com.xiaomi.push.jd r0 = r5.mo559a()
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.f824a
            r1.<init>(r2)
            r4.f364a = r1
            r1 = 0
        L39:
            int r2 = r0.f824a
            if (r1 >= r2) goto L4d
            com.xiaomi.push.fa r2 = new com.xiaomi.push.fa
            r2.<init>()
            r2.a(r5)
            java.util.List<com.xiaomi.push.fa> r3 = r4.f364a
            r3.add(r2)
            int r1 = r1 + 1
            goto L39
        L4d:
            r5.i()
            goto L66
        L51:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L1f
            java.lang.String r0 = r5.mo563a()
            r4.f365b = r0
            goto L66
        L5c:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L1f
            java.lang.String r0 = r5.mo563a()
            r4.f363a = r0
        L66:
            r5.g()
            goto L3
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.fb.a(com.xiaomi.push.jf):void");
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m332a() {
        return this.f363a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m333a(fb fbVar) {
        if (fbVar == null) {
            return false;
        }
        boolean zM332a = m332a();
        boolean zM332a2 = fbVar.m332a();
        if ((zM332a || zM332a2) && !(zM332a && zM332a2 && this.f363a.equals(fbVar.f363a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = fbVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.f365b.equals(fbVar.f365b))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = fbVar.c();
        if (zC || zC2) {
            return zC && zC2 && this.f364a.equals(fbVar.f364a);
        }
        return true;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) {
        a();
        jfVar.a(f362a);
        if (this.f363a != null) {
            jfVar.a(f8148a);
            jfVar.a(this.f363a);
            jfVar.b();
        }
        if (this.f365b != null && b()) {
            jfVar.a(b);
            jfVar.a(this.f365b);
            jfVar.b();
        }
        if (this.f364a != null) {
            jfVar.a(c);
            jfVar.a(new jd((byte) 12, this.f364a.size()));
            Iterator<fa> it = this.f364a.iterator();
            while (it.hasNext()) {
                it.next().b(jfVar);
            }
            jfVar.e();
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public boolean b() {
        return this.f365b != null;
    }

    public boolean c() {
        return this.f364a != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof fb)) {
            return m333a((fb) obj);
        }
        return false;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("StatsEvents(");
        sb.append("uuid:");
        String str = this.f363a;
        if (str == null) {
            sb.append("null");
        } else {
            sb.append(str);
        }
        if (b()) {
            sb.append(", ");
            sb.append("operator:");
            String str2 = this.f365b;
            if (str2 == null) {
                sb.append("null");
            } else {
                sb.append(str2);
            }
        }
        sb.append(", ");
        sb.append("events:");
        List<fa> list = this.f364a;
        if (list == null) {
            sb.append("null");
        } else {
            sb.append(list);
        }
        sb.append(")");
        return sb.toString();
    }
}
