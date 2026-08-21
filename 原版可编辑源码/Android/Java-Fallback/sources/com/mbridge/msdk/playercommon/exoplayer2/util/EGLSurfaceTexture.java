package com.mbridge.msdk.playercommon.exoplayer2.util;

public final class EGLSurfaceTexture implements android.graphics.SurfaceTexture.OnFrameAvailableListener, java.lang.Runnable {
    private static final int[] EGL_CONFIG_ATTRIBUTES = null;
    private static final int EGL_PROTECTED_CONTENT_EXT = 12992;
    public static final int SECURE_MODE_NONE = 0;
    public static final int SECURE_MODE_PROTECTED_PBUFFER = 2;
    public static final int SECURE_MODE_SURFACELESS_CONTEXT = 1;
    private android.opengl.EGLContext context;
    private android.opengl.EGLDisplay display;
    private final android.os.Handler handler;
    private android.opengl.EGLSurface surface;
    private android.graphics.SurfaceTexture texture;
    private final int[] textureIdHolder;

    static class 1 {
    }

    public static final class GlException extends java.lang.RuntimeException {
        private GlException(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        GlException(java.lang.String r1, com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public @interface SecureMode {
    }

    static {
            r0 = 17
            int[] r0 = new int[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [12352, 4, 12324, 8, 12323, 8, 12322, 8, 12321, 8, 12325, 0, 12327, 12344, 12339, 4, 12344} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture.EGL_CONFIG_ATTRIBUTES = r0
            return
    }

    public EGLSurfaceTexture(android.os.Handler r1) {
            r0 = this;
            r0.<init>()
            r0.handler = r1
            r1 = 1
            int[] r1 = new int[r1]
            r0.textureIdHolder = r1
            return
    }

    private static android.opengl.EGLConfig chooseEGLConfig(android.opengl.EGLDisplay r11) {
            r0 = 1
            android.opengl.EGLConfig[] r9 = new android.opengl.EGLConfig[r0]
            int[] r10 = new int[r0]
            int[] r2 = com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture.EGL_CONFIG_ATTRIBUTES
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
            com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture$GlException r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture$GlException
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
            java.lang.String r11 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.formatInvariant(r11, r3)
            r0 = 0
            r2.<init>(r11, r0)
            throw r2
    }

    private static android.opengl.EGLContext createEGLContext(android.opengl.EGLDisplay r2, android.opengl.EGLConfig r3, int r4) {
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
            com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture$GlException r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture$GlException
            r3 = 0
            java.lang.String r4 = "eglCreateContext failed"
            r2.<init>(r4, r3)
            throw r2
    }

    private static android.opengl.EGLSurface createEGLSurface(android.opengl.EGLDisplay r2, android.opengl.EGLConfig r3, android.opengl.EGLContext r4, int r5) {
            r0 = 0
            r1 = 1
            if (r5 != r1) goto L7
            android.opengl.EGLSurface r3 = android.opengl.EGL14.EGL_NO_SURFACE
            goto L1e
        L7:
            r1 = 2
            if (r5 != r1) goto L11
            r5 = 7
            int[] r5 = new int[r5]
            r5 = {x0036: FILL_ARRAY_DATA , data: [12375, 1, 12374, 1, 12992, 1, 12344} // fill-array
            goto L17
        L11:
            r5 = 5
            int[] r5 = new int[r5]
            r5 = {x0048: FILL_ARRAY_DATA , data: [12375, 1, 12374, 1, 12344} // fill-array
        L17:
            r1 = 0
            android.opengl.EGLSurface r3 = android.opengl.EGL14.eglCreatePbufferSurface(r2, r3, r5, r1)
            if (r3 == 0) goto L2d
        L1e:
            boolean r2 = android.opengl.EGL14.eglMakeCurrent(r2, r3, r3, r4)
            if (r2 == 0) goto L25
            return r3
        L25:
            com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture$GlException r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture$GlException
            java.lang.String r3 = "eglMakeCurrent failed"
            r2.<init>(r3, r0)
            throw r2
        L2d:
            com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture$GlException r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture$GlException
            java.lang.String r3 = "eglCreatePbufferSurface failed"
            r2.<init>(r3, r0)
            throw r2
    }

    private static void generateTextureIds(int[] r3) {
            r0 = 1
            r1 = 0
            android.opengl.GLES20.glGenTextures(r0, r3, r1)
            int r3 = android.opengl.GLES20.glGetError()
            if (r3 != 0) goto Lc
            return
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture$GlException r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture$GlException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "glGenTextures failed. Error: "
            r1.append(r2)
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r1 = 0
            r0.<init>(r3, r1)
            throw r0
    }

    private static android.opengl.EGLDisplay getDefaultDisplay() {
            r0 = 0
            android.opengl.EGLDisplay r1 = android.opengl.EGL14.eglGetDisplay(r0)
            r2 = 0
            if (r1 == 0) goto L1b
            r3 = 2
            int[] r3 = new int[r3]
            r4 = 1
            boolean r0 = android.opengl.EGL14.eglInitialize(r1, r3, r0, r3, r4)
            if (r0 == 0) goto L13
            return r1
        L13:
            com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture$GlException r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture$GlException
            java.lang.String r1 = "eglInitialize failed"
            r0.<init>(r1, r2)
            throw r0
        L1b:
            com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture$GlException r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture$GlException
            java.lang.String r1 = "eglGetDisplay failed"
            r0.<init>(r1, r2)
            throw r0
    }

    public final android.graphics.SurfaceTexture getSurfaceTexture() {
            r1 = this;
            android.graphics.SurfaceTexture r0 = r1.texture
            java.lang.Object r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r0)
            android.graphics.SurfaceTexture r0 = (android.graphics.SurfaceTexture) r0
            return r0
    }

    public final void init(int r4) {
            r3 = this;
            android.opengl.EGLDisplay r0 = getDefaultDisplay()
            r3.display = r0
            android.opengl.EGLConfig r0 = chooseEGLConfig(r0)
            android.opengl.EGLDisplay r1 = r3.display
            android.opengl.EGLContext r1 = createEGLContext(r1, r0, r4)
            r3.context = r1
            android.opengl.EGLDisplay r2 = r3.display
            android.opengl.EGLSurface r4 = createEGLSurface(r2, r0, r1, r4)
            r3.surface = r4
            int[] r4 = r3.textureIdHolder
            generateTextureIds(r4)
            android.graphics.SurfaceTexture r4 = new android.graphics.SurfaceTexture
            int[] r0 = r3.textureIdHolder
            r1 = 0
            r0 = r0[r1]
            r4.<init>(r0)
            r3.texture = r4
            r4.setOnFrameAvailableListener(r3)
            return
    }

    @Override
    public final void onFrameAvailable(android.graphics.SurfaceTexture r1) {
            r0 = this;
            android.os.Handler r1 = r0.handler
            r1.post(r0)
            return
    }

    public final void release() {
            r7 = this;
            android.os.Handler r0 = r7.handler
            r0.removeCallbacks(r7)
            r0 = 19
            r1 = 0
            android.graphics.SurfaceTexture r2 = r7.texture     // Catch: java.lang.Throwable -> L5b
            if (r2 == 0) goto L18
            android.graphics.SurfaceTexture r2 = r7.texture     // Catch: java.lang.Throwable -> L5b
            r2.release()     // Catch: java.lang.Throwable -> L5b
            r2 = 1
            int[] r3 = r7.textureIdHolder     // Catch: java.lang.Throwable -> L5b
            r4 = 0
            android.opengl.GLES20.glDeleteTextures(r2, r3, r4)     // Catch: java.lang.Throwable -> L5b
        L18:
            android.opengl.EGLDisplay r2 = r7.display
            if (r2 == 0) goto L2f
            android.opengl.EGLDisplay r3 = android.opengl.EGL14.EGL_NO_DISPLAY
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L2f
            android.opengl.EGLDisplay r2 = r7.display
            android.opengl.EGLSurface r3 = android.opengl.EGL14.EGL_NO_SURFACE
            android.opengl.EGLSurface r4 = android.opengl.EGL14.EGL_NO_SURFACE
            android.opengl.EGLContext r5 = android.opengl.EGL14.EGL_NO_CONTEXT
            android.opengl.EGL14.eglMakeCurrent(r2, r3, r4, r5)
        L2f:
            android.opengl.EGLSurface r2 = r7.surface
            if (r2 == 0) goto L42
            android.opengl.EGLSurface r3 = android.opengl.EGL14.EGL_NO_SURFACE
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L42
            android.opengl.EGLDisplay r2 = r7.display
            android.opengl.EGLSurface r3 = r7.surface
            android.opengl.EGL14.eglDestroySurface(r2, r3)
        L42:
            android.opengl.EGLContext r2 = r7.context
            if (r2 == 0) goto L4b
            android.opengl.EGLDisplay r3 = r7.display
            android.opengl.EGL14.eglDestroyContext(r3, r2)
        L4b:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            if (r2 < r0) goto L52
            android.opengl.EGL14.eglReleaseThread()
        L52:
            r7.display = r1
            r7.context = r1
            r7.surface = r1
            r7.texture = r1
            return
        L5b:
            r2 = move-exception
            android.opengl.EGLDisplay r3 = r7.display
            if (r3 == 0) goto L73
            android.opengl.EGLDisplay r4 = android.opengl.EGL14.EGL_NO_DISPLAY
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L73
            android.opengl.EGLDisplay r3 = r7.display
            android.opengl.EGLSurface r4 = android.opengl.EGL14.EGL_NO_SURFACE
            android.opengl.EGLSurface r5 = android.opengl.EGL14.EGL_NO_SURFACE
            android.opengl.EGLContext r6 = android.opengl.EGL14.EGL_NO_CONTEXT
            android.opengl.EGL14.eglMakeCurrent(r3, r4, r5, r6)
        L73:
            android.opengl.EGLSurface r3 = r7.surface
            if (r3 == 0) goto L86
            android.opengl.EGLSurface r4 = android.opengl.EGL14.EGL_NO_SURFACE
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L86
            android.opengl.EGLDisplay r3 = r7.display
            android.opengl.EGLSurface r4 = r7.surface
            android.opengl.EGL14.eglDestroySurface(r3, r4)
        L86:
            android.opengl.EGLContext r3 = r7.context
            if (r3 == 0) goto L8f
            android.opengl.EGLDisplay r4 = r7.display
            android.opengl.EGL14.eglDestroyContext(r4, r3)
        L8f:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            if (r3 < r0) goto L96
            android.opengl.EGL14.eglReleaseThread()
        L96:
            r7.display = r1
            r7.context = r1
            r7.surface = r1
            r7.texture = r1
            throw r2
    }

    @Override
    public final void run() {
            r1 = this;
            android.graphics.SurfaceTexture r0 = r1.texture
            if (r0 == 0) goto L7
            r0.updateTexImage()
        L7:
            return
    }
}
