package com.tkay.basead.a;

public final class c {
    public static final int a = 1;
    public static final int b = 2;
    public static final int c = 3;
    public static final int d = 4;
    public static final int e = 6;
    public static final int f = 0;
    public static final int g = 1;
    public static final int h = 1;
    public static final int i = 2;
    public static final int j = 3;
    public static final int k = 4;
    private final int A;
    private final int B;
    private final int C;
    com.tkay.core.common.f.h l;
    boolean m;
    boolean n;
    boolean o;
    android.content.Context p;
    boolean q;
    com.tkay.core.common.f.i r;
    com.tkay.basead.a.c.b s;
    com.tkay.core.api.IOfferClickHandler t;
    com.tkay.basead.a.c.a u;
    boolean v;
    boolean w;
    com.tkay.basead.a.c.b x;
    private final java.lang.String y;
    private final int z;




    final class 3 implements java.lang.Runnable {
        final com.tkay.basead.c.i a;
        final com.tkay.basead.a.c b;


        3(com.tkay.basead.a.c r1, com.tkay.basead.c.i r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r6 = this;
                com.tkay.basead.a.c r0 = r6.b
                com.tkay.basead.c.i r1 = r6.a
                boolean r0 = com.tkay.basead.a.c.a(r0, r1)
                if (r0 == 0) goto Lb
                return
            Lb:
                r0 = 0
                com.tkay.basead.a.c r1 = r6.b
                com.tkay.core.common.f.i r1 = r1.r
                com.tkay.core.common.f.j r1 = r1.m
                int r1 = r1.l()
                r2 = 2
                r3 = 1
                if (r1 == r2) goto L27
                com.tkay.basead.a.c r0 = r6.b
                com.tkay.basead.c.i r1 = r6.a
                boolean r0 = com.tkay.basead.a.c.b(r0, r1)
                if (r0 == 0) goto L26
                r0 = r3
                goto L27
            L26:
                r0 = r2
            L27:
                if (r0 != r3) goto L36
                com.tkay.basead.a.c r1 = r6.b
                com.tkay.core.common.f.i r1 = r1.r
                com.tkay.core.common.f.j r1 = r1.m
                int r1 = r1.l()
                if (r1 != r3) goto L36
                return
            L36:
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
                com.tkay.core.api.IExHandler r1 = r1.b()
                com.tkay.basead.a.c r2 = r6.b
                com.tkay.core.common.f.h r2 = r2.l
                int r2 = r2.D()
                r4 = 4
                if (r2 != r4) goto L6e
                com.tkay.basead.a.c r2 = r6.b
                com.tkay.core.common.f.i r2 = r2.r
                com.tkay.core.common.f.j r2 = r2.m
                int r2 = r2.o()
                if (r3 != r2) goto L6e
                if (r1 == 0) goto L6e
                if (r0 == r3) goto L6e
                com.tkay.basead.a.c r2 = r6.b
                android.content.Context r2 = r2.p
                com.tkay.basead.a.c r3 = r6.b
                com.tkay.core.common.f.h r3 = r3.l
                com.tkay.basead.a.c r4 = r6.b
                com.tkay.core.common.f.i r4 = r4.r
                com.tkay.basead.a.c$3$1 r5 = new com.tkay.basead.a.c$3$1
                r5.<init>(r6, r0)
                r1.openApkConfirmDialog(r2, r3, r4, r5)
                return
            L6e:
                com.tkay.basead.a.c r1 = r6.b
                com.tkay.basead.c.i r2 = r6.a
                com.tkay.basead.a.c.a(r1, r0, r2)
                return
        }
    }

    final class 4 implements java.lang.Runnable {
        final boolean a;
        final com.tkay.basead.a.c b;

        4(com.tkay.basead.a.c r1, boolean r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r1 = this;
                com.tkay.basead.a.c r0 = r1.b
                com.tkay.basead.a.c$b r0 = r0.x
                if (r0 == 0) goto L11
                boolean r0 = r1.a
                if (r0 != 0) goto L11
                com.tkay.basead.a.c r0 = r1.b
                com.tkay.basead.a.c$b r0 = r0.x
                r0.b()
            L11:
                com.tkay.basead.a.c r0 = r1.b
                com.tkay.basead.a.c$b r0 = r0.x
                if (r0 == 0) goto L1e
                com.tkay.basead.a.c r0 = r1.b
                com.tkay.basead.a.c$b r0 = r0.x
                r0.c()
            L1e:
                return
        }
    }


    final class 6 implements java.lang.Runnable {
        final com.tkay.basead.a.c a;

        6(com.tkay.basead.a.c r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r1 = this;
                com.tkay.basead.a.c r0 = r1.a
                com.tkay.basead.a.c$b r0 = r0.x
                if (r0 == 0) goto Ld
                com.tkay.basead.a.c r0 = r1.a
                com.tkay.basead.a.c$b r0 = r0.x
                r0.b()
            Ld:
                return
        }
    }




    static class a {
        long a;
        long b;
        java.lang.String c;

        a() {
                r0 = this;
                r0.<init>()
                return
        }

