package org.cocos2dx.lib;

import android.content.Context;
import android.opengl.GLSurfaceView;
import android.os.Handler;
import android.util.AttributeSet;
import android.util.Log;
import android.view.KeyEvent;
import android.view.MotionEvent;

public class Cocos2dxGLSurfaceView extends GLSurfaceView {
    private static final int HANDLER_CLOSE_IME_KEYBOARD = 3;
    private static final int HANDLER_OPEN_IME_KEYBOARD = 2;
    private static final String TAG = "Cocos2dxGLSurfaceView";
    private static Cocos2dxGLSurfaceView mCocos2dxGLSurfaceView;
    private static Handler sHandler;
    private Cocos2dxRenderer mCocos2dxRenderer;
    private boolean mStopHandleTouchAndKeyEvents;

    static {
    }

    public static native void nativeOnSizeChanged(int r0, int r1);

    static Cocos2dxRenderer access$000(Cocos2dxGLSurfaceView r0) {
        return r0.mCocos2dxRenderer;
    }

    public Cocos2dxGLSurfaceView(Context r1) {
        super(r1);
        this.mStopHandleTouchAndKeyEvents = false;
        initView();
    }

    public Cocos2dxGLSurfaceView(Context r1, AttributeSet r2) {
        super(r1, r2);
        this.mStopHandleTouchAndKeyEvents = false;
        initView();
    }

    protected void initView() {
        setEGLContextClientVersion(2);
        setFocusableInTouchMode(true);
        requestFocus();
        mCocos2dxGLSurfaceView = this;
    }

    public static Cocos2dxGLSurfaceView getInstance() {
        return mCocos2dxGLSurfaceView;
    }

    public static void queueAccelerometer(final float r8, final float r9, final float r10, final long r11) {
        mCocos2dxGLSurfaceView.queueEvent(new 1(r8, r9, r10, r11));
    }

    public void setCocos2dxRenderer(Cocos2dxRenderer r1) {
        this.mCocos2dxRenderer = r1;
        setRenderer(this.mCocos2dxRenderer);
    }

    private String getContentText() {
        return this.mCocos2dxRenderer.getContentText();
    }

    @Override
    public void onResume() {
        super.onResume();
        setRenderMode(1);
        queueEvent(new 2(this));
        this.mCocos2dxRenderer.setPauseInMainThread(false);
    }

    @Override
    public void onPause() {
        queueEvent(new 3(this));
        setRenderMode(0);
        this.mCocos2dxRenderer.setPauseInMainThread(true);
    }

    @Override
    public boolean onTouchEvent(MotionEvent r9) {
        int r0 = r9.getPointerCount();
        final int[] r1 = new int[r0];
        final float[] r2 = new float[r0];
        final float[] r3 = new float[r0];
        int r5 = 0;
    L3:
        if (r5 >= r0) goto L5;
        r1[r5] = r9.getPointerId(r5);
        r2[r5] = r9.getX(r5);
        r3[r5] = r9.getY(r5);
        r5 = r5 + 1;
        goto L3
    L5:
        int r52 = r9.getAction() & 255;
        if (r52 == 0) goto L24;
        if (r52 != 1) goto L9;
        final int r92 = r9.getPointerId(0);
        final float r02 = r2[0];
        final float r12 = r3[0];
        queueEvent(new 8(this, r92, r02, r12));
    L27:
        return true;
    L9:
        if (r52 != 2) goto L11;
        queueEvent(new 6(this, r1, r2, r3));
        goto L27
    L11:
        if (r52 != 3) goto L13;
        queueEvent(new 9(this, r1, r2, r3));
        goto L27
    L13:
        if (r52 != 5) goto L15;
        if (r0 <= 1) goto L20;
        return false;
    L20:
        int r03 = r9.getAction() >> 8;
        final int r13 = r9.getPointerId(r03);
        final float r22 = r9.getX(r03);
        final float r93 = r9.getY(r03);
        queueEvent(new 4(this, r13, r22, r93));
        goto L27
    L15:
        if (r52 != 6) goto L27;
        int r04 = r9.getAction() >> 8;
        final int r14 = r9.getPointerId(r04);
        final float r23 = r9.getX(r04);
        final float r94 = r9.getY(r04);
        queueEvent(new 7(this, r14, r23, r94));
        goto L27
    L24:
        if (r0 <= 1) goto L26;
        return false;
    L26:
        final int r95 = r9.getPointerId(0);
        final float r05 = r2[0];
        final float r15 = r3[0];
        queueEvent(new 5(this, r95, r05, r15));
        goto L27
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
        if (isInEditMode() == true) goto L6;
        this.mCocos2dxRenderer.setScreenWidthAndHeight(r1, r2);
        nativeOnSizeChanged(r1, r2);
        return;
    }

    @Override
    public boolean onKeyDown(final int r2, KeyEvent r3) {
        if (r2 != 4) goto L5;
        Cocos2dxVideoHelper.mVideoHandler.sendEmptyMessage(1000);
    L14:
        queueEvent(new 10(this, r2));
        return true;
    L5:
        if (r2 == 66) goto L14;
        if (r2 == 82) goto L14;
        if (r2 == 85) goto L14;
        switch(r2) {
            case 19: goto L14;
            case 20: goto L14;
            case 21: goto L14;
            case 22: goto L14;
            case 23: goto L14;
            default: goto L12;
        };
    L12:
        return super.onKeyDown(r2, r3);
    }

    @Override
    public boolean onKeyUp(final int r2, KeyEvent r3) {
        if (r2 != 4) goto L5;
    L13:
        queueEvent(new 11(this, r2));
        return true;
    L5:
        if (r2 == 66) goto L13;
        if (r2 == 82) goto L13;
        if (r2 == 85) goto L13;
        switch(r2) {
            case 19: goto L13;
            case 20: goto L13;
            case 21: goto L13;
            case 22: goto L13;
            case 23: goto L13;
            default: goto L12;
        };
    L12:
        return super.onKeyUp(r2, r3);
    }

    public void setStopHandleTouchAndKeyEvents(boolean r1) {
        this.mStopHandleTouchAndKeyEvents = r1;
    }

    private static void dumpMotionEvent(MotionEvent r10) {
        StringBuilder r1 = new StringBuilder();
        int r2 = r10.getAction();
        int r3 = r2 & 255;
        r1.append("event ACTION_");
        r1.append(new String[]{"DOWN", "UP", "MOVE", "CANCEL", "OUTSIDE", "POINTER_DOWN", "POINTER_UP", "7?", "8?", "9?"}[r3]);
        if (r3 != 5) goto L5;
    L6:
        r1.append("(pid ");
        r1.append(r2 >> 8);
        r1.append(")");
    L7:
        r1.append("[");
        int r22 = 0;
    L9:
        if (r22 >= r10.getPointerCount()) goto L13;
        r1.append("#");
        r1.append(r22);
        r1.append("(pid ");
        r1.append(r10.getPointerId(r22));
        r1.append(")=");
        r1.append((int) r10.getX(r22));
        r1.append(",");
        r1.append((int) r10.getY(r22));
        r22 = r22 + 1;
        if (r22 >= r10.getPointerCount()) goto L9;
        r1.append(";");
        goto L9
    L13:
        r1.append("]");
        Log.d(TAG, r1.toString());
        return;
    L5:
        if (r3 != 6) goto L7;
        goto L6
    }
}
