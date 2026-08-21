package com.mbridge.msdk.playercommon.exoplayer2.video;

public final class DummySurface extends android.view.Surface {
    private static final java.lang.String EXTENSION_PROTECTED_CONTENT = "EGL_EXT_protected_content";
    private static final java.lang.String EXTENSION_SURFACELESS_CONTEXT = "EGL_KHR_surfaceless_context";
    private static final java.lang.String TAG = "DummySurface";
    private static int secureMode;
    private static boolean secureModeInitialized;
    public final boolean secure;
    private final com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface.DummySurfaceThread thread;
    private boolean threadReleased;

    static class 1 {
    }

    private static class DummySurfaceThread extends android.os.HandlerThread implements android.os.Handler.Callback {
        private static final int MSG_INIT = 1;
        private static final int MSG_RELEASE = 2;
        private com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture eglSurfaceTexture;
        private android.os.Handler handler;
        private java.lang.Error initError;
        private java.lang.RuntimeException initException;
        private com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface surface;

        public DummySurfaceThread() {
                r1 = this;
                java.lang.String r0 = "dummySurface"
                r1.<init>(r0)
                return
        }

        private void initInternal(int r4) {
                r3 = this;
                com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture r0 = r3.eglSurfaceTexture
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r0)
                com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture r0 = r3.eglSurfaceTexture
                r0.init(r4)
                com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface r0 = new com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface
                com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture r1 = r3.eglSurfaceTexture
                android.graphics.SurfaceTexture r1 = r1.getSurfaceTexture()
                if (r4 == 0) goto L16
                r4 = 1
                goto L17
            L16:
                r4 = 0
            L17:
                r2 = 0
                r0.<init>(r3, r1, r4, r2)
                r3.surface = r0
                return
        }

