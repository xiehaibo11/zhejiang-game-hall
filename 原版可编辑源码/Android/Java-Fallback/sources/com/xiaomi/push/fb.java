package com.xiaomi.push;

public class fb implements com.xiaomi.push.iu<com.xiaomi.push.fb, java.lang.Object>, java.io.Serializable, java.lang.Cloneable {
    private static final com.xiaomi.push.jc a = null;
    private static final com.xiaomi.push.jk a = null;
    private static final com.xiaomi.push.jc b = null;
    private static final com.xiaomi.push.jc c = null;
    public java.lang.String a;
    public java.util.List<com.xiaomi.push.fa> a;
    public java.lang.String b;

    static {
            com.xiaomi.push.jk r0 = new com.xiaomi.push.jk
            java.lang.String r1 = "StatsEvents"
            r0.<init>(r1)
            com.xiaomi.push.fb.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 11
            java.lang.String r2 = ""
            r3 = 1
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.fb.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 2
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.fb.b = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 15
            r3 = 3
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.fb.c = r0
            return
    }

    public fb() {
            r0 = this;
            r0.<init>()
            return
    }

    public fb(java.lang.String r1, java.util.List<com.xiaomi.push.fa> r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.a = r2
            return
    }

    public int a(com.xiaomi.push.fb r3) {
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
            java.lang.String r0 = r2.a
            java.lang.String r1 = r3.a
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
            java.lang.String r0 = r2.b
            java.lang.String r1 = r3.b
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L73
            return r0
        L73:
            boolean r0 = r2.c()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r3.c()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L8a
            return r0
        L8a:
            boolean r0 = r2.c()
            if (r0 == 0) goto L9b
            java.util.List<com.xiaomi.push.fa> r0 = r2.a
            java.util.List<com.xiaomi.push.fa> r3 = r3.a
            int r3 = com.xiaomi.push.iv.a(r0, r3)
            if (r3 == 0) goto L9b
            return r3
        L9b:
            r3 = 0
            return r3
    }

