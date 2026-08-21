package com.xiaomi.push;

public class ia implements com.xiaomi.push.iu<com.xiaomi.push.ia, java.lang.Object>, java.io.Serializable, java.lang.Cloneable {
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
    public long a;
    public com.xiaomi.push.hy a;
    public java.lang.String a;
    private java.util.BitSet a;
    public java.util.Map<java.lang.String, java.lang.String> a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public java.lang.String f;
    public java.lang.String g;

    static {
            com.xiaomi.push.jk r0 = new com.xiaomi.push.jk
            java.lang.String r1 = "XmPushActionAckNotification"
            r0.<init>(r1)
            com.xiaomi.push.ia.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 11
            java.lang.String r2 = ""
            r3 = 1
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.ia.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 12
            r4 = 2
            r0.<init>(r2, r3, r4)
            com.xiaomi.push.ia.b = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 3
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.ia.c = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 4
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.ia.d = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 5
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.ia.e = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 10
            r4 = 7
            r0.<init>(r2, r3, r4)
            com.xiaomi.push.ia.f = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r4 = 8
            r0.<init>(r2, r1, r4)
            com.xiaomi.push.ia.g = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r4 = 13
            r5 = 9
            r0.<init>(r2, r4, r5)
            com.xiaomi.push.ia.h = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.ia.i = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r0.<init>(r2, r1, r1)
            com.xiaomi.push.ia.j = r0
            return
    }

    public ia() {
            r2 = this;
            r2.<init>()
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 1
            r0.<init>(r1)
            r2.a = r0
            r0 = 0
            r2.a = r0
            return
    }

    public int a(com.xiaomi.push.ia r5) {
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
            java.lang.String r0 = r4.a
            java.lang.String r1 = r5.a
            int r0 = com.xiaomi.push.iv.a(r0, r1)
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
            com.xiaomi.push.hy r0 = r4.a
            com.xiaomi.push.hy r1 = r5.a
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
            java.lang.String r0 = r4.b
            java.lang.String r1 = r5.b
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L9b
            return r0
        L9b:
            boolean r0 = r4.d()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.d()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto Lb2
            return r0
        Lb2:
            boolean r0 = r4.d()
            if (r0 == 0) goto Lc3
            java.lang.String r0 = r4.c
            java.lang.String r1 = r5.c
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto Lc3
            return r0
        Lc3:
            boolean r0 = r4.e()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.e()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto Lda
            return r0
        Lda:
            boolean r0 = r4.e()
            if (r0 == 0) goto Leb
            java.lang.String r0 = r4.d
            java.lang.String r1 = r5.d
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto Leb
            return r0
        Leb:
            boolean r0 = r4.f()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.f()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L102
            return r0
        L102:
            boolean r0 = r4.f()
            if (r0 == 0) goto L113
            long r0 = r4.a
            long r2 = r5.a
            int r0 = com.xiaomi.push.iv.a(r0, r2)
            if (r0 == 0) goto L113
            return r0
        L113:
            boolean r0 = r4.g()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.g()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L12a
            return r0
        L12a:
            boolean r0 = r4.g()
            if (r0 == 0) goto L13b
            java.lang.String r0 = r4.e
            java.lang.String r1 = r5.e
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L13b
            return r0
        L13b:
            boolean r0 = r4.h()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.h()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L152
            return r0
        L152:
            boolean r0 = r4.h()
            if (r0 == 0) goto L163
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.a
            java.util.Map<java.lang.String, java.lang.String> r1 = r5.a
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L163
            return r0
        L163:
            boolean r0 = r4.i()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.i()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L17a
            return r0
        L17a:
            boolean r0 = r4.i()
            if (r0 == 0) goto L18b
            java.lang.String r0 = r4.f
            java.lang.String r1 = r5.f
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L18b
            return r0
        L18b:
            boolean r0 = r4.j()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.j()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L1a2
            return r0
        L1a2:
            boolean r0 = r4.j()
            if (r0 == 0) goto L1b3
            java.lang.String r0 = r4.g
            java.lang.String r5 = r5.g
            int r5 = com.xiaomi.push.iv.a(r0, r5)
            if (r5 == 0) goto L1b3
            return r5
        L1b3:
            r5 = 0
            return r5
    }

