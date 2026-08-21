package com.xiaomi.push;

public class ii implements com.xiaomi.push.iu<com.xiaomi.push.ii, java.lang.Object>, java.io.Serializable, java.lang.Cloneable {
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
    private static final com.xiaomi.push.jc m = null;
    private static final com.xiaomi.push.jc n = null;
    private static final com.xiaomi.push.jc o = null;
    public long a;
    public com.xiaomi.push.hy a;
    public java.lang.String a;
    public java.nio.ByteBuffer a;
    private java.util.BitSet a;
    public java.util.Map<java.lang.String, java.lang.String> a;
    public boolean a;
    public java.lang.String b;
    public boolean b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public java.lang.String f;
    public java.lang.String g;
    public java.lang.String h;
    public java.lang.String i;

    static {
            com.xiaomi.push.jk r0 = new com.xiaomi.push.jk
            java.lang.String r1 = "XmPushActionNotification"
            r0.<init>(r1)
            com.xiaomi.push.ii.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 11
            java.lang.String r2 = ""
            r3 = 1
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.ii.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 12
            r4 = 2
            r0.<init>(r2, r3, r4)
            com.xiaomi.push.ii.b = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 3
            r0.<init>(r2, r1, r5)
            com.xiaomi.push.ii.c = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 4
            r0.<init>(r2, r1, r5)
            com.xiaomi.push.ii.d = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 5
            r0.<init>(r2, r1, r5)
            com.xiaomi.push.ii.e = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 6
            r0.<init>(r2, r4, r5)
            com.xiaomi.push.ii.f = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 7
            r0.<init>(r2, r1, r5)
            com.xiaomi.push.ii.g = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 13
            r6 = 8
            r0.<init>(r2, r5, r6)
            com.xiaomi.push.ii.h = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r6 = 9
            r0.<init>(r2, r1, r6)
            com.xiaomi.push.ii.i = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r6 = 10
            r0.<init>(r2, r1, r6)
            com.xiaomi.push.ii.j = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.ii.k = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r0.<init>(r2, r1, r5)
            com.xiaomi.push.ii.l = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 14
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.ii.m = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 15
            r0.<init>(r2, r6, r1)
            com.xiaomi.push.ii.n = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 20
            r0.<init>(r2, r4, r1)
            com.xiaomi.push.ii.o = r0
            return
    }

    public ii() {
            r2 = this;
            r2.<init>()
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 3
            r0.<init>(r1)
            r2.a = r0
            r0 = 1
            r2.a = r0
            r0 = 0
            r2.b = r0
            return
    }

