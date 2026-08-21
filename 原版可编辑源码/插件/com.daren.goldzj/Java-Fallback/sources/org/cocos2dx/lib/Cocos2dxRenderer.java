package org.cocos2dx.lib;

import android.opengl.GLSurfaceView;
import java.lang.ref.WeakReference;
import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;
import org.cocos2dx.lib.Cocos2dxHelper;

public class Cocos2dxRenderer implements GLSurfaceView.Renderer {
    private static final long INTERVAL_60_FPS = 16666666;
    private static final long NANOSECONDSPERMICROSECOND = 1000000;
    private static final long NANOSECONDSPERSECOND = 1000000000;
    private static final String TAG = "Cocos2dxRenderer";
    private static String isSupportAstc = "1";
    private static long sAnimationInterval = 16666666;
    private static WeakReference<Cocos2dxRenderer> sRenderer;
    private String mDefaultResourcePath;
    private long mFrameCount;
    private OnGameEngineInitializedListener mGameEngineInitializedListener;
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
    }

    private static native void nativeDeleteBackward();

    private static native String nativeGetContentText();

    private static native void nativeInit(int r0, int r1, String r2);

    private static native void nativeInsertText(String r0);

    private static native boolean nativeKeyEvent(int r0, boolean r1);

    private static native void nativeOnPause();

    private static native void nativeOnResume();

    private static native void nativeOnSurfaceChanged(int r0, int r1);

    private static native void nativeRender();

    private static native void nativeTouchesBegin(int r0, float r1, float r2);

    private static native void nativeTouchesCancel(int[] r0, float[] r1, float[] r2);

    private static native void nativeTouchesEnd(int r0, float r1, float r2);

    private static native void nativeTouchesMove(int[] r0, float[] r1, float[] r2);

    public Cocos2dxRenderer() {
        this.mNativeInitCompleted = false;
        this.mNeedShowFPS = false;
        this.mDefaultResourcePath = "";
        this.mOldNanoTime = 0;
        this.mFrameCount = 0;
        this.mNeedToPause = false;
    }

    static OnGameEngineInitializedListener access$000(Cocos2dxRenderer r0) {
        return r0.mGameEngineInitializedListener;
    }

    public static void setPreferredFramesPerSecond(int r4) {
        sAnimationInterval = (long) ((1.0d / ((double) r4)) * 1.0E9d);
    }

    public void setScreenWidthAndHeight(int r1, int r2) {
        this.mScreenWidth = r1;
        this.mScreenHeight = r2;
    }

    public void setDefaultResourcePath(String r1) {
        if (r1 != null) goto L4;
        return;
    L4:
        this.mDefaultResourcePath = r1;
    }

    public void showFPS() {
        this.mNeedShowFPS = true;
    }

    public void setOnGameEngineInitializedListener(OnGameEngineInitializedListener r1) {
        this.mGameEngineInitializedListener = r1;
    }

    @Override
    public void onSurfaceCreated(GL10 r3, EGLConfig r4) {
        this.mNativeInitCompleted = false;
        nativeInit(this.mScreenWidth, this.mScreenHeight, this.mDefaultResourcePath);
        this.mOldNanoTime = System.nanoTime();
        this.mLastTickInNanoSeconds = System.nanoTime();
        this.mNativeInitCompleted = true;
        if (this.mGameEngineInitializedListener == null) goto L6;
        Cocos2dxHelper.getActivity().runOnUiThread(new 1(this));
    L6:
        if (r3.glGetString(7939).contains("GL_KHR_texture_compression_astc_ldr") == true) goto L9;
        isSupportAstc = "";
        return;
    }

    public static String getSupportAstc() {
        return isSupportAstc;
    }

    @Override
    public void onSurfaceChanged(GL10 r1, int r2, int r3) {
        nativeOnSurfaceChanged(r2, r3);
    }

    @Override
    public void onDrawFrame(GL10 r7) {
        if (this.mNeedToPause == false) goto L6;
        return;
    L6:
        if (this.mNeedShowFPS == false) goto L14;
        this.mFrameCount++;
        long r0 = System.nanoTime() - this.mOldNanoTime;
        if (r0 <= NANOSECONDSPERSECOND) goto L14;
        double r4 = (this.mFrameCount * 1.0E9d) / r0;
        Cocos2dxHelper.OnGameInfoUpdatedListener r72 = Cocos2dxHelper.getOnGameInfoUpdatedListener();
        if (r72 == null) goto L12;
        r72.onFPSUpdated((float) r4);
    L12:
        this.mFrameCount = 0;
        this.mOldNanoTime = System.nanoTime();
    L14:
        if (sAnimationInterval > INTERVAL_60_FPS) goto L16;
        nativeRender();
        return;
    L16:
        long r02 = System.nanoTime() - this.mLastTickInNanoSeconds;
        long r2 = sAnimationInterval;
        if (r02 < r2) goto L23;
    L20:
        this.mLastTickInNanoSeconds = System.nanoTime();
        nativeRender();
        return;
    L23:
        Thread.sleep((r2 - r02) / NANOSECONDSPERMICROSECOND);     // Catch: Exception -> L22
        goto L20
    }

    public void setPauseInMainThread(boolean r1) {
        this.mNeedToPause = r1;
    }

    public void handleActionDown(int r2, float r3, float r4) {
        if (this.mNativeInitCompleted == true) goto L5;
        return;
    L5:
        nativeTouchesBegin(r2, r3, r4);
    }

    public void handleActionUp(int r2, float r3, float r4) {
        if (this.mNativeInitCompleted == true) goto L5;
        return;
    L5:
        nativeTouchesEnd(r2, r3, r4);
    }

    public void handleActionCancel(int[] r2, float[] r3, float[] r4) {
        if (this.mNativeInitCompleted == true) goto L5;
        return;
    L5:
        nativeTouchesCancel(r2, r3, r4);
    }

    public void handleActionMove(int[] r2, float[] r3, float[] r4) {
        if (this.mNativeInitCompleted == true) goto L5;
        return;
    L5:
        nativeTouchesMove(r2, r3, r4);
    }

    public void handleKeyDown(int r2) {
        if (this.mNativeInitCompleted == true) goto L5;
        return;
    L5:
        nativeKeyEvent(r2, true);
    }

    public void handleKeyUp(int r2) {
        if (this.mNativeInitCompleted == true) goto L5;
        return;
    L5:
        nativeKeyEvent(r2, false);
    }

    public void handleOnPause() {
        if (this.mNativeInitCompleted == true) goto L5;
        return;
    L5:
        Cocos2dxHelper.onEnterBackground();
        nativeOnPause();
    }

    public void handleOnResume() {
        Cocos2dxHelper.onEnterForeground();
        nativeOnResume();
    }

    public void handleInsertText(String r1) {
        nativeInsertText(r1);
    }

    public void handleDeleteBackward() {
        nativeDeleteBackward();
    }

    public String getContentText() {
        return nativeGetContentText();
    }
}
