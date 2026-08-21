package com.xiaomi.push;

public class fa implements com.xiaomi.push.iu<com.xiaomi.push.fa, java.lang.Object>, java.io.Serializable, java.lang.Cloneable {
    private static final com.xiaomi.push.jc a = null;
    private static final com.xiaomi.push.jk a = null;
    private static final com.xiaomi.push.jc b = null;
    private static final com.xiaomi.push.jc c = null;
    private static final com.xiaomi.push.jc d = null;
    private static final com.xiaomi.push.jc e = null;
    private static final com.xiaomi.push.jc f = null;
    private static final com.xiaomi.push.jc g = null;
    private static final com.xiaomi.push.jc h = null;
    private static final com.xiaomi.push.jc i = null;
    private static final com.xiaomi.push.jc j = null;
    public byte a;
    public int a;
    public java.lang.String a;
    private java.util.BitSet a;
    public int b;
    public java.lang.String b;
    public int c;
    public java.lang.String c;
    public int d;
    public java.lang.String d;
    public int e;

    static {
            com.xiaomi.push.jk r0 = new com.xiaomi.push.jk
            java.lang.String r1 = "StatsEvent"
            r0.<init>(r1)
            com.xiaomi.push.fa.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 3
            java.lang.String r2 = ""
            r3 = 1
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.fa.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 8
            r4 = 2
            r0.<init>(r2, r3, r4)
            com.xiaomi.push.fa.b = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r0.<init>(r2, r3, r1)
            com.xiaomi.push.fa.c = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 11
            r4 = 4
            r0.<init>(r2, r1, r4)
            com.xiaomi.push.fa.d = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r4 = 5
            r0.<init>(r2, r1, r4)
            com.xiaomi.push.fa.e = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r4 = 6
            r0.<init>(r2, r3, r4)
            com.xiaomi.push.fa.f = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r4 = 7
            r0.<init>(r2, r1, r4)
            com.xiaomi.push.fa.g = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.fa.h = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 9
            r0.<init>(r2, r3, r1)
            com.xiaomi.push.fa.i = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 10
            r0.<init>(r2, r3, r1)
            com.xiaomi.push.fa.j = r0
            return
    }

    public fa() {
            r2 = this;
            r2.<init>()
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 6
            r0.<init>(r1)
            r2.a = r0
            return
    }

    public int a(com.xiaomi.push.fa r3) {
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
            byte r0 = r2.a
            byte r1 = r3.a
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
            int r0 = r2.a
            int r1 = r3.a
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
            int r0 = r2.b
            int r1 = r3.b
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L9b
            return r0
        L9b:
            boolean r0 = r2.d()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r3.d()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto Lb2
            return r0
        Lb2:
            boolean r0 = r2.d()
            if (r0 == 0) goto Lc3
            java.lang.String r0 = r2.a
            java.lang.String r1 = r3.a
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto Lc3
            return r0
        Lc3:
            boolean r0 = r2.e()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r3.e()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto Lda
            return r0
        Lda:
            boolean r0 = r2.e()
            if (r0 == 0) goto Leb
            java.lang.String r0 = r2.b
            java.lang.String r1 = r3.b
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto Leb
            return r0
        Leb:
            boolean r0 = r2.f()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r3.f()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L102
            return r0
        L102:
            boolean r0 = r2.f()
            if (r0 == 0) goto L113
            int r0 = r2.c
            int r1 = r3.c
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L113
            return r0
        L113:
            boolean r0 = r2.g()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r3.g()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L12a
            return r0
        L12a:
            boolean r0 = r2.g()
            if (r0 == 0) goto L13b
            java.lang.String r0 = r2.c
            java.lang.String r1 = r3.c
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L13b
            return r0
        L13b:
            boolean r0 = r2.h()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r3.h()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L152
            return r0
        L152:
            boolean r0 = r2.h()
            if (r0 == 0) goto L163
            java.lang.String r0 = r2.d
            java.lang.String r1 = r3.d
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L163
            return r0
        L163:
            boolean r0 = r2.i()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r3.i()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L17a
            return r0
        L17a:
            boolean r0 = r2.i()
            if (r0 == 0) goto L18b
            int r0 = r2.d
            int r1 = r3.d
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L18b
            return r0
        L18b:
            boolean r0 = r2.j()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r3.j()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L1a2
            return r0
        L1a2:
            boolean r0 = r2.j()
            if (r0 == 0) goto L1b3
            int r0 = r2.e
            int r3 = r3.e
            int r3 = com.xiaomi.push.iv.a(r0, r3)
            if (r3 == 0) goto L1b3
            return r3
        L1b3:
            r3 = 0
            return r3
    }

