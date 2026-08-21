package com.xiaomi.push;

public class hr implements com.xiaomi.push.iu<com.xiaomi.push.hr, java.lang.Object>, java.io.Serializable, java.lang.Cloneable {
    private static final com.xiaomi.push.jc a = null;
    private static final com.xiaomi.push.jk a = null;
    private static final com.xiaomi.push.jc b = null;
    private static final com.xiaomi.push.jc c = null;
    public long a;
    public com.xiaomi.push.hl a;
    public java.lang.String a;
    private java.util.BitSet a;

    static {
            com.xiaomi.push.jk r0 = new com.xiaomi.push.jk
            java.lang.String r1 = "DataCollectionItem"
            r0.<init>(r1)
            com.xiaomi.push.hr.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            java.lang.String r1 = ""
            r2 = 10
            r3 = 1
            r0.<init>(r1, r2, r3)
            com.xiaomi.push.hr.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r2 = 8
            r3 = 2
            r0.<init>(r1, r2, r3)
            com.xiaomi.push.hr.b = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r2 = 11
            r3 = 3
            r0.<init>(r1, r2, r3)
            com.xiaomi.push.hr.c = r0
            return
    }

    public hr() {
            r2 = this;
            r2.<init>()
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 1
            r0.<init>(r1)
            r2.a = r0
            return
    }

    public int a(com.xiaomi.push.hr r5) {
            r4 = this;
            java.lang.Class r0 = r4.getClass()
            java.lang.Class r1 = r5.getClass()
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L23
            java.lang.Class r0 = r4.getClass()
            java.lang.String r0 = r0.getName()
            java.lang.Class r5 = r5.getClass()
            java.lang.String r5 = r5.getName()
            int r5 = r0.compareTo(r5)
            return r5
        L23:
            boolean r0 = r4.a()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.a()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L3a
            return r0
        L3a:
            boolean r0 = r4.a()
            if (r0 == 0) goto L4b
            long r0 = r4.a
            long r2 = r5.a
            int r0 = com.xiaomi.push.iv.a(r0, r2)
            if (r0 == 0) goto L4b
            return r0
        L4b:
            boolean r0 = r4.b()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.b()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L62
            return r0
        L62:
            boolean r0 = r4.b()
            if (r0 == 0) goto L73
            com.xiaomi.push.hl r0 = r4.a
            com.xiaomi.push.hl r1 = r5.a
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L73
            return r0
        L73:
            boolean r0 = r4.c()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.c()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L8a
            return r0
        L8a:
            boolean r0 = r4.c()
            if (r0 == 0) goto L9b
            java.lang.String r0 = r4.a
            java.lang.String r5 = r5.a
            int r5 = com.xiaomi.push.iv.a(r0, r5)
            if (r5 == 0) goto L9b
            return r5
        L9b:
            r5 = 0
            return r5
    }

    public com.xiaomi.push.hr a(long r1) {
            r0 = this;
            r0.a = r1
            r1 = 1
            r0.a(r1)
            return r0
    }

    public com.xiaomi.push.hr a(com.xiaomi.push.hl r1) {
            r0 = this;
            r0.a = r1
            return r0
    }

