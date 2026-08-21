package com.tkay.expressad.exoplayer.l;

public final class c extends android.view.Surface {
    private static final java.lang.String b = "DummySurface";
    private static final java.lang.String c = "EGL_EXT_protected_content";
    private static final java.lang.String d = "EGL_KHR_surfaceless_context";
    private static int e;
    private static boolean f;
    public final boolean a;
    private final com.tkay.expressad.exoplayer.l.c.a g;
    private boolean h;

    static class 1 {
    }

    private static class a extends android.os.HandlerThread implements android.os.Handler.Callback {
        private static final int a = 1;
        private static final int b = 2;
        private com.tkay.expressad.exoplayer.k.g c;
        private android.os.Handler d;
        private java.lang.Error e;
        private java.lang.RuntimeException f;
        private com.tkay.expressad.exoplayer.l.c g;

        public a() {
                r1 = this;
                java.lang.String r0 = "dummySurface"
                r1.<init>(r0)
                return
        }

        private void b() {
                r1 = this;
                com.tkay.expressad.exoplayer.k.g r0 = r1.c
                com.tkay.expressad.exoplayer.k.a.a(r0)
                com.tkay.expressad.exoplayer.k.g r0 = r1.c
                r0.a()
                return
        }

        private void b(int r4) {
                r3 = this;
                com.tkay.expressad.exoplayer.k.g r0 = r3.c
                com.tkay.expressad.exoplayer.k.a.a(r0)
                com.tkay.expressad.exoplayer.k.g r0 = r3.c
                r0.a(r4)
                com.tkay.expressad.exoplayer.l.c r0 = new com.tkay.expressad.exoplayer.l.c
                com.tkay.expressad.exoplayer.k.g r1 = r3.c
                android.graphics.SurfaceTexture r1 = r1.b()
                r2 = 0
                if (r4 == 0) goto L17
                r4 = 1
                goto L18
            L17:
                r4 = r2
            L18:
                r0.<init>(r3, r1, r4, r2)
                r3.g = r0
                return
        }

        public final com.tkay.expressad.exoplayer.l.c a(int r4) {
                r3 = this;
                r3.start()
                android.os.Handler r0 = new android.os.Handler
                android.os.Looper r1 = r3.getLooper()
                r0.<init>(r1, r3)
                r3.d = r0
                com.tkay.expressad.exoplayer.k.g r0 = new com.tkay.expressad.exoplayer.k.g
                android.os.Handler r1 = r3.d
                r0.<init>(r1)
                r3.c = r0
                monitor-enter(r3)
                android.os.Handler r0 = r3.d     // Catch: java.lang.Throwable -> L52
                r1 = 1
                r2 = 0
                android.os.Message r4 = r0.obtainMessage(r1, r4, r2)     // Catch: java.lang.Throwable -> L52
                r4.sendToTarget()     // Catch: java.lang.Throwable -> L52
            L23:
                com.tkay.expressad.exoplayer.l.c r4 = r3.g     // Catch: java.lang.Throwable -> L52
                if (r4 != 0) goto L35
                java.lang.RuntimeException r4 = r3.f     // Catch: java.lang.Throwable -> L52
                if (r4 != 0) goto L35
                java.lang.Error r4 = r3.e     // Catch: java.lang.Throwable -> L52
                if (r4 != 0) goto L35
                r3.wait()     // Catch: java.lang.InterruptedException -> L33 java.lang.Throwable -> L52
                goto L23
            L33:
                r2 = r1
                goto L23
            L35:
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L52
                if (r2 == 0) goto L3f
                java.lang.Thread r4 = java.lang.Thread.currentThread()
                r4.interrupt()
            L3f:
                java.lang.RuntimeException r4 = r3.f
                if (r4 != 0) goto L51
                java.lang.Error r4 = r3.e
                if (r4 != 0) goto L50
                com.tkay.expressad.exoplayer.l.c r4 = r3.g
                java.lang.Object r4 = com.tkay.expressad.exoplayer.k.a.a(r4)
                com.tkay.expressad.exoplayer.l.c r4 = (com.tkay.expressad.exoplayer.l.c) r4
                return r4
            L50:
                throw r4
            L51:
                throw r4
            L52:
                r4 = move-exception
                monitor-exit(r3)
                throw r4
        }

