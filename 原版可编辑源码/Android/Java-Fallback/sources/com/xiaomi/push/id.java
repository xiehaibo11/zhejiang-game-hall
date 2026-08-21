package com.xiaomi.push;

public class id implements com.xiaomi.push.iu<com.xiaomi.push.id, java.lang.Object>, java.io.Serializable, java.lang.Cloneable {
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
    public boolean b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;

    static {
            com.xiaomi.push.jk r0 = new com.xiaomi.push.jk
            java.lang.String r1 = "XmPushActionCommand"
            r0.<init>(r1)
            com.xiaomi.push.id.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 12
            r2 = 2
            java.lang.String r3 = ""
            r0.<init>(r3, r1, r2)
            com.xiaomi.push.id.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r4 = 11
            r5 = 3
            r0.<init>(r3, r4, r5)
            com.xiaomi.push.id.b = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 4
            r0.<init>(r3, r4, r5)
            com.xiaomi.push.id.c = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 5
            r0.<init>(r3, r4, r5)
            com.xiaomi.push.id.d = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 15
            r6 = 6
            r0.<init>(r3, r5, r6)
            com.xiaomi.push.id.e = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 7
            r0.<init>(r3, r4, r5)
            com.xiaomi.push.id.f = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 9
            r0.<init>(r3, r4, r5)
            com.xiaomi.push.id.g = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 10
            r0.<init>(r3, r2, r5)
            com.xiaomi.push.id.h = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r0.<init>(r3, r2, r4)
            com.xiaomi.push.id.i = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r0.<init>(r3, r5, r1)
            com.xiaomi.push.id.j = r0
            return
    }

    public id() {
            r2 = this;
            r2.<init>()
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 3
            r0.<init>(r1)
            r2.a = r0
            r0 = 0
            r2.a = r0
            r0 = 1
            r2.b = r0
            return
    }

    public int a(com.xiaomi.push.id r5) {
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
            java.util.List<java.lang.String> r0 = r4.a
            java.util.List<java.lang.String> r1 = r5.a
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
            boolean r0 = r4.a
            boolean r1 = r5.a
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
            boolean r0 = r4.b
            boolean r1 = r5.b
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
            long r0 = r4.a
            long r2 = r5.a
            int r5 = com.xiaomi.push.iv.a(r0, r2)
            if (r5 == 0) goto L1b3
            return r5
        L1b3:
            r5 = 0
            return r5
    }

    public com.xiaomi.push.id a(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.c
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
            r3 = 1
            r4 = 11
            switch(r1) {
                case 2: goto Lb0;
                case 3: goto La5;
                case 4: goto L9a;
                case 5: goto L8f;
                case 6: goto L67;
                case 7: goto L5c;
                case 8: goto L1b;
                case 9: goto L51;
                case 10: goto L42;
                case 11: goto L33;
                case 12: goto L22;
                default: goto L1b;
            }
        L1b:
            byte r0 = r0.a
            com.xiaomi.push.ji.a(r6, r0)
            goto Lc0
        L22:
            byte r1 = r0.a
            r2 = 10
            if (r1 != r2) goto L1b
            long r0 = r6.a()
            r5.a = r0
            r5.c(r3)
            goto Lc0
        L33:
            byte r1 = r0.a
            if (r1 != r2) goto L1b
            boolean r0 = r6.a()
            r5.b = r0
            r5.b(r3)
            goto Lc0
        L42:
            byte r1 = r0.a
            if (r1 != r2) goto L1b
            boolean r0 = r6.a()
            r5.a = r0
            r5.a(r3)
            goto Lc0
        L51:
            byte r1 = r0.a
            if (r1 != r4) goto L1b
            java.lang.String r0 = r6.a()
            r5.e = r0
            goto Lc0
        L5c:
            byte r1 = r0.a
            if (r1 != r4) goto L1b
            java.lang.String r0 = r6.a()
            r5.d = r0
            goto Lc0
        L67:
            byte r1 = r0.a
            r2 = 15
            if (r1 != r2) goto L1b
            com.xiaomi.push.jd r0 = r6.a()
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.a
            r1.<init>(r2)
            r5.a = r1
            r1 = 0
        L7b:
            int r2 = r0.a
            if (r1 >= r2) goto L8b
            java.lang.String r2 = r6.a()
            java.util.List<java.lang.String> r3 = r5.a
            r3.add(r2)
            int r1 = r1 + 1
            goto L7b
        L8b:
            r6.i()
            goto Lc0
        L8f:
            byte r1 = r0.a
            if (r1 != r4) goto L1b
            java.lang.String r0 = r6.a()
            r5.c = r0
            goto Lc0
        L9a:
            byte r1 = r0.a
            if (r1 != r4) goto L1b
            java.lang.String r0 = r6.a()
            r5.b = r0
            goto Lc0
        La5:
            byte r1 = r0.a
            if (r1 != r4) goto L1b
            java.lang.String r0 = r6.a()
            r5.a = r0
            goto Lc0
        Lb0:
            byte r1 = r0.a
            r2 = 12
            if (r1 != r2) goto L1b
            com.xiaomi.push.hy r0 = new com.xiaomi.push.hy
            r0.<init>()
            r5.a = r0
            r0.a(r6)
        Lc0:
            r6.g()
            goto L3
    }

