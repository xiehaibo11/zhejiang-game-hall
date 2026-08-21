package com.xiaomi.push;

public class hw implements com.xiaomi.push.iu<com.xiaomi.push.hw, java.lang.Object>, java.io.Serializable, java.lang.Cloneable {
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
    public int a;
    public long a;
    public java.lang.String a;
    private java.util.BitSet a;
    public java.util.Map<java.lang.String, java.lang.String> a;
    public boolean a;
    public int b;
    public java.lang.String b;
    public java.util.Map<java.lang.String, java.lang.String> b;
    public int c;
    public java.lang.String c;
    public java.util.Map<java.lang.String, java.lang.String> c;
    public java.lang.String d;
    public java.lang.String e;

    static {
            com.xiaomi.push.jk r0 = new com.xiaomi.push.jk
            java.lang.String r1 = "PushMetaInfo"
            r0.<init>(r1)
            com.xiaomi.push.hw.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 11
            java.lang.String r2 = ""
            r3 = 1
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.hw.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 2
            r4 = 10
            r0.<init>(r2, r4, r3)
            com.xiaomi.push.hw.b = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 3
            r0.<init>(r2, r1, r5)
            com.xiaomi.push.hw.c = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 4
            r0.<init>(r2, r1, r5)
            com.xiaomi.push.hw.d = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 5
            r0.<init>(r2, r1, r5)
            com.xiaomi.push.hw.e = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 8
            r6 = 6
            r0.<init>(r2, r5, r6)
            com.xiaomi.push.hw.f = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r6 = 7
            r0.<init>(r2, r1, r6)
            com.xiaomi.push.hw.g = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r0.<init>(r2, r5, r5)
            com.xiaomi.push.hw.h = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r6 = 9
            r0.<init>(r2, r5, r6)
            com.xiaomi.push.hw.i = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r5 = 13
            r0.<init>(r2, r5, r4)
            com.xiaomi.push.hw.j = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r0.<init>(r2, r5, r1)
            com.xiaomi.push.hw.k = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 12
            r0.<init>(r2, r3, r1)
            com.xiaomi.push.hw.l = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r0.<init>(r2, r5, r5)
            com.xiaomi.push.hw.m = r0
            return
    }

    public hw() {
            r2 = this;
            r2.<init>()
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 5
            r0.<init>(r1)
            r2.a = r0
            r0 = 0
            r2.a = r0
            return
    }

