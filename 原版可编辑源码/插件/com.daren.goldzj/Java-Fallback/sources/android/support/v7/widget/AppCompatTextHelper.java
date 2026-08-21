package android.support.v7.widget;

import android.annotation.SuppressLint;
import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.Typeface;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.RestrictTo;
import android.support.v4.content.res.ResourcesCompat;
import android.support.v4.widget.AutoSizeableTextView;
import android.support.v4.widget.TextViewCompat;
import android.support.v7.appcompat.R;
import android.text.method.PasswordTransformationMethod;
import android.util.AttributeSet;
import android.widget.TextView;
import java.lang.ref.WeakReference;

class AppCompatTextHelper {
    private static final int MONOSPACE = 3;
    private static final int SANS = 1;
    private static final int SERIF = 2;
    private boolean mAsyncFontPending;

    @NonNull
    private final AppCompatTextViewAutoSizeHelper mAutoSizeTextHelper;
    private TintInfo mDrawableBottomTint;
    private TintInfo mDrawableEndTint;
    private TintInfo mDrawableLeftTint;
    private TintInfo mDrawableRightTint;
    private TintInfo mDrawableStartTint;
    private TintInfo mDrawableTopTint;
    private Typeface mFontTypeface;
    private int mStyle;
    private final TextView mView;

    AppCompatTextHelper(TextView r2) {
        this.mStyle = 0;
        this.mView = r2;
        this.mAutoSizeTextHelper = new AppCompatTextViewAutoSizeHelper(this.mView);
    }

