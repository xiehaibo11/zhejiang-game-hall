package android.support.design.widget;

public class TextInputLayout extends android.widget.LinearLayout {
    public static final int BOX_BACKGROUND_FILLED = 1;
    public static final int BOX_BACKGROUND_NONE = 0;
    public static final int BOX_BACKGROUND_OUTLINE = 2;
    private static final int INVALID_MAX_LENGTH = -1;
    private static final int LABEL_SCALE_ANIMATION_DURATION = 167;
    private static final java.lang.String LOG_TAG = "TextInputLayout";
    private android.animation.ValueAnimator animator;
    private android.graphics.drawable.GradientDrawable boxBackground;
    private int boxBackgroundColor;
    private int boxBackgroundMode;
    private final int boxBottomOffsetPx;
    private final int boxCollapsedPaddingTopPx;
    private float boxCornerRadiusBottomEnd;
    private float boxCornerRadiusBottomStart;
    private float boxCornerRadiusTopEnd;
    private float boxCornerRadiusTopStart;
    private final int boxLabelCutoutPaddingPx;
    private int boxStrokeColor;
    private final int boxStrokeWidthDefaultPx;
    private final int boxStrokeWidthFocusedPx;
    private int boxStrokeWidthPx;
    final android.support.design.widget.CollapsingTextHelper collapsingTextHelper;
    boolean counterEnabled;
    private int counterMaxLength;
    private final int counterOverflowTextAppearance;
    private boolean counterOverflowed;
    private final int counterTextAppearance;
    private android.widget.TextView counterView;
    private android.content.res.ColorStateList defaultHintTextColor;
    private final int defaultStrokeColor;
    private final int disabledColor;
    android.widget.EditText editText;
    private android.graphics.drawable.Drawable editTextOriginalDrawable;
    private int focusedStrokeColor;
    private android.content.res.ColorStateList focusedTextColor;
    private boolean hasPasswordToggleTintList;
    private boolean hasPasswordToggleTintMode;
    private boolean hasReconstructedEditTextBackground;
    private java.lang.CharSequence hint;
    private boolean hintAnimationEnabled;
    private boolean hintEnabled;
    private boolean hintExpanded;
    private final int hoveredStrokeColor;
    private boolean inDrawableStateChanged;
    private final android.support.design.widget.IndicatorViewController indicatorViewController;
    private final android.widget.FrameLayout inputFrame;
    private boolean isProvidingHint;
    private android.graphics.drawable.Drawable originalEditTextEndDrawable;
    private java.lang.CharSequence originalHint;
    private java.lang.CharSequence passwordToggleContentDesc;
    private android.graphics.drawable.Drawable passwordToggleDrawable;
    private android.graphics.drawable.Drawable passwordToggleDummyDrawable;
    private boolean passwordToggleEnabled;
    private android.content.res.ColorStateList passwordToggleTintList;
    private android.graphics.PorterDuff.Mode passwordToggleTintMode;
    private android.support.design.widget.CheckableImageButton passwordToggleView;
    private boolean passwordToggledVisible;
    private boolean restoringSavedState;
    private final android.graphics.Rect tmpRect;
    private final android.graphics.RectF tmpRectF;
    private android.graphics.Typeface typeface;




    public static class AccessibilityDelegate extends android.support.v4.view.AccessibilityDelegateCompat {
        private final android.support.design.widget.TextInputLayout layout;

        public AccessibilityDelegate(android.support.design.widget.TextInputLayout r1) {
                r0 = this;
                r0.<init>()
                r0.layout = r1
                return
        }

        @Override
        public void onInitializeAccessibilityNodeInfo(android.view.View r10, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r11) {
                r9 = this;
                super.onInitializeAccessibilityNodeInfo(r10, r11)
                android.support.design.widget.TextInputLayout r10 = r9.layout
                android.widget.EditText r10 = r10.getEditText()
                if (r10 == 0) goto L10
                android.text.Editable r10 = r10.getText()
                goto L11
            L10:
                r10 = 0
            L11:
                android.support.design.widget.TextInputLayout r0 = r9.layout
                java.lang.CharSequence r0 = r0.getHint()
                android.support.design.widget.TextInputLayout r1 = r9.layout
                java.lang.CharSequence r1 = r1.getError()
                android.support.design.widget.TextInputLayout r2 = r9.layout
                java.lang.CharSequence r2 = r2.getCounterOverflowDescription()
                boolean r3 = android.text.TextUtils.isEmpty(r10)
                r4 = 1
                r3 = r3 ^ r4
                boolean r5 = android.text.TextUtils.isEmpty(r0)
                r5 = r5 ^ r4
                boolean r6 = android.text.TextUtils.isEmpty(r1)
                r6 = r6 ^ r4
                r7 = 0
                if (r6 != 0) goto L3f
                boolean r8 = android.text.TextUtils.isEmpty(r2)
                if (r8 != 0) goto L3d
                goto L3f
            L3d:
                r8 = r7
                goto L40
            L3f:
                r8 = r4
            L40:
                if (r3 == 0) goto L46
                r11.setText(r10)
                goto L4b
            L46:
                if (r5 == 0) goto L4b
                r11.setText(r0)
            L4b:
                if (r5 == 0) goto L58
                r11.setHintText(r0)
                if (r3 != 0) goto L55
                if (r5 == 0) goto L55
                r7 = r4
            L55:
                r11.setShowingHintText(r7)
            L58:
                if (r8 == 0) goto L64
                if (r6 == 0) goto L5d
                goto L5e
            L5d:
                r1 = r2
            L5e:
                r11.setError(r1)
                r11.setContentInvalid(r4)
            L64:
                return
        }

