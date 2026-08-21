package org.cocos2dx.lib;

public class Cocos2dxEditBoxHelper {
    private static final java.lang.String TAG = "Cocos2dxEditBoxHelper";
    private static org.cocos2dx.lib.Cocos2dxActivity mCocos2dxActivity = null;
    private static android.util.SparseArray<org.cocos2dx.lib.Cocos2dxEditBox> mEditBoxArray = null;
    private static org.cocos2dx.lib.ResizeLayout mFrameLayout = null;
    private static float mPadding = 5.0f;
    private static int mViewTag;

    class 1 implements java.lang.Runnable {
        final int val$height;
        final int val$index;
        final int val$left;
        final float val$scaleX;
        final int val$top;
        final int val$width;





        1(float r1, int r2, int r3, int r4, int r5, int r6) {
                r0 = this;
                r0.val$scaleX = r1
                r0.val$left = r2
                r0.val$top = r3
                r0.val$width = r4
                r0.val$height = r5
                r0.val$index = r6
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r4 = this;
                org.cocos2dx.lib.Cocos2dxEditBox r0 = new org.cocos2dx.lib.Cocos2dxEditBox
                org.cocos2dx.lib.Cocos2dxActivity r1 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.access$000()
                r0.<init>(r1)
                r1 = 1
                r0.setFocusable(r1)
                r0.setFocusableInTouchMode(r1)
                r1 = 5
                r0.setInputFlag(r1)
                r1 = 6
                r0.setInputMode(r1)
                r1 = 0
                r0.setReturnType(r1)
                r2 = -7829368(0xffffffffff888888, float:NaN)
                r0.setHintTextColor(r2)
                r2 = 8
                r0.setVisibility(r2)
                r0.setBackgroundColor(r1)
                r2 = -1
                r0.setTextColor(r2)
                r0.setSingleLine()
                float r2 = r4.val$scaleX
                r0.setOpenGLViewScaleX(r2)
                float r2 = r4.val$scaleX
                int r2 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.getPadding(r2)
                r0.setPadding(r2, r1, r1, r1)
                android.widget.FrameLayout$LayoutParams r2 = new android.widget.FrameLayout$LayoutParams
                r3 = -2
                r2.<init>(r3, r3)
                int r3 = r4.val$left
                r2.leftMargin = r3
                int r3 = r4.val$top
                r2.topMargin = r3
                int r3 = r4.val$width
                r2.width = r3
                int r3 = r4.val$height
                r2.height = r3
                r3 = 51
                r2.gravity = r3
                org.cocos2dx.lib.ResizeLayout r3 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.access$100()
                r3.addView(r0, r2)
                java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
                r0.setTag(r1)
                org.cocos2dx.lib.Cocos2dxEditBoxHelper$1$1 r1 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$1$1
                r1.<init>(r4, r0)
                r0.addTextChangedListener(r1)
                org.cocos2dx.lib.Cocos2dxEditBoxHelper$1$2 r1 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$1$2
                r1.<init>(r4, r0)
                r0.setOnFocusChangeListener(r1)
                org.cocos2dx.lib.Cocos2dxEditBoxHelper$1$3 r1 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$1$3
                r1.<init>(r4, r0)
                r0.setOnKeyListener(r1)
                org.cocos2dx.lib.Cocos2dxEditBoxHelper$1$4 r1 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$1$4
                r1.<init>(r4, r0)
                r0.setOnEditorActionListener(r1)
                android.util.SparseArray r1 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.access$400()
                int r2 = r4.val$index
                r1.put(r2, r0)
                return
        }
    }
















    static {
            return
    }

    public Cocos2dxEditBoxHelper(org.cocos2dx.lib.ResizeLayout r1) {
            r0 = this;
            r0.<init>()
            org.cocos2dx.lib.Cocos2dxEditBoxHelper.mFrameLayout = r1
            android.content.Context r1 = org.cocos2dx.lib.Cocos2dxActivity.getContext()
            org.cocos2dx.lib.Cocos2dxActivity r1 = (org.cocos2dx.lib.Cocos2dxActivity) r1
            org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity = r1
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
            org.cocos2dx.lib.Cocos2dxEditBoxHelper.mEditBoxArray = r1
            return
    }

    public static void __editBoxEditingChanged(int r0, java.lang.String r1) {
            editBoxEditingChanged(r0, r1)
            return
    }

    public static void __editBoxEditingDidBegin(int r0) {
            editBoxEditingDidBegin(r0)
            return
    }

    public static void __editBoxEditingDidEnd(int r0, java.lang.String r1, int r2) {
            editBoxEditingDidEnd(r0, r1, r2)
            return
    }

    static org.cocos2dx.lib.Cocos2dxActivity access$000() {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            return r0
    }

    static org.cocos2dx.lib.ResizeLayout access$100() {
            org.cocos2dx.lib.ResizeLayout r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mFrameLayout
            return r0
    }

    static java.lang.String access$200() {
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.TAG
            return r0
    }

    static void access$300(int r0) {
            closeKeyboardOnUiThread(r0)
            return
    }

    static android.util.SparseArray access$400() {
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxEditBox> r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mEditBoxArray
            return r0
    }

    static void access$500(int r0) {
            openKeyboardOnUiThread(r0)
            return
    }

