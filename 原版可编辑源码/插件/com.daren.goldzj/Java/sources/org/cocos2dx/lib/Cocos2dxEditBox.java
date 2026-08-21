package org.cocos2dx.lib;

import android.app.Activity;
import android.content.Intent;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.ShapeDrawable;
import android.graphics.drawable.StateListDrawable;
import android.graphics.drawable.shapes.RoundRectShape;
import android.os.Bundle;
import android.support.v4.app.NotificationCompat;
import android.support.v4.view.ViewCompat;
import android.text.Editable;
import android.text.InputFilter;
import android.text.TextUtils;
import android.text.TextWatcher;
import android.util.Log;
import android.view.KeyEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import android.view.WindowManager;
import android.view.inputmethod.InputMethodManager;
import android.widget.Button;
import android.widget.EditText;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.qihoo360.replugin.loader.a.PluginActivity;

public class Cocos2dxEditBox extends PluginActivity {
    public static final int EDITBOX_REQUEST_CODE = 10001;
    private RelativeLayout.LayoutParams mButtonParams;
    private static final int DARK_GREEN = Color.parseColor("#1fa014");
    private static final int DARK_GREEN_PRESS = Color.parseColor("#008e26");
    private static Cocos2dxEditBox sThis = null;
    private Cocos2dxEditText mEditText = null;
    private Button mButton = null;
    private String mButtonTitle = null;
    private boolean mConfirmHold = true;
    private boolean mIsConfirmed = false;
    private RelativeLayout mButtonLayout = null;
    private int mEditTextID = 1;
    private int mButtonLayoutID = 2;

    private static native void onKeyboardCompleteNative(String str);

    private static native void onKeyboardConfirmNative(String str);

    private static native void onKeyboardInputNative(String str);

    class Cocos2dxEditText extends EditText {
        private final String TAG;
        private boolean keyboardVisible;
        private boolean mIsMultiLine;
        private int mLineColor;
        private float mLineWidth;
        private Paint mPaint;
        private int mScreenHeight;
        private TextWatcher mTextWatcher;

        public Cocos2dxEditText(Activity activity) {
            super(activity);
            this.TAG = "Cocos2dxEditBox";
            this.mIsMultiLine = false;
            this.mTextWatcher = null;
            this.mLineColor = Cocos2dxEditBox.DARK_GREEN;
            this.mLineWidth = 2.0f;
            this.keyboardVisible = false;
            setBackground(null);
            setTextColor(ViewCompat.MEASURED_STATE_MASK);
            this.mScreenHeight = ((WindowManager) activity.getSystemService("window")).getDefaultDisplay().getHeight();
            this.mPaint = new Paint();
            this.mPaint.setStrokeWidth(this.mLineWidth);
            this.mPaint.setStyle(Paint.Style.FILL);
            this.mPaint.setColor(this.mLineColor);
            this.mTextWatcher = new TextWatcher() {
                @Override
                public void beforeTextChanged(CharSequence charSequence, int i, int i2, int i3) {
                }

                @Override
                public void onTextChanged(CharSequence charSequence, int i, int i2, int i3) {
                }

                @Override
                public void afterTextChanged(Editable editable) {
                    Cocos2dxEditBox.this.onKeyboardInput(editable.toString());
                }
            };
            registKeyboardVisible();
        }

        @Override
        protected void onDraw(Canvas canvas) {
            int paddingBottom = getPaddingBottom() / 2;
            canvas.drawLine(getScrollX(), (getHeight() - paddingBottom) - this.mLineWidth, getScrollX() + getWidth(), (getHeight() - paddingBottom) - this.mLineWidth, this.mPaint);
            super.onDraw(canvas);
        }

        public void show(String str, int i, boolean z, boolean z2, String str2, String str3) {
            this.mIsMultiLine = z;
            setFilters(new InputFilter[]{new InputFilter.LengthFilter(i)});
            setText(str);
            if (getText().length() >= str.length()) {
                setSelection(str.length());
            } else {
                setSelection(getText().length());
            }
            setConfirmType(str2);
            setInputType(str3, this.mIsMultiLine);
            setVisibility(0);
            requestFocus();
            addListeners();
        }

        public void hide() {
            Cocos2dxEditBox.this.mEditText.setVisibility(4);
            removeListeners();
        }

        private void setConfirmType(String str) {
            if (str.contentEquals("done")) {
                setImeOptions(268435462);
                Cocos2dxEditBox.this.mButtonTitle = "完成";
                return;
            }
            if (str.contentEquals("next")) {
                setImeOptions(268435461);
                Cocos2dxEditBox.this.mButtonTitle = "下一个";
                return;
            }
            if (str.contentEquals("search")) {
                setImeOptions(268435459);
                Cocos2dxEditBox.this.mButtonTitle = "搜索";
                return;
            }
            if (str.contentEquals("go")) {
                setImeOptions(268435458);
                Cocos2dxEditBox.this.mButtonTitle = "前往";
            } else {
                if (!str.contentEquals("send")) {
                    Cocos2dxEditBox.this.mButtonTitle = null;
                    Log.e("Cocos2dxEditBox", "unknown confirm type " + str);
                    return;
                }
                setImeOptions(268435460);
                Cocos2dxEditBox.this.mButtonTitle = "发送";
            }
        }