        public final void a() {
                r2 = this;
                android.os.Handler r0 = r2.d
                com.tkay.expressad.exoplayer.k.a.a(r0)
                android.os.Handler r0 = r2.d
                r1 = 2
                r0.sendEmptyMessage(r1)
                return
        }

        @Override
        public final boolean handleMessage(android.os.Message r5) {
                r4 = this;
                int r0 = r5.what
                r1 = 1
                if (r0 == r1) goto L26
                r5 = 2
                if (r0 == r5) goto L9
                return r1
            L9:
                com.tkay.expressad.exoplayer.k.g r5 = r4.c     // Catch: java.lang.Throwable -> L17
                com.tkay.expressad.exoplayer.k.a.a(r5)     // Catch: java.lang.Throwable -> L17
                com.tkay.expressad.exoplayer.k.g r5 = r4.c     // Catch: java.lang.Throwable -> L17
                r5.a()     // Catch: java.lang.Throwable -> L17
            L13:
                r4.quit()
                goto L20
            L17:
                r5 = move-exception
                java.lang.String r0 = "DummySurface"
                java.lang.String r2 = "Failed to release dummy surface"
                android.util.Log.e(r0, r2, r5)     // Catch: java.lang.Throwable -> L21
                goto L13
            L20:
                return r1
            L21:
                r5 = move-exception
                r4.quit()
                throw r5
            L26:
                int r5 = r5.arg1     // Catch: java.lang.Throwable -> L4e java.lang.Error -> L50 java.lang.RuntimeException -> L63
                com.tkay.expressad.exoplayer.k.g r0 = r4.c     // Catch: java.lang.Throwable -> L4e java.lang.Error -> L50 java.lang.RuntimeException -> L63
                com.tkay.expressad.exoplayer.k.a.a(r0)     // Catch: java.lang.Throwable -> L4e java.lang.Error -> L50 java.lang.RuntimeException -> L63
                com.tkay.expressad.exoplayer.k.g r0 = r4.c     // Catch: java.lang.Throwable -> L4e java.lang.Error -> L50 java.lang.RuntimeException -> L63
                r0.a(r5)     // Catch: java.lang.Throwable -> L4e java.lang.Error -> L50 java.lang.RuntimeException -> L63
                com.tkay.expressad.exoplayer.l.c r0 = new com.tkay.expressad.exoplayer.l.c     // Catch: java.lang.Throwable -> L4e java.lang.Error -> L50 java.lang.RuntimeException -> L63
                com.tkay.expressad.exoplayer.k.g r2 = r4.c     // Catch: java.lang.Throwable -> L4e java.lang.Error -> L50 java.lang.RuntimeException -> L63
                android.graphics.SurfaceTexture r2 = r2.b()     // Catch: java.lang.Throwable -> L4e java.lang.Error -> L50 java.lang.RuntimeException -> L63
                r3 = 0
                if (r5 == 0) goto L3f
                r5 = r1
                goto L40
            L3f:
                r5 = r3
            L40:
                r0.<init>(r4, r2, r5, r3)     // Catch: java.lang.Throwable -> L4e java.lang.Error -> L50 java.lang.RuntimeException -> L63
                r4.g = r0     // Catch: java.lang.Throwable -> L4e java.lang.Error -> L50 java.lang.RuntimeException -> L63
                monitor-enter(r4)
                r4.notify()     // Catch: java.lang.Throwable -> L4b
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L4b
                goto L72
            L4b:
                r5 = move-exception
                monitor-exit(r4)
                throw r5
            L4e:
                r5 = move-exception
                goto L76
            L50:
                r5 = move-exception
                java.lang.String r0 = "DummySurface"
                java.lang.String r2 = "Failed to initialize dummy surface"
                android.util.Log.e(r0, r2, r5)     // Catch: java.lang.Throwable -> L4e
                r4.e = r5     // Catch: java.lang.Throwable -> L4e
                monitor-enter(r4)
                r4.notify()     // Catch: java.lang.Throwable -> L60
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L60
                goto L72
            L60:
                r5 = move-exception
                monitor-exit(r4)
                throw r5
            L63:
                r5 = move-exception
                java.lang.String r0 = "DummySurface"
                java.lang.String r2 = "Failed to initialize dummy surface"
                android.util.Log.e(r0, r2, r5)     // Catch: java.lang.Throwable -> L4e
                r4.f = r5     // Catch: java.lang.Throwable -> L4e
                monitor-enter(r4)
                r4.notify()     // Catch: java.lang.Throwable -> L73
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L73
            L72:
                return r1
            L73:
                r5 = move-exception
                monitor-exit(r4)
                throw r5
            L76:
                monitor-enter(r4)
                r4.notify()     // Catch: java.lang.Throwable -> L7c
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L7c
                throw r5
            L7c:
                r5 = move-exception
                monitor-exit(r4)
                throw r5
        }
    }

