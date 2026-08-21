package org.cocos2dx.lib;

public class Cocos2dxEditBox extends com.qihoo360.replugin.loader.a.PluginActivity {
    private static final int DARK_GREEN = 0;
    private static final int DARK_GREEN_PRESS = 0;
    public static final int EDITBOX_REQUEST_CODE = 10001;
    private static org.cocos2dx.lib.Cocos2dxEditBox sThis;
    private android.widget.Button mButton;
    private android.widget.RelativeLayout mButtonLayout;
    private int mButtonLayoutID;
    private android.widget.RelativeLayout.LayoutParams mButtonParams;
    private java.lang.String mButtonTitle;
    private boolean mConfirmHold;
    private org.cocos2dx.lib.Cocos2dxEditBox.Cocos2dxEditText mEditText;
    private int mEditTextID;
    private boolean mIsConfirmed;







    class Cocos2dxEditText extends android.widget.EditText {
        private final java.lang.String TAG;
        private boolean keyboardVisible;
        private boolean mIsMultiLine;
        private int mLineColor;
        private float mLineWidth;
        private android.graphics.Paint mPaint;
        private int mScreenHeight;
        private android.text.TextWatcher mTextWatcher;
        final org.cocos2dx.lib.Cocos2dxEditBox this$0;




        public Cocos2dxEditText(org.cocos2dx.lib.Cocos2dxEditBox r4, android.app.Activity r5) {
                r3 = this;
                r3.this$0 = r4
                r3.<init>(r5)
                java.lang.String r0 = "Cocos2dxEditBox"
                r3.TAG = r0
                r0 = 0
                r3.mIsMultiLine = r0
                r1 = 0
                r3.mTextWatcher = r1
                int r2 = org.cocos2dx.lib.Cocos2dxEditBox.access$000()
                r3.mLineColor = r2
                r2 = 1073741824(0x40000000, float:2.0)
                r3.mLineWidth = r2
                r3.keyboardVisible = r0
                r3.setBackground(r1)
                r0 = -16777216(0xffffffffff000000, float:-1.7014118E38)
                r3.setTextColor(r0)
                java.lang.String r0 = "window"
                java.lang.Object r5 = r5.getSystemService(r0)
                android.view.WindowManager r5 = (android.view.WindowManager) r5
                android.view.Display r5 = r5.getDefaultDisplay()
                int r5 = r5.getHeight()
                r3.mScreenHeight = r5
                android.graphics.Paint r5 = new android.graphics.Paint
                r5.<init>()
                r3.mPaint = r5
                android.graphics.Paint r5 = r3.mPaint
                float r0 = r3.mLineWidth
                r5.setStrokeWidth(r0)
                android.graphics.Paint r5 = r3.mPaint
                android.graphics.Paint$Style r0 = android.graphics.Paint.Style.FILL
                r5.setStyle(r0)
                android.graphics.Paint r5 = r3.mPaint
                int r0 = r3.mLineColor
                r5.setColor(r0)
                org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText$1 r5 = new org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText$1
                r5.<init>(r3, r4)
                r3.mTextWatcher = r5
                r3.registKeyboardVisible()
                return
        }

        static boolean access$400(org.cocos2dx.lib.Cocos2dxEditBox.Cocos2dxEditText r0) {
                boolean r0 = r0.mIsMultiLine
                return r0
        }

        static int access$600(org.cocos2dx.lib.Cocos2dxEditBox.Cocos2dxEditText r0) {
                int r0 = r0.mScreenHeight
                return r0
        }

        static boolean access$700(org.cocos2dx.lib.Cocos2dxEditBox.Cocos2dxEditText r0) {
                boolean r0 = r0.keyboardVisible
                return r0
        }

        static boolean access$702(org.cocos2dx.lib.Cocos2dxEditBox.Cocos2dxEditText r0, boolean r1) {
                r0.keyboardVisible = r1
                return r1
        }

        private void addListeners() {
                r1 = this;
                org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText$2 r0 = new org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText$2
                r0.<init>(r1)
                r1.setOnEditorActionListener(r0)
                android.text.TextWatcher r0 = r1.mTextWatcher
                r1.addTextChangedListener(r0)
                return
        }

        private void registKeyboardVisible() {
                r2 = this;
                android.view.ViewTreeObserver r0 = r2.getViewTreeObserver()
                org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText$3 r1 = new org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText$3
                r1.<init>(r2)
                r0.addOnGlobalLayoutListener(r1)
                return
        }