        @Override
        public void onPopulateAccessibilityEvent(android.view.View r2, android.view.accessibility.AccessibilityEvent r3) {
                r1 = this;
                super.onPopulateAccessibilityEvent(r2, r3)
                android.support.design.widget.TextInputLayout r2 = r1.layout
                android.widget.EditText r2 = r2.getEditText()
                if (r2 == 0) goto L10
                android.text.Editable r2 = r2.getText()
                goto L11
            L10:
                r2 = 0
            L11:
                boolean r0 = android.text.TextUtils.isEmpty(r2)
                if (r0 == 0) goto L1d
                android.support.design.widget.TextInputLayout r2 = r1.layout
                java.lang.CharSequence r2 = r2.getHint()
            L1d:
                boolean r0 = android.text.TextUtils.isEmpty(r2)
                if (r0 != 0) goto L2a
                java.util.List r3 = r3.getText()
                r3.add(r2)
            L2a:
                return
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface BoxBackgroundMode {
    }

    static class SavedState extends android.support.v4.view.AbsSavedState {
        public static final android.os.Parcelable.Creator<android.support.design.widget.TextInputLayout.SavedState> CREATOR = null;
        java.lang.CharSequence error;
        boolean isPasswordToggledVisible;


        static {
                android.support.design.widget.TextInputLayout$SavedState$1 r0 = new android.support.design.widget.TextInputLayout$SavedState$1
                r0.<init>()
                android.support.design.widget.TextInputLayout.SavedState.CREATOR = r0
                return
        }

        SavedState(android.os.Parcel r1, java.lang.ClassLoader r2) {
                r0 = this;
                r0.<init>(r1, r2)
                android.os.Parcelable$Creator r2 = android.text.TextUtils.CHAR_SEQUENCE_CREATOR
                java.lang.Object r2 = r2.createFromParcel(r1)
                java.lang.CharSequence r2 = (java.lang.CharSequence) r2
                r0.error = r2
                int r1 = r1.readInt()
                r2 = 1
                if (r1 != r2) goto L15
                goto L16
            L15:
                r2 = 0
            L16:
                r0.isPasswordToggledVisible = r2
                return
        }

        SavedState(android.os.Parcelable r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "TextInputLayout.SavedState{"
                r0.append(r1)
                int r1 = java.lang.System.identityHashCode(r2)
                java.lang.String r1 = java.lang.Integer.toHexString(r1)
                r0.append(r1)
                java.lang.String r1 = " error="
                r0.append(r1)
                java.lang.CharSequence r1 = r2.error
                r0.append(r1)
                java.lang.String r1 = "}"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        @Override
        public void writeToParcel(android.os.Parcel r2, int r3) {
                r1 = this;
                super.writeToParcel(r2, r3)
                java.lang.CharSequence r0 = r1.error
                android.text.TextUtils.writeToParcel(r0, r2, r3)
                boolean r3 = r1.isPasswordToggledVisible
                r2.writeInt(r3)
                return
        }
    }

    public TextInputLayout(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public TextInputLayout(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.design.R.attr.textInputStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public TextInputLayout(android.content.Context r11, android.util.AttributeSet r12, int r13) {
            r10 = this;
            r10.<init>(r11, r12, r13)
            android.support.design.widget.IndicatorViewController r0 = new android.support.design.widget.IndicatorViewController
            r0.<init>(r10)
            r10.indicatorViewController = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r10.tmpRect = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r10.tmpRectF = r0
            android.support.design.widget.CollapsingTextHelper r0 = new android.support.design.widget.CollapsingTextHelper
            r0.<init>(r10)
            r10.collapsingTextHelper = r0
            r0 = 1
            r10.setOrientation(r0)
            r1 = 0
            r10.setWillNotDraw(r1)
            r10.setAddStatesFromChildren(r0)
            android.widget.FrameLayout r2 = new android.widget.FrameLayout
            r2.<init>(r11)
            r10.inputFrame = r2
            r2.setAddStatesFromChildren(r0)
            android.widget.FrameLayout r2 = r10.inputFrame
            r10.addView(r2)
            android.support.design.widget.CollapsingTextHelper r2 = r10.collapsingTextHelper
            android.animation.TimeInterpolator r3 = android.support.design.animation.AnimationUtils.LINEAR_INTERPOLATOR
            r2.setTextSizeInterpolator(r3)
            android.support.design.widget.CollapsingTextHelper r2 = r10.collapsingTextHelper
            android.animation.TimeInterpolator r3 = android.support.design.animation.AnimationUtils.LINEAR_INTERPOLATOR
            r2.setPositionInterpolator(r3)
            android.support.design.widget.CollapsingTextHelper r2 = r10.collapsingTextHelper
            r3 = 8388659(0x800033, float:1.1755015E-38)
            r2.setCollapsedTextGravity(r3)
            int[] r6 = android.support.design.R.styleable.TextInputLayout
            int r8 = android.support.design.R.style.Widget_Design_TextInputLayout
            int[] r9 = new int[r1]
            r4 = r11
            r5 = r12
            r7 = r13
            android.support.v7.widget.TintTypedArray r12 = android.support.design.internal.ThemeEnforcement.obtainTintedStyledAttributes(r4, r5, r6, r7, r8, r9)
            int r13 = android.support.design.R.styleable.TextInputLayout_hintEnabled
            boolean r13 = r12.getBoolean(r13, r0)
            r10.hintEnabled = r13
            int r13 = android.support.design.R.styleable.TextInputLayout_android_hint
            java.lang.CharSequence r13 = r12.getText(r13)
            r10.setHint(r13)
            int r13 = android.support.design.R.styleable.TextInputLayout_hintAnimationEnabled
            boolean r13 = r12.getBoolean(r13, r0)
            r10.hintAnimationEnabled = r13
            android.content.res.Resources r13 = r11.getResources()
            int r2 = android.support.design.R.dimen.mtrl_textinput_box_bottom_offset
            int r13 = r13.getDimensionPixelOffset(r2)
            r10.boxBottomOffsetPx = r13
            android.content.res.Resources r13 = r11.getResources()
            int r2 = android.support.design.R.dimen.mtrl_textinput_box_label_cutout_padding
            int r13 = r13.getDimensionPixelOffset(r2)
            r10.boxLabelCutoutPaddingPx = r13
            int r13 = android.support.design.R.styleable.TextInputLayout_boxCollapsedPaddingTop
            int r13 = r12.getDimensionPixelOffset(r13, r1)
            r10.boxCollapsedPaddingTopPx = r13
            int r13 = android.support.design.R.styleable.TextInputLayout_boxCornerRadiusTopStart
            r2 = 0
            float r13 = r12.getDimension(r13, r2)
            r10.boxCornerRadiusTopStart = r13
            int r13 = android.support.design.R.styleable.TextInputLayout_boxCornerRadiusTopEnd
            float r13 = r12.getDimension(r13, r2)
            r10.boxCornerRadiusTopEnd = r13
            int r13 = android.support.design.R.styleable.TextInputLayout_boxCornerRadiusBottomEnd
            float r13 = r12.getDimension(r13, r2)
            r10.boxCornerRadiusBottomEnd = r13
            int r13 = android.support.design.R.styleable.TextInputLayout_boxCornerRadiusBottomStart
            float r13 = r12.getDimension(r13, r2)
            r10.boxCornerRadiusBottomStart = r13
            int r13 = android.support.design.R.styleable.TextInputLayout_boxBackgroundColor
            int r13 = r12.getColor(r13, r1)
            r10.boxBackgroundColor = r13
            int r13 = android.support.design.R.styleable.TextInputLayout_boxStrokeColor
            int r13 = r12.getColor(r13, r1)
            r10.focusedStrokeColor = r13
            android.content.res.Resources r13 = r11.getResources()
            int r2 = android.support.design.R.dimen.mtrl_textinput_box_stroke_width_default
            int r13 = r13.getDimensionPixelSize(r2)
            r10.boxStrokeWidthDefaultPx = r13
            android.content.res.Resources r13 = r11.getResources()
            int r2 = android.support.design.R.dimen.mtrl_textinput_box_stroke_width_focused
            int r13 = r13.getDimensionPixelSize(r2)
            r10.boxStrokeWidthFocusedPx = r13
            int r13 = r10.boxStrokeWidthDefaultPx
            r10.boxStrokeWidthPx = r13
            int r13 = android.support.design.R.styleable.TextInputLayout_boxBackgroundMode
            int r13 = r12.getInt(r13, r1)
            r10.setBoxBackgroundMode(r13)
            int r13 = android.support.design.R.styleable.TextInputLayout_android_textColorHint
            boolean r13 = r12.hasValue(r13)
            if (r13 == 0) goto Lfd
            int r13 = android.support.design.R.styleable.TextInputLayout_android_textColorHint
            android.content.res.ColorStateList r13 = r12.getColorStateList(r13)
            r10.focusedTextColor = r13
            r10.defaultHintTextColor = r13
        Lfd:
            int r13 = android.support.design.R.color.mtrl_textinput_default_box_stroke_color
            int r13 = android.support.v4.content.ContextCompat.getColor(r11, r13)
            r10.defaultStrokeColor = r13
            int r13 = android.support.design.R.color.mtrl_textinput_disabled_color
            int r13 = android.support.v4.content.ContextCompat.getColor(r11, r13)
            r10.disabledColor = r13
            int r13 = android.support.design.R.color.mtrl_textinput_hovered_box_stroke_color
            int r11 = android.support.v4.content.ContextCompat.getColor(r11, r13)
            r10.hoveredStrokeColor = r11
            int r11 = android.support.design.R.styleable.TextInputLayout_hintTextAppearance
            r13 = -1
            int r11 = r12.getResourceId(r11, r13)
            if (r11 == r13) goto L127
            int r11 = android.support.design.R.styleable.TextInputLayout_hintTextAppearance
            int r11 = r12.getResourceId(r11, r1)
            r10.setHintTextAppearance(r11)
        L127:
            int r11 = android.support.design.R.styleable.TextInputLayout_errorTextAppearance
            int r11 = r12.getResourceId(r11, r1)
            int r2 = android.support.design.R.styleable.TextInputLayout_errorEnabled
            boolean r2 = r12.getBoolean(r2, r1)
            int r3 = android.support.design.R.styleable.TextInputLayout_helperTextTextAppearance
            int r3 = r12.getResourceId(r3, r1)
            int r4 = android.support.design.R.styleable.TextInputLayout_helperTextEnabled
            boolean r4 = r12.getBoolean(r4, r1)
            int r5 = android.support.design.R.styleable.TextInputLayout_helperText
            java.lang.CharSequence r5 = r12.getText(r5)
            int r6 = android.support.design.R.styleable.TextInputLayout_counterEnabled
            boolean r6 = r12.getBoolean(r6, r1)
            int r7 = android.support.design.R.styleable.TextInputLayout_counterMaxLength
            int r7 = r12.getInt(r7, r13)
            r10.setCounterMaxLength(r7)
            int r7 = android.support.design.R.styleable.TextInputLayout_counterTextAppearance
            int r7 = r12.getResourceId(r7, r1)
            r10.counterTextAppearance = r7
            int r7 = android.support.design.R.styleable.TextInputLayout_counterOverflowTextAppearance
            int r7 = r12.getResourceId(r7, r1)
            r10.counterOverflowTextAppearance = r7
            int r7 = android.support.design.R.styleable.TextInputLayout_passwordToggleEnabled
            boolean r1 = r12.getBoolean(r7, r1)
            r10.passwordToggleEnabled = r1
            int r1 = android.support.design.R.styleable.TextInputLayout_passwordToggleDrawable
            android.graphics.drawable.Drawable r1 = r12.getDrawable(r1)
            r10.passwordToggleDrawable = r1
            int r1 = android.support.design.R.styleable.TextInputLayout_passwordToggleContentDescription
            java.lang.CharSequence r1 = r12.getText(r1)
            r10.passwordToggleContentDesc = r1
            int r1 = android.support.design.R.styleable.TextInputLayout_passwordToggleTint
            boolean r1 = r12.hasValue(r1)
            if (r1 == 0) goto L18e
            r10.hasPasswordToggleTintList = r0
            int r1 = android.support.design.R.styleable.TextInputLayout_passwordToggleTint
            android.content.res.ColorStateList r1 = r12.getColorStateList(r1)
            r10.passwordToggleTintList = r1
        L18e:
            int r1 = android.support.design.R.styleable.TextInputLayout_passwordToggleTintMode
            boolean r1 = r12.hasValue(r1)
            if (r1 == 0) goto L1a5
            r10.hasPasswordToggleTintMode = r0
            int r0 = android.support.design.R.styleable.TextInputLayout_passwordToggleTintMode
            int r13 = r12.getInt(r0, r13)
            r0 = 0
            android.graphics.PorterDuff$Mode r13 = android.support.design.internal.ViewUtils.parseTintMode(r13, r0)
            r10.passwordToggleTintMode = r13
        L1a5:
            r12.recycle()
            r10.setHelperTextEnabled(r4)
            r10.setHelperText(r5)
            r10.setHelperTextTextAppearance(r3)
            r10.setErrorEnabled(r2)
            r10.setErrorTextAppearance(r11)
            r10.setCounterEnabled(r6)
            r10.applyPasswordToggleTint()
            r11 = 2
            android.support.v4.view.ViewCompat.setImportantForAccessibility(r10, r11)
            return
    }

    static boolean access$000(android.support.design.widget.TextInputLayout r0) {
            boolean r0 = r0.restoringSavedState
            return r0
    }

    private void applyBoxAttributes() {
            r3 = this;
            android.graphics.drawable.GradientDrawable r0 = r3.boxBackground
            if (r0 != 0) goto L5
            return
        L5:
            r3.setBoxAttributes()
            android.widget.EditText r0 = r3.editText
            if (r0 == 0) goto L25
            int r1 = r3.boxBackgroundMode
            r2 = 2
            if (r1 != r2) goto L25
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            if (r0 == 0) goto L1f
            android.widget.EditText r0 = r3.editText
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            r3.editTextOriginalDrawable = r0
        L1f:
            android.widget.EditText r0 = r3.editText
            r1 = 0
            android.support.v4.view.ViewCompat.setBackground(r0, r1)
        L25:
            android.widget.EditText r0 = r3.editText
            if (r0 == 0) goto L35
            int r1 = r3.boxBackgroundMode
            r2 = 1
            if (r1 != r2) goto L35
            android.graphics.drawable.Drawable r1 = r3.editTextOriginalDrawable
            if (r1 == 0) goto L35
            android.support.v4.view.ViewCompat.setBackground(r0, r1)
        L35:
            int r0 = r3.boxStrokeWidthPx
            r1 = -1
            if (r0 <= r1) goto L43
            int r1 = r3.boxStrokeColor
            if (r1 == 0) goto L43
            android.graphics.drawable.GradientDrawable r2 = r3.boxBackground
            r2.setStroke(r0, r1)
        L43:
            android.graphics.drawable.GradientDrawable r0 = r3.boxBackground
            float[] r1 = r3.getCornerRadiiAsArray()
            r0.setCornerRadii(r1)
            android.graphics.drawable.GradientDrawable r0 = r3.boxBackground
            int r1 = r3.boxBackgroundColor
            r0.setColor(r1)
            r3.invalidate()
            return
    }

    private void applyCutoutPadding(android.graphics.RectF r3) {
            r2 = this;
            float r0 = r3.left
            int r1 = r2.boxLabelCutoutPaddingPx
            float r1 = (float) r1
            float r0 = r0 - r1
            r3.left = r0
            float r0 = r3.top
            int r1 = r2.boxLabelCutoutPaddingPx
            float r1 = (float) r1
            float r0 = r0 - r1
            r3.top = r0
            float r0 = r3.right
            int r1 = r2.boxLabelCutoutPaddingPx
            float r1 = (float) r1
            float r0 = r0 + r1
            r3.right = r0
            float r0 = r3.bottom
            int r1 = r2.boxLabelCutoutPaddingPx
            float r1 = (float) r1
            float r0 = r0 + r1
            r3.bottom = r0
            return
    }

    private void applyPasswordToggleTint() {
            r2 = this;
            android.graphics.drawable.Drawable r0 = r2.passwordToggleDrawable
            if (r0 == 0) goto L3d
            boolean r0 = r2.hasPasswordToggleTintList
            if (r0 != 0) goto Lc
            boolean r0 = r2.hasPasswordToggleTintMode
            if (r0 == 0) goto L3d
        Lc:
            android.graphics.drawable.Drawable r0 = r2.passwordToggleDrawable
            android.graphics.drawable.Drawable r0 = android.support.v4.graphics.drawable.DrawableCompat.wrap(r0)
            android.graphics.drawable.Drawable r0 = r0.mutate()
            r2.passwordToggleDrawable = r0
            boolean r1 = r2.hasPasswordToggleTintList
            if (r1 == 0) goto L21
            android.content.res.ColorStateList r1 = r2.passwordToggleTintList
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r1)
        L21:
            boolean r0 = r2.hasPasswordToggleTintMode
            if (r0 == 0) goto L2c
            android.graphics.drawable.Drawable r0 = r2.passwordToggleDrawable
            android.graphics.PorterDuff$Mode r1 = r2.passwordToggleTintMode
            android.support.v4.graphics.drawable.DrawableCompat.setTintMode(r0, r1)
        L2c:
            android.support.design.widget.CheckableImageButton r0 = r2.passwordToggleView
            if (r0 == 0) goto L3d
            android.graphics.drawable.Drawable r0 = r0.getDrawable()
            android.graphics.drawable.Drawable r1 = r2.passwordToggleDrawable
            if (r0 == r1) goto L3d
            android.support.design.widget.CheckableImageButton r0 = r2.passwordToggleView
            r0.setImageDrawable(r1)
        L3d:
            return
    }

    private void assignBoxBackgroundByMode() {
            r2 = this;
            int r0 = r2.boxBackgroundMode
            if (r0 != 0) goto L8
            r0 = 0
            r2.boxBackground = r0
            goto L2a
        L8:
            r1 = 2
            if (r0 != r1) goto L1d
            boolean r0 = r2.hintEnabled
            if (r0 == 0) goto L1d
            android.graphics.drawable.GradientDrawable r0 = r2.boxBackground
            boolean r0 = r0 instanceof android.support.design.widget.CutoutDrawable
            if (r0 != 0) goto L1d
            android.support.design.widget.CutoutDrawable r0 = new android.support.design.widget.CutoutDrawable
            r0.<init>()
            r2.boxBackground = r0
            goto L2a
        L1d:
            android.graphics.drawable.GradientDrawable r0 = r2.boxBackground
            boolean r0 = r0 instanceof android.graphics.drawable.GradientDrawable
            if (r0 != 0) goto L2a
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            r2.boxBackground = r0
        L2a:
            return
    }

    private int calculateBoxBackgroundTop() {
            r4 = this;
            android.widget.EditText r0 = r4.editText
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            int r2 = r4.boxBackgroundMode
            r3 = 1
            if (r2 == r3) goto L19
            r3 = 2
            if (r2 == r3) goto Lf
            return r1
        Lf:
            int r0 = r0.getTop()
            int r1 = r4.calculateLabelMarginTop()
            int r0 = r0 + r1
            return r0
        L19:
            int r0 = r0.getTop()
            return r0
    }

    private int calculateCollapsedTextTopBounds() {
            r2 = this;
            int r0 = r2.boxBackgroundMode
            r1 = 1
            if (r0 == r1) goto L1d
            r1 = 2
            if (r0 == r1) goto Ld
            int r0 = r2.getPaddingTop()
            return r0
        Ld:
            android.graphics.drawable.Drawable r0 = r2.getBoxBackground()
            android.graphics.Rect r0 = r0.getBounds()
            int r0 = r0.top
            int r1 = r2.calculateLabelMarginTop()
            int r0 = r0 - r1
            return r0
        L1d:
            android.graphics.drawable.Drawable r0 = r2.getBoxBackground()
            android.graphics.Rect r0 = r0.getBounds()
            int r0 = r0.top
            int r1 = r2.boxCollapsedPaddingTopPx
            int r0 = r0 + r1
            return r0
    }

    private int calculateLabelMarginTop() {
            r3 = this;
            boolean r0 = r3.hintEnabled
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            int r0 = r3.boxBackgroundMode
            if (r0 == 0) goto L1c
            r2 = 1
            if (r0 == r2) goto L1c
            r2 = 2
            if (r0 == r2) goto L11
            return r1
        L11:
            android.support.design.widget.CollapsingTextHelper r0 = r3.collapsingTextHelper
            float r0 = r0.getCollapsedTextHeight()
            r1 = 1073741824(0x40000000, float:2.0)
            float r0 = r0 / r1
        L1a:
            int r0 = (int) r0
            return r0
        L1c:
            android.support.design.widget.CollapsingTextHelper r0 = r3.collapsingTextHelper
            float r0 = r0.getCollapsedTextHeight()
            goto L1a
    }

    private void closeCutout() {
            r1 = this;
            boolean r0 = r1.cutoutEnabled()
            if (r0 == 0) goto Ld
            android.graphics.drawable.GradientDrawable r0 = r1.boxBackground
            android.support.design.widget.CutoutDrawable r0 = (android.support.design.widget.CutoutDrawable) r0
            r0.removeCutout()
        Ld:
            return
    }

    private void collapseHint(boolean r2) {
            r1 = this;
            android.animation.ValueAnimator r0 = r1.animator
            if (r0 == 0) goto Lf
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto Lf
            android.animation.ValueAnimator r0 = r1.animator
            r0.cancel()
        Lf:
            r0 = 1065353216(0x3f800000, float:1.0)
            if (r2 == 0) goto L1b
            boolean r2 = r1.hintAnimationEnabled
            if (r2 == 0) goto L1b
            r1.animateToExpansionFraction(r0)
            goto L20
        L1b:
            android.support.design.widget.CollapsingTextHelper r2 = r1.collapsingTextHelper
            r2.setExpansionFraction(r0)
        L20:
            r2 = 0
            r1.hintExpanded = r2
            boolean r2 = r1.cutoutEnabled()
            if (r2 == 0) goto L2c
            r1.openCutout()
        L2c:
            return
    }

    private boolean cutoutEnabled() {
            r1 = this;
            boolean r0 = r1.hintEnabled
            if (r0 == 0) goto L14
            java.lang.CharSequence r0 = r1.hint
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L14
            android.graphics.drawable.GradientDrawable r0 = r1.boxBackground
            boolean r0 = r0 instanceof android.support.design.widget.CutoutDrawable
            if (r0 == 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }

    private void ensureBackgroundDrawableStateWorkaround() {
            r3 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 == r1) goto Lb
            r1 = 22
            if (r0 == r1) goto Lb
            return
        Lb:
            android.widget.EditText r0 = r3.editText
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            if (r0 != 0) goto L14
            return
        L14:
            boolean r1 = r3.hasReconstructedEditTextBackground
            if (r1 != 0) goto L3f
            android.graphics.drawable.Drawable$ConstantState r1 = r0.getConstantState()
            android.graphics.drawable.Drawable r1 = r1.newDrawable()
            boolean r2 = r0 instanceof android.graphics.drawable.DrawableContainer
            if (r2 == 0) goto L30
            android.graphics.drawable.DrawableContainer r0 = (android.graphics.drawable.DrawableContainer) r0
            android.graphics.drawable.Drawable$ConstantState r2 = r1.getConstantState()
            boolean r0 = android.support.design.widget.DrawableUtils.setContainerConstantState(r0, r2)
            r3.hasReconstructedEditTextBackground = r0
        L30:
            boolean r0 = r3.hasReconstructedEditTextBackground
            if (r0 != 0) goto L3f
            android.widget.EditText r0 = r3.editText
            android.support.v4.view.ViewCompat.setBackground(r0, r1)
            r0 = 1
            r3.hasReconstructedEditTextBackground = r0
            r3.onApplyBoxBackgroundMode()
        L3f:
            return
    }

    private void expandHint(boolean r2) {
            r1 = this;
            android.animation.ValueAnimator r0 = r1.animator
            if (r0 == 0) goto Lf
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto Lf
            android.animation.ValueAnimator r0 = r1.animator
            r0.cancel()
        Lf:
            r0 = 0
            if (r2 == 0) goto L1a
            boolean r2 = r1.hintAnimationEnabled
            if (r2 == 0) goto L1a
            r1.animateToExpansionFraction(r0)
            goto L1f
        L1a:
            android.support.design.widget.CollapsingTextHelper r2 = r1.collapsingTextHelper
            r2.setExpansionFraction(r0)
        L1f:
            boolean r2 = r1.cutoutEnabled()
            if (r2 == 0) goto L32
            android.graphics.drawable.GradientDrawable r2 = r1.boxBackground
            android.support.design.widget.CutoutDrawable r2 = (android.support.design.widget.CutoutDrawable) r2
            boolean r2 = r2.hasCutout()
            if (r2 == 0) goto L32
            r1.closeCutout()
        L32:
            r2 = 1
            r1.hintExpanded = r2
            return
    }

    private android.graphics.drawable.Drawable getBoxBackground() {
            r2 = this;
            int r0 = r2.boxBackgroundMode
            r1 = 1
            if (r0 == r1) goto Lf
            r1 = 2
            if (r0 != r1) goto L9
            goto Lf
        L9:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>()
            throw r0
        Lf:
            android.graphics.drawable.GradientDrawable r0 = r2.boxBackground
            return r0
    }

    private float[] getCornerRadiiAsArray() {
            r10 = this;
            boolean r0 = android.support.design.internal.ViewUtils.isLayoutRtl(r10)
            r1 = 7
            r2 = 6
            r3 = 5
            r4 = 4
            r5 = 3
            r6 = 2
            r7 = 1
            r8 = 0
            r9 = 8
            if (r0 != 0) goto L2b
            float[] r0 = new float[r9]
            float r9 = r10.boxCornerRadiusTopStart
            r0[r8] = r9
            r0[r7] = r9
            float r7 = r10.boxCornerRadiusTopEnd
            r0[r6] = r7
            r0[r5] = r7
            float r5 = r10.boxCornerRadiusBottomEnd
            r0[r4] = r5
            r0[r3] = r5
            float r3 = r10.boxCornerRadiusBottomStart
            r0[r2] = r3
            r0[r1] = r3
            return r0
        L2b:
            float[] r0 = new float[r9]
            float r9 = r10.boxCornerRadiusTopEnd
            r0[r8] = r9
            r0[r7] = r9
            float r7 = r10.boxCornerRadiusTopStart
            r0[r6] = r7
            r0[r5] = r7
            float r5 = r10.boxCornerRadiusBottomStart
            r0[r4] = r5
            r0[r3] = r5
            float r3 = r10.boxCornerRadiusBottomEnd
            r0[r2] = r3
            r0[r1] = r3
            return r0
    }

    private boolean hasPasswordTransformation() {
            r1 = this;
            android.widget.EditText r0 = r1.editText
            if (r0 == 0) goto Le
            android.text.method.TransformationMethod r0 = r0.getTransformationMethod()
            boolean r0 = r0 instanceof android.text.method.PasswordTransformationMethod
            if (r0 == 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    private void onApplyBoxBackgroundMode() {
            r1 = this;
            r1.assignBoxBackgroundByMode()
            int r0 = r1.boxBackgroundMode
            if (r0 == 0) goto La
            r1.updateInputLayoutMargins()
        La:
            r1.updateTextInputBoxBounds()
            return
    }

    private void openCutout() {
            r2 = this;
            boolean r0 = r2.cutoutEnabled()
            if (r0 != 0) goto L7
            return
        L7:
            android.graphics.RectF r0 = r2.tmpRectF
            android.support.design.widget.CollapsingTextHelper r1 = r2.collapsingTextHelper
            r1.getCollapsedTextActualBounds(r0)
            r2.applyCutoutPadding(r0)
            android.graphics.drawable.GradientDrawable r1 = r2.boxBackground
            android.support.design.widget.CutoutDrawable r1 = (android.support.design.widget.CutoutDrawable) r1
            r1.setCutout(r0)
            return
    }

    private static void recursiveSetEnabled(android.view.ViewGroup r4, boolean r5) {
            int r0 = r4.getChildCount()
            r1 = 0
        L5:
            if (r1 >= r0) goto L1a
            android.view.View r2 = r4.getChildAt(r1)
            r2.setEnabled(r5)
            boolean r3 = r2 instanceof android.view.ViewGroup
            if (r3 == 0) goto L17
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            recursiveSetEnabled(r2, r5)
        L17:
            int r1 = r1 + 1
            goto L5
        L1a:
            return
    }

    private void setBoxAttributes() {
            r3 = this;
            int r0 = r3.boxBackgroundMode
            r1 = 1
            if (r0 == r1) goto L20
            r1 = 2
            if (r0 == r1) goto L9
            goto L23
        L9:
            int r0 = r3.focusedStrokeColor
            if (r0 != 0) goto L23
            android.content.res.ColorStateList r0 = r3.focusedTextColor
            int[] r1 = r3.getDrawableState()
            android.content.res.ColorStateList r2 = r3.focusedTextColor
            int r2 = r2.getDefaultColor()
            int r0 = r0.getColorForState(r1, r2)
            r3.focusedStrokeColor = r0
            goto L23
        L20:
            r0 = 0
            r3.boxStrokeWidthPx = r0
        L23:
            return
    }

    private void setEditText(android.widget.EditText r3) {
            r2 = this;
            android.widget.EditText r0 = r2.editText
            if (r0 != 0) goto La0
            boolean r0 = r3 instanceof android.support.design.widget.TextInputEditText
            if (r0 != 0) goto Lf
            java.lang.String r0 = "TextInputLayout"
            java.lang.String r1 = "EditText added is not a TextInputEditText. Please switch to using that class instead."
            android.util.Log.i(r0, r1)
        Lf:
            r2.editText = r3
            r2.onApplyBoxBackgroundMode()
            android.support.design.widget.TextInputLayout$AccessibilityDelegate r3 = new android.support.design.widget.TextInputLayout$AccessibilityDelegate
            r3.<init>(r2)
            r2.setTextInputAccessibilityDelegate(r3)
            boolean r3 = r2.hasPasswordTransformation()
            if (r3 != 0) goto L2d
            android.support.design.widget.CollapsingTextHelper r3 = r2.collapsingTextHelper
            android.widget.EditText r0 = r2.editText
            android.graphics.Typeface r0 = r0.getTypeface()
            r3.setTypefaces(r0)
        L2d:
            android.support.design.widget.CollapsingTextHelper r3 = r2.collapsingTextHelper
            android.widget.EditText r0 = r2.editText
            float r0 = r0.getTextSize()
            r3.setExpandedTextSize(r0)
            android.widget.EditText r3 = r2.editText
            int r3 = r3.getGravity()
            android.support.design.widget.CollapsingTextHelper r0 = r2.collapsingTextHelper
            r1 = r3 & (-113(0xffffffffffffff8f, float:NaN))
            r1 = r1 | 48
            r0.setCollapsedTextGravity(r1)
            android.support.design.widget.CollapsingTextHelper r0 = r2.collapsingTextHelper
            r0.setExpandedTextGravity(r3)
            android.widget.EditText r3 = r2.editText
            android.support.design.widget.TextInputLayout$1 r0 = new android.support.design.widget.TextInputLayout$1
            r0.<init>(r2)
            r3.addTextChangedListener(r0)
            android.content.res.ColorStateList r3 = r2.defaultHintTextColor
            if (r3 != 0) goto L62
            android.widget.EditText r3 = r2.editText
            android.content.res.ColorStateList r3 = r3.getHintTextColors()
            r2.defaultHintTextColor = r3
        L62:
            boolean r3 = r2.hintEnabled
            r0 = 1
            if (r3 == 0) goto L82
            java.lang.CharSequence r3 = r2.hint
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L80
            android.widget.EditText r3 = r2.editText
            java.lang.CharSequence r3 = r3.getHint()
            r2.originalHint = r3
            r2.setHint(r3)
            android.widget.EditText r3 = r2.editText
            r1 = 0
            r3.setHint(r1)
        L80:
            r2.isProvidingHint = r0
        L82:
            android.widget.TextView r3 = r2.counterView
            if (r3 == 0) goto L93
            android.widget.EditText r3 = r2.editText
            android.text.Editable r3 = r3.getText()
            int r3 = r3.length()
            r2.updateCounter(r3)
        L93:
            android.support.design.widget.IndicatorViewController r3 = r2.indicatorViewController
            r3.adjustIndicatorPadding()
            r2.updatePasswordToggleView()
            r3 = 0
            r2.updateLabelState(r3, r0)
            return
        La0:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "We already have an EditText, can only have one"
            r3.<init>(r0)
            throw r3
    }

    private void setHintInternal(java.lang.CharSequence r2) {
            r1 = this;
            java.lang.CharSequence r0 = r1.hint
            boolean r0 = android.text.TextUtils.equals(r2, r0)
            if (r0 != 0) goto L16
            r1.hint = r2
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            r0.setText(r2)
            boolean r2 = r1.hintExpanded
            if (r2 != 0) goto L16
            r1.openCutout()
        L16:
            return
    }

    private boolean shouldShowPasswordIcon() {
            r1 = this;
            boolean r0 = r1.passwordToggleEnabled
            if (r0 == 0) goto L10
            boolean r0 = r1.hasPasswordTransformation()
            if (r0 != 0) goto Le
            boolean r0 = r1.passwordToggledVisible
            if (r0 == 0) goto L10
        Le:
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    private void updateEditTextBackgroundBounds() {
            r5 = this;
            android.widget.EditText r0 = r5.editText
            if (r0 != 0) goto L5
            return
        L5:
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            if (r0 != 0) goto Lc
            return
        Lc:
            boolean r1 = android.support.v7.widget.DrawableUtils.canSafelyMutateDrawable(r0)
            if (r1 == 0) goto L16
            android.graphics.drawable.Drawable r0 = r0.mutate()
        L16:
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            android.widget.EditText r2 = r5.editText
            android.support.design.widget.DescendantOffsetUtils.getDescendantRect(r5, r2, r1)
            android.graphics.Rect r1 = r0.getBounds()
            int r2 = r1.left
            int r3 = r1.right
            if (r2 == r3) goto L49
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r0.getPadding(r2)
            int r3 = r1.left
            int r4 = r2.left
            int r3 = r3 - r4
            int r4 = r1.right
            int r2 = r2.right
            int r2 = r2 * 2
            int r4 = r4 + r2
            int r1 = r1.top
            android.widget.EditText r2 = r5.editText
            int r2 = r2.getBottom()
            r0.setBounds(r3, r1, r4, r2)
        L49:
            return
    }

    private void updateInputLayoutMargins() {
            r3 = this;
            android.widget.FrameLayout r0 = r3.inputFrame
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.widget.LinearLayout$LayoutParams r0 = (android.widget.LinearLayout.LayoutParams) r0
            int r1 = r3.calculateLabelMarginTop()
            int r2 = r0.topMargin
            if (r1 == r2) goto L17
            r0.topMargin = r1
            android.widget.FrameLayout r0 = r3.inputFrame
            r0.requestLayout()
        L17:
            return
    }

    private void updateLabelState(boolean r7, boolean r8) {
            r6 = this;
            boolean r0 = r6.isEnabled()
            android.widget.EditText r1 = r6.editText
            r2 = 1
            r3 = 0
            if (r1 == 0) goto L16
            android.text.Editable r1 = r1.getText()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L16
            r1 = r2
            goto L17
        L16:
            r1 = r3
        L17:
            android.widget.EditText r4 = r6.editText
            if (r4 == 0) goto L22
            boolean r4 = r4.hasFocus()
            if (r4 == 0) goto L22
            goto L23
        L22:
            r2 = r3
        L23:
            android.support.design.widget.IndicatorViewController r3 = r6.indicatorViewController
            boolean r3 = r3.errorShouldBeShown()
            android.content.res.ColorStateList r4 = r6.defaultHintTextColor
            if (r4 == 0) goto L39
            android.support.design.widget.CollapsingTextHelper r5 = r6.collapsingTextHelper
            r5.setCollapsedTextColor(r4)
            android.support.design.widget.CollapsingTextHelper r4 = r6.collapsingTextHelper
            android.content.res.ColorStateList r5 = r6.defaultHintTextColor
            r4.setExpandedTextColor(r5)
        L39:
            if (r0 != 0) goto L52
            android.support.design.widget.CollapsingTextHelper r0 = r6.collapsingTextHelper
            int r4 = r6.disabledColor
            android.content.res.ColorStateList r4 = android.content.res.ColorStateList.valueOf(r4)
            r0.setCollapsedTextColor(r4)
            android.support.design.widget.CollapsingTextHelper r0 = r6.collapsingTextHelper
            int r4 = r6.disabledColor
            android.content.res.ColorStateList r4 = android.content.res.ColorStateList.valueOf(r4)
            r0.setExpandedTextColor(r4)
            goto L7d
        L52:
            if (r3 == 0) goto L60
            android.support.design.widget.CollapsingTextHelper r0 = r6.collapsingTextHelper
            android.support.design.widget.IndicatorViewController r4 = r6.indicatorViewController
            android.content.res.ColorStateList r4 = r4.getErrorViewTextColors()
            r0.setCollapsedTextColor(r4)
            goto L7d
        L60:
            boolean r0 = r6.counterOverflowed
            if (r0 == 0) goto L72
            android.widget.TextView r0 = r6.counterView
            if (r0 == 0) goto L72
            android.support.design.widget.CollapsingTextHelper r4 = r6.collapsingTextHelper
            android.content.res.ColorStateList r0 = r0.getTextColors()
            r4.setCollapsedTextColor(r0)
            goto L7d
        L72:
            if (r2 == 0) goto L7d
            android.content.res.ColorStateList r0 = r6.focusedTextColor
            if (r0 == 0) goto L7d
            android.support.design.widget.CollapsingTextHelper r4 = r6.collapsingTextHelper
            r4.setCollapsedTextColor(r0)
        L7d:
            if (r1 != 0) goto L94
            boolean r0 = r6.isEnabled()
            if (r0 == 0) goto L8a
            if (r2 != 0) goto L94
            if (r3 == 0) goto L8a
            goto L94
        L8a:
            if (r8 != 0) goto L90
            boolean r8 = r6.hintExpanded
            if (r8 != 0) goto L9d
        L90:
            r6.expandHint(r7)
            goto L9d
        L94:
            if (r8 != 0) goto L9a
            boolean r8 = r6.hintExpanded
            if (r8 == 0) goto L9d
        L9a:
            r6.collapseHint(r7)
        L9d:
            return
    }

    private void updatePasswordToggleView() {
            r7 = this;
            android.widget.EditText r0 = r7.editText
            if (r0 != 0) goto L5
            return
        L5:
            boolean r0 = r7.shouldShowPasswordIcon()
            r1 = 3
            r2 = 1
            r3 = 2
            r4 = 0
            if (r0 == 0) goto Lb6
            android.support.design.widget.CheckableImageButton r0 = r7.passwordToggleView
            if (r0 != 0) goto L44
            android.content.Context r0 = r7.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            int r5 = android.support.design.R.layout.design_text_input_password_icon
            android.widget.FrameLayout r6 = r7.inputFrame
            android.view.View r0 = r0.inflate(r5, r6, r4)
            android.support.design.widget.CheckableImageButton r0 = (android.support.design.widget.CheckableImageButton) r0
            r7.passwordToggleView = r0
            android.graphics.drawable.Drawable r5 = r7.passwordToggleDrawable
            r0.setImageDrawable(r5)
            android.support.design.widget.CheckableImageButton r0 = r7.passwordToggleView
            java.lang.CharSequence r5 = r7.passwordToggleContentDesc
            r0.setContentDescription(r5)
            android.widget.FrameLayout r0 = r7.inputFrame
            android.support.design.widget.CheckableImageButton r5 = r7.passwordToggleView
            r0.addView(r5)
            android.support.design.widget.CheckableImageButton r0 = r7.passwordToggleView
            android.support.design.widget.TextInputLayout$2 r5 = new android.support.design.widget.TextInputLayout$2
            r5.<init>(r7)
            r0.setOnClickListener(r5)
        L44:
            android.widget.EditText r0 = r7.editText
            if (r0 == 0) goto L59
            int r0 = android.support.v4.view.ViewCompat.getMinimumHeight(r0)
            if (r0 > 0) goto L59
            android.widget.EditText r0 = r7.editText
            android.support.design.widget.CheckableImageButton r5 = r7.passwordToggleView
            int r5 = android.support.v4.view.ViewCompat.getMinimumHeight(r5)
            r0.setMinimumHeight(r5)
        L59:
            android.support.design.widget.CheckableImageButton r0 = r7.passwordToggleView
            r0.setVisibility(r4)
            android.support.design.widget.CheckableImageButton r0 = r7.passwordToggleView
            boolean r5 = r7.passwordToggledVisible
            r0.setChecked(r5)
            android.graphics.drawable.Drawable r0 = r7.passwordToggleDummyDrawable
            if (r0 != 0) goto L70
            android.graphics.drawable.ColorDrawable r0 = new android.graphics.drawable.ColorDrawable
            r0.<init>()
            r7.passwordToggleDummyDrawable = r0
        L70:
            android.graphics.drawable.Drawable r0 = r7.passwordToggleDummyDrawable
            android.support.design.widget.CheckableImageButton r5 = r7.passwordToggleView
            int r5 = r5.getMeasuredWidth()
            r0.setBounds(r4, r4, r5, r2)
            android.widget.EditText r0 = r7.editText
            android.graphics.drawable.Drawable[] r0 = android.support.v4.widget.TextViewCompat.getCompoundDrawablesRelative(r0)
            r5 = r0[r3]
            android.graphics.drawable.Drawable r6 = r7.passwordToggleDummyDrawable
            if (r5 == r6) goto L8b
            r3 = r0[r3]
            r7.originalEditTextEndDrawable = r3
        L8b:
            android.widget.EditText r3 = r7.editText
            r4 = r0[r4]
            r2 = r0[r2]
            android.graphics.drawable.Drawable r5 = r7.passwordToggleDummyDrawable
            r0 = r0[r1]
            android.support.v4.widget.TextViewCompat.setCompoundDrawablesRelative(r3, r4, r2, r5, r0)
            android.support.design.widget.CheckableImageButton r0 = r7.passwordToggleView
            android.widget.EditText r1 = r7.editText
            int r1 = r1.getPaddingLeft()
            android.widget.EditText r2 = r7.editText
            int r2 = r2.getPaddingTop()
            android.widget.EditText r3 = r7.editText
            int r3 = r3.getPaddingRight()
            android.widget.EditText r4 = r7.editText
            int r4 = r4.getPaddingBottom()
            r0.setPadding(r1, r2, r3, r4)
            goto Le7
        Lb6:
            android.support.design.widget.CheckableImageButton r0 = r7.passwordToggleView
            if (r0 == 0) goto Lc7
            int r0 = r0.getVisibility()
            if (r0 != 0) goto Lc7
            android.support.design.widget.CheckableImageButton r0 = r7.passwordToggleView
            r5 = 8
            r0.setVisibility(r5)
        Lc7:
            android.graphics.drawable.Drawable r0 = r7.passwordToggleDummyDrawable
            if (r0 == 0) goto Le7
            android.widget.EditText r0 = r7.editText
            android.graphics.drawable.Drawable[] r0 = android.support.v4.widget.TextViewCompat.getCompoundDrawablesRelative(r0)
            r3 = r0[r3]
            android.graphics.drawable.Drawable r5 = r7.passwordToggleDummyDrawable
            if (r3 != r5) goto Le7
            android.widget.EditText r3 = r7.editText
            r4 = r0[r4]
            r2 = r0[r2]
            android.graphics.drawable.Drawable r5 = r7.originalEditTextEndDrawable
            r0 = r0[r1]
            android.support.v4.widget.TextViewCompat.setCompoundDrawablesRelative(r3, r4, r2, r5, r0)
            r0 = 0
            r7.passwordToggleDummyDrawable = r0
        Le7:
            return
    }

    private void updateTextInputBoxBounds() {
            r7 = this;
            int r0 = r7.boxBackgroundMode
            if (r0 == 0) goto L49
            android.graphics.drawable.GradientDrawable r0 = r7.boxBackground
            if (r0 == 0) goto L49
            android.widget.EditText r0 = r7.editText
            if (r0 == 0) goto L49
            int r0 = r7.getRight()
            if (r0 != 0) goto L13
            goto L49
        L13:
            android.widget.EditText r0 = r7.editText
            int r0 = r0.getLeft()
            int r1 = r7.calculateBoxBackgroundTop()
            android.widget.EditText r2 = r7.editText
            int r2 = r2.getRight()
            android.widget.EditText r3 = r7.editText
            int r3 = r3.getBottom()
            int r4 = r7.boxBottomOffsetPx
            int r3 = r3 + r4
            int r4 = r7.boxBackgroundMode
            r5 = 2
            if (r4 != r5) goto L3e
            int r4 = r7.boxStrokeWidthFocusedPx
            int r6 = r4 / 2
            int r0 = r0 + r6
            int r6 = r4 / 2
            int r1 = r1 - r6
            int r6 = r4 / 2
            int r2 = r2 - r6
            int r4 = r4 / r5
            int r3 = r3 + r4
        L3e:
            android.graphics.drawable.GradientDrawable r4 = r7.boxBackground
            r4.setBounds(r0, r1, r2, r3)
            r7.applyBoxAttributes()
            r7.updateEditTextBackgroundBounds()
        L49:
            return
    }

    @Override
    public void addView(android.view.View r2, int r3, android.view.ViewGroup.LayoutParams r4) {
            r1 = this;
            boolean r0 = r2 instanceof android.widget.EditText
            if (r0 == 0) goto L24
            android.widget.FrameLayout$LayoutParams r3 = new android.widget.FrameLayout$LayoutParams
            r3.<init>(r4)
            int r0 = r3.gravity
            r0 = r0 & (-113(0xffffffffffffff8f, float:NaN))
            r0 = r0 | 16
            r3.gravity = r0
            android.widget.FrameLayout r0 = r1.inputFrame
            r0.addView(r2, r3)
            android.widget.FrameLayout r3 = r1.inputFrame
            r3.setLayoutParams(r4)
            r1.updateInputLayoutMargins()
            android.widget.EditText r2 = (android.widget.EditText) r2
            r1.setEditText(r2)
            goto L27
        L24:
            super.addView(r2, r3, r4)
        L27:
            return
    }

    void animateToExpansionFraction(float r5) {
            r4 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r4.collapsingTextHelper
            float r0 = r0.getExpansionFraction()
            int r0 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r0 != 0) goto Lb
            return
        Lb:
            android.animation.ValueAnimator r0 = r4.animator
            if (r0 != 0) goto L2c
            android.animation.ValueAnimator r0 = new android.animation.ValueAnimator
            r0.<init>()
            r4.animator = r0
            android.animation.TimeInterpolator r1 = android.support.design.animation.AnimationUtils.FAST_OUT_SLOW_IN_INTERPOLATOR
            r0.setInterpolator(r1)
            android.animation.ValueAnimator r0 = r4.animator
            r1 = 167(0xa7, double:8.25E-322)
            r0.setDuration(r1)
            android.animation.ValueAnimator r0 = r4.animator
            android.support.design.widget.TextInputLayout$3 r1 = new android.support.design.widget.TextInputLayout$3
            r1.<init>(r4)
            r0.addUpdateListener(r1)
        L2c:
            android.animation.ValueAnimator r0 = r4.animator
            r1 = 2
            float[] r1 = new float[r1]
            r2 = 0
            android.support.design.widget.CollapsingTextHelper r3 = r4.collapsingTextHelper
            float r3 = r3.getExpansionFraction()
            r1[r2] = r3
            r2 = 1
            r1[r2] = r5
            r0.setFloatValues(r1)
            android.animation.ValueAnimator r5 = r4.animator
            r5.start()
            return
    }

    boolean cutoutIsOpen() {
            r1 = this;
            boolean r0 = r1.cutoutEnabled()
            if (r0 == 0) goto L12
            android.graphics.drawable.GradientDrawable r0 = r1.boxBackground
            android.support.design.widget.CutoutDrawable r0 = (android.support.design.widget.CutoutDrawable) r0
            boolean r0 = r0.hasCutout()
            if (r0 == 0) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            return r0
    }

    @Override
    public void dispatchProvideAutofillStructure(android.view.ViewStructure r5, int r6) {
            r4 = this;
            java.lang.CharSequence r0 = r4.originalHint
            if (r0 == 0) goto L2d
            android.widget.EditText r0 = r4.editText
            if (r0 != 0) goto L9
            goto L2d
        L9:
            boolean r1 = r4.isProvidingHint
            r2 = 0
            r4.isProvidingHint = r2
            java.lang.CharSequence r0 = r0.getHint()
            android.widget.EditText r2 = r4.editText
            java.lang.CharSequence r3 = r4.originalHint
            r2.setHint(r3)
            super.dispatchProvideAutofillStructure(r5, r6)     // Catch: java.lang.Throwable -> L24
            android.widget.EditText r5 = r4.editText
            r5.setHint(r0)
            r4.isProvidingHint = r1
            return
        L24:
            r5 = move-exception
            android.widget.EditText r6 = r4.editText
            r6.setHint(r0)
            r4.isProvidingHint = r1
            throw r5
        L2d:
            super.dispatchProvideAutofillStructure(r5, r6)
            return
    }

    @Override
    protected void dispatchRestoreInstanceState(android.util.SparseArray<android.os.Parcelable> r2) {
            r1 = this;
            r0 = 1
            r1.restoringSavedState = r0
            super.dispatchRestoreInstanceState(r2)
            r2 = 0
            r1.restoringSavedState = r2
            return
    }

    @Override
    public void draw(android.graphics.Canvas r2) {
            r1 = this;
            android.graphics.drawable.GradientDrawable r0 = r1.boxBackground
            if (r0 == 0) goto L7
            r0.draw(r2)
        L7:
            super.draw(r2)
            boolean r0 = r1.hintEnabled
            if (r0 == 0) goto L13
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            r0.draw(r2)
        L13:
            return
    }

    @Override
    protected void drawableStateChanged() {
            r4 = this;
            boolean r0 = r4.inDrawableStateChanged
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r4.inDrawableStateChanged = r0
            super.drawableStateChanged()
            int[] r1 = r4.getDrawableState()
            boolean r2 = android.support.v4.view.ViewCompat.isLaidOut(r4)
            r3 = 0
            if (r2 == 0) goto L1d
            boolean r2 = r4.isEnabled()
            if (r2 == 0) goto L1d
            goto L1e
        L1d:
            r0 = r3
        L1e:
            r4.updateLabelState(r0)
            r4.updateEditTextBackground()
            r4.updateTextInputBoxBounds()
            r4.updateTextInputBoxState()
            android.support.design.widget.CollapsingTextHelper r0 = r4.collapsingTextHelper
            if (r0 == 0) goto L34
            boolean r0 = r0.setState(r1)
            r0 = r0 | r3
            goto L35
        L34:
            r0 = r3
        L35:
            if (r0 == 0) goto L3a
            r4.invalidate()
        L3a:
            r4.inDrawableStateChanged = r3
            return
    }

    public int getBoxBackgroundColor() {
            r1 = this;
            int r0 = r1.boxBackgroundColor
            return r0
    }

    public float getBoxCornerRadiusBottomEnd() {
            r1 = this;
            float r0 = r1.boxCornerRadiusBottomEnd
            return r0
    }

    public float getBoxCornerRadiusBottomStart() {
            r1 = this;
            float r0 = r1.boxCornerRadiusBottomStart
            return r0
    }

    public float getBoxCornerRadiusTopEnd() {
            r1 = this;
            float r0 = r1.boxCornerRadiusTopEnd
            return r0
    }

    public float getBoxCornerRadiusTopStart() {
            r1 = this;
            float r0 = r1.boxCornerRadiusTopStart
            return r0
    }

    public int getBoxStrokeColor() {
            r1 = this;
            int r0 = r1.focusedStrokeColor
            return r0
    }

    public int getCounterMaxLength() {
            r1 = this;
            int r0 = r1.counterMaxLength
            return r0
    }

    java.lang.CharSequence getCounterOverflowDescription() {
            r1 = this;
            boolean r0 = r1.counterEnabled
            if (r0 == 0) goto L11
            boolean r0 = r1.counterOverflowed
            if (r0 == 0) goto L11
            android.widget.TextView r0 = r1.counterView
            if (r0 == 0) goto L11
            java.lang.CharSequence r0 = r0.getContentDescription()
            return r0
        L11:
            r0 = 0
            return r0
    }

    public android.content.res.ColorStateList getDefaultHintTextColor() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.defaultHintTextColor
            return r0
    }

    public android.widget.EditText getEditText() {
            r1 = this;
            android.widget.EditText r0 = r1.editText
            return r0
    }

    public java.lang.CharSequence getError() {
            r1 = this;
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            boolean r0 = r0.isErrorEnabled()
            if (r0 == 0) goto Lf
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            java.lang.CharSequence r0 = r0.getErrorText()
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }

    public int getErrorCurrentTextColors() {
            r1 = this;
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            int r0 = r0.getErrorViewCurrentTextColor()
            return r0
    }

    final int getErrorTextCurrentColor() {
            r1 = this;
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            int r0 = r0.getErrorViewCurrentTextColor()
            return r0
    }

    public java.lang.CharSequence getHelperText() {
            r1 = this;
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            boolean r0 = r0.isHelperTextEnabled()
            if (r0 == 0) goto Lf
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            java.lang.CharSequence r0 = r0.getHelperText()
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }

    public int getHelperTextCurrentTextColor() {
            r1 = this;
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            int r0 = r0.getHelperTextViewCurrentTextColor()
            return r0
    }

    public java.lang.CharSequence getHint() {
            r1 = this;
            boolean r0 = r1.hintEnabled
            if (r0 == 0) goto L7
            java.lang.CharSequence r0 = r1.hint
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    final float getHintCollapsedTextHeight() {
            r1 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            float r0 = r0.getCollapsedTextHeight()
            return r0
    }

    final int getHintCurrentCollapsedTextColor() {
            r1 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            int r0 = r0.getCurrentCollapsedTextColor()
            return r0
    }

    public java.lang.CharSequence getPasswordVisibilityToggleContentDescription() {
            r1 = this;
            java.lang.CharSequence r0 = r1.passwordToggleContentDesc
            return r0
    }

    public android.graphics.drawable.Drawable getPasswordVisibilityToggleDrawable() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.passwordToggleDrawable
            return r0
    }

    public android.graphics.Typeface getTypeface() {
            r1 = this;
            android.graphics.Typeface r0 = r1.typeface
            return r0
    }

    public boolean isCounterEnabled() {
            r1 = this;
            boolean r0 = r1.counterEnabled
            return r0
    }

    public boolean isErrorEnabled() {
            r1 = this;
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            boolean r0 = r0.isErrorEnabled()
            return r0
    }

    final boolean isHelperTextDisplayed() {
            r1 = this;
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            boolean r0 = r0.helperTextIsDisplayed()
            return r0
    }

    public boolean isHelperTextEnabled() {
            r1 = this;
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            boolean r0 = r0.isHelperTextEnabled()
            return r0
    }

    public boolean isHintAnimationEnabled() {
            r1 = this;
            boolean r0 = r1.hintAnimationEnabled
            return r0
    }

    public boolean isHintEnabled() {
            r1 = this;
            boolean r0 = r1.hintEnabled
            return r0
    }

    final boolean isHintExpanded() {
            r1 = this;
            boolean r0 = r1.hintExpanded
            return r0
    }

    public boolean isPasswordVisibilityToggleEnabled() {
            r1 = this;
            boolean r0 = r1.passwordToggleEnabled
            return r0
    }

    boolean isProvidingHint() {
            r1 = this;
            boolean r0 = r1.isProvidingHint
            return r0
    }

    @Override
    protected void onLayout(boolean r5, int r6, int r7, int r8, int r9) {
            r4 = this;
            super.onLayout(r5, r6, r7, r8, r9)
            android.graphics.drawable.GradientDrawable r5 = r4.boxBackground
            if (r5 == 0) goto La
            r4.updateTextInputBoxBounds()
        La:
            boolean r5 = r4.hintEnabled
            if (r5 == 0) goto L61
            android.widget.EditText r5 = r4.editText
            if (r5 == 0) goto L61
            android.graphics.Rect r6 = r4.tmpRect
            android.support.design.widget.DescendantOffsetUtils.getDescendantRect(r4, r5, r6)
            int r5 = r6.left
            android.widget.EditText r8 = r4.editText
            int r8 = r8.getCompoundPaddingLeft()
            int r5 = r5 + r8
            int r8 = r6.right
            android.widget.EditText r0 = r4.editText
            int r0 = r0.getCompoundPaddingRight()
            int r8 = r8 - r0
            int r0 = r4.calculateCollapsedTextTopBounds()
            android.support.design.widget.CollapsingTextHelper r1 = r4.collapsingTextHelper
            int r2 = r6.top
            android.widget.EditText r3 = r4.editText
            int r3 = r3.getCompoundPaddingTop()
            int r2 = r2 + r3
            int r6 = r6.bottom
            android.widget.EditText r3 = r4.editText
            int r3 = r3.getCompoundPaddingBottom()
            int r6 = r6 - r3
            r1.setExpandedBounds(r5, r2, r8, r6)
            android.support.design.widget.CollapsingTextHelper r6 = r4.collapsingTextHelper
            int r9 = r9 - r7
            int r7 = r4.getPaddingBottom()
            int r9 = r9 - r7
            r6.setCollapsedBounds(r5, r0, r8, r9)
            android.support.design.widget.CollapsingTextHelper r5 = r4.collapsingTextHelper
            r5.recalculate()
            boolean r5 = r4.cutoutEnabled()
            if (r5 == 0) goto L61
            boolean r5 = r4.hintExpanded
            if (r5 != 0) goto L61
            r4.openCutout()
        L61:
            return
    }

    @Override
    protected void onMeasure(int r1, int r2) {
            r0 = this;
            r0.updatePasswordToggleView()
            super.onMeasure(r1, r2)
            return
    }

    @Override
    protected void onRestoreInstanceState(android.os.Parcelable r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.support.design.widget.TextInputLayout.SavedState
            if (r0 != 0) goto L8
            super.onRestoreInstanceState(r2)
            return
        L8:
            android.support.design.widget.TextInputLayout$SavedState r2 = (android.support.design.widget.TextInputLayout.SavedState) r2
            android.os.Parcelable r0 = r2.getSuperState()
            super.onRestoreInstanceState(r0)
            java.lang.CharSequence r0 = r2.error
            r1.setError(r0)
            boolean r2 = r2.isPasswordToggledVisible
            if (r2 == 0) goto L1e
            r2 = 1
            r1.passwordVisibilityToggleRequested(r2)
        L1e:
            r1.requestLayout()
            return
    }

    @Override
    public android.os.Parcelable onSaveInstanceState() {
            r2 = this;
            android.os.Parcelable r0 = super.onSaveInstanceState()
            android.support.design.widget.TextInputLayout$SavedState r1 = new android.support.design.widget.TextInputLayout$SavedState
            r1.<init>(r0)
            android.support.design.widget.IndicatorViewController r0 = r2.indicatorViewController
            boolean r0 = r0.errorShouldBeShown()
            if (r0 == 0) goto L17
            java.lang.CharSequence r0 = r2.getError()
            r1.error = r0
        L17:
            boolean r0 = r2.passwordToggledVisible
            r1.isPasswordToggledVisible = r0
            return r1
    }

    public void passwordVisibilityToggleRequested(boolean r4) {
            r3 = this;
            boolean r0 = r3.passwordToggleEnabled
            if (r0 == 0) goto L39
            android.widget.EditText r0 = r3.editText
            int r0 = r0.getSelectionEnd()
            boolean r1 = r3.hasPasswordTransformation()
            if (r1 == 0) goto L1a
            android.widget.EditText r1 = r3.editText
            r2 = 0
            r1.setTransformationMethod(r2)
            r1 = 1
            r3.passwordToggledVisible = r1
            goto L26
        L1a:
            android.widget.EditText r1 = r3.editText
            android.text.method.PasswordTransformationMethod r2 = android.text.method.PasswordTransformationMethod.getInstance()
            r1.setTransformationMethod(r2)
            r1 = 0
            r3.passwordToggledVisible = r1
        L26:
            android.support.design.widget.CheckableImageButton r1 = r3.passwordToggleView
            boolean r2 = r3.passwordToggledVisible
            r1.setChecked(r2)
            if (r4 == 0) goto L34
            android.support.design.widget.CheckableImageButton r4 = r3.passwordToggleView
            r4.jumpDrawablesToCurrentState()
        L34:
            android.widget.EditText r4 = r3.editText
            r4.setSelection(r0)
        L39:
            return
    }

    public void setBoxBackgroundColor(int r2) {
            r1 = this;
            int r0 = r1.boxBackgroundColor
            if (r0 == r2) goto L9
            r1.boxBackgroundColor = r2
            r1.applyBoxAttributes()
        L9:
            return
    }

    public void setBoxBackgroundColorResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            int r2 = android.support.v4.content.ContextCompat.getColor(r0, r2)
            r1.setBoxBackgroundColor(r2)
            return
    }

    public void setBoxBackgroundMode(int r2) {
            r1 = this;
            int r0 = r1.boxBackgroundMode
            if (r2 != r0) goto L5
            return
        L5:
            r1.boxBackgroundMode = r2
            r1.onApplyBoxBackgroundMode()
            return
    }

    public void setBoxCornerRadii(float r2, float r3, float r4, float r5) {
            r1 = this;
            float r0 = r1.boxCornerRadiusTopStart
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L18
            float r0 = r1.boxCornerRadiusTopEnd
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 != 0) goto L18
            float r0 = r1.boxCornerRadiusBottomEnd
            int r0 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r0 != 0) goto L18
            float r0 = r1.boxCornerRadiusBottomStart
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L23
        L18:
            r1.boxCornerRadiusTopStart = r2
            r1.boxCornerRadiusTopEnd = r3
            r1.boxCornerRadiusBottomEnd = r5
            r1.boxCornerRadiusBottomStart = r4
            r1.applyBoxAttributes()
        L23:
            return
    }

    public void setBoxCornerRadiiResources(int r2, int r3, int r4, int r5) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            android.content.res.Resources r0 = r0.getResources()
            float r2 = r0.getDimension(r2)
            android.content.Context r0 = r1.getContext()
            android.content.res.Resources r0 = r0.getResources()
            float r3 = r0.getDimension(r3)
            android.content.Context r0 = r1.getContext()
            android.content.res.Resources r0 = r0.getResources()
            float r4 = r0.getDimension(r4)
            android.content.Context r0 = r1.getContext()
            android.content.res.Resources r0 = r0.getResources()
            float r5 = r0.getDimension(r5)
            r1.setBoxCornerRadii(r2, r3, r4, r5)
            return
    }

