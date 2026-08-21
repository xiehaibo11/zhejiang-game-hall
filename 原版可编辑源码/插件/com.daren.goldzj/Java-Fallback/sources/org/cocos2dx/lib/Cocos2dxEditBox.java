package org.cocos2dx.lib;

import android.app.Activity;
import android.content.Intent;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.ShapeDrawable;
import android.graphics.drawable.StateListDrawable;
import android.graphics.drawable.shapes.RoundRectShape;
import android.os.Bundle;
import android.support.v4.app.NotificationCompat;
import android.support.v4.view.ViewCompat;
import android.text.InputFilter;
import android.text.TextUtils;
import android.text.TextWatcher;
import android.util.Log;
import android.view.ViewGroup;
import android.view.WindowManager;
import android.view.inputmethod.InputMethodManager;
import android.widget.Button;
import android.widget.EditText;
import android.widget.RelativeLayout;
import com.qihoo360.replugin.loader.a.PluginActivity;

public class Cocos2dxEditBox extends PluginActivity {
    private static final int DARK_GREEN = 0;
    private static final int DARK_GREEN_PRESS = 0;
    public static final int EDITBOX_REQUEST_CODE = 10001;
    private static Cocos2dxEditBox sThis;
    private Button mButton;
    private RelativeLayout mButtonLayout;
    private int mButtonLayoutID;
    private RelativeLayout.LayoutParams mButtonParams;
    private String mButtonTitle;
    private boolean mConfirmHold;
    private Cocos2dxEditText mEditText;
    private int mEditTextID;
    private boolean mIsConfirmed;

    class Cocos2dxEditText extends EditText {
        private final String TAG;
        private boolean keyboardVisible;
        private boolean mIsMultiLine;
        private int mLineColor;
        private float mLineWidth;
        private Paint mPaint;
        private int mScreenHeight;
        private TextWatcher mTextWatcher;
        final Cocos2dxEditBox this$0;

        static boolean access$400(Cocos2dxEditText r0) {
            return r0.mIsMultiLine;
        }

        static int access$600(Cocos2dxEditText r0) {
            return r0.mScreenHeight;
        }

        static boolean access$700(Cocos2dxEditText r0) {
            return r0.keyboardVisible;
        }

        static boolean access$702(Cocos2dxEditText r0, boolean r1) {
            r0.keyboardVisible = r1;
            return r1;
        }

        public Cocos2dxEditText(final Cocos2dxEditBox r4, Activity r5) {
            this.this$0 = r4;
            super(r5);
            this.TAG = "Cocos2dxEditBox";
            this.mIsMultiLine = false;
            this.mTextWatcher = null;
            this.mLineColor = Cocos2dxEditBox.access$000();
            this.mLineWidth = 2.0f;
            this.keyboardVisible = false;
            setBackground(null);
            setTextColor(ViewCompat.MEASURED_STATE_MASK);
            this.mScreenHeight = ((WindowManager) r5.getSystemService("window")).getDefaultDisplay().getHeight();
            this.mPaint = new Paint();
            this.mPaint.setStrokeWidth(this.mLineWidth);
            this.mPaint.setStyle(Paint.Style.FILL);
            this.mPaint.setColor(this.mLineColor);
            this.mTextWatcher = new 1(this, r4);
            registKeyboardVisible();
        }

        @Override
        protected void onDraw(Canvas r9) {
            int r0 = getPaddingBottom() / 2;
            r9.drawLine(getScrollX(), (getHeight() - r0) - this.mLineWidth, getScrollX() + getWidth(), (getHeight() - r0) - this.mLineWidth, this.mPaint);
            super.onDraw(r9);
        }

        public void show(String r1, int r2, boolean r3, boolean r4, String r5, String r6) {
            this.mIsMultiLine = r3;
            setFilters(new InputFilter[]{new InputFilter.LengthFilter(r2)});
            setText(r1);
            if (getText().length() < r1.length()) goto L5;
            setSelection(r1.length());
        L6:
            setConfirmType(r5);
            setInputType(r6, this.mIsMultiLine);
            setVisibility(0);
            requestFocus();
            addListeners();
            return;
        L5:
            setSelection(getText().length());
            goto L6
        }

        public void hide() {
            Cocos2dxEditBox.access$200(this.this$0).setVisibility(4);
            removeListeners();
        }

        private void setConfirmType(String r3) {
            if (r3.contentEquals("done") == false) goto L6;
            setImeOptions(268435462);
            Cocos2dxEditBox.access$302(this.this$0, "完成");
            return;
        L6:
            if (r3.contentEquals("next") == false) goto L9;
            setImeOptions(268435461);
            Cocos2dxEditBox.access$302(this.this$0, "下一个");
            return;
        L9:
            if (r3.contentEquals("search") == false) goto L12;
            setImeOptions(268435459);
            Cocos2dxEditBox.access$302(this.this$0, "搜索");
            return;
        L12:
            if (r3.contentEquals("go") == false) goto L15;
            setImeOptions(268435458);
            Cocos2dxEditBox.access$302(this.this$0, "前往");
            return;
        L15:
            if (r3.contentEquals("send") == false) goto L17;
            setImeOptions(268435460);
            Cocos2dxEditBox.access$302(this.this$0, "发送");
            return;
        L17:
            Cocos2dxEditBox.access$302(this.this$0, null);
            Log.e("Cocos2dxEditBox", "unknown confirm type " + r3);
        }