        private void removeListeners() {
                r1 = this;
                r0 = 0
                r1.setOnEditorActionListener(r0)
                android.text.TextWatcher r0 = r1.mTextWatcher
                r1.removeTextChangedListener(r0)
                return
        }

        private void setConfirmType(java.lang.String r3) {
                r2 = this;
                java.lang.String r0 = "done"
                boolean r0 = r3.contentEquals(r0)
                if (r0 == 0) goto L17
                r3 = 268435462(0x10000006, float:2.5243567E-29)
                r2.setImeOptions(r3)
                org.cocos2dx.lib.Cocos2dxEditBox r3 = r2.this$0
                java.lang.String r0 = "完成"
                org.cocos2dx.lib.Cocos2dxEditBox.access$302(r3, r0)
                goto L8b
            L17:
                java.lang.String r0 = "next"
                boolean r0 = r3.contentEquals(r0)
                if (r0 == 0) goto L2d
                r3 = 268435461(0x10000005, float:2.5243564E-29)
                r2.setImeOptions(r3)
                org.cocos2dx.lib.Cocos2dxEditBox r3 = r2.this$0
                java.lang.String r0 = "下一个"
                org.cocos2dx.lib.Cocos2dxEditBox.access$302(r3, r0)
                goto L8b
            L2d:
                java.lang.String r0 = "search"
                boolean r0 = r3.contentEquals(r0)
                if (r0 == 0) goto L43
                r3 = 268435459(0x10000003, float:2.5243558E-29)
                r2.setImeOptions(r3)
                org.cocos2dx.lib.Cocos2dxEditBox r3 = r2.this$0
                java.lang.String r0 = "搜索"
                org.cocos2dx.lib.Cocos2dxEditBox.access$302(r3, r0)
                goto L8b
            L43:
                java.lang.String r0 = "go"
                boolean r0 = r3.contentEquals(r0)
                if (r0 == 0) goto L59
                r3 = 268435458(0x10000002, float:2.5243555E-29)
                r2.setImeOptions(r3)
                org.cocos2dx.lib.Cocos2dxEditBox r3 = r2.this$0
                java.lang.String r0 = "前往"
                org.cocos2dx.lib.Cocos2dxEditBox.access$302(r3, r0)
                goto L8b
            L59:
                java.lang.String r0 = "send"
                boolean r0 = r3.contentEquals(r0)
                if (r0 == 0) goto L6f
                r3 = 268435460(0x10000004, float:2.524356E-29)
                r2.setImeOptions(r3)
                org.cocos2dx.lib.Cocos2dxEditBox r3 = r2.this$0
                java.lang.String r0 = "发送"
                org.cocos2dx.lib.Cocos2dxEditBox.access$302(r3, r0)
                goto L8b
            L6f:
                org.cocos2dx.lib.Cocos2dxEditBox r0 = r2.this$0
                r1 = 0
                org.cocos2dx.lib.Cocos2dxEditBox.access$302(r0, r1)
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "unknown confirm type "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r0 = "Cocos2dxEditBox"
                android.util.Log.e(r0, r3)
            L8b:
                return
        }

        private void setInputType(java.lang.String r2, boolean r3) {
                r1 = this;
                java.lang.String r0 = "text"
                boolean r0 = r2.contentEquals(r0)
                if (r0 == 0) goto L16
                if (r3 == 0) goto L11
                r2 = 131073(0x20001, float:1.83672E-40)
                r1.setInputType(r2)
                goto L63
            L11:
                r2 = 1
                r1.setInputType(r2)
                goto L63
            L16:
                java.lang.String r3 = "email"
                boolean r3 = r2.contentEquals(r3)
                if (r3 == 0) goto L24
                r2 = 32
                r1.setInputType(r2)
                goto L63
            L24:
                java.lang.String r3 = "number"
                boolean r3 = r2.contentEquals(r3)
                if (r3 == 0) goto L32
                r2 = 12290(0x3002, float:1.7222E-41)
                r1.setInputType(r2)
                goto L63
            L32:
                java.lang.String r3 = "phone"
                boolean r3 = r2.contentEquals(r3)
                if (r3 == 0) goto L3f
                r2 = 3
                r1.setInputType(r2)
                goto L63
            L3f:
                java.lang.String r3 = "password"
                boolean r3 = r2.contentEquals(r3)
                if (r3 == 0) goto L4d
                r2 = 129(0x81, float:1.81E-43)
                r1.setInputType(r2)
                goto L63
            L4d:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r0 = "unknown input type "
                r3.append(r0)
                r3.append(r2)
                java.lang.String r2 = r3.toString()
                java.lang.String r3 = "Cocos2dxEditBox"
                android.util.Log.e(r3, r2)
            L63:
                return
        }

