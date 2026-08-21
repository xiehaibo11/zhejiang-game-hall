package com.xiaomi.push;

public class im implements com.xiaomi.push.iu<com.xiaomi.push.im, java.lang.Object>, java.io.Serializable, java.lang.Cloneable {
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
    private static final com.xiaomi.push.jc k = null;
    private static final com.xiaomi.push.jc l = null;
    public com.xiaomi.push.hv a;
    public com.xiaomi.push.hy a;
    public java.lang.String a;
    private java.util.BitSet a;
    public java.util.Map<java.lang.String, java.lang.String> a;
    public boolean a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public java.lang.String f;
    public java.lang.String g;
    public java.lang.String h;

    static {
            com.xiaomi.push.jk r0 = new com.xiaomi.push.jk
            java.lang.String r1 = "XmPushActionSendMessage"
            r0.<init>(r1)
            com.xiaomi.push.im.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 11
            java.lang.String r2 = ""
            r3 = 1
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.im.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 2
            r4 = 12
            r0.<init>(r2, r4, r3)
            com.xiaomi.push.im.b = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 3
            r0.<init>(r2, r1, r5)
            com.xiaomi.push.im.c = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 4
            r0.<init>(r2, r1, r5)
            com.xiaomi.push.im.d = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 5
            r0.<init>(r2, r1, r5)
            com.xiaomi.push.im.e = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 6
            r0.<init>(r2, r1, r5)
            com.xiaomi.push.im.f = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 7
            r0.<init>(r2, r1, r5)
            com.xiaomi.push.im.g = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 8
            r0.<init>(r2, r4, r5)
            com.xiaomi.push.im.h = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 9
            r0.<init>(r2, r3, r5)
            com.xiaomi.push.im.i = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 13
            r5 = 10
            r0.<init>(r2, r3, r5)
            com.xiaomi.push.im.j = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r0.<init>(r2, r1, r1)
            com.xiaomi.push.im.k = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r0.<init>(r2, r1, r4)
            com.xiaomi.push.im.l = r0
            return
    }

    public im() {
            r2 = this;
            r2.<init>()
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 1
            r0.<init>(r1)
            r2.a = r0
            r2.a = r1
            return
    }

    public int a(com.xiaomi.push.im r3) {
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
            com.xiaomi.push.hy r0 = r2.a
            com.xiaomi.push.hy r1 = r3.a
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
            java.lang.String r0 = r2.b
            java.lang.String r1 = r3.b
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
            java.lang.String r0 = r2.c
            java.lang.String r1 = r3.c
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
            java.lang.String r0 = r2.d
            java.lang.String r1 = r3.d
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
            java.lang.String r0 = r2.e
            java.lang.String r1 = r3.e
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
            java.lang.String r0 = r2.f
            java.lang.String r1 = r3.f
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
            com.xiaomi.push.hv r0 = r2.a
            com.xiaomi.push.hv r1 = r3.a
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
            boolean r0 = r2.a
            boolean r1 = r3.a
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
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.a
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.a
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L1b3
            return r0
        L1b3:
            boolean r0 = r2.k()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r3.k()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L1ca
            return r0
        L1ca:
            boolean r0 = r2.k()
            if (r0 == 0) goto L1db
            java.lang.String r0 = r2.g
            java.lang.String r1 = r3.g
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L1db
            return r0
        L1db:
            boolean r0 = r2.l()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r3.l()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L1f2
            return r0
        L1f2:
            boolean r0 = r2.l()
            if (r0 == 0) goto L203
            java.lang.String r0 = r2.h
            java.lang.String r3 = r3.h
            int r3 = com.xiaomi.push.iv.a(r0, r3)
            if (r3 == 0) goto L203
            return r3
        L203:
            r3 = 0
            return r3
    }

