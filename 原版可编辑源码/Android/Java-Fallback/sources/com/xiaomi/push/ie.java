package com.xiaomi.push;

public class ie implements com.xiaomi.push.iu<com.xiaomi.push.ie, java.lang.Object>, java.io.Serializable, java.lang.Cloneable {
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
    public java.util.List<java.lang.String> a;
    public boolean a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public java.lang.String f;

    static {
            com.xiaomi.push.jk r0 = new com.xiaomi.push.jk
            java.lang.String r1 = "XmPushActionCommandResult"
            r0.<init>(r1)
            com.xiaomi.push.ie.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 2
            r2 = 12
            java.lang.String r3 = ""
            r0.<init>(r3, r2, r1)
            com.xiaomi.push.ie.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r4 = 11
            r5 = 3
            r0.<init>(r3, r4, r5)
            com.xiaomi.push.ie.b = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 4
            r0.<init>(r3, r4, r5)
            com.xiaomi.push.ie.c = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 5
            r0.<init>(r3, r4, r5)
            com.xiaomi.push.ie.d = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 10
            r6 = 7
            r0.<init>(r3, r5, r6)
            com.xiaomi.push.ie.e = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r6 = 8
            r0.<init>(r3, r4, r6)
            com.xiaomi.push.ie.f = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r6 = 9
            r0.<init>(r3, r4, r6)
            com.xiaomi.push.ie.g = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r6 = 15
            r0.<init>(r3, r6, r5)
            com.xiaomi.push.ie.h = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r0.<init>(r3, r4, r2)
            com.xiaomi.push.ie.i = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r2 = 13
            r0.<init>(r3, r1, r2)
            com.xiaomi.push.ie.j = r0
            return
    }

    public ie() {
            r2 = this;
            r2.<init>()
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 2
            r0.<init>(r1)
            r2.a = r0
            r0 = 1
            r2.a = r0
            return
    }

    public int a(com.xiaomi.push.ie r5) {
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
            com.xiaomi.push.hy r0 = r4.a
            com.xiaomi.push.hy r1 = r5.a
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
            java.lang.String r0 = r4.a
            java.lang.String r1 = r5.a
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
            long r0 = r4.a
            long r2 = r5.a
            int r0 = com.xiaomi.push.iv.a(r0, r2)
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
            java.lang.String r0 = r4.d
            java.lang.String r1 = r5.d
            int r0 = com.xiaomi.push.iv.a(r0, r1)
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
            java.util.List<java.lang.String> r0 = r4.a
            java.util.List<java.lang.String> r1 = r5.a
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
            boolean r0 = r4.a
            boolean r5 = r5.a
            int r5 = com.xiaomi.push.iv.a(r0, r5)
            if (r5 == 0) goto L1b3
            return r5
        L1b3:
            r5 = 0
            return r5
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.util.List<java.lang.String> a() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.a
            return r0
    }

