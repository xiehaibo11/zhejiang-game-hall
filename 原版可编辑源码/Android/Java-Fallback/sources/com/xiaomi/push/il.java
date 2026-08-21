package com.xiaomi.push;

public class il implements com.xiaomi.push.iu<com.xiaomi.push.il, java.lang.Object>, java.io.Serializable, java.lang.Cloneable {
    private static final com.xiaomi.push.jc a = null;
    private static final com.xiaomi.push.jk a = null;
    private static final com.xiaomi.push.jc b = null;
    private static final com.xiaomi.push.jc c = null;
    private static final com.xiaomi.push.jc d = null;
    private static final com.xiaomi.push.jc e = null;
    private static final com.xiaomi.push.jc f = null;
    private static final com.xiaomi.push.jc g = null;
    public long a;
    public com.xiaomi.push.hy a;
    public java.lang.String a;
    private java.util.BitSet a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;

    static {
            com.xiaomi.push.jk r0 = new com.xiaomi.push.jk
            java.lang.String r1 = "XmPushActionSendFeedbackResult"
            r0.<init>(r1)
            com.xiaomi.push.il.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 11
            java.lang.String r2 = ""
            r3 = 1
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.il.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 12
            r4 = 2
            r0.<init>(r2, r3, r4)
            com.xiaomi.push.il.b = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 3
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.il.c = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 4
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.il.d = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 10
            r4 = 6
            r0.<init>(r2, r3, r4)
            com.xiaomi.push.il.e = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 7
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.il.f = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 8
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.il.g = r0
            return
    }

    public il() {
            r2 = this;
            r2.<init>()
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 1
            r0.<init>(r1)
            r2.a = r0
            return
    }

