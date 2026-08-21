package com.tkay.expressad.exoplayer.k;

public final class g implements android.graphics.SurfaceTexture.OnFrameAvailableListener, java.lang.Runnable {
    public static final int a = 0;
    public static final int b = 1;
    public static final int c = 2;
    private static final int[] d = null;
    private static final int e = 12992;
    private final android.os.Handler f;
    private final int[] g;
    private android.opengl.EGLDisplay h;
    private android.opengl.EGLContext i;
    private android.opengl.EGLSurface j;
    private android.graphics.SurfaceTexture k;

    static class 1 {
    }

    public static final class a extends java.lang.RuntimeException {
        private a(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        a(java.lang.String r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface b {
    }

    static {
            r0 = 17
            int[] r0 = new int[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [12352, 4, 12324, 8, 12323, 8, 12322, 8, 12321, 8, 12325, 0, 12327, 12344, 12339, 4, 12344} // fill-array
            com.tkay.expressad.exoplayer.k.g.d = r0
            return
    }

    public g(android.os.Handler r1) {
            r0 = this;
            r0.<init>()
            r0.f = r1
            r1 = 1
            int[] r1 = new int[r1]
            r0.g = r1
            return
    }

    private static android.opengl.EGLConfig a(android.opengl.EGLDisplay r11) {
            r0 = 1
            android.opengl.EGLConfig[] r9 = new android.opengl.EGLConfig[r0]
            int[] r10 = new int[r0]
            int[] r2 = com.tkay.expressad.exoplayer.k.g.d
            r3 = 0
            r5 = 0
            r6 = 1
            r8 = 0
            r1 = r11
            r4 = r9
            r7 = r10
            boolean r11 = android.opengl.EGL14.eglChooseConfig(r1, r2, r3, r4, r5, r6, r7, r8)
            r1 = 0
            if (r11 == 0) goto L20
            r2 = r10[r1]
            if (r2 <= 0) goto L20
            r2 = r9[r1]
            if (r2 == 0) goto L20
            r11 = r9[r1]
            return r11
        L20:
            com.tkay.expressad.exoplayer.k.g$a r2 = new com.tkay.expressad.exoplayer.k.g$a
            r3 = 3
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.Boolean r11 = java.lang.Boolean.valueOf(r11)
            r3[r1] = r11
            r11 = r10[r1]
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)
            r3[r0] = r11
            r11 = 2
            r0 = r9[r1]
            r3[r11] = r0
            java.lang.String r11 = "eglChooseConfig failed: success=%b, numConfigs[0]=%d, configs[0]=%s"
            java.lang.String r11 = com.tkay.expressad.exoplayer.k.af.a(r11, r3)
            r2.<init>(r11, r1)
            throw r2
    }

    private static android.opengl.EGLContext a(android.opengl.EGLDisplay r2, android.opengl.EGLConfig r3, int r4) {
            if (r4 != 0) goto L9
            r4 = 3
            int[] r4 = new int[r4]
            r4 = {x0022: FILL_ARRAY_DATA , data: [12440, 2, 12344} // fill-array
            goto Lf
        L9:
            r4 = 5
            int[] r4 = new int[r4]
            r4 = {x002c: FILL_ARRAY_DATA , data: [12440, 2, 12992, 1, 12344} // fill-array
        Lf:
            android.opengl.EGLContext r0 = android.opengl.EGL14.EGL_NO_CONTEXT
            r1 = 0
            android.opengl.EGLContext r2 = android.opengl.EGL14.eglCreateContext(r2, r3, r0, r4, r1)
            if (r2 == 0) goto L19
            return r2
        L19:
            com.tkay.expressad.exoplayer.k.g$a r2 = new com.tkay.expressad.exoplayer.k.g$a
            java.lang.String r3 = "eglCreateContext failed"
            r2.<init>(r3, r1)
            throw r2
    }

    private static android.opengl.EGLSurface a(android.opengl.EGLDisplay r2, android.opengl.EGLConfig r3, android.opengl.EGLContext r4, int r5) {
            r0 = 0
            r1 = 1
            if (r5 != r1) goto L7
            android.opengl.EGLSurface r3 = android.opengl.EGL14.EGL_NO_SURFACE
            goto L1d
        L7:
            r1 = 2
            if (r5 != r1) goto L11
            r5 = 7
            int[] r5 = new int[r5]
            r5 = {x0034: FILL_ARRAY_DATA , data: [12375, 1, 12374, 1, 12992, 1, 12344} // fill-array
            goto L17
        L11:
            r5 = 5
            int[] r5 = new int[r5]
            r5 = {x0046: FILL_ARRAY_DATA , data: [12375, 1, 12374, 1, 12344} // fill-array
        L17:
            android.opengl.EGLSurface r3 = android.opengl.EGL14.eglCreatePbufferSurface(r2, r3, r5, r0)
            if (r3 == 0) goto L2c
        L1d:
            boolean r2 = android.opengl.EGL14.eglMakeCurrent(r2, r3, r3, r4)
            if (r2 == 0) goto L24
            return r3
        L24:
            com.tkay.expressad.exoplayer.k.g$a r2 = new com.tkay.expressad.exoplayer.k.g$a
            java.lang.String r3 = "eglMakeCurrent failed"
            r2.<init>(r3, r0)
            throw r2
        L2c:
            com.tkay.expressad.exoplayer.k.g$a r2 = new com.tkay.expressad.exoplayer.k.g$a
            java.lang.String r3 = "eglCreatePbufferSurface failed"
            r2.<init>(r3, r0)
            throw r2
    }

    private static void a(int[] r4) {
            r0 = 0
            r1 = 1
            android.opengl.GLES20.glGenTextures(r1, r4, r0)
            int r4 = android.opengl.GLES20.glGetError()
            if (r4 != 0) goto Lc
            return
        Lc:
            com.tkay.expressad.exoplayer.k.g$a r1 = new com.tkay.expressad.exoplayer.k.g$a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "glGenTextures failed. Error: "
            r2.<init>(r3)
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4, r0)
            throw r1
    }

    private static android.opengl.EGLDisplay c() {
            r0 = 0
            android.opengl.EGLDisplay r1 = android.opengl.EGL14.eglGetDisplay(r0)
            if (r1 == 0) goto L1a
            r2 = 2
            int[] r2 = new int[r2]
            r3 = 1
            boolean r2 = android.opengl.EGL14.eglInitialize(r1, r2, r0, r2, r3)
            if (r2 == 0) goto L12
            return r1
        L12:
            com.tkay.expressad.exoplayer.k.g$a r1 = new com.tkay.expressad.exoplayer.k.g$a
            java.lang.String r2 = "eglInitialize failed"
            r1.<init>(r2, r0)
            throw r1
        L1a:
            com.tkay.expressad.exoplayer.k.g$a r1 = new com.tkay.expressad.exoplayer.k.g$a
            java.lang.String r2 = "eglGetDisplay failed"
            r1.<init>(r2, r0)
            throw r1
    }

    public final void a() {
            r6 = this;
            android.os.Handler r0 = r6.f
            r0.removeCallbacks(r6)
            r0 = 19
            r1 = 0
            android.graphics.SurfaceTexture r2 = r6.k     // Catch: java.lang.Throwable -> L59
            if (r2 == 0) goto L18
            android.graphics.SurfaceTexture r2 = r6.k     // Catch: java.lang.Throwable -> L59
            r2.release()     // Catch: java.lang.Throwable -> L59
            r2 = 1
            int[] r3 = r6.g     // Catch: java.lang.Throwable -> L59
            r4 = 0
            android.opengl.GLES20.glDeleteTextures(r2, r3, r4)     // Catch: java.lang.Throwable -> L59
        L18:
            android.opengl.EGLDisplay r2 = r6.h
            if (r2 == 0) goto L2d
            android.opengl.EGLDisplay r3 = android.opengl.EGL14.EGL_NO_DISPLAY
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L2d
            android.opengl.EGLDisplay r2 = r6.h
            android.opengl.EGLSurface r3 = android.opengl.EGL14.EGL_NO_SURFACE
            android.opengl.EGLContext r4 = android.opengl.EGL14.EGL_NO_CONTEXT
            android.opengl.EGL14.eglMakeCurrent(r2, r3, r3, r4)
        L2d:
            android.opengl.EGLSurface r2 = r6.j
            if (r2 == 0) goto L40
            android.opengl.EGLSurface r3 = android.opengl.EGL14.EGL_NO_SURFACE
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L40
            android.opengl.EGLDisplay r2 = r6.h
            android.opengl.EGLSurface r3 = r6.j
            android.opengl.EGL14.eglDestroySurface(r2, r3)
        L40:
            android.opengl.EGLContext r2 = r6.i
            if (r2 == 0) goto L49
            android.opengl.EGLDisplay r3 = r6.h
            android.opengl.EGL14.eglDestroyContext(r3, r2)
        L49:
            int r2 = com.tkay.expressad.exoplayer.k.af.a
            if (r2 < r0) goto L50
            android.opengl.EGL14.eglReleaseThread()
        L50:
            r6.h = r1
            r6.i = r1
            r6.j = r1
            r6.k = r1
            return
        L59:
            r2 = move-exception
            android.opengl.EGLDisplay r3 = r6.h
            if (r3 == 0) goto L6f
            android.opengl.EGLDisplay r4 = android.opengl.EGL14.EGL_NO_DISPLAY
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L6f
            android.opengl.EGLDisplay r3 = r6.h
            android.opengl.EGLSurface r4 = android.opengl.EGL14.EGL_NO_SURFACE
            android.opengl.EGLContext r5 = android.opengl.EGL14.EGL_NO_CONTEXT
            android.opengl.EGL14.eglMakeCurrent(r3, r4, r4, r5)
        L6f:
            android.opengl.EGLSurface r3 = r6.j
            if (r3 == 0) goto L82
            android.opengl.EGLSurface r4 = android.opengl.EGL14.EGL_NO_SURFACE
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L82
            android.opengl.EGLDisplay r3 = r6.h
            android.opengl.EGLSurface r4 = r6.j
            android.opengl.EGL14.eglDestroySurface(r3, r4)
        L82:
            android.opengl.EGLContext r3 = r6.i
            if (r3 == 0) goto L8b
            android.opengl.EGLDisplay r4 = r6.h
            android.opengl.EGL14.eglDestroyContext(r4, r3)
        L8b:
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            if (r3 < r0) goto L92
            android.opengl.EGL14.eglReleaseThread()
        L92:
            r6.h = r1
            r6.i = r1
            r6.j = r1
            r6.k = r1
            throw r2
    }

    public final void a(int r14) {
            r13 = this;
            r0 = 0
            android.opengl.EGLDisplay r1 = android.opengl.EGL14.eglGetDisplay(r0)
            if (r1 == 0) goto Ldf
            r9 = 2
            int[] r2 = new int[r9]
            r10 = 1
            boolean r2 = android.opengl.EGL14.eglInitialize(r1, r2, r0, r2, r10)
            if (r2 == 0) goto Ld7
            r13.h = r1
            android.opengl.EGLConfig[] r11 = new android.opengl.EGLConfig[r10]
            int[] r12 = new int[r10]
            int[] r2 = com.tkay.expressad.exoplayer.k.g.d
            r3 = 0
            r5 = 0
            r6 = 1
            r8 = 0
            r4 = r11
            r7 = r12
            boolean r1 = android.opengl.EGL14.eglChooseConfig(r1, r2, r3, r4, r5, r6, r7, r8)
            r2 = 3
            if (r1 == 0) goto Lb7
            r3 = r12[r0]
            if (r3 <= 0) goto Lb7
            r3 = r11[r0]
            if (r3 == 0) goto Lb7
            r1 = r11[r0]
            android.opengl.EGLDisplay r3 = r13.h
            r4 = 5
            if (r14 != 0) goto L3b
            int[] r2 = new int[r2]
            r2 = {x00e8: FILL_ARRAY_DATA , data: [12440, 2, 12344} // fill-array
            goto L40
        L3b:
            int[] r2 = new int[r4]
            r2 = {x00f2: FILL_ARRAY_DATA , data: [12440, 2, 12992, 1, 12344} // fill-array
        L40:
            android.opengl.EGLContext r5 = android.opengl.EGL14.EGL_NO_CONTEXT
            android.opengl.EGLContext r2 = android.opengl.EGL14.eglCreateContext(r3, r1, r5, r2, r0)
            if (r2 == 0) goto Laf
            r13.i = r2
            android.opengl.EGLDisplay r3 = r13.h
            if (r14 != r10) goto L51
            android.opengl.EGLSurface r14 = android.opengl.EGL14.EGL_NO_SURFACE
            goto L65
        L51:
            if (r14 != r9) goto L5a
            r14 = 7
            int[] r14 = new int[r14]
            r14 = {x0100: FILL_ARRAY_DATA , data: [12375, 1, 12374, 1, 12992, 1, 12344} // fill-array
            goto L5f
        L5a:
            int[] r14 = new int[r4]
            r14 = {x0112: FILL_ARRAY_DATA , data: [12375, 1, 12374, 1, 12344} // fill-array
        L5f:
            android.opengl.EGLSurface r14 = android.opengl.EGL14.eglCreatePbufferSurface(r3, r1, r14, r0)
            if (r14 == 0) goto La7
        L65:
            boolean r1 = android.opengl.EGL14.eglMakeCurrent(r3, r14, r14, r2)
            if (r1 == 0) goto L9f
            r13.j = r14
            int[] r14 = r13.g
            android.opengl.GLES20.glGenTextures(r10, r14, r0)
            int r14 = android.opengl.GLES20.glGetError()
            if (r14 != 0) goto L87
            android.graphics.SurfaceTexture r14 = new android.graphics.SurfaceTexture
            int[] r1 = r13.g
            r0 = r1[r0]
            r14.<init>(r0)
            r13.k = r14
            r14.setOnFrameAvailableListener(r13)
            return
        L87:
            com.tkay.expressad.exoplayer.k.g$a r1 = new com.tkay.expressad.exoplayer.k.g$a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "glGenTextures failed. Error: "
            r2.<init>(r3)
            java.lang.String r14 = java.lang.Integer.toHexString(r14)
            r2.append(r14)
            java.lang.String r14 = r2.toString()
            r1.<init>(r14, r0)
            throw r1
        L9f:
            com.tkay.expressad.exoplayer.k.g$a r14 = new com.tkay.expressad.exoplayer.k.g$a
            java.lang.String r1 = "eglMakeCurrent failed"
            r14.<init>(r1, r0)
            throw r14
        La7:
            com.tkay.expressad.exoplayer.k.g$a r14 = new com.tkay.expressad.exoplayer.k.g$a
            java.lang.String r1 = "eglCreatePbufferSurface failed"
            r14.<init>(r1, r0)
            throw r14
        Laf:
            com.tkay.expressad.exoplayer.k.g$a r14 = new com.tkay.expressad.exoplayer.k.g$a
            java.lang.String r1 = "eglCreateContext failed"
            r14.<init>(r1, r0)
            throw r14
        Lb7:
            com.tkay.expressad.exoplayer.k.g$a r14 = new com.tkay.expressad.exoplayer.k.g$a
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r2[r0] = r1
            r1 = r12[r0]
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2[r10] = r1
            r1 = r11[r0]
            r2[r9] = r1
            java.lang.String r1 = "eglChooseConfig failed: success=%b, numConfigs[0]=%d, configs[0]=%s"
            java.lang.String r1 = com.tkay.expressad.exoplayer.k.af.a(r1, r2)
            r14.<init>(r1, r0)
            throw r14
        Ld7:
            com.tkay.expressad.exoplayer.k.g$a r14 = new com.tkay.expressad.exoplayer.k.g$a
            java.lang.String r1 = "eglInitialize failed"
            r14.<init>(r1, r0)
            throw r14
        Ldf:
            com.tkay.expressad.exoplayer.k.g$a r14 = new com.tkay.expressad.exoplayer.k.g$a
            java.lang.String r1 = "eglGetDisplay failed"
            r14.<init>(r1, r0)
            throw r14
    }

    public final android.graphics.SurfaceTexture b() {
            r1 = this;
            android.graphics.SurfaceTexture r0 = r1.k
            java.lang.Object r0 = com.tkay.expressad.exoplayer.k.a.a(r0)
            android.graphics.SurfaceTexture r0 = (android.graphics.SurfaceTexture) r0
            return r0
    }

    @Override
    public final void onFrameAvailable(android.graphics.SurfaceTexture r1) {
            r0 = this;
            android.os.Handler r1 = r0.f
            r1.post(r0)
            return
    }

    @Override
    public final void run() {
            r1 = this;
            android.graphics.SurfaceTexture r0 = r1.k
            if (r0 == 0) goto L7
            r0.updateTexImage()
        L7:
            return
    }
}