        public void hide() {
                r2 = this;
                org.cocos2dx.lib.Cocos2dxEditBox r0 = r2.this$0
                org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText r0 = org.cocos2dx.lib.Cocos2dxEditBox.access$200(r0)
                r1 = 4
                r0.setVisibility(r1)
                r2.removeListeners()
                return
        }

        @Override
        protected void onDraw(android.graphics.Canvas r9) {
                r8 = this;
                int r0 = r8.getPaddingBottom()
                int r1 = r8.getScrollX()
                float r3 = (float) r1
                int r1 = r8.getHeight()
                int r0 = r0 / 2
                int r1 = r1 - r0
                float r1 = (float) r1
                float r2 = r8.mLineWidth
                float r4 = r1 - r2
                int r1 = r8.getScrollX()
                int r2 = r8.getWidth()
                int r1 = r1 + r2
                float r5 = (float) r1
                int r1 = r8.getHeight()
                int r1 = r1 - r0
                float r0 = (float) r1
                float r1 = r8.mLineWidth
                float r6 = r0 - r1
                android.graphics.Paint r7 = r8.mPaint
                r2 = r9
                r2.drawLine(r3, r4, r5, r6, r7)
                super.onDraw(r9)
                return
        }

        public void show(java.lang.String r1, int r2, boolean r3, boolean r4, java.lang.String r5, java.lang.String r6) {
                r0 = this;
                r0.mIsMultiLine = r3
                r3 = 1
                android.text.InputFilter[] r3 = new android.text.InputFilter[r3]
                android.text.InputFilter$LengthFilter r4 = new android.text.InputFilter$LengthFilter
                r4.<init>(r2)
                r2 = 0
                r3[r2] = r4
                r0.setFilters(r3)
                r0.setText(r1)
                android.text.Editable r3 = r0.getText()
                int r3 = r3.length()
                int r4 = r1.length()
                if (r3 < r4) goto L29
                int r1 = r1.length()
                r0.setSelection(r1)
                goto L34
            L29:
                android.text.Editable r1 = r0.getText()
                int r1 = r1.length()
                r0.setSelection(r1)
            L34:
                r0.setConfirmType(r5)
                boolean r1 = r0.mIsMultiLine
                r0.setInputType(r6, r1)
                r0.setVisibility(r2)
                r0.requestFocus()
                r0.addListeners()
                return
        }
    }

    static {
            java.lang.String r0 = "#1fa014"
            int r0 = android.graphics.Color.parseColor(r0)
            org.cocos2dx.lib.Cocos2dxEditBox.DARK_GREEN = r0
            java.lang.String r0 = "#008e26"
            int r0 = android.graphics.Color.parseColor(r0)
            org.cocos2dx.lib.Cocos2dxEditBox.DARK_GREEN_PRESS = r0
            r0 = 0
            org.cocos2dx.lib.Cocos2dxEditBox.sThis = r0
            return
    }