    public com.xiaomi.push.hr a(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public void a() {
            r3 = this;
            com.xiaomi.push.hl r0 = r3.a
            if (r0 == 0) goto L24
            java.lang.String r0 = r3.a
            if (r0 == 0) goto L9
            return
        L9:
            com.xiaomi.push.jg r0 = new com.xiaomi.push.jg
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Required field 'content' was not present! Struct: "
            r1.append(r2)
            java.lang.String r2 = r3.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L24:
            com.xiaomi.push.jg r0 = new com.xiaomi.push.jg
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Required field 'collectionType' was not present! Struct: "
            r1.append(r2)
            java.lang.String r2 = r3.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void a(com.xiaomi.push.jf r5) {
            r4 = this;
            r5.a()
        L3:
            com.xiaomi.push.jc r0 = r5.a()
            byte r1 = r0.a
            if (r1 != 0) goto L33
            r5.f()
            boolean r5 = r4.a()
            if (r5 == 0) goto L18
            r4.a()
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
            short r1 = r0.a
            r2 = 1
            if (r1 == r2) goto L62
            r2 = 2
            if (r1 == r2) goto L51
            r2 = 3
            if (r1 == r2) goto L44
        L3e:
            byte r0 = r0.a
            com.xiaomi.push.ji.a(r5, r0)
            goto L71
        L44:
            byte r1 = r0.a
            r2 = 11
            if (r1 != r2) goto L3e
            java.lang.String r0 = r5.a()
            r4.a = r0
            goto L71
        L51:
            byte r1 = r0.a
            r2 = 8
            if (r1 != r2) goto L3e
            int r0 = r5.a()
            com.xiaomi.push.hl r0 = com.xiaomi.push.hl.a(r0)
            r4.a = r0
            goto L71
        L62:
            byte r1 = r0.a
            r3 = 10
            if (r1 != r3) goto L3e
            long r0 = r5.a()
            r4.a = r0
            r4.a(r2)
        L71:
            r5.g()
            goto L3
    }

    public void a(boolean r3) {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 0
            r0.set(r1, r3)
            return
    }

    public boolean a() {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 0
            boolean r0 = r0.get(r1)
            return r0
    }

    public boolean a(com.xiaomi.push.hr r6) {
            r5 = this;
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            long r1 = r5.a
            long r3 = r6.a
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto Ld
            return r0
        Ld:
            boolean r1 = r5.b()
            boolean r2 = r6.b()
            if (r1 != 0) goto L19
            if (r2 == 0) goto L29
        L19:
            if (r1 == 0) goto L47
            if (r2 != 0) goto L1e
            goto L47
        L1e:
            com.xiaomi.push.hl r1 = r5.a
            com.xiaomi.push.hl r2 = r6.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L29
            return r0
        L29:
            boolean r1 = r5.c()
            boolean r2 = r6.c()
            if (r1 != 0) goto L35
            if (r2 == 0) goto L45
        L35:
            if (r1 == 0) goto L47
            if (r2 != 0) goto L3a
            goto L47
        L3a:
            java.lang.String r1 = r5.a
            java.lang.String r6 = r6.a
            boolean r6 = r1.equals(r6)
            if (r6 != 0) goto L45
            return r0
        L45:
            r6 = 1
            return r6
        L47:
            return r0
    }

    @Override
    public void b(com.xiaomi.push.jf r3) {
            r2 = this;
            r2.a()
            com.xiaomi.push.jk r0 = com.xiaomi.push.hr.a
            r3.a(r0)
            com.xiaomi.push.jc r0 = com.xiaomi.push.hr.a
            r3.a(r0)
            long r0 = r2.a
            r3.a(r0)
            r3.b()
            com.xiaomi.push.hl r0 = r2.a
            if (r0 == 0) goto L2a
            com.xiaomi.push.jc r0 = com.xiaomi.push.hr.b
            r3.a(r0)
            com.xiaomi.push.hl r0 = r2.a
            int r0 = r0.a()
            r3.a(r0)
            r3.b()
        L2a:
            java.lang.String r0 = r2.a
            if (r0 == 0) goto L3b
            com.xiaomi.push.jc r0 = com.xiaomi.push.hr.c
            r3.a(r0)
            java.lang.String r0 = r2.a
            r3.a(r0)
            r3.b()
        L3b:
            r3.c()
            r3.a()
            return
    }

    public boolean b() {
            r1 = this;
            com.xiaomi.push.hl r0 = r1.a
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean c() {
            r1 = this;
            java.lang.String r0 = r1.a
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    @Override
    public int compareTo(java.lang.Object r1) {
            r0 = this;
            com.xiaomi.push.hr r1 = (com.xiaomi.push.hr) r1
            int r1 = r0.a(r1)
            return r1
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3 instanceof com.xiaomi.push.hr
            if (r1 == 0) goto Lf
            com.xiaomi.push.hr r3 = (com.xiaomi.push.hr) r3
            boolean r3 = r2.a(r3)
            return r3
        Lf:
            return r0
    }

    public int hashCode() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "DataCollectionItem("
            r0.<init>(r1)
            java.lang.String r1 = "collectedAt:"
            r0.append(r1)
            long r1 = r4.a
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            java.lang.String r2 = "collectionType:"
            r0.append(r2)
            com.xiaomi.push.hl r2 = r4.a
            java.lang.String r3 = "null"
            if (r2 != 0) goto L25
            r0.append(r3)
            goto L28
        L25:
            r0.append(r2)
        L28:
            r0.append(r1)
            java.lang.String r1 = "content:"
            r0.append(r1)
            java.lang.String r1 = r4.a
            if (r1 != 0) goto L38
            r0.append(r3)
            goto L3b
        L38:
            r0.append(r1)
        L3b:
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