    public hw(com.xiaomi.push.hw r5) {
            r4 = this;
            r4.<init>()
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 5
            r0.<init>(r1)
            r4.a = r0
            r0.clear()
            java.util.BitSet r0 = r4.a
            java.util.BitSet r1 = r5.a
            r0.or(r1)
            boolean r0 = r5.a()
            if (r0 == 0) goto L1f
            java.lang.String r0 = r5.a
            r4.a = r0
        L1f:
            long r0 = r5.a
            r4.a = r0
            boolean r0 = r5.c()
            if (r0 == 0) goto L2d
            java.lang.String r0 = r5.b
            r4.b = r0
        L2d:
            boolean r0 = r5.d()
            if (r0 == 0) goto L37
            java.lang.String r0 = r5.c
            r4.c = r0
        L37:
            boolean r0 = r5.e()
            if (r0 == 0) goto L41
            java.lang.String r0 = r5.d
            r4.d = r0
        L41:
            int r0 = r5.a
            r4.a = r0
            boolean r0 = r5.g()
            if (r0 == 0) goto L4f
            java.lang.String r0 = r5.e
            r4.e = r0
        L4f:
            int r0 = r5.b
            r4.b = r0
            int r0 = r5.c
            r4.c = r0
            boolean r0 = r5.j()
            if (r0 == 0) goto L8a
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map<java.lang.String, java.lang.String> r1 = r5.a
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L6c:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L88
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            r0.put(r3, r2)
            goto L6c
        L88:
            r4.a = r0
        L8a:
            boolean r0 = r5.k()
            if (r0 == 0) goto Lbd
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map<java.lang.String, java.lang.String> r1 = r5.b
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L9f:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto Lbb
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            r0.put(r3, r2)
            goto L9f
        Lbb:
            r4.b = r0
        Lbd:
            boolean r0 = r5.a
            r4.a = r0
            boolean r0 = r5.n()
            if (r0 == 0) goto Lf4
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map<java.lang.String, java.lang.String> r5 = r5.c
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        Ld6:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto Lf2
            java.lang.Object r1 = r5.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r0.put(r2, r1)
            goto Ld6
        Lf2:
            r4.c = r0
        Lf4:
            return
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public int a(com.xiaomi.push.hw r5) {
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
            long r0 = r4.a
            long r2 = r5.a
            int r0 = com.xiaomi.push.iv.a(r0, r2)
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
            int r0 = r4.a
            int r1 = r5.a
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
            int r0 = r4.b
            int r1 = r5.b
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
            int r0 = r4.c
            int r1 = r5.c
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
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.a
            java.util.Map<java.lang.String, java.lang.String> r1 = r5.a
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
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.b
            java.util.Map<java.lang.String, java.lang.String> r1 = r5.b
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L1db
            return r0
        L1db:
            boolean r0 = r4.m()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.m()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L1f2
            return r0
        L1f2:
            boolean r0 = r4.m()
            if (r0 == 0) goto L203
            boolean r0 = r4.a
            boolean r1 = r5.a
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L203
            return r0
        L203:
            boolean r0 = r4.n()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.n()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L21a
            return r0
        L21a:
            boolean r0 = r4.n()
            if (r0 == 0) goto L22b
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.c
            java.util.Map<java.lang.String, java.lang.String> r5 = r5.c
            int r5 = com.xiaomi.push.iv.a(r0, r5)
            if (r5 == 0) goto L22b
            return r5
        L22b:
            r5 = 0
            return r5
    }

    public long a() {
            r2 = this;
            long r0 = r2.a
            return r0
    }

    public com.xiaomi.push.hw a() {
            r1 = this;
            com.xiaomi.push.hw r0 = new com.xiaomi.push.hw
            r0.<init>(r1)
            return r0
    }

    public com.xiaomi.push.hw a(int r1) {
            r0 = this;
            r0.a = r1
            r1 = 1
            r0.b(r1)
            return r0
    }

    public com.xiaomi.push.hw a(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return r0
    }

    public com.xiaomi.push.hw a(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.a = r1
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> a() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.a
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
            java.lang.String r2 = "Required field 'id' was not present! Struct: "
            r1.append(r2)
            java.lang.String r2 = r3.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void a(com.xiaomi.push.jf r9) {
            r8 = this;
            r9.a()
        L3:
            com.xiaomi.push.jc r0 = r9.a()
            byte r1 = r0.a
            if (r1 != 0) goto L33
            r9.f()
            boolean r9 = r8.b()
            if (r9 == 0) goto L18
            r8.a()
            return
        L18:
            com.xiaomi.push.jg r9 = new com.xiaomi.push.jg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Required field 'messageTs' was not found in serialized data! Struct: "
            r0.append(r1)
            java.lang.String r1 = r8.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r9.<init>(r0)
            throw r9
        L33:
            short r1 = r0.a
            r2 = 0
            r3 = 13
            r4 = 8
            r5 = 2
            r6 = 11
            r7 = 1
            switch(r1) {
                case 1: goto L134;
                case 2: goto L124;
                case 3: goto L119;
                case 4: goto L10e;
                case 5: goto L103;
                case 6: goto Lf5;
                case 7: goto Lea;
                case 8: goto Ldc;
                case 9: goto Lce;
                case 10: goto La3;
                case 11: goto L7d;
                case 12: goto L6e;
                case 13: goto L48;
                default: goto L41;
            }
        L41:
            byte r0 = r0.a
            com.xiaomi.push.ji.a(r9, r0)
            goto L13e
        L48:
            byte r1 = r0.a
            if (r1 != r3) goto L41
            com.xiaomi.push.je r0 = r9.a()
            java.util.HashMap r1 = new java.util.HashMap
            int r3 = r0.a
            int r3 = r3 * r5
            r1.<init>(r3)
            r8.c = r1
        L5a:
            int r1 = r0.a
            if (r2 >= r1) goto Lc9
            java.lang.String r1 = r9.a()
            java.lang.String r3 = r9.a()
            java.util.Map<java.lang.String, java.lang.String> r4 = r8.c
            r4.put(r1, r3)
            int r2 = r2 + 1
            goto L5a
        L6e:
            byte r1 = r0.a
            if (r1 != r5) goto L41
            boolean r0 = r9.a()
            r8.a = r0
            r8.e(r7)
            goto L13e
        L7d:
            byte r1 = r0.a
            if (r1 != r3) goto L41
            com.xiaomi.push.je r0 = r9.a()
            java.util.HashMap r1 = new java.util.HashMap
            int r3 = r0.a
            int r3 = r3 * r5
            r1.<init>(r3)
            r8.b = r1
        L8f:
            int r1 = r0.a
            if (r2 >= r1) goto Lc9
            java.lang.String r1 = r9.a()
            java.lang.String r3 = r9.a()
            java.util.Map<java.lang.String, java.lang.String> r4 = r8.b
            r4.put(r1, r3)
            int r2 = r2 + 1
            goto L8f
        La3:
            byte r1 = r0.a
            if (r1 != r3) goto L41
            com.xiaomi.push.je r0 = r9.a()
            java.util.HashMap r1 = new java.util.HashMap
            int r3 = r0.a
            int r3 = r3 * r5
            r1.<init>(r3)
            r8.a = r1
        Lb5:
            int r1 = r0.a
            if (r2 >= r1) goto Lc9
            java.lang.String r1 = r9.a()
            java.lang.String r3 = r9.a()
            java.util.Map<java.lang.String, java.lang.String> r4 = r8.a
            r4.put(r1, r3)
            int r2 = r2 + 1
            goto Lb5
        Lc9:
            r9.h()
            goto L13e
        Lce:
            byte r1 = r0.a
            if (r1 != r4) goto L41
            int r0 = r9.a()
            r8.c = r0
            r8.d(r7)
            goto L13e
        Ldc:
            byte r1 = r0.a
            if (r1 != r4) goto L41
            int r0 = r9.a()
            r8.b = r0
            r8.c(r7)
            goto L13e
        Lea:
            byte r1 = r0.a
            if (r1 != r6) goto L41
            java.lang.String r0 = r9.a()
            r8.e = r0
            goto L13e
        Lf5:
            byte r1 = r0.a
            if (r1 != r4) goto L41
            int r0 = r9.a()
            r8.a = r0
            r8.b(r7)
            goto L13e
        L103:
            byte r1 = r0.a
            if (r1 != r6) goto L41
            java.lang.String r0 = r9.a()
            r8.d = r0
            goto L13e
        L10e:
            byte r1 = r0.a
            if (r1 != r6) goto L41
            java.lang.String r0 = r9.a()
            r8.c = r0
            goto L13e
        L119:
            byte r1 = r0.a
            if (r1 != r6) goto L41
            java.lang.String r0 = r9.a()
            r8.b = r0
            goto L13e
        L124:
            byte r1 = r0.a
            r2 = 10
            if (r1 != r2) goto L41
            long r0 = r9.a()
            r8.a = r0
            r8.a(r7)
            goto L13e
        L134:
            byte r1 = r0.a
            if (r1 != r6) goto L41
            java.lang.String r0 = r9.a()
            r8.a = r0
        L13e:
            r9.g()
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

    public boolean a(com.xiaomi.push.hw r6) {
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
            if (r1 == 0) goto L157
            if (r2 != 0) goto L16
            goto L157
        L16:
            java.lang.String r1 = r5.a
            java.lang.String r2 = r6.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L21
            return r0
        L21:
            long r1 = r5.a
            long r3 = r6.a
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto L2a
            return r0
        L2a:
            boolean r1 = r5.c()
            boolean r2 = r6.c()
            if (r1 != 0) goto L36
            if (r2 == 0) goto L47
        L36:
            if (r1 == 0) goto L157
            if (r2 != 0) goto L3c
            goto L157
        L3c:
            java.lang.String r1 = r5.b
            java.lang.String r2 = r6.b
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L47
            return r0
        L47:
            boolean r1 = r5.d()
            boolean r2 = r6.d()
            if (r1 != 0) goto L53
            if (r2 == 0) goto L64
        L53:
            if (r1 == 0) goto L157
            if (r2 != 0) goto L59
            goto L157
        L59:
            java.lang.String r1 = r5.c
            java.lang.String r2 = r6.c
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L64
            return r0
        L64:
            boolean r1 = r5.e()
            boolean r2 = r6.e()
            if (r1 != 0) goto L70
            if (r2 == 0) goto L81
        L70:
            if (r1 == 0) goto L157
            if (r2 != 0) goto L76
            goto L157
        L76:
            java.lang.String r1 = r5.d
            java.lang.String r2 = r6.d
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L81
            return r0
        L81:
            boolean r1 = r5.f()
            boolean r2 = r6.f()
            if (r1 != 0) goto L8d
            if (r2 == 0) goto L9a
        L8d:
            if (r1 == 0) goto L157
            if (r2 != 0) goto L93
            goto L157
        L93:
            int r1 = r5.a
            int r2 = r6.a
            if (r1 == r2) goto L9a
            return r0
        L9a:
            boolean r1 = r5.g()
            boolean r2 = r6.g()
            if (r1 != 0) goto La6
            if (r2 == 0) goto Lb7
        La6:
            if (r1 == 0) goto L157
            if (r2 != 0) goto Lac
            goto L157
        Lac:
            java.lang.String r1 = r5.e
            java.lang.String r2 = r6.e
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto Lb7
            return r0
        Lb7:
            boolean r1 = r5.h()
            boolean r2 = r6.h()
            if (r1 != 0) goto Lc3
            if (r2 == 0) goto Ld0
        Lc3:
            if (r1 == 0) goto L157
            if (r2 != 0) goto Lc9
            goto L157
        Lc9:
            int r1 = r5.b
            int r2 = r6.b
            if (r1 == r2) goto Ld0
            return r0
        Ld0:
            boolean r1 = r5.i()
            boolean r2 = r6.i()
            if (r1 != 0) goto Ldc
            if (r2 == 0) goto Le9
        Ldc:
            if (r1 == 0) goto L157
            if (r2 != 0) goto Le2
            goto L157
        Le2:
            int r1 = r5.c
            int r2 = r6.c
            if (r1 == r2) goto Le9
            return r0
        Le9:
            boolean r1 = r5.j()
            boolean r2 = r6.j()
            if (r1 != 0) goto Lf5
            if (r2 == 0) goto L105
        Lf5:
            if (r1 == 0) goto L157
            if (r2 != 0) goto Lfa
            goto L157
        Lfa:
            java.util.Map<java.lang.String, java.lang.String> r1 = r5.a
            java.util.Map<java.lang.String, java.lang.String> r2 = r6.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L105
            return r0
        L105:
            boolean r1 = r5.k()
            boolean r2 = r6.k()
            if (r1 != 0) goto L111
            if (r2 == 0) goto L121
        L111:
            if (r1 == 0) goto L157
            if (r2 != 0) goto L116
            goto L157
        L116:
            java.util.Map<java.lang.String, java.lang.String> r1 = r5.b
            java.util.Map<java.lang.String, java.lang.String> r2 = r6.b
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L121
            return r0
        L121:
            boolean r1 = r5.m()
            boolean r2 = r6.m()
            if (r1 != 0) goto L12d
            if (r2 == 0) goto L139
        L12d:
            if (r1 == 0) goto L157
            if (r2 != 0) goto L132
            goto L157
        L132:
            boolean r1 = r5.a
            boolean r2 = r6.a
            if (r1 == r2) goto L139
            return r0
        L139:
            boolean r1 = r5.n()
            boolean r2 = r6.n()
            if (r1 != 0) goto L145
            if (r2 == 0) goto L155
        L145:
            if (r1 == 0) goto L157
            if (r2 != 0) goto L14a
            goto L157
        L14a:
            java.util.Map<java.lang.String, java.lang.String> r1 = r5.c
            java.util.Map<java.lang.String, java.lang.String> r6 = r6.c
            boolean r6 = r1.equals(r6)
            if (r6 != 0) goto L155
            return r0
        L155:
            r6 = 1
            return r6
        L157:
            return r0
    }

    public int b() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    public com.xiaomi.push.hw b(int r1) {
            r0 = this;
            r0.b = r1
            r1 = 1
            r0.c(r1)
            return r0
    }

    public com.xiaomi.push.hw b(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> b() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.b
            return r0
    }

    @Override
    public void b(com.xiaomi.push.jf r5) {
            r4 = this;
            r4.a()
            com.xiaomi.push.jk r0 = com.xiaomi.push.hw.a
            r5.a(r0)
            java.lang.String r0 = r4.a
            if (r0 == 0) goto L19
            com.xiaomi.push.jc r0 = com.xiaomi.push.hw.a
            r5.a(r0)
            java.lang.String r0 = r4.a
            r5.a(r0)
            r5.b()
        L19:
            com.xiaomi.push.jc r0 = com.xiaomi.push.hw.b
            r5.a(r0)
            long r0 = r4.a
            r5.a(r0)
            r5.b()
            java.lang.String r0 = r4.b
            if (r0 == 0) goto L3d
            boolean r0 = r4.c()
            if (r0 == 0) goto L3d
            com.xiaomi.push.jc r0 = com.xiaomi.push.hw.c
            r5.a(r0)
            java.lang.String r0 = r4.b
            r5.a(r0)
            r5.b()
        L3d:
            java.lang.String r0 = r4.c
            if (r0 == 0) goto L54
            boolean r0 = r4.d()
            if (r0 == 0) goto L54
            com.xiaomi.push.jc r0 = com.xiaomi.push.hw.d
            r5.a(r0)
            java.lang.String r0 = r4.c
            r5.a(r0)
            r5.b()
        L54:
            java.lang.String r0 = r4.d
            if (r0 == 0) goto L6b
            boolean r0 = r4.e()
            if (r0 == 0) goto L6b
            com.xiaomi.push.jc r0 = com.xiaomi.push.hw.e
            r5.a(r0)
            java.lang.String r0 = r4.d
            r5.a(r0)
            r5.b()
        L6b:
            boolean r0 = r4.f()
            if (r0 == 0) goto L7e
            com.xiaomi.push.jc r0 = com.xiaomi.push.hw.f
            r5.a(r0)
            int r0 = r4.a
            r5.a(r0)
            r5.b()
        L7e:
            java.lang.String r0 = r4.e
            if (r0 == 0) goto L95
            boolean r0 = r4.g()
            if (r0 == 0) goto L95
            com.xiaomi.push.jc r0 = com.xiaomi.push.hw.g
            r5.a(r0)
            java.lang.String r0 = r4.e
            r5.a(r0)
            r5.b()
        L95:
            boolean r0 = r4.h()
            if (r0 == 0) goto La8
            com.xiaomi.push.jc r0 = com.xiaomi.push.hw.h
            r5.a(r0)
            int r0 = r4.b
            r5.a(r0)
            r5.b()
        La8:
            boolean r0 = r4.i()
            if (r0 == 0) goto Lbb
            com.xiaomi.push.jc r0 = com.xiaomi.push.hw.i
            r5.a(r0)
            int r0 = r4.c
            r5.a(r0)
            r5.b()
        Lbb:
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.a
            r1 = 11
            if (r0 == 0) goto L109
            boolean r0 = r4.j()
            if (r0 == 0) goto L109
            com.xiaomi.push.jc r0 = com.xiaomi.push.hw.j
            r5.a(r0)
            com.xiaomi.push.je r0 = new com.xiaomi.push.je
            java.util.Map<java.lang.String, java.lang.String> r2 = r4.a
            int r2 = r2.size()
            r0.<init>(r1, r1, r2)
            r5.a(r0)
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.a
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        Le4:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L103
            java.lang.Object r2 = r0.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            r5.a(r3)
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            r5.a(r2)
            goto Le4
        L103:
            r5.d()
            r5.b()
        L109:
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.b
            if (r0 == 0) goto L155
            boolean r0 = r4.k()
            if (r0 == 0) goto L155
            com.xiaomi.push.jc r0 = com.xiaomi.push.hw.k
            r5.a(r0)
            com.xiaomi.push.je r0 = new com.xiaomi.push.je
            java.util.Map<java.lang.String, java.lang.String> r2 = r4.b
            int r2 = r2.size()
            r0.<init>(r1, r1, r2)
            r5.a(r0)
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.b
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L130:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L14f
            java.lang.Object r2 = r0.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            r5.a(r3)
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            r5.a(r2)
            goto L130
        L14f:
            r5.d()
            r5.b()
        L155:
            boolean r0 = r4.m()
            if (r0 == 0) goto L168
            com.xiaomi.push.jc r0 = com.xiaomi.push.hw.l
            r5.a(r0)
            boolean r0 = r4.a
            r5.a(r0)
            r5.b()
        L168:
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.c
            if (r0 == 0) goto L1b4
            boolean r0 = r4.n()
            if (r0 == 0) goto L1b4
            com.xiaomi.push.jc r0 = com.xiaomi.push.hw.m
            r5.a(r0)
            com.xiaomi.push.je r0 = new com.xiaomi.push.je
            java.util.Map<java.lang.String, java.lang.String> r2 = r4.c
            int r2 = r2.size()
            r0.<init>(r1, r1, r2)
            r5.a(r0)
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.c
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L18f:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1ae
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            r5.a(r2)
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r5.a(r1)
            goto L18f
        L1ae:
            r5.d()
            r5.b()
        L1b4:
            r5.c()
            r5.a()
            return
    }

    public void b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.b
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
        Lb:
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.b
            r0.put(r2, r3)
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
            r1 = 0
            boolean r0 = r0.get(r1)
            return r0
    }

    public int c() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    public com.xiaomi.push.hw c(int r1) {
            r0 = this;
            r0.c = r1
            r1 = 1
            r0.d(r1)
            return r0
    }

    public com.xiaomi.push.hw c(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.c
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
            com.xiaomi.push.hw r1 = (com.xiaomi.push.hw) r1
            int r1 = r0.a(r1)
            return r1
    }

    public com.xiaomi.push.hw d(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return r0
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.d
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
            java.lang.String r0 = r1.c
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
            boolean r1 = r3 instanceof com.xiaomi.push.hw
            if (r1 == 0) goto Lf
            com.xiaomi.push.hw r3 = (com.xiaomi.push.hw) r3
            boolean r3 = r2.a(r3)
            return r3
        Lf:
            return r0
    }

    public boolean f() {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 1
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
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 2
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
            r1 = 3
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
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.b
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
            boolean r0 = r1.a
            return r0
    }

    public boolean m() {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 4
            boolean r0 = r0.get(r1)
            return r0
    }

    public boolean n() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.c
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public java.lang.String toString() {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "PushMetaInfo("
            r0.<init>(r1)
            java.lang.String r1 = "id:"
            r0.append(r1)
            java.lang.String r1 = r5.a
            java.lang.String r2 = "null"
            if (r1 != 0) goto L16
            r0.append(r2)
            goto L19
        L16:
            r0.append(r1)
        L19:
            java.lang.String r1 = ", "
            r0.append(r1)
            java.lang.String r3 = "messageTs:"
            r0.append(r3)
            long r3 = r5.a
            r0.append(r3)
            boolean r3 = r5.c()
            if (r3 == 0) goto L41
            r0.append(r1)
            java.lang.String r3 = "topic:"
            r0.append(r3)
            java.lang.String r3 = r5.b
            if (r3 != 0) goto L3e
            r0.append(r2)
            goto L41
        L3e:
            r0.append(r3)
        L41:
            boolean r3 = r5.d()
            if (r3 == 0) goto L5a
            r0.append(r1)
            java.lang.String r3 = "title:"
            r0.append(r3)
            java.lang.String r3 = r5.c
            if (r3 != 0) goto L57
            r0.append(r2)
            goto L5a
        L57:
            r0.append(r3)
        L5a:
            boolean r3 = r5.e()
            if (r3 == 0) goto L73
            r0.append(r1)
            java.lang.String r3 = "description:"
            r0.append(r3)
            java.lang.String r3 = r5.d
            if (r3 != 0) goto L70
            r0.append(r2)
            goto L73
        L70:
            r0.append(r3)
        L73:
            boolean r3 = r5.f()
            if (r3 == 0) goto L86
            r0.append(r1)
            java.lang.String r3 = "notifyType:"
            r0.append(r3)
            int r3 = r5.a
            r0.append(r3)
        L86:
            boolean r3 = r5.g()
            if (r3 == 0) goto L9f
            r0.append(r1)
            java.lang.String r3 = "url:"
            r0.append(r3)
            java.lang.String r3 = r5.e
            if (r3 != 0) goto L9c
            r0.append(r2)
            goto L9f
        L9c:
            r0.append(r3)
        L9f:
            boolean r3 = r5.h()
            if (r3 == 0) goto Lb2
            r0.append(r1)
            java.lang.String r3 = "passThrough:"
            r0.append(r3)
            int r3 = r5.b
            r0.append(r3)
        Lb2:
            boolean r3 = r5.i()
            if (r3 == 0) goto Lc5
            r0.append(r1)
            java.lang.String r3 = "notifyId:"
            r0.append(r3)
            int r3 = r5.c
            r0.append(r3)
        Lc5:
            boolean r3 = r5.j()
            if (r3 == 0) goto Lde
            r0.append(r1)
            java.lang.String r3 = "extra:"
            r0.append(r3)
            java.util.Map<java.lang.String, java.lang.String> r3 = r5.a
            if (r3 != 0) goto Ldb
            r0.append(r2)
            goto Lde
        Ldb:
            r0.append(r3)
        Lde:
            boolean r3 = r5.k()
            if (r3 == 0) goto Lf7
            r0.append(r1)
            java.lang.String r3 = "internal:"
            r0.append(r3)
            java.util.Map<java.lang.String, java.lang.String> r3 = r5.b
            if (r3 != 0) goto Lf4
            r0.append(r2)
            goto Lf7
        Lf4:
            r0.append(r3)
        Lf7:
            boolean r3 = r5.m()
            if (r3 == 0) goto L10a
            r0.append(r1)
            java.lang.String r3 = "ignoreRegInfo:"
            r0.append(r3)
            boolean r3 = r5.a
            r0.append(r3)
        L10a:
            boolean r3 = r5.n()
            if (r3 == 0) goto L123
            r0.append(r1)
            java.lang.String r1 = "apsProperFields:"
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r5.c
            if (r1 != 0) goto L120
            r0.append(r2)
            goto L123
        L120:
            r0.append(r1)
        L123:
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
