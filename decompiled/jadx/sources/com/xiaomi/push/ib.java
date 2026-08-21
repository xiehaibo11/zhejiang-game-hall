package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

/* JADX INFO: loaded from: classes4.dex */
public class ib implements iu<ib, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public int f609a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f610a = new BitSet(2);

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public int f611b;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f608a = new jk("XmPushActionCheckClientInfo");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8224a = new jc("", (byte) 8, 1);
    private static final jc b = new jc("", (byte) 8, 2);

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(ib ibVar) {
        int iA;
        int iA2;
        if (!getClass().equals(ibVar.getClass())) {
            return getClass().getName().compareTo(ibVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m464a()).compareTo(Boolean.valueOf(ibVar.m464a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m464a() && (iA2 = iv.a(this.f609a, ibVar.f609a)) != 0) {
            return iA2;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(ibVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (!b() || (iA = iv.a(this.f611b, ibVar.f611b)) == 0) {
            return 0;
        }
        return iA;
    }

    public ib a(int i) {
        this.f609a = i;
        a(true);
        return this;
    }

    public void a() {
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x005e  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r6) throws com.xiaomi.push.jg {
        /*
            r5 = this;
            r6.mo562a()
        L3:
            com.xiaomi.push.jc r0 = r6.mo558a()
            byte r1 = r0.f8248a
            if (r1 != 0) goto L54
            r6.f()
            boolean r6 = r5.m464a()
            if (r6 == 0) goto L39
            boolean r6 = r5.b()
            if (r6 == 0) goto L1e
            r5.a()
            return
        L1e:
            com.xiaomi.push.jg r6 = new com.xiaomi.push.jg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Required field 'pluginConfigVersion' was not found in serialized data! Struct: "
            r0.append(r1)
            java.lang.String r1 = r5.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            throw r6
        L39:
            com.xiaomi.push.jg r6 = new com.xiaomi.push.jg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Required field 'miscConfigVersion' was not found in serialized data! Struct: "
            r0.append(r1)
            java.lang.String r1 = r5.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            throw r6
        L54:
            short r1 = r0.f823a
            r2 = 8
            r3 = 1
            if (r1 == r3) goto L72
            r4 = 2
            if (r1 == r4) goto L64
        L5e:
            byte r0 = r0.f8248a
            com.xiaomi.push.ji.a(r6, r0)
            goto L7f
        L64:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L5e
            int r0 = r6.mo556a()
            r5.f611b = r0
            r5.b(r3)
            goto L7f
        L72:
            byte r1 = r0.f8248a
            if (r1 != r2) goto L5e
            int r0 = r6.mo556a()
            r5.f609a = r0
            r5.a(r3)
        L7f:
            r6.g()
            goto L3
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.ib.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z) {
        this.f610a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m464a() {
        return this.f610a.get(0);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m465a(ib ibVar) {
        return ibVar != null && this.f609a == ibVar.f609a && this.f611b == ibVar.f611b;
    }

    public ib b(int i) {
        this.f611b = i;
        b(true);
        return this;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) {
        a();
        jfVar.a(f608a);
        jfVar.a(f8224a);
        jfVar.mo567a(this.f609a);
        jfVar.b();
        jfVar.a(b);
        jfVar.mo567a(this.f611b);
        jfVar.b();
        jfVar.c();
        jfVar.mo566a();
    }

    public void b(boolean z) {
        this.f610a.set(1, z);
    }

    public boolean b() {
        return this.f610a.get(1);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof ib)) {
            return m465a((ib) obj);
        }
        return false;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        return "XmPushActionCheckClientInfo(miscConfigVersion:" + this.f609a + ", pluginConfigVersion:" + this.f611b + ")";
    }
}