        private void setInputType(String r2, boolean r3) {
            if (r2.contentEquals("text") == false) goto L8;
            if (r3 == false) goto L6;
            setInputType(131073);
            return;
        L6:
            setInputType(1);
            return;
        L8:
            if (r2.contentEquals(NotificationCompat.CATEGORY_EMAIL) == false) goto L11;
            setInputType(32);
            return;
        L11:
            if (r2.contentEquals("number") == false) goto L14;
            setInputType(12290);
            return;
        L14:
            if (r2.contentEquals("phone") == false) goto L17;
            setInputType(3);
            return;
        L17:
            if (r2.contentEquals("password") == false) goto L19;
            setInputType(129);
            return;
        L19:
            Log.e("Cocos2dxEditBox", "unknown input type " + r2);
        }

        private void addListeners() {
            setOnEditorActionListener(new 2(this));
            addTextChangedListener(this.mTextWatcher);
        }

        private void removeListeners() {
            setOnEditorActionListener(null);
            removeTextChangedListener(this.mTextWatcher);
        }

        private void registKeyboardVisible() {
            getViewTreeObserver().addOnGlobalLayoutListener(new 3(this));
        }
    }

    private static native void onKeyboardCompleteNative(String r0);

    private static native void onKeyboardConfirmNative(String r0);

    private static native void onKeyboardInputNative(String r0);

    public Cocos2dxEditBox() {
        this.mEditText = null;
        this.mButton = null;
        this.mButtonTitle = null;
        this.mConfirmHold = true;
        this.mIsConfirmed = false;
        this.mButtonLayout = null;
        this.mEditTextID = 1;
        this.mButtonLayoutID = 2;
    }

    static int access$000() {
        return DARK_GREEN;
    }

    static void access$100(Cocos2dxEditBox r0, String r1) {
        r0.onKeyboardInput(r1);
    }

    static boolean access$1000(Cocos2dxEditBox r0) {
        return r0.mConfirmHold;
    }

    static Cocos2dxEditBox access$1100() {
        return sThis;
    }

    static void access$1200(String r0) {
        onKeyboardInputNative(r0);
    }

    static void access$1300(String r0) {
        onKeyboardCompleteNative(r0);
    }

    static void access$1400(String r0) {
        onKeyboardConfirmNative(r0);
    }

    static Cocos2dxEditText access$200(Cocos2dxEditBox r0) {
        return r0.mEditText;
    }

    static String access$302(Cocos2dxEditBox r0, String r1) {
        r0.mButtonTitle = r1;
        return r1;
    }

    static void access$500(Cocos2dxEditBox r0) {
        r0.hide();
    }

    static boolean access$802(Cocos2dxEditBox r0, boolean r1) {
        r0.mIsConfirmed = r1;
        return r1;
    }

    static void access$900(Cocos2dxEditBox r0, String r1) {
        r0.onKeyboardConfirm(r1);
    }

    static {
        DARK_GREEN = Color.parseColor("#1fa014");
        DARK_GREEN_PRESS = Color.parseColor("#008e26");
        sThis = null;
    }

    @Override
    protected void onCreate(Bundle r9) {
        super.onCreate(r9);
        getWindow().setSoftInputMode(16);
        sThis = this;
        ViewGroup.LayoutParams r92 = new ViewGroup.LayoutParams(-1, -1);
        RelativeLayout r0 = new RelativeLayout(this);
        r0.setLayoutParams(r92);
        setContentView(r0);
        addItems(r0);
        Bundle r93 = getIntent().getExtras();
        show(r93.getString("defaultValue"), r93.getInt("maxLength"), r93.getBoolean("isMultiline"), r93.getBoolean("confirmHold"), r93.getString("confirmType"), r93.getString("inputType"));
    }

    private void addItems(RelativeLayout r5) {
        RelativeLayout r0 = new RelativeLayout(this);
        addEditText(r0);
        addButton(r0);
        RelativeLayout.LayoutParams r1 = new RelativeLayout.LayoutParams(-1, -2);
        r1.addRule(12);
        r5.addView(r0, r1);
    }

    private void addEditText(RelativeLayout r4) {
        this.mEditText = new Cocos2dxEditText(this, this);
        this.mEditText.setVisibility(4);
        this.mEditText.setBackgroundColor(-1);
        this.mEditText.setId(this.mEditTextID);
        RelativeLayout.LayoutParams r0 = new RelativeLayout.LayoutParams(-1, -2);
        r0.addRule(0, this.mButtonLayoutID);
        r4.addView(this.mEditText, r0);
    }