    public static void closeKeyboard(int r2) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxEditBoxHelper$16 r1 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$16
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    private static void closeKeyboardOnUiThread(int r2) {
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 == r1) goto L12
            java.lang.String r2 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.TAG
            java.lang.String r0 = "closeKeyboardOnUiThread doesn't run on UI thread!"
            android.util.Log.e(r2, r0)
            return
        L12:
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            android.content.Context r0 = org.cocos2dx.lib.Cocos2dxActivity.getContext()
            java.lang.String r1 = "input_method"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.view.inputmethod.InputMethodManager r0 = (android.view.inputmethod.InputMethodManager) r0
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxEditBox> r1 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mEditBoxArray
            java.lang.Object r2 = r1.get(r2)
            org.cocos2dx.lib.Cocos2dxEditBox r2 = (org.cocos2dx.lib.Cocos2dxEditBox) r2
            if (r2 == 0) goto L49
            android.os.IBinder r2 = r2.getWindowToken()
            r1 = 0
            r0.hideSoftInputFromWindow(r2, r1)
            org.cocos2dx.lib.Cocos2dxActivity r2 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r2 = r2.getGLSurfaceView()
            r2.setSoftKeyboardShown(r1)
            org.cocos2dx.lib.Cocos2dxActivity r2 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r2 = r2.getGLSurfaceView()
            r2.requestFocus()
            org.cocos2dx.lib.Cocos2dxActivity r2 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            r2.hideVirtualButton()
        L49:
            return
    }

    public static int createEditBox(int r9, int r10, int r11, int r12, float r13) {
            int r6 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mViewTag
            org.cocos2dx.lib.Cocos2dxActivity r7 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxEditBoxHelper$1 r8 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$1
            r0 = r8
            r1 = r13
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r7.runOnUiThread(r8)
            int r9 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mViewTag
            int r10 = r9 + 1
            org.cocos2dx.lib.Cocos2dxEditBoxHelper.mViewTag = r10
            return r9
    }

    private static native void editBoxEditingChanged(int r0, java.lang.String r1);

    private static native void editBoxEditingDidBegin(int r0);

    private static native void editBoxEditingDidEnd(int r0, java.lang.String r1, int r2);

    public static int getPadding(float r1) {
            float r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mPadding
            float r0 = r0 * r1
            int r1 = (int) r0
            return r1
    }

    public static void openKeyboard(int r2) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxEditBoxHelper$15 r1 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$15
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    private static void openKeyboardOnUiThread(int r2) {
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 == r1) goto L12
            java.lang.String r2 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.TAG
            java.lang.String r0 = "openKeyboardOnUiThread doesn't run on UI thread!"
            android.util.Log.e(r2, r0)
            return
        L12:
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            android.content.Context r0 = org.cocos2dx.lib.Cocos2dxActivity.getContext()
            java.lang.String r1 = "input_method"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.view.inputmethod.InputMethodManager r0 = (android.view.inputmethod.InputMethodManager) r0
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxEditBox> r1 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mEditBoxArray
            java.lang.Object r2 = r1.get(r2)
            org.cocos2dx.lib.Cocos2dxEditBox r2 = (org.cocos2dx.lib.Cocos2dxEditBox) r2
            if (r2 == 0) goto L44
            r2.requestFocus()
            org.cocos2dx.lib.Cocos2dxActivity r1 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r1 = r1.getGLSurfaceView()
            r1.requestLayout()
            r1 = 0
            r0.showSoftInput(r2, r1)
            org.cocos2dx.lib.Cocos2dxActivity r2 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r2 = r2.getGLSurfaceView()
            r0 = 1
            r2.setSoftKeyboardShown(r0)
        L44:
            return
    }

    public static void removeEditBox(int r2) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxEditBoxHelper$2 r1 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$2
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    public static void setEditBoxViewRect(int r8, int r9, int r10, int r11, int r12) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxEditBoxHelper$14 r7 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$14
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)
            r0.runOnUiThread(r7)
            return
    }

    public static void setFont(int r2, java.lang.String r3, float r4) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxEditBoxHelper$3 r1 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$3
            r1.<init>(r2, r3, r4)
            r0.runOnUiThread(r1)
            return
    }

    public static void setFontColor(int r8, int r9, int r10, int r11, int r12) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxEditBoxHelper$4 r7 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$4
            r1 = r7
            r2 = r8
            r3 = r12
            r4 = r9
            r5 = r10
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            r0.runOnUiThread(r7)
            return
    }

    public static void setInputFlag(int r2, int r3) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxEditBoxHelper$13 r1 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$13
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    public static void setInputMode(int r2, int r3) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxEditBoxHelper$12 r1 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$12
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    public static void setMaxLength(int r2, int r3) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxEditBoxHelper$7 r1 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$7
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    public static void setPlaceHolderText(int r2, java.lang.String r3) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxEditBoxHelper$5 r1 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$5
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    public static void setPlaceHolderTextColor(int r8, int r9, int r10, int r11, int r12) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxEditBoxHelper$6 r7 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$6
            r1 = r7
            r2 = r8
            r3 = r12
            r4 = r9
            r5 = r10
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            r0.runOnUiThread(r7)
            return
    }

    public static void setReturnType(int r2, int r3) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxEditBoxHelper$10 r1 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$10
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    public static void setText(int r2, java.lang.String r3) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxEditBoxHelper$9 r1 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$9
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    public static void setTextHorizontalAlignment(int r2, int r3) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxEditBoxHelper$11 r1 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$11
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    public static void setVisible(int r2, boolean r3) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.mCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxEditBoxHelper$8 r1 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper$8
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }
}
