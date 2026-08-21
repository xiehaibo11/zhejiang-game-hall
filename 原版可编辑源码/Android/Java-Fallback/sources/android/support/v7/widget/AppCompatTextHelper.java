package android.support.v7.widget;

class AppCompatTextHelper {
    private static final int MONOSPACE = 3;
    private static final int SANS = 1;
    private static final int SERIF = 2;
    private boolean mAsyncFontPending;
    private final android.support.v7.widget.AppCompatTextViewAutoSizeHelper mAutoSizeTextHelper;
    private android.support.v7.widget.TintInfo mDrawableBottomTint;
    private android.support.v7.widget.TintInfo mDrawableEndTint;
    private android.support.v7.widget.TintInfo mDrawableLeftTint;
    private android.support.v7.widget.TintInfo mDrawableRightTint;
    private android.support.v7.widget.TintInfo mDrawableStartTint;
    private android.support.v7.widget.TintInfo mDrawableTopTint;
    private android.graphics.Typeface mFontTypeface;
    private int mStyle;
    private final android.widget.TextView mView;


    AppCompatTextHelper(android.widget.TextView r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mStyle = r0
            r1.mView = r2
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r2 = new android.support.v7.widget.AppCompatTextViewAutoSizeHelper
            android.widget.TextView r0 = r1.mView
            r2.<init>(r0)
            r1.mAutoSizeTextHelper = r2
            return
    }

    private void applyCompoundDrawableTint(android.graphics.drawable.Drawable r2, android.support.v7.widget.TintInfo r3) {
            r1 = this;
            if (r2 == 0) goto Ld
            if (r3 == 0) goto Ld
            android.widget.TextView r0 = r1.mView
            int[] r0 = r0.getDrawableState()
            android.support.v7.widget.AppCompatDrawableManager.tintDrawable(r2, r3, r0)
        Ld:
            return
    }

    private static android.support.v7.widget.TintInfo createTintInfo(android.content.Context r0, android.support.v7.widget.AppCompatDrawableManager r1, int r2) {
            android.content.res.ColorStateList r0 = r1.getTintList(r0, r2)
            if (r0 == 0) goto L11
            android.support.v7.widget.TintInfo r1 = new android.support.v7.widget.TintInfo
            r1.<init>()
            r2 = 1
            r1.mHasTintList = r2
            r1.mTintList = r0
            return r1
        L11:
            r0 = 0
            return r0
    }

    private void setTextSizeInternal(int r2, float r3) {
            r1 = this;
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r0 = r1.mAutoSizeTextHelper
            r0.setTextSizeInternal(r2, r3)
            return
    }

