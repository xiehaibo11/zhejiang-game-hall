package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class hs implements iu<hs, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public int f514a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hp f515a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f516a = new BitSet(1);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public List<hu> f517a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f513a = new jk("NormalConfig");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8214a = new jc("", (byte) 8, 1);
    private static final jc b = new jc("", (byte) 15, 2);
    private static final jc c = new jc("", (byte) 8, 3);

    public int a() {
        return this.f514a;
    }

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(hs hsVar) {
        int iA;
        int iA2;
        int iA3;
        if (!getClass().equals(hsVar.getClass())) {
            return getClass().getName().compareTo(hsVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m427a()).compareTo(Boolean.valueOf(hsVar.m427a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m427a() && (iA3 = iv.a(this.f514a, hsVar.f514a)) != 0) {
            return iA3;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(hsVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA2 = iv.a(this.f517a, hsVar.f517a)) != 0) {
            return iA2;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(hsVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (!c() || (iA = iv.a(this.f515a, hsVar.f515a)) == 0) {
            return 0;
        }
        return iA;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public hp m425a() {
        return this.f515a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m426a() throws jg {
        if (this.f517a != null) {
            return;
        }
        throw new jg("Required field 'configItems' was not present! Struct: " + toString());
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0040  */
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
            if (r1 != 0) goto L33
            r5.f()
            boolean r5 = r4.m427a()
            if (r5 == 0) goto L18
            r4.m426a()
            return
        L18:
            com.xiaomi.push.jg r5 = new com.xiaomi.push.jg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Required field 'version' was not found in serialized data! Struct: "
            r0.append(r1)
            java.lang.String r1 = r4.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            throw r5
        L33:
            short r1 = r0.f823a
            r2 = 8
            r3 = 1
            if (r1 == r3) goto L81
            r3 = 2
            if (r1 == r3) goto L55
            r3 = 3
            if (r1 == r3) goto L46
        L40:
            byte r0 = r0.f8248a
            com.xiaomi.push.ji.a(r5, r0)
            goto L8e
        L46:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L40
            int r0 = r5.mo556a()
            com.xiaomi.push.hp r0 = com.xiaomi.push.hp.a(r0)
            r4.f515a = r0
            goto L8e
        L55:
            byte r1 = r0.f8248a
            r2 = 15
            if (r1 != r2) goto L40
            com.xiaomi.push.jd r0 = r5.mo559a()
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.f824a
            r1.<init>(r2)
            r4.f517a = r1
            r1 = 0
        L69:
            int r2 = r0.f824a
            if (r1 >= r2) goto L7d
            com.xiaomi.push.hu r2 = new com.xiaomi.push.hu
            r2.<init>()
            r2.a(r5)
            java.util.List<com.xiaomi.push.hu> r3 = r4.f517a
            r3.add(r2)
            int r1 = r1 + 1
            goto L69
        L7d:
            r5.i()
            goto L8e
        L81:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L40
            int r0 = r5.mo556a()
            r4.f514a = r0
            r4.a(r3)
        L8e:
            r5.g()
            goto L3
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.hs.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z) {
        this.f516a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m427a() {
        return this.f516a.get(0);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m428a(hs hsVar) {
        if (hsVar == null || this.f514a != hsVar.f514a) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = hsVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.f517a.equals(hsVar.f517a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = hsVar.c();
        if (zC || zC2) {
            return zC && zC2 && this.f515a.equals(hsVar.f515a);
        }
        return true;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m426a();
        jfVar.a(f513a);
        jfVar.a(f8214a);
        jfVar.mo567a(this.f514a);
        jfVar.b();
        if (this.f517a != null) {
            jfVar.a(b);
            jfVar.a(new jd((byte) 12, this.f517a.size()));
            Iterator<hu> it = this.f517a.iterator();
            while (it.hasNext()) {
                it.next().b(jfVar);
            }
            jfVar.e();
            jfVar.b();
        }
        if (this.f515a != null && c()) {
            jfVar.a(c);
            jfVar.mo567a(this.f515a.a());
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public boolean b() {
        return this.f517a != null;
    }

    public boolean c() {
        return this.f515a != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof hs)) {
            return m428a((hs) obj);
        }
        return false;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("NormalConfig(");
        sb.append("version:");
        sb.append(this.f514a);
        sb.append(", ");
        sb.append("configItems:");
        List<hu> list = this.f517a;
        if (list == null) {
            sb.append("null");
        } else {
            sb.append(list);
        }
        if (c()) {
            sb.append(", ");
            sb.append("type:");
            hp hpVar = this.f515a;
            if (hpVar == null) {
                sb.append("null");
            } else {
                sb.append(hpVar);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}