    public void a(java.lang.String r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.a
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
        Lb:
            java.util.List<java.lang.String> r0 = r1.a
            r0.add(r2)
            return
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

    public boolean a(com.xiaomi.push.id r6) {
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
            if (r1 == 0) goto L11a
            if (r2 != 0) goto L16
            goto L11a
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
            if (r1 == 0) goto L11a
            if (r2 != 0) goto L33
            goto L11a
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
            if (r1 == 0) goto L11a
            if (r2 != 0) goto L50
            goto L11a
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
            if (r1 == 0) goto L11a
            if (r2 != 0) goto L6d
            goto L11a
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
            if (r1 == 0) goto L11a
            if (r2 != 0) goto L8a
            goto L11a
        L8a:
            java.util.List<java.lang.String> r1 = r5.a
            java.util.List<java.lang.String> r2 = r6.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L95
            return r0
        L95:
            boolean r1 = r5.f()
            boolean r2 = r6.f()
            if (r1 != 0) goto La1
            if (r2 == 0) goto Lb2
        La1:
            if (r1 == 0) goto L11a
            if (r2 != 0) goto La7
            goto L11a
        La7:
            java.lang.String r1 = r5.d
            java.lang.String r2 = r6.d
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto Lb2
            return r0
        Lb2:
            boolean r1 = r5.g()
            boolean r2 = r6.g()
            if (r1 != 0) goto Lbe
            if (r2 == 0) goto Lce
        Lbe:
            if (r1 == 0) goto L11a
            if (r2 != 0) goto Lc3
            goto L11a
        Lc3:
            java.lang.String r1 = r5.e
            java.lang.String r2 = r6.e
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto Lce
            return r0
        Lce:
            boolean r1 = r5.h()
            boolean r2 = r6.h()
            if (r1 != 0) goto Lda
            if (r2 == 0) goto Le6
        Lda:
            if (r1 == 0) goto L11a
            if (r2 != 0) goto Ldf
            goto L11a
        Ldf:
            boolean r1 = r5.a
            boolean r2 = r6.a
            if (r1 == r2) goto Le6
            return r0
        Le6:
            boolean r1 = r5.i()
            boolean r2 = r6.i()
            if (r1 != 0) goto Lf2
            if (r2 == 0) goto Lfe
        Lf2:
            if (r1 == 0) goto L11a
            if (r2 != 0) goto Lf7
            goto L11a
        Lf7:
            boolean r1 = r5.b
            boolean r2 = r6.b
            if (r1 == r2) goto Lfe
            return r0
        Lfe:
            boolean r1 = r5.j()
            boolean r2 = r6.j()
            if (r1 != 0) goto L10a
            if (r2 == 0) goto L118
        L10a:
            if (r1 == 0) goto L11a
            if (r2 != 0) goto L10f
            goto L11a
        L10f:
            long r1 = r5.a
            long r3 = r6.a
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 == 0) goto L118
            return r0
        L118:
            r6 = 1
            return r6
        L11a:
            return r0
    }

