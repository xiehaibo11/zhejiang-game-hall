package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

/* JADX INFO: loaded from: classes4.dex */
public class hr implements iu<hr, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f509a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public hl f510a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f511a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f512a = new BitSet(1);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f508a = new jk("DataCollectionItem");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8213a = new jc("", (byte) 10, 1);
    private static final jc b = new jc("", (byte) 8, 2);
    private static final jc c = new jc("", (byte) 11, 3);

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(hr hrVar) {
        int iA;
        int iA2;
        int iA3;
        if (!getClass().equals(hrVar.getClass())) {
            return getClass().getName().compareTo(hrVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m423a()).compareTo(Boolean.valueOf(hrVar.m423a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m423a() && (iA3 = iv.a(this.f509a, hrVar.f509a)) != 0) {
            return iA3;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(hrVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA2 = iv.a(this.f510a, hrVar.f510a)) != 0) {
            return iA2;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(hrVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (!c() || (iA = iv.a(this.f511a, hrVar.f511a)) == 0) {
            return 0;
        }
        return iA;
    }

    public hr a(long j) {
        this.f509a = j;
        a(true);
        return this;
    }

    public hr a(hl hlVar) {
        this.f510a = hlVar;
        return this;
    }

    public hr a(String str) {
        this.f511a = str;
        return this;
    }

    public String a() {
        return this.f511a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m422a() throws jg {
        if (this.f510a == null) {
            throw new jg("Required field 'collectionType' was not present! Struct: " + toString());
        }
        if (this.f511a != null) {
            return;
        }
        throw new jg("Required field 'content' was not present! Struct: " + toString());
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x003e  */
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
            boolean r5 = r4.m423a()
            if (r5 == 0) goto L18
            r4.m422a()
            return
        L18:
            com.xiaomi.push.jg r5 = new com.xiaomi.push.jg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Required field 'collectedAt' was not found in serialized data! Struct: "
            r0.append(r1)
            java.lang.String r1 = r4.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            throw r5
        L33:
            short r1 = r0.f823a
            r2 = 1
            if (r1 == r2) goto L62
            r2 = 2
            if (r1 == r2) goto L51
            r2 = 3
            if (r1 == r2) goto L44
        L3e:
            byte r0 = r0.f8248a
            com.xiaomi.push.ji.a(r5, r0)
            goto L71
        L44:
            byte r1 = r0.f8248a
            r2 = 11
            if (r1 != r2) goto L3e
            java.lang.String r0 = r5.mo563a()
            r4.f511a = r0
            goto L71
        L51:
            byte r1 = r0.f8248a
            r2 = 8
            if (r1 != r2) goto L3e
            int r0 = r5.mo556a()
            com.xiaomi.push.hl r0 = com.xiaomi.push.hl.a(r0)
            r4.f510a = r0
            goto L71
        L62:
            byte r1 = r0.f8248a
            r3 = 10
            if (r1 != r3) goto L3e
            long r0 = r5.mo557a()
            r4.f509a = r0
            r4.a(r2)
        L71:
            r5.g()
            goto L3
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.hr.a(com.xiaomi.push.jf):void");
    }

    public void a(boolean z) {
        this.f512a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m423a() {
        return this.f512a.get(0);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m424a(hr hrVar) {
        if (hrVar == null || this.f509a != hrVar.f509a) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = hrVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.f510a.equals(hrVar.f510a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = hrVar.c();
        if (zC || zC2) {
            return zC && zC2 && this.f511a.equals(hrVar.f511a);
        }
        return true;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m422a();
        jfVar.a(f508a);
        jfVar.a(f8213a);
        jfVar.a(this.f509a);
        jfVar.b();
        if (this.f510a != null) {
            jfVar.a(b);
            jfVar.mo567a(this.f510a.a());
            jfVar.b();
        }
        if (this.f511a != null) {
            jfVar.a(c);
            jfVar.a(this.f511a);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public boolean b() {
        return this.f510a != null;
    }

    public boolean c() {
        return this.f511a != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof hr)) {
            return m424a((hr) obj);
        }
        return false;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("DataCollectionItem(");
        sb.append("collectedAt:");
        sb.append(this.f509a);
        sb.append(", ");
        sb.append("collectionType:");
        hl hlVar = this.f510a;
        if (hlVar == null) {
            sb.append("null");
        } else {
            sb.append(hlVar);
        }
        sb.append(", ");
        sb.append("content:");
        String str = this.f511a;
        if (str == null) {
            sb.append("null");
        } else {
            sb.append(str);
        }
        sb.append(")");
        return sb.toString();
    }
}