    @SuppressLint({"NewApi"})
    void loadFromAttributes(AttributeSet r18, int r19) {
        Context r3 = this.mView.getContext();
        AppCompatDrawableManager r4 = AppCompatDrawableManager.get();
        TintTypedArray r5 = TintTypedArray.obtainStyledAttributes(r3, r18, R.styleable.AppCompatTextHelper, r19, 0);
        int r7 = r5.getResourceId(R.styleable.AppCompatTextHelper_android_textAppearance, -1);
        if (r5.hasValue(R.styleable.AppCompatTextHelper_android_drawableLeft) == false) goto L6;
        this.mDrawableLeftTint = createTintInfo(r3, r4, r5.getResourceId(R.styleable.AppCompatTextHelper_android_drawableLeft, 0));
    L6:
        if (r5.hasValue(R.styleable.AppCompatTextHelper_android_drawableTop) == false) goto L9;
        this.mDrawableTopTint = createTintInfo(r3, r4, r5.getResourceId(R.styleable.AppCompatTextHelper_android_drawableTop, 0));
    L9:
        if (r5.hasValue(R.styleable.AppCompatTextHelper_android_drawableRight) == false) goto L12;
        this.mDrawableRightTint = createTintInfo(r3, r4, r5.getResourceId(R.styleable.AppCompatTextHelper_android_drawableRight, 0));
    L12:
        if (r5.hasValue(R.styleable.AppCompatTextHelper_android_drawableBottom) == false) goto L15;
        this.mDrawableBottomTint = createTintInfo(r3, r4, r5.getResourceId(R.styleable.AppCompatTextHelper_android_drawableBottom, 0));
    L15:
        if (Build.VERSION.SDK_INT >= 17) goto L17;
    L22:
        r5.recycle();
        boolean r42 = this.mView.getTransformationMethod() instanceof PasswordTransformationMethod;
        boolean r52 = true;
        ColorStateList r10 = null;
        if (r7 == (-1)) goto L46;
        TintTypedArray r72 = TintTypedArray.obtainStyledAttributes(r3, r7, R.styleable.TextAppearance);
        if (r42 == false) goto L27;
    L29:
        boolean r11 = false;
        boolean r12 = false;
    L30:
        updateTypefaceAndStyle(r3, r72);
        if (Build.VERSION.SDK_INT < 23) goto L33;
        ColorStateList r13 = null;
        ColorStateList r14 = null;
    L45:
        r72.recycle();
    L47:
        TintTypedArray r73 = TintTypedArray.obtainStyledAttributes(r3, r18, R.styleable.TextAppearance, r19, 0);
        if (r42 == false) goto L50;
    L52:
        r52 = r11;
    L54:
        if (Build.VERSION.SDK_INT >= 23) goto L65;
        if (r73.hasValue(R.styleable.TextAppearance_android_textColor) == false) goto L59;
        r10 = r73.getColorStateList(R.styleable.TextAppearance_android_textColor);
    L59:
        if (r73.hasValue(R.styleable.TextAppearance_android_textColorHint) == false) goto L62;
        r14 = r73.getColorStateList(R.styleable.TextAppearance_android_textColorHint);
    L62:
        if (r73.hasValue(R.styleable.TextAppearance_android_textColorLink) == false) goto L65;
        r13 = r73.getColorStateList(R.styleable.TextAppearance_android_textColorLink);
    L65:
        if (Build.VERSION.SDK_INT >= 28) goto L67;
    L71:
        updateTypefaceAndStyle(r3, r73);
        r73.recycle();
        if (r10 == null) goto L74;
        this.mView.setTextColor(r10);
    L74:
        if (r14 == null) goto L76;
        this.mView.setHintTextColor(r14);
    L76:
        if (r13 == null) goto L78;
        this.mView.setLinkTextColor(r13);
    L78:
        if (r42 == true) goto L81;
        if (r52 == false) goto L81;
        setAllCaps(r12);
    L81:
        Typeface r43 = this.mFontTypeface;
        if (r43 == null) goto L84;
        this.mView.setTypeface(r43, this.mStyle);
    L84:
        this.mAutoSizeTextHelper.loadFromAttributes(r18, r19);
        if (AutoSizeableTextView.PLATFORM_SUPPORTS_AUTOSIZE == true) goto L87;
    L94:
        TintTypedArray r1 = TintTypedArray.obtainStyledAttributes(r3, r18, R.styleable.AppCompatTextView);
        int r2 = r1.getDimensionPixelSize(R.styleable.AppCompatTextView_firstBaselineToTopHeight, -1);
        int r32 = r1.getDimensionPixelSize(R.styleable.AppCompatTextView_lastBaselineToBottomHeight, -1);
        int r44 = r1.getDimensionPixelSize(R.styleable.AppCompatTextView_lineHeight, -1);
        r1.recycle();
        if (r2 == (-1)) goto L97;
        TextViewCompat.setFirstBaselineToTopHeight(this.mView, r2);
    L97:
        if (r32 == (-1)) goto L99;
        TextViewCompat.setLastBaselineToBottomHeight(this.mView, r32);
    L99:
        if (r44 == (-1)) goto L102;
        TextViewCompat.setLineHeight(this.mView, r44);
        return;
    L102:
        return;
    L87:
        if (this.mAutoSizeTextHelper.getAutoSizeTextType() == 0) goto L94;
        int[] r22 = this.mAutoSizeTextHelper.getAutoSizeTextAvailableSizes();
        if (r22.length <= 0) goto L94;
        if (this.mView.getAutoSizeStepGranularity() == (-1.0f)) goto L93;
        this.mView.setAutoSizeTextTypeUniformWithConfiguration(this.mAutoSizeTextHelper.getAutoSizeMinTextSize(), this.mAutoSizeTextHelper.getAutoSizeMaxTextSize(), this.mAutoSizeTextHelper.getAutoSizeStepGranularity(), 0);
        goto L94
    L93:
        this.mView.setAutoSizeTextTypeUniformWithPresetSizes(r22, 0);
        goto L94
    L67:
        if (r73.hasValue(R.styleable.TextAppearance_android_textSize) == false) goto L71;
        if (r73.getDimensionPixelSize(R.styleable.TextAppearance_android_textSize, -1) != 0) goto L71;
        this.mView.setTextSize(0, 0.0f);
        goto L71
    L50:
        if (r73.hasValue(R.styleable.TextAppearance_textAllCaps) == false) goto L52;
        r12 = r73.getBoolean(R.styleable.TextAppearance_textAllCaps, false);
        goto L54
    L33:
        if (r72.hasValue(R.styleable.TextAppearance_android_textColor) == false) goto L35;
        ColorStateList r132 = r72.getColorStateList(R.styleable.TextAppearance_android_textColor);
    L37:
        if (r72.hasValue(R.styleable.TextAppearance_android_textColorHint) == false) goto L39;
        r14 = r72.getColorStateList(R.styleable.TextAppearance_android_textColorHint);
    L41:
        if (r72.hasValue(R.styleable.TextAppearance_android_textColorLink) == false) goto L43;
        r10 = r72.getColorStateList(R.styleable.TextAppearance_android_textColorLink);
    L43:
        ColorStateList r16 = r132;
        r13 = r10;
        r10 = r16;
        goto L45
    L39:
        r14 = null;
        goto L41
    L35:
        r132 = null;
        goto L37
    L27:
        if (r72.hasValue(R.styleable.TextAppearance_textAllCaps) == false) goto L29;
        r12 = r72.getBoolean(R.styleable.TextAppearance_textAllCaps, false);
        r11 = true;
        goto L30
    L46:
        r13 = null;
        r14 = null;
        r11 = false;
        r12 = false;
        goto L47
    L17:
        if (r5.hasValue(R.styleable.AppCompatTextHelper_android_drawableStart) == false) goto L20;
        this.mDrawableStartTint = createTintInfo(r3, r4, r5.getResourceId(R.styleable.AppCompatTextHelper_android_drawableStart, 0));
    L20:
        if (r5.hasValue(R.styleable.AppCompatTextHelper_android_drawableEnd) == false) goto L22;
        this.mDrawableEndTint = createTintInfo(r3, r4, r5.getResourceId(R.styleable.AppCompatTextHelper_android_drawableEnd, 0));
        goto L22
    }