    public int a(com.xiaomi.push.il r5) {
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
            java.lang.String r5 = r5.e
            int r5 = com.xiaomi.push.iv.a(r0, r5)
            if (r5 == 0) goto L13b
            return r5
        L13b:
            r5 = 0
            return r5
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
    public void a(com.xiaomi.push.jf r4) {
            r3 = this;
            r4.a()
        L3:
            com.xiaomi.push.jc r0 = r4.a()
            byte r1 = r0.a
            if (r1 != 0) goto L33
            r4.f()
            boolean r4 = r3.e()
            if (r4 == 0) goto L18
            r3.a()
            return
        L18:
            com.xiaomi.push.jg r4 = new com.xiaomi.push.jg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Required field 'errorCode' was not found in serialized data! Struct: "
            r0.append(r1)
            java.lang.String r1 = r3.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            throw r4
        L33:
            short r1 = r0.a
            r2 = 11
            switch(r1) {
                case 1: goto L8e;
                case 2: goto L7d;
                case 3: goto L72;
                case 4: goto L67;
                case 5: goto L3a;
                case 6: goto L56;
                case 7: goto L4b;
                case 8: goto L40;
                default: goto L3a;
            }
        L3a:
            byte r0 = r0.a
            com.xiaomi.push.ji.a(r4, r0)
            goto L98
        L40:
            byte r1 = r0.a
            if (r1 != r2) goto L3a
            java.lang.String r0 = r4.a()
            r3.e = r0
            goto L98
        L4b:
            byte r1 = r0.a
            if (r1 != r2) goto L3a
            java.lang.String r0 = r4.a()
            r3.d = r0
            goto L98
        L56:
            byte r1 = r0.a
            r2 = 10
            if (r1 != r2) goto L3a
            long r0 = r4.a()
            r3.a = r0
            r0 = 1
            r3.a(r0)
            goto L98
        L67:
            byte r1 = r0.a
            if (r1 != r2) goto L3a
            java.lang.String r0 = r4.a()
            r3.c = r0
            goto L98
        L72:
            byte r1 = r0.a
            if (r1 != r2) goto L3a
            java.lang.String r0 = r4.a()
            r3.b = r0
            goto L98
        L7d:
            byte r1 = r0.a
            r2 = 12
            if (r1 != r2) goto L3a
            com.xiaomi.push.hy r0 = new com.xiaomi.push.hy
            r0.<init>()
            r3.a = r0
            r0.a(r4)
            goto L98
        L8e:
            byte r1 = r0.a
            if (r1 != r2) goto L3a
            java.lang.String r0 = r4.a()
            r3.a = r0
        L98:
            r4.g()
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

    public boolean a(com.xiaomi.push.il r6) {
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
            if (r1 == 0) goto Lba
            if (r2 != 0) goto L16
            goto Lba
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
            if (r1 == 0) goto Lba
            if (r2 != 0) goto L33
            goto Lba
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
            if (r1 == 0) goto Lba
            if (r2 != 0) goto L50
            goto Lba
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
            if (r2 == 0) goto L77
        L67:
            if (r1 == 0) goto Lba
            if (r2 != 0) goto L6c
            goto Lba
        L6c:
            java.lang.String r1 = r5.c
            java.lang.String r2 = r6.c
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L77
            return r0
        L77:
            long r1 = r5.a
            long r3 = r6.a
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto L80
            return r0
        L80:
            boolean r1 = r5.f()
            boolean r2 = r6.f()
            if (r1 != 0) goto L8c
            if (r2 == 0) goto L9c
        L8c:
            if (r1 == 0) goto Lba
            if (r2 != 0) goto L91
            goto Lba
        L91:
            java.lang.String r1 = r5.d
            java.lang.String r2 = r6.d
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L9c
            return r0
        L9c:
            boolean r1 = r5.g()
            boolean r2 = r6.g()
            if (r1 != 0) goto La8
            if (r2 == 0) goto Lb8
        La8:
            if (r1 == 0) goto Lba
            if (r2 != 0) goto Lad
            goto Lba
        Lad:
            java.lang.String r1 = r5.e
            java.lang.String r6 = r6.e
            boolean r6 = r1.equals(r6)
            if (r6 != 0) goto Lb8
            return r0
        Lb8:
            r6 = 1
            return r6
        Lba:
            return r0
    }

    @Override
    public void b(com.xiaomi.push.jf r3) {
            r2 = this;
            r2.a()
            com.xiaomi.push.jk r0 = com.xiaomi.push.il.a
            r3.a(r0)
            java.lang.String r0 = r2.a
            if (r0 == 0) goto L1f
            boolean r0 = r2.a()
            if (r0 == 0) goto L1f
            com.xiaomi.push.jc r0 = com.xiaomi.push.il.a
            r3.a(r0)
            java.lang.String r0 = r2.a
            r3.a(r0)
            r3.b()
        L1f:
            com.xiaomi.push.hy r0 = r2.a
            if (r0 == 0) goto L36
            boolean r0 = r2.b()
            if (r0 == 0) goto L36
            com.xiaomi.push.jc r0 = com.xiaomi.push.il.b
            r3.a(r0)
            com.xiaomi.push.hy r0 = r2.a
            r0.b(r3)
            r3.b()
        L36:
            java.lang.String r0 = r2.b
            if (r0 == 0) goto L47
            com.xiaomi.push.jc r0 = com.xiaomi.push.il.c
            r3.a(r0)
            java.lang.String r0 = r2.b
            r3.a(r0)
            r3.b()
        L47:
            java.lang.String r0 = r2.c
            if (r0 == 0) goto L58
            com.xiaomi.push.jc r0 = com.xiaomi.push.il.d
            r3.a(r0)
            java.lang.String r0 = r2.c
            r3.a(r0)
            r3.b()
        L58:
            com.xiaomi.push.jc r0 = com.xiaomi.push.il.e
            r3.a(r0)
            long r0 = r2.a
            r3.a(r0)
            r3.b()
            java.lang.String r0 = r2.d
            if (r0 == 0) goto L7c
            boolean r0 = r2.f()
            if (r0 == 0) goto L7c
            com.xiaomi.push.jc r0 = com.xiaomi.push.il.f
            r3.a(r0)
            java.lang.String r0 = r2.d
            r3.a(r0)
            r3.b()
        L7c:
            java.lang.String r0 = r2.e
            if (r0 == 0) goto L93
            boolean r0 = r2.g()
            if (r0 == 0) goto L93
            com.xiaomi.push.jc r0 = com.xiaomi.push.il.g
            r3.a(r0)
            java.lang.String r0 = r2.e
            r3.a(r0)
            r3.b()
        L93:
            r3.c()
            r3.a()
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
            com.xiaomi.push.il r1 = (com.xiaomi.push.il) r1
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
            boolean r1 = r3 instanceof com.xiaomi.push.il
            if (r1 == 0) goto Lf
            com.xiaomi.push.il r3 = (com.xiaomi.push.il) r3
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

    public int hashCode() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "XmPushActionSendFeedbackResult("
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
            r0.append(r5)
            java.lang.String r1 = "errorCode:"
            r0.append(r1)
            long r1 = r6.a
            r0.append(r1)
            boolean r1 = r6.f()
            if (r1 == 0) goto L90
            r0.append(r5)
            java.lang.String r1 = "reason:"
            r0.append(r1)
            java.lang.String r1 = r6.d
            if (r1 != 0) goto L8d
            r0.append(r3)
            goto L90
        L8d:
            r0.append(r1)
        L90:
            boolean r1 = r6.g()
            if (r1 == 0) goto La9
            r0.append(r5)
            java.lang.String r1 = "category:"
            r0.append(r1)
            java.lang.String r1 = r6.e
            if (r1 != 0) goto La6
            r0.append(r3)
            goto La9
        La6:
            r0.append(r1)
        La9:
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
