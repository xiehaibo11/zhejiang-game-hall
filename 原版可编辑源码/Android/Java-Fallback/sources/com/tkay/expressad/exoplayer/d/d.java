package com.tkay.expressad.exoplayer.d;

import com.tkay.expressad.exoplayer.d.i;

public final class d<T extends com.tkay.expressad.exoplayer.d.i> implements com.tkay.expressad.exoplayer.d.b.c<T>, com.tkay.expressad.exoplayer.d.g<T> {
    public static final java.lang.String a = "PRCustomData";
    public static final int b = 0;
    public static final int c = 1;
    public static final int d = 2;
    public static final int e = 3;
    public static final int f = 3;
    private static final java.lang.String h = "DefaultDrmSessionMgr";
    volatile com.tkay.expressad.exoplayer.d.d<T>.c g;
    private final java.util.UUID i;
    private final com.tkay.expressad.exoplayer.d.j<T> j;
    private final com.tkay.expressad.exoplayer.d.n k;
    private final java.util.HashMap<java.lang.String, java.lang.String> l;
    private final com.tkay.expressad.exoplayer.d.c.a m;
    private final boolean n;
    private final int o;
    private final java.util.List<com.tkay.expressad.exoplayer.d.b<T>> p;
    private final java.util.List<com.tkay.expressad.exoplayer.d.b<T>> q;
    private android.os.Looper r;
    private int s;
    private byte[] t;

    static class 1 {
    }

    @java.lang.Deprecated
    public interface a extends com.tkay.expressad.exoplayer.d.c {
    }

    private class b implements com.tkay.expressad.exoplayer.d.j.f<T> {
        final com.tkay.expressad.exoplayer.d.d a;