    private c(com.tkay.expressad.exoplayer.l.c.a r1, android.graphics.SurfaceTexture r2, boolean r3) {
            r0 = this;
            r0.<init>(r2)
            r0.g = r1
            r0.a = r3
            return
    }

    c(com.tkay.expressad.exoplayer.l.c.a r1, android.graphics.SurfaceTexture r2, boolean r3, byte r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public static com.tkay.expressad.exoplayer.l.c a(android.content.Context r2, boolean r3) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 17
            if (r0 < r1) goto L24
            r0 = 0
            if (r3 == 0) goto L12
            boolean r2 = a(r2)
            if (r2 == 0) goto L10
            goto L12
        L10:
            r2 = r0
            goto L13
        L12:
            r2 = 1
        L13:
            com.tkay.expressad.exoplayer.k.a.b(r2)
            com.tkay.expressad.exoplayer.l.c$a r2 = new com.tkay.expressad.exoplayer.l.c$a
            r2.<init>()
            if (r3 == 0) goto L1f
            int r0 = com.tkay.expressad.exoplayer.l.c.e
        L1f:
            com.tkay.expressad.exoplayer.l.c r2 = r2.a(r0)
            return r2
        L24:
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r3 = "Unsupported prior to API level 17"
            r2.<init>(r3)
            throw r2
    }

    private static void a() {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 17
            if (r0 < r1) goto L7
            return
        L7:
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Unsupported prior to API level 17"
            r0.<init>(r1)
            throw r0
    }