    public com.xiaomi.push.hv a() {
            r1 = this;
            com.xiaomi.push.hv r0 = r1.a
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public void a() {
            r3 = this;
            java.lang.String r0 = r3.b
            if (r0 == 0) goto L24
            java.lang.String r0 = r3.c
            if (r0 == 0) goto L9
            return
        L9:
            com.xiaomi.push.jg r0 = new com.xiaomi.push.jg
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Required field 'appId' was not present! Struct: "
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
            r2 = 2
            r3 = 12
            r4 = 11
            switch(r1) {
                case 1: goto Lcd;
                case 2: goto Lbe;
                case 3: goto Lb3;
                case 4: goto La8;
                case 5: goto L9d;
                case 6: goto L92;
                case 7: goto L87;
                case 8: goto L78;
                case 9: goto L69;
                case 10: goto L3b;
                case 11: goto L2f;
                case 12: goto L23;
                default: goto L1c;
            }
        L1c:
            byte r0 = r0.a
            com.xiaomi.push.ji.a(r6, r0)
            goto Ld7
        L23:
            byte r1 = r0.a
            if (r1 != r4) goto L1c
            java.lang.String r0 = r6.a()
            r5.h = r0
            goto Ld7
        L2f:
            byte r1 = r0.a
            if (r1 != r4) goto L1c
            java.lang.String r0 = r6.a()
            r5.g = r0
            goto Ld7
        L3b:
            byte r1 = r0.a
            r3 = 13
            if (r1 != r3) goto L1c
            com.xiaomi.push.je r0 = r6.a()
            java.util.HashMap r1 = new java.util.HashMap
            int r3 = r0.a
            int r3 = r3 * r2
            r1.<init>(r3)
            r5.a = r1
            r1 = 0
        L50:
            int r2 = r0.a
            if (r1 >= r2) goto L64
            java.lang.String r2 = r6.a()
            java.lang.String r3 = r6.a()
            java.util.Map<java.lang.String, java.lang.String> r4 = r5.a
            r4.put(r2, r3)
            int r1 = r1 + 1
            goto L50
        L64:
            r6.h()
            goto Ld7
        L69:
            byte r1 = r0.a
            if (r1 != r2) goto L1c
            boolean r0 = r6.a()
            r5.a = r0
            r0 = 1
            r5.a(r0)
            goto Ld7
        L78:
            byte r1 = r0.a
            if (r1 != r3) goto L1c
            com.xiaomi.push.hv r0 = new com.xiaomi.push.hv
            r0.<init>()
            r5.a = r0
            r0.a(r6)
            goto Ld7
        L87:
            byte r1 = r0.a
            if (r1 != r4) goto L1c
            java.lang.String r0 = r6.a()
            r5.f = r0
            goto Ld7
        L92:
            byte r1 = r0.a
            if (r1 != r4) goto L1c
            java.lang.String r0 = r6.a()
            r5.e = r0
            goto Ld7
        L9d:
            byte r1 = r0.a
            if (r1 != r4) goto L1c
            java.lang.String r0 = r6.a()
            r5.d = r0
            goto Ld7
        La8:
            byte r1 = r0.a
            if (r1 != r4) goto L1c
            java.lang.String r0 = r6.a()
            r5.c = r0
            goto Ld7
        Lb3:
            byte r1 = r0.a
            if (r1 != r4) goto L1c
            java.lang.String r0 = r6.a()
            r5.b = r0
            goto Ld7
        Lbe:
            byte r1 = r0.a
            if (r1 != r3) goto L1c
            com.xiaomi.push.hy r0 = new com.xiaomi.push.hy
            r0.<init>()
            r5.a = r0
            r0.a(r6)
            goto Ld7
        Lcd:
            byte r1 = r0.a
            if (r1 != r4) goto L1c
            java.lang.String r0 = r6.a()
            r5.a = r0
        Ld7:
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

    public boolean a(com.xiaomi.push.im r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3.a()
            boolean r2 = r4.a()
            if (r1 != 0) goto L10
            if (r2 == 0) goto L21
        L10:
            if (r1 == 0) goto L15a
            if (r2 != 0) goto L16
            goto L15a
        L16:
            java.lang.String r1 = r3.a
            java.lang.String r2 = r4.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L21
            return r0
        L21:
            boolean r1 = r3.b()
            boolean r2 = r4.b()
            if (r1 != 0) goto L2d
            if (r2 == 0) goto L3e
        L2d:
            if (r1 == 0) goto L15a
            if (r2 != 0) goto L33
            goto L15a
        L33:
            com.xiaomi.push.hy r1 = r3.a
            com.xiaomi.push.hy r2 = r4.a
            boolean r1 = r1.a(r2)
            if (r1 != 0) goto L3e
            return r0
        L3e:
            boolean r1 = r3.c()
            boolean r2 = r4.c()
            if (r1 != 0) goto L4a
            if (r2 == 0) goto L5b
        L4a:
            if (r1 == 0) goto L15a
            if (r2 != 0) goto L50
            goto L15a
        L50:
            java.lang.String r1 = r3.b
            java.lang.String r2 = r4.b
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L5b
            return r0
        L5b:
            boolean r1 = r3.d()
            boolean r2 = r4.d()
            if (r1 != 0) goto L67
            if (r2 == 0) goto L78
        L67:
            if (r1 == 0) goto L15a
            if (r2 != 0) goto L6d
            goto L15a
        L6d:
            java.lang.String r1 = r3.c
            java.lang.String r2 = r4.c
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L78
            return r0
        L78:
            boolean r1 = r3.e()
            boolean r2 = r4.e()
            if (r1 != 0) goto L84
            if (r2 == 0) goto L95
        L84:
            if (r1 == 0) goto L15a
            if (r2 != 0) goto L8a
            goto L15a
        L8a:
            java.lang.String r1 = r3.d
            java.lang.String r2 = r4.d
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L95
            return r0
        L95:
            boolean r1 = r3.f()
            boolean r2 = r4.f()
            if (r1 != 0) goto La1
            if (r2 == 0) goto Lb2
        La1:
            if (r1 == 0) goto L15a
            if (r2 != 0) goto La7
            goto L15a
        La7:
            java.lang.String r1 = r3.e
            java.lang.String r2 = r4.e
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto Lb2
            return r0
        Lb2:
            boolean r1 = r3.g()
            boolean r2 = r4.g()
            if (r1 != 0) goto Lbe
            if (r2 == 0) goto Lcf
        Lbe:
            if (r1 == 0) goto L15a
            if (r2 != 0) goto Lc4
            goto L15a
        Lc4:
            java.lang.String r1 = r3.f
            java.lang.String r2 = r4.f
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto Lcf
            return r0
        Lcf:
            boolean r1 = r3.h()
            boolean r2 = r4.h()
            if (r1 != 0) goto Ldb
            if (r2 == 0) goto Lec
        Ldb:
            if (r1 == 0) goto L15a
            if (r2 != 0) goto Le1
            goto L15a
        Le1:
            com.xiaomi.push.hv r1 = r3.a
            com.xiaomi.push.hv r2 = r4.a
            boolean r1 = r1.a(r2)
            if (r1 != 0) goto Lec
            return r0
        Lec:
            boolean r1 = r3.i()
            boolean r2 = r4.i()
            if (r1 != 0) goto Lf8
            if (r2 == 0) goto L104
        Lf8:
            if (r1 == 0) goto L15a
            if (r2 != 0) goto Lfd
            goto L15a
        Lfd:
            boolean r1 = r3.a
            boolean r2 = r4.a
            if (r1 == r2) goto L104
            return r0
        L104:
            boolean r1 = r3.j()
            boolean r2 = r4.j()
            if (r1 != 0) goto L110
            if (r2 == 0) goto L120
        L110:
            if (r1 == 0) goto L15a
            if (r2 != 0) goto L115
            goto L15a
        L115:
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.a
            java.util.Map<java.lang.String, java.lang.String> r2 = r4.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L120
            return r0
        L120:
            boolean r1 = r3.k()
            boolean r2 = r4.k()
            if (r1 != 0) goto L12c
            if (r2 == 0) goto L13c
        L12c:
            if (r1 == 0) goto L15a
            if (r2 != 0) goto L131
            goto L15a
        L131:
            java.lang.String r1 = r3.g
            java.lang.String r2 = r4.g
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L13c
            return r0
        L13c:
            boolean r1 = r3.l()
            boolean r2 = r4.l()
            if (r1 != 0) goto L148
            if (r2 == 0) goto L158
        L148:
            if (r1 == 0) goto L15a
            if (r2 != 0) goto L14d
            goto L15a
        L14d:
            java.lang.String r1 = r3.h
            java.lang.String r4 = r4.h
            boolean r4 = r1.equals(r4)
            if (r4 != 0) goto L158
            return r0
        L158:
            r4 = 1
            return r4
        L15a:
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    @Override
    public void b(com.xiaomi.push.jf r4) {
            r3 = this;
            r3.a()
            com.xiaomi.push.jk r0 = com.xiaomi.push.im.a
            r4.a(r0)
            java.lang.String r0 = r3.a
            if (r0 == 0) goto L1f
            boolean r0 = r3.a()
            if (r0 == 0) goto L1f
            com.xiaomi.push.jc r0 = com.xiaomi.push.im.a
            r4.a(r0)
            java.lang.String r0 = r3.a
            r4.a(r0)
            r4.b()
        L1f:
            com.xiaomi.push.hy r0 = r3.a
            if (r0 == 0) goto L36
            boolean r0 = r3.b()
            if (r0 == 0) goto L36
            com.xiaomi.push.jc r0 = com.xiaomi.push.im.b
            r4.a(r0)
            com.xiaomi.push.hy r0 = r3.a
            r0.b(r4)
            r4.b()
        L36:
            java.lang.String r0 = r3.b
            if (r0 == 0) goto L47
            com.xiaomi.push.jc r0 = com.xiaomi.push.im.c
            r4.a(r0)
            java.lang.String r0 = r3.b
            r4.a(r0)
            r4.b()
        L47:
            java.lang.String r0 = r3.c
            if (r0 == 0) goto L58
            com.xiaomi.push.jc r0 = com.xiaomi.push.im.d
            r4.a(r0)
            java.lang.String r0 = r3.c
            r4.a(r0)
            r4.b()
        L58:
            java.lang.String r0 = r3.d
            if (r0 == 0) goto L6f
            boolean r0 = r3.e()
            if (r0 == 0) goto L6f
            com.xiaomi.push.jc r0 = com.xiaomi.push.im.e
            r4.a(r0)
            java.lang.String r0 = r3.d
            r4.a(r0)
            r4.b()
        L6f:
            java.lang.String r0 = r3.e
            if (r0 == 0) goto L86
            boolean r0 = r3.f()
            if (r0 == 0) goto L86
            com.xiaomi.push.jc r0 = com.xiaomi.push.im.f
            r4.a(r0)
            java.lang.String r0 = r3.e
            r4.a(r0)
            r4.b()
        L86:
            java.lang.String r0 = r3.f
            if (r0 == 0) goto L9d
            boolean r0 = r3.g()
            if (r0 == 0) goto L9d
            com.xiaomi.push.jc r0 = com.xiaomi.push.im.g
            r4.a(r0)
            java.lang.String r0 = r3.f
            r4.a(r0)
            r4.b()
        L9d:
            com.xiaomi.push.hv r0 = r3.a
            if (r0 == 0) goto Lb4
            boolean r0 = r3.h()
            if (r0 == 0) goto Lb4
            com.xiaomi.push.jc r0 = com.xiaomi.push.im.h
            r4.a(r0)
            com.xiaomi.push.hv r0 = r3.a
            r0.b(r4)
            r4.b()
        Lb4:
            boolean r0 = r3.i()
            if (r0 == 0) goto Lc7
            com.xiaomi.push.jc r0 = com.xiaomi.push.im.i
            r4.a(r0)
            boolean r0 = r3.a
            r4.a(r0)
            r4.b()
        Lc7:
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.a
            if (r0 == 0) goto L115
            boolean r0 = r3.j()
            if (r0 == 0) goto L115
            com.xiaomi.push.jc r0 = com.xiaomi.push.im.j
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
        Lf0:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L10f
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            r4.a(r2)
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r4.a(r1)
            goto Lf0
        L10f:
            r4.d()
            r4.b()
        L115:
            java.lang.String r0 = r3.g
            if (r0 == 0) goto L12c
            boolean r0 = r3.k()
            if (r0 == 0) goto L12c
            com.xiaomi.push.jc r0 = com.xiaomi.push.im.k
            r4.a(r0)
            java.lang.String r0 = r3.g
            r4.a(r0)
            r4.b()
        L12c:
            java.lang.String r0 = r3.h
            if (r0 == 0) goto L143
            boolean r0 = r3.l()
            if (r0 == 0) goto L143
            com.xiaomi.push.jc r0 = com.xiaomi.push.im.l
            r4.a(r0)
            java.lang.String r0 = r3.h
            r4.a(r0)
            r4.b()
        L143:
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

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.e
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
            com.xiaomi.push.im r1 = (com.xiaomi.push.im) r1
            int r1 = r0.a(r1)
            return r1
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.f
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

    public java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.g
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
            boolean r1 = r3 instanceof com.xiaomi.push.im
            if (r1 == 0) goto Lf
            com.xiaomi.push.im r3 = (com.xiaomi.push.im) r3
            boolean r3 = r2.a(r3)
            return r3
        Lf:
            return r0
    }

    public java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public boolean f() {
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

    public boolean g() {
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

    public boolean h() {
            r1 = this;
            com.xiaomi.push.hv r0 = r1.a
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
            r1 = 0
            boolean r0 = r0.get(r1)
            return r0
    }

    public boolean j() {
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

    public boolean k() {
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

    public boolean l() {
            r1 = this;
            java.lang.String r0 = r1.h
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
            java.lang.String r1 = "XmPushActionSendMessage("
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
            r0.append(r5)
            java.lang.String r1 = "appId:"
            r0.append(r1)
            java.lang.String r1 = r6.c
            if (r1 != 0) goto L67
            r0.append(r3)
            goto L6a
        L67:
            r0.append(r1)
        L6a:
            boolean r1 = r6.e()
            if (r1 == 0) goto L83
            r0.append(r5)
            java.lang.String r1 = "packageName:"
            r0.append(r1)
            java.lang.String r1 = r6.d
            if (r1 != 0) goto L80
            r0.append(r3)
            goto L83
        L80:
            r0.append(r1)
        L83:
            boolean r1 = r6.f()
            if (r1 == 0) goto L9c
            r0.append(r5)
            java.lang.String r1 = "topic:"
            r0.append(r1)
            java.lang.String r1 = r6.e
            if (r1 != 0) goto L99
            r0.append(r3)
            goto L9c
        L99:
            r0.append(r1)
        L9c:
            boolean r1 = r6.g()
            if (r1 == 0) goto Lb5
            r0.append(r5)
            java.lang.String r1 = "aliasName:"
            r0.append(r1)
            java.lang.String r1 = r6.f
            if (r1 != 0) goto Lb2
            r0.append(r3)
            goto Lb5
        Lb2:
            r0.append(r1)
        Lb5:
            boolean r1 = r6.h()
            if (r1 == 0) goto Lce
            r0.append(r5)
            java.lang.String r1 = "message:"
            r0.append(r1)
            com.xiaomi.push.hv r1 = r6.a
            if (r1 != 0) goto Lcb
            r0.append(r3)
            goto Lce
        Lcb:
            r0.append(r1)
        Lce:
            boolean r1 = r6.i()
            if (r1 == 0) goto Le1
            r0.append(r5)
            java.lang.String r1 = "needAck:"
            r0.append(r1)
            boolean r1 = r6.a
            r0.append(r1)
        Le1:
            boolean r1 = r6.j()
            if (r1 == 0) goto Lfa
            r0.append(r5)
            java.lang.String r1 = "params:"
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r6.a
            if (r1 != 0) goto Lf7
            r0.append(r3)
            goto Lfa
        Lf7:
            r0.append(r1)
        Lfa:
            boolean r1 = r6.k()
            if (r1 == 0) goto L113
            r0.append(r5)
            java.lang.String r1 = "category:"
            r0.append(r1)
            java.lang.String r1 = r6.g
            if (r1 != 0) goto L110
            r0.append(r3)
            goto L113
        L110:
            r0.append(r1)
        L113:
            boolean r1 = r6.l()
            if (r1 == 0) goto L12c
            r0.append(r5)
            java.lang.String r1 = "userAccount:"
            r0.append(r1)
            java.lang.String r1 = r6.h
            if (r1 != 0) goto L129
            r0.append(r3)
            goto L12c
        L129:
            r0.append(r1)
        L12c:
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