        private void setInputType(String str, boolean z) {
            if (str.contentEquals("text")) {
                if (z) {
                    setInputType(131073);
                    return;
                } else {
                    setInputType(1);
                    return;
                }
            }
            if (str.contentEquals(NotificationCompat.CATEGORY_EMAIL)) {
                setInputType(32);
                return;
            }
            if (str.contentEquals("number")) {
                setInputType(12290);
                return;
            }
            if (str.contentEquals("phone")) {
                setInputType(3);
                return;
            }
            if (str.contentEquals("password")) {
                setInputType(129);
                return;
            }
            Log.e("Cocos2dxEditBox", "unknown input type " + str);
        }

        private void addListeners() {
            setOnEditorActionListener(new TextView.OnEditorActionListener() {
                @Override
                public boolean onEditorAction(TextView textView, int i, KeyEvent keyEvent) {
                    if (Cocos2dxEditText.this.mIsMultiLine) {
                        return false;
                    }
                    Cocos2dxEditBox.this.hide();
                    return false;
                }
            });
            addTextChangedListener(this.mTextWatcher);
        }

        private void removeListeners() {
            setOnEditorActionListener(null);
            removeTextChangedListener(this.mTextWatcher);
        }

        private void registKeyboardVisible() {
            getViewTreeObserver().addOnGlobalLayoutListener(new ViewTreeObserver.OnGlobalLayoutListener() {
                @Override
                public void onGlobalLayout() {
                    Rect rect = new Rect();
                    Cocos2dxEditText.this.getWindowVisibleDisplayFrame(rect);
                    if (Cocos2dxEditText.this.getRootView().getHeight() - (rect.bottom - rect.top) > Cocos2dxEditText.this.mScreenHeight / 4) {
                        if (Cocos2dxEditText.this.keyboardVisible) {
                            return;
                        }
                        Cocos2dxEditText.this.keyboardVisible = true;
                    } else if (Cocos2dxEditText.this.keyboardVisible) {
                        Cocos2dxEditText.this.keyboardVisible = false;
                        Cocos2dxEditBox.this.hide();
                    }
                }
            });
        }
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        getWindow().setSoftInputMode(16);
        sThis = this;
        ViewGroup.LayoutParams layoutParams = new ViewGroup.LayoutParams(-1, -1);
        RelativeLayout relativeLayout = new RelativeLayout(this);
        relativeLayout.setLayoutParams(layoutParams);
        setContentView(relativeLayout);
        addItems(relativeLayout);
        Bundle extras = getIntent().getExtras();
        show(extras.getString("defaultValue"), extras.getInt("maxLength"), extras.getBoolean("isMultiline"), extras.getBoolean("confirmHold"), extras.getString("confirmType"), extras.getString("inputType"));
    }