    private void updateTypefaceAndStyle(Context r5, TintTypedArray r6) {
        this.mStyle = r6.getInt(R.styleable.TextAppearance_android_textStyle, this.mStyle);
        boolean r1 = false;
        if (r6.hasValue(R.styleable.TextAppearance_android_fontFamily) == false) goto L5;
    L20:
        this.mFontTypeface = null;
        if (r6.hasValue(R.styleable.TextAppearance_fontFamily) == false) goto L23;
        int r0 = R.styleable.TextAppearance_fontFamily;
    L25:
        if (r5.isRestricted() == true) goto L34;
        final WeakReference r52 = new WeakReference(this.mView);
        ResourcesCompat.FontCallback r3 = new 1(this, r52);
        this.mFontTypeface = r6.getFont(r0, this.mStyle, r3);     // Catch: Throwable -> L32
        if (this.mFontTypeface != null) goto L30;
        r1 = true;
    L30:
        this.mAsyncFontPending = r1;     // Catch: Throwable -> L32
    L34:
        if (this.mFontTypeface != null) goto L45;
        String r53 = r6.getString(r0);
        if (r53 == null) goto L46;
        this.mFontTypeface = Typeface.create(r53, this.mStyle);
        return;
    L46:
        return;
    L45:
        return;
    L23:
        r0 = R.styleable.TextAppearance_android_fontFamily;
        goto L25
    L5:
        if (r6.hasValue(R.styleable.TextAppearance_fontFamily) == true) goto L20;
        if (r6.hasValue(R.styleable.TextAppearance_android_typeface) == false) goto L41;
        this.mAsyncFontPending = false;
        int r54 = r6.getInt(R.styleable.TextAppearance_android_typeface, 1);
        if (r54 != 1) goto L12;
        this.mFontTypeface = Typeface.SANS_SERIF;
        return;
    L12:
        if (r54 != 2) goto L14;
        this.mFontTypeface = Typeface.SERIF;
        return;
    L14:
        if (r54 != 3) goto L44;
        this.mFontTypeface = Typeface.MONOSPACE;
        return;
    L44:
        return;
    }

    void onAsyncTypefaceReceived(WeakReference<TextView> r2, Typeface r3) {
        if (this.mAsyncFontPending == false) goto L8;
        this.mFontTypeface = r3;
        TextView r22 = r2.get();
        if (r22 == null) goto L9;
        r22.setTypeface(r3, this.mStyle);
        return;
    L9:
        return;
    }

    void onSetTextAppearance(Context r4, int r5) {
        TintTypedArray r52 = TintTypedArray.obtainStyledAttributes(r4, r5, R.styleable.TextAppearance);
        if (r52.hasValue(R.styleable.TextAppearance_textAllCaps) == false) goto L6;
        setAllCaps(r52.getBoolean(R.styleable.TextAppearance_textAllCaps, false));
    L6:
        if (Build.VERSION.SDK_INT >= 23) goto L13;
        if (r52.hasValue(R.styleable.TextAppearance_android_textColor) == false) goto L13;
        ColorStateList r0 = r52.getColorStateList(R.styleable.TextAppearance_android_textColor);
        if (r0 == null) goto L13;
        this.mView.setTextColor(r0);
    L13:
        if (r52.hasValue(R.styleable.TextAppearance_android_textSize) == true) goto L15;
    L17:
        updateTypefaceAndStyle(r4, r52);
        r52.recycle();
        Typeface r42 = this.mFontTypeface;
        if (r42 == null) goto L21;
        this.mView.setTypeface(r42, this.mStyle);
        return;
    L21:
        return;
    L15:
        if (r52.getDimensionPixelSize(R.styleable.TextAppearance_android_textSize, -1) != 0) goto L17;
        this.mView.setTextSize(0, 0.0f);
        goto L17
    }