    public com.xiaomi.push.ia a(long r1) {
            r0 = this;
            r0.a = r1
            r1 = 1
            r0.a(r1)
            return r0
    }

    public com.xiaomi.push.ia a(com.xiaomi.push.hy r1) {
            r0 = this;
            r0.a = r1
            return r0
    }

    public com.xiaomi.push.ia a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> a() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.a
            return r0
    }

    public void a() {
            r3 = this;
            java.lang.String r0 = r3.b
            if (r0 == 0) goto L5
            return
        L5:
            com.xiaomi.push.jg r0 = new com.xiaomi.push.jg
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Required field 'id' was not present! Struct: "
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
            if (r1 != 0) goto L12
            r6.f()
            r5.a()
            return
        L12:
            short r1 = r0.a
            r2 = 11
            switch(r1) {
                case 1: goto Lb4;
                case 2: goto La3;
                case 3: goto L98;
                case 4: goto L8d;
                case 5: goto L82;
                case 6: goto L19;
                case 7: goto L71;
                case 8: goto L66;
                case 9: goto L38;
                case 10: goto L2c;
                case 11: goto L20;
                default: goto L19;
            }
        L19:
            byte r0 = r0.a
            com.xiaomi.push.ji.a(r6, r0)
            goto Lbe
        L20:
            byte r1 = r0.a
            if (r1 != r2) goto L19
            java.lang.String r0 = r6.a()
            r5.g = r0
            goto Lbe
        L2c:
            byte r1 = r0.a
            if (r1 != r2) goto L19
            java.lang.String r0 = r6.a()
            r5.f = r0
            goto Lbe
        L38:
            byte r1 = r0.a
            r2 = 13
            if (r1 != r2) goto L19
            com.xiaomi.push.je r0 = r6.a()
            java.util.HashMap r1 = new java.util.HashMap
            int r2 = r0.a
            int r2 = r2 * 2
            r1.<init>(r2)
            r5.a = r1
            r1 = 0
        L4e:
            int r2 = r0.a
            if (r1 >= r2) goto L62
            java.lang.String r2 = r6.a()
            java.lang.String r3 = r6.a()
            java.util.Map<java.lang.String, java.lang.String> r4 = r5.a
            r4.put(r2, r3)
            int r1 = r1 + 1
            goto L4e
        L62:
            r6.h()
            goto Lbe
        L66:
            byte r1 = r0.a
            if (r1 != r2) goto L19
            java.lang.String r0 = r6.a()
            r5.e = r0
            goto Lbe
        L71:
            byte r1 = r0.a
            r2 = 10
            if (r1 != r2) goto L19
            long r0 = r6.a()
            r5.a = r0
            r0 = 1
            r5.a(r0)
            goto Lbe
        L82:
            byte r1 = r0.a
            if (r1 != r2) goto L19
            java.lang.String r0 = r6.a()
            r5.d = r0
            goto Lbe
        L8d:
            byte r1 = r0.a
            if (r1 != r2) goto L19
            java.lang.String r0 = r6.a()
            r5.c = r0
            goto Lbe
        L98:
            byte r1 = r0.a
            if (r1 != r2) goto L19
            java.lang.String r0 = r6.a()
            r5.b = r0
            goto Lbe
        La3:
            byte r1 = r0.a
            r2 = 12
            if (r1 != r2) goto L19
            com.xiaomi.push.hy r0 = new com.xiaomi.push.hy
            r0.<init>()
            r5.a = r0
            r0.a(r6)
            goto Lbe
        Lb4:
            byte r1 = r0.a
            if (r1 != r2) goto L19
            java.lang.String r0 = r6.a()
            r5.a = r0
        Lbe:
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

    public boolean a(com.xiaomi.push.ia r6) {
            r5 = this;
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            boolean r1 = r5.a()
            boolean r2 = r6.a()
            if (r1 != 0) goto L10
            if (r2 == 0) goto L21
        L10:
            if (r1 == 0) goto L122
            if (r2 != 0) goto L16
            goto L122
        L16:
            java.lang.String r1 = r5.a
            java.lang.String r2 = r6.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L21
            return r0
        L21:
            boolean r1 = r5.b()
            boolean r2 = r6.b()
            if (r1 != 0) goto L2d
            if (r2 == 0) goto L3e
        L2d:
            if (r1 == 0) goto L122
            if (r2 != 0) goto L33
            goto L122
        L33:
            com.xiaomi.push.hy r1 = r5.a
            com.xiaomi.push.hy r2 = r6.a
            boolean r1 = r1.a(r2)
            if (r1 != 0) goto L3e
            return r0
        L3e:
            boolean r1 = r5.c()
            boolean r2 = r6.c()
            if (r1 != 0) goto L4a
            if (r2 == 0) goto L5b
        L4a:
            if (r1 == 0) goto L122
            if (r2 != 0) goto L50
            goto L122
        L50:
            java.lang.String r1 = r5.b
            java.lang.String r2 = r6.b
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L5b
            return r0
        L5b:
            boolean r1 = r5.d()
            boolean r2 = r6.d()
            if (r1 != 0) goto L67
            if (r2 == 0) goto L78
        L67:
            if (r1 == 0) goto L122
            if (r2 != 0) goto L6d
            goto L122
        L6d:
            java.lang.String r1 = r5.c
            java.lang.String r2 = r6.c
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L78
            return r0
        L78:
            boolean r1 = r5.e()
            boolean r2 = r6.e()
            if (r1 != 0) goto L84
            if (r2 == 0) goto L95
        L84:
            if (r1 == 0) goto L122
            if (r2 != 0) goto L8a
            goto L122
        L8a:
            java.lang.String r1 = r5.d
            java.lang.String r2 = r6.d
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L95
            return r0
        L95:
            boolean r1 = r5.f()
            boolean r2 = r6.f()
            if (r1 != 0) goto La1
            if (r2 == 0) goto Lb0
        La1:
            if (r1 == 0) goto L122
            if (r2 != 0) goto La7
            goto L122
        La7:
            long r1 = r5.a
            long r3 = r6.a
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto Lb0
            return r0
        Lb0:
            boolean r1 = r5.g()
            boolean r2 = r6.g()
            if (r1 != 0) goto Lbc
            if (r2 == 0) goto Lcc
        Lbc:
            if (r1 == 0) goto L122
            if (r2 != 0) goto Lc1
            goto L122
        Lc1:
            java.lang.String r1 = r5.e
            java.lang.String r2 = r6.e
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto Lcc
            return r0
        Lcc:
            boolean r1 = r5.h()
            boolean r2 = r6.h()
            if (r1 != 0) goto Ld8
            if (r2 == 0) goto Le8
        Ld8:
            if (r1 == 0) goto L122
            if (r2 != 0) goto Ldd
            goto L122
        Ldd:
            java.util.Map<java.lang.String, java.lang.String> r1 = r5.a
            java.util.Map<java.lang.String, java.lang.String> r2 = r6.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto Le8
            return r0
        Le8:
            boolean r1 = r5.i()
            boolean r2 = r6.i()
            if (r1 != 0) goto Lf4
            if (r2 == 0) goto L104
        Lf4:
            if (r1 == 0) goto L122
            if (r2 != 0) goto Lf9
            goto L122
        Lf9:
            java.lang.String r1 = r5.f
            java.lang.String r2 = r6.f
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L104
            return r0
        L104:
            boolean r1 = r5.j()
            boolean r2 = r6.j()
            if (r1 != 0) goto L110
            if (r2 == 0) goto L120
        L110:
            if (r1 == 0) goto L122
            if (r2 != 0) goto L115
            goto L122
        L115:
            java.lang.String r1 = r5.g
            java.lang.String r6 = r6.g
            boolean r6 = r1.equals(r6)
            if (r6 != 0) goto L120
            return r0
        L120:
            r6 = 1
            return r6
        L122:
            return r0
    }

    public com.xiaomi.push.ia b(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    @Override
    public void b(com.xiaomi.push.jf r4) {
            r3 = this;
            r3.a()
            com.xiaomi.push.jk r0 = com.xiaomi.push.ia.a
            r4.a(r0)
            java.lang.String r0 = r3.a
            if (r0 == 0) goto L1f
            boolean r0 = r3.a()
            if (r0 == 0) goto L1f
            com.xiaomi.push.jc r0 = com.xiaomi.push.ia.a
            r4.a(r0)
            java.lang.String r0 = r3.a
            r4.a(r0)
            r4.b()
        L1f:
            com.xiaomi.push.hy r0 = r3.a
            if (r0 == 0) goto L36
            boolean r0 = r3.b()
            if (r0 == 0) goto L36
            com.xiaomi.push.jc r0 = com.xiaomi.push.ia.b
            r4.a(r0)
            com.xiaomi.push.hy r0 = r3.a
            r0.b(r4)
            r4.b()
        L36:
            java.lang.String r0 = r3.b
            if (r0 == 0) goto L47
            com.xiaomi.push.jc r0 = com.xiaomi.push.ia.c
            r4.a(r0)
            java.lang.String r0 = r3.b
            r4.a(r0)
            r4.b()
        L47:
            java.lang.String r0 = r3.c
            if (r0 == 0) goto L5e
            boolean r0 = r3.d()
            if (r0 == 0) goto L5e
            com.xiaomi.push.jc r0 = com.xiaomi.push.ia.d
            r4.a(r0)
            java.lang.String r0 = r3.c
            r4.a(r0)
            r4.b()
        L5e:
            java.lang.String r0 = r3.d
            if (r0 == 0) goto L75
            boolean r0 = r3.e()
            if (r0 == 0) goto L75
            com.xiaomi.push.jc r0 = com.xiaomi.push.ia.e
            r4.a(r0)
            java.lang.String r0 = r3.d
            r4.a(r0)
            r4.b()
        L75:
            boolean r0 = r3.f()
            if (r0 == 0) goto L88
            com.xiaomi.push.jc r0 = com.xiaomi.push.ia.f
            r4.a(r0)
            long r0 = r3.a
            r4.a(r0)
            r4.b()
        L88:
            java.lang.String r0 = r3.e
            if (r0 == 0) goto L9f
            boolean r0 = r3.g()
            if (r0 == 0) goto L9f
            com.xiaomi.push.jc r0 = com.xiaomi.push.ia.g
            r4.a(r0)
            java.lang.String r0 = r3.e
            r4.a(r0)
            r4.b()
        L9f:
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.a
            if (r0 == 0) goto Led
            boolean r0 = r3.h()
            if (r0 == 0) goto Led
            com.xiaomi.push.jc r0 = com.xiaomi.push.ia.h
            r4.a(r0)
            com.xiaomi.push.je r0 = new com.xiaomi.push.je
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.a
            int r1 = r1.size()
            r2 = 11
            r0.<init>(r2, r2, r1)
            r4.a(r0)
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.a
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        Lc8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto Le7
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            r4.a(r2)
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r4.a(r1)
            goto Lc8
        Le7:
            r4.d()
            r4.b()
        Led:
            java.lang.String r0 = r3.f
            if (r0 == 0) goto L104
            boolean r0 = r3.i()
            if (r0 == 0) goto L104
            com.xiaomi.push.jc r0 = com.xiaomi.push.ia.i
            r4.a(r0)
            java.lang.String r0 = r3.f
            r4.a(r0)
            r4.b()
        L104:
            java.lang.String r0 = r3.g
            if (r0 == 0) goto L11b
            boolean r0 = r3.j()
            if (r0 == 0) goto L11b
            com.xiaomi.push.jc r0 = com.xiaomi.push.ia.j
            r4.a(r0)
            java.lang.String r0 = r3.g
            r4.a(r0)
            r4.b()
        L11b:
            r4.c()
            r4.a()
            return
    }

    public boolean b() {
            r1 = this;
            com.xiaomi.push.hy r0 = r1.a
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public com.xiaomi.push.ia c(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return r0
    }

    public boolean c() {
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

    @Override
    public int compareTo(java.lang.Object r1) {
            r0 = this;
            com.xiaomi.push.ia r1 = (com.xiaomi.push.ia) r1
            int r1 = r0.a(r1)
            return r1
    }

    public com.xiaomi.push.ia d(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return r0
    }

    public boolean d() {
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

    public com.xiaomi.push.ia e(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return r0
    }

    public boolean e() {
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

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3 instanceof com.xiaomi.push.ia
            if (r1 == 0) goto Lf
            com.xiaomi.push.ia r3 = (com.xiaomi.push.ia) r3
            boolean r3 = r2.a(r3)
            return r3
        Lf:
            return r0
    }

    public boolean f() {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 0
            boolean r0 = r0.get(r1)
            return r0
    }

    public boolean g() {
            r1 = this;
            java.lang.String r0 = r1.e
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
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.a
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
            r1 = this;
            java.lang.String r0 = r1.f
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean j() {
            r1 = this;
            java.lang.String r0 = r1.g
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public java.lang.String toString() {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "XmPushActionAckNotification("
            r0.<init>(r1)
            boolean r1 = r6.a()
            r2 = 0
            java.lang.String r3 = "null"
            if (r1 == 0) goto L22
            java.lang.String r1 = "debug:"
            r0.append(r1)
            java.lang.String r1 = r6.a
            if (r1 != 0) goto L1d
            r0.append(r3)
            goto L20
        L1d:
            r0.append(r1)
        L20:
            r1 = r2
            goto L23
        L22:
            r1 = 1
        L23:
            boolean r4 = r6.b()
            java.lang.String r5 = ", "
            if (r4 == 0) goto L41
            if (r1 != 0) goto L30
            r0.append(r5)
        L30:
            java.lang.String r1 = "target:"
            r0.append(r1)
            com.xiaomi.push.hy r1 = r6.a
            if (r1 != 0) goto L3d
            r0.append(r3)
            goto L42
        L3d:
            r0.append(r1)
            goto L42
        L41:
            r2 = r1
        L42:
            if (r2 != 0) goto L47
            r0.append(r5)
        L47:
            java.lang.String r1 = "id:"
            r0.append(r1)
            java.lang.String r1 = r6.b
            if (r1 != 0) goto L54
            r0.append(r3)
            goto L57
        L54:
            r0.append(r1)
        L57:
            boolean r1 = r6.d()
            if (r1 == 0) goto L70
            r0.append(r5)
            java.lang.String r1 = "appId:"
            r0.append(r1)
            java.lang.String r1 = r6.c
            if (r1 != 0) goto L6d
            r0.append(r3)
            goto L70
        L6d:
            r0.append(r1)
        L70:
            boolean r1 = r6.e()
            if (r1 == 0) goto L89
            r0.append(r5)
            java.lang.String r1 = "type:"
            r0.append(r1)
            java.lang.String r1 = r6.d
            if (r1 != 0) goto L86
            r0.append(r3)
            goto L89
        L86:
            r0.append(r1)
        L89:
            boolean r1 = r6.f()
            if (r1 == 0) goto L9c
            r0.append(r5)
            java.lang.String r1 = "errorCode:"
            r0.append(r1)
            long r1 = r6.a
            r0.append(r1)
        L9c:
            boolean r1 = r6.g()
            if (r1 == 0) goto Lb5
            r0.append(r5)
            java.lang.String r1 = "reason:"
            r0.append(r1)
            java.lang.String r1 = r6.e
            if (r1 != 0) goto Lb2
            r0.append(r3)
            goto Lb5
        Lb2:
            r0.append(r1)
        Lb5:
            boolean r1 = r6.h()
            if (r1 == 0) goto Lce
            r0.append(r5)
            java.lang.String r1 = "extra:"
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r6.a
            if (r1 != 0) goto Lcb
            r0.append(r3)
            goto Lce
        Lcb:
            r0.append(r1)
        Lce:
            boolean r1 = r6.i()
            if (r1 == 0) goto Le7
            r0.append(r5)
            java.lang.String r1 = "packageName:"
            r0.append(r1)
            java.lang.String r1 = r6.f
            if (r1 != 0) goto Le4
            r0.append(r3)
            goto Le7
        Le4:
            r0.append(r1)
        Le7:
            boolean r1 = r6.j()
            if (r1 == 0) goto L100
            r0.append(r5)
            java.lang.String r1 = "category:"
            r0.append(r1)
            java.lang.String r1 = r6.g
            if (r1 != 0) goto Lfd
            r0.append(r3)
            goto L100
        Lfd:
            r0.append(r1)
        L100:
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