    public void setBoxStrokeColor(int r2) {
            r1 = this;
            int r0 = r1.focusedStrokeColor
            if (r0 == r2) goto L9
            r1.focusedStrokeColor = r2
            r1.updateTextInputBoxState()
        L9:
            return
    }

    public void setCounterEnabled(boolean r4) {
            r3 = this;
            boolean r0 = r3.counterEnabled
            if (r0 == r4) goto L55
            r0 = 2
            if (r4 == 0) goto L49
            android.support.v7.widget.AppCompatTextView r1 = new android.support.v7.widget.AppCompatTextView
            android.content.Context r2 = r3.getContext()
            r1.<init>(r2)
            r3.counterView = r1
            int r2 = android.support.design.R.id.textinput_counter
            r1.setId(r2)
            android.graphics.Typeface r1 = r3.typeface
            if (r1 == 0) goto L20
            android.widget.TextView r2 = r3.counterView
            r2.setTypeface(r1)
        L20:
            android.widget.TextView r1 = r3.counterView
            r2 = 1
            r1.setMaxLines(r2)
            android.widget.TextView r1 = r3.counterView
            int r2 = r3.counterTextAppearance
            r3.setTextAppearanceCompatWithErrorFallback(r1, r2)
            android.support.design.widget.IndicatorViewController r1 = r3.indicatorViewController
            android.widget.TextView r2 = r3.counterView
            r1.addIndicator(r2, r0)
            android.widget.EditText r0 = r3.editText
            if (r0 != 0) goto L3d
            r0 = 0
            r3.updateCounter(r0)
            goto L53
        L3d:
            android.text.Editable r0 = r0.getText()
            int r0 = r0.length()
            r3.updateCounter(r0)
            goto L53
        L49:
            android.support.design.widget.IndicatorViewController r1 = r3.indicatorViewController
            android.widget.TextView r2 = r3.counterView
            r1.removeIndicator(r2, r0)
            r0 = 0
            r3.counterView = r0
        L53:
            r3.counterEnabled = r4
        L55:
            return
    }

