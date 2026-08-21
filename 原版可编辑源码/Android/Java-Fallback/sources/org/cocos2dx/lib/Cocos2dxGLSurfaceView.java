package org.cocos2dx.lib;

public class Cocos2dxGLSurfaceView extends android.opengl.GLSurfaceView {
    private static final int HANDLER_CLOSE_IME_KEYBOARD = 3;
    private static final int HANDLER_OPEN_IME_KEYBOARD = 2;
    private static final java.lang.String TAG = "Cocos2dxGLSurfaceView";
    private static org.cocos2dx.lib.Cocos2dxGLSurfaceView mCocos2dxGLSurfaceView;
    private static org.cocos2dx.lib.Cocos2dxTextInputWrapper sCocos2dxTextInputWraper;
    private static android.os.Handler sHandler;
    private org.cocos2dx.lib.Cocos2dxEditBox mCocos2dxEditText;
    private org.cocos2dx.lib.Cocos2dxRenderer mCocos2dxRenderer;
    private boolean mMultipleTouchEnabled;
    private boolean mSoftKeyboardShown;

















    static {
            return
    }

    public Cocos2dxGLSurfaceView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.mSoftKeyboardShown = r1
            r1 = 1
            r0.mMultipleTouchEnabled = r1
            r0.initView()
            return
    }

    public Cocos2dxGLSurfaceView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.mSoftKeyboardShown = r1
            r1 = 1
            r0.mMultipleTouchEnabled = r1
            r0.initView()
            return
    }

    static org.cocos2dx.lib.Cocos2dxEditBox access$000(org.cocos2dx.lib.Cocos2dxGLSurfaceView r0) {
            org.cocos2dx.lib.Cocos2dxEditBox r0 = r0.mCocos2dxEditText
            return r0
    }

    static org.cocos2dx.lib.Cocos2dxTextInputWrapper access$100() {
            org.cocos2dx.lib.Cocos2dxTextInputWrapper r0 = org.cocos2dx.lib.Cocos2dxGLSurfaceView.sCocos2dxTextInputWraper
            return r0
    }

    static org.cocos2dx.lib.Cocos2dxGLSurfaceView access$200() {
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = org.cocos2dx.lib.Cocos2dxGLSurfaceView.mCocos2dxGLSurfaceView
            return r0
    }

    static org.cocos2dx.lib.Cocos2dxRenderer access$300(org.cocos2dx.lib.Cocos2dxGLSurfaceView r0) {
            org.cocos2dx.lib.Cocos2dxRenderer r0 = r0.mCocos2dxRenderer
            return r0
    }

    public static void closeIMEKeyboard() {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 3
            r0.what = r1
            android.os.Handler r1 = org.cocos2dx.lib.Cocos2dxGLSurfaceView.sHandler
            r1.sendMessage(r0)
            return
    }

    private static void dumpMotionEvent(android.view.MotionEvent r10) {
            java.lang.String r0 = "DOWN"
            java.lang.String r1 = "UP"
            java.lang.String r2 = "MOVE"
            java.lang.String r3 = "CANCEL"
            java.lang.String r4 = "OUTSIDE"
            java.lang.String r5 = "POINTER_DOWN"
            java.lang.String r6 = "POINTER_UP"
            java.lang.String r7 = "7?"
            java.lang.String r8 = "8?"
            java.lang.String r9 = "9?"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9}
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r2 = r10.getAction()
            r3 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r4 = "event ACTION_"
            r1.append(r4)
            r0 = r0[r3]
            r1.append(r0)
            java.lang.String r0 = "(pid "
            r4 = 5
            if (r3 == r4) goto L35
            r4 = 6
            if (r3 != r4) goto L42
        L35:
            r1.append(r0)
            int r2 = r2 >> 8
            r1.append(r2)
            java.lang.String r2 = ")"
            r1.append(r2)
        L42:
            java.lang.String r2 = "["
            r1.append(r2)
            r2 = 0
        L48:
            int r3 = r10.getPointerCount()
            if (r2 >= r3) goto L88
            java.lang.String r3 = "#"
            r1.append(r3)
            r1.append(r2)
            r1.append(r0)
            int r3 = r10.getPointerId(r2)
            r1.append(r3)
            java.lang.String r3 = ")="
            r1.append(r3)
            float r3 = r10.getX(r2)
            int r3 = (int) r3
            r1.append(r3)
            java.lang.String r3 = ","
            r1.append(r3)
            float r3 = r10.getY(r2)
            int r3 = (int) r3
            r1.append(r3)
            int r2 = r2 + 1
            int r3 = r10.getPointerCount()
            if (r2 >= r3) goto L48
            java.lang.String r3 = ";"
            r1.append(r3)
            goto L48
        L88:
            java.lang.String r10 = "]"
            r1.append(r10)
            java.lang.String r10 = org.cocos2dx.lib.Cocos2dxGLSurfaceView.TAG
            java.lang.String r0 = r1.toString()
            android.util.Log.d(r10, r0)
            return
    }

    private java.lang.String getContentText() {
            r1 = this;
            org.cocos2dx.lib.Cocos2dxRenderer r0 = r1.mCocos2dxRenderer
            java.lang.String r0 = r0.getContentText()
            return r0
    }

    public static org.cocos2dx.lib.Cocos2dxGLSurfaceView getInstance() {
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = org.cocos2dx.lib.Cocos2dxGLSurfaceView.mCocos2dxGLSurfaceView
            return r0
    }

    public static void openIMEKeyboard() {
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 2
            r0.what = r1
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r1 = org.cocos2dx.lib.Cocos2dxGLSurfaceView.mCocos2dxGLSurfaceView
            java.lang.String r1 = r1.getContentText()
            r0.obj = r1
            android.os.Handler r1 = org.cocos2dx.lib.Cocos2dxGLSurfaceView.sHandler
            r1.sendMessage(r0)
            return
    }

    public static void queueAccelerometer(float r8, float r9, float r10, long r11) {
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = org.cocos2dx.lib.Cocos2dxGLSurfaceView.mCocos2dxGLSurfaceView
            org.cocos2dx.lib.Cocos2dxGLSurfaceView$2 r7 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView$2
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r1.<init>(r2, r3, r4, r5)
            r0.queueEvent(r7)
            return
    }

    public void deleteBackward() {
            r1 = this;
            org.cocos2dx.lib.Cocos2dxGLSurfaceView$16 r0 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView$16
            r0.<init>(r1)
            r1.queueEvent(r0)
            return
    }

    public org.cocos2dx.lib.Cocos2dxEditBox getCocos2dxEditText() {
            r1 = this;
            org.cocos2dx.lib.Cocos2dxEditBox r0 = r1.mCocos2dxEditText
            return r0
    }

    protected void initView() {
            r1 = this;
            r0 = 2
            r1.setEGLContextClientVersion(r0)
            r0 = 1
            r1.setFocusableInTouchMode(r0)
            org.cocos2dx.lib.Cocos2dxGLSurfaceView.mCocos2dxGLSurfaceView = r1
            org.cocos2dx.lib.Cocos2dxTextInputWrapper r0 = new org.cocos2dx.lib.Cocos2dxTextInputWrapper
            r0.<init>(r1)
            org.cocos2dx.lib.Cocos2dxGLSurfaceView.sCocos2dxTextInputWraper = r0
            org.cocos2dx.lib.Cocos2dxGLSurfaceView$1 r0 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView$1
            r0.<init>(r1)
            org.cocos2dx.lib.Cocos2dxGLSurfaceView.sHandler = r0
            return
    }

    public void insertText(java.lang.String r2) {
            r1 = this;
            org.cocos2dx.lib.Cocos2dxGLSurfaceView$15 r0 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView$15
            r0.<init>(r1, r2)
            r1.queueEvent(r0)
            return
    }

    public boolean isMultipleTouchEnabled() {
            r1 = this;
            boolean r0 = r1.mMultipleTouchEnabled
            return r0
    }

    public boolean isSoftKeyboardShown() {
            r1 = this;
            boolean r0 = r1.mSoftKeyboardShown
            return r0
    }

    @Override
    public boolean onKeyDown(int r2, android.view.KeyEvent r3) {
            r1 = this;
            r0 = 4
            if (r2 == r0) goto L17
            r0 = 66
            if (r2 == r0) goto L1e
            r0 = 82
            if (r2 == r0) goto L1e
            r0 = 85
            if (r2 == r0) goto L1e
            switch(r2) {
                case 19: goto L1e;
                case 20: goto L1e;
                case 21: goto L1e;
                case 22: goto L1e;
                case 23: goto L1e;
                default: goto L12;
            }
        L12:
            boolean r2 = super.onKeyDown(r2, r3)
            return r2
        L17:
            org.cocos2dx.lib.Cocos2dxVideoHelper$VideoHandler r3 = org.cocos2dx.lib.Cocos2dxVideoHelper.mVideoHandler
            r0 = 1000(0x3e8, float:1.401E-42)
            r3.sendEmptyMessage(r0)
        L1e:
            org.cocos2dx.lib.Cocos2dxGLSurfaceView$13 r3 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView$13
            r3.<init>(r1, r2)
            r1.queueEvent(r3)
            r2 = 1
            return r2
    }

    @Override
    public boolean onKeyUp(int r2, android.view.KeyEvent r3) {
            r1 = this;
            r0 = 4
            if (r2 == r0) goto L17
            r0 = 66
            if (r2 == r0) goto L17
            r0 = 82
            if (r2 == r0) goto L17
            r0 = 85
            if (r2 == r0) goto L17
            switch(r2) {
                case 19: goto L17;
                case 20: goto L17;
                case 21: goto L17;
                case 22: goto L17;
                case 23: goto L17;
                default: goto L12;
            }
        L12:
            boolean r2 = super.onKeyUp(r2, r3)
            return r2
        L17:
            org.cocos2dx.lib.Cocos2dxGLSurfaceView$14 r3 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView$14
            r3.<init>(r1, r2)
            r1.queueEvent(r3)
            r2 = 1
            return r2
    }

    @Override
    public void onPause() {
            r1 = this;
            org.cocos2dx.lib.Cocos2dxGLSurfaceView$4 r0 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView$4
            r0.<init>(r1)
            r1.queueEvent(r0)
            r0 = 0
            r1.setRenderMode(r0)
            super.onPause()
            return
    }

    @Override
    public void onResume() {
            r1 = this;
            super.onResume()
            r0 = 1
            r1.setRenderMode(r0)
            org.cocos2dx.lib.Cocos2dxGLSurfaceView$3 r0 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView$3
            r0.<init>(r1)
            r1.queueEvent(r0)
            return
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            boolean r3 = r0.isInEditMode()
            if (r3 != 0) goto Lb
            org.cocos2dx.lib.Cocos2dxRenderer r3 = r0.mCocos2dxRenderer
            r3.setScreenWidthAndHeight(r1, r2)
        Lb:
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r9) {
            r8 = this;
            int r0 = r9.getPointerCount()
            int[] r1 = new int[r0]
            float[] r2 = new float[r0]
            float[] r3 = new float[r0]
            boolean r4 = r8.mSoftKeyboardShown
            r5 = 0
            if (r4 == 0) goto L31
            android.content.Context r4 = r8.getContext()
            java.lang.String r6 = "input_method"
            java.lang.Object r4 = r4.getSystemService(r6)
            android.view.inputmethod.InputMethodManager r4 = (android.view.inputmethod.InputMethodManager) r4
            android.content.Context r6 = r8.getContext()
            android.app.Activity r6 = (android.app.Activity) r6
            android.view.View r6 = r6.getCurrentFocus()
            android.os.IBinder r6 = r6.getWindowToken()
            r4.hideSoftInputFromWindow(r6, r5)
            r8.requestFocus()
            r8.mSoftKeyboardShown = r5
        L31:
            r4 = 0
        L32:
            if (r4 >= r0) goto L49
            int r6 = r9.getPointerId(r4)
            r1[r4] = r6
            float r6 = r9.getX(r4)
            r2[r4] = r6
            float r6 = r9.getY(r4)
            r3[r4] = r6
            int r4 = r4 + 1
            goto L32
        L49:
            int r4 = r9.getAction()
            r4 = r4 & 255(0xff, float:3.57E-43)
            r6 = 1
            if (r4 == 0) goto L11b
            if (r4 == r6) goto L10a
            r7 = 2
            if (r4 == r7) goto Lda
            r7 = 3
            if (r4 == r7) goto Laa
            r0 = 5
            if (r4 == r0) goto L86
            r0 = 6
            if (r4 == r0) goto L62
            goto L12b
        L62:
            int r0 = r9.getAction()
            int r0 = r0 >> 8
            boolean r1 = r8.mMultipleTouchEnabled
            if (r1 != 0) goto L70
            if (r0 == 0) goto L70
            goto L12b
        L70:
            int r1 = r9.getPointerId(r0)
            float r2 = r9.getX(r0)
            float r9 = r9.getY(r0)
            org.cocos2dx.lib.Cocos2dxGLSurfaceView$9 r0 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView$9
            r0.<init>(r8, r1, r2, r9)
            r8.queueEvent(r0)
            goto L12b
        L86:
            int r0 = r9.getAction()
            int r0 = r0 >> 8
            boolean r1 = r8.mMultipleTouchEnabled
            if (r1 != 0) goto L94
            if (r0 == 0) goto L94
            goto L12b
        L94:
            int r1 = r9.getPointerId(r0)
            float r2 = r9.getX(r0)
            float r9 = r9.getY(r0)
            org.cocos2dx.lib.Cocos2dxGLSurfaceView$5 r0 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView$5
            r0.<init>(r8, r1, r2, r9)
            r8.queueEvent(r0)
            goto L12b
        Laa:
            boolean r9 = r8.mMultipleTouchEnabled
            if (r9 != 0) goto Ld1
            r9 = 0
        Laf:
            if (r9 >= r0) goto L12b
            r4 = r1[r9]
            if (r4 != 0) goto Lce
            int[] r0 = new int[r6]
            r0[r5] = r5
            float[] r1 = new float[r6]
            r2 = r2[r9]
            r1[r5] = r2
            float[] r2 = new float[r6]
            r9 = r3[r9]
            r2[r5] = r9
            org.cocos2dx.lib.Cocos2dxGLSurfaceView$11 r9 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView$11
            r9.<init>(r8, r0, r1, r2)
            r8.queueEvent(r9)
            goto L12b
        Lce:
            int r9 = r9 + 1
            goto Laf
        Ld1:
            org.cocos2dx.lib.Cocos2dxGLSurfaceView$12 r9 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView$12
            r9.<init>(r8, r1, r2, r3)
            r8.queueEvent(r9)
            goto L12b
        Lda:
            boolean r9 = r8.mMultipleTouchEnabled
            if (r9 != 0) goto L101
            r9 = 0
        Ldf:
            if (r9 >= r0) goto L12b
            r4 = r1[r9]
            if (r4 != 0) goto Lfe
            int[] r0 = new int[r6]
            r0[r5] = r5
            float[] r1 = new float[r6]
            r2 = r2[r9]
            r1[r5] = r2
            float[] r2 = new float[r6]
            r9 = r3[r9]
            r2[r5] = r9
            org.cocos2dx.lib.Cocos2dxGLSurfaceView$7 r9 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView$7
            r9.<init>(r8, r0, r1, r2)
            r8.queueEvent(r9)
            goto L12b
        Lfe:
            int r9 = r9 + 1
            goto Ldf
        L101:
            org.cocos2dx.lib.Cocos2dxGLSurfaceView$8 r9 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView$8
            r9.<init>(r8, r1, r2, r3)
            r8.queueEvent(r9)
            goto L12b
        L10a:
            int r9 = r9.getPointerId(r5)
            r0 = r2[r5]
            r1 = r3[r5]
            org.cocos2dx.lib.Cocos2dxGLSurfaceView$10 r2 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView$10
            r2.<init>(r8, r9, r0, r1)
            r8.queueEvent(r2)
            goto L12b
        L11b:
            int r9 = r9.getPointerId(r5)
            r0 = r2[r5]
            r1 = r3[r5]
            org.cocos2dx.lib.Cocos2dxGLSurfaceView$6 r2 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView$6
            r2.<init>(r8, r9, r0, r1)
            r8.queueEvent(r2)
        L12b:
            return r6
    }

    public void setCocos2dxEditText(org.cocos2dx.lib.Cocos2dxEditBox r2) {
            r1 = this;
            r1.mCocos2dxEditText = r2
            org.cocos2dx.lib.Cocos2dxEditBox r2 = r1.mCocos2dxEditText
            if (r2 == 0) goto L10
            org.cocos2dx.lib.Cocos2dxTextInputWrapper r0 = org.cocos2dx.lib.Cocos2dxGLSurfaceView.sCocos2dxTextInputWraper
            if (r0 == 0) goto L10
            r2.setOnEditorActionListener(r0)
            r1.requestFocus()
        L10:
            return
    }

    public void setCocos2dxRenderer(org.cocos2dx.lib.Cocos2dxRenderer r1) {
            r0 = this;
            r0.mCocos2dxRenderer = r1
            org.cocos2dx.lib.Cocos2dxRenderer r1 = r0.mCocos2dxRenderer
            r0.setRenderer(r1)
            return
    }

    public void setMultipleTouchEnabled(boolean r1) {
            r0 = this;
            r0.mMultipleTouchEnabled = r1
            return
    }

    public void setSoftKeyboardShown(boolean r1) {
            r0 = this;
            r0.mSoftKeyboardShown = r1
            return
    }
}
