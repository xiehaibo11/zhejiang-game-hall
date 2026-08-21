package com.mbridge.msdk.foundation.same.c;

public final class b {
    private static com.mbridge.msdk.foundation.same.c.b a;
    private com.mbridge.msdk.foundation.same.e.b b;
    private com.mbridge.msdk.foundation.same.a.c<java.lang.String, android.graphics.Bitmap> c;
    private java.util.LinkedHashMap<java.lang.String, java.util.List<com.mbridge.msdk.foundation.same.c.c>> d;
    private android.os.Handler e;







    private b(android.content.Context r4) {
            r3 = this;
            r3.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r3.d = r0
            com.mbridge.msdk.foundation.same.c.b$1 r0 = new com.mbridge.msdk.foundation.same.c.b$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r3, r1)
            r3.e = r0
            com.mbridge.msdk.foundation.same.e.b r0 = new com.mbridge.msdk.foundation.same.e.b
            r0.<init>(r4)
            r3.b = r0
            com.mbridge.msdk.c.b r4 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            com.mbridge.msdk.c.a r4 = r4.g(r0)
            r0 = 10
            if (r4 == 0) goto L35
            int r4 = r4.w()
            goto L36
        L35:
            r4 = r0
        L36:
            if (r4 > 0) goto L39
            goto L3a
        L39:
            r0 = r4
        L3a:
            java.lang.Runtime r4 = java.lang.Runtime.getRuntime()
            long r1 = r4.maxMemory()
            int r4 = (int) r1
            int r4 = r4 / r0
            com.mbridge.msdk.foundation.same.a.a r0 = new com.mbridge.msdk.foundation.same.a.a
            r0.<init>(r4)
            r3.c = r0
            return
    }

    public static com.mbridge.msdk.foundation.same.c.b a(android.content.Context r1) {
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a
            if (r0 != 0) goto Lb
            com.mbridge.msdk.foundation.same.c.b r0 = new com.mbridge.msdk.foundation.same.c.b
            r0.<init>(r1)
            com.mbridge.msdk.foundation.same.c.b.a = r0
        Lb:
            com.mbridge.msdk.foundation.same.c.b r1 = com.mbridge.msdk.foundation.same.c.b.a
            return r1
    }

    private com.mbridge.msdk.foundation.same.c.d a(java.lang.String r2, java.lang.String r3, java.lang.String r4, boolean r5, boolean r6) {
            r1 = this;
            com.mbridge.msdk.foundation.same.c.b$5 r6 = new com.mbridge.msdk.foundation.same.c.b$5
            r6.<init>(r1)
            com.mbridge.msdk.foundation.same.c.d r0 = new com.mbridge.msdk.foundation.same.c.d
            r0.<init>(r2, r3, r4)
            r0.a(r5)
            r0.a(r6)
            return r0
    }

    static java.util.LinkedHashMap a(com.mbridge.msdk.foundation.same.c.b r0) {
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.mbridge.msdk.foundation.same.c.c>> r0 = r0.d
            return r0
    }

    static void a(com.mbridge.msdk.foundation.same.c.b r2, java.lang.String r3, android.graphics.Bitmap r4, com.mbridge.msdk.foundation.same.c.c r5) {
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto Lb
            java.lang.String r0 = "ImageLoader"
            java.lang.String r1 = "handler image load success event"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
        Lb:
            if (r5 != 0) goto Le
            goto L18
        Le:
            android.os.Handler r0 = r2.e
            com.mbridge.msdk.foundation.same.c.b$3 r1 = new com.mbridge.msdk.foundation.same.c.b$3
            r1.<init>(r2, r5, r4, r3)
            r0.post(r1)
        L18:
            return
    }

    static void a(com.mbridge.msdk.foundation.same.c.b r2, java.lang.String r3, java.lang.String r4, com.mbridge.msdk.foundation.same.c.c r5) {
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto Lb
            java.lang.String r0 = "ImageLoader"
            java.lang.String r1 = "handler image load failed event"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
        Lb:
            if (r5 != 0) goto Le
            goto L18
        Le:
            android.os.Handler r0 = r2.e
            com.mbridge.msdk.foundation.same.c.b$4 r1 = new com.mbridge.msdk.foundation.same.c.b$4
            r1.<init>(r2, r5, r4, r3)
            r0.post(r1)
        L18:
            return
    }

    static void a(com.mbridge.msdk.foundation.same.c.b r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, boolean r5, boolean r6, com.mbridge.msdk.foundation.same.c.c r7, com.mbridge.msdk.foundation.same.c.g r8) {
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.mbridge.msdk.foundation.same.c.c>> r6 = r1.d
            boolean r6 = r6.containsKey(r3)
            if (r6 != 0) goto L2d
            java.util.LinkedList r6 = new java.util.LinkedList
            r6.<init>()
            r6.add(r7)
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.mbridge.msdk.foundation.same.c.c>> r0 = r1.d
            r0.put(r3, r6)
            com.mbridge.msdk.foundation.same.c.b$6 r6 = new com.mbridge.msdk.foundation.same.c.b$6
            r6.<init>(r1, r8, r2, r7)
            com.mbridge.msdk.foundation.same.c.d r1 = new com.mbridge.msdk.foundation.same.c.d
            r1.<init>(r2, r3, r4, r8)
            r1.a(r5)
            r1.a(r6)
            java.util.concurrent.ThreadPoolExecutor r2 = com.mbridge.msdk.foundation.same.f.b.e()
            r2.execute(r1)
            goto L40
        L2d:
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.mbridge.msdk.foundation.same.c.c>> r1 = r1.d
            java.lang.Object r1 = r1.get(r3)
            java.util.LinkedList r1 = (java.util.LinkedList) r1
            if (r1 == 0) goto L40
            boolean r2 = r1.contains(r7)
            if (r2 != 0) goto L40
            r1.add(r7)
        L40:
            return
    }

    private void a(java.lang.String r2, java.lang.String r3, java.lang.String r4, boolean r5, boolean r6, com.mbridge.msdk.foundation.same.c.c r7) {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.mbridge.msdk.foundation.same.c.c>> r0 = r1.d
            boolean r0 = r0.containsKey(r3)
            if (r0 != 0) goto L1f
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r0.add(r7)
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.mbridge.msdk.foundation.same.c.c>> r7 = r1.d
            r7.put(r3, r0)
            com.mbridge.msdk.foundation.same.c.d r2 = r1.a(r2, r3, r4, r5, r6)
            com.mbridge.msdk.foundation.same.e.b r3 = r1.b
            r3.b(r2)
            goto L32
        L1f:
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.mbridge.msdk.foundation.same.c.c>> r2 = r1.d
            java.lang.Object r2 = r2.get(r3)
            java.util.LinkedList r2 = (java.util.LinkedList) r2
            if (r2 == 0) goto L32
            boolean r3 = r2.contains(r7)
            if (r3 != 0) goto L32
            r2.add(r7)
        L32:
            return
    }

    static android.os.Handler b(com.mbridge.msdk.foundation.same.c.b r0) {
            android.os.Handler r0 = r0.e
            return r0
    }

    public static void b() {
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a
            r0.c()
            return
    }

    private android.graphics.Bitmap d(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.foundation.same.a.c<java.lang.String, android.graphics.Bitmap> r0 = r1.c
            java.lang.Object r2 = r0.b(r2)
            android.graphics.Bitmap r2 = (android.graphics.Bitmap) r2
            return r2
    }

    public final android.graphics.Bitmap a(java.lang.String r5) {
            r4 = this;
            boolean r0 = com.mbridge.msdk.foundation.tools.ae.a(r5)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ad.a(r5)
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            android.graphics.Bitmap r3 = r4.d(r5)
            if (r3 == 0) goto L1c
            android.graphics.Bitmap r5 = r4.d(r5)
            return r5
        L1c:
            boolean r2 = r2.exists()
            if (r2 == 0) goto L2c
            android.graphics.Bitmap r0 = com.mbridge.msdk.foundation.same.c.a.a(r0)
            if (r0 == 0) goto L2c
            r4.a(r5, r0)
            return r0
        L2c:
            return r1
    }

    public final void a() {
            r1 = this;
            com.mbridge.msdk.foundation.same.a.c<java.lang.String, android.graphics.Bitmap> r0 = r1.c
            r0.b()
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.mbridge.msdk.foundation.same.c.c>> r0 = r1.d
            if (r0 == 0) goto Lc
            r0.clear()
        Lc:
            return
    }

    public final void a(java.lang.String r2, android.graphics.Bitmap r3) {
            r1 = this;
            android.graphics.Bitmap r0 = r1.d(r2)
            if (r0 != 0) goto Ld
            if (r3 == 0) goto Ld
            com.mbridge.msdk.foundation.same.a.c<java.lang.String, android.graphics.Bitmap> r0 = r1.c
            r0.a(r2, r3)
        Ld:
            return
    }

    public final void a(java.lang.String r10, com.mbridge.msdk.foundation.same.c.c r11) {
            r9 = this;
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.ad.a(r10)
            boolean r0 = com.mbridge.msdk.foundation.same.c.f.a()
            if (r0 == 0) goto L34
            r7 = 0
            r4 = 0
            boolean r0 = com.mbridge.msdk.foundation.tools.ae.a(r10)
            if (r0 != 0) goto L88
            boolean r0 = com.mbridge.msdk.foundation.tools.ae.a(r10)
            if (r0 != 0) goto L88
            boolean r0 = com.mbridge.msdk.foundation.tools.ae.a(r3)
            if (r0 == 0) goto L20
            goto L88
        L20:
            com.mbridge.msdk.foundation.same.c.b$2 r8 = new com.mbridge.msdk.foundation.same.c.b$2
            r0 = r8
            r1 = r9
            r2 = r3
            r3 = r4
            r4 = r10
            r5 = r11
            r6 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            java.util.concurrent.ThreadPoolExecutor r10 = com.mbridge.msdk.foundation.same.c.f.b()
            r10.execute(r8)
            goto L88
        L34:
            r5 = 0
            boolean r0 = com.mbridge.msdk.foundation.tools.ae.a(r10)
            if (r0 != 0) goto L88
            boolean r0 = com.mbridge.msdk.foundation.tools.ae.a(r10)
            if (r0 != 0) goto L88
            boolean r0 = com.mbridge.msdk.foundation.tools.ae.a(r3)
            if (r0 == 0) goto L48
            goto L88
        L48:
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            android.graphics.Bitmap r1 = r9.d(r10)
            if (r1 == 0) goto L5d
            boolean r2 = r1.isRecycled()
            if (r2 != 0) goto L5d
            r11.onSuccessLoad(r1, r10)
            goto L88
        L5d:
            boolean r0 = r0.exists()
            if (r0 == 0) goto L7f
            android.graphics.Bitmap r0 = com.mbridge.msdk.foundation.same.c.a.a(r3)
            if (r0 == 0) goto L76
            boolean r1 = r0.isRecycled()
            if (r1 != 0) goto L76
            r9.a(r10, r0)
            r11.onSuccessLoad(r0, r10)
            goto L88
        L76:
            r4 = 1
            r0 = r9
            r1 = r10
            r2 = r10
            r6 = r11
            r0.a(r1, r2, r3, r4, r5, r6)
            goto L88
        L7f:
            r4 = 0
            r5 = 0
            r0 = r9
            r1 = r10
            r2 = r10
            r6 = r11
            r0.a(r1, r2, r3, r4, r5, r6)
        L88:
            return
    }

    public final boolean b(java.lang.String r4) {
            r3 = this;
            boolean r0 = com.mbridge.msdk.foundation.tools.ae.a(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ad.a(r4)
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            android.graphics.Bitmap r4 = r3.d(r4)
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

    public final void c() {
            r1 = this;
            com.mbridge.msdk.foundation.same.a.c<java.lang.String, android.graphics.Bitmap> r0 = r1.c
            if (r0 == 0) goto L7
            r0.b()
        L7:
            return
    }

    public final void c(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.foundation.same.a.c<java.lang.String, android.graphics.Bitmap> r0 = r1.c     // Catch: java.lang.Throwable -> L16
            if (r0 == 0) goto L20
            com.mbridge.msdk.foundation.same.a.c<java.lang.String, android.graphics.Bitmap> r0 = r1.c     // Catch: java.lang.Throwable -> L16
            java.util.Collection r0 = r0.a()     // Catch: java.lang.Throwable -> L16
            boolean r0 = r0.contains(r2)     // Catch: java.lang.Throwable -> L16
            if (r0 == 0) goto L20
            com.mbridge.msdk.foundation.same.a.c<java.lang.String, android.graphics.Bitmap> r0 = r1.c     // Catch: java.lang.Throwable -> L16
            r0.a(r2)     // Catch: java.lang.Throwable -> L16
            goto L20
        L16:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "ImageLoader"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L20:
            return
    }
}