    public void setCounterMaxLength(int r2) {
            r1 = this;
            int r0 = r1.counterMaxLength
            if (r0 == r2) goto L21
            if (r2 <= 0) goto L9
            r1.counterMaxLength = r2
            goto Lc
        L9:
            r2 = -1
            r1.counterMaxLength = r2
        Lc:
            boolean r2 = r1.counterEnabled
            if (r2 == 0) goto L21
            android.widget.EditText r2 = r1.editText
            if (r2 != 0) goto L16
            r2 = 0
            goto L1e
        L16:
            android.text.Editable r2 = r2.getText()
            int r2 = r2.length()
        L1e:
            r1.updateCounter(r2)
        L21:
            return
    }

    public void setDefaultHintTextColor(android.content.res.ColorStateList r1) {
            r0 = this;
            r0.defaultHintTextColor = r1
            r0.focusedTextColor = r1
            android.widget.EditText r1 = r0.editText
            if (r1 == 0) goto Lc
            r1 = 0
            r0.updateLabelState(r1)
        Lc:
            return
    }

    @Override
    public void setEnabled(boolean r1) {
            r0 = this;
            recursiveSetEnabled(r0, r1)
            super.setEnabled(r1)
            return
    }

    public void setError(java.lang.CharSequence r2) {
            r1 = this;
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            boolean r0 = r0.isErrorEnabled()
            if (r0 != 0) goto L13
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lf
            return
        Lf:
            r0 = 1
            r1.setErrorEnabled(r0)
        L13:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1f
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            r0.showError(r2)
            goto L24
        L1f:
            android.support.design.widget.IndicatorViewController r2 = r1.indicatorViewController
            r2.hideError()
        L24:
            return
    }