    public com.xiaomi.push.id b(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return r0
    }

    @Override
    public void b(com.xiaomi.push.jf r4) {
            r3 = this;
            r3.a()
            com.xiaomi.push.jk r0 = com.xiaomi.push.id.a
            r4.a(r0)
            com.xiaomi.push.hy r0 = r3.a
            if (r0 == 0) goto L1f
            boolean r0 = r3.a()
            if (r0 == 0) goto L1f
            com.xiaomi.push.jc r0 = com.xiaomi.push.id.a
            r4.a(r0)
            com.xiaomi.push.hy r0 = r3.a
            r0.b(r4)
            r4.b()
        L1f:
            java.lang.String r0 = r3.a
            if (r0 == 0) goto L30
            com.xiaomi.push.jc r0 = com.xiaomi.push.id.b
            r4.a(r0)
            java.lang.String r0 = r3.a
            r4.a(r0)
            r4.b()
        L30:
            java.lang.String r0 = r3.b
            if (r0 == 0) goto L41
            com.xiaomi.push.jc r0 = com.xiaomi.push.id.c
            r4.a(r0)
            java.lang.String r0 = r3.b
            r4.a(r0)
            r4.b()
        L41:
            java.lang.String r0 = r3.c
            if (r0 == 0) goto L52
            com.xiaomi.push.jc r0 = com.xiaomi.push.id.d
            r4.a(r0)
            java.lang.String r0 = r3.c
            r4.a(r0)
            r4.b()
        L52:
            java.util.List<java.lang.String> r0 = r3.a
            if (r0 == 0) goto L8d
            boolean r0 = r3.e()
            if (r0 == 0) goto L8d
            com.xiaomi.push.jc r0 = com.xiaomi.push.id.e
            r4.a(r0)
            com.xiaomi.push.jd r0 = new com.xiaomi.push.jd
            r1 = 11
            java.util.List<java.lang.String> r2 = r3.a
            int r2 = r2.size()
            r0.<init>(r1, r2)
            r4.a(r0)
            java.util.List<java.lang.String> r0 = r3.a
            java.util.Iterator r0 = r0.iterator()
        L77:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L87
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            r4.a(r1)
            goto L77
        L87:
            r4.e()
            r4.b()
        L8d:
            java.lang.String r0 = r3.d
            if (r0 == 0) goto La4
            boolean r0 = r3.f()
            if (r0 == 0) goto La4
            com.xiaomi.push.jc r0 = com.xiaomi.push.id.f
            r4.a(r0)
            java.lang.String r0 = r3.d
            r4.a(r0)
            r4.b()
        La4:
            java.lang.String r0 = r3.e
            if (r0 == 0) goto Lbb
            boolean r0 = r3.g()
            if (r0 == 0) goto Lbb
            com.xiaomi.push.jc r0 = com.xiaomi.push.id.g
            r4.a(r0)
            java.lang.String r0 = r3.e
            r4.a(r0)
            r4.b()
        Lbb:
            boolean r0 = r3.h()
            if (r0 == 0) goto Lce
            com.xiaomi.push.jc r0 = com.xiaomi.push.id.h
            r4.a(r0)
            boolean r0 = r3.a
            r4.a(r0)
            r4.b()
        Lce:
            boolean r0 = r3.i()
            if (r0 == 0) goto Le1
            com.xiaomi.push.jc r0 = com.xiaomi.push.id.i
            r4.a(r0)
            boolean r0 = r3.b
            r4.a(r0)
            r4.b()
        Le1:
            boolean r0 = r3.j()
            if (r0 == 0) goto Lf4
            com.xiaomi.push.jc r0 = com.xiaomi.push.id.j
            r4.a(r0)
            long r0 = r3.a
            r4.a(r0)
            r4.b()
        Lf4:
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

    public com.xiaomi.push.id c(java.lang.String r1) {
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
            com.xiaomi.push.id r1 = (com.xiaomi.push.id) r1
            int r1 = r0.a(r1)
            return r1
    }

    public com.xiaomi.push.id d(java.lang.String r1) {
            r0 = this;
            r0.d = r1
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

    public com.xiaomi.push.id e(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return r0
    }

    public boolean e() {
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

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3 instanceof com.xiaomi.push.id
            if (r1 == 0) goto Lf
            com.xiaomi.push.id r3 = (com.xiaomi.push.id) r3
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
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 0
            boolean r0 = r0.get(r1)
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
            r1 = 1
            boolean r0 = r0.get(r1)
            return r0
    }

    public boolean j() {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 2
            boolean r0 = r0.get(r1)
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "XmPushActionCommand("
            r0.<init>(r1)
            boolean r1 = r4.a()
            java.lang.String r2 = "null"
            if (r1 == 0) goto L21
            java.lang.String r1 = "target:"
            r0.append(r1)
            com.xiaomi.push.hy r1 = r4.a
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
            java.lang.String r1 = r4.a
            if (r1 != 0) goto L36
            r0.append(r2)
            goto L39
        L36:
            r0.append(r1)
        L39:
            r0.append(r3)
            java.lang.String r1 = "appId:"
            r0.append(r1)
            java.lang.String r1 = r4.b
            if (r1 != 0) goto L49
            r0.append(r2)
            goto L4c
        L49:
            r0.append(r1)
        L4c:
            r0.append(r3)
            java.lang.String r1 = "cmdName:"
            r0.append(r1)
            java.lang.String r1 = r4.c
            if (r1 != 0) goto L5c
            r0.append(r2)
            goto L5f
        L5c:
            r0.append(r1)
        L5f:
            boolean r1 = r4.e()
            if (r1 == 0) goto L78
            r0.append(r3)
            java.lang.String r1 = "cmdArgs:"
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r4.a
            if (r1 != 0) goto L75
            r0.append(r2)
            goto L78
        L75:
            r0.append(r1)
        L78:
            boolean r1 = r4.f()
            if (r1 == 0) goto L91
            r0.append(r3)
            java.lang.String r1 = "packageName:"
            r0.append(r1)
            java.lang.String r1 = r4.d
            if (r1 != 0) goto L8e
            r0.append(r2)
            goto L91
        L8e:
            r0.append(r1)
        L91:
            boolean r1 = r4.g()
            if (r1 == 0) goto Laa
            r0.append(r3)
            java.lang.String r1 = "category:"
            r0.append(r1)
            java.lang.String r1 = r4.e
            if (r1 != 0) goto La7
            r0.append(r2)
            goto Laa
        La7:
            r0.append(r1)
        Laa:
            boolean r1 = r4.h()
            if (r1 == 0) goto Lbd
            r0.append(r3)
            java.lang.String r1 = "updateCache:"
            r0.append(r1)
            boolean r1 = r4.a
            r0.append(r1)
        Lbd:
            boolean r1 = r4.i()
            if (r1 == 0) goto Ld0
            r0.append(r3)
            java.lang.String r1 = "response2Client:"
            r0.append(r1)
            boolean r1 = r4.b
            r0.append(r1)
        Ld0:
            boolean r1 = r4.j()
            if (r1 == 0) goto Le3
            r0.append(r3)
            java.lang.String r1 = "createdTs:"
            r0.append(r1)
            long r1 = r4.a
            r0.append(r1)
        Le3:
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
