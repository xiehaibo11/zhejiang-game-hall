package org.cocos2dx.lib;

public class Cocos2dxRenderer implements android.opengl.GLSurfaceView.Renderer {
    private static final long NANOSECONDSPERMICROSECOND = 1000000;
    private static final long NANOSECONDSPERSECOND = 1000000000;
    private static long sAnimationInterval = 16666668;
    private long mLastTickInNanoSeconds;
    private boolean mNativeInitCompleted;
    private int mScreenHeight;
    private int mScreenWidth;

    static {
            return
    }

    public Cocos2dxRenderer() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mNativeInitCompleted = r0
            return
    }

    private static native void nativeDeleteBackward();

    private static native java.lang.String nativeGetContentText();

    private static native void nativeInit(int r0, int r1);

    private static native void nativeInsertText(java.lang.String r0);

    private static native boolean nativeKeyEvent(int r0, boolean r1);

    private static native void nativeOnPause();

    private static native void nativeOnResume();

    private static native void nativeOnSurfaceChanged(int r0, int r1);

    private static native void nativeRender();

    private static native void nativeTouchesBegin(int r0, float r1, float r2);

    private static native void nativeTouchesCancel(int[] r0, float[] r1, float[] r2);

    private static native void nativeTouchesEnd(int r0, float r1, float r2);

    private static native void nativeTouchesMove(int[] r0, float[] r1, float[] r2);

    public static void setAnimationInterval(float r2) {
            r0 = 1315859240(0x4e6e6b28, float:1.0E9)
            float r2 = r2 * r0
            long r0 = (long) r2
            org.cocos2dx.lib.Cocos2dxRenderer.sAnimationInterval = r0
            return
    }

    public java.lang.String getContentText() {
            r1 = this;
            java.lang.String r0 = nativeGetContentText()
            return r0
    }

    public void handleActionCancel(int[] r1, float[] r2, float[] r3) {
            r0 = this;
            nativeTouchesCancel(r1, r2, r3)
            return
    }

    public void handleActionDown(int r1, float r2, float r3) {
            r0 = this;
            nativeTouchesBegin(r1, r2, r3)
            return
    }

    public void handleActionMove(int[] r1, float[] r2, float[] r3) {
            r0 = this;
            nativeTouchesMove(r1, r2, r3)
            return
    }

    public void handleActionUp(int r1, float r2, float r3) {
            r0 = this;
            nativeTouchesEnd(r1, r2, r3)
            return
    }

    public void handleDeleteBackward() {
            r0 = this;
            nativeDeleteBackward()
            return
    }

    public void handleInsertText(java.lang.String r1) {
            r0 = this;
            nativeInsertText(r1)
            return
    }

    public void handleKeyDown(int r2) {
            r1 = this;
            r0 = 1
            nativeKeyEvent(r2, r0)
            return
    }

    public void handleKeyUp(int r2) {
            r1 = this;
            r0 = 0
            nativeKeyEvent(r2, r0)
            return
    }

    public void handleOnPause() {
            r1 = this;
            boolean r0 = r1.mNativeInitCompleted
            if (r0 != 0) goto L5
            return
        L5:
            org.cocos2dx.lib.Cocos2dxHelper.onEnterBackground()
            nativeOnPause()
            return
    }

    public void handleOnResume() {
            r0 = this;
            org.cocos2dx.lib.Cocos2dxHelper.onEnterForeground()
            nativeOnResume()
            return
    }

    @Override
    public void onDrawFrame(javax.microedition.khronos.opengles.GL10 r5) {
            r4 = this;
            long r0 = org.cocos2dx.lib.Cocos2dxRenderer.sAnimationInterval
            float r5 = (float) r0
            r0 = 1266569260(0x4b7e502c, float:1.6666668E7)
            int r5 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r5 > 0) goto Le
            nativeRender()
            goto L2c
        Le:
            long r0 = java.lang.System.nanoTime()
            long r2 = r4.mLastTickInNanoSeconds
            long r0 = r0 - r2
            long r2 = org.cocos2dx.lib.Cocos2dxRenderer.sAnimationInterval
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 >= 0) goto L23
            long r2 = r2 - r0
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r2 = r2 / r0
            java.lang.Thread.sleep(r2)     // Catch: java.lang.Exception -> L23
        L23:
            long r0 = java.lang.System.nanoTime()
            r4.mLastTickInNanoSeconds = r0
            nativeRender()
        L2c:
            return
    }

    @Override
    public void onSurfaceChanged(javax.microedition.khronos.opengles.GL10 r1, int r2, int r3) {
            r0 = this;
            nativeOnSurfaceChanged(r2, r3)
            return
    }

    @Override
    public void onSurfaceCreated(javax.microedition.khronos.opengles.GL10 r1, javax.microedition.khronos.egl.EGLConfig r2) {
            r0 = this;
            int r1 = r0.mScreenWidth
            int r2 = r0.mScreenHeight
            nativeInit(r1, r2)
            long r1 = java.lang.System.nanoTime()
            r0.mLastTickInNanoSeconds = r1
            r1 = 1
            r0.mNativeInitCompleted = r1
            return
    }

    public void setScreenWidthAndHeight(int r1, int r2) {
            r0 = this;
            r0.mScreenWidth = r1
            r0.mScreenHeight = r2
            return
    }
}
