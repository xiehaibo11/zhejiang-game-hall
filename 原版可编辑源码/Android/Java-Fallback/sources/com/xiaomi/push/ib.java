package com.xiaomi.push;

public class ib implements com.xiaomi.push.iu<com.xiaomi.push.ib, java.lang.Object>, java.io.Serializable, java.lang.Cloneable {
    private static final com.xiaomi.push.jc a = null;
    private static final com.xiaomi.push.jk a = null;
    private static final com.xiaomi.push.jc b = null;
    public int a;
    private java.util.BitSet a;
    public int b;

    static {
            com.xiaomi.push.jk r0 = new com.xiaomi.push.jk
            java.lang.String r1 = "XmPushActionCheckClientInfo"
            r0.<init>(r1)
            com.xiaomi.push.ib.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 8
            java.lang.String r2 = ""
            r3 = 1
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.ib.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 2
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.ib.b = r0
            return
    }

    public ib() {
            r2 = this;
            r2.<init>()
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 2
            r0.<init>(r1)
            r2.a = r0
            return
    }

    public int a(com.xiaomi.push.ib r3) {
            r2 = this;
            java.lang.Class r0 = r2.getClass()
            java.lang.Class r1 = r3.getClass()
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L23
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getName()
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            int r3 = r0.compareTo(r3)
            return r3
        L23:
            boolean r0 = r2.a()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r3.a()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L3a
            return r0
        L3a:
            boolean r0 = r2.a()
            if (r0 == 0) goto L4b
            int r0 = r2.a
            int r1 = r3.a
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L4b
            return r0
        L4b:
            boolean r0 = r2.b()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r3.b()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L62
            return r0
        L62:
            boolean r0 = r2.b()
            if (r0 == 0) goto L73
            int r0 = r2.b
            int r3 = r3.b
            int r3 = com.xiaomi.push.iv.a(r0, r3)
            if (r3 == 0) goto L73
            return r3
        L73:
            r3 = 0
            return r3
    }

    public com.xiaomi.push.ib a(int r1) {
            r0 = this;
            r0.a = r1
            r1 = 1
            r0.a(r1)
            return r0
    }

    public void a() {
            r0 = this;
            return
    }

    @Override
    public void a(com.xiaomi.push.jf r6) {
            r5 = this;
            r6.a()
        L3:
            com.xiaomi.push.jc r0 = r6.a()
            byte r1 = r0.a
            if (r1 != 0) goto L54
            r6.f()
            boolean r6 = r5.a()
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
            short r1 = r0.a
            r2 = 8
            r3 = 1
            if (r1 == r3) goto L72
            r4 = 2
            if (r1 == r4) goto L64
        L5e:
            byte r0 = r0.a
            com.xiaomi.push.ji.a(r6, r0)
            goto L7f
        L64:
            byte r1 = r0.a
            if (r1 != r2) goto L5e
            int r0 = r6.a()
            r5.b = r0
            r5.b(r3)
            goto L7f
        L72:
            byte r1 = r0.a
            if (r1 != r2) goto L5e
            int r0 = r6.a()
            r5.a = r0
            r5.a(r3)
        L7f:
            r6.g()
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

    public boolean a(com.xiaomi.push.ib r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            int r1 = r3.a
            int r2 = r4.a
            if (r1 == r2) goto Lb
            return r0
        Lb:
            int r1 = r3.b
            int r4 = r4.b
            if (r1 == r4) goto L12
            return r0
        L12:
            r4 = 1
            return r4
    }

    public com.xiaomi.push.ib b(int r1) {
            r0 = this;
            r0.b = r1
            r1 = 1
            r0.b(r1)
            return r0
    }

    @Override
    public void b(com.xiaomi.push.jf r2) {
            r1 = this;
            r1.a()
            com.xiaomi.push.jk r0 = com.xiaomi.push.ib.a
            r2.a(r0)
            com.xiaomi.push.jc r0 = com.xiaomi.push.ib.a
            r2.a(r0)
            int r0 = r1.a
            r2.a(r0)
            r2.b()
            com.xiaomi.push.jc r0 = com.xiaomi.push.ib.b
            r2.a(r0)
            int r0 = r1.b
            r2.a(r0)
            r2.b()
            r2.c()
            r2.a()
            return
    }

    public void b(boolean r3) {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 1
            r0.set(r1, r3)
            return
    }

    public boolean b() {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 1
            boolean r0 = r0.get(r1)
            return r0
    }

    @Override
    public int compareTo(java.lang.Object r1) {
            r0 = this;
            com.xiaomi.push.ib r1 = (com.xiaomi.push.ib) r1
            int r1 = r0.a(r1)
            return r1
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3 instanceof com.xiaomi.push.ib
            if (r1 == 0) goto Lf
            com.xiaomi.push.ib r3 = (com.xiaomi.push.ib) r3
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
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "XmPushActionCheckClientInfo("
            r0.<init>(r1)
            java.lang.String r1 = "miscConfigVersion:"
            r0.append(r1)
            int r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            java.lang.String r1 = "pluginConfigVersion:"
            r0.append(r1)
            int r1 = r2.b
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