    public ii(java.lang.String r1, boolean r2) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.a = r2
            r1 = 1
            r0.a(r1)
            return
    }

    public int a(com.xiaomi.push.ii r5) {
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
            boolean r0 = r4.a
            boolean r1 = r5.a
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
            java.lang.String r1 = r5.g
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L1b3
            return r0
        L1b3:
            boolean r0 = r4.k()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.k()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L1ca
            return r0
        L1ca:
            boolean r0 = r4.k()
            if (r0 == 0) goto L1db
            java.lang.String r0 = r4.h
            java.lang.String r1 = r5.h
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L1db
            return r0
        L1db:
            boolean r0 = r4.l()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.l()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L1f2
            return r0
        L1f2:
            boolean r0 = r4.l()
            if (r0 == 0) goto L203
            java.lang.String r0 = r4.i
            java.lang.String r1 = r5.i
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L203
            return r0
        L203:
            boolean r0 = r4.m()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.m()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L21a
            return r0
        L21a:
            boolean r0 = r4.m()
            if (r0 == 0) goto L22b
            java.nio.ByteBuffer r0 = r4.a
            java.nio.ByteBuffer r1 = r5.a
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L22b
            return r0
        L22b:
            boolean r0 = r4.n()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.n()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L242
            return r0
        L242:
            boolean r0 = r4.n()
            if (r0 == 0) goto L253
            long r0 = r4.a
            long r2 = r5.a
            int r0 = com.xiaomi.push.iv.a(r0, r2)
            if (r0 == 0) goto L253
            return r0
        L253:
            boolean r0 = r4.o()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.o()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L26a
            return r0
        L26a:
            boolean r0 = r4.o()
            if (r0 == 0) goto L27b
            boolean r0 = r4.b
            boolean r5 = r5.b
            int r5 = com.xiaomi.push.iv.a(r0, r5)
            if (r5 == 0) goto L27b
            return r5
        L27b:
            r5 = 0
            return r5
    }

    public com.xiaomi.push.hy a() {
            r1 = this;
            com.xiaomi.push.hy r0 = r1.a
            return r0
    }

    public com.xiaomi.push.ii a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return r0
    }

    public com.xiaomi.push.ii a(java.nio.ByteBuffer r1) {
            r0 = this;
            r0.a = r1
            return r0
    }

    public com.xiaomi.push.ii a(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.a = r1
            return r0
    }

    public com.xiaomi.push.ii a(boolean r1) {
            r0 = this;
            r0.a = r1
            r1 = 1
            r0.a(r1)
            return r0
    }

    public com.xiaomi.push.ii a(byte[] r1) {
            r0 = this;
            java.nio.ByteBuffer r1 = java.nio.ByteBuffer.wrap(r1)
            r0.a(r1)
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
            if (r1 != 0) goto L33
            r6.f()
            boolean r6 = r5.f()
            if (r6 == 0) goto L18
            r5.a()
            return
        L18:
            com.xiaomi.push.jg r6 = new com.xiaomi.push.jg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Required field 'requireAck' was not found in serialized data! Struct: "
            r0.append(r1)
            java.lang.String r1 = r5.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            throw r6
        L33:
            short r1 = r0.a
            r2 = 2
            r3 = 1
            r4 = 11
            switch(r1) {
                case 1: goto L117;
                case 2: goto L106;
                case 3: goto Lfb;
                case 4: goto Lf0;
                case 5: goto Le5;
                case 6: goto Ld7;
                case 7: goto Lcc;
                case 8: goto L9f;
                case 9: goto L93;
                case 10: goto L87;
                case 11: goto L3c;
                case 12: goto L7b;
                case 13: goto L6f;
                case 14: goto L63;
                case 15: goto L52;
                case 16: goto L3c;
                case 17: goto L3c;
                case 18: goto L3c;
                case 19: goto L3c;
                case 20: goto L43;
                default: goto L3c;
            }
        L3c:
            byte r0 = r0.a
            com.xiaomi.push.ji.a(r6, r0)
            goto L121
        L43:
            byte r1 = r0.a
            if (r1 != r2) goto L3c
            boolean r0 = r6.a()
            r5.b = r0
            r5.c(r3)
            goto L121
        L52:
            byte r1 = r0.a
            r2 = 10
            if (r1 != r2) goto L3c
            long r0 = r6.a()
            r5.a = r0
            r5.b(r3)
            goto L121
        L63:
            byte r1 = r0.a
            if (r1 != r4) goto L3c
            java.nio.ByteBuffer r0 = r6.a()
            r5.a = r0
            goto L121
        L6f:
            byte r1 = r0.a
            if (r1 != r4) goto L3c
            java.lang.String r0 = r6.a()
            r5.i = r0
            goto L121
        L7b:
            byte r1 = r0.a
            if (r1 != r4) goto L3c
            java.lang.String r0 = r6.a()
            r5.h = r0
            goto L121
        L87:
            byte r1 = r0.a
            if (r1 != r4) goto L3c
            java.lang.String r0 = r6.a()
            r5.g = r0
            goto L121
        L93:
            byte r1 = r0.a
            if (r1 != r4) goto L3c
            java.lang.String r0 = r6.a()
            r5.f = r0
            goto L121
        L9f:
            byte r1 = r0.a
            r3 = 13
            if (r1 != r3) goto L3c
            com.xiaomi.push.je r0 = r6.a()
            java.util.HashMap r1 = new java.util.HashMap
            int r3 = r0.a
            int r3 = r3 * r2
            r1.<init>(r3)
            r5.a = r1
            r1 = 0
        Lb4:
            int r2 = r0.a
            if (r1 >= r2) goto Lc8
            java.lang.String r2 = r6.a()
            java.lang.String r3 = r6.a()
            java.util.Map<java.lang.String, java.lang.String> r4 = r5.a
            r4.put(r2, r3)
            int r1 = r1 + 1
            goto Lb4
        Lc8:
            r6.h()
            goto L121
        Lcc:
            byte r1 = r0.a
            if (r1 != r4) goto L3c
            java.lang.String r0 = r6.a()
            r5.e = r0
            goto L121
        Ld7:
            byte r1 = r0.a
            if (r1 != r2) goto L3c
            boolean r0 = r6.a()
            r5.a = r0
            r5.a(r3)
            goto L121
        Le5:
            byte r1 = r0.a
            if (r1 != r4) goto L3c
            java.lang.String r0 = r6.a()
            r5.d = r0
            goto L121
        Lf0:
            byte r1 = r0.a
            if (r1 != r4) goto L3c
            java.lang.String r0 = r6.a()
            r5.c = r0
            goto L121
        Lfb:
            byte r1 = r0.a
            if (r1 != r4) goto L3c
            java.lang.String r0 = r6.a()
            r5.b = r0
            goto L121
        L106:
            byte r1 = r0.a
            r2 = 12
            if (r1 != r2) goto L3c
            com.xiaomi.push.hy r0 = new com.xiaomi.push.hy
            r0.<init>()
            r5.a = r0
            r0.a(r6)
            goto L121
        L117:
            byte r1 = r0.a
            if (r1 != r4) goto L3c
            java.lang.String r0 = r6.a()
            r5.a = r0
        L121:
            r6.g()
            goto L3
    }

    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.a
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
        Lb:
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.a
            r0.put(r2, r3)
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
            java.lang.String r0 = r1.a
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean a(com.xiaomi.push.ii r6) {
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
            if (r1 == 0) goto L199
            if (r2 != 0) goto L16
            goto L199
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
            if (r1 == 0) goto L199
            if (r2 != 0) goto L33
            goto L199
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
            if (r1 == 0) goto L199
            if (r2 != 0) goto L50
            goto L199
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
            if (r1 == 0) goto L199
            if (r2 != 0) goto L6d
            goto L199
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
            if (r1 == 0) goto L199
            if (r2 != 0) goto L8a
            goto L199
        L8a:
            java.lang.String r1 = r5.d
            java.lang.String r2 = r6.d
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L95
            return r0
        L95:
            boolean r1 = r5.a
            boolean r2 = r6.a
            if (r1 == r2) goto L9c
            return r0
        L9c:
            boolean r1 = r5.g()
            boolean r2 = r6.g()
            if (r1 != 0) goto La8
            if (r2 == 0) goto Lb9
        La8:
            if (r1 == 0) goto L199
            if (r2 != 0) goto Lae
            goto L199
        Lae:
            java.lang.String r1 = r5.e
            java.lang.String r2 = r6.e
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto Lb9
            return r0
        Lb9:
            boolean r1 = r5.h()
            boolean r2 = r6.h()
            if (r1 != 0) goto Lc5
            if (r2 == 0) goto Ld6
        Lc5:
            if (r1 == 0) goto L199
            if (r2 != 0) goto Lcb
            goto L199
        Lcb:
            java.util.Map<java.lang.String, java.lang.String> r1 = r5.a
            java.util.Map<java.lang.String, java.lang.String> r2 = r6.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto Ld6
            return r0
        Ld6:
            boolean r1 = r5.i()
            boolean r2 = r6.i()
            if (r1 != 0) goto Le2
            if (r2 == 0) goto Lf3
        Le2:
            if (r1 == 0) goto L199
            if (r2 != 0) goto Le8
            goto L199
        Le8:
            java.lang.String r1 = r5.f
            java.lang.String r2 = r6.f
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto Lf3
            return r0
        Lf3:
            boolean r1 = r5.j()
            boolean r2 = r6.j()
            if (r1 != 0) goto Lff
            if (r2 == 0) goto L110
        Lff:
            if (r1 == 0) goto L199
            if (r2 != 0) goto L105
            goto L199
        L105:
            java.lang.String r1 = r5.g
            java.lang.String r2 = r6.g
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L110
            return r0
        L110:
            boolean r1 = r5.k()
            boolean r2 = r6.k()
            if (r1 != 0) goto L11c
            if (r2 == 0) goto L12d
        L11c:
            if (r1 == 0) goto L199
            if (r2 != 0) goto L122
            goto L199
        L122:
            java.lang.String r1 = r5.h
            java.lang.String r2 = r6.h
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L12d
            return r0
        L12d:
            boolean r1 = r5.l()
            boolean r2 = r6.l()
            if (r1 != 0) goto L139
            if (r2 == 0) goto L149
        L139:
            if (r1 == 0) goto L199
            if (r2 != 0) goto L13e
            goto L199
        L13e:
            java.lang.String r1 = r5.i
            java.lang.String r2 = r6.i
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L149
            return r0
        L149:
            boolean r1 = r5.m()
            boolean r2 = r6.m()
            if (r1 != 0) goto L155
            if (r2 == 0) goto L165
        L155:
            if (r1 == 0) goto L199
            if (r2 != 0) goto L15a
            goto L199
        L15a:
            java.nio.ByteBuffer r1 = r5.a
            java.nio.ByteBuffer r2 = r6.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L165
            return r0
        L165:
            boolean r1 = r5.n()
            boolean r2 = r6.n()
            if (r1 != 0) goto L171
            if (r2 == 0) goto L17f
        L171:
            if (r1 == 0) goto L199
            if (r2 != 0) goto L176
            goto L199
        L176:
            long r1 = r5.a
            long r3 = r6.a
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto L17f
            return r0
        L17f:
            boolean r1 = r5.o()
            boolean r2 = r6.o()
            if (r1 != 0) goto L18b
            if (r2 == 0) goto L197
        L18b:
            if (r1 == 0) goto L199
            if (r2 != 0) goto L190
            goto L199
        L190:
            boolean r1 = r5.b
            boolean r6 = r6.b
            if (r1 == r6) goto L197
            return r0
        L197:
            r6 = 1
            return r6
        L199:
            return r0
    }

    public byte[] a() {
            r1 = this;
            java.nio.ByteBuffer r0 = r1.a
            java.nio.ByteBuffer r0 = com.xiaomi.push.iv.a(r0)
            r1.a(r0)
            java.nio.ByteBuffer r0 = r1.a
            byte[] r0 = r0.array()
            return r0
    }

    public com.xiaomi.push.ii b(java.lang.String r1) {
            r0 = this;
            r0.c = r1
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
            com.xiaomi.push.jk r0 = com.xiaomi.push.ii.a
            r4.a(r0)
            java.lang.String r0 = r3.a
            if (r0 == 0) goto L1f
            boolean r0 = r3.a()
            if (r0 == 0) goto L1f
            com.xiaomi.push.jc r0 = com.xiaomi.push.ii.a
            r4.a(r0)
            java.lang.String r0 = r3.a
            r4.a(r0)
            r4.b()
        L1f:
            com.xiaomi.push.hy r0 = r3.a
            if (r0 == 0) goto L36
            boolean r0 = r3.b()
            if (r0 == 0) goto L36
            com.xiaomi.push.jc r0 = com.xiaomi.push.ii.b
            r4.a(r0)
            com.xiaomi.push.hy r0 = r3.a
            r0.b(r4)
            r4.b()
        L36:
            java.lang.String r0 = r3.b
            if (r0 == 0) goto L47
            com.xiaomi.push.jc r0 = com.xiaomi.push.ii.c
            r4.a(r0)
            java.lang.String r0 = r3.b
            r4.a(r0)
            r4.b()
        L47:
            java.lang.String r0 = r3.c
            if (r0 == 0) goto L5e
            boolean r0 = r3.d()
            if (r0 == 0) goto L5e
            com.xiaomi.push.jc r0 = com.xiaomi.push.ii.d
            r4.a(r0)
            java.lang.String r0 = r3.c
            r4.a(r0)
            r4.b()
        L5e:
            java.lang.String r0 = r3.d
            if (r0 == 0) goto L75
            boolean r0 = r3.e()
            if (r0 == 0) goto L75
            com.xiaomi.push.jc r0 = com.xiaomi.push.ii.e
            r4.a(r0)
            java.lang.String r0 = r3.d
            r4.a(r0)
            r4.b()
        L75:
            com.xiaomi.push.jc r0 = com.xiaomi.push.ii.f
            r4.a(r0)
            boolean r0 = r3.a
            r4.a(r0)
            r4.b()
            java.lang.String r0 = r3.e
            if (r0 == 0) goto L99
            boolean r0 = r3.g()
            if (r0 == 0) goto L99
            com.xiaomi.push.jc r0 = com.xiaomi.push.ii.g
            r4.a(r0)
            java.lang.String r0 = r3.e
            r4.a(r0)
            r4.b()
        L99:
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.a
            if (r0 == 0) goto Le7
            boolean r0 = r3.h()
            if (r0 == 0) goto Le7
            com.xiaomi.push.jc r0 = com.xiaomi.push.ii.h
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
        Lc2:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto Le1
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            r4.a(r2)
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r4.a(r1)
            goto Lc2
        Le1:
            r4.d()
            r4.b()
        Le7:
            java.lang.String r0 = r3.f
            if (r0 == 0) goto Lfe
            boolean r0 = r3.i()
            if (r0 == 0) goto Lfe
            com.xiaomi.push.jc r0 = com.xiaomi.push.ii.i
            r4.a(r0)
            java.lang.String r0 = r3.f
            r4.a(r0)
            r4.b()
        Lfe:
            java.lang.String r0 = r3.g
            if (r0 == 0) goto L115
            boolean r0 = r3.j()
            if (r0 == 0) goto L115
            com.xiaomi.push.jc r0 = com.xiaomi.push.ii.j
            r4.a(r0)
            java.lang.String r0 = r3.g
            r4.a(r0)
            r4.b()
        L115:
            java.lang.String r0 = r3.h
            if (r0 == 0) goto L12c
            boolean r0 = r3.k()
            if (r0 == 0) goto L12c
            com.xiaomi.push.jc r0 = com.xiaomi.push.ii.k
            r4.a(r0)
            java.lang.String r0 = r3.h
            r4.a(r0)
            r4.b()
        L12c:
            java.lang.String r0 = r3.i
            if (r0 == 0) goto L143
            boolean r0 = r3.l()
            if (r0 == 0) goto L143
            com.xiaomi.push.jc r0 = com.xiaomi.push.ii.l
            r4.a(r0)
            java.lang.String r0 = r3.i
            r4.a(r0)
            r4.b()
        L143:
            java.nio.ByteBuffer r0 = r3.a
            if (r0 == 0) goto L15a
            boolean r0 = r3.m()
            if (r0 == 0) goto L15a
            com.xiaomi.push.jc r0 = com.xiaomi.push.ii.m
            r4.a(r0)
            java.nio.ByteBuffer r0 = r3.a
            r4.a(r0)
            r4.b()
        L15a:
            boolean r0 = r3.n()
            if (r0 == 0) goto L16d
            com.xiaomi.push.jc r0 = com.xiaomi.push.ii.n
            r4.a(r0)
            long r0 = r3.a
            r4.a(r0)
            r4.b()
        L16d:
            boolean r0 = r3.o()
            if (r0 == 0) goto L180
            com.xiaomi.push.jc r0 = com.xiaomi.push.ii.o
            r4.a(r0)
            boolean r0 = r3.b
            r4.a(r0)
            r4.b()
        L180:
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
            com.xiaomi.push.hy r0 = r1.a
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public com.xiaomi.push.ii c(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.f
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
            com.xiaomi.push.ii r1 = (com.xiaomi.push.ii) r1
            int r1 = r0.a(r1)
            return r1
    }

    public com.xiaomi.push.ii d(java.lang.String r1) {
            r0 = this;
            r0.f = r1
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
            boolean r1 = r3 instanceof com.xiaomi.push.ii
            if (r1 == 0) goto Lf
            com.xiaomi.push.ii r3 = (com.xiaomi.push.ii) r3
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

    public boolean k() {
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

    public boolean l() {
            r1 = this;
            java.lang.String r0 = r1.i
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean m() {
            r1 = this;
            java.nio.ByteBuffer r0 = r1.a
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean n() {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 1
            boolean r0 = r0.get(r1)
            return r0
    }

    public boolean o() {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 2
            boolean r0 = r0.get(r1)
            return r0
    }

    public java.lang.String toString() {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "XmPushActionNotification("
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
            r0.append(r5)
            java.lang.String r1 = "requireAck:"
            r0.append(r1)
            boolean r1 = r6.a
            r0.append(r1)
            boolean r1 = r6.g()
            if (r1 == 0) goto Laf
            r0.append(r5)
            java.lang.String r1 = "payload:"
            r0.append(r1)
            java.lang.String r1 = r6.e
            if (r1 != 0) goto Lac
            r0.append(r3)
            goto Laf
        Lac:
            r0.append(r1)
        Laf:
            boolean r1 = r6.h()
            if (r1 == 0) goto Lc8
            r0.append(r5)
            java.lang.String r1 = "extra:"
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r6.a
            if (r1 != 0) goto Lc5
            r0.append(r3)
            goto Lc8
        Lc5:
            r0.append(r1)
        Lc8:
            boolean r1 = r6.i()
            if (r1 == 0) goto Le1
            r0.append(r5)
            java.lang.String r1 = "packageName:"
            r0.append(r1)
            java.lang.String r1 = r6.f
            if (r1 != 0) goto Lde
            r0.append(r3)
            goto Le1
        Lde:
            r0.append(r1)
        Le1:
            boolean r1 = r6.j()
            if (r1 == 0) goto Lfa
            r0.append(r5)
            java.lang.String r1 = "category:"
            r0.append(r1)
            java.lang.String r1 = r6.g
            if (r1 != 0) goto Lf7
            r0.append(r3)
            goto Lfa
        Lf7:
            r0.append(r1)
        Lfa:
            boolean r1 = r6.k()
            if (r1 == 0) goto L113
            r0.append(r5)
            java.lang.String r1 = "regId:"
            r0.append(r1)
            java.lang.String r1 = r6.h
            if (r1 != 0) goto L110
            r0.append(r3)
            goto L113
        L110:
            r0.append(r1)
        L113:
            boolean r1 = r6.l()
            if (r1 == 0) goto L12c
            r0.append(r5)
            java.lang.String r1 = "aliasName:"
            r0.append(r1)
            java.lang.String r1 = r6.i
            if (r1 != 0) goto L129
            r0.append(r3)
            goto L12c
        L129:
            r0.append(r1)
        L12c:
            boolean r1 = r6.m()
            if (r1 == 0) goto L145
            r0.append(r5)
            java.lang.String r1 = "binaryExtra:"
            r0.append(r1)
            java.nio.ByteBuffer r1 = r6.a
            if (r1 != 0) goto L142
            r0.append(r3)
            goto L145
        L142:
            com.xiaomi.push.iv.a(r1, r0)
        L145:
            boolean r1 = r6.n()
            if (r1 == 0) goto L158
            r0.append(r5)
            java.lang.String r1 = "createdTs:"
            r0.append(r1)
            long r1 = r6.a
            r0.append(r1)
        L158:
            boolean r1 = r6.o()
            if (r1 == 0) goto L16b
            r0.append(r5)
            java.lang.String r1 = "alreadyLogClickInXmq:"
            r0.append(r1)
            boolean r1 = r6.b
            r0.append(r1)
        L16b:
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