    private void updateTypefaceAndStyle(android.content.Context r5, android.support.v7.widget.TintTypedArray r6) {
            r4 = this;
            int r0 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textStyle
            int r1 = r4.mStyle
            int r0 = r6.getInt(r0, r1)
            r4.mStyle = r0
            int r0 = android.support.v7.appcompat.R.styleable.TextAppearance_android_fontFamily
            boolean r0 = r6.hasValue(r0)
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L45
            int r0 = android.support.v7.appcompat.R.styleable.TextAppearance_fontFamily
            boolean r0 = r6.hasValue(r0)
            if (r0 == 0) goto L1d
            goto L45
        L1d:
            int r5 = android.support.v7.appcompat.R.styleable.TextAppearance_android_typeface
            boolean r5 = r6.hasValue(r5)
            if (r5 == 0) goto L44
            r4.mAsyncFontPending = r1
            int r5 = android.support.v7.appcompat.R.styleable.TextAppearance_android_typeface
            int r5 = r6.getInt(r5, r2)
            if (r5 == r2) goto L40
            r6 = 2
            if (r5 == r6) goto L3b
            r6 = 3
            if (r5 == r6) goto L36
            goto L44
        L36:
            android.graphics.Typeface r5 = android.graphics.Typeface.MONOSPACE
            r4.mFontTypeface = r5
            goto L44
        L3b:
            android.graphics.Typeface r5 = android.graphics.Typeface.SERIF
            r4.mFontTypeface = r5
            goto L44
        L40:
            android.graphics.Typeface r5 = android.graphics.Typeface.SANS_SERIF
            r4.mFontTypeface = r5
        L44:
            return
        L45:
            r0 = 0
            r4.mFontTypeface = r0
            int r0 = android.support.v7.appcompat.R.styleable.TextAppearance_fontFamily
            boolean r0 = r6.hasValue(r0)
            if (r0 == 0) goto L53
            int r0 = android.support.v7.appcompat.R.styleable.TextAppearance_fontFamily
            goto L55
        L53:
            int r0 = android.support.v7.appcompat.R.styleable.TextAppearance_android_fontFamily
        L55:
            boolean r5 = r5.isRestricted()
            if (r5 != 0) goto L74
            java.lang.ref.WeakReference r5 = new java.lang.ref.WeakReference
            android.widget.TextView r3 = r4.mView
            r5.<init>(r3)
            android.support.v7.widget.AppCompatTextHelper$1 r3 = new android.support.v7.widget.AppCompatTextHelper$1
            r3.<init>(r4, r5)
            int r5 = r4.mStyle     // Catch: java.lang.Throwable -> L74
            android.graphics.Typeface r5 = r6.getFont(r0, r5, r3)     // Catch: java.lang.Throwable -> L74
            r4.mFontTypeface = r5     // Catch: java.lang.Throwable -> L74
            if (r5 != 0) goto L72
            r1 = r2
        L72:
            r4.mAsyncFontPending = r1     // Catch: java.lang.Throwable -> L74
        L74:
            android.graphics.Typeface r5 = r4.mFontTypeface
            if (r5 != 0) goto L86
            java.lang.String r5 = r6.getString(r0)
            if (r5 == 0) goto L86
            int r6 = r4.mStyle
            android.graphics.Typeface r5 = android.graphics.Typeface.create(r5, r6)
            r4.mFontTypeface = r5
        L86:
            return
    }

    void applyCompoundDrawablesTints() {
            r5 = this;
            android.support.v7.widget.TintInfo r0 = r5.mDrawableLeftTint
            r1 = 2
            r2 = 0
            if (r0 != 0) goto L12
            android.support.v7.widget.TintInfo r0 = r5.mDrawableTopTint
            if (r0 != 0) goto L12
            android.support.v7.widget.TintInfo r0 = r5.mDrawableRightTint
            if (r0 != 0) goto L12
            android.support.v7.widget.TintInfo r0 = r5.mDrawableBottomTint
            if (r0 == 0) goto L36
        L12:
            android.widget.TextView r0 = r5.mView
            android.graphics.drawable.Drawable[] r0 = r0.getCompoundDrawables()
            r3 = r0[r2]
            android.support.v7.widget.TintInfo r4 = r5.mDrawableLeftTint
            r5.applyCompoundDrawableTint(r3, r4)
            r3 = 1
            r3 = r0[r3]
            android.support.v7.widget.TintInfo r4 = r5.mDrawableTopTint
            r5.applyCompoundDrawableTint(r3, r4)
            r3 = r0[r1]
            android.support.v7.widget.TintInfo r4 = r5.mDrawableRightTint
            r5.applyCompoundDrawableTint(r3, r4)
            r3 = 3
            r0 = r0[r3]
            android.support.v7.widget.TintInfo r3 = r5.mDrawableBottomTint
            r5.applyCompoundDrawableTint(r0, r3)
        L36:
            int r0 = android.os.Build.VERSION.SDK_INT
            r3 = 17
            if (r0 < r3) goto L58
            android.support.v7.widget.TintInfo r0 = r5.mDrawableStartTint
            if (r0 != 0) goto L44
            android.support.v7.widget.TintInfo r0 = r5.mDrawableEndTint
            if (r0 == 0) goto L58
        L44:
            android.widget.TextView r0 = r5.mView
            android.graphics.drawable.Drawable[] r0 = r0.getCompoundDrawablesRelative()
            r2 = r0[r2]
            android.support.v7.widget.TintInfo r3 = r5.mDrawableStartTint
            r5.applyCompoundDrawableTint(r2, r3)
            r0 = r0[r1]
            android.support.v7.widget.TintInfo r1 = r5.mDrawableEndTint
            r5.applyCompoundDrawableTint(r0, r1)
        L58:
            return
    }

    void autoSizeText() {
            r1 = this;
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r0 = r1.mAutoSizeTextHelper
            r0.autoSizeText()
            return
    }

