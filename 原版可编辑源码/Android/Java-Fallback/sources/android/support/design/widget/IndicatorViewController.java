package android.support.design.widget;

final class IndicatorViewController {
    private static final int CAPTION_OPACITY_FADE_ANIMATION_DURATION = 167;
    private static final int CAPTION_STATE_ERROR = 1;
    private static final int CAPTION_STATE_HELPER_TEXT = 2;
    private static final int CAPTION_STATE_NONE = 0;
    private static final int CAPTION_TRANSLATE_Y_ANIMATION_DURATION = 217;
    static final int COUNTER_INDEX = 2;
    static final int ERROR_INDEX = 0;
    static final int HELPER_INDEX = 1;
    private android.animation.Animator captionAnimator;
    private android.widget.FrameLayout captionArea;
    private int captionDisplayed;
    private int captionToShow;
    private final float captionTranslationYPx;
    private int captionViewsAdded;
    private final android.content.Context context;
    private boolean errorEnabled;
    private java.lang.CharSequence errorText;
    private int errorTextAppearance;
    private android.widget.TextView errorView;
    private java.lang.CharSequence helperText;
    private boolean helperTextEnabled;
    private int helperTextTextAppearance;
    private android.widget.TextView helperTextView;
    private android.widget.LinearLayout indicatorArea;
    private int indicatorsAdded;
    private final android.support.design.widget.TextInputLayout textInputView;
    private android.graphics.Typeface typeface;


    public IndicatorViewController(android.support.design.widget.TextInputLayout r2) {
            r1 = this;
            r1.<init>()
            android.content.Context r0 = r2.getContext()
            r1.context = r0
            r1.textInputView = r2
            android.content.res.Resources r2 = r0.getResources()
            int r0 = android.support.design.R.dimen.design_textinput_caption_translate_y
            int r2 = r2.getDimensionPixelSize(r0)
            float r2 = (float) r2
            r1.captionTranslationYPx = r2
            return
    }

    static int access$002(android.support.design.widget.IndicatorViewController r0, int r1) {
            r0.captionDisplayed = r1
            return r1
    }

    static android.animation.Animator access$102(android.support.design.widget.IndicatorViewController r0, android.animation.Animator r1) {
            r0.captionAnimator = r1
            return r1
    }

    static android.widget.TextView access$200(android.support.design.widget.IndicatorViewController r0) {
            android.widget.TextView r0 = r0.errorView
            return r0
    }

