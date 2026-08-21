package org.cocos2dx.lib;

public class Cocos2dxRenderer implements android.opengl.GLSurfaceView.Renderer {
    private static final long INTERVAL_60_FPS = 16666666;
    private static final long NANOSECONDSPERMICROSECOND = 1000000;
    private static final long NANOSECONDSPERSECOND = 1000000000;
    private static final java.lang.String TAG = "Cocos2dxRenderer";
    private static java.lang.String isSupportAstc = "1";
    private static long sAnimationInterval = 16666666;
    private static java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxRenderer> sRenderer;
    private java.lang.String mDefaultResourcePath;
    private long mFrameCount;
    private org.cocos2dx.lib.Cocos2dxRenderer.OnGameEngineInitializedListener mGameEngineInitializedListener;
    private long mLastTickInNanoSeconds;
    private boolean mNativeInitCompleted;
    private boolean mNeedShowFPS;
    private boolean mNeedToPause;
    private long mOldNanoTime;
    private int mScreenHeight;
    private int mScreenWidth;


    public interface OnGameEngineInitializedListener {
        void onGameEngineInitialized();
    }

    static {
            return
    }

    public Cocos2dxRenderer() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.mNativeInitCompleted = r0
            r3.mNeedShowFPS = r0
            java.lang.String r1 = ""
            r3.mDefaultResourcePath = r1
            r1 = 0
            r3.mOldNanoTime = r1
            r3.mFrameCount = r1
            r3.mNeedToPause = r0
            return
    }

    static org.cocos2dx.lib.Cocos2dxRenderer.OnGameEngineInitializedListener access$000(org.cocos2dx.lib.Cocos2dxRenderer r0) {
            org.cocos2dx.lib.Cocos2dxRenderer$OnGameEngineInitializedListener r0 = r0.mGameEngineInitializedListener
            return r0
    }

    public static java.lang.String getSupportAstc() {
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxRenderer.isSupportAstc
            return r0
    }

    private static native void nativeDeleteBackward();

    private static native java.lang.String nativeGetContentText();

    private static native void nativeInit(int r0, int r1, java.lang.String r2);

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

    public static void setPreferredFramesPerSecond(int r4) {
            double r0 = (double) r4
            r2 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r2 = r2 / r0
            r0 = 4741671816366391296(0x41cdcd6500000000, double:1.0E9)
            double r2 = r2 * r0
            long r0 = (long) r2
            org.cocos2dx.lib.Cocos2dxRenderer.sAnimationInterval = r0
            return
    }

    public java.lang.String getContentText() {
            r1 = this;
            java.lang.String r0 = nativeGetContentText()
            return r0
    }

    public void handleActionCancel(int[] r2, float[] r3, float[] r4) {
            r1 = this;
            boolean r0 = r1.mNativeInitCompleted
            if (r0 != 0) goto L5
            return
        L5:
            nativeTouchesCancel(r2, r3, r4)
            return
    }

    public void handleActionDown(int r2, float r3, float r4) {
            r1 = this;
            boolean r0 = r1.mNativeInitCompleted
            if (r0 != 0) goto L5
            return
        L5:
            nativeTouchesBegin(r2, r3, r4)
            return
    }

    public void handleActionMove(int[] r2, float[] r3, float[] r4) {
            r1 = this;
            boolean r0 = r1.mNativeInitCompleted
            if (r0 != 0) goto L5
            return
        L5:
            nativeTouchesMove(r2, r3, r4)
            return
    }

    public void handleActionUp(int r2, float r3, float r4) {
            r1 = this;
            boolean r0 = r1.mNativeInitCompleted
            if (r0 != 0) goto L5
            return
        L5:
            nativeTouchesEnd(r2, r3, r4)
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
            boolean r0 = r1.mNativeInitCompleted
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 1
            nativeKeyEvent(r2, r0)
            return
    }

    public void handleKeyUp(int r2) {
            r1 = this;
            boolean r0 = r1.mNativeInitCompleted
            if (r0 != 0) goto L5
            return
        L5:
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
    public void onDrawFrame(javax.microedition.khronos.opengles.GL10 r7) {
            r6 = this;
            boolean r7 = r6.mNeedToPause
            if (r7 == 0) goto L5
            return
        L5:
            boolean r7 = r6.mNeedShowFPS
            if (r7 == 0) goto L3e
            long r0 = r6.mFrameCount
            r2 = 1
            long r0 = r0 + r2
            r6.mFrameCount = r0
            long r0 = java.lang.System.nanoTime()
            long r2 = r6.mOldNanoTime
            long r0 = r0 - r2
            r2 = 1000000000(0x3b9aca00, double:4.94065646E-315)
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 <= 0) goto L3e
            r2 = 4741671816366391296(0x41cdcd6500000000, double:1.0E9)
            long r4 = r6.mFrameCount
            double r4 = (double) r4
            double r4 = r4 * r2
            double r0 = (double) r0
            double r4 = r4 / r0
            org.cocos2dx.lib.Cocos2dxHelper$OnGameInfoUpdatedListener r7 = org.cocos2dx.lib.Cocos2dxHelper.getOnGameInfoUpdatedListener()
            if (r7 == 0) goto L34
            float r0 = (float) r4
            r7.onFPSUpdated(r0)
        L34:
            r0 = 0
            r6.mFrameCount = r0
            long r0 = java.lang.System.nanoTime()
            r6.mOldNanoTime = r0
        L3e:
            long r0 = org.cocos2dx.lib.Cocos2dxRenderer.sAnimationInterval
            r2 = 16666666(0xfe502a, double:8.234427E-317)
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 > 0) goto L4b
            nativeRender()
            goto L69
        L4b:
            long r0 = java.lang.System.nanoTime()
            long r2 = r6.mLastTickInNanoSeconds
            long r0 = r0 - r2
            long r2 = org.cocos2dx.lib.Cocos2dxRenderer.sAnimationInterval
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 >= 0) goto L60
            long r2 = r2 - r0
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r2 = r2 / r0
            java.lang.Thread.sleep(r2)     // Catch: java.lang.Exception -> L60
        L60:
            long r0 = java.lang.System.nanoTime()
            r6.mLastTickInNanoSeconds = r0
            nativeRender()
        L69:
            return
    }

    @Override
    public void onSurfaceChanged(javax.microedition.khronos.opengles.GL10 r1, int r2, int r3) {
            r0 = this;
            nativeOnSurfaceChanged(r2, r3)
            return
    }

    @Override
    public void onSurfaceCreated(javax.microedition.khronos.opengles.GL10 r3, javax.microedition.khronos.egl.EGLConfig r4) {
            r2 = this;
            r4 = 0
            r2.mNativeInitCompleted = r4
            int r4 = r2.mScreenWidth
            int r0 = r2.mScreenHeight
            java.lang.String r1 = r2.mDefaultResourcePath
            nativeInit(r4, r0, r1)
            long r0 = java.lang.System.nanoTime()
            r2.mOldNanoTime = r0
            long r0 = java.lang.System.nanoTime()
            r2.mLastTickInNanoSeconds = r0
            r4 = 1
            r2.mNativeInitCompleted = r4
            org.cocos2dx.lib.Cocos2dxRenderer$OnGameEngineInitializedListener r4 = r2.mGameEngineInitializedListener
            if (r4 == 0) goto L2b
            android.app.Activity r4 = org.cocos2dx.lib.Cocos2dxHelper.getActivity()
            org.cocos2dx.lib.Cocos2dxRenderer$1 r0 = new org.cocos2dx.lib.Cocos2dxRenderer$1
            r0.<init>(r2)
            r4.runOnUiThread(r0)
        L2b:
            r4 = 7939(0x1f03, float:1.1125E-41)
            java.lang.String r3 = r3.glGetString(r4)
            java.lang.String r4 = "GL_KHR_texture_compression_astc_ldr"
            boolean r3 = r3.contains(r4)
            if (r3 != 0) goto L3d
            java.lang.String r3 = ""
            org.cocos2dx.lib.Cocos2dxRenderer.isSupportAstc = r3
        L3d:
            return
    }

    public void setDefaultResourcePath(java.lang.String r1) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            r0.mDefaultResourcePath = r1
            return
    }

    public void setOnGameEngineInitializedListener(org.cocos2dx.lib.Cocos2dxRenderer.OnGameEngineInitializedListener r1) {
            r0 = this;
            r0.mGameEngineInitializedListener = r1
            return
    }

    public void setPauseInMainThread(boolean r1) {
            r0 = this;
            r0.mNeedToPause = r1
            return
    }

    public void setScreenWidthAndHeight(int r1, int r2) {
            r0 = this;
            r0.mScreenWidth = r1
            r0.mScreenHeight = r2
            return
    }

    public void showFPS() {
            r1 = this;
            r0 = 1
            r1.mNeedShowFPS = r0
            return
    }
}