    void setAllCaps(boolean r2) {
        this.mView.setAllCaps(r2);
    }

    void applyCompoundDrawablesTints() {
        if (this.mDrawableLeftTint == null) goto L5;
    L10:
        Drawable[] r0 = this.mView.getCompoundDrawables();
        applyCompoundDrawableTint(r0[0], this.mDrawableLeftTint);
        applyCompoundDrawableTint(r0[1], this.mDrawableTopTint);
        applyCompoundDrawableTint(r0[2], this.mDrawableRightTint);
        applyCompoundDrawableTint(r0[3], this.mDrawableBottomTint);
    L12:
        if (Build.VERSION.SDK_INT >= 17) goto L14;
        return;
    L14:
        if (this.mDrawableStartTint == null) goto L16;
    L17:
        Drawable[] r02 = this.mView.getCompoundDrawablesRelative();
        applyCompoundDrawableTint(r02[0], this.mDrawableStartTint);
        applyCompoundDrawableTint(r02[2], this.mDrawableEndTint);
        return;
    L16:
        if (this.mDrawableEndTint != null) goto L17;
        return;
    L5:
        if (this.mDrawableTopTint != null) goto L10;
        if (this.mDrawableRightTint != null) goto L10;
        if (this.mDrawableBottomTint == null) goto L12;
        goto L10
    }

    private void applyCompoundDrawableTint(Drawable r2, TintInfo r3) {
        if (r2 == null) goto L6;
        if (r3 == null) goto L7;
        AppCompatDrawableManager.tintDrawable(r2, r3, this.mView.getDrawableState());
        return;
    L7:
        return;
    }

    private static TintInfo createTintInfo(Context r0, AppCompatDrawableManager r1, int r2) {
        ColorStateList r02 = r1.getTintList(r0, r2);
        if (r02 == null) goto L6;
        TintInfo r12 = new TintInfo();
        r12.mHasTintList = true;
        r12.mTintList = r02;
        return r12;
    L6:
        return null;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
        if (AutoSizeableTextView.PLATFORM_SUPPORTS_AUTOSIZE == true) goto L6;
        autoSizeText();
        return;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    void setTextSize(int r2, float r3) {
        if (AutoSizeableTextView.PLATFORM_SUPPORTS_AUTOSIZE == false) goto L5;
        return;
    L5:
        if (isAutoSizeEnabled() == true) goto L9;
        setTextSizeInternal(r2, r3);
        return;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    void autoSizeText() {
        this.mAutoSizeTextHelper.autoSizeText();
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    boolean isAutoSizeEnabled() {
        return this.mAutoSizeTextHelper.isAutoSizeEnabled();
    }

    private void setTextSizeInternal(int r2, float r3) {
        this.mAutoSizeTextHelper.setTextSizeInternal(r2, r3);
    }

    void setAutoSizeTextTypeWithDefaults(int r2) {
        this.mAutoSizeTextHelper.setAutoSizeTextTypeWithDefaults(r2);
    }

    void setAutoSizeTextTypeUniformWithConfiguration(int r2, int r3, int r4, int r5) throws IllegalArgumentException {
        this.mAutoSizeTextHelper.setAutoSizeTextTypeUniformWithConfiguration(r2, r3, r4, r5);
    }

    void setAutoSizeTextTypeUniformWithPresetSizes(@NonNull int[] r2, int r3) throws IllegalArgumentException {
        this.mAutoSizeTextHelper.setAutoSizeTextTypeUniformWithPresetSizes(r2, r3);
    }

    int getAutoSizeTextType() {
        return this.mAutoSizeTextHelper.getAutoSizeTextType();
    }

    int getAutoSizeStepGranularity() {
        return this.mAutoSizeTextHelper.getAutoSizeStepGranularity();
    }

    int getAutoSizeMinTextSize() {
        return this.mAutoSizeTextHelper.getAutoSizeMinTextSize();
    }

    int getAutoSizeMaxTextSize() {
        return this.mAutoSizeTextHelper.getAutoSizeMaxTextSize();
    }

    int[] getAutoSizeTextAvailableSizes() {
        return this.mAutoSizeTextHelper.getAutoSizeTextAvailableSizes();
    }
}
