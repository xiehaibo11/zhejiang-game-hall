package com.xiaomi.push;

public class hy implements com.xiaomi.push.iu<com.xiaomi.push.hy, java.lang.Object>, java.io.Serializable, java.lang.Cloneable {
    private static final com.xiaomi.push.jc a = null;
    private static final com.xiaomi.push.jk a = null;
    private static final com.xiaomi.push.jc b = null;
    private static final com.xiaomi.push.jc c = null;
    private static final com.xiaomi.push.jc d = null;
    private static final com.xiaomi.push.jc e = null;
    private static final com.xiaomi.push.jc f = null;
    public long a;
    public java.lang.String a;
    private java.util.BitSet a;
    public boolean a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;

    static {
            com.xiaomi.push.jk r0 = new com.xiaomi.push.jk
            java.lang.String r1 = "Target"
            r0.<init>(r1)
            com.xiaomi.push.hy.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            java.lang.String r1 = ""
            r2 = 10
            r3 = 1
            r0.<init>(r1, r2, r3)
            com.xiaomi.push.hy.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r2 = 2
            r3 = 11
            r0.<init>(r1, r3, r2)
            com.xiaomi.push.hy.b = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r4 = 3
            r0.<init>(r1, r3, r4)
            com.xiaomi.push.hy.c = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r4 = 4
            r0.<init>(r1, r3, r4)
            com.xiaomi.push.hy.d = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r4 = 5
            r0.<init>(r1, r2, r4)
            com.xiaomi.push.hy.e = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r2 = 7
            r0.<init>(r1, r3, r2)
            com.xiaomi.push.hy.f = r0
            return
    }

    public hy() {
            r2 = this;
            r2.<init>()
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 2
            r0.<init>(r1)
            r2.a = r0
            r0 = 5
            r2.a = r0
            java.lang.String r0 = "xiaomi.com"
            r2.b = r0
            java.lang.String r0 = ""
            r2.c = r0
            r0 = 0
            r2.a = r0
            return
    }