        final boolean a() {
                r4 = this;
                long r0 = java.lang.System.currentTimeMillis()
                long r2 = r4.a
                long r0 = r0 - r2
                long r2 = r4.b
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r0 > 0) goto Lf
                r0 = 1
                return r0
            Lf:
                r0 = 0
                return r0
        }
    }

    public interface b {
        void a();

        void a(boolean r1);

        void b();

        void c();
    }

    public c(android.content.Context r5, com.tkay.core.common.f.i r6, com.tkay.core.common.f.h r7) {
            r4 = this;
            r4.<init>()
            java.lang.Class r0 = r4.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r4.y = r0
            r0 = 0
            r4.z = r0
            r1 = 1
            r4.A = r1
            r2 = 2
            r4.B = r2
            r3 = 10
            r4.C = r3
            r4.o = r0
            r4.w = r0
            com.tkay.basead.a.c$1 r3 = new com.tkay.basead.a.c$1
            r3.<init>(r4)
            r4.x = r3
            r4.l = r7
            r4.r = r6
            android.content.Context r5 = r5.getApplicationContext()
            r4.p = r5
            com.tkay.core.common.f.j r5 = r6.m
            boolean r3 = r7 instanceof com.tkay.core.common.f.f
            if (r3 == 0) goto L43
            boolean r7 = r5 instanceof com.tkay.core.common.f.aa
            if (r7 == 0) goto L50
            com.tkay.core.common.f.aa r5 = (com.tkay.core.common.f.aa) r5
            int r5 = r5.Y()
            if (r5 != r1) goto L50
        L41:
            r5 = r1
            goto L51
        L43:
            boolean r5 = r7 instanceof com.tkay.core.common.f.r
            if (r5 == 0) goto L50
            com.tkay.core.common.f.r r7 = (com.tkay.core.common.f.r) r7
            int r5 = r7.O()
            if (r5 != r1) goto L50
            goto L41
        L50:
            r5 = r0
        L51:
            r4.q = r5
            com.tkay.core.common.f.h r5 = r4.l
            java.lang.String r6 = r6.d
            r5.g(r6)
            com.tkay.basead.handler.OfferClickHandler r5 = new com.tkay.basead.handler.OfferClickHandler
            r5.<init>()
            r4.t = r5
            com.tkay.core.common.f.i r5 = r4.r
            com.tkay.core.common.f.j r5 = r5.m
            int r5 = r5.Q()
            if (r5 == r2) goto L6c
            r0 = r1
        L6c:
            r4.v = r0
            return
    }

    private void a(int r8, com.tkay.basead.c.i r9) {
            r7 = this;
            r0 = 1
            if (r8 == r0) goto L16
            com.tkay.basead.a.c$b r1 = r7.x
            if (r1 == 0) goto La
            r1.a()
        La:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            com.tkay.basead.a.c$6 r2 = new com.tkay.basead.a.c$6
            r2.<init>(r7)
            r1.a(r2)
        L16:
            com.tkay.core.common.f.h r1 = r7.l
            java.lang.String r1 = r1.A()
            java.lang.String r2 = ""
            if (r1 == 0) goto L27
            com.tkay.core.common.f.h r1 = r7.l
            java.lang.String r1 = r1.A()
            goto L28
        L27:
            r1 = r2
        L28:
            com.tkay.core.common.f.i r3 = r7.r
            java.lang.String r3 = r3.d
            if (r3 != 0) goto L30
            r3 = r2
            goto L34
        L30:
            com.tkay.core.common.f.i r3 = r7.r
            java.lang.String r3 = r3.d
        L34:
            java.lang.String r4 = "\\{req_id\\}"
            java.lang.String r1 = r1.replaceAll(r4, r3)
            long r3 = java.lang.System.currentTimeMillis()
            java.lang.String r1 = com.tkay.basead.a.j.a(r1, r9, r3)
            boolean r3 = r7.g()
            r4 = 4
            if (r3 == 0) goto L57
            com.tkay.core.common.f.h r3 = r7.l
            int r3 = r3.D()
            if (r3 != r4) goto L57
            com.tkay.basead.c.d r3 = new com.tkay.basead.c.d
            r3.<init>(r2, r2, r2)
            goto L5c
        L57:
            com.tkay.basead.c.d r3 = new com.tkay.basead.c.d
            r3.<init>(r1, r2, r2)
        L5c:
            r7.a(r3)
            com.tkay.core.common.f.h r5 = r7.l
            int r5 = r5.D()
            if (r5 == r0) goto Lfb
            r6 = 2
            if (r5 == r6) goto Lce
            r6 = 3
            if (r5 == r6) goto Lce
            if (r5 == r4) goto L7c
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L77
            java.lang.String r2 = r3.a
        L77:
            r7.a(r2, r8, r9)
            goto L150
        L7c:
            boolean r2 = r7.g()
            if (r2 == 0) goto L9c
            java.lang.String r2 = r3.a
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L9c
            com.tkay.core.common.f.i r2 = r7.r
            com.tkay.core.common.f.h r4 = r7.l
            com.tkay.basead.c.d r1 = com.tkay.basead.d.b.a.a.a(r2, r4, r1)
            if (r1 == 0) goto L9c
            java.lang.String r2 = r1.a
            r3.a = r2
            java.lang.String r1 = r1.c
            r3.c = r1
        L9c:
            com.tkay.basead.a.c$a r1 = r7.u
            if (r1 == 0) goto Lab
            boolean r1 = r1.a()
            if (r1 == 0) goto Lab
            com.tkay.basead.a.c$a r1 = r7.u
            java.lang.String r1 = r1.c
            goto Lba
        Lab:
            java.lang.String r1 = r3.a
            java.lang.String r1 = r7.b(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto Lba
            r7.a(r1)
        Lba:
            r3.b = r1
            r7.a(r3)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto Lc8
            java.lang.String r1 = r3.a
            goto Lca
        Lc8:
            r9.j = r0
        Lca:
            r7.a(r1, r8, r9)
            return
        Lce:
            boolean r0 = r7.g()
            if (r0 == 0) goto Lef
            com.tkay.core.common.f.h r0 = r7.l
            java.lang.String r0 = r0.z()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lef
            java.lang.String r2 = r7.b(r1)
            java.lang.String r0 = com.tkay.basead.d.b.a.a.a(r2)
            r3.b = r2
            r3.c = r0
            r7.a(r3)
        Lef:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lf7
            java.lang.String r2 = r3.a
        Lf7:
            r7.a(r2, r8, r9)
            return
        Lfb:
            java.lang.String r2 = "http"
            boolean r2 = r1.startsWith(r2)
            if (r2 != 0) goto L107
            r7.a(r1, r8, r9)
            return
        L107:
            com.tkay.basead.a.c$a r2 = r7.u
            r4 = 0
            if (r2 == 0) goto L114
            boolean r2 = r2.a()
            if (r2 == 0) goto L114
            r2 = r0
            goto L115
        L114:
            r2 = r4
        L115:
            boolean r5 = r7.q
            if (r5 == 0) goto L12f
            com.tkay.core.common.f.h r5 = r7.l
            java.lang.String r5 = r5.y()
            if (r2 == 0) goto L125
            com.tkay.basead.a.c$a r5 = r7.u
            java.lang.String r5 = r5.c
        L125:
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 != 0) goto L12f
            r7.a(r5, r8, r9)
            r0 = r4
        L12f:
            if (r2 == 0) goto L136
            com.tkay.basead.a.c$a r1 = r7.u
            java.lang.String r1 = r1.c
            goto L143
        L136:
            java.lang.String r1 = r7.b(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L143
            r7.a(r1)
        L143:
            if (r0 == 0) goto L150
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L14d
            java.lang.String r1 = r3.a
        L14d:
            r7.a(r1, r8, r9)
        L150:
            return
    }

    static void a(com.tkay.basead.a.c r7, int r8, com.tkay.basead.c.i r9) {
            r0 = 1
            if (r8 == r0) goto L16
            com.tkay.basead.a.c$b r1 = r7.x
            if (r1 == 0) goto La
            r1.a()
        La:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            com.tkay.basead.a.c$6 r2 = new com.tkay.basead.a.c$6
            r2.<init>(r7)
            r1.a(r2)
        L16:
            com.tkay.core.common.f.h r1 = r7.l
            java.lang.String r1 = r1.A()
            java.lang.String r2 = ""
            if (r1 == 0) goto L27
            com.tkay.core.common.f.h r1 = r7.l
            java.lang.String r1 = r1.A()
            goto L28
        L27:
            r1 = r2
        L28:
            com.tkay.core.common.f.i r3 = r7.r
            java.lang.String r3 = r3.d
            if (r3 != 0) goto L30
            r3 = r2
            goto L34
        L30:
            com.tkay.core.common.f.i r3 = r7.r
            java.lang.String r3 = r3.d
        L34:
            java.lang.String r4 = "\\{req_id\\}"
            java.lang.String r1 = r1.replaceAll(r4, r3)
            long r3 = java.lang.System.currentTimeMillis()
            java.lang.String r1 = com.tkay.basead.a.j.a(r1, r9, r3)
            boolean r3 = r7.g()
            r4 = 4
            if (r3 == 0) goto L57
            com.tkay.core.common.f.h r3 = r7.l
            int r3 = r3.D()
            if (r3 != r4) goto L57
            com.tkay.basead.c.d r3 = new com.tkay.basead.c.d
            r3.<init>(r2, r2, r2)
            goto L5c
        L57:
            com.tkay.basead.c.d r3 = new com.tkay.basead.c.d
            r3.<init>(r1, r2, r2)
        L5c:
            r7.a(r3)
            com.tkay.core.common.f.h r5 = r7.l
            int r5 = r5.D()
            if (r5 == r0) goto Lfb
            r6 = 2
            if (r5 == r6) goto Lce
            r6 = 3
            if (r5 == r6) goto Lce
            if (r5 == r4) goto L7c
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L77
            java.lang.String r2 = r3.a
        L77:
            r7.a(r2, r8, r9)
            goto L150
        L7c:
            boolean r2 = r7.g()
            if (r2 == 0) goto L9c
            java.lang.String r2 = r3.a
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L9c
            com.tkay.core.common.f.i r2 = r7.r
            com.tkay.core.common.f.h r4 = r7.l
            com.tkay.basead.c.d r1 = com.tkay.basead.d.b.a.a.a(r2, r4, r1)
            if (r1 == 0) goto L9c
            java.lang.String r2 = r1.a
            r3.a = r2
            java.lang.String r1 = r1.c
            r3.c = r1
        L9c:
            com.tkay.basead.a.c$a r1 = r7.u
            if (r1 == 0) goto Lab
            boolean r1 = r1.a()
            if (r1 == 0) goto Lab
            com.tkay.basead.a.c$a r1 = r7.u
            java.lang.String r1 = r1.c
            goto Lba
        Lab:
            java.lang.String r1 = r3.a
            java.lang.String r1 = r7.b(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto Lba
            r7.a(r1)
        Lba:
            r3.b = r1
            r7.a(r3)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto Lc8
            java.lang.String r1 = r3.a
            goto Lca
        Lc8:
            r9.j = r0
        Lca:
            r7.a(r1, r8, r9)
            return
        Lce:
            boolean r0 = r7.g()
            if (r0 == 0) goto Lef
            com.tkay.core.common.f.h r0 = r7.l
            java.lang.String r0 = r0.z()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lef
            java.lang.String r2 = r7.b(r1)
            java.lang.String r0 = com.tkay.basead.d.b.a.a.a(r2)
            r3.b = r2
            r3.c = r0
            r7.a(r3)
        Lef:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lf7
            java.lang.String r2 = r3.a
        Lf7:
            r7.a(r2, r8, r9)
            return
        Lfb:
            java.lang.String r2 = "http"
            boolean r2 = r1.startsWith(r2)
            if (r2 != 0) goto L107
            r7.a(r1, r8, r9)
            return
        L107:
            com.tkay.basead.a.c$a r2 = r7.u
            r4 = 0
            if (r2 == 0) goto L114
            boolean r2 = r2.a()
            if (r2 == 0) goto L114
            r2 = r0
            goto L115
        L114:
            r2 = r4
        L115:
            boolean r5 = r7.q
            if (r5 == 0) goto L12f
            com.tkay.core.common.f.h r5 = r7.l
            java.lang.String r5 = r5.y()
            if (r2 == 0) goto L125
            com.tkay.basead.a.c$a r5 = r7.u
            java.lang.String r5 = r5.c
        L125:
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 != 0) goto L12f
            r7.a(r5, r8, r9)
            r0 = r4
        L12f:
            if (r2 == 0) goto L136
            com.tkay.basead.a.c$a r1 = r7.u
            java.lang.String r1 = r1.c
            goto L143
        L136:
            java.lang.String r1 = r7.b(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L143
            r7.a(r1)
        L143:
            if (r0 == 0) goto L150
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L14d
            java.lang.String r1 = r3.a
        L14d:
            r7.a(r1, r8, r9)
        L150:
            return
    }

    private void a(com.tkay.basead.c.d r4) {
            r3 = this;
            com.tkay.basead.a.d r0 = com.tkay.basead.a.d.a()
            com.tkay.core.common.f.h r1 = r3.l
            int r1 = r1.d()
            com.tkay.core.common.f.h r2 = r3.l
            java.lang.String r2 = r2.p()
            r0.a(r1, r2, r4)
            return
    }

    private synchronized void a(java.lang.String r3) {
            r2 = this;
            monitor-enter(r2)
            com.tkay.basead.a.c$a r0 = r2.u     // Catch: java.lang.Throwable -> L27
            if (r0 != 0) goto Lc
            com.tkay.basead.a.c$a r0 = new com.tkay.basead.a.c$a     // Catch: java.lang.Throwable -> L27
            r0.<init>()     // Catch: java.lang.Throwable -> L27
            r2.u = r0     // Catch: java.lang.Throwable -> L27
        Lc:
            com.tkay.basead.a.c$a r0 = r2.u     // Catch: java.lang.Throwable -> L27
            r0.c = r3     // Catch: java.lang.Throwable -> L27
            com.tkay.basead.a.c$a r3 = r2.u     // Catch: java.lang.Throwable -> L27
            com.tkay.core.common.f.i r0 = r2.r     // Catch: java.lang.Throwable -> L27
            com.tkay.core.common.f.j r0 = r0.m     // Catch: java.lang.Throwable -> L27
            int r0 = r0.P()     // Catch: java.lang.Throwable -> L27
            long r0 = (long) r0     // Catch: java.lang.Throwable -> L27
            r3.b = r0     // Catch: java.lang.Throwable -> L27
            com.tkay.basead.a.c$a r3 = r2.u     // Catch: java.lang.Throwable -> L27
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L27
            r3.a = r0     // Catch: java.lang.Throwable -> L27
            monitor-exit(r2)
            return
        L27:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    private void a(java.lang.String r8, int r9, com.tkay.basead.c.i r10) {
            r7 = this;
            r0 = 1
            if (r9 != r0) goto L4
            return
        L4:
            boolean r1 = r7.n
            r2 = 0
            if (r1 == 0) goto L3a
            r7.m = r2
            com.tkay.core.common.f.h r8 = r7.l
            java.lang.String r8 = r8.o()
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 == 0) goto L23
            com.tkay.core.common.f.h r8 = r7.l
            java.lang.String r8 = r8.z()
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto L2a
        L23:
            com.tkay.basead.a.c$b r8 = r7.x
            if (r8 == 0) goto L2a
            r8.a(r2)
        L2a:
            r7.b(r10)
            com.tkay.core.common.b.m r8 = com.tkay.core.common.b.m.a()
            com.tkay.basead.a.c$7 r9 = new com.tkay.basead.a.c$7
            r9.<init>(r7)
            r8.a(r9)
            return
        L3a:
            if (r9 != 0) goto L43
            boolean r9 = r7.b(r10, r0)
            if (r9 == 0) goto L43
            return
        L43:
            com.tkay.core.common.f.h r9 = r7.l
            java.lang.String r9 = r9.o()
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 == 0) goto L5b
            com.tkay.core.common.f.h r9 = r7.l
            java.lang.String r9 = r9.z()
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L62
        L5b:
            com.tkay.basead.a.c$b r9 = r7.x
            if (r9 == 0) goto L62
            r9.a(r2)
        L62:
            com.tkay.core.common.f.h r9 = r7.l
            java.lang.String r9 = r9.B()
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            r1 = 4
            if (r9 != 0) goto Ld3
            com.tkay.core.common.f.h r9 = r7.l
            int r9 = r9.D()
            if (r9 == r0) goto L7f
            com.tkay.core.common.f.h r9 = r7.l
            int r9 = r9.D()
            if (r9 != r1) goto Ld3
        L7f:
            android.content.Context r9 = r7.p
            com.tkay.core.common.f.h r3 = r7.l
            java.lang.String r3 = r3.B()
            boolean r9 = a(r9, r3)
            com.tkay.basead.c.b r3 = new com.tkay.basead.c.b
            r3.<init>()
            r10.i = r3
            com.tkay.basead.c.d r3 = r7.e()
            com.tkay.basead.c.b r4 = r10.i
            if (r3 == 0) goto L9d
            java.lang.String r3 = r3.c
            goto L9f
        L9d:
            java.lang.String r3 = ""
        L9f:
            r4.a = r3
            com.tkay.basead.c.a r3 = r10.g
            if (r3 == 0) goto Lb1
            com.tkay.basead.c.a r3 = r10.g
            if (r9 == 0) goto Lab
            r4 = 5
            goto Laf
        Lab:
            com.tkay.basead.c.a r4 = r10.g
            int r4 = r4.j
        Laf:
            r3.j = r4
        Lb1:
            if (r9 == 0) goto Lcc
            r7.b(r10)
            r8 = 25
            com.tkay.core.common.f.h r9 = r7.l
            com.tkay.basead.a.b.a(r8, r9, r10)
            r7.m = r2
            com.tkay.core.common.b.m r8 = com.tkay.core.common.b.m.a()
            com.tkay.basead.a.c$8 r9 = new com.tkay.basead.a.c$8
            r9.<init>(r7)
            r8.a(r9)
            return
        Lcc:
            r9 = 26
            com.tkay.core.common.f.h r3 = r7.l
            com.tkay.basead.a.b.a(r9, r3, r10)
        Ld3:
            com.tkay.basead.c.a r9 = r10.g
            r3 = 3
            if (r9 == 0) goto L104
            com.tkay.core.common.f.h r9 = r7.l
            int r9 = r9.D()
            if (r9 != r1) goto L104
            boolean r9 = r10.j
            if (r9 == 0) goto L100
            com.tkay.core.common.b.m r9 = com.tkay.core.common.b.m.a()
            com.tkay.core.api.IExHandler r9 = r9.b()
            com.tkay.basead.c.a r4 = r10.g
            if (r9 == 0) goto Lf9
            com.tkay.core.common.f.h r5 = r7.l
            com.tkay.core.common.f.i r6 = r7.r
            int r9 = r9.checkDownloadType(r5, r6)
            goto Lfd
        Lf9:
            com.tkay.basead.c.a r9 = r10.g
            int r9 = r9.j
        Lfd:
            r4.j = r9
            goto L104
        L100:
            com.tkay.basead.c.a r9 = r10.g
            r9.j = r3
        L104:
            r7.b(r10)
            boolean r9 = android.text.TextUtils.isEmpty(r8)
            if (r9 == 0) goto L113
            com.tkay.core.common.f.h r8 = r7.l
            java.lang.String r8 = r8.y()
        L113:
            boolean r9 = android.text.TextUtils.isEmpty(r8)
            if (r9 == 0) goto L13b
            java.lang.String r8 = "tkay"
            java.lang.String r9 = "Offer click result is null."
            android.util.Log.e(r8, r9)
            com.tkay.core.common.b.m r8 = com.tkay.core.common.b.m.a()
            com.tkay.basead.a.c$9 r9 = new com.tkay.basead.a.c$9
            r9.<init>(r7)
            r8.a(r9)
            r7.m = r2
            com.tkay.core.common.b.m r8 = com.tkay.core.common.b.m.a()
            com.tkay.basead.a.c$10 r9 = new com.tkay.basead.a.c$10
            r9.<init>(r7)
            r8.a(r9)
            return
        L13b:
            com.tkay.core.common.f.h r9 = r7.l
            int r9 = r9.D()
            r4 = 2
            if (r9 == r0) goto L1b6
            if (r9 == r4) goto L1b2
            if (r9 == r3) goto L199
            if (r9 == r1) goto L195
            r10 = 6
            if (r9 == r10) goto L176
            com.tkay.core.common.f.i r9 = r7.r
            com.tkay.core.common.f.j r9 = r9.m
            int r9 = r9.k()
            if (r9 != r4) goto L171
            com.tkay.core.basead.b.a r9 = new com.tkay.core.basead.b.a
            r9.<init>()
            com.tkay.core.common.f.h r10 = r7.l
            r9.c = r10
            com.tkay.core.common.f.i r10 = r7.r
            r9.h = r10
            r9.f = r8
            com.tkay.core.api.IOfferClickHandler r8 = r7.t
            r9.g = r8
            android.content.Context r8 = r7.p
            com.tkay.core.basead.ui.web.WebLandPageActivity.a(r8, r9)
            goto L1f2
        L171:
            com.tkay.core.common.l.l.a(r8)
            goto L1f2
        L176:
            boolean r9 = r7.f()
            if (r9 != 0) goto L1f2
            com.tkay.core.basead.b.a r9 = new com.tkay.core.basead.b.a
            r9.<init>()
            com.tkay.core.common.f.h r10 = r7.l
            r9.c = r10
            com.tkay.core.common.f.i r10 = r7.r
            r9.h = r10
            r9.f = r8
            com.tkay.core.api.IOfferClickHandler r8 = r7.t
            r9.g = r8
            android.content.Context r8 = r7.p
            com.tkay.core.basead.ui.web.WebLandPageActivity.a(r8, r9)
            goto L1f2
        L195:
            r7.a(r8, r10)
            goto L1f2
        L199:
            com.tkay.core.basead.b.a r9 = new com.tkay.core.basead.b.a
            r9.<init>()
            com.tkay.core.common.f.h r10 = r7.l
            r9.c = r10
            com.tkay.core.common.f.i r10 = r7.r
            r9.h = r10
            r9.f = r8
            com.tkay.core.api.IOfferClickHandler r8 = r7.t
            r9.g = r8
            android.content.Context r8 = r7.p
            com.tkay.core.basead.ui.web.WebLandPageActivity.a(r8, r9)
            goto L1f2
        L1b2:
            com.tkay.core.common.l.l.a(r8)
            goto L1f2
        L1b6:
            if (r8 == 0) goto L1c1
            java.lang.String r9 = "http"
            boolean r9 = r8.startsWith(r9)
            if (r9 != 0) goto L1c1
            goto L1c2
        L1c1:
            r0 = r2
        L1c2:
            android.content.Context r9 = r7.p
            boolean r9 = com.tkay.core.basead.a.a.a(r9, r8, r0)
            if (r9 != 0) goto L1f2
            if (r0 != 0) goto L1f2
            com.tkay.core.common.f.i r9 = r7.r
            com.tkay.core.common.f.j r9 = r9.m
            int r9 = r9.k()
            if (r9 != r4) goto L1ef
            com.tkay.core.basead.b.a r9 = new com.tkay.core.basead.b.a
            r9.<init>()
            com.tkay.core.common.f.h r10 = r7.l
            r9.c = r10
            com.tkay.core.common.f.i r10 = r7.r
            r9.h = r10
            r9.f = r8
            com.tkay.core.api.IOfferClickHandler r8 = r7.t
            r9.g = r8
            android.content.Context r8 = r7.p
            com.tkay.core.basead.ui.web.WebLandPageActivity.a(r8, r9)
            goto L1f2
        L1ef:
            com.tkay.core.common.l.l.a(r8)
        L1f2:
            r7.m = r2
            com.tkay.core.common.b.m r8 = com.tkay.core.common.b.m.a()
            com.tkay.basead.a.c$2 r9 = new com.tkay.basead.a.c$2
            r9.<init>(r7)
            r8.a(r9)
            return
    }

    private void a(java.lang.String r7, com.tkay.basead.c.i r8) {
            r6 = this;
            boolean r8 = r8.j
            if (r8 == 0) goto L25
            boolean r8 = android.text.TextUtils.isEmpty(r7)
            if (r8 != 0) goto L21
            android.content.Context r0 = r6.p
            com.tkay.core.common.f.i r1 = r6.r
            com.tkay.core.common.f.h r2 = r6.l
            com.tkay.basead.c.d r3 = r6.e()
            com.tkay.basead.a.i r5 = new com.tkay.basead.a.i
            r5.<init>()
            r4 = r7
            boolean r8 = com.tkay.basead.a.b.a(r0, r1, r2, r3, r4, r5)
            if (r8 != 0) goto L28
            goto L25
        L21:
            com.tkay.core.common.l.l.a(r7)
            return
        L25:
            com.tkay.core.common.l.l.a(r7)
        L28:
            return
    }

    public static boolean a(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r0 = r1.getPackageManager()     // Catch: java.lang.Throwable -> L14
            android.content.Intent r2 = r0.getLaunchIntentForPackage(r2)     // Catch: java.lang.Throwable -> L14
            if (r2 == 0) goto L18
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r2.setFlags(r0)     // Catch: java.lang.Throwable -> L14
            r1.startActivity(r2)     // Catch: java.lang.Throwable -> L14
            r1 = 1
            return r1
        L14:
            r1 = move-exception
            r1.printStackTrace()
        L18:
            r1 = 0
            return r1
    }

    static boolean a(com.tkay.basead.a.c r5, com.tkay.basead.c.i r6) {
            com.tkay.basead.c.b r0 = new com.tkay.basead.c.b
            r0.<init>()
            r6.i = r0
            com.tkay.basead.c.d r0 = r5.e()
            com.tkay.basead.c.b r1 = r6.i
            java.lang.String r2 = ""
            if (r0 == 0) goto L14
            java.lang.String r0 = r0.c
            goto L15
        L14:
            r0 = r2
        L15:
            r1.a = r0
            com.tkay.core.common.f.h r0 = r5.l
            java.lang.String r0 = r0.o()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 != 0) goto L7e
            com.tkay.core.common.f.h r0 = r5.l
            java.lang.String r0 = r0.o()
            com.tkay.core.common.f.i r3 = r5.r
            java.lang.String r3 = r3.d
            if (r3 != 0) goto L31
            goto L35
        L31:
            com.tkay.core.common.f.i r2 = r5.r
            java.lang.String r2 = r2.d
        L35:
            java.lang.String r3 = "\\{req_id\\}"
            java.lang.String r0 = r0.replaceAll(r3, r2)
            android.content.Context r2 = r5.p
            boolean r2 = com.tkay.core.basead.a.a.a(r2, r0, r1)
            r3 = 1
            if (r2 == 0) goto L75
            com.tkay.basead.c.a r2 = r6.g
            if (r2 == 0) goto L4c
            com.tkay.basead.c.a r2 = r6.g
            r2.i = r3
        L4c:
            r5.b(r6)
            com.tkay.core.common.f.i r6 = r5.r
            com.tkay.core.common.f.h r2 = r5.l
            java.lang.String r4 = "1"
            com.tkay.core.common.k.c.a(r6, r2, r0, r4, r3)
            com.tkay.basead.a.c$b r6 = r5.x
            if (r6 == 0) goto L5f
            r6.a()
        L5f:
            com.tkay.basead.a.c$b r6 = r5.x
            if (r6 == 0) goto L66
            r6.a(r3)
        L66:
            r5.m = r1
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()
            com.tkay.basead.a.c$4 r0 = new com.tkay.basead.a.c$4
            r0.<init>(r5, r1)
            r6.a(r0)
            return r3
        L75:
            com.tkay.core.common.f.i r6 = r5.r
            com.tkay.core.common.f.h r5 = r5.l
            java.lang.String r2 = "0"
            com.tkay.core.common.k.c.a(r6, r5, r0, r2, r3)
        L7e:
            return r1
    }

    private boolean a(com.tkay.basead.c.i r6, boolean r7) {
            r5 = this;
            com.tkay.basead.c.b r0 = new com.tkay.basead.c.b
            r0.<init>()
            r6.i = r0
            com.tkay.basead.c.d r0 = r5.e()
            com.tkay.basead.c.b r1 = r6.i
            java.lang.String r2 = ""
            if (r0 == 0) goto L14
            java.lang.String r0 = r0.c
            goto L15
        L14:
            r0 = r2
        L15:
            r1.a = r0
            com.tkay.core.common.f.h r0 = r5.l
            java.lang.String r0 = r0.o()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 != 0) goto L80
            com.tkay.core.common.f.h r0 = r5.l
            java.lang.String r0 = r0.o()
            com.tkay.core.common.f.i r3 = r5.r
            java.lang.String r3 = r3.d
            if (r3 != 0) goto L31
            goto L35
        L31:
            com.tkay.core.common.f.i r2 = r5.r
            java.lang.String r2 = r2.d
        L35:
            java.lang.String r3 = "\\{req_id\\}"
            java.lang.String r0 = r0.replaceAll(r3, r2)
            android.content.Context r2 = r5.p
            boolean r2 = com.tkay.core.basead.a.a.a(r2, r0, r1)
            r3 = 1
            if (r2 == 0) goto L77
            com.tkay.basead.c.a r2 = r6.g
            if (r2 == 0) goto L4c
            com.tkay.basead.c.a r2 = r6.g
            r2.i = r3
        L4c:
            r5.b(r6)
            com.tkay.core.common.f.i r6 = r5.r
            com.tkay.core.common.f.h r2 = r5.l
            java.lang.String r4 = "1"
            com.tkay.core.common.k.c.a(r6, r2, r0, r4, r3)
            com.tkay.basead.a.c$b r6 = r5.x
            if (r6 == 0) goto L61
            if (r7 != 0) goto L61
            r6.a()
        L61:
            com.tkay.basead.a.c$b r6 = r5.x
            if (r6 == 0) goto L68
            r6.a(r3)
        L68:
            r5.m = r1
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()
            com.tkay.basead.a.c$4 r0 = new com.tkay.basead.a.c$4
            r0.<init>(r5, r7)
            r6.a(r0)
            return r3
        L77:
            com.tkay.core.common.f.i r6 = r5.r
            com.tkay.core.common.f.h r7 = r5.l
            java.lang.String r2 = "0"
            com.tkay.core.common.k.c.a(r6, r7, r0, r2, r3)
        L80:
            return r1
    }

    private java.lang.String b(java.lang.String r13) {
            r12 = this;
            r0 = 0
            r2 = r13
            r1 = r0
        L3:
            r3 = 10
            java.lang.String r4 = ""
            if (r1 >= r3) goto Lc6
            r3 = 0
            java.net.URL r5 = new java.net.URL     // Catch: java.lang.Throwable -> La8 java.lang.Exception -> Laa
            r5.<init>(r2)     // Catch: java.lang.Throwable -> La8 java.lang.Exception -> Laa
            java.net.URLConnection r5 = r5.openConnection()     // Catch: java.lang.Throwable -> La8 java.lang.Exception -> Laa
            java.net.HttpURLConnection r5 = (java.net.HttpURLConnection) r5     // Catch: java.lang.Throwable -> La8 java.lang.Exception -> Laa
            java.lang.String r3 = "GET"
            r5.setRequestMethod(r3)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            r5.setInstanceFollowRedirects(r0)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            com.tkay.core.common.f.i r3 = r12.r     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            com.tkay.core.common.f.j r3 = r3.m     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            if (r3 == 0) goto L3e
            r3 = 9
            com.tkay.core.common.f.i r6 = r12.r     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            com.tkay.core.common.f.j r6 = r6.m     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            boolean r3 = com.tkay.basead.a.b.a(r3, r6)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            if (r3 == 0) goto L3e
            java.lang.String r3 = com.tkay.core.common.l.d.i()     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            boolean r6 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            if (r6 != 0) goto L3e
            java.lang.String r6 = "User-Agent"
            r5.addRequestProperty(r6, r3)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
        L3e:
            r3 = 30000(0x7530, float:4.2039E-41)
            r5.setConnectTimeout(r3)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            r5.connect()     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            int r3 = r5.getResponseCode()     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            r6 = 302(0x12e, float:4.23E-43)
            if (r3 == r6) goto L56
            r6 = 301(0x12d, float:4.22E-43)
            if (r3 == r6) goto L56
            r6 = 307(0x133, float:4.3E-43)
            if (r3 != r6) goto L7f
        L56:
            java.lang.String r6 = "Location"
            java.lang.String r2 = r5.getHeaderField(r6)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            boolean r6 = com.tkay.core.basead.a.a.b(r2)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            if (r6 != 0) goto L7e
            java.lang.String r6 = ".apk"
            boolean r6 = r2.contains(r6)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            if (r6 != 0) goto L7e
            java.lang.String r6 = "http"
            boolean r6 = r2.startsWith(r6)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            if (r6 != 0) goto L73
            goto L7e
        L73:
            r5.disconnect()     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            if (r5 == 0) goto L7b
            r5.disconnect()
        L7b:
            int r1 = r1 + 1
            goto L3
        L7e:
            r0 = 1
        L7f:
            if (r0 != 0) goto L9b
            r0 = 200(0xc8, float:2.8E-43)
            if (r3 != r0) goto L86
            goto L9b
        L86:
            com.tkay.core.common.f.i r6 = r12.r     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            com.tkay.core.common.f.h r7 = r12.l     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            java.lang.String r10 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            java.lang.String r11 = ""
            r8 = r13
            r9 = r2
            com.tkay.core.common.k.c.a(r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            if (r5 == 0) goto L9a
            r5.disconnect()
        L9a:
            return r4
        L9b:
            if (r5 == 0) goto La0
            r5.disconnect()
        La0:
            return r2
        La1:
            r13 = move-exception
            r3 = r5
            goto Lc0
        La4:
            r0 = move-exception
            r8 = r2
            r3 = r5
            goto Lac
        La8:
            r13 = move-exception
            goto Lc0
        Laa:
            r0 = move-exception
            r8 = r2
        Lac:
            com.tkay.core.common.f.i r5 = r12.r     // Catch: java.lang.Throwable -> La8
            com.tkay.core.common.f.h r6 = r12.l     // Catch: java.lang.Throwable -> La8
            java.lang.String r9 = ""
            java.lang.String r10 = r0.getMessage()     // Catch: java.lang.Throwable -> La8
            r7 = r13
            com.tkay.core.common.k.c.a(r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> La8
            if (r3 == 0) goto Lc6
            r3.disconnect()
            goto Lc6
        Lc0:
            if (r3 == 0) goto Lc5
            r3.disconnect()
        Lc5:
            throw r13
        Lc6:
            return r4
    }

    private void b(com.tkay.basead.c.i r3) {
            r2 = this;
            boolean r0 = r2.v
            if (r0 != 0) goto L9
            boolean r0 = r2.w
            if (r0 == 0) goto L9
            return
        L9:
            r0 = 1
            r2.w = r0
            r0 = 9
            com.tkay.core.common.f.h r1 = r2.l
            com.tkay.basead.a.b.a(r0, r1, r3)
            return
    }

    static boolean b(com.tkay.basead.a.c r1, com.tkay.basead.c.i r2) {
            r0 = 0
            boolean r1 = r1.b(r2, r0)
            return r1
    }

    private boolean b(com.tkay.basead.c.i r7, boolean r8) {
            r6 = this;
            com.tkay.basead.c.b r0 = new com.tkay.basead.c.b
            r0.<init>()
            r7.i = r0
            com.tkay.basead.c.d r0 = r6.e()
            com.tkay.basead.c.b r1 = r7.i
            java.lang.String r2 = ""
            if (r0 == 0) goto L14
            java.lang.String r0 = r0.c
            goto L15
        L14:
            r0 = r2
        L15:
            r1.a = r0
            r0 = 23
            com.tkay.core.common.f.h r1 = r6.l
            com.tkay.basead.a.b.a(r0, r1, r7)
            com.tkay.core.common.f.h r0 = r6.l
            java.lang.String r0 = r0.z()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 != 0) goto Lbd
            com.tkay.core.common.f.h r0 = r6.l
            java.lang.String r0 = r0.z()
            com.tkay.core.common.f.i r3 = r6.r
            java.lang.String r3 = r3.d
            if (r3 != 0) goto L38
            goto L3c
        L38:
            com.tkay.core.common.f.i r2 = r6.r
            java.lang.String r2 = r2.d
        L3c:
            java.lang.String r3 = "\\{req_id\\}"
            java.lang.String r0 = r0.replaceAll(r3, r2)
            com.tkay.core.common.p r2 = com.tkay.core.common.p.a()
            com.tkay.core.common.f.h r3 = r6.l
            r2.a(r3)
            android.content.Context r2 = r6.p
            boolean r2 = com.tkay.core.basead.a.a.a(r2, r0, r1)
            if (r2 == 0) goto L8e
            com.tkay.basead.c.a r2 = r7.g
            r3 = 1
            if (r2 == 0) goto L5c
            com.tkay.basead.c.a r2 = r7.g
            r2.i = r3
        L5c:
            r6.b(r7)
            com.tkay.core.common.f.i r2 = r6.r
            com.tkay.core.common.f.h r4 = r6.l
            java.lang.String r5 = "1"
            com.tkay.core.common.k.c.a(r2, r4, r0, r5, r1)
            com.tkay.basead.a.c$b r0 = r6.x
            if (r0 == 0) goto L71
            if (r8 != 0) goto L71
            r0.a()
        L71:
            com.tkay.basead.a.c$b r0 = r6.x
            if (r0 == 0) goto L78
            r0.a(r3)
        L78:
            r6.m = r1
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.basead.a.c$5 r1 = new com.tkay.basead.a.c$5
            r1.<init>(r6, r8)
            r0.a(r1)
            r8 = 24
            com.tkay.core.common.f.h r0 = r6.l
            com.tkay.basead.a.b.a(r8, r0, r7)
            return r3
        L8e:
            com.tkay.core.common.p r8 = com.tkay.core.common.p.a()
            com.tkay.core.common.f.h r2 = r6.l
            r8.b(r2)
            android.content.Context r8 = r6.p
            com.tkay.core.common.f.h r2 = r6.l
            java.lang.String r2 = r2.B()
            boolean r8 = com.tkay.basead.a.b.a(r8, r2)
            if (r8 == 0) goto Lad
            r8 = 28
            com.tkay.core.common.f.h r2 = r6.l
            com.tkay.basead.a.b.a(r8, r2, r7)
            goto Lb4
        Lad:
            r8 = 29
            com.tkay.core.common.f.h r2 = r6.l
            com.tkay.basead.a.b.a(r8, r2, r7)
        Lb4:
            com.tkay.core.common.f.i r7 = r6.r
            com.tkay.core.common.f.h r8 = r6.l
            java.lang.String r2 = "0"
            com.tkay.core.common.k.c.a(r7, r8, r0, r2, r1)
        Lbd:
            return r1
    }

    private com.tkay.basead.c.d e() {
            r3 = this;
            com.tkay.basead.a.d r0 = com.tkay.basead.a.d.a()
            com.tkay.core.common.f.h r1 = r3.l
            int r1 = r1.d()
            com.tkay.core.common.f.h r2 = r3.l
            java.lang.String r2 = r2.p()
            com.tkay.basead.c.d r0 = r0.a(r1, r2)
            return r0
    }

    private boolean f() {
            r8 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.core.common.f.al r0 = r0.K()
            int r1 = r0.b()
            r2 = 1
            r3 = 0
            if (r1 != r2) goto L12
            r1 = r2
            goto L13
        L12:
            r1 = r3
        L13:
            int r0 = r0.a()
            if (r0 != r2) goto L1b
            r0 = r2
            goto L1c
        L1b:
            r0 = r3
        L1c:
            java.lang.String r4 = com.tkay.core.common.l.d.l()
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 == 0) goto L2f
            com.tkay.core.common.f.i r0 = r8.r
            com.tkay.core.common.f.h r1 = r8.l
            r2 = 5
            com.tkay.core.common.k.c.a(r0, r1, r2)
            return r3
        L2f:
            if (r1 != 0) goto L3a
            com.tkay.core.common.f.i r0 = r8.r
            com.tkay.core.common.f.h r1 = r8.l
            r2 = 3
            com.tkay.core.common.k.c.a(r0, r1, r2)
            return r3
        L3a:
            if (r0 != 0) goto L44
            com.tkay.core.common.f.i r0 = r8.r
            com.tkay.core.common.f.h r1 = r8.l
            com.tkay.core.common.k.c.a(r0, r1, r2)
            return r3
        L44:
            com.tkay.core.common.f.h r0 = r8.l
            java.lang.String r0 = r0.e()
            com.tkay.core.common.f.h r1 = r8.l
            java.lang.String r1 = r1.f()
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            if (r5 != 0) goto Lc3
            boolean r5 = android.text.TextUtils.isEmpty(r1)
            if (r5 == 0) goto L5d
            goto Lc3
        L5d:
            java.lang.Object r4 = com.tkay.core.common.l.d.c(r4)     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r5 = "com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram$Req"
            java.lang.Class r5 = java.lang.Class.forName(r5)     // Catch: java.lang.Throwable -> Lb6
            java.lang.Object r6 = r5.newInstance()     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r7 = "userName"
            java.lang.reflect.Field r7 = r5.getField(r7)     // Catch: java.lang.Throwable -> Lb6
            r7.set(r6, r0)     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r0 = "path"
            java.lang.reflect.Field r0 = r5.getField(r0)     // Catch: java.lang.Throwable -> Lb6
            r0.set(r6, r1)     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r0 = "miniprogramType"
            java.lang.reflect.Field r0 = r5.getField(r0)     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r1 = "MINIPTOGRAM_TYPE_RELEASE"
            java.lang.reflect.Field r1 = r5.getField(r1)     // Catch: java.lang.Throwable -> Lb6
            r5 = 0
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> Lb6
            r0.set(r6, r1)     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r0 = "com.tencent.mm.opensdk.openapi.IWXAPI"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r1 = "sendReq"
            java.lang.Class[] r5 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r7 = "com.tencent.mm.opensdk.modelbase.BaseReq"
            java.lang.Class r7 = java.lang.Class.forName(r7)     // Catch: java.lang.Throwable -> Lb6
            r5[r3] = r7     // Catch: java.lang.Throwable -> Lb6
            java.lang.reflect.Method r0 = r0.getMethod(r1, r5)     // Catch: java.lang.Throwable -> Lb6
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> Lb6
            r1[r3] = r6     // Catch: java.lang.Throwable -> Lb6
            r0.invoke(r4, r1)     // Catch: java.lang.Throwable -> Lb6
            com.tkay.core.common.f.i r0 = r8.r     // Catch: java.lang.Throwable -> Lb6
            com.tkay.core.common.f.h r1 = r8.l     // Catch: java.lang.Throwable -> Lb6
            com.tkay.core.common.k.c.a(r0, r1, r3)     // Catch: java.lang.Throwable -> Lb6
            return r2
        Lb6:
            r0 = move-exception
            com.tkay.core.common.f.i r1 = r8.r
            com.tkay.core.common.f.h r2 = r8.l
            r4 = 2
            r0.getMessage()
            com.tkay.core.common.k.c.a(r1, r2, r4)
            return r3
        Lc3:
            com.tkay.core.common.f.i r0 = r8.r
            com.tkay.core.common.f.h r1 = r8.l
            r2 = 4
            com.tkay.core.common.k.c.a(r0, r1, r2)
            return r3
    }

    private boolean g() {
            r3 = this;
            com.tkay.core.common.f.h r0 = r3.l
            int r0 = r0.n()
            r1 = 42
            if (r0 == r1) goto L1b
            com.tkay.core.common.f.h r0 = r3.l
            boolean r2 = r0 instanceof com.tkay.core.common.f.y
            if (r2 == 0) goto L19
            com.tkay.core.common.f.y r0 = (com.tkay.core.common.f.y) r0
            int r0 = r0.a()
            if (r0 != r1) goto L19
            goto L1b
        L19:
            r0 = 0
            return r0
        L1b:
            r0 = 1
            return r0
    }

    private void h() {
            r1 = this;
            r0 = 1
            r1.n = r0
            return
    }

    public final void a(com.tkay.basead.a.c.b r1) {
            r0 = this;
            r0.s = r1
            return
    }

    public final void a(com.tkay.basead.c.i r3) {
            r2 = this;
            boolean r0 = r2.m
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r2.m = r0
            r0 = 0
            r2.n = r0
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.basead.a.c$3 r1 = new com.tkay.basead.a.c$3
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    public final boolean a() {
            r1 = this;
            boolean r0 = r1.m
            return r0
    }

    public final com.tkay.core.common.f.h b() {
            r1 = this;
            com.tkay.core.common.f.h r0 = r1.l
            return r0
    }

    public final com.tkay.core.common.f.i c() {
            r1 = this;
            com.tkay.core.common.f.i r0 = r1.r
            return r0
    }

    public final void d() {
            r1 = this;
            r0 = 1
            r1.o = r0
            return
    }
}