    public com.xiaomi.push.fa a(byte r1) {
            r0 = this;
            r0.a = r1
            r1 = 1
            r0.a(r1)
            return r0
    }

    public com.xiaomi.push.fa a(int r1) {
            r0 = this;
            r0.a = r1
            r1 = 1
            r0.b(r1)
            return r0
    }

    public com.xiaomi.push.fa a(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return r0
    }

    public void a() {
            r3 = this;
            java.lang.String r0 = r3.a
            if (r0 == 0) goto L5
            return
        L5:
            com.xiaomi.push.jg r0 = new com.xiaomi.push.jg
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Required field 'connpt' was not present! Struct: "
            r1.append(r2)
            java.lang.String r2 = r3.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void a(com.xiaomi.push.jf r6) {
            r5 = this;
            r6.a()
        L3:
            com.xiaomi.push.jc r0 = r6.a()
            byte r1 = r0.a
            if (r1 != 0) goto L75
            r6.f()
            boolean r6 = r5.a()
            if (r6 == 0) goto L5a
            boolean r6 = r5.b()
            if (r6 == 0) goto L3f
            boolean r6 = r5.c()
            if (r6 == 0) goto L24
            r5.a()
            return
        L24:
            com.xiaomi.push.jg r6 = new com.xiaomi.push.jg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Required field 'value' was not found in serialized data! Struct: "
            r0.append(r1)
            java.lang.String r1 = r5.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            throw r6
        L3f:
            com.xiaomi.push.jg r6 = new com.xiaomi.push.jg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Required field 'type' was not found in serialized data! Struct: "
            r0.append(r1)
            java.lang.String r1 = r5.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            throw r6
        L5a:
            com.xiaomi.push.jg r6 = new com.xiaomi.push.jg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Required field 'chid' was not found in serialized data! Struct: "
            r0.append(r1)
            java.lang.String r1 = r5.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            throw r6
        L75:
            short r1 = r0.a
            r2 = 11
            r3 = 8
            r4 = 1
            switch(r1) {
                case 1: goto Lf9;
                case 2: goto Leb;
                case 3: goto Ldd;
                case 4: goto Ld2;
                case 5: goto Lc7;
                case 6: goto Lb9;
                case 7: goto Lae;
                case 8: goto La3;
                case 9: goto L95;
                case 10: goto L86;
                default: goto L7f;
            }
        L7f:
            byte r0 = r0.a
            com.xiaomi.push.ji.a(r6, r0)
            goto L107
        L86:
            byte r1 = r0.a
            if (r1 != r3) goto L7f
            int r0 = r6.a()
            r5.e = r0
            r5.f(r4)
            goto L107
        L95:
            byte r1 = r0.a
            if (r1 != r3) goto L7f
            int r0 = r6.a()
            r5.d = r0
            r5.e(r4)
            goto L107
        La3:
            byte r1 = r0.a
            if (r1 != r2) goto L7f
            java.lang.String r0 = r6.a()
            r5.d = r0
            goto L107
        Lae:
            byte r1 = r0.a
            if (r1 != r2) goto L7f
            java.lang.String r0 = r6.a()
            r5.c = r0
            goto L107
        Lb9:
            byte r1 = r0.a
            if (r1 != r3) goto L7f
            int r0 = r6.a()
            r5.c = r0
            r5.d(r4)
            goto L107
        Lc7:
            byte r1 = r0.a
            if (r1 != r2) goto L7f
            java.lang.String r0 = r6.a()
            r5.b = r0
            goto L107
        Ld2:
            byte r1 = r0.a
            if (r1 != r2) goto L7f
            java.lang.String r0 = r6.a()
            r5.a = r0
            goto L107
        Ldd:
            byte r1 = r0.a
            if (r1 != r3) goto L7f
            int r0 = r6.a()
            r5.b = r0
            r5.c(r4)
            goto L107
        Leb:
            byte r1 = r0.a
            if (r1 != r3) goto L7f
            int r0 = r6.a()
            r5.a = r0
            r5.b(r4)
            goto L107
        Lf9:
            byte r1 = r0.a
            r2 = 3
            if (r1 != r2) goto L7f
            byte r0 = r6.a()
            r5.a = r0
            r5.a(r4)
        L107:
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

    public boolean a(com.xiaomi.push.fa r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            byte r1 = r3.a
            byte r2 = r4.a
            if (r1 == r2) goto Lb
            return r0
        Lb:
            int r1 = r3.a
            int r2 = r4.a
            if (r1 == r2) goto L12
            return r0
        L12:
            int r1 = r3.b
            int r2 = r4.b
            if (r1 == r2) goto L19
            return r0
        L19:
            boolean r1 = r3.d()
            boolean r2 = r4.d()
            if (r1 != 0) goto L25
            if (r2 == 0) goto L36
        L25:
            if (r1 == 0) goto Ld6
            if (r2 != 0) goto L2b
            goto Ld6
        L2b:
            java.lang.String r1 = r3.a
            java.lang.String r2 = r4.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L36
            return r0
        L36:
            boolean r1 = r3.e()
            boolean r2 = r4.e()
            if (r1 != 0) goto L42
            if (r2 == 0) goto L53
        L42:
            if (r1 == 0) goto Ld6
            if (r2 != 0) goto L48
            goto Ld6
        L48:
            java.lang.String r1 = r3.b
            java.lang.String r2 = r4.b
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L53
            return r0
        L53:
            boolean r1 = r3.f()
            boolean r2 = r4.f()
            if (r1 != 0) goto L5f
            if (r2 == 0) goto L6c
        L5f:
            if (r1 == 0) goto Ld6
            if (r2 != 0) goto L65
            goto Ld6
        L65:
            int r1 = r3.c
            int r2 = r4.c
            if (r1 == r2) goto L6c
            return r0
        L6c:
            boolean r1 = r3.g()
            boolean r2 = r4.g()
            if (r1 != 0) goto L78
            if (r2 == 0) goto L88
        L78:
            if (r1 == 0) goto Ld6
            if (r2 != 0) goto L7d
            goto Ld6
        L7d:
            java.lang.String r1 = r3.c
            java.lang.String r2 = r4.c
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L88
            return r0
        L88:
            boolean r1 = r3.h()
            boolean r2 = r4.h()
            if (r1 != 0) goto L94
            if (r2 == 0) goto La4
        L94:
            if (r1 == 0) goto Ld6
            if (r2 != 0) goto L99
            goto Ld6
        L99:
            java.lang.String r1 = r3.d
            java.lang.String r2 = r4.d
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto La4
            return r0
        La4:
            boolean r1 = r3.i()
            boolean r2 = r4.i()
            if (r1 != 0) goto Lb0
            if (r2 == 0) goto Lbc
        Lb0:
            if (r1 == 0) goto Ld6
            if (r2 != 0) goto Lb5
            goto Ld6
        Lb5:
            int r1 = r3.d
            int r2 = r4.d
            if (r1 == r2) goto Lbc
            return r0
        Lbc:
            boolean r1 = r3.j()
            boolean r2 = r4.j()
            if (r1 != 0) goto Lc8
            if (r2 == 0) goto Ld4
        Lc8:
            if (r1 == 0) goto Ld6
            if (r2 != 0) goto Lcd
            goto Ld6
        Lcd:
            int r1 = r3.e
            int r4 = r4.e
            if (r1 == r4) goto Ld4
            return r0
        Ld4:
            r4 = 1
            return r4
        Ld6:
            return r0
    }

    public com.xiaomi.push.fa b(int r1) {
            r0 = this;
            r0.b = r1
            r1 = 1
            r0.c(r1)
            return r0
    }

    public com.xiaomi.push.fa b(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return r0
    }

    @Override
    public void b(com.xiaomi.push.jf r2) {
            r1 = this;
            r1.a()
            com.xiaomi.push.jk r0 = com.xiaomi.push.fa.a
            r2.a(r0)
            com.xiaomi.push.jc r0 = com.xiaomi.push.fa.a
            r2.a(r0)
            byte r0 = r1.a
            r2.a(r0)
            r2.b()
            com.xiaomi.push.jc r0 = com.xiaomi.push.fa.b
            r2.a(r0)
            int r0 = r1.a
            r2.a(r0)
            r2.b()
            com.xiaomi.push.jc r0 = com.xiaomi.push.fa.c
            r2.a(r0)
            int r0 = r1.b
            r2.a(r0)
            r2.b()
            java.lang.String r0 = r1.a
            if (r0 == 0) goto L40
            com.xiaomi.push.jc r0 = com.xiaomi.push.fa.d
            r2.a(r0)
            java.lang.String r0 = r1.a
            r2.a(r0)
            r2.b()
        L40:
            java.lang.String r0 = r1.b
            if (r0 == 0) goto L57
            boolean r0 = r1.e()
            if (r0 == 0) goto L57
            com.xiaomi.push.jc r0 = com.xiaomi.push.fa.e
            r2.a(r0)
            java.lang.String r0 = r1.b
            r2.a(r0)
            r2.b()
        L57:
            boolean r0 = r1.f()
            if (r0 == 0) goto L6a
            com.xiaomi.push.jc r0 = com.xiaomi.push.fa.f
            r2.a(r0)
            int r0 = r1.c
            r2.a(r0)
            r2.b()
        L6a:
            java.lang.String r0 = r1.c
            if (r0 == 0) goto L81
            boolean r0 = r1.g()
            if (r0 == 0) goto L81
            com.xiaomi.push.jc r0 = com.xiaomi.push.fa.g
            r2.a(r0)
            java.lang.String r0 = r1.c
            r2.a(r0)
            r2.b()
        L81:
            java.lang.String r0 = r1.d
            if (r0 == 0) goto L98
            boolean r0 = r1.h()
            if (r0 == 0) goto L98
            com.xiaomi.push.jc r0 = com.xiaomi.push.fa.h
            r2.a(r0)
            java.lang.String r0 = r1.d
            r2.a(r0)
            r2.b()
        L98:
            boolean r0 = r1.i()
            if (r0 == 0) goto Lab
            com.xiaomi.push.jc r0 = com.xiaomi.push.fa.i
            r2.a(r0)
            int r0 = r1.d
            r2.a(r0)
            r2.b()
        Lab:
            boolean r0 = r1.j()
            if (r0 == 0) goto Lbe
            com.xiaomi.push.jc r0 = com.xiaomi.push.fa.j
            r2.a(r0)
            int r0 = r1.e
            r2.a(r0)
            r2.b()
        Lbe:
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

    public com.xiaomi.push.fa c(int r1) {
            r0 = this;
            r0.c = r1
            r1 = 1
            r0.d(r1)
            return r0
    }

    public com.xiaomi.push.fa c(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return r0
    }

    public void c(boolean r3) {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 2
            r0.set(r1, r3)
            return
    }

    public boolean c() {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 2
            boolean r0 = r0.get(r1)
            return r0
    }

    @Override
    public int compareTo(java.lang.Object r1) {
            r0 = this;
            com.xiaomi.push.fa r1 = (com.xiaomi.push.fa) r1
            int r1 = r0.a(r1)
            return r1
    }

    public com.xiaomi.push.fa d(int r1) {
            r0 = this;
            r0.d = r1
            r1 = 1
            r0.e(r1)
            return r0
    }

    public com.xiaomi.push.fa d(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return r0
    }

    public void d(boolean r3) {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 3
            r0.set(r1, r3)
            return
    }

    public boolean d() {
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

    public void e(boolean r3) {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 4
            r0.set(r1, r3)
            return
    }

    public boolean e() {
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

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3 instanceof com.xiaomi.push.fa
            if (r1 == 0) goto Lf
            com.xiaomi.push.fa r3 = (com.xiaomi.push.fa) r3
            boolean r3 = r2.a(r3)
            return r3
        Lf:
            return r0
    }

    public void f(boolean r3) {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 5
            r0.set(r1, r3)
            return
    }

    public boolean f() {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 3
            boolean r0 = r0.get(r1)
            return r0
    }

    public boolean g() {
            r1 = this;
            java.lang.String r0 = r1.c
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean h() {
            r1 = this;
            java.lang.String r0 = r1.d
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public int hashCode() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean i() {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 4
            boolean r0 = r0.get(r1)
            return r0
    }

    public boolean j() {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 5
            boolean r0 = r0.get(r1)
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "StatsEvent("
            r0.<init>(r1)
            java.lang.String r1 = "chid:"
            r0.append(r1)
            byte r1 = r4.a
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            java.lang.String r2 = "type:"
            r0.append(r2)
            int r2 = r4.a
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "value:"
            r0.append(r2)
            int r2 = r4.b
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "connpt:"
            r0.append(r2)
            java.lang.String r2 = r4.a
            java.lang.String r3 = "null"
            if (r2 != 0) goto L3f
            r0.append(r3)
            goto L42
        L3f:
            r0.append(r2)
        L42:
            boolean r2 = r4.e()
            if (r2 == 0) goto L5b
            r0.append(r1)
            java.lang.String r2 = "host:"
            r0.append(r2)
            java.lang.String r2 = r4.b
            if (r2 != 0) goto L58
            r0.append(r3)
            goto L5b
        L58:
            r0.append(r2)
        L5b:
            boolean r2 = r4.f()
            if (r2 == 0) goto L6e
            r0.append(r1)
            java.lang.String r2 = "subvalue:"
            r0.append(r2)
            int r2 = r4.c
            r0.append(r2)
        L6e:
            boolean r2 = r4.g()
            if (r2 == 0) goto L87
            r0.append(r1)
            java.lang.String r2 = "annotation:"
            r0.append(r2)
            java.lang.String r2 = r4.c
            if (r2 != 0) goto L84
            r0.append(r3)
            goto L87
        L84:
            r0.append(r2)
        L87:
            boolean r2 = r4.h()
            if (r2 == 0) goto La0
            r0.append(r1)
            java.lang.String r2 = "user:"
            r0.append(r2)
            java.lang.String r2 = r4.d
            if (r2 != 0) goto L9d
            r0.append(r3)
            goto La0
        L9d:
            r0.append(r2)
        La0:
            boolean r2 = r4.i()
            if (r2 == 0) goto Lb3
            r0.append(r1)
            java.lang.String r2 = "time:"
            r0.append(r2)
            int r2 = r4.d
            r0.append(r2)
        Lb3:
            boolean r2 = r4.j()
            if (r2 == 0) goto Lc6
            r0.append(r1)
            java.lang.String r1 = "clientIp:"
            r0.append(r1)
            int r1 = r4.e
            r0.append(r1)
        Lc6:
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
