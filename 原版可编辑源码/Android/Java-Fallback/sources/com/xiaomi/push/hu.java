package com.xiaomi.push;

public class hu implements com.xiaomi.push.iu<com.xiaomi.push.hu, java.lang.Object>, java.io.Serializable, java.lang.Cloneable {
    private static final com.xiaomi.push.jc a = null;
    private static final com.xiaomi.push.jk a = null;
    private static final com.xiaomi.push.jc b = null;
    private static final com.xiaomi.push.jc c = null;
    private static final com.xiaomi.push.jc d = null;
    private static final com.xiaomi.push.jc e = null;
    private static final com.xiaomi.push.jc f = null;
    private static final com.xiaomi.push.jc g = null;
    public int a;
    public long a;
    public java.lang.String a;
    private java.util.BitSet a;
    public boolean a;
    public int b;
    public boolean b;
    public int c;

    static {
            com.xiaomi.push.jk r0 = new com.xiaomi.push.jk
            java.lang.String r1 = "OnlineConfigItem"
            r0.<init>(r1)
            com.xiaomi.push.hu.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 8
            java.lang.String r2 = ""
            r3 = 1
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.hu.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 2
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.hu.b = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r4 = 3
            r0.<init>(r2, r3, r4)
            com.xiaomi.push.hu.c = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r4 = 4
            r0.<init>(r2, r1, r4)
            com.xiaomi.push.hu.d = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 10
            r4 = 5
            r0.<init>(r2, r1, r4)
            com.xiaomi.push.hu.e = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 11
            r4 = 6
            r0.<init>(r2, r1, r4)
            com.xiaomi.push.hu.f = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 7
            r0.<init>(r2, r3, r1)
            com.xiaomi.push.hu.g = r0
            return
    }