    public void a() {
            r3 = this;
            java.lang.String r0 = r3.a
            if (r0 == 0) goto L43
            java.lang.String r0 = r3.b
            if (r0 == 0) goto L28
            java.lang.String r0 = r3.c
            if (r0 == 0) goto Ld
            return
        Ld:
            com.xiaomi.push.jg r0 = new com.xiaomi.push.jg
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Required field 'cmdName' was not present! Struct: "
            r1.append(r2)
            java.lang.String r2 = r3.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L28:
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
        L43:
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
    public void a(com.xiaomi.push.jf r5) {
            r4 = this;
            r5.a()
        L3:
            com.xiaomi.push.jc r0 = r5.a()
            byte r1 = r0.a
            if (r1 != 0) goto L33
            r5.f()
            boolean r5 = r4.e()
            if (r5 == 0) goto L18
            r4.a()
            return
        L18:
            com.xiaomi.push.jg r5 = new com.xiaomi.push.jg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Required field 'errorCode' was not found in serialized data! Struct: "
            r0.append(r1)
            java.lang.String r1 = r4.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            throw r5
        L33:
            short r1 = r0.a
            r2 = 1
            r3 = 11
            switch(r1) {
                case 2: goto Lcd;
                case 3: goto Lc2;
                case 4: goto Lb7;
                case 5: goto Lac;
                case 6: goto L3b;
                case 7: goto L9c;
                case 8: goto L91;
                case 9: goto L86;
                case 10: goto L5e;
                case 11: goto L3b;
                case 12: goto L52;
                case 13: goto L42;
                default: goto L3b;
            }
        L3b:
            byte r0 = r0.a
            com.xiaomi.push.ji.a(r5, r0)
            goto Ldd
        L42:
            byte r1 = r0.a
            r3 = 2
            if (r1 != r3) goto L3b
            boolean r0 = r5.a()
            r4.a = r0
            r4.b(r2)
            goto Ldd
        L52:
            byte r1 = r0.a
            if (r1 != r3) goto L3b
            java.lang.String r0 = r5.a()
            r4.f = r0
            goto Ldd
        L5e:
            byte r1 = r0.a
            r2 = 15
            if (r1 != r2) goto L3b
            com.xiaomi.push.jd r0 = r5.a()
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.a
            r1.<init>(r2)
            r4.a = r1
            r1 = 0
        L72:
            int r2 = r0.a
            if (r1 >= r2) goto L82
            java.lang.String r2 = r5.a()
            java.util.List<java.lang.String> r3 = r4.a
            r3.add(r2)
            int r1 = r1 + 1
            goto L72
        L82:
            r5.i()
            goto Ldd
        L86:
            byte r1 = r0.a
            if (r1 != r3) goto L3b
            java.lang.String r0 = r5.a()
            r4.e = r0
            goto Ldd
        L91:
            byte r1 = r0.a
            if (r1 != r3) goto L3b
            java.lang.String r0 = r5.a()
            r4.d = r0
            goto Ldd
        L9c:
            byte r1 = r0.a
            r3 = 10
            if (r1 != r3) goto L3b
            long r0 = r5.a()
            r4.a = r0
            r4.a(r2)
            goto Ldd
        Lac:
            byte r1 = r0.a
            if (r1 != r3) goto L3b
            java.lang.String r0 = r5.a()
            r4.c = r0
            goto Ldd
        Lb7:
            byte r1 = r0.a
            if (r1 != r3) goto L3b
            java.lang.String r0 = r5.a()
            r4.b = r0
            goto Ldd
        Lc2:
            byte r1 = r0.a
            if (r1 != r3) goto L3b
            java.lang.String r0 = r5.a()
            r4.a = r0
            goto Ldd
        Lcd:
            byte r1 = r0.a
            r2 = 12
            if (r1 != r2) goto L3b
            com.xiaomi.push.hy r0 = new com.xiaomi.push.hy
            r0.<init>()
            r4.a = r0
            r0.a(r5)
        Ldd:
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

    public boolean a(com.xiaomi.push.ie r6) {
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
            if (r1 == 0) goto L10c
            if (r2 != 0) goto L16
            goto L10c
        L16:
            com.xiaomi.push.hy r1 = r5.a
            com.xiaomi.push.hy r2 = r6.a
            boolean r1 = r1.a(r2)
            if (r1 != 0) goto L21
            return r0
        L21:
            boolean r1 = r5.b()
            boolean r2 = r6.b()
            if (r1 != 0) goto L2d
            if (r2 == 0) goto L3e
        L2d:
            if (r1 == 0) goto L10c
            if (r2 != 0) goto L33
            goto L10c
        L33:
            java.lang.String r1 = r5.a
            java.lang.String r2 = r6.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L3e
            return r0
        L3e:
            boolean r1 = r5.c()
            boolean r2 = r6.c()
            if (r1 != 0) goto L4a
            if (r2 == 0) goto L5b
        L4a:
            if (r1 == 0) goto L10c
            if (r2 != 0) goto L50
            goto L10c
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
            if (r1 == 0) goto L10c
            if (r2 != 0) goto L6d
            goto L10c
        L6d:
            java.lang.String r1 = r5.c
            java.lang.String r2 = r6.c
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L78
            return r0
        L78:
            long r1 = r5.a
            long r3 = r6.a
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto L81
            return r0
        L81:
            boolean r1 = r5.f()
            boolean r2 = r6.f()
            if (r1 != 0) goto L8d
            if (r2 == 0) goto L9e
        L8d:
            if (r1 == 0) goto L10c
            if (r2 != 0) goto L93
            goto L10c
        L93:
            java.lang.String r1 = r5.d
            java.lang.String r2 = r6.d
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L9e
            return r0
        L9e:
            boolean r1 = r5.g()
            boolean r2 = r6.g()
            if (r1 != 0) goto Laa
            if (r2 == 0) goto Lba
        Laa:
            if (r1 == 0) goto L10c
            if (r2 != 0) goto Laf
            goto L10c
        Laf:
            java.lang.String r1 = r5.e
            java.lang.String r2 = r6.e
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto Lba
            return r0
        Lba:
            boolean r1 = r5.h()
            boolean r2 = r6.h()
            if (r1 != 0) goto Lc6
            if (r2 == 0) goto Ld6
        Lc6:
            if (r1 == 0) goto L10c
            if (r2 != 0) goto Lcb
            goto L10c
        Lcb:
            java.util.List<java.lang.String> r1 = r5.a
            java.util.List<java.lang.String> r2 = r6.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto Ld6
            return r0
        Ld6:
            boolean r1 = r5.i()
            boolean r2 = r6.i()
            if (r1 != 0) goto Le2
            if (r2 == 0) goto Lf2
        Le2:
            if (r1 == 0) goto L10c
            if (r2 != 0) goto Le7
            goto L10c
        Le7:
            java.lang.String r1 = r5.f
            java.lang.String r2 = r6.f
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto Lf2
            return r0
        Lf2:
            boolean r1 = r5.j()
            boolean r2 = r6.j()
            if (r1 != 0) goto Lfe
            if (r2 == 0) goto L10a
        Lfe:
            if (r1 == 0) goto L10c
            if (r2 != 0) goto L103
            goto L10c
        L103:
            boolean r1 = r5.a
            boolean r6 = r6.a
            if (r1 == r6) goto L10a
            return r0
        L10a:
            r6 = 1
            return r6
        L10c:
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
            com.xiaomi.push.jk r0 = com.xiaomi.push.ie.a
            r4.a(r0)
            com.xiaomi.push.hy r0 = r3.a
            if (r0 == 0) goto L1f
            boolean r0 = r3.a()
            if (r0 == 0) goto L1f
            com.xiaomi.push.jc r0 = com.xiaomi.push.ie.a
            r4.a(r0)
            com.xiaomi.push.hy r0 = r3.a
            r0.b(r4)
            r4.b()
        L1f:
            java.lang.String r0 = r3.a
            if (r0 == 0) goto L30
            com.xiaomi.push.jc r0 = com.xiaomi.push.ie.b
            r4.a(r0)
            java.lang.String r0 = r3.a
            r4.a(r0)
            r4.b()
        L30:
            java.lang.String r0 = r3.b
            if (r0 == 0) goto L41
            com.xiaomi.push.jc r0 = com.xiaomi.push.ie.c
            r4.a(r0)
            java.lang.String r0 = r3.b
            r4.a(r0)
            r4.b()
        L41:
            java.lang.String r0 = r3.c
            if (r0 == 0) goto L52
            com.xiaomi.push.jc r0 = com.xiaomi.push.ie.d
            r4.a(r0)
            java.lang.String r0 = r3.c
            r4.a(r0)
            r4.b()
        L52:
            com.xiaomi.push.jc r0 = com.xiaomi.push.ie.e
            r4.a(r0)
            long r0 = r3.a
            r4.a(r0)
            r4.b()
            java.lang.String r0 = r3.d
            if (r0 == 0) goto L76
            boolean r0 = r3.f()
            if (r0 == 0) goto L76
            com.xiaomi.push.jc r0 = com.xiaomi.push.ie.f
            r4.a(r0)
            java.lang.String r0 = r3.d
            r4.a(r0)
            r4.b()
        L76:
            java.lang.String r0 = r3.e
            if (r0 == 0) goto L8d
            boolean r0 = r3.g()
            if (r0 == 0) goto L8d
            com.xiaomi.push.jc r0 = com.xiaomi.push.ie.g
            r4.a(r0)
            java.lang.String r0 = r3.e
            r4.a(r0)
            r4.b()
        L8d:
            java.util.List<java.lang.String> r0 = r3.a
            if (r0 == 0) goto Lc8
            boolean r0 = r3.h()
            if (r0 == 0) goto Lc8
            com.xiaomi.push.jc r0 = com.xiaomi.push.ie.h
            r4.a(r0)
            com.xiaomi.push.jd r0 = new com.xiaomi.push.jd
            r1 = 11
            java.util.List<java.lang.String> r2 = r3.a
            int r2 = r2.size()
            r0.<init>(r1, r2)
            r4.a(r0)
            java.util.List<java.lang.String> r0 = r3.a
            java.util.Iterator r0 = r0.iterator()
        Lb2:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto Lc2
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            r4.a(r1)
            goto Lb2
        Lc2:
            r4.e()
            r4.b()
        Lc8:
            java.lang.String r0 = r3.f
            if (r0 == 0) goto Ldf
            boolean r0 = r3.i()
            if (r0 == 0) goto Ldf
            com.xiaomi.push.jc r0 = com.xiaomi.push.ie.i
            r4.a(r0)
            java.lang.String r0 = r3.f
            r4.a(r0)
            r4.b()
        Ldf:
            boolean r0 = r3.j()
            if (r0 == 0) goto Lf2
            com.xiaomi.push.jc r0 = com.xiaomi.push.ie.j
            r4.a(r0)
            boolean r0 = r3.a
            r4.a(r0)
            r4.b()
        Lf2:
            r4.c()
            r4.a()
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

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.f
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
            com.xiaomi.push.ie r1 = (com.xiaomi.push.ie) r1
            int r1 = r0.a(r1)
            return r1
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

    public boolean e() {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 0
            boolean r0 = r0.get(r1)
            return r0
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3 instanceof com.xiaomi.push.ie
            if (r1 == 0) goto Lf
            com.xiaomi.push.ie r3 = (com.xiaomi.push.ie) r3
            boolean r3 = r2.a(r3)
            return r3
        Lf:
            return r0
    }

    public boolean f() {
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
            java.util.List<java.lang.String> r0 = r1.a
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
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 1
            boolean r0 = r0.get(r1)
            return r0
    }

    public java.lang.String toString() {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "XmPushActionCommandResult("
            r0.<init>(r1)
            boolean r1 = r6.a()
            java.lang.String r2 = "null"
            if (r1 == 0) goto L21
            java.lang.String r1 = "target:"
            r0.append(r1)
            com.xiaomi.push.hy r1 = r6.a
            if (r1 != 0) goto L1c
            r0.append(r2)
            goto L1f
        L1c:
            r0.append(r1)
        L1f:
            r1 = 0
            goto L22
        L21:
            r1 = 1
        L22:
            java.lang.String r3 = ", "
            if (r1 != 0) goto L29
            r0.append(r3)
        L29:
            java.lang.String r1 = "id:"
            r0.append(r1)
            java.lang.String r1 = r6.a
            if (r1 != 0) goto L36
            r0.append(r2)
            goto L39
        L36:
            r0.append(r1)
        L39:
            r0.append(r3)
            java.lang.String r1 = "appId:"
            r0.append(r1)
            java.lang.String r1 = r6.b
            if (r1 != 0) goto L49
            r0.append(r2)
            goto L4c
        L49:
            r0.append(r1)
        L4c:
            r0.append(r3)
            java.lang.String r1 = "cmdName:"
            r0.append(r1)
            java.lang.String r1 = r6.c
            if (r1 != 0) goto L5c
            r0.append(r2)
            goto L5f
        L5c:
            r0.append(r1)
        L5f:
            r0.append(r3)
            java.lang.String r1 = "errorCode:"
            r0.append(r1)
            long r4 = r6.a
            r0.append(r4)
            boolean r1 = r6.f()
            if (r1 == 0) goto L85
            r0.append(r3)
            java.lang.String r1 = "reason:"
            r0.append(r1)
            java.lang.String r1 = r6.d
            if (r1 != 0) goto L82
            r0.append(r2)
            goto L85
        L82:
            r0.append(r1)
        L85:
            boolean r1 = r6.g()
            if (r1 == 0) goto L9e
            r0.append(r3)
            java.lang.String r1 = "packageName:"
            r0.append(r1)
            java.lang.String r1 = r6.e
            if (r1 != 0) goto L9b
            r0.append(r2)
            goto L9e
        L9b:
            r0.append(r1)
        L9e:
            boolean r1 = r6.h()
            if (r1 == 0) goto Lb7
            r0.append(r3)
            java.lang.String r1 = "cmdArgs:"
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r6.a
            if (r1 != 0) goto Lb4
            r0.append(r2)
            goto Lb7
        Lb4:
            r0.append(r1)
        Lb7:
            boolean r1 = r6.i()
            if (r1 == 0) goto Ld0
            r0.append(r3)
            java.lang.String r1 = "category:"
            r0.append(r1)
            java.lang.String r1 = r6.f
            if (r1 != 0) goto Lcd
            r0.append(r2)
            goto Ld0
        Lcd:
            r0.append(r1)
        Ld0:
            boolean r1 = r6.j()
            if (r1 == 0) goto Le3
            r0.append(r3)
            java.lang.String r1 = "response2Client:"
            r0.append(r1)
            boolean r1 = r6.a
            r0.append(r1)
        Le3:
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