    public void setErrorEnabled(boolean r2) {
            r1 = this;
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            r0.setErrorEnabled(r2)
            return
    }

    public void setErrorTextAppearance(int r2) {
            r1 = this;
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            r0.setErrorTextAppearance(r2)
            return
    }

    public void setErrorTextColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            r0.setErrorViewTextColor(r2)
            return
    }

    public void setHelperText(java.lang.CharSequence r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L11
            boolean r2 = r1.isHelperTextEnabled()
            if (r2 == 0) goto L20
            r2 = 0
            r1.setHelperTextEnabled(r2)
            goto L20
        L11:
            boolean r0 = r1.isHelperTextEnabled()
            if (r0 != 0) goto L1b
            r0 = 1
            r1.setHelperTextEnabled(r0)
        L1b:
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            r0.showHelper(r2)
        L20:
            return
    }

    public void setHelperTextColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            r0.setHelperTextViewTextColor(r2)
            return
    }

    public void setHelperTextEnabled(boolean r2) {
            r1 = this;
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            r0.setHelperTextEnabled(r2)
            return
    }

    public void setHelperTextTextAppearance(int r2) {
            r1 = this;
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            r0.setHelperTextAppearance(r2)
            return
    }

    public void setHint(java.lang.CharSequence r2) {
            r1 = this;
            boolean r0 = r1.hintEnabled
            if (r0 == 0) goto Lc
            r1.setHintInternal(r2)
            r2 = 2048(0x800, float:2.87E-42)
            r1.sendAccessibilityEvent(r2)
        Lc:
            return
    }

    public void setHintAnimationEnabled(boolean r1) {
            r0 = this;
            r0.hintAnimationEnabled = r1
            return
    }

    public void setHintEnabled(boolean r3) {
            r2 = this;
            boolean r0 = r2.hintEnabled
            if (r3 == r0) goto L51
            r2.hintEnabled = r3
            r0 = 0
            if (r3 != 0) goto L2b
            r3 = 0
            r2.isProvidingHint = r3
            java.lang.CharSequence r3 = r2.hint
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L27
            android.widget.EditText r3 = r2.editText
            java.lang.CharSequence r3 = r3.getHint()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L27
            android.widget.EditText r3 = r2.editText
            java.lang.CharSequence r1 = r2.hint
            r3.setHint(r1)
        L27:
            r2.setHintInternal(r0)
            goto L4a
        L2b:
            android.widget.EditText r3 = r2.editText
            java.lang.CharSequence r3 = r3.getHint()
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L47
            java.lang.CharSequence r1 = r2.hint
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L42
            r2.setHint(r3)
        L42:
            android.widget.EditText r3 = r2.editText
            r3.setHint(r0)
        L47:
            r3 = 1
            r2.isProvidingHint = r3
        L4a:
            android.widget.EditText r3 = r2.editText
            if (r3 == 0) goto L51
            r2.updateInputLayoutMargins()
        L51:
            return
    }

    public void setHintTextAppearance(int r2) {
            r1 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            r0.setCollapsedTextAppearance(r2)
            android.support.design.widget.CollapsingTextHelper r2 = r1.collapsingTextHelper
            android.content.res.ColorStateList r2 = r2.getCollapsedTextColor()
            r1.focusedTextColor = r2
            android.widget.EditText r2 = r1.editText
            if (r2 == 0) goto L18
            r2 = 0
            r1.updateLabelState(r2)
            r1.updateInputLayoutMargins()
        L18:
            return
    }

    public void setPasswordVisibilityToggleContentDescription(int r2) {
            r1 = this;
            if (r2 == 0) goto Lb
            android.content.res.Resources r0 = r1.getResources()
            java.lang.CharSequence r2 = r0.getText(r2)
            goto Lc
        Lb:
            r2 = 0
        Lc:
            r1.setPasswordVisibilityToggleContentDescription(r2)
            return
    }

    public void setPasswordVisibilityToggleContentDescription(java.lang.CharSequence r2) {
            r1 = this;
            r1.passwordToggleContentDesc = r2
            android.support.design.widget.CheckableImageButton r0 = r1.passwordToggleView
            if (r0 == 0) goto L9
            r0.setContentDescription(r2)
        L9:
            return
    }

    public void setPasswordVisibilityToggleDrawable(int r2) {
            r1 = this;
            if (r2 == 0) goto Lb
            android.content.Context r0 = r1.getContext()
            android.graphics.drawable.Drawable r2 = android.support.v7.content.res.AppCompatResources.getDrawable(r0, r2)
            goto Lc
        Lb:
            r2 = 0
        Lc:
            r1.setPasswordVisibilityToggleDrawable(r2)
            return
    }

    public void setPasswordVisibilityToggleDrawable(android.graphics.drawable.Drawable r2) {
            r1 = this;
            r1.passwordToggleDrawable = r2
            android.support.design.widget.CheckableImageButton r0 = r1.passwordToggleView
            if (r0 == 0) goto L9
            r0.setImageDrawable(r2)
        L9:
            return
    }

    public void setPasswordVisibilityToggleEnabled(boolean r2) {
            r1 = this;
            boolean r0 = r1.passwordToggleEnabled
            if (r0 == r2) goto L1d
            r1.passwordToggleEnabled = r2
            if (r2 != 0) goto L17
            boolean r2 = r1.passwordToggledVisible
            if (r2 == 0) goto L17
            android.widget.EditText r2 = r1.editText
            if (r2 == 0) goto L17
            android.text.method.PasswordTransformationMethod r0 = android.text.method.PasswordTransformationMethod.getInstance()
            r2.setTransformationMethod(r0)
        L17:
            r2 = 0
            r1.passwordToggledVisible = r2
            r1.updatePasswordToggleView()
        L1d:
            return
    }

    public void setPasswordVisibilityToggleTintList(android.content.res.ColorStateList r1) {
            r0 = this;
            r0.passwordToggleTintList = r1
            r1 = 1
            r0.hasPasswordToggleTintList = r1
            r0.applyPasswordToggleTint()
            return
    }

    public void setPasswordVisibilityToggleTintMode(android.graphics.PorterDuff.Mode r1) {
            r0 = this;
            r0.passwordToggleTintMode = r1
            r1 = 1
            r0.hasPasswordToggleTintMode = r1
            r0.applyPasswordToggleTint()
            return
    }

    void setTextAppearanceCompatWithErrorFallback(android.widget.TextView r3, int r4) {
            r2 = this;
            r0 = 1
            android.support.v4.widget.TextViewCompat.setTextAppearance(r3, r4)     // Catch: java.lang.Exception -> L1a
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L1a
            r1 = 23
            if (r4 < r1) goto L18
            android.content.res.ColorStateList r4 = r3.getTextColors()     // Catch: java.lang.Exception -> L1a
            int r4 = r4.getDefaultColor()     // Catch: java.lang.Exception -> L1a
            r1 = -65281(0xffffffffffff00ff, float:NaN)
            if (r4 != r1) goto L18
            goto L1a
        L18:
            r4 = 0
            r0 = r4
        L1a:
            if (r0 == 0) goto L2e
            int r4 = android.support.design.R.style.TextAppearance_AppCompat_Caption
            android.support.v4.widget.TextViewCompat.setTextAppearance(r3, r4)
            android.content.Context r4 = r2.getContext()
            int r0 = android.support.design.R.color.design_error
            int r4 = android.support.v4.content.ContextCompat.getColor(r4, r0)
            r3.setTextColor(r4)
        L2e:
            return
    }

    public void setTextInputAccessibilityDelegate(android.support.design.widget.TextInputLayout.AccessibilityDelegate r2) {
            r1 = this;
            android.widget.EditText r0 = r1.editText
            if (r0 == 0) goto L7
            android.support.v4.view.ViewCompat.setAccessibilityDelegate(r0, r2)
        L7:
            return
    }

    public void setTypeface(android.graphics.Typeface r2) {
            r1 = this;
            android.graphics.Typeface r0 = r1.typeface
            if (r2 == r0) goto L17
            r1.typeface = r2
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            r0.setTypefaces(r2)
            android.support.design.widget.IndicatorViewController r0 = r1.indicatorViewController
            r0.setTypefaces(r2)
            android.widget.TextView r0 = r1.counterView
            if (r0 == 0) goto L17
            r0.setTypeface(r2)
        L17:
            return
    }

    void updateCounter(int r10) {
            r9 = this;
            boolean r0 = r9.counterOverflowed
            int r1 = r9.counterMaxLength
            r2 = 0
            r3 = -1
            if (r1 != r3) goto L1a
            android.widget.TextView r1 = r9.counterView
            java.lang.String r10 = java.lang.String.valueOf(r10)
            r1.setText(r10)
            android.widget.TextView r10 = r9.counterView
            r1 = 0
            r10.setContentDescription(r1)
            r9.counterOverflowed = r2
            goto L87
        L1a:
            android.widget.TextView r1 = r9.counterView
            int r1 = android.support.v4.view.ViewCompat.getAccessibilityLiveRegion(r1)
            r3 = 1
            if (r1 != r3) goto L28
            android.widget.TextView r1 = r9.counterView
            android.support.v4.view.ViewCompat.setAccessibilityLiveRegion(r1, r2)
        L28:
            int r1 = r9.counterMaxLength
            if (r10 <= r1) goto L2e
            r1 = r3
            goto L2f
        L2e:
            r1 = r2
        L2f:
            r9.counterOverflowed = r1
            if (r0 == r1) goto L48
            android.widget.TextView r4 = r9.counterView
            if (r1 == 0) goto L3a
            int r1 = r9.counterOverflowTextAppearance
            goto L3c
        L3a:
            int r1 = r9.counterTextAppearance
        L3c:
            r9.setTextAppearanceCompatWithErrorFallback(r4, r1)
            boolean r1 = r9.counterOverflowed
            if (r1 == 0) goto L48
            android.widget.TextView r1 = r9.counterView
            android.support.v4.view.ViewCompat.setAccessibilityLiveRegion(r1, r3)
        L48:
            android.widget.TextView r1 = r9.counterView
            android.content.Context r4 = r9.getContext()
            int r5 = android.support.design.R.string.character_counter_pattern
            r6 = 2
            java.lang.Object[] r7 = new java.lang.Object[r6]
            java.lang.Integer r8 = java.lang.Integer.valueOf(r10)
            r7[r2] = r8
            int r8 = r9.counterMaxLength
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            r7[r3] = r8
            java.lang.String r4 = r4.getString(r5, r7)
            r1.setText(r4)
            android.widget.TextView r1 = r9.counterView
            android.content.Context r4 = r9.getContext()
            int r5 = android.support.design.R.string.character_counter_content_description
            java.lang.Object[] r6 = new java.lang.Object[r6]
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)
            r6[r2] = r10
            int r10 = r9.counterMaxLength
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)
            r6[r3] = r10
            java.lang.String r10 = r4.getString(r5, r6)
            r1.setContentDescription(r10)
        L87:
            android.widget.EditText r10 = r9.editText
            if (r10 == 0) goto L98
            boolean r10 = r9.counterOverflowed
            if (r0 == r10) goto L98
            r9.updateLabelState(r2)
            r9.updateTextInputBoxState()
            r9.updateEditTextBackground()
        L98:
            return
    }

    void updateEditTextBackground() {
            r3 = this;
            android.widget.EditText r0 = r3.editText
            if (r0 != 0) goto L5
            return
        L5:
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            if (r0 != 0) goto Lc
            return
        Lc:
            r3.ensureBackgroundDrawableStateWorkaround()
            boolean r1 = android.support.v7.widget.DrawableUtils.canSafelyMutateDrawable(r0)
            if (r1 == 0) goto L19
            android.graphics.drawable.Drawable r0 = r0.mutate()
        L19:
            android.support.design.widget.IndicatorViewController r1 = r3.indicatorViewController
            boolean r1 = r1.errorShouldBeShown()
            if (r1 == 0) goto L31
            android.support.design.widget.IndicatorViewController r1 = r3.indicatorViewController
            int r1 = r1.getErrorViewCurrentTextColor()
            android.graphics.PorterDuff$Mode r2 = android.graphics.PorterDuff.Mode.SRC_IN
            android.graphics.PorterDuffColorFilter r1 = android.support.v7.widget.AppCompatDrawableManager.getPorterDuffColorFilter(r1, r2)
            r0.setColorFilter(r1)
            goto L4f
        L31:
            boolean r1 = r3.counterOverflowed
            if (r1 == 0) goto L47
            android.widget.TextView r1 = r3.counterView
            if (r1 == 0) goto L47
            int r1 = r1.getCurrentTextColor()
            android.graphics.PorterDuff$Mode r2 = android.graphics.PorterDuff.Mode.SRC_IN
            android.graphics.PorterDuffColorFilter r1 = android.support.v7.widget.AppCompatDrawableManager.getPorterDuffColorFilter(r1, r2)
            r0.setColorFilter(r1)
            goto L4f
        L47:
            android.support.v4.graphics.drawable.DrawableCompat.clearColorFilter(r0)
            android.widget.EditText r0 = r3.editText
            r0.refreshDrawableState()
        L4f:
            return
    }

    void updateLabelState(boolean r2) {
            r1 = this;
            r0 = 0
            r1.updateLabelState(r2, r0)
            return
    }

    void updateTextInputBoxState() {
            r4 = this;
            android.graphics.drawable.GradientDrawable r0 = r4.boxBackground
            if (r0 == 0) goto L7d
            int r0 = r4.boxBackgroundMode
            if (r0 != 0) goto La
            goto L7d
        La:
            android.widget.EditText r0 = r4.editText
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L18
            boolean r0 = r0.hasFocus()
            if (r0 == 0) goto L18
            r0 = r1
            goto L19
        L18:
            r0 = r2
        L19:
            android.widget.EditText r3 = r4.editText
            if (r3 == 0) goto L24
            boolean r3 = r3.isHovered()
            if (r3 == 0) goto L24
            goto L25
        L24:
            r1 = r2
        L25:
            int r2 = r4.boxBackgroundMode
            r3 = 2
            if (r2 != r3) goto L7d
            boolean r2 = r4.isEnabled()
            if (r2 != 0) goto L35
            int r2 = r4.disabledColor
            r4.boxStrokeColor = r2
            goto L67
        L35:
            android.support.design.widget.IndicatorViewController r2 = r4.indicatorViewController
            boolean r2 = r2.errorShouldBeShown()
            if (r2 == 0) goto L46
            android.support.design.widget.IndicatorViewController r2 = r4.indicatorViewController
            int r2 = r2.getErrorViewCurrentTextColor()
            r4.boxStrokeColor = r2
            goto L67
        L46:
            boolean r2 = r4.counterOverflowed
            if (r2 == 0) goto L55
            android.widget.TextView r2 = r4.counterView
            if (r2 == 0) goto L55
            int r2 = r2.getCurrentTextColor()
            r4.boxStrokeColor = r2
            goto L67
        L55:
            if (r0 == 0) goto L5c
            int r2 = r4.focusedStrokeColor
            r4.boxStrokeColor = r2
            goto L67
        L5c:
            if (r1 == 0) goto L63
            int r2 = r4.hoveredStrokeColor
            r4.boxStrokeColor = r2
            goto L67
        L63:
            int r2 = r4.defaultStrokeColor
            r4.boxStrokeColor = r2
        L67:
            if (r1 != 0) goto L6b
            if (r0 == 0) goto L76
        L6b:
            boolean r0 = r4.isEnabled()
            if (r0 == 0) goto L76
            int r0 = r4.boxStrokeWidthFocusedPx
            r4.boxStrokeWidthPx = r0
            goto L7a
        L76:
            int r0 = r4.boxStrokeWidthDefaultPx
            r4.boxStrokeWidthPx = r0
        L7a:
            r4.applyBoxAttributes()
        L7d:
            return
    }
}