    public hu() {
            r2 = this;
            r2.<init>()
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 6
            r0.<init>(r1)
            r2.a = r0
            return
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public int a(com.xiaomi.push.hu r5) {
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
            int r0 = r4.a
            int r1 = r5.a
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
            int r0 = r4.b
            int r1 = r5.b
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
            boolean r0 = r4.a
            boolean r1 = r5.a
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
            int r0 = r4.c
            int r1 = r5.c
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
            java.lang.String r0 = r4.a
            java.lang.String r1 = r5.a
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L113
            return r0
        L113:
            boolean r0 = r4.h()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r5.h()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L12a
            return r0
        L12a:
            boolean r0 = r4.h()
            if (r0 == 0) goto L13b
            boolean r0 = r4.b
            boolean r5 = r5.b
            int r5 = com.xiaomi.push.iv.a(r0, r5)
            if (r5 == 0) goto L13b
            return r5
        L13b:
            r5 = 0
            return r5
    }

    public long a() {
            r2 = this;
            long r0 = r2.a
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
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
            if (r1 != 0) goto L12
            r6.f()
            r5.a()
            return
        L12:
            short r1 = r0.a
            r2 = 2
            r3 = 8
            r4 = 1
            switch(r1) {
                case 1: goto L76;
                case 2: goto L68;
                case 3: goto L5a;
                case 4: goto L4c;
                case 5: goto L3c;
                case 6: goto L2f;
                case 7: goto L21;
                default: goto L1b;
            }
        L1b:
            byte r0 = r0.a
            com.xiaomi.push.ji.a(r6, r0)
            goto L83
        L21:
            byte r1 = r0.a
            if (r1 != r2) goto L1b
            boolean r0 = r6.a()
            r5.b = r0
            r5.f(r4)
            goto L83
        L2f:
            byte r1 = r0.a
            r2 = 11
            if (r1 != r2) goto L1b
            java.lang.String r0 = r6.a()
            r5.a = r0
            goto L83
        L3c:
            byte r1 = r0.a
            r2 = 10
            if (r1 != r2) goto L1b
            long r0 = r6.a()
            r5.a = r0
            r5.e(r4)
            goto L83
        L4c:
            byte r1 = r0.a
            if (r1 != r3) goto L1b
            int r0 = r6.a()
            r5.c = r0
            r5.d(r4)
            goto L83
        L5a:
            byte r1 = r0.a
            if (r1 != r2) goto L1b
            boolean r0 = r6.a()
            r5.a = r0
            r5.c(r4)
            goto L83
        L68:
            byte r1 = r0.a
            if (r1 != r3) goto L1b
            int r0 = r6.a()
            r5.b = r0
            r5.b(r4)
            goto L83
        L76:
            byte r1 = r0.a
            if (r1 != r3) goto L1b
            int r0 = r6.a()
            r5.a = r0
            r5.a(r4)
        L83:
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

    public boolean a(com.xiaomi.push.hu r6) {
            r5 = this;
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            boolean r1 = r5.a()
            boolean r2 = r6.a()
            if (r1 != 0) goto L10
            if (r2 == 0) goto L1d
        L10:
            if (r1 == 0) goto Lb7
            if (r2 != 0) goto L16
            goto Lb7
        L16:
            int r1 = r5.a
            int r2 = r6.a
            if (r1 == r2) goto L1d
            return r0
        L1d:
            boolean r1 = r5.b()
            boolean r2 = r6.b()
            if (r1 != 0) goto L29
            if (r2 == 0) goto L36
        L29:
            if (r1 == 0) goto Lb7
            if (r2 != 0) goto L2f
            goto Lb7
        L2f:
            int r1 = r5.b
            int r2 = r6.b
            if (r1 == r2) goto L36
            return r0
        L36:
            boolean r1 = r5.c()
            boolean r2 = r6.c()
            if (r1 != 0) goto L42
            if (r2 == 0) goto L4f
        L42:
            if (r1 == 0) goto Lb7
            if (r2 != 0) goto L48
            goto Lb7
        L48:
            boolean r1 = r5.a
            boolean r2 = r6.a
            if (r1 == r2) goto L4f
            return r0
        L4f:
            boolean r1 = r5.d()
            boolean r2 = r6.d()
            if (r1 != 0) goto L5b
            if (r2 == 0) goto L67
        L5b:
            if (r1 == 0) goto Lb7
            if (r2 != 0) goto L60
            goto Lb7
        L60:
            int r1 = r5.c
            int r2 = r6.c
            if (r1 == r2) goto L67
            return r0
        L67:
            boolean r1 = r5.e()
            boolean r2 = r6.e()
            if (r1 != 0) goto L73
            if (r2 == 0) goto L81
        L73:
            if (r1 == 0) goto Lb7
            if (r2 != 0) goto L78
            goto Lb7
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
            if (r2 == 0) goto L9d
        L8d:
            if (r1 == 0) goto Lb7
            if (r2 != 0) goto L92
            goto Lb7
        L92:
            java.lang.String r1 = r5.a
            java.lang.String r2 = r6.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L9d
            return r0
        L9d:
            boolean r1 = r5.h()
            boolean r2 = r6.h()
            if (r1 != 0) goto La9
            if (r2 == 0) goto Lb5
        La9:
            if (r1 == 0) goto Lb7
            if (r2 != 0) goto Lae
            goto Lb7
        Lae:
            boolean r1 = r5.b
            boolean r6 = r6.b
            if (r1 == r6) goto Lb5
            return r0
        Lb5:
            r6 = 1
            return r6
        Lb7:
            return r0
    }

    public int b() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    @Override
    public void b(com.xiaomi.push.jf r3) {
            r2 = this;
            r2.a()
            com.xiaomi.push.jk r0 = com.xiaomi.push.hu.a
            r3.a(r0)
            boolean r0 = r2.a()
            if (r0 == 0) goto L1b
            com.xiaomi.push.jc r0 = com.xiaomi.push.hu.a
            r3.a(r0)
            int r0 = r2.a
            r3.a(r0)
            r3.b()
        L1b:
            boolean r0 = r2.b()
            if (r0 == 0) goto L2e
            com.xiaomi.push.jc r0 = com.xiaomi.push.hu.b
            r3.a(r0)
            int r0 = r2.b
            r3.a(r0)
            r3.b()
        L2e:
            boolean r0 = r2.c()
            if (r0 == 0) goto L41
            com.xiaomi.push.jc r0 = com.xiaomi.push.hu.c
            r3.a(r0)
            boolean r0 = r2.a
            r3.a(r0)
            r3.b()
        L41:
            boolean r0 = r2.d()
            if (r0 == 0) goto L54
            com.xiaomi.push.jc r0 = com.xiaomi.push.hu.d
            r3.a(r0)
            int r0 = r2.c
            r3.a(r0)
            r3.b()
        L54:
            boolean r0 = r2.e()
            if (r0 == 0) goto L67
            com.xiaomi.push.jc r0 = com.xiaomi.push.hu.e
            r3.a(r0)
            long r0 = r2.a
            r3.a(r0)
            r3.b()
        L67:
            java.lang.String r0 = r2.a
            if (r0 == 0) goto L7e
            boolean r0 = r2.f()
            if (r0 == 0) goto L7e
            com.xiaomi.push.jc r0 = com.xiaomi.push.hu.f
            r3.a(r0)
            java.lang.String r0 = r2.a
            r3.a(r0)
            r3.b()
        L7e:
            boolean r0 = r2.h()
            if (r0 == 0) goto L91
            com.xiaomi.push.jc r0 = com.xiaomi.push.hu.g
            r3.a(r0)
            boolean r0 = r2.b
            r3.a(r0)
            r3.b()
        L91:
            r3.c()
            r3.a()
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

    public int c() {
            r1 = this;
            int r0 = r1.c
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
            com.xiaomi.push.hu r1 = (com.xiaomi.push.hu) r1
            int r1 = r0.a(r1)
            return r1
    }

    public void d(boolean r3) {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 3
            r0.set(r1, r3)
            return
    }

    public boolean d() {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 3
            boolean r0 = r0.get(r1)
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
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 4
            boolean r0 = r0.get(r1)
            return r0
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3 instanceof com.xiaomi.push.hu
            if (r1 == 0) goto Lf
            com.xiaomi.push.hu r3 = (com.xiaomi.push.hu) r3
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

    public boolean g() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    public boolean h() {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 5
            boolean r0 = r0.get(r1)
            return r0
    }

    public int hashCode() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "OnlineConfigItem("
            r0.<init>(r1)
            boolean r1 = r7.a()
            r2 = 0
            if (r1 == 0) goto L1a
            java.lang.String r1 = "key:"
            r0.append(r1)
            int r1 = r7.a
            r0.append(r1)
            r1 = r2
            goto L1b
        L1a:
            r1 = 1
        L1b:
            boolean r3 = r7.b()
            java.lang.String r4 = ", "
            if (r3 == 0) goto L33
            if (r1 != 0) goto L28
            r0.append(r4)
        L28:
            java.lang.String r1 = "type:"
            r0.append(r1)
            int r1 = r7.b
            r0.append(r1)
            r1 = r2
        L33:
            boolean r3 = r7.c()
            if (r3 == 0) goto L49
            if (r1 != 0) goto L3e
            r0.append(r4)
        L3e:
            java.lang.String r1 = "clear:"
            r0.append(r1)
            boolean r1 = r7.a
            r0.append(r1)
            r1 = r2
        L49:
            boolean r3 = r7.d()
            if (r3 == 0) goto L5f
            if (r1 != 0) goto L54
            r0.append(r4)
        L54:
            java.lang.String r1 = "intValue:"
            r0.append(r1)
            int r1 = r7.c
            r0.append(r1)
            r1 = r2
        L5f:
            boolean r3 = r7.e()
            if (r3 == 0) goto L75
            if (r1 != 0) goto L6a
            r0.append(r4)
        L6a:
            java.lang.String r1 = "longValue:"
            r0.append(r1)
            long r5 = r7.a
            r0.append(r5)
            r1 = r2
        L75:
            boolean r3 = r7.f()
            if (r3 == 0) goto L8f
            if (r1 != 0) goto L80
            r0.append(r4)
        L80:
            java.lang.String r1 = "stringValue:"
            r0.append(r1)
            java.lang.String r1 = r7.a
            if (r1 != 0) goto L8b
            java.lang.String r1 = "null"
        L8b:
            r0.append(r1)
            goto L90
        L8f:
            r2 = r1
        L90:
            boolean r1 = r7.h()
            if (r1 == 0) goto La5
            if (r2 != 0) goto L9b
            r0.append(r4)
        L9b:
            java.lang.String r1 = "boolValue:"
            r0.append(r1)
            boolean r1 = r7.b
            r0.append(r1)
        La5:
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