    private void addButton(RelativeLayout r5) {
        this.mButton = new Button(this);
        this.mButtonParams = new RelativeLayout.LayoutParams(-2, -2);
        this.mButton.setTextColor(-1);
        this.mButton.setBackground(getRoundRectShape());
        this.mButtonLayout = new RelativeLayout(this);
        this.mButtonLayout.setBackgroundColor(-1);
        RelativeLayout.LayoutParams r0 = new RelativeLayout.LayoutParams(-2, -2);
        r0.addRule(11);
        r0.addRule(8, this.mEditTextID);
        r0.addRule(6, this.mEditTextID);
        this.mButtonLayout.addView(this.mButton, this.mButtonParams);
        this.mButtonLayout.setId(this.mButtonLayoutID);
        r5.addView(this.mButtonLayout, r0);
        this.mButton.setOnClickListener(new 1(this));
    }

    private Drawable getRoundRectShape() {
        float r2 = 7;
        RoundRectShape r1 = new RoundRectShape(new float[]{r2, r2, r2, r2, r2, r2, r2, r2}, null, null);
        ShapeDrawable r0 = new ShapeDrawable();
        r0.setShape(r1);
        r0.getPaint().setStyle(Paint.Style.FILL);
        r0.getPaint().setColor(DARK_GREEN);
        ShapeDrawable r22 = new ShapeDrawable();
        r22.setShape(r1);
        r22.getPaint().setStyle(Paint.Style.FILL);
        r22.getPaint().setColor(DARK_GREEN_PRESS);
        StateListDrawable r12 = new StateListDrawable();
        r12.addState(new int[]{android.R.attr.state_pressed}, r22);
        r12.addState(new int[0], r0);
        return r12;
    }

    private void hide() {
        Utils.hideVirtualButton();
        Cocos2dxEditText r0 = this.mEditText;
        if (r0 == null) goto L5;
        String r02 = r0.getText().toString();
    L6:
        Intent r1 = new Intent();
        r1.putExtra("editbox_text", r02);
        r1.putExtra("editbox_confirm", this.mIsConfirmed);
        setResult(-1, r1);
        closeKeyboard();
        finish();
        return;
    L5:
        r02 = "";
        goto L6
    }

    @Override
    public void onBackPressed() {
        hide();
    }

    public void show(String r8, int r9, boolean r10, boolean r11, String r12, String r13) {
        this.mConfirmHold = r11;
        this.mEditText.show(r8, r9, r10, r11, r12, r13);
        int r82 = this.mEditText.getPaddingBottom();
        int r92 = this.mEditText.getPaddingTop();
        this.mEditText.setPadding(r92, r92, r92, r82);
        this.mButton.setText(this.mButtonTitle);
        if (TextUtils.isEmpty(this.mButtonTitle) == false) goto L5;
        this.mButton.setPadding(0, 0, 0, 0);
        this.mButtonParams.setMargins(0, 0, 0, 0);
        this.mButtonLayout.setVisibility(4);
    L6:
        openKeyboard();
        return;
    L5:
        int r83 = this.mEditText.getPaddingBottom() / 2;
        this.mButton.setPadding(r92, r83, r92, r83);
        this.mButtonParams.setMargins(0, r83, 0, 0);
        this.mButtonLayout.setVisibility(0);
        goto L6
    }

    private void closeKeyboard() {
        ((InputMethodManager) getSystemService("input_method")).hideSoftInputFromWindow(this.mEditText.getWindowToken(), 0);
        onKeyboardComplete(this.mEditText.getText().toString());
    }

    private void openKeyboard() {
        ((InputMethodManager) getSystemService("input_method")).showSoftInput(this.mEditText, 1);
    }

    private static void showNative(final String r9, final int r10, final boolean r11, final boolean r12, final String r13, final String r14) {
        Cocos2dxHelper.getActivity().runOnUiThread(new 2(r9, r10, r11, r12, r13, r14));
    }

    private static void hideNative() {
        if (sThis == null) goto L6;
        Cocos2dxHelper.getActivity().runOnUiThread(new 3());
        return;
    }

    private void onKeyboardInput(final String r2) {
        Cocos2dxHelper.runOnGLThread(new 4(this, r2));
    }

    private void onKeyboardComplete(final String r2) {
        Cocos2dxHelper.runOnGLThread(new 5(this, r2));
    }

    private void onKeyboardConfirm(final String r2) {
        Cocos2dxHelper.runOnGLThread(new 6(this, r2));
    }

    public static void onKeyboardInputCallback(String r0) {
        onKeyboardInputNative(r0);
    }

    public static void onKeyboardCompleteCallback(String r0) {
        onKeyboardCompleteNative(r0);
    }

    public static void onKeyboardConfirmCallback(String r0) {
        onKeyboardConfirmNative(r0);
    }
}