        private b(com.tkay.expressad.exoplayer.d.d r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        b(com.tkay.expressad.exoplayer.d.d r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void a(byte[] r2, int r3) {
                r1 = this;
                com.tkay.expressad.exoplayer.d.d r0 = r1.a
                int r0 = com.tkay.expressad.exoplayer.d.d.b(r0)
                if (r0 != 0) goto L13
                com.tkay.expressad.exoplayer.d.d r0 = r1.a
                com.tkay.expressad.exoplayer.d.d<T>$c r0 = r0.g
                android.os.Message r2 = r0.obtainMessage(r3, r2)
                r2.sendToTarget()
            L13:
                return
        }
    }

    private class c extends android.os.Handler {
        final com.tkay.expressad.exoplayer.d.d a;

        public c(com.tkay.expressad.exoplayer.d.d r1, android.os.Looper r2) {
                r0 = this;
                r0.a = r1
                r0.<init>(r2)
                return
        }

        @Override
        public final void handleMessage(android.os.Message r5) {
                r4 = this;
                java.lang.Object r0 = r5.obj
                byte[] r0 = (byte[]) r0
                com.tkay.expressad.exoplayer.d.d r1 = r4.a
                java.util.List r1 = com.tkay.expressad.exoplayer.d.d.a(r1)
                java.util.Iterator r1 = r1.iterator()
            Le:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L25
                java.lang.Object r2 = r1.next()
                com.tkay.expressad.exoplayer.d.b r2 = (com.tkay.expressad.exoplayer.d.b) r2
                boolean r3 = r2.b(r0)
                if (r3 == 0) goto Le
                int r5 = r5.what
                r2.a(r5)
            L25:
                return
        }
    }

    public static final class d extends java.lang.Exception {
        private d(java.util.UUID r2) {
                r1 = this;
                java.lang.String r2 = java.lang.String.valueOf(r2)
                java.lang.String r0 = "Media does not support uuid: "
                java.lang.String r2 = r0.concat(r2)
                r1.<init>(r2)
                return
        }

        d(java.util.UUID r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface e {
    }

    private d(java.util.UUID r8, com.tkay.expressad.exoplayer.d.j<T> r9, com.tkay.expressad.exoplayer.d.n r10, java.util.HashMap<java.lang.String, java.lang.String> r11) {
            r7 = this;
            r5 = 0
            r6 = 3
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    @java.lang.Deprecated
    private d(java.util.UUID r1, com.tkay.expressad.exoplayer.d.j<T> r2, com.tkay.expressad.exoplayer.d.n r3, java.util.HashMap<java.lang.String, java.lang.String> r4, android.os.Handler r5, com.tkay.expressad.exoplayer.d.c r6) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            if (r5 == 0) goto La
            if (r6 == 0) goto La
            r0.a(r5, r6)
        La:
            return
    }

    @java.lang.Deprecated
    private d(java.util.UUID r7, com.tkay.expressad.exoplayer.d.j<T> r8, com.tkay.expressad.exoplayer.d.n r9, java.util.HashMap<java.lang.String, java.lang.String> r10, android.os.Handler r11, com.tkay.expressad.exoplayer.d.c r12, boolean r13) {
            r6 = this;
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r13
            r0.<init>(r1, r2, r3, r4, r5)
            if (r11 == 0) goto L10
            if (r12 == 0) goto L10
            r6.a(r11, r12)
        L10:
            return
    }

    @java.lang.Deprecated
    private d(java.util.UUID r8, com.tkay.expressad.exoplayer.d.j<T> r9, com.tkay.expressad.exoplayer.d.n r10, java.util.HashMap<java.lang.String, java.lang.String> r11, android.os.Handler r12, com.tkay.expressad.exoplayer.d.c r13, boolean r14, int r15) {
            r7 = this;
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r14
            r6 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6)
            if (r12 == 0) goto L11
            if (r13 == 0) goto L11
            r7.a(r12, r13)
        L11:
            return
    }

    private d(java.util.UUID r8, com.tkay.expressad.exoplayer.d.j<T> r9, com.tkay.expressad.exoplayer.d.n r10, java.util.HashMap<java.lang.String, java.lang.String> r11, boolean r12) {
            r7 = this;
            r6 = 3
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    private d(java.util.UUID r3, com.tkay.expressad.exoplayer.d.j<T> r4, com.tkay.expressad.exoplayer.d.n r5, java.util.HashMap<java.lang.String, java.lang.String> r6, boolean r7, int r8) {
            r2 = this;
            r2.<init>()
            com.tkay.expressad.exoplayer.k.a.a(r3)
            com.tkay.expressad.exoplayer.k.a.a(r4)
            java.util.UUID r0 = com.tkay.expressad.exoplayer.b.bi
            boolean r0 = r0.equals(r3)
            r0 = r0 ^ 1
            java.lang.String r1 = "Use C.CLEARKEY_UUID instead"
            com.tkay.expressad.exoplayer.k.a.a(r0, r1)
            r2.i = r3
            r2.j = r4
            r2.k = r5
            r2.l = r6
            com.tkay.expressad.exoplayer.d.c$a r3 = new com.tkay.expressad.exoplayer.d.c$a
            r3.<init>()
            r2.m = r3
            r2.n = r7
            r2.o = r8
            r3 = 0
            r2.s = r3
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r2.p = r5
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r2.q = r5
            if (r7 == 0) goto L43
            java.lang.String r5 = "sessionSharing"
            java.lang.String r6 = "enable"
            r4.a(r5, r6)
        L43:
            com.tkay.expressad.exoplayer.d.d$b r5 = new com.tkay.expressad.exoplayer.d.d$b
            r5.<init>(r2, r3)
            r4.a(r5)
            return
    }

    private static com.tkay.expressad.exoplayer.d.d<com.tkay.expressad.exoplayer.d.k> a(com.tkay.expressad.exoplayer.d.n r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L11
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "PRCustomData"
            r0.put(r1, r3)
            goto L12
        L11:
            r0 = 0
        L12:
            java.util.UUID r3 = com.tkay.expressad.exoplayer.b.bl
            com.tkay.expressad.exoplayer.d.d r2 = a(r3, r2, r0)
            return r2
    }

    @java.lang.Deprecated
    private static com.tkay.expressad.exoplayer.d.d<com.tkay.expressad.exoplayer.d.k> a(com.tkay.expressad.exoplayer.d.n r2, java.lang.String r3, android.os.Handler r4, com.tkay.expressad.exoplayer.d.c r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L11
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "PRCustomData"
            r0.put(r1, r3)
            goto L12
        L11:
            r0 = 0
        L12:
            java.util.UUID r3 = com.tkay.expressad.exoplayer.b.bl
            com.tkay.expressad.exoplayer.d.d r2 = a(r3, r2, r0)
            if (r4 == 0) goto L1f
            if (r5 == 0) goto L1f
            r2.a(r4, r5)
        L1f:
            return r2
    }

    private static com.tkay.expressad.exoplayer.d.d<com.tkay.expressad.exoplayer.d.k> a(com.tkay.expressad.exoplayer.d.n r1, java.util.HashMap<java.lang.String, java.lang.String> r2) {
            java.util.UUID r0 = com.tkay.expressad.exoplayer.b.bk
            com.tkay.expressad.exoplayer.d.d r1 = a(r0, r1, r2)
            return r1
    }

    @java.lang.Deprecated
    private static com.tkay.expressad.exoplayer.d.d<com.tkay.expressad.exoplayer.d.k> a(com.tkay.expressad.exoplayer.d.n r1, java.util.HashMap<java.lang.String, java.lang.String> r2, android.os.Handler r3, com.tkay.expressad.exoplayer.d.c r4) {
            java.util.UUID r0 = com.tkay.expressad.exoplayer.b.bk
            com.tkay.expressad.exoplayer.d.d r1 = a(r0, r1, r2)
            if (r3 == 0) goto Ld
            if (r4 == 0) goto Ld
            r1.a(r3, r4)
        Ld:
            return r1
    }

    private static com.tkay.expressad.exoplayer.d.d<com.tkay.expressad.exoplayer.d.k> a(java.util.UUID r8, com.tkay.expressad.exoplayer.d.n r9, java.util.HashMap<java.lang.String, java.lang.String> r10) {
            com.tkay.expressad.exoplayer.d.d r7 = new com.tkay.expressad.exoplayer.d.d
            com.tkay.expressad.exoplayer.d.l r2 = com.tkay.expressad.exoplayer.d.l.a(r8)
            r5 = 0
            r6 = 3
            r0 = r7
            r1 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r7
    }

    @java.lang.Deprecated
    private static com.tkay.expressad.exoplayer.d.d<com.tkay.expressad.exoplayer.d.k> a(java.util.UUID r0, com.tkay.expressad.exoplayer.d.n r1, java.util.HashMap<java.lang.String, java.lang.String> r2, android.os.Handler r3, com.tkay.expressad.exoplayer.d.c r4) {
            com.tkay.expressad.exoplayer.d.d r0 = a(r0, r1, r2)
            if (r3 == 0) goto Lb
            if (r4 == 0) goto Lb
            r0.a(r3, r4)
        Lb:
            return r0
    }

    private static com.tkay.expressad.exoplayer.d.e.a a(com.tkay.expressad.exoplayer.d.e r6, java.util.UUID r7, boolean r8) {
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r6.b
            r0.<init>(r1)
            r1 = 0
            r2 = r1
        L9:
            int r3 = r6.b
            r4 = 1
            if (r2 >= r3) goto L38
            com.tkay.expressad.exoplayer.d.e$a r3 = r6.a(r2)
            boolean r5 = r3.a(r7)
            if (r5 != 0) goto L2a
            java.util.UUID r5 = com.tkay.expressad.exoplayer.b.bj
            boolean r5 = r5.equals(r7)
            if (r5 == 0) goto L29
            java.util.UUID r5 = com.tkay.expressad.exoplayer.b.bi
            boolean r5 = r3.a(r5)
            if (r5 == 0) goto L29
            goto L2a
        L29:
            r4 = r1
        L2a:
            if (r4 == 0) goto L35
            byte[] r4 = r3.c
            if (r4 != 0) goto L32
            if (r8 == 0) goto L35
        L32:
            r0.add(r3)
        L35:
            int r2 = r2 + 1
            goto L9
        L38:
            boolean r6 = r0.isEmpty()
            if (r6 == 0) goto L40
            r6 = 0
            return r6
        L40:
            java.util.UUID r6 = com.tkay.expressad.exoplayer.b.bk
            boolean r6 = r6.equals(r7)
            if (r6 == 0) goto L76
            r6 = r1
        L49:
            int r7 = r0.size()
            if (r6 >= r7) goto L76
            java.lang.Object r7 = r0.get(r6)
            com.tkay.expressad.exoplayer.d.e$a r7 = (com.tkay.expressad.exoplayer.d.e.a) r7
            boolean r8 = r7.a()
            if (r8 == 0) goto L62
            byte[] r8 = r7.c
            int r8 = com.tkay.expressad.exoplayer.e.a.h.b(r8)
            goto L63
        L62:
            r8 = -1
        L63:
            int r2 = com.tkay.expressad.exoplayer.k.af.a
            r3 = 23
            if (r2 >= r3) goto L6c
            if (r8 != 0) goto L6c
            return r7
        L6c:
            int r2 = com.tkay.expressad.exoplayer.k.af.a
            if (r2 < r3) goto L73
            if (r8 != r4) goto L73
            return r7
        L73:
            int r6 = r6 + 1
            goto L49
        L76:
            java.lang.Object r6 = r0.get(r1)
            com.tkay.expressad.exoplayer.d.e$a r6 = (com.tkay.expressad.exoplayer.d.e.a) r6
            return r6
    }

    private java.lang.String a(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r0 = r1.j
            java.lang.String r2 = r0.a(r2)
            return r2
    }

    static java.util.List a(com.tkay.expressad.exoplayer.d.d r0) {
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r0 = r0.p
            return r0
    }

    private void a(int r2, byte[] r3) {
            r1 = this;
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r0 = r1.p
            boolean r0 = r0.isEmpty()
            com.tkay.expressad.exoplayer.k.a.b(r0)
            r0 = 1
            if (r2 == r0) goto Lf
            r0 = 3
            if (r2 != r0) goto L12
        Lf:
            com.tkay.expressad.exoplayer.k.a.a(r3)
        L12:
            r1.s = r2
            r1.t = r3
            return
    }

    private void a(com.tkay.expressad.exoplayer.d.c r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.d.c$a r0 = r1.m
            r0.a(r2)
            return
    }

    private void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r0 = r1.j
            r0.a(r2, r3)
            return
    }

    private void a(java.lang.String r2, byte[] r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r0 = r1.j
            r0.a(r2, r3)
            return
    }

    static int b(com.tkay.expressad.exoplayer.d.d r0) {
            int r0 = r0.s
            return r0
    }

    private byte[] b(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r0 = r1.j
            byte[] r2 = r0.b(r2)
            return r2
    }

    @Override
    public final com.tkay.expressad.exoplayer.d.f<T> a(android.os.Looper r14, com.tkay.expressad.exoplayer.d.e r15) {
            r13 = this;
            android.os.Looper r0 = r13.r
            r1 = 0
            if (r0 == 0) goto La
            if (r0 != r14) goto L8
            goto La
        L8:
            r0 = r1
            goto Lb
        La:
            r0 = 1
        Lb:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r0 = r13.p
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L23
            r13.r = r14
            com.tkay.expressad.exoplayer.d.d<T>$c r0 = r13.g
            if (r0 != 0) goto L23
            com.tkay.expressad.exoplayer.d.d$c r0 = new com.tkay.expressad.exoplayer.d.d$c
            r0.<init>(r13, r14)
            r13.g = r0
        L23:
            byte[] r0 = r13.t
            r2 = 0
            if (r0 != 0) goto L49
            java.util.UUID r0 = r13.i
            com.tkay.expressad.exoplayer.d.e$a r15 = a(r15, r0, r1)
            if (r15 != 0) goto L47
            com.tkay.expressad.exoplayer.d.d$d r14 = new com.tkay.expressad.exoplayer.d.d$d
            java.util.UUID r15 = r13.i
            r14.<init>(r15, r1)
            com.tkay.expressad.exoplayer.d.c$a r15 = r13.m
            r15.a(r14)
            com.tkay.expressad.exoplayer.d.h r15 = new com.tkay.expressad.exoplayer.d.h
            com.tkay.expressad.exoplayer.d.f$a r0 = new com.tkay.expressad.exoplayer.d.f$a
            r0.<init>(r14)
            r15.<init>(r0)
            return r15
        L47:
            r5 = r15
            goto L4a
        L49:
            r5 = r2
        L4a:
            boolean r15 = r13.n
            if (r15 != 0) goto L61
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r15 = r13.p
            boolean r15 = r15.isEmpty()
            if (r15 == 0) goto L57
            goto L80
        L57:
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r15 = r13.p
            java.lang.Object r15 = r15.get(r1)
            com.tkay.expressad.exoplayer.d.b r15 = (com.tkay.expressad.exoplayer.d.b) r15
            r2 = r15
            goto L80
        L61:
            if (r5 == 0) goto L66
            byte[] r15 = r5.c
            goto L67
        L66:
            r15 = r2
        L67:
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r0 = r13.p
            java.util.Iterator r0 = r0.iterator()
        L6d:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L80
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.exoplayer.d.b r1 = (com.tkay.expressad.exoplayer.d.b) r1
            boolean r3 = r1.a(r15)
            if (r3 == 0) goto L6d
            r2 = r1
        L80:
            if (r2 != 0) goto La0
            com.tkay.expressad.exoplayer.d.b r15 = new com.tkay.expressad.exoplayer.d.b
            java.util.UUID r2 = r13.i
            com.tkay.expressad.exoplayer.d.j<T extends com.tkay.expressad.exoplayer.d.i> r3 = r13.j
            int r6 = r13.s
            byte[] r7 = r13.t
            java.util.HashMap<java.lang.String, java.lang.String> r8 = r13.l
            com.tkay.expressad.exoplayer.d.n r9 = r13.k
            com.tkay.expressad.exoplayer.d.c$a r11 = r13.m
            int r12 = r13.o
            r1 = r15
            r4 = r13
            r10 = r14
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r14 = r13.p
            r14.add(r15)
            r2 = r15
        La0:
            r2.a()
            return r2
    }

    @Override
    public final void a() {
            r2 = this;
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r0 = r2.q
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.exoplayer.d.b r1 = (com.tkay.expressad.exoplayer.d.b) r1
            r1.d()
            goto L6
        L16:
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r0 = r2.q
            r0.clear()
            return
    }

    public final void a(android.os.Handler r2, com.tkay.expressad.exoplayer.d.c r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.d.c$a r0 = r1.m
            r0.a(r2, r3)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.d.b<T> r3) {
            r2 = this;
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r0 = r2.q
            r0.add(r3)
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r0 = r2.q
            int r0 = r0.size()
            r1 = 1
            if (r0 != r1) goto L11
            r3.c()
        L11:
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.d.f<T> r4) {
            r3 = this;
            boolean r0 = r4 instanceof com.tkay.expressad.exoplayer.d.h
            if (r0 == 0) goto L5
            return
        L5:
            com.tkay.expressad.exoplayer.d.b r4 = (com.tkay.expressad.exoplayer.d.b) r4
            boolean r0 = r4.b()
            if (r0 == 0) goto L34
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r0 = r3.p
            r0.remove(r4)
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r0 = r3.q
            int r0 = r0.size()
            r1 = 1
            if (r0 <= r1) goto L2f
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r0 = r3.q
            r2 = 0
            java.lang.Object r0 = r0.get(r2)
            if (r0 != r4) goto L2f
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r0 = r3.q
            java.lang.Object r0 = r0.get(r1)
            com.tkay.expressad.exoplayer.d.b r0 = (com.tkay.expressad.exoplayer.d.b) r0
            r0.c()
        L2f:
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r0 = r3.q
            r0.remove(r4)
        L34:
            return
    }

    @Override
    public final void a(java.lang.Exception r3) {
            r2 = this;
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r0 = r2.q
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.exoplayer.d.b r1 = (com.tkay.expressad.exoplayer.d.b) r1
            r1.a(r3)
            goto L6
        L16:
            java.util.List<com.tkay.expressad.exoplayer.d.b<T extends com.tkay.expressad.exoplayer.d.i>> r3 = r2.q
            r3.clear()
            return
    }

    @Override
    public final boolean a(com.tkay.expressad.exoplayer.d.e r5) {
            r4 = this;
            byte[] r0 = r4.t
            r1 = 1
            if (r0 == 0) goto L6
            return r1
        L6:
            java.util.UUID r0 = r4.i
            com.tkay.expressad.exoplayer.d.e$a r0 = a(r5, r0, r1)
            r2 = 0
            if (r0 != 0) goto L36
            int r0 = r5.b
            if (r0 != r1) goto L35
            com.tkay.expressad.exoplayer.d.e$a r0 = r5.a(r2)
            java.util.UUID r3 = com.tkay.expressad.exoplayer.b.bi
            boolean r0 = r0.a(r3)
            if (r0 == 0) goto L35
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r3 = "DrmInitData only contains common PSSH SchemeData. Assuming support for: "
            r0.<init>(r3)
            java.util.UUID r3 = r4.i
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "DefaultDrmSessionMgr"
            android.util.Log.w(r3, r0)
            goto L36
        L35:
            return r2
        L36:
            java.lang.String r5 = r5.a
            if (r5 == 0) goto L65
            java.lang.String r0 = "cenc"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L43
            goto L65
        L43:
            java.lang.String r0 = "cbc1"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto L5d
            java.lang.String r0 = "cbcs"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto L5d
            java.lang.String r0 = "cens"
            boolean r5 = r0.equals(r5)
            if (r5 == 0) goto L5c
            goto L5d
        L5c:
            return r1
        L5d:
            int r5 = com.tkay.expressad.exoplayer.k.af.a
            r0 = 25
            if (r5 < r0) goto L64
            return r1
        L64:
            return r2
        L65:
            return r1
    }
}