    public Cocos2dxEditBox() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.mEditText = r0
            r3.mButton = r0
            r3.mButtonTitle = r0
            r1 = 1
            r3.mConfirmHold = r1
            r2 = 0
            r3.mIsConfirmed = r2
            r3.mButtonLayout = r0
            r3.mEditTextID = r1
            r0 = 2
            r3.mButtonLayoutID = r0
            return
    }

    static int access$000() {
            int r0 = org.cocos2dx.lib.Cocos2dxEditBox.DARK_GREEN
            return r0
    }

    static void access$100(org.cocos2dx.lib.Cocos2dxEditBox r0, java.lang.String r1) {
            r0.onKeyboardInput(r1)
            return
    }

    static boolean access$1000(org.cocos2dx.lib.Cocos2dxEditBox r0) {
            boolean r0 = r0.mConfirmHold
            return r0
    }

    static org.cocos2dx.lib.Cocos2dxEditBox access$1100() {
            org.cocos2dx.lib.Cocos2dxEditBox r0 = org.cocos2dx.lib.Cocos2dxEditBox.sThis
            return r0
    }

    static void access$1200(java.lang.String r0) {
            onKeyboardInputNative(r0)
            return
    }

    static void access$1300(java.lang.String r0) {
            onKeyboardCompleteNative(r0)
            return
    }

    static void access$1400(java.lang.String r0) {
            onKeyboardConfirmNative(r0)
            return
    }

    static org.cocos2dx.lib.Cocos2dxEditBox.Cocos2dxEditText access$200(org.cocos2dx.lib.Cocos2dxEditBox r0) {
            org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText r0 = r0.mEditText
            return r0
    }

    static java.lang.String access$302(org.cocos2dx.lib.Cocos2dxEditBox r0, java.lang.String r1) {
            r0.mButtonTitle = r1
            return r1
    }

    static void access$500(org.cocos2dx.lib.Cocos2dxEditBox r0) {
            r0.hide()
            return
    }

    static boolean access$802(org.cocos2dx.lib.Cocos2dxEditBox r0, boolean r1) {
            r0.mIsConfirmed = r1
            return r1
    }

    static void access$900(org.cocos2dx.lib.Cocos2dxEditBox r0, java.lang.String r1) {
            r0.onKeyboardConfirm(r1)
            return
    }

    private void addButton(android.widget.RelativeLayout r5) {
            r4 = this;
            android.widget.Button r0 = new android.widget.Button
            r0.<init>(r4)
            r4.mButton = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -2
            r0.<init>(r1, r1)
            r4.mButtonParams = r0
            android.widget.Button r0 = r4.mButton
            r2 = -1
            r0.setTextColor(r2)
            android.widget.Button r0 = r4.mButton
            android.graphics.drawable.Drawable r3 = r4.getRoundRectShape()
            r0.setBackground(r3)
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r4)
            r4.mButtonLayout = r0
            android.widget.RelativeLayout r0 = r4.mButtonLayout
            r0.setBackgroundColor(r2)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r1, r1)
            r1 = 11
            r0.addRule(r1)
            int r1 = r4.mEditTextID
            r2 = 8
            r0.addRule(r2, r1)
            int r1 = r4.mEditTextID
            r2 = 6
            r0.addRule(r2, r1)
            android.widget.RelativeLayout r1 = r4.mButtonLayout
            android.widget.Button r2 = r4.mButton
            android.widget.RelativeLayout$LayoutParams r3 = r4.mButtonParams
            r1.addView(r2, r3)
            android.widget.RelativeLayout r1 = r4.mButtonLayout
            int r2 = r4.mButtonLayoutID
            r1.setId(r2)
            android.widget.RelativeLayout r1 = r4.mButtonLayout
            r5.addView(r1, r0)
            android.widget.Button r5 = r4.mButton
            org.cocos2dx.lib.Cocos2dxEditBox$1 r0 = new org.cocos2dx.lib.Cocos2dxEditBox$1
            r0.<init>(r4)
            r5.setOnClickListener(r0)
            return
    }

    private void addEditText(android.widget.RelativeLayout r4) {
            r3 = this;
            org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText r0 = new org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText
            r0.<init>(r3, r3)
            r3.mEditText = r0
            org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText r0 = r3.mEditText
            r1 = 4
            r0.setVisibility(r1)
            org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText r0 = r3.mEditText
            r1 = -1
            r0.setBackgroundColor(r1)
            org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText r0 = r3.mEditText
            int r2 = r3.mEditTextID
            r0.setId(r2)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r2 = -2
            r0.<init>(r1, r2)
            int r1 = r3.mButtonLayoutID
            r2 = 0
            r0.addRule(r2, r1)
            org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText r1 = r3.mEditText
            r4.addView(r1, r0)
            return
    }

    private void addItems(android.widget.RelativeLayout r5) {
            r4 = this;
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r4)
            r4.addEditText(r0)
            r4.addButton(r0)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = -1
            r3 = -2
            r1.<init>(r2, r3)
            r2 = 12
            r1.addRule(r2)
            r5.addView(r0, r1)
            return
    }

    private void closeKeyboard() {
            r3 = this;
            java.lang.String r0 = "input_method"
            java.lang.Object r0 = r3.getSystemService(r0)
            android.view.inputmethod.InputMethodManager r0 = (android.view.inputmethod.InputMethodManager) r0
            org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText r1 = r3.mEditText
            android.os.IBinder r1 = r1.getWindowToken()
            r2 = 0
            r0.hideSoftInputFromWindow(r1, r2)
            org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText r0 = r3.mEditText
            android.text.Editable r0 = r0.getText()
            java.lang.String r0 = r0.toString()
            r3.onKeyboardComplete(r0)
            return
    }

    private android.graphics.drawable.Drawable getRoundRectShape() {
            r6 = this;
            r0 = 8
            float[] r0 = new float[r0]
            r1 = 7
            float r2 = (float) r1
            r3 = 0
            r0[r3] = r2
            r4 = 1
            r0[r4] = r2
            r5 = 2
            r0[r5] = r2
            r5 = 3
            r0[r5] = r2
            r5 = 4
            r0[r5] = r2
            r5 = 5
            r0[r5] = r2
            r5 = 6
            r0[r5] = r2
            r0[r1] = r2
            android.graphics.drawable.shapes.RoundRectShape r1 = new android.graphics.drawable.shapes.RoundRectShape
            r2 = 0
            r1.<init>(r0, r2, r2)
            android.graphics.drawable.ShapeDrawable r0 = new android.graphics.drawable.ShapeDrawable
            r0.<init>()
            r0.setShape(r1)
            android.graphics.Paint r2 = r0.getPaint()
            android.graphics.Paint$Style r5 = android.graphics.Paint.Style.FILL
            r2.setStyle(r5)
            android.graphics.Paint r2 = r0.getPaint()
            int r5 = org.cocos2dx.lib.Cocos2dxEditBox.DARK_GREEN
            r2.setColor(r5)
            android.graphics.drawable.ShapeDrawable r2 = new android.graphics.drawable.ShapeDrawable
            r2.<init>()
            r2.setShape(r1)
            android.graphics.Paint r1 = r2.getPaint()
            android.graphics.Paint$Style r5 = android.graphics.Paint.Style.FILL
            r1.setStyle(r5)
            android.graphics.Paint r1 = r2.getPaint()
            int r5 = org.cocos2dx.lib.Cocos2dxEditBox.DARK_GREEN_PRESS
            r1.setColor(r5)
            android.graphics.drawable.StateListDrawable r1 = new android.graphics.drawable.StateListDrawable
            r1.<init>()
            int[] r4 = new int[r4]
            r5 = 16842919(0x10100a7, float:2.3694026E-38)
            r4[r3] = r5
            r1.addState(r4, r2)
            int[] r2 = new int[r3]
            r1.addState(r2, r0)
            return r1
    }

    private void hide() {
            r3 = this;
            org.cocos2dx.lib.Utils.hideVirtualButton()
            org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText r0 = r3.mEditText
            if (r0 == 0) goto L10
            android.text.Editable r0 = r0.getText()
            java.lang.String r0 = r0.toString()
            goto L12
        L10:
            java.lang.String r0 = ""
        L12:
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            java.lang.String r2 = "editbox_text"
            r1.putExtra(r2, r0)
            boolean r0 = r3.mIsConfirmed
            java.lang.String r2 = "editbox_confirm"
            r1.putExtra(r2, r0)
            r0 = -1
            r3.setResult(r0, r1)
            r3.closeKeyboard()
            r3.finish()
            return
    }

    private static void hideNative() {
            org.cocos2dx.lib.Cocos2dxEditBox r0 = org.cocos2dx.lib.Cocos2dxEditBox.sThis
            if (r0 == 0) goto L10
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.getActivity()
            org.cocos2dx.lib.Cocos2dxEditBox$3 r1 = new org.cocos2dx.lib.Cocos2dxEditBox$3
            r1.<init>()
            r0.runOnUiThread(r1)
        L10:
            return
    }

    private void onKeyboardComplete(java.lang.String r2) {
            r1 = this;
            org.cocos2dx.lib.Cocos2dxEditBox$5 r0 = new org.cocos2dx.lib.Cocos2dxEditBox$5
            r0.<init>(r1, r2)
            org.cocos2dx.lib.Cocos2dxHelper.runOnGLThread(r0)
            return
    }

    public static void onKeyboardCompleteCallback(java.lang.String r0) {
            onKeyboardCompleteNative(r0)
            return
    }

    private static native void onKeyboardCompleteNative(java.lang.String r0);

    private void onKeyboardConfirm(java.lang.String r2) {
            r1 = this;
            org.cocos2dx.lib.Cocos2dxEditBox$6 r0 = new org.cocos2dx.lib.Cocos2dxEditBox$6
            r0.<init>(r1, r2)
            org.cocos2dx.lib.Cocos2dxHelper.runOnGLThread(r0)
            return
    }

    public static void onKeyboardConfirmCallback(java.lang.String r0) {
            onKeyboardConfirmNative(r0)
            return
    }

    private static native void onKeyboardConfirmNative(java.lang.String r0);

    private void onKeyboardInput(java.lang.String r2) {
            r1 = this;
            org.cocos2dx.lib.Cocos2dxEditBox$4 r0 = new org.cocos2dx.lib.Cocos2dxEditBox$4
            r0.<init>(r1, r2)
            org.cocos2dx.lib.Cocos2dxHelper.runOnGLThread(r0)
            return
    }

    public static void onKeyboardInputCallback(java.lang.String r0) {
            onKeyboardInputNative(r0)
            return
    }

    private static native void onKeyboardInputNative(java.lang.String r0);

    private void openKeyboard() {
            r3 = this;
            java.lang.String r0 = "input_method"
            java.lang.Object r0 = r3.getSystemService(r0)
            android.view.inputmethod.InputMethodManager r0 = (android.view.inputmethod.InputMethodManager) r0
            org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText r1 = r3.mEditText
            r2 = 1
            r0.showSoftInput(r1, r2)
            return
    }

    private static void showNative(java.lang.String r9, int r10, boolean r11, boolean r12, java.lang.String r13, java.lang.String r14) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.getActivity()
            org.cocos2dx.lib.Cocos2dxEditBox$2 r8 = new org.cocos2dx.lib.Cocos2dxEditBox$2
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r0.runOnUiThread(r8)
            return
    }

    @Override
    public void onBackPressed() {
            r0 = this;
            r0.hide()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r9) {
            r8 = this;
            super.onCreate(r9)
            android.view.Window r9 = r8.getWindow()
            r0 = 16
            r9.setSoftInputMode(r0)
            org.cocos2dx.lib.Cocos2dxEditBox.sThis = r8
            android.view.ViewGroup$LayoutParams r9 = new android.view.ViewGroup$LayoutParams
            r0 = -1
            r9.<init>(r0, r0)
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r8)
            r0.setLayoutParams(r9)
            r8.setContentView(r0)
            r8.addItems(r0)
            android.content.Intent r9 = r8.getIntent()
            android.os.Bundle r9 = r9.getExtras()
            java.lang.String r0 = "defaultValue"
            java.lang.String r2 = r9.getString(r0)
            java.lang.String r0 = "maxLength"
            int r3 = r9.getInt(r0)
            java.lang.String r0 = "isMultiline"
            boolean r4 = r9.getBoolean(r0)
            java.lang.String r0 = "confirmHold"
            boolean r5 = r9.getBoolean(r0)
            java.lang.String r0 = "confirmType"
            java.lang.String r6 = r9.getString(r0)
            java.lang.String r0 = "inputType"
            java.lang.String r7 = r9.getString(r0)
            r1 = r8
            r1.show(r2, r3, r4, r5, r6, r7)
            return
    }

    public void show(java.lang.String r8, int r9, boolean r10, boolean r11, java.lang.String r12, java.lang.String r13) {
            r7 = this;
            r7.mConfirmHold = r11
            org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText r0 = r7.mEditText
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.show(r1, r2, r3, r4, r5, r6)
            org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText r8 = r7.mEditText
            int r8 = r8.getPaddingBottom()
            org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText r9 = r7.mEditText
            int r9 = r9.getPaddingTop()
            org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText r10 = r7.mEditText
            r10.setPadding(r9, r9, r9, r8)
            android.widget.Button r8 = r7.mButton
            java.lang.String r10 = r7.mButtonTitle
            r8.setText(r10)
            java.lang.String r8 = r7.mButtonTitle
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            r10 = 0
            if (r8 == 0) goto L3f
            android.widget.Button r8 = r7.mButton
            r8.setPadding(r10, r10, r10, r10)
            android.widget.RelativeLayout$LayoutParams r8 = r7.mButtonParams
            r8.setMargins(r10, r10, r10, r10)
            android.widget.RelativeLayout r8 = r7.mButtonLayout
            r9 = 4
            r8.setVisibility(r9)
            goto L56
        L3f:
            org.cocos2dx.lib.Cocos2dxEditBox$Cocos2dxEditText r8 = r7.mEditText
            int r8 = r8.getPaddingBottom()
            int r8 = r8 / 2
            android.widget.Button r11 = r7.mButton
            r11.setPadding(r9, r8, r9, r8)
            android.widget.RelativeLayout$LayoutParams r9 = r7.mButtonParams
            r9.setMargins(r10, r8, r10, r10)
            android.widget.RelativeLayout r8 = r7.mButtonLayout
            r8.setVisibility(r10)
        L56:
            r7.openKeyboard()
            return
    }
}