        private void releaseInternal() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture r0 = r1.eglSurfaceTexture
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r0)
                com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture r0 = r1.eglSurfaceTexture
                r0.release()
                return
        }

        @Override
        public boolean handleMessage(android.os.Message r4) {
                r3 = this;
                int r0 = r4.what
                r1 = 1
                if (r0 == r1) goto L1f
                r4 = 2
                if (r0 == r4) goto L9
                return r1
            L9:
                r3.releaseInternal()     // Catch: java.lang.Throwable -> L10
            Lc:
                r3.quit()
                goto L19
            L10:
                r4 = move-exception
                java.lang.String r0 = "DummySurface"
                java.lang.String r2 = "Failed to release dummy surface"
                android.util.Log.e(r0, r2, r4)     // Catch: java.lang.Throwable -> L1a
                goto Lc
            L19:
                return r1
            L1a:
                r4 = move-exception
                r3.quit()
                throw r4
            L1f:
                int r4 = r4.arg1     // Catch: java.lang.Throwable -> L2d java.lang.Error -> L2f java.lang.RuntimeException -> L42
                r3.initInternal(r4)     // Catch: java.lang.Throwable -> L2d java.lang.Error -> L2f java.lang.RuntimeException -> L42
                monitor-enter(r3)
                r3.notify()     // Catch: java.lang.Throwable -> L2a
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L2a
                goto L51
            L2a:
                r4 = move-exception
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L2a
                throw r4
            L2d:
                r4 = move-exception
                goto L55
            L2f:
                r4 = move-exception
                java.lang.String r0 = "DummySurface"
                java.lang.String r2 = "Failed to initialize dummy surface"
                android.util.Log.e(r0, r2, r4)     // Catch: java.lang.Throwable -> L2d
                r3.initError = r4     // Catch: java.lang.Throwable -> L2d
                monitor-enter(r3)
                r3.notify()     // Catch: java.lang.Throwable -> L3f
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L3f
                goto L51
            L3f:
                r4 = move-exception
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L3f
                throw r4
            L42:
                r4 = move-exception
                java.lang.String r0 = "DummySurface"
                java.lang.String r2 = "Failed to initialize dummy surface"
                android.util.Log.e(r0, r2, r4)     // Catch: java.lang.Throwable -> L2d
                r3.initException = r4     // Catch: java.lang.Throwable -> L2d
                monitor-enter(r3)
                r3.notify()     // Catch: java.lang.Throwable -> L52
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L52
            L51:
                return r1
            L52:
                r4 = move-exception
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L52
                throw r4
            L55:
                monitor-enter(r3)
                r3.notify()     // Catch: java.lang.Throwable -> L5b
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L5b
                throw r4
            L5b:
                r4 = move-exception
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L5b
                throw r4
        }

        public com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface init(int r4) {
                r3 = this;
                r3.start()
                android.os.Handler r0 = new android.os.Handler
                android.os.Looper r1 = r3.getLooper()
                r0.<init>(r1, r3)
                r3.handler = r0
                com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.EGLSurfaceTexture
                android.os.Handler r1 = r3.handler
                r0.<init>(r1)
                r3.eglSurfaceTexture = r0
                monitor-enter(r3)
                android.os.Handler r0 = r3.handler     // Catch: java.lang.Throwable -> L52
                r1 = 1
                r2 = 0
                android.os.Message r4 = r0.obtainMessage(r1, r4, r2)     // Catch: java.lang.Throwable -> L52
                r4.sendToTarget()     // Catch: java.lang.Throwable -> L52
            L23:
                com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface r4 = r3.surface     // Catch: java.lang.Throwable -> L52
                if (r4 != 0) goto L35
                java.lang.RuntimeException r4 = r3.initException     // Catch: java.lang.Throwable -> L52
                if (r4 != 0) goto L35
                java.lang.Error r4 = r3.initError     // Catch: java.lang.Throwable -> L52
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
                java.lang.RuntimeException r4 = r3.initException
                if (r4 != 0) goto L51
                java.lang.Error r4 = r3.initError
                if (r4 != 0) goto L50
                com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface r4 = r3.surface
                java.lang.Object r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r4)
                com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface r4 = (com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface) r4
                return r4
            L50:
                throw r4
            L51:
                throw r4
            L52:
                r4 = move-exception
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L52
                throw r4
        }

        public void release() {
                r2 = this;
                android.os.Handler r0 = r2.handler
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r0)
                android.os.Handler r0 = r2.handler
                r1 = 2
                r0.sendEmptyMessage(r1)
                return
        }
    }

    private DummySurface(com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface.DummySurfaceThread r1, android.graphics.SurfaceTexture r2, boolean r3) {
            r0 = this;
            r0.<init>(r2)
            r0.thread = r1
            r0.secure = r3
            return
    }

    DummySurface(com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface.DummySurfaceThread r1, android.graphics.SurfaceTexture r2, boolean r3, com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface.1 r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    private static void assertApiLevel17OrHigher() {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 17
            if (r0 < r1) goto L7
            return
        L7:
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Unsupported prior to API level 17"
            r0.<init>(r1)
            throw r0
    }

    private static int getSecureModeV24(android.content.Context r4) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 26
            r2 = 0
            if (r0 >= r1) goto L1c
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MANUFACTURER
            java.lang.String r3 = "samsung"
            boolean r0 = r3.equals(r0)
            if (r0 != 0) goto L1b
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r3 = "XT1650"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L1c
        L1b:
            return r2
        L1c:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
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
            goto L4e
        L4d:
            r4 = 2
        L4e:
            return r4
    }

    public static synchronized boolean isSecureSupported(android.content.Context r5) {
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface> r0 = com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface.class
            monitor-enter(r0)
            boolean r1 = com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface.secureModeInitialized     // Catch: java.lang.Throwable -> L21
            r2 = 1
            r3 = 0
            if (r1 != 0) goto L19
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT     // Catch: java.lang.Throwable -> L21
            r4 = 24
            if (r1 >= r4) goto L11
            r5 = r3
            goto L15
        L11:
            int r5 = getSecureModeV24(r5)     // Catch: java.lang.Throwable -> L21
        L15:
            com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface.secureMode = r5     // Catch: java.lang.Throwable -> L21
            com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface.secureModeInitialized = r2     // Catch: java.lang.Throwable -> L21
        L19:
            int r5 = com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface.secureMode     // Catch: java.lang.Throwable -> L21
            if (r5 == 0) goto L1e
            goto L1f
        L1e:
            r2 = r3
        L1f:
            monitor-exit(r0)
            return r2
        L21:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface newInstanceV17(android.content.Context r1, boolean r2) {
            assertApiLevel17OrHigher()
            r0 = 0
            if (r2 == 0) goto Lf
            boolean r1 = isSecureSupported(r1)
            if (r1 == 0) goto Ld
            goto Lf
        Ld:
            r1 = r0
            goto L10
        Lf:
            r1 = 1
        L10:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1)
            com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface$DummySurfaceThread r1 = new com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface$DummySurfaceThread
            r1.<init>()
            if (r2 == 0) goto L1c
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface.secureMode
        L1c:
            com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface r1 = r1.init(r0)
            return r1
    }

    @Override
    public final void release() {
            r2 = this;
            super.release()
            com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface$DummySurfaceThread r0 = r2.thread
            monitor-enter(r0)
            boolean r1 = r2.threadReleased     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface$DummySurfaceThread r1 = r2.thread     // Catch: java.lang.Throwable -> L14
            r1.release()     // Catch: java.lang.Throwable -> L14
            r1 = 1
            r2.threadReleased = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            return
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
    }
}
