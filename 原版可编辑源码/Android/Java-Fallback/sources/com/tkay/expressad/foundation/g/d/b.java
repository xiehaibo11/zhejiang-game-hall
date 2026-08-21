package com.tkay.expressad.foundation.g.d;

public final class b {
    private static final java.lang.String a = "ImageLoader";
    private static final int b = 1;
    private static final int c = 2;
    private static final java.lang.String d = "message_key";
    private static final java.lang.String e = "message_bitmap";
    private static final java.lang.String f = "message_message";
    private static com.tkay.expressad.foundation.g.d.b g;
    private com.tkay.expressad.foundation.g.g.c h;
    private com.tkay.expressad.foundation.g.a.e<java.lang.String, android.graphics.Bitmap> i;
    private final java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.d.c>> j;


    final class 2 implements com.tkay.expressad.foundation.g.d.d.a {
        final java.lang.String a;
        final com.tkay.expressad.foundation.g.d.b b;



        2(com.tkay.expressad.foundation.g.d.b r1, java.lang.String r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void a(java.lang.String r3, java.lang.String r4) {
                r2 = this;
                com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
                com.tkay.expressad.foundation.g.d.b$2$1 r1 = new com.tkay.expressad.foundation.g.d.b$2$1
                r1.<init>(r2, r4, r3)
                r0.a(r1)
                return
        }

        @Override
        public final void b(java.lang.String r3, java.lang.String r4) {
                r2 = this;
                com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
                com.tkay.expressad.foundation.g.d.b$2$2 r1 = new com.tkay.expressad.foundation.g.d.b$2$2
                r1.<init>(r2, r3, r4)
                r0.a(r1)
                return
        }
    }

    final class 3 implements java.lang.Runnable {
        final com.tkay.expressad.foundation.g.d.c a;
        final android.graphics.Bitmap b;
        final java.lang.String c;
        final com.tkay.expressad.foundation.g.d.b d;

        3(com.tkay.expressad.foundation.g.d.b r1, com.tkay.expressad.foundation.g.d.c r2, android.graphics.Bitmap r3, java.lang.String r4) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r3 = this;
                com.tkay.expressad.foundation.g.d.c r0 = r3.a
                if (r0 == 0) goto Lb
                android.graphics.Bitmap r1 = r3.b
                java.lang.String r2 = r3.c
                r0.a(r1, r2)
            Lb:
                return
        }
    }

    final class 4 implements java.lang.Runnable {
        final com.tkay.expressad.foundation.g.d.c a;
        final java.lang.String b;
        final java.lang.String c;
        final com.tkay.expressad.foundation.g.d.b d;