    int getAutoSizeMaxTextSize() {
            r1 = this;
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r0 = r1.mAutoSizeTextHelper
            int r0 = r0.getAutoSizeMaxTextSize()
            return r0
    }

    int getAutoSizeMinTextSize() {
            r1 = this;
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r0 = r1.mAutoSizeTextHelper
            int r0 = r0.getAutoSizeMinTextSize()
            return r0
    }

    int getAutoSizeStepGranularity() {
            r1 = this;
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r0 = r1.mAutoSizeTextHelper
            int r0 = r0.getAutoSizeStepGranularity()
            return r0
    }

    int[] getAutoSizeTextAvailableSizes() {
            r1 = this;
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r0 = r1.mAutoSizeTextHelper
            int[] r0 = r0.getAutoSizeTextAvailableSizes()
            return r0
    }

    int getAutoSizeTextType() {
            r1 = this;
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r0 = r1.mAutoSizeTextHelper
            int r0 = r0.getAutoSizeTextType()
            return r0
    }

    boolean isAutoSizeEnabled() {
            r1 = this;
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r0 = r1.mAutoSizeTextHelper
            boolean r0 = r0.isAutoSizeEnabled()
            return r0
    }

    void loadFromAttributes(android.util.AttributeSet r18, int r19) {
            r17 = this;
            r0 = r17
            r1 = r18
            r2 = r19
            android.widget.TextView r3 = r0.mView
            android.content.Context r3 = r3.getContext()
            android.support.v7.widget.AppCompatDrawableManager r4 = android.support.v7.widget.AppCompatDrawableManager.get()
            int[] r5 = android.support.v7.appcompat.R.styleable.AppCompatTextHelper
            r6 = 0
            android.support.v7.widget.TintTypedArray r5 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r3, r1, r5, r2, r6)
            int r7 = android.support.v7.appcompat.R.styleable.AppCompatTextHelper_android_textAppearance
            r8 = -1
            int r7 = r5.getResourceId(r7, r8)
            int r9 = android.support.v7.appcompat.R.styleable.AppCompatTextHelper_android_drawableLeft
            boolean r9 = r5.hasValue(r9)
            if (r9 == 0) goto L32
            int r9 = android.support.v7.appcompat.R.styleable.AppCompatTextHelper_android_drawableLeft
            int r9 = r5.getResourceId(r9, r6)
            android.support.v7.widget.TintInfo r9 = createTintInfo(r3, r4, r9)
            r0.mDrawableLeftTint = r9
        L32:
            int r9 = android.support.v7.appcompat.R.styleable.AppCompatTextHelper_android_drawableTop
            boolean r9 = r5.hasValue(r9)
            if (r9 == 0) goto L46
            int r9 = android.support.v7.appcompat.R.styleable.AppCompatTextHelper_android_drawableTop
            int r9 = r5.getResourceId(r9, r6)
            android.support.v7.widget.TintInfo r9 = createTintInfo(r3, r4, r9)
            r0.mDrawableTopTint = r9
        L46:
            int r9 = android.support.v7.appcompat.R.styleable.AppCompatTextHelper_android_drawableRight
            boolean r9 = r5.hasValue(r9)
            if (r9 == 0) goto L5a
            int r9 = android.support.v7.appcompat.R.styleable.AppCompatTextHelper_android_drawableRight
            int r9 = r5.getResourceId(r9, r6)
            android.support.v7.widget.TintInfo r9 = createTintInfo(r3, r4, r9)
            r0.mDrawableRightTint = r9
        L5a:
            int r9 = android.support.v7.appcompat.R.styleable.AppCompatTextHelper_android_drawableBottom
            boolean r9 = r5.hasValue(r9)
            if (r9 == 0) goto L6e
            int r9 = android.support.v7.appcompat.R.styleable.AppCompatTextHelper_android_drawableBottom
            int r9 = r5.getResourceId(r9, r6)
            android.support.v7.widget.TintInfo r9 = createTintInfo(r3, r4, r9)
            r0.mDrawableBottomTint = r9
        L6e:
            int r9 = android.os.Build.VERSION.SDK_INT
            r10 = 17
            if (r9 < r10) goto L9c
            int r9 = android.support.v7.appcompat.R.styleable.AppCompatTextHelper_android_drawableStart
            boolean r9 = r5.hasValue(r9)
            if (r9 == 0) goto L88
            int r9 = android.support.v7.appcompat.R.styleable.AppCompatTextHelper_android_drawableStart
            int r9 = r5.getResourceId(r9, r6)
            android.support.v7.widget.TintInfo r9 = createTintInfo(r3, r4, r9)
            r0.mDrawableStartTint = r9
        L88:
            int r9 = android.support.v7.appcompat.R.styleable.AppCompatTextHelper_android_drawableEnd
            boolean r9 = r5.hasValue(r9)
            if (r9 == 0) goto L9c
            int r9 = android.support.v7.appcompat.R.styleable.AppCompatTextHelper_android_drawableEnd
            int r9 = r5.getResourceId(r9, r6)
            android.support.v7.widget.TintInfo r4 = createTintInfo(r3, r4, r9)
            r0.mDrawableEndTint = r4
        L9c:
            r5.recycle()
            android.widget.TextView r4 = r0.mView
            android.text.method.TransformationMethod r4 = r4.getTransformationMethod()
            boolean r4 = r4 instanceof android.text.method.PasswordTransformationMethod
            r5 = 1
            r9 = 23
            r10 = 0
            if (r7 == r8) goto L108
            int[] r11 = android.support.v7.appcompat.R.styleable.TextAppearance
            android.support.v7.widget.TintTypedArray r7 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r3, r7, r11)
            if (r4 != 0) goto Lc5
            int r11 = android.support.v7.appcompat.R.styleable.TextAppearance_textAllCaps
            boolean r11 = r7.hasValue(r11)
            if (r11 == 0) goto Lc5
            int r11 = android.support.v7.appcompat.R.styleable.TextAppearance_textAllCaps
            boolean r11 = r7.getBoolean(r11, r6)
            r12 = r5
            goto Lc7
        Lc5:
            r11 = r6
            r12 = r11
        Lc7:
            r0.updateTypefaceAndStyle(r3, r7)
            int r13 = android.os.Build.VERSION.SDK_INT
            if (r13 >= r9) goto L102
            int r13 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColor
            boolean r13 = r7.hasValue(r13)
            if (r13 == 0) goto Ldd
            int r13 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColor
            android.content.res.ColorStateList r13 = r7.getColorStateList(r13)
            goto Lde
        Ldd:
            r13 = r10
        Lde:
            int r14 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColorHint
            boolean r14 = r7.hasValue(r14)
            if (r14 == 0) goto Led
            int r14 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColorHint
            android.content.res.ColorStateList r14 = r7.getColorStateList(r14)
            goto Lee
        Led:
            r14 = r10
        Lee:
            int r15 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColorLink
            boolean r15 = r7.hasValue(r15)
            if (r15 == 0) goto Lfc
            int r10 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColorLink
            android.content.res.ColorStateList r10 = r7.getColorStateList(r10)
        Lfc:
            r16 = r13
            r13 = r10
            r10 = r16
            goto L104
        L102:
            r13 = r10
            r14 = r13
        L104:
            r7.recycle()
            goto L10c
        L108:
            r11 = r6
            r12 = r11
            r13 = r10
            r14 = r13
        L10c:
            int[] r7 = android.support.v7.appcompat.R.styleable.TextAppearance
            android.support.v7.widget.TintTypedArray r7 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r3, r1, r7, r2, r6)
            if (r4 != 0) goto L123
            int r15 = android.support.v7.appcompat.R.styleable.TextAppearance_textAllCaps
            boolean r15 = r7.hasValue(r15)
            if (r15 == 0) goto L123
            int r11 = android.support.v7.appcompat.R.styleable.TextAppearance_textAllCaps
            boolean r11 = r7.getBoolean(r11, r6)
            goto L124
        L123:
            r5 = r12
        L124:
            int r12 = android.os.Build.VERSION.SDK_INT
            if (r12 >= r9) goto L152
            int r9 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColor
            boolean r9 = r7.hasValue(r9)
            if (r9 == 0) goto L136
            int r9 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColor
            android.content.res.ColorStateList r10 = r7.getColorStateList(r9)
        L136:
            int r9 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColorHint
            boolean r9 = r7.hasValue(r9)
            if (r9 == 0) goto L144
            int r9 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColorHint
            android.content.res.ColorStateList r14 = r7.getColorStateList(r9)
        L144:
            int r9 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColorLink
            boolean r9 = r7.hasValue(r9)
            if (r9 == 0) goto L152
            int r9 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColorLink
            android.content.res.ColorStateList r13 = r7.getColorStateList(r9)
        L152:
            int r9 = android.os.Build.VERSION.SDK_INT
            r12 = 28
            if (r9 < r12) goto L16e
            int r9 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textSize
            boolean r9 = r7.hasValue(r9)
            if (r9 == 0) goto L16e
            int r9 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textSize
            int r9 = r7.getDimensionPixelSize(r9, r8)
            if (r9 != 0) goto L16e
            android.widget.TextView r9 = r0.mView
            r12 = 0
            r9.setTextSize(r6, r12)
        L16e:
            r0.updateTypefaceAndStyle(r3, r7)
            r7.recycle()
            if (r10 == 0) goto L17b
            android.widget.TextView r7 = r0.mView
            r7.setTextColor(r10)
        L17b:
            if (r14 == 0) goto L182
            android.widget.TextView r7 = r0.mView
            r7.setHintTextColor(r14)
        L182:
            if (r13 == 0) goto L189
            android.widget.TextView r7 = r0.mView
            r7.setLinkTextColor(r13)
        L189:
            if (r4 != 0) goto L190
            if (r5 == 0) goto L190
            r0.setAllCaps(r11)
        L190:
            android.graphics.Typeface r4 = r0.mFontTypeface
            if (r4 == 0) goto L19b
            android.widget.TextView r5 = r0.mView
            int r7 = r0.mStyle
            r5.setTypeface(r4, r7)
        L19b:
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r4 = r0.mAutoSizeTextHelper
            r4.loadFromAttributes(r1, r2)
            boolean r2 = android.support.v4.widget.AutoSizeableTextView.PLATFORM_SUPPORTS_AUTOSIZE
            if (r2 == 0) goto L1df
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r2 = r0.mAutoSizeTextHelper
            int r2 = r2.getAutoSizeTextType()
            if (r2 == 0) goto L1df
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r2 = r0.mAutoSizeTextHelper
            int[] r2 = r2.getAutoSizeTextAvailableSizes()
            int r4 = r2.length
            if (r4 <= 0) goto L1df
            android.widget.TextView r4 = r0.mView
            int r4 = r4.getAutoSizeStepGranularity()
            float r4 = (float) r4
            r5 = -1082130432(0xffffffffbf800000, float:-1.0)
            int r4 = (r4 > r5 ? 1 : (r4 == r5 ? 0 : -1))
            if (r4 == 0) goto L1da
            android.widget.TextView r2 = r0.mView
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r4 = r0.mAutoSizeTextHelper
            int r4 = r4.getAutoSizeMinTextSize()
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r5 = r0.mAutoSizeTextHelper
            int r5 = r5.getAutoSizeMaxTextSize()
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r7 = r0.mAutoSizeTextHelper
            int r7 = r7.getAutoSizeStepGranularity()
            r2.setAutoSizeTextTypeUniformWithConfiguration(r4, r5, r7, r6)
            goto L1df
        L1da:
            android.widget.TextView r4 = r0.mView
            r4.setAutoSizeTextTypeUniformWithPresetSizes(r2, r6)
        L1df:
            int[] r2 = android.support.v7.appcompat.R.styleable.AppCompatTextView
            android.support.v7.widget.TintTypedArray r1 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r3, r1, r2)
            int r2 = android.support.v7.appcompat.R.styleable.AppCompatTextView_firstBaselineToTopHeight
            int r2 = r1.getDimensionPixelSize(r2, r8)
            int r3 = android.support.v7.appcompat.R.styleable.AppCompatTextView_lastBaselineToBottomHeight
            int r3 = r1.getDimensionPixelSize(r3, r8)
            int r4 = android.support.v7.appcompat.R.styleable.AppCompatTextView_lineHeight
            int r4 = r1.getDimensionPixelSize(r4, r8)
            r1.recycle()
            if (r2 == r8) goto L201
            android.widget.TextView r1 = r0.mView
            android.support.v4.widget.TextViewCompat.setFirstBaselineToTopHeight(r1, r2)
        L201:
            if (r3 == r8) goto L208
            android.widget.TextView r1 = r0.mView
            android.support.v4.widget.TextViewCompat.setLastBaselineToBottomHeight(r1, r3)
        L208:
            if (r4 == r8) goto L20f
            android.widget.TextView r1 = r0.mView
            android.support.v4.widget.TextViewCompat.setLineHeight(r1, r4)
        L20f:
            return
    }

    void onAsyncTypefaceReceived(java.lang.ref.WeakReference<android.widget.TextView> r2, android.graphics.Typeface r3) {
            r1 = this;
            boolean r0 = r1.mAsyncFontPending
            if (r0 == 0) goto L13
            r1.mFontTypeface = r3
            java.lang.Object r2 = r2.get()
            android.widget.TextView r2 = (android.widget.TextView) r2
            if (r2 == 0) goto L13
            int r0 = r1.mStyle
            r2.setTypeface(r3, r0)
        L13:
            return
    }

    void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            boolean r1 = android.support.v4.widget.AutoSizeableTextView.PLATFORM_SUPPORTS_AUTOSIZE
            if (r1 != 0) goto L7
            r0.autoSizeText()
        L7:
            return
    }

    void onSetTextAppearance(android.content.Context r4, int r5) {
            r3 = this;
            int[] r0 = android.support.v7.appcompat.R.styleable.TextAppearance
            android.support.v7.widget.TintTypedArray r5 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r4, r5, r0)
            int r0 = android.support.v7.appcompat.R.styleable.TextAppearance_textAllCaps
            boolean r0 = r5.hasValue(r0)
            r1 = 0
            if (r0 == 0) goto L18
            int r0 = android.support.v7.appcompat.R.styleable.TextAppearance_textAllCaps
            boolean r0 = r5.getBoolean(r0, r1)
            r3.setAllCaps(r0)
        L18:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            if (r0 >= r2) goto L33
            int r0 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColor
            boolean r0 = r5.hasValue(r0)
            if (r0 == 0) goto L33
            int r0 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColor
            android.content.res.ColorStateList r0 = r5.getColorStateList(r0)
            if (r0 == 0) goto L33
            android.widget.TextView r2 = r3.mView
            r2.setTextColor(r0)
        L33:
            int r0 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textSize
            boolean r0 = r5.hasValue(r0)
            if (r0 == 0) goto L4a
            int r0 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textSize
            r2 = -1
            int r0 = r5.getDimensionPixelSize(r0, r2)
            if (r0 != 0) goto L4a
            android.widget.TextView r0 = r3.mView
            r2 = 0
            r0.setTextSize(r1, r2)
        L4a:
            r3.updateTypefaceAndStyle(r4, r5)
            r5.recycle()
            android.graphics.Typeface r4 = r3.mFontTypeface
            if (r4 == 0) goto L5b
            android.widget.TextView r5 = r3.mView
            int r0 = r3.mStyle
            r5.setTypeface(r4, r0)
        L5b:
            return
    }

    void setAllCaps(boolean r2) {
            r1 = this;
            android.widget.TextView r0 = r1.mView
            r0.setAllCaps(r2)
            return
    }

    void setAutoSizeTextTypeUniformWithConfiguration(int r2, int r3, int r4, int r5) throws java.lang.IllegalArgumentException {
            r1 = this;
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r0 = r1.mAutoSizeTextHelper
            r0.setAutoSizeTextTypeUniformWithConfiguration(r2, r3, r4, r5)
            return
    }

    void setAutoSizeTextTypeUniformWithPresetSizes(int[] r2, int r3) throws java.lang.IllegalArgumentException {
            r1 = this;
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r0 = r1.mAutoSizeTextHelper
            r0.setAutoSizeTextTypeUniformWithPresetSizes(r2, r3)
            return
    }

    void setAutoSizeTextTypeWithDefaults(int r2) {
            r1 = this;
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper r0 = r1.mAutoSizeTextHelper
            r0.setAutoSizeTextTypeWithDefaults(r2)
            return
    }

    void setTextSize(int r2, float r3) {
            r1 = this;
            boolean r0 = android.support.v4.widget.AutoSizeableTextView.PLATFORM_SUPPORTS_AUTOSIZE
            if (r0 != 0) goto Ld
            boolean r0 = r1.isAutoSizeEnabled()
            if (r0 != 0) goto Ld
            r1.setTextSizeInternal(r2, r3)
        Ld:
            return
    }
}