    public static synchronized boolean a(android.content.Context r6) {
            java.lang.Class<com.tkay.expressad.exoplayer.l.c> r0 = com.tkay.expressad.exoplayer.l.c.class
            monitor-enter(r0)
            boolean r1 = com.tkay.expressad.exoplayer.l.c.f     // Catch: java.lang.Throwable -> L69
            r2 = 1
            r3 = 0
            if (r1 != 0) goto L62
            int r1 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Throwable -> L69
            r4 = 24
            if (r1 >= r4) goto L11
        Lf:
            r6 = r3
            goto L5e
        L11:
            int r1 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Throwable -> L69
            r4 = 26
            if (r1 >= r4) goto L2c
            java.lang.String r1 = "samsung"
            java.lang.String r5 = com.tkay.expressad.exoplayer.k.af.c     // Catch: java.lang.Throwable -> L69
            boolean r1 = r1.equals(r5)     // Catch: java.lang.Throwable -> L69
            if (r1 != 0) goto Lf
            java.lang.String r1 = "XT1650"
            java.lang.String r5 = com.tkay.expressad.exoplayer.k.af.d     // Catch: java.lang.Throwable -> L69
            boolean r1 = r1.equals(r5)     // Catch: java.lang.Throwable -> L69
            if (r1 == 0) goto L2c
            goto Lf
        L2c:
            int r1 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Throwable -> L69
            if (r1 >= r4) goto L3d
            android.content.pm.PackageManager r6 = r6.getPackageManager()     // Catch: java.lang.Throwable -> L69
            java.lang.String r1 = "android.hardware.vr.high_performance"
            boolean r6 = r6.hasSystemFeature(r1)     // Catch: java.lang.Throwable -> L69
            if (r6 != 0) goto L3d
            goto Lf
        L3d:
            android.opengl.EGLDisplay r6 = android.opengl.EGL14.eglGetDisplay(r3)     // Catch: java.lang.Throwable -> L69
            r1 = 12373(0x3055, float:1.7338E-41)
            java.lang.String r6 = android.opengl.EGL14.eglQueryString(r6, r1)     // Catch: java.lang.Throwable -> L69
            if (r6 != 0) goto L4a
            goto Lf
        L4a:
            java.lang.String r1 = "EGL_EXT_protected_content"
            boolean r1 = r6.contains(r1)     // Catch: java.lang.Throwable -> L69
            if (r1 != 0) goto L53
            goto Lf
        L53:
            java.lang.String r1 = "EGL_KHR_surfaceless_context"
            boolean r6 = r6.contains(r1)     // Catch: java.lang.Throwable -> L69
            if (r6 == 0) goto L5d
            r6 = r2
            goto L5e
        L5d:
            r6 = 2
        L5e:
            com.tkay.expressad.exoplayer.l.c.e = r6     // Catch: java.lang.Throwable -> L69
            com.tkay.expressad.exoplayer.l.c.f = r2     // Catch: java.lang.Throwable -> L69
        L62:
            int r6 = com.tkay.expressad.exoplayer.l.c.e     // Catch: java.lang.Throwable -> L69
            monitor-exit(r0)
            if (r6 == 0) goto L68
            return r2
        L68:
            return r3
        L69:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
    }

    private static int b(android.content.Context r4) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 26
            r2 = 0
            if (r0 >= r1) goto L1c
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.c
            java.lang.String r3 = "samsung"
            boolean r0 = r3.equals(r0)
            if (r0 != 0) goto L1b
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r3 = "XT1650"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L1c
        L1b:
            return r2
        L1c:
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            if (r0 >= r1) goto L2d
            android.content.pm.PackageManager r4 = r4.getPackageManager()
            java.lang.String r0 = "android.hardware.vr.high_performance"
            boolean r4 = r4.hasSystemFeature(r0)
            if (r4 != 0) goto L2d
            return r2
        L2d:
            android.opengl.EGLDisplay r4 = android.opengl.EGL14.eglGetDisplay(r2)
            r0 = 12373(0x3055, float:1.7338E-41)
            java.lang.String r4 = android.opengl.EGL14.eglQueryString(r4, r0)
            if (r4 != 0) goto L3a
            return r2
        L3a:
            java.lang.String r0 = "EGL_EXT_protected_content"
            boolean r0 = r4.contains(r0)
            if (r0 != 0) goto L43
            return r2
        L43:
            java.lang.String r0 = "EGL_KHR_surfaceless_context"
            boolean r4 = r4.contains(r0)
            if (r4 == 0) goto L4d
            r4 = 1
            return r4
        L4d:
            r4 = 2
            return r4
    }

    @Override
    public final void release() {
            r2 = this;
            super.release()
            com.tkay.expressad.exoplayer.l.c$a r0 = r2.g
            monitor-enter(r0)
            boolean r1 = r2.h     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.expressad.exoplayer.l.c$a r1 = r2.g     // Catch: java.lang.Throwable -> L14
            r1.a()     // Catch: java.lang.Throwable -> L14
            r1 = 1
            r2.h = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            return
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}