        4(com.tkay.expressad.foundation.g.d.b r1, com.tkay.expressad.foundation.g.d.c r2, java.lang.String r3, java.lang.String r4) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r3 = this;
                com.tkay.expressad.foundation.g.d.c r0 = r3.a
                if (r0 == 0) goto Lb
                java.lang.String r1 = r3.b
                java.lang.String r2 = r3.c
                r0.a(r1, r2)
            Lb:
                return
        }
    }

    private b(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r2.j = r0
            com.tkay.expressad.foundation.g.g.c r0 = new com.tkay.expressad.foundation.g.g.c
            r0.<init>(r3)
            r2.h = r0
            java.lang.Runtime r3 = java.lang.Runtime.getRuntime()
            long r0 = r3.maxMemory()
            int r3 = (int) r0
            int r3 = r3 / 5
            com.tkay.expressad.foundation.g.a.c r0 = new com.tkay.expressad.foundation.g.a.c
            r0.<init>(r3)
            r2.i = r0
            return
    }

    public static com.tkay.expressad.foundation.g.d.b a(android.content.Context r1) {
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.g
            if (r0 != 0) goto Lb
            com.tkay.expressad.foundation.g.d.b r0 = new com.tkay.expressad.foundation.g.d.b
            r0.<init>(r1)
            com.tkay.expressad.foundation.g.d.b.g = r0
        Lb:
            com.tkay.expressad.foundation.g.d.b r1 = com.tkay.expressad.foundation.g.d.b.g
            return r1
    }

    private com.tkay.expressad.foundation.g.d.d a(java.lang.String r3, java.lang.String r4, java.lang.String r5, boolean r6) {
            r2 = this;
            com.tkay.expressad.foundation.g.d.b$2 r0 = new com.tkay.expressad.foundation.g.d.b$2
            r0.<init>(r2, r3)
            com.tkay.expressad.foundation.g.d.d r1 = new com.tkay.expressad.foundation.g.d.d
            r1.<init>(r3, r4, r5)
            r1.a(r6)
            r1.a(r0)
            return r1
    }

    static java.util.LinkedHashMap a(com.tkay.expressad.foundation.g.d.b r0) {
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.d.c>> r0 = r0.j
            return r0
    }

    public static void a() {
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.g
            com.tkay.expressad.foundation.g.a.e<java.lang.String, android.graphics.Bitmap> r0 = r0.i
            if (r0 == 0) goto L9
            r0.b()
        L9:
            return
    }

    static void a(com.tkay.expressad.foundation.g.d.b r2, java.lang.String r3, android.graphics.Bitmap r4, com.tkay.expressad.foundation.g.d.c r5) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.expressad.foundation.g.d.b$3 r1 = new com.tkay.expressad.foundation.g.d.b$3
            r1.<init>(r2, r5, r4, r3)
            r0.a(r1)
            return
    }

    private static void a(com.tkay.expressad.foundation.g.d.b r2, java.lang.String r3, java.lang.String r4, com.tkay.expressad.foundation.g.d.c r5) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.expressad.foundation.g.d.b$4 r1 = new com.tkay.expressad.foundation.g.d.b$4
            r1.<init>(r2, r5, r4, r3)
            r0.a(r1)
            return
    }

    static void a(com.tkay.expressad.foundation.g.d.b r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, boolean r6, com.tkay.expressad.foundation.g.d.c r7) {
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.d.c>> r0 = r2.j
            monitor-enter(r0)
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.d.c>> r1 = r2.j     // Catch: java.lang.Throwable -> L43
            boolean r1 = r1.containsKey(r4)     // Catch: java.lang.Throwable -> L43
            if (r1 != 0) goto L2e
            java.util.LinkedList r1 = new java.util.LinkedList     // Catch: java.lang.Throwable -> L43
            r1.<init>()     // Catch: java.lang.Throwable -> L43
            r1.add(r7)     // Catch: java.lang.Throwable -> L43
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.d.c>> r7 = r2.j     // Catch: java.lang.Throwable -> L43
            r7.put(r4, r1)     // Catch: java.lang.Throwable -> L43
            com.tkay.expressad.foundation.g.d.b$2 r7 = new com.tkay.expressad.foundation.g.d.b$2     // Catch: java.lang.Throwable -> L43
            r7.<init>(r2, r3)     // Catch: java.lang.Throwable -> L43
            com.tkay.expressad.foundation.g.d.d r1 = new com.tkay.expressad.foundation.g.d.d     // Catch: java.lang.Throwable -> L43
            r1.<init>(r3, r4, r5)     // Catch: java.lang.Throwable -> L43
            r1.a(r6)     // Catch: java.lang.Throwable -> L43
            r1.a(r7)     // Catch: java.lang.Throwable -> L43
            com.tkay.expressad.foundation.g.g.c r2 = r2.h     // Catch: java.lang.Throwable -> L43
            r2.a(r1)     // Catch: java.lang.Throwable -> L43
            goto L41
        L2e:
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.d.c>> r2 = r2.j     // Catch: java.lang.Throwable -> L43
            java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.Throwable -> L43
            java.util.LinkedList r2 = (java.util.LinkedList) r2     // Catch: java.lang.Throwable -> L43
            if (r2 == 0) goto L41
            boolean r3 = r2.contains(r7)     // Catch: java.lang.Throwable -> L43
            if (r3 != 0) goto L41
            r2.add(r7)     // Catch: java.lang.Throwable -> L43
        L41:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L43
            return
        L43:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private void a(java.lang.String r3, android.graphics.Bitmap r4, com.tkay.expressad.foundation.g.d.c r5) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.expressad.foundation.g.d.b$3 r1 = new com.tkay.expressad.foundation.g.d.b$3
            r1.<init>(r2, r5, r4, r3)
            r0.a(r1)
            return
    }

    private void a(java.lang.String r3, java.lang.String r4, com.tkay.expressad.foundation.g.d.c r5) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.expressad.foundation.g.d.b$4 r1 = new com.tkay.expressad.foundation.g.d.b$4
            r1.<init>(r2, r5, r4, r3)
            r0.a(r1)
            return
    }

    private void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, com.tkay.expressad.foundation.g.d.c r4) {
            r0 = this;
            r0.b(r1, r2, r3, r4)
            return
    }

    private void a(java.lang.String r3, java.lang.String r4, java.lang.String r5, boolean r6, com.tkay.expressad.foundation.g.d.c r7) {
            r2 = this;
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.d.c>> r0 = r2.j
            monitor-enter(r0)
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.d.c>> r1 = r2.j     // Catch: java.lang.Throwable -> L43
            boolean r1 = r1.containsKey(r4)     // Catch: java.lang.Throwable -> L43
            if (r1 != 0) goto L2e
            java.util.LinkedList r1 = new java.util.LinkedList     // Catch: java.lang.Throwable -> L43
            r1.<init>()     // Catch: java.lang.Throwable -> L43
            r1.add(r7)     // Catch: java.lang.Throwable -> L43
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.d.c>> r7 = r2.j     // Catch: java.lang.Throwable -> L43
            r7.put(r4, r1)     // Catch: java.lang.Throwable -> L43
            com.tkay.expressad.foundation.g.d.b$2 r7 = new com.tkay.expressad.foundation.g.d.b$2     // Catch: java.lang.Throwable -> L43
            r7.<init>(r2, r3)     // Catch: java.lang.Throwable -> L43
            com.tkay.expressad.foundation.g.d.d r1 = new com.tkay.expressad.foundation.g.d.d     // Catch: java.lang.Throwable -> L43
            r1.<init>(r3, r4, r5)     // Catch: java.lang.Throwable -> L43
            r1.a(r6)     // Catch: java.lang.Throwable -> L43
            r1.a(r7)     // Catch: java.lang.Throwable -> L43
            com.tkay.expressad.foundation.g.g.c r3 = r2.h     // Catch: java.lang.Throwable -> L43
            r3.a(r1)     // Catch: java.lang.Throwable -> L43
            goto L41
        L2e:
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.d.c>> r3 = r2.j     // Catch: java.lang.Throwable -> L43
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L43
            java.util.LinkedList r3 = (java.util.LinkedList) r3     // Catch: java.lang.Throwable -> L43
            if (r3 == 0) goto L41
            boolean r4 = r3.contains(r7)     // Catch: java.lang.Throwable -> L43
            if (r4 != 0) goto L41
            r3.add(r7)     // Catch: java.lang.Throwable -> L43
        L41:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L43
            return
        L43:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    private void b() {
            r1 = this;
            com.tkay.expressad.foundation.g.a.e<java.lang.String, android.graphics.Bitmap> r0 = r1.i
            r0.b()
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.d.c>> r0 = r1.j
            if (r0 == 0) goto Lc
            r0.clear()
        Lc:
            return
    }

    private void b(java.lang.String r9, java.lang.String r10, java.lang.String r11, com.tkay.expressad.foundation.g.d.c r12) {
            r8 = this;
            boolean r0 = com.tkay.expressad.foundation.h.t.a(r9)
            if (r0 != 0) goto L25
            boolean r0 = com.tkay.expressad.foundation.h.t.a(r10)
            if (r0 != 0) goto L25
            boolean r0 = com.tkay.expressad.foundation.h.t.a(r11)
            if (r0 == 0) goto L13
            goto L25
        L13:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.expressad.foundation.g.d.b$1 r7 = new com.tkay.expressad.foundation.g.d.b$1
            r1 = r7
            r2 = r8
            r3 = r11
            r4 = r10
            r5 = r9
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)
            r0.a(r7)
        L25:
            return
    }

    private void c() {
            r1 = this;
            com.tkay.expressad.foundation.g.a.e<java.lang.String, android.graphics.Bitmap> r0 = r1.i
            if (r0 == 0) goto L7
            r0.b()
        L7:
            return
    }

    private android.graphics.Bitmap d(java.lang.String r5) {
            r4 = this;
            boolean r0 = com.tkay.expressad.foundation.h.t.a(r5)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = com.tkay.expressad.foundation.h.s.a(r5)
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            android.graphics.Bitmap r3 = r4.a(r5)
            if (r3 == 0) goto L1c
            android.graphics.Bitmap r5 = r4.a(r5)
            return r5
        L1c:
            boolean r2 = r2.exists()
            if (r2 == 0) goto L2c
            android.graphics.Bitmap r0 = com.tkay.expressad.foundation.g.d.a.a(r0)
            if (r0 == 0) goto L2c
            r4.a(r5, r0)
            return r0
        L2c:
            return r1
    }

    public final android.graphics.Bitmap a(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.foundation.g.a.e<java.lang.String, android.graphics.Bitmap> r0 = r1.i
            java.lang.Object r2 = r0.b(r2)
            android.graphics.Bitmap r2 = (android.graphics.Bitmap) r2
            return r2
    }

    public final void a(java.lang.String r2, android.graphics.Bitmap r3) {
            r1 = this;
            android.graphics.Bitmap r0 = r1.a(r2)
            if (r0 != 0) goto Ld
            if (r3 == 0) goto Ld
            com.tkay.expressad.foundation.g.a.e<java.lang.String, android.graphics.Bitmap> r0 = r1.i
            r0.a(r2, r3)
        Ld:
            return
    }

    public final void a(java.lang.String r2, com.tkay.expressad.foundation.g.d.c r3) {
            r1 = this;
            java.lang.String r0 = com.tkay.expressad.foundation.h.s.a(r2)
            r1.b(r2, r2, r0, r3)
            return
    }

    public final boolean b(java.lang.String r4) {
            r3 = this;
            boolean r0 = com.tkay.expressad.foundation.h.t.a(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = com.tkay.expressad.foundation.h.s.a(r4)
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            android.graphics.Bitmap r4 = r3.a(r4)
            r0 = 1
            if (r4 == 0) goto L19
            return r0
        L19:
            boolean r4 = r2.exists()
            if (r4 == 0) goto L20
            return r0
        L20:
            return r1
    }

    public final void c(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.foundation.g.a.e<java.lang.String, android.graphics.Bitmap> r0 = r1.i     // Catch: java.lang.Throwable -> L16
            if (r0 == 0) goto L15
            com.tkay.expressad.foundation.g.a.e<java.lang.String, android.graphics.Bitmap> r0 = r1.i     // Catch: java.lang.Throwable -> L16
            java.util.Collection r0 = r0.a()     // Catch: java.lang.Throwable -> L16
            boolean r0 = r0.contains(r2)     // Catch: java.lang.Throwable -> L16
            if (r0 == 0) goto L15
            com.tkay.expressad.foundation.g.a.e<java.lang.String, android.graphics.Bitmap> r0 = r1.i     // Catch: java.lang.Throwable -> L16
            r0.a(r2)     // Catch: java.lang.Throwable -> L16
        L15:
            return
        L16:
            r2 = move-exception
            r2.getMessage()
            return
    }
}