    public com.xiaomi.push.fb a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return r0
    }

    public void a() {
            r3 = this;
            java.lang.String r0 = r3.a
            if (r0 == 0) goto L24
            java.util.List<com.xiaomi.push.fa> r0 = r3.a
            if (r0 == 0) goto L9
            return
        L9:
            com.xiaomi.push.jg r0 = new com.xiaomi.push.jg
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Required field 'events' was not present! Struct: "
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
            java.lang.String r2 = "Required field 'uuid' was not present! Struct: "
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
            if (r1 != 0) goto L12
            r5.f()
            r4.a()
            return
        L12:
            short r1 = r0.a
            r2 = 11
            r3 = 1
            if (r1 == r3) goto L5c
            r3 = 2
            if (r1 == r3) goto L51
            r2 = 3
            if (r1 == r2) goto L25
        L1f:
            byte r0 = r0.a
            com.xiaomi.push.ji.a(r5, r0)
            goto L66
        L25:
            byte r1 = r0.a
            r2 = 15
            if (r1 != r2) goto L1f
            com.xiaomi.push.jd r0 = r5.a()
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.a
            r1.<init>(r2)
            r4.a = r1
            r1 = 0
        L39:
            int r2 = r0.a
            if (r1 >= r2) goto L4d
            com.xiaomi.push.fa r2 = new com.xiaomi.push.fa
            r2.<init>()
            r2.a(r5)
            java.util.List<com.xiaomi.push.fa> r3 = r4.a
            r3.add(r2)
            int r1 = r1 + 1
            goto L39
        L4d:
            r5.i()
            goto L66
        L51:
            byte r1 = r0.a
            if (r1 != r2) goto L1f
            java.lang.String r0 = r5.a()
            r4.b = r0
            goto L66
        L5c:
            byte r1 = r0.a
            if (r1 != r2) goto L1f
            java.lang.String r0 = r5.a()
            r4.a = r0
        L66:
            r5.g()
            goto L3
    }

    public boolean a() {
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

    public boolean a(com.xiaomi.push.fb r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3.a()
            boolean r2 = r4.a()
            if (r1 != 0) goto L10
            if (r2 == 0) goto L20
        L10:
            if (r1 == 0) goto L5a
            if (r2 != 0) goto L15
            goto L5a
        L15:
            java.lang.String r1 = r3.a
            java.lang.String r2 = r4.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L20
            return r0
        L20:
            boolean r1 = r3.b()
            boolean r2 = r4.b()
            if (r1 != 0) goto L2c
            if (r2 == 0) goto L3c
        L2c:
            if (r1 == 0) goto L5a
            if (r2 != 0) goto L31
            goto L5a
        L31:
            java.lang.String r1 = r3.b
            java.lang.String r2 = r4.b
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L3c
            return r0
        L3c:
            boolean r1 = r3.c()
            boolean r2 = r4.c()
            if (r1 != 0) goto L48
            if (r2 == 0) goto L58
        L48:
            if (r1 == 0) goto L5a
            if (r2 != 0) goto L4d
            goto L5a
        L4d:
            java.util.List<com.xiaomi.push.fa> r1 = r3.a
            java.util.List<com.xiaomi.push.fa> r4 = r4.a
            boolean r4 = r1.equals(r4)
            if (r4 != 0) goto L58
            return r0
        L58:
            r4 = 1
            return r4
        L5a:
            return r0
    }

    @Override
    public void b(com.xiaomi.push.jf r4) {
            r3 = this;
            r3.a()
            com.xiaomi.push.jk r0 = com.xiaomi.push.fb.a
            r4.a(r0)
            java.lang.String r0 = r3.a
            if (r0 == 0) goto L19
            com.xiaomi.push.jc r0 = com.xiaomi.push.fb.a
            r4.a(r0)
            java.lang.String r0 = r3.a
            r4.a(r0)
            r4.b()
        L19:
            java.lang.String r0 = r3.b
            if (r0 == 0) goto L30
            boolean r0 = r3.b()
            if (r0 == 0) goto L30
            com.xiaomi.push.jc r0 = com.xiaomi.push.fb.b
            r4.a(r0)
            java.lang.String r0 = r3.b
            r4.a(r0)
            r4.b()
        L30:
            java.util.List<com.xiaomi.push.fa> r0 = r3.a
            if (r0 == 0) goto L65
            com.xiaomi.push.jc r0 = com.xiaomi.push.fb.c
            r4.a(r0)
            com.xiaomi.push.jd r0 = new com.xiaomi.push.jd
            r1 = 12
            java.util.List<com.xiaomi.push.fa> r2 = r3.a
            int r2 = r2.size()
            r0.<init>(r1, r2)
            r4.a(r0)
            java.util.List<com.xiaomi.push.fa> r0 = r3.a
            java.util.Iterator r0 = r0.iterator()
        L4f:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L5f
            java.lang.Object r1 = r0.next()
            com.xiaomi.push.fa r1 = (com.xiaomi.push.fa) r1
            r1.b(r4)
            goto L4f
        L5f:
            r4.e()
            r4.b()
        L65:
            r4.c()
            r4.a()
            return
    }

    public boolean b() {
            r1 = this;
            java.lang.String r0 = r1.b
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
            java.util.List<com.xiaomi.push.fa> r0 = r1.a
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
            com.xiaomi.push.fb r1 = (com.xiaomi.push.fb) r1
            int r1 = r0.a(r1)
            return r1
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3 instanceof com.xiaomi.push.fb
            if (r1 == 0) goto Lf
            com.xiaomi.push.fb r3 = (com.xiaomi.push.fb) r3
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
            java.lang.String r1 = "StatsEvents("
            r0.<init>(r1)
            java.lang.String r1 = "uuid:"
            r0.append(r1)
            java.lang.String r1 = r4.a
            java.lang.String r2 = "null"
            if (r1 != 0) goto L16
            r0.append(r2)
            goto L19
        L16:
            r0.append(r1)
        L19:
            boolean r1 = r4.b()
            java.lang.String r3 = ", "
            if (r1 == 0) goto L34
            r0.append(r3)
            java.lang.String r1 = "operator:"
            r0.append(r1)
            java.lang.String r1 = r4.b
            if (r1 != 0) goto L31
            r0.append(r2)
            goto L34
        L31:
            r0.append(r1)
        L34:
            r0.append(r3)
            java.lang.String r1 = "events:"
            r0.append(r1)
            java.util.List<com.xiaomi.push.fa> r1 = r4.a
            if (r1 != 0) goto L44
            r0.append(r2)
            goto L47
        L44:
            r0.append(r1)
        L47:
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