    public int a(com.xiaomi.push.hy r5) {
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
            long r0 = r4.a
            long r2 = r5.a
            int r0 = com.xiaomi.push.iv.a(r0, r2)
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
            boolean r0 = r4.a
            boolean r1 = r5.a
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
            java.lang.String r5 = r5.d
            int r5 = com.xiaomi.push.iv.a(r0, r5)
            if (r5 == 0) goto L113
            return r5
        L113:
            r5 = 0
            return r5
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
            java.lang.String r2 = "Required field 'userId' was not present! Struct: "
            r1.append(r2)
            java.lang.String r2 = r3.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void a(com.xiaomi.push.jf r7) {
            r6 = this;
            r7.a()
        L3:
            com.xiaomi.push.jc r0 = r7.a()
            byte r1 = r0.a
            if (r1 != 0) goto L33
            r7.f()
            boolean r7 = r6.a()
            if (r7 == 0) goto L18
            r6.a()
            return
        L18:
            com.xiaomi.push.jg r7 = new com.xiaomi.push.jg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Required field 'channelId' was not found in serialized data! Struct: "
            r0.append(r1)
            java.lang.String r1 = r6.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r7.<init>(r0)
            throw r7
        L33:
            short r1 = r0.a
            r2 = 1
            if (r1 == r2) goto L89
            r3 = 2
            r4 = 11
            if (r1 == r3) goto L7e
            r5 = 3
            if (r1 == r5) goto L73
            r5 = 4
            if (r1 == r5) goto L68
            r5 = 5
            if (r1 == r5) goto L5a
            r2 = 7
            if (r1 == r2) goto L4f
        L49:
            byte r0 = r0.a
            com.xiaomi.push.ji.a(r7, r0)
            goto L98
        L4f:
            byte r1 = r0.a
            if (r1 != r4) goto L49
            java.lang.String r0 = r7.a()
            r6.d = r0
            goto L98
        L5a:
            byte r1 = r0.a
            if (r1 != r3) goto L49
            boolean r0 = r7.a()
            r6.a = r0
            r6.b(r2)
            goto L98
        L68:
            byte r1 = r0.a
            if (r1 != r4) goto L49
            java.lang.String r0 = r7.a()
            r6.c = r0
            goto L98
        L73:
            byte r1 = r0.a
            if (r1 != r4) goto L49
            java.lang.String r0 = r7.a()
            r6.b = r0
            goto L98
        L7e:
            byte r1 = r0.a
            if (r1 != r4) goto L49
            java.lang.String r0 = r7.a()
            r6.a = r0
            goto L98
        L89:
            byte r1 = r0.a
            r3 = 10
            if (r1 != r3) goto L49
            long r0 = r7.a()
            r6.a = r0
            r6.a(r2)
        L98:
            r7.g()
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

    public boolean a(com.xiaomi.push.hy r6) {
            r5 = this;
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            long r1 = r5.a
            long r3 = r6.a
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto Ld
            return r0
        Ld:
            boolean r1 = r5.b()
            boolean r2 = r6.b()
            if (r1 != 0) goto L19
            if (r2 == 0) goto L2a
        L19:
            if (r1 == 0) goto L98
            if (r2 != 0) goto L1f
            goto L98
        L1f:
            java.lang.String r1 = r5.a
            java.lang.String r2 = r6.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L2a
            return r0
        L2a:
            boolean r1 = r5.c()
            boolean r2 = r6.c()
            if (r1 != 0) goto L36
            if (r2 == 0) goto L46
        L36:
            if (r1 == 0) goto L98
            if (r2 != 0) goto L3b
            goto L98
        L3b:
            java.lang.String r1 = r5.b
            java.lang.String r2 = r6.b
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L46
            return r0
        L46:
            boolean r1 = r5.d()
            boolean r2 = r6.d()
            if (r1 != 0) goto L52
            if (r2 == 0) goto L62
        L52:
            if (r1 == 0) goto L98
            if (r2 != 0) goto L57
            goto L98
        L57:
            java.lang.String r1 = r5.c
            java.lang.String r2 = r6.c
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L62
            return r0
        L62:
            boolean r1 = r5.e()
            boolean r2 = r6.e()
            if (r1 != 0) goto L6e
            if (r2 == 0) goto L7a
        L6e:
            if (r1 == 0) goto L98
            if (r2 != 0) goto L73
            goto L98
        L73:
            boolean r1 = r5.a
            boolean r2 = r6.a
            if (r1 == r2) goto L7a
            return r0
        L7a:
            boolean r1 = r5.f()
            boolean r2 = r6.f()
            if (r1 != 0) goto L86
            if (r2 == 0) goto L96
        L86:
            if (r1 == 0) goto L98
            if (r2 != 0) goto L8b
            goto L98
        L8b:
            java.lang.String r1 = r5.d
            java.lang.String r6 = r6.d
            boolean r6 = r1.equals(r6)
            if (r6 != 0) goto L96
            return r0
        L96:
            r6 = 1
            return r6
        L98:
            return r0
    }

    @Override
    public void b(com.xiaomi.push.jf r3) {
            r2 = this;
            r2.a()
            com.xiaomi.push.jk r0 = com.xiaomi.push.hy.a
            r3.a(r0)
            com.xiaomi.push.jc r0 = com.xiaomi.push.hy.a
            r3.a(r0)
            long r0 = r2.a
            r3.a(r0)
            r3.b()
            java.lang.String r0 = r2.a
            if (r0 == 0) goto L26
            com.xiaomi.push.jc r0 = com.xiaomi.push.hy.b
            r3.a(r0)
            java.lang.String r0 = r2.a
            r3.a(r0)
            r3.b()
        L26:
            java.lang.String r0 = r2.b
            if (r0 == 0) goto L3d
            boolean r0 = r2.c()
            if (r0 == 0) goto L3d
            com.xiaomi.push.jc r0 = com.xiaomi.push.hy.c
            r3.a(r0)
            java.lang.String r0 = r2.b
            r3.a(r0)
            r3.b()
        L3d:
            java.lang.String r0 = r2.c
            if (r0 == 0) goto L54
            boolean r0 = r2.d()
            if (r0 == 0) goto L54
            com.xiaomi.push.jc r0 = com.xiaomi.push.hy.d
            r3.a(r0)
            java.lang.String r0 = r2.c
            r3.a(r0)
            r3.b()
        L54:
            boolean r0 = r2.e()
            if (r0 == 0) goto L67
            com.xiaomi.push.jc r0 = com.xiaomi.push.hy.e
            r3.a(r0)
            boolean r0 = r2.a
            r3.a(r0)
            r3.b()
        L67:
            java.lang.String r0 = r2.d
            if (r0 == 0) goto L7e
            boolean r0 = r2.f()
            if (r0 == 0) goto L7e
            com.xiaomi.push.jc r0 = com.xiaomi.push.hy.f
            r3.a(r0)
            java.lang.String r0 = r2.d
            r3.a(r0)
            r3.b()
        L7e:
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
            com.xiaomi.push.hy r1 = (com.xiaomi.push.hy) r1
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
            r1 = 1
            boolean r0 = r0.get(r1)
            return r0
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3 instanceof com.xiaomi.push.hy
            if (r1 == 0) goto Lf
            com.xiaomi.push.hy r3 = (com.xiaomi.push.hy) r3
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

    public int hashCode() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Target("
            r0.<init>(r1)
            java.lang.String r1 = "channelId:"
            r0.append(r1)
            long r1 = r4.a
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            java.lang.String r2 = "userId:"
            r0.append(r2)
            java.lang.String r2 = r4.a
            java.lang.String r3 = "null"
            if (r2 != 0) goto L25
            r0.append(r3)
            goto L28
        L25:
            r0.append(r2)
        L28:
            boolean r2 = r4.c()
            if (r2 == 0) goto L41
            r0.append(r1)
            java.lang.String r2 = "server:"
            r0.append(r2)
            java.lang.String r2 = r4.b
            if (r2 != 0) goto L3e
            r0.append(r3)
            goto L41
        L3e:
            r0.append(r2)
        L41:
            boolean r2 = r4.d()
            if (r2 == 0) goto L5a
            r0.append(r1)
            java.lang.String r2 = "resource:"
            r0.append(r2)
            java.lang.String r2 = r4.c
            if (r2 != 0) goto L57
            r0.append(r3)
            goto L5a
        L57:
            r0.append(r2)
        L5a:
            boolean r2 = r4.e()
            if (r2 == 0) goto L6d
            r0.append(r1)
            java.lang.String r2 = "isPreview:"
            r0.append(r2)
            boolean r2 = r4.a
            r0.append(r2)
        L6d:
            boolean r2 = r4.f()
            if (r2 == 0) goto L86
            r0.append(r1)
            java.lang.String r1 = "token:"
            r0.append(r1)
            java.lang.String r1 = r4.d
            if (r1 != 0) goto L83
            r0.append(r3)
            goto L86
        L83:
            r0.append(r1)
        L86:
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