    private boolean canAdjustIndicatorPadding() {
            r1 = this;
            android.widget.LinearLayout r0 = r1.indicatorArea
            if (r0 == 0) goto Le
            android.support.design.widget.TextInputLayout r0 = r1.textInputView
            android.widget.EditText r0 = r0.getEditText()
            if (r0 == 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    private void createCaptionAnimators(java.util.List<android.animation.Animator> r1, boolean r2, android.widget.TextView r3, int r4, int r5, int r6) {
            r0 = this;
            if (r3 == 0) goto L1e
            if (r2 != 0) goto L5
            goto L1e
        L5:
            if (r4 == r6) goto L9
            if (r4 != r5) goto L1e
        L9:
            if (r6 != r4) goto Ld
            r2 = 1
            goto Le
        Ld:
            r2 = 0
        Le:
            android.animation.ObjectAnimator r2 = r0.createCaptionOpacityAnimator(r3, r2)
            r1.add(r2)
            if (r6 != r4) goto L1e
            android.animation.ObjectAnimator r2 = r0.createCaptionTranslationYAnimator(r3)
            r1.add(r2)
        L1e:
            return
    }

    private android.animation.ObjectAnimator createCaptionOpacityAnimator(android.widget.TextView r4, boolean r5) {
            r3 = this;
            if (r5 == 0) goto L5
            r5 = 1065353216(0x3f800000, float:1.0)
            goto L6
        L5:
            r5 = 0
        L6:
            android.util.Property r0 = android.view.View.ALPHA
            r1 = 1
            float[] r1 = new float[r1]
            r2 = 0
            r1[r2] = r5
            android.animation.ObjectAnimator r4 = android.animation.ObjectAnimator.ofFloat(r4, r0, r1)
            r0 = 167(0xa7, double:8.25E-322)
            r4.setDuration(r0)
            android.animation.TimeInterpolator r5 = android.support.design.animation.AnimationUtils.LINEAR_INTERPOLATOR
            r4.setInterpolator(r5)
            return r4
    }

    private android.animation.ObjectAnimator createCaptionTranslationYAnimator(android.widget.TextView r5) {
            r4 = this;
            android.util.Property r0 = android.view.View.TRANSLATION_Y
            r1 = 2
            float[] r1 = new float[r1]
            float r2 = r4.captionTranslationYPx
            float r2 = -r2
            r3 = 0
            r1[r3] = r2
            r2 = 1
            r3 = 0
            r1[r2] = r3
            android.animation.ObjectAnimator r5 = android.animation.ObjectAnimator.ofFloat(r5, r0, r1)
            r0 = 217(0xd9, double:1.07E-321)
            r5.setDuration(r0)
            android.animation.TimeInterpolator r0 = android.support.design.animation.AnimationUtils.LINEAR_OUT_SLOW_IN_INTERPOLATOR
            r5.setInterpolator(r0)
            return r5
    }

    private android.widget.TextView getCaptionViewFromDisplayState(int r2) {
            r1 = this;
            r0 = 1
            if (r2 == r0) goto Lb
            r0 = 2
            if (r2 == r0) goto L8
            r2 = 0
            return r2
        L8:
            android.widget.TextView r2 = r1.helperTextView
            return r2
        Lb:
            android.widget.TextView r2 = r1.errorView
            return r2
    }

    private boolean isCaptionStateError(int r2) {
            r1 = this;
            r0 = 1
            if (r2 != r0) goto L10
            android.widget.TextView r2 = r1.errorView
            if (r2 == 0) goto L10
            java.lang.CharSequence r2 = r1.errorText
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L10
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    private boolean isCaptionStateHelperText(int r2) {
            r1 = this;
            r0 = 2
            if (r2 != r0) goto L11
            android.widget.TextView r2 = r1.helperTextView
            if (r2 == 0) goto L11
            java.lang.CharSequence r2 = r1.helperText
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L11
            r2 = 1
            goto L12
        L11:
            r2 = 0
        L12:
            return r2
    }

    private void setCaptionViewVisibilities(int r3, int r4) {
            r2 = this;
            if (r3 != r4) goto L3
            return
        L3:
            if (r4 == 0) goto L14
            android.widget.TextView r0 = r2.getCaptionViewFromDisplayState(r4)
            if (r0 == 0) goto L14
            r1 = 0
            r0.setVisibility(r1)
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.setAlpha(r1)
        L14:
            if (r3 == 0) goto L27
            android.widget.TextView r0 = r2.getCaptionViewFromDisplayState(r3)
            if (r0 == 0) goto L27
            r1 = 4
            r0.setVisibility(r1)
            r1 = 1
            if (r3 != r1) goto L27
            r3 = 0
            r0.setText(r3)
        L27:
            r2.captionDisplayed = r4
            return
    }

    private void setTextViewTypeface(android.widget.TextView r1, android.graphics.Typeface r2) {
            r0 = this;
            if (r1 == 0) goto L5
            r1.setTypeface(r2)
        L5:
            return
    }

    private void setViewGroupGoneIfEmpty(android.view.ViewGroup r1, int r2) {
            r0 = this;
            if (r2 != 0) goto L7
            r2 = 8
            r1.setVisibility(r2)
        L7:
            return
    }

    private boolean shouldAnimateCaptionView(android.widget.TextView r3, java.lang.CharSequence r4) {
            r2 = this;
            android.support.design.widget.TextInputLayout r0 = r2.textInputView
            boolean r0 = android.support.v4.view.ViewCompat.isLaidOut(r0)
            if (r0 == 0) goto L24
            android.support.design.widget.TextInputLayout r0 = r2.textInputView
            boolean r0 = r0.isEnabled()
            if (r0 == 0) goto L24
            int r0 = r2.captionToShow
            int r1 = r2.captionDisplayed
            if (r0 != r1) goto L22
            if (r3 == 0) goto L22
            java.lang.CharSequence r3 = r3.getText()
            boolean r3 = android.text.TextUtils.equals(r3, r4)
            if (r3 != 0) goto L24
        L22:
            r3 = 1
            goto L25
        L24:
            r3 = 0
        L25:
            return r3
    }

    private void updateCaptionViewsVisibility(int r10, int r11, boolean r12) {
            r9 = this;
            if (r12 == 0) goto L3d
            android.animation.AnimatorSet r7 = new android.animation.AnimatorSet
            r7.<init>()
            r9.captionAnimator = r7
            java.util.ArrayList r8 = new java.util.ArrayList
            r8.<init>()
            boolean r2 = r9.helperTextEnabled
            android.widget.TextView r3 = r9.helperTextView
            r4 = 2
            r0 = r9
            r1 = r8
            r5 = r10
            r6 = r11
            r0.createCaptionAnimators(r1, r2, r3, r4, r5, r6)
            boolean r2 = r9.errorEnabled
            android.widget.TextView r3 = r9.errorView
            r4 = 1
            r0.createCaptionAnimators(r1, r2, r3, r4, r5, r6)
            android.support.design.animation.AnimatorSetCompat.playTogether(r7, r8)
            android.widget.TextView r3 = r9.getCaptionViewFromDisplayState(r10)
            android.widget.TextView r5 = r9.getCaptionViewFromDisplayState(r11)
            android.support.design.widget.IndicatorViewController$1 r6 = new android.support.design.widget.IndicatorViewController$1
            r0 = r6
            r1 = r9
            r2 = r11
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            r7.addListener(r6)
            r7.start()
            goto L40
        L3d:
            r9.setCaptionViewVisibilities(r10, r11)
        L40:
            android.support.design.widget.TextInputLayout r0 = r9.textInputView
            r0.updateEditTextBackground()
            android.support.design.widget.TextInputLayout r0 = r9.textInputView
            r0.updateLabelState(r12)
            android.support.design.widget.TextInputLayout r0 = r9.textInputView
            r0.updateTextInputBoxState()
            return
    }

    void addIndicator(android.widget.TextView r7, int r8) {
            r6 = this;
            android.widget.LinearLayout r0 = r6.indicatorArea
            r1 = 0
            if (r0 != 0) goto L4f
            android.widget.FrameLayout r0 = r6.captionArea
            if (r0 != 0) goto L4f
            android.widget.LinearLayout r0 = new android.widget.LinearLayout
            android.content.Context r2 = r6.context
            r0.<init>(r2)
            r6.indicatorArea = r0
            r0.setOrientation(r1)
            android.support.design.widget.TextInputLayout r0 = r6.textInputView
            android.widget.LinearLayout r2 = r6.indicatorArea
            r3 = -1
            r4 = -2
            r0.addView(r2, r3, r4)
            android.widget.FrameLayout r0 = new android.widget.FrameLayout
            android.content.Context r2 = r6.context
            r0.<init>(r2)
            r6.captionArea = r0
            android.widget.LinearLayout r2 = r6.indicatorArea
            android.widget.FrameLayout$LayoutParams r5 = new android.widget.FrameLayout$LayoutParams
            r5.<init>(r4, r4)
            r2.addView(r0, r3, r5)
            android.support.v4.widget.Space r0 = new android.support.v4.widget.Space
            android.content.Context r2 = r6.context
            r0.<init>(r2)
            android.widget.LinearLayout$LayoutParams r2 = new android.widget.LinearLayout$LayoutParams
            r3 = 1065353216(0x3f800000, float:1.0)
            r2.<init>(r1, r1, r3)
            android.widget.LinearLayout r3 = r6.indicatorArea
            r3.addView(r0, r2)
            android.support.design.widget.TextInputLayout r0 = r6.textInputView
            android.widget.EditText r0 = r0.getEditText()
            if (r0 == 0) goto L4f
            r6.adjustIndicatorPadding()
        L4f:
            boolean r0 = r6.isCaptionView(r8)
            if (r0 == 0) goto L66
            android.widget.FrameLayout r8 = r6.captionArea
            r8.setVisibility(r1)
            android.widget.FrameLayout r8 = r6.captionArea
            r8.addView(r7)
            int r7 = r6.captionViewsAdded
            int r7 = r7 + 1
            r6.captionViewsAdded = r7
            goto L6b
        L66:
            android.widget.LinearLayout r0 = r6.indicatorArea
            r0.addView(r7, r8)
        L6b:
            android.widget.LinearLayout r7 = r6.indicatorArea
            r7.setVisibility(r1)
            int r7 = r6.indicatorsAdded
            int r7 = r7 + 1
            r6.indicatorsAdded = r7
            return
    }

    void adjustIndicatorPadding() {
            r4 = this;
            boolean r0 = r4.canAdjustIndicatorPadding()
            if (r0 == 0) goto L20
            android.widget.LinearLayout r0 = r4.indicatorArea
            android.support.design.widget.TextInputLayout r1 = r4.textInputView
            android.widget.EditText r1 = r1.getEditText()
            int r1 = android.support.v4.view.ViewCompat.getPaddingStart(r1)
            android.support.design.widget.TextInputLayout r2 = r4.textInputView
            android.widget.EditText r2 = r2.getEditText()
            int r2 = android.support.v4.view.ViewCompat.getPaddingEnd(r2)
            r3 = 0
            android.support.v4.view.ViewCompat.setPaddingRelative(r0, r1, r3, r2, r3)
        L20:
            return
    }

    void cancelCaptionAnimator() {
            r1 = this;
            android.animation.Animator r0 = r1.captionAnimator
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            return
    }

    boolean errorIsDisplayed() {
            r1 = this;
            int r0 = r1.captionDisplayed
            boolean r0 = r1.isCaptionStateError(r0)
            return r0
    }

    boolean errorShouldBeShown() {
            r1 = this;
            int r0 = r1.captionToShow
            boolean r0 = r1.isCaptionStateError(r0)
            return r0
    }

    java.lang.CharSequence getErrorText() {
            r1 = this;
            java.lang.CharSequence r0 = r1.errorText
            return r0
    }

    int getErrorViewCurrentTextColor() {
            r1 = this;
            android.widget.TextView r0 = r1.errorView
            if (r0 == 0) goto L9
            int r0 = r0.getCurrentTextColor()
            goto La
        L9:
            r0 = -1
        La:
            return r0
    }

    android.content.res.ColorStateList getErrorViewTextColors() {
            r1 = this;
            android.widget.TextView r0 = r1.errorView
            if (r0 == 0) goto L9
            android.content.res.ColorStateList r0 = r0.getTextColors()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    java.lang.CharSequence getHelperText() {
            r1 = this;
            java.lang.CharSequence r0 = r1.helperText
            return r0
    }

    android.content.res.ColorStateList getHelperTextViewColors() {
            r1 = this;
            android.widget.TextView r0 = r1.helperTextView
            if (r0 == 0) goto L9
            android.content.res.ColorStateList r0 = r0.getTextColors()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    int getHelperTextViewCurrentTextColor() {
            r1 = this;
            android.widget.TextView r0 = r1.helperTextView
            if (r0 == 0) goto L9
            int r0 = r0.getCurrentTextColor()
            goto La
        L9:
            r0 = -1
        La:
            return r0
    }

    boolean helperTextIsDisplayed() {
            r1 = this;
            int r0 = r1.captionDisplayed
            boolean r0 = r1.isCaptionStateHelperText(r0)
            return r0
    }

    boolean helperTextShouldBeShown() {
            r1 = this;
            int r0 = r1.captionToShow
            boolean r0 = r1.isCaptionStateHelperText(r0)
            return r0
    }

    void hideError() {
            r4 = this;
            r0 = 0
            r4.errorText = r0
            r4.cancelCaptionAnimator()
            int r1 = r4.captionDisplayed
            r2 = 1
            if (r1 != r2) goto L1e
            boolean r1 = r4.helperTextEnabled
            if (r1 == 0) goto L1b
            java.lang.CharSequence r1 = r4.helperText
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1b
            r1 = 2
            r4.captionToShow = r1
            goto L1e
        L1b:
            r1 = 0
            r4.captionToShow = r1
        L1e:
            int r1 = r4.captionDisplayed
            int r2 = r4.captionToShow
            android.widget.TextView r3 = r4.errorView
            boolean r0 = r4.shouldAnimateCaptionView(r3, r0)
            r4.updateCaptionViewsVisibility(r1, r2, r0)
            return
    }

    void hideHelperText() {
            r4 = this;
            r4.cancelCaptionAnimator()
            int r0 = r4.captionDisplayed
            r1 = 2
            if (r0 != r1) goto Lb
            r0 = 0
            r4.captionToShow = r0
        Lb:
            int r0 = r4.captionDisplayed
            int r1 = r4.captionToShow
            android.widget.TextView r2 = r4.helperTextView
            r3 = 0
            boolean r2 = r4.shouldAnimateCaptionView(r2, r3)
            r4.updateCaptionViewsVisibility(r0, r1, r2)
            return
    }

    boolean isCaptionView(int r2) {
            r1 = this;
            r0 = 1
            if (r2 == 0) goto L7
            if (r2 != r0) goto L6
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    boolean isErrorEnabled() {
            r1 = this;
            boolean r0 = r1.errorEnabled
            return r0
    }

    boolean isHelperTextEnabled() {
            r1 = this;
            boolean r0 = r1.helperTextEnabled
            return r0
    }

    void removeIndicator(android.widget.TextView r2, int r3) {
            r1 = this;
            android.widget.LinearLayout r0 = r1.indicatorArea
            if (r0 != 0) goto L5
            return
        L5:
            boolean r3 = r1.isCaptionView(r3)
            if (r3 == 0) goto L1e
            android.widget.FrameLayout r3 = r1.captionArea
            if (r3 == 0) goto L1e
            int r0 = r1.captionViewsAdded
            int r0 = r0 + (-1)
            r1.captionViewsAdded = r0
            r1.setViewGroupGoneIfEmpty(r3, r0)
            android.widget.FrameLayout r3 = r1.captionArea
            r3.removeView(r2)
            goto L23
        L1e:
            android.widget.LinearLayout r3 = r1.indicatorArea
            r3.removeView(r2)
        L23:
            int r2 = r1.indicatorsAdded
            int r2 = r2 + (-1)
            r1.indicatorsAdded = r2
            android.widget.LinearLayout r3 = r1.indicatorArea
            r1.setViewGroupGoneIfEmpty(r3, r2)
            return
    }

    void setErrorEnabled(boolean r4) {
            r3 = this;
            boolean r0 = r3.errorEnabled
            if (r0 != r4) goto L5
            return
        L5:
            r3.cancelCaptionAnimator()
            r0 = 0
            if (r4 == 0) goto L39
            android.support.v7.widget.AppCompatTextView r1 = new android.support.v7.widget.AppCompatTextView
            android.content.Context r2 = r3.context
            r1.<init>(r2)
            r3.errorView = r1
            int r2 = android.support.design.R.id.textinput_error
            r1.setId(r2)
            android.graphics.Typeface r1 = r3.typeface
            if (r1 == 0) goto L22
            android.widget.TextView r2 = r3.errorView
            r2.setTypeface(r1)
        L22:
            int r1 = r3.errorTextAppearance
            r3.setErrorTextAppearance(r1)
            android.widget.TextView r1 = r3.errorView
            r2 = 4
            r1.setVisibility(r2)
            android.widget.TextView r1 = r3.errorView
            r2 = 1
            android.support.v4.view.ViewCompat.setAccessibilityLiveRegion(r1, r2)
            android.widget.TextView r1 = r3.errorView
            r3.addIndicator(r1, r0)
            goto L4e
        L39:
            r3.hideError()
            android.widget.TextView r1 = r3.errorView
            r3.removeIndicator(r1, r0)
            r0 = 0
            r3.errorView = r0
            android.support.design.widget.TextInputLayout r0 = r3.textInputView
            r0.updateEditTextBackground()
            android.support.design.widget.TextInputLayout r0 = r3.textInputView
            r0.updateTextInputBoxState()
        L4e:
            r3.errorEnabled = r4
            return
    }

    void setErrorTextAppearance(int r3) {
            r2 = this;
            r2.errorTextAppearance = r3
            android.widget.TextView r0 = r2.errorView
            if (r0 == 0) goto Lb
            android.support.design.widget.TextInputLayout r1 = r2.textInputView
            r1.setTextAppearanceCompatWithErrorFallback(r0, r3)
        Lb:
            return
    }

    void setErrorViewTextColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.widget.TextView r0 = r1.errorView
            if (r0 == 0) goto L7
            r0.setTextColor(r2)
        L7:
            return
    }

    void setHelperTextAppearance(int r2) {
            r1 = this;
            r1.helperTextTextAppearance = r2
            android.widget.TextView r0 = r1.helperTextView
            if (r0 == 0) goto L9
            android.support.v4.widget.TextViewCompat.setTextAppearance(r0, r2)
        L9:
            return
    }

    void setHelperTextEnabled(boolean r4) {
            r3 = this;
            boolean r0 = r3.helperTextEnabled
            if (r0 != r4) goto L5
            return
        L5:
            r3.cancelCaptionAnimator()
            r0 = 1
            if (r4 == 0) goto L38
            android.support.v7.widget.AppCompatTextView r1 = new android.support.v7.widget.AppCompatTextView
            android.content.Context r2 = r3.context
            r1.<init>(r2)
            r3.helperTextView = r1
            int r2 = android.support.design.R.id.textinput_helper_text
            r1.setId(r2)
            android.graphics.Typeface r1 = r3.typeface
            if (r1 == 0) goto L22
            android.widget.TextView r2 = r3.helperTextView
            r2.setTypeface(r1)
        L22:
            android.widget.TextView r1 = r3.helperTextView
            r2 = 4
            r1.setVisibility(r2)
            android.widget.TextView r1 = r3.helperTextView
            android.support.v4.view.ViewCompat.setAccessibilityLiveRegion(r1, r0)
            int r1 = r3.helperTextTextAppearance
            r3.setHelperTextAppearance(r1)
            android.widget.TextView r1 = r3.helperTextView
            r3.addIndicator(r1, r0)
            goto L4d
        L38:
            r3.hideHelperText()
            android.widget.TextView r1 = r3.helperTextView
            r3.removeIndicator(r1, r0)
            r0 = 0
            r3.helperTextView = r0
            android.support.design.widget.TextInputLayout r0 = r3.textInputView
            r0.updateEditTextBackground()
            android.support.design.widget.TextInputLayout r0 = r3.textInputView
            r0.updateTextInputBoxState()
        L4d:
            r3.helperTextEnabled = r4
            return
    }

    void setHelperTextViewTextColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.widget.TextView r0 = r1.helperTextView
            if (r0 == 0) goto L7
            r0.setTextColor(r2)
        L7:
            return
    }

    void setTypefaces(android.graphics.Typeface r2) {
            r1 = this;
            android.graphics.Typeface r0 = r1.typeface
            if (r2 == r0) goto L10
            r1.typeface = r2
            android.widget.TextView r0 = r1.errorView
            r1.setTextViewTypeface(r0, r2)
            android.widget.TextView r0 = r1.helperTextView
            r1.setTextViewTypeface(r0, r2)
        L10:
            return
    }

    void showError(java.lang.CharSequence r4) {
            r3 = this;
            r3.cancelCaptionAnimator()
            r3.errorText = r4
            android.widget.TextView r0 = r3.errorView
            r0.setText(r4)
            int r0 = r3.captionDisplayed
            r1 = 1
            if (r0 == r1) goto L11
            r3.captionToShow = r1
        L11:
            int r0 = r3.captionDisplayed
            int r1 = r3.captionToShow
            android.widget.TextView r2 = r3.errorView
            boolean r4 = r3.shouldAnimateCaptionView(r2, r4)
            r3.updateCaptionViewsVisibility(r0, r1, r4)
            return
    }

    void showHelper(java.lang.CharSequence r4) {
            r3 = this;
            r3.cancelCaptionAnimator()
            r3.helperText = r4
            android.widget.TextView r0 = r3.helperTextView
            r0.setText(r4)
            int r0 = r3.captionDisplayed
            r1 = 2
            if (r0 == r1) goto L11
            r3.captionToShow = r1
        L11:
            int r0 = r3.captionDisplayed
            int r1 = r3.captionToShow
            android.widget.TextView r2 = r3.helperTextView
            boolean r4 = r3.shouldAnimateCaptionView(r2, r4)
            r3.updateCaptionViewsVisibility(r0, r1, r4)
            return
    }
}