    private void addItems(RelativeLayout relativeLayout) {
        RelativeLayout relativeLayout2 = new RelativeLayout(this);
        addEditText(relativeLayout2);
        addButton(relativeLayout2);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -2);
        layoutParams.addRule(12);
        relativeLayout.addView(relativeLayout2, layoutParams);
    }

    private void addEditText(RelativeLayout relativeLayout) {
        this.mEditText = new Cocos2dxEditText(this);
        this.mEditText.setVisibility(4);
        this.mEditText.setBackgroundColor(-1);
        this.mEditText.setId(this.mEditTextID);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -2);
        layoutParams.addRule(0, this.mButtonLayoutID);
        relativeLayout.addView(this.mEditText, layoutParams);
    }

    private void addButton(RelativeLayout relativeLayout) {
        this.mButton = new Button(this);
        this.mButtonParams = new RelativeLayout.LayoutParams(-2, -2);
        this.mButton.setTextColor(-1);
        this.mButton.setBackground(getRoundRectShape());
        this.mButtonLayout = new RelativeLayout(this);
        this.mButtonLayout.setBackgroundColor(-1);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams.addRule(11);
        layoutParams.addRule(8, this.mEditTextID);
        layoutParams.addRule(6, this.mEditTextID);
        this.mButtonLayout.addView(this.mButton, this.mButtonParams);
        this.mButtonLayout.setId(this.mButtonLayoutID);
        relativeLayout.addView(this.mButtonLayout, layoutParams);
        this.mButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Cocos2dxEditBox.this.mIsConfirmed = true;
                Cocos2dxEditBox cocos2dxEditBox = Cocos2dxEditBox.this;
                cocos2dxEditBox.onKeyboardConfirm(cocos2dxEditBox.mEditText.getText().toString());
                if (Cocos2dxEditBox.this.mConfirmHold) {
                    return;
                }
                Cocos2dxEditBox.this.hide();
            }
        });
    }

    private Drawable getRoundRectShape() {
        float f = 7;
        RoundRectShape roundRectShape = new RoundRectShape(new float[]{f, f, f, f, f, f, f, f}, null, null);
        ShapeDrawable shapeDrawable = new ShapeDrawable();
        shapeDrawable.setShape(roundRectShape);
        shapeDrawable.getPaint().setStyle(Paint.Style.FILL);
        shapeDrawable.getPaint().setColor(DARK_GREEN);
        ShapeDrawable shapeDrawable2 = new ShapeDrawable();
        shapeDrawable2.setShape(roundRectShape);
        shapeDrawable2.getPaint().setStyle(Paint.Style.FILL);
        shapeDrawable2.getPaint().setColor(DARK_GREEN_PRESS);
        StateListDrawable stateListDrawable = new StateListDrawable();
        stateListDrawable.addState(new int[]{android.R.attr.state_pressed}, shapeDrawable2);
        stateListDrawable.addState(new int[0], shapeDrawable);
        return stateListDrawable;
    }

    private void hide() {
        Utils.hideVirtualButton();
        Cocos2dxEditText cocos2dxEditText = this.mEditText;
        String string = cocos2dxEditText != null ? cocos2dxEditText.getText().toString() : "";
        Intent intent = new Intent();
        intent.putExtra("editbox_text", string);
        intent.putExtra("editbox_confirm", this.mIsConfirmed);
        setResult(-1, intent);
        closeKeyboard();
        finish();
    }

    @Override
    public void onBackPressed() {
        hide();
    }

    public void show(String str, int i, boolean z, boolean z2, String str2, String str3) {
        this.mConfirmHold = z2;
        this.mEditText.show(str, i, z, z2, str2, str3);
        int paddingBottom = this.mEditText.getPaddingBottom();
        int paddingTop = this.mEditText.getPaddingTop();
        this.mEditText.setPadding(paddingTop, paddingTop, paddingTop, paddingBottom);
        this.mButton.setText(this.mButtonTitle);
        if (TextUtils.isEmpty(this.mButtonTitle)) {
            this.mButton.setPadding(0, 0, 0, 0);
            this.mButtonParams.setMargins(0, 0, 0, 0);
            this.mButtonLayout.setVisibility(4);
        } else {
            int paddingBottom2 = this.mEditText.getPaddingBottom() / 2;
            this.mButton.setPadding(paddingTop, paddingBottom2, paddingTop, paddingBottom2);
            this.mButtonParams.setMargins(0, paddingBottom2, 0, 0);
            this.mButtonLayout.setVisibility(0);
        }
        openKeyboard();
    }

    private void closeKeyboard() {
        ((InputMethodManager) getSystemService("input_method")).hideSoftInputFromWindow(this.mEditText.getWindowToken(), 0);
        onKeyboardComplete(this.mEditText.getText().toString());
    }

    private void openKeyboard() {
        ((InputMethodManager) getSystemService("input_method")).showSoftInput(this.mEditText, 1);
    }

    private static void showNative(final String str, final int i, final boolean z, final boolean z2, final String str2, final String str3) {
        Cocos2dxHelper.getActivity().runOnUiThread(new Runnable() {
            @Override
            public void run() {
                Intent intent = new Intent(Cocos2dxHelper.getActivity(), (Class<?>) Cocos2dxEditBox.class);
                intent.putExtra("defaultValue", str);
                intent.putExtra("maxLength", i);
                intent.putExtra("isMultiline", z);
                intent.putExtra("confirmHold", z2);
                intent.putExtra("confirmType", str2);
                intent.putExtra("inputType", str3);
                Cocos2dxHelper.getActivity().startActivityForResult(intent, Cocos2dxEditBox.EDITBOX_REQUEST_CODE);
            }
        });
    }

    private static void hideNative() {
        if (sThis != null) {
            Cocos2dxHelper.getActivity().runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    Cocos2dxEditBox.sThis.hide();
                }
            });
        }
    }

    private void onKeyboardInput(final String str) {
        Cocos2dxHelper.runOnGLThread(new Runnable() {
            @Override
            public void run() {
                Cocos2dxEditBox.onKeyboardInputNative(str);
            }
        });
    }

    private void onKeyboardComplete(final String str) {
        Cocos2dxHelper.runOnGLThread(new Runnable() {
            @Override
            public void run() {
                Cocos2dxEditBox.onKeyboardCompleteNative(str);
            }
        });
    }

    private void onKeyboardConfirm(final String str) {
        Cocos2dxHelper.runOnGLThread(new Runnable() {
            @Override
            public void run() {
                Cocos2dxEditBox.onKeyboardConfirmNative(str);
            }
        });
    }

    public static void onKeyboardInputCallback(String str) {
        onKeyboardInputNative(str);
    }

    public static void onKeyboardCompleteCallback(String str) {
        onKeyboardCompleteNative(str);
    }

    public static void onKeyboardConfirmCallback(String str) {
        onKeyboardConfirmNative(str);
    }
}
