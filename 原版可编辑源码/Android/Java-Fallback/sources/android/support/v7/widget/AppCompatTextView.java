package android.support.v7.widget;

public class AppCompatTextView extends android.widget.TextView implements android.support.v4.view.TintableBackgroundView, android.support.v4.widget.AutoSizeableTextView {
    private final android.support.v7.widget.AppCompatBackgroundHelper mBackgroundTintHelper;
    private java.util.concurrent.Future<android.support.v4.text.PrecomputedTextCompat> mPrecomputedTextFuture;
    private final android.support.v7.widget.AppCompatTextHelper mTextHelper;

    public AppCompatTextView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public AppCompatTextView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 16842884(0x1010084, float:2.3693928E-38)
            r1.<init>(r2, r3, r0)
            return
    }

    public AppCompatTextView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            android.content.Context r1 = android.support.v7.widget.TintContextWrapper.wrap(r1)
            r0.<init>(r1, r2, r3)
            android.support.v7.widget.AppCompatBackgroundHelper r1 = new android.support.v7.widget.AppCompatBackgroundHelper
            r1.<init>(r0)
            r0.mBackgroundTintHelper = r1
            r1.loadFromAttributes(r2, r3)
            android.support.v7.widget.AppCompatTextHelper r1 = new android.support.v7.widget.AppCompatTextHelper
            r1.<init>(r0)
            r0.mTextHelper = r1
            r1.loadFromAttributes(r2, r3)
            android.support.v7.widget.AppCompatTextHelper r1 = r0.mTextHelper
            r1.applyCompoundDrawablesTints()
            return
    }

    private void consumeTextFutureAndSetBlocking() {
            r2 = this;
            java.util.concurrent.Future<android.support.v4.text.PrecomputedTextCompat> r0 = r2.mPrecomputedTextFuture
            if (r0 == 0) goto L10
            r1 = 0
            r2.mPrecomputedTextFuture = r1     // Catch: java.lang.Throwable -> L10
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Throwable -> L10
            android.support.v4.text.PrecomputedTextCompat r0 = (android.support.v4.text.PrecomputedTextCompat) r0     // Catch: java.lang.Throwable -> L10
            android.support.v4.widget.TextViewCompat.setPrecomputedText(r2, r0)     // Catch: java.lang.Throwable -> L10
        L10:
            return
    }

    @Override
    protected void drawableStateChanged() {
            r1 = this;
            super.drawableStateChanged()
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto La
            r0.applySupportBackgroundTint()
        La:
            android.support.v7.widget.AppCompatTextHelper r0 = r1.mTextHelper
            if (r0 == 0) goto L11
            r0.applyCompoundDrawablesTints()
        L11:
            return
    }

    @Override
    public int getAutoSizeMaxTextSize() {
            r1 = this;
            boolean r0 = android.support.v7.widget.AppCompatTextView.PLATFORM_SUPPORTS_AUTOSIZE
            if (r0 == 0) goto L9
            int r0 = super.getAutoSizeMaxTextSize()
            return r0
        L9:
            android.support.v7.widget.AppCompatTextHelper r0 = r1.mTextHelper
            if (r0 == 0) goto L12
            int r0 = r0.getAutoSizeMaxTextSize()
            return r0
        L12:
            r0 = -1
            return r0
    }

    @Override
    public int getAutoSizeMinTextSize() {
            r1 = this;
            boolean r0 = android.support.v7.widget.AppCompatTextView.PLATFORM_SUPPORTS_AUTOSIZE
            if (r0 == 0) goto L9
            int r0 = super.getAutoSizeMinTextSize()
            return r0
        L9:
            android.support.v7.widget.AppCompatTextHelper r0 = r1.mTextHelper
            if (r0 == 0) goto L12
            int r0 = r0.getAutoSizeMinTextSize()
            return r0
        L12:
            r0 = -1
            return r0
    }

    @Override
    public int getAutoSizeStepGranularity() {
            r1 = this;
            boolean r0 = android.support.v7.widget.AppCompatTextView.PLATFORM_SUPPORTS_AUTOSIZE
            if (r0 == 0) goto L9
            int r0 = super.getAutoSizeStepGranularity()
            return r0
        L9:
            android.support.v7.widget.AppCompatTextHelper r0 = r1.mTextHelper
            if (r0 == 0) goto L12
            int r0 = r0.getAutoSizeStepGranularity()
            return r0
        L12:
            r0 = -1
            return r0
    }

    @Override
    public int[] getAutoSizeTextAvailableSizes() {
            r1 = this;
            boolean r0 = android.support.v7.widget.AppCompatTextView.PLATFORM_SUPPORTS_AUTOSIZE
            if (r0 == 0) goto L9
            int[] r0 = super.getAutoSizeTextAvailableSizes()
            return r0
        L9:
            android.support.v7.widget.AppCompatTextHelper r0 = r1.mTextHelper
            if (r0 == 0) goto L12
            int[] r0 = r0.getAutoSizeTextAvailableSizes()
            return r0
        L12:
            r0 = 0
            int[] r0 = new int[r0]
            return r0
    }

    @Override
    public int getAutoSizeTextType() {
            r3 = this;
            boolean r0 = android.support.v7.widget.AppCompatTextView.PLATFORM_SUPPORTS_AUTOSIZE
            r1 = 0
            if (r0 == 0) goto Le
            int r0 = super.getAutoSizeTextType()
            r2 = 1
            if (r0 != r2) goto Ld
            r1 = r2
        Ld:
            return r1
        Le:
            android.support.v7.widget.AppCompatTextHelper r0 = r3.mTextHelper
            if (r0 == 0) goto L17
            int r0 = r0.getAutoSizeTextType()
            return r0
        L17:
            return r1
    }

    @Override
    public int getFirstBaselineToTopHeight() {
            r1 = this;
            int r0 = android.support.v4.widget.TextViewCompat.getFirstBaselineToTopHeight(r1)
            return r0
    }

    @Override
    public int getLastBaselineToBottomHeight() {
            r1 = this;
            int r0 = android.support.v4.widget.TextViewCompat.getLastBaselineToBottomHeight(r1)
            return r0
    }

    @Override
    public android.content.res.ColorStateList getSupportBackgroundTintList() {
            r1 = this;
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto L9
            android.content.res.ColorStateList r0 = r0.getSupportBackgroundTintList()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public android.graphics.PorterDuff.Mode getSupportBackgroundTintMode() {
            r1 = this;
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto L9
            android.graphics.PorterDuff$Mode r0 = r0.getSupportBackgroundTintMode()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public java.lang.CharSequence getText() {
            r1 = this;
            r1.consumeTextFutureAndSetBlocking()
            java.lang.CharSequence r0 = super.getText()
            return r0
    }

    public android.support.v4.text.PrecomputedTextCompat.Params getTextMetricsParamsCompat() {
            r1 = this;
            android.support.v4.text.PrecomputedTextCompat$Params r0 = android.support.v4.widget.TextViewCompat.getTextMetricsParams(r1)
            return r0
    }

    @Override
    public android.view.inputmethod.InputConnection onCreateInputConnection(android.view.inputmethod.EditorInfo r2) {
            r1 = this;
            android.view.inputmethod.InputConnection r0 = super.onCreateInputConnection(r2)
            android.view.inputmethod.InputConnection r2 = android.support.v7.widget.AppCompatHintHelper.onCreateInputConnection(r0, r2, r1)
            return r2
    }

    @Override
    protected void onLayout(boolean r7, int r8, int r9, int r10, int r11) {
            r6 = this;
            super.onLayout(r7, r8, r9, r10, r11)
            android.support.v7.widget.AppCompatTextHelper r0 = r6.mTextHelper
            if (r0 == 0) goto Lf
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.onLayout(r1, r2, r3, r4, r5)
        Lf:
            return
    }

    @Override
    protected void onMeasure(int r1, int r2) {
            r0 = this;
            r0.consumeTextFutureAndSetBlocking()
            super.onMeasure(r1, r2)
            return
    }

    @Override
    protected void onTextChanged(java.lang.CharSequence r1, int r2, int r3, int r4) {
            r0 = this;
            super.onTextChanged(r1, r2, r3, r4)
            android.support.v7.widget.AppCompatTextHelper r1 = r0.mTextHelper
            if (r1 == 0) goto L18
            boolean r1 = android.support.v7.widget.AppCompatTextView.PLATFORM_SUPPORTS_AUTOSIZE
            if (r1 != 0) goto L18
            android.support.v7.widget.AppCompatTextHelper r1 = r0.mTextHelper
            boolean r1 = r1.isAutoSizeEnabled()
            if (r1 == 0) goto L18
            android.support.v7.widget.AppCompatTextHelper r1 = r0.mTextHelper
            r1.autoSizeText()
        L18:
            return
    }

    @Override
    public void setAutoSizeTextTypeUniformWithConfiguration(int r2, int r3, int r4, int r5) throws java.lang.IllegalArgumentException {
            r1 = this;
            boolean r0 = android.support.v7.widget.AppCompatTextView.PLATFORM_SUPPORTS_AUTOSIZE
            if (r0 == 0) goto L8
            super.setAutoSizeTextTypeUniformWithConfiguration(r2, r3, r4, r5)
            goto Lf
        L8:
            android.support.v7.widget.AppCompatTextHelper r0 = r1.mTextHelper
            if (r0 == 0) goto Lf
            r0.setAutoSizeTextTypeUniformWithConfiguration(r2, r3, r4, r5)
        Lf:
            return
    }

    @Override
    public void setAutoSizeTextTypeUniformWithPresetSizes(int[] r2, int r3) throws java.lang.IllegalArgumentException {
            r1 = this;
            boolean r0 = android.support.v7.widget.AppCompatTextView.PLATFORM_SUPPORTS_AUTOSIZE
            if (r0 == 0) goto L8
            super.setAutoSizeTextTypeUniformWithPresetSizes(r2, r3)
            goto Lf
        L8:
            android.support.v7.widget.AppCompatTextHelper r0 = r1.mTextHelper
            if (r0 == 0) goto Lf
            r0.setAutoSizeTextTypeUniformWithPresetSizes(r2, r3)
        Lf:
            return
    }

    @Override
    public void setAutoSizeTextTypeWithDefaults(int r2) {
            r1 = this;
            boolean r0 = android.support.v7.widget.AppCompatTextView.PLATFORM_SUPPORTS_AUTOSIZE
            if (r0 == 0) goto L8
            super.setAutoSizeTextTypeWithDefaults(r2)
            goto Lf
        L8:
            android.support.v7.widget.AppCompatTextHelper r0 = r1.mTextHelper
            if (r0 == 0) goto Lf
            r0.setAutoSizeTextTypeWithDefaults(r2)
        Lf:
            return
    }

    @Override
    public void setBackgroundDrawable(android.graphics.drawable.Drawable r2) {
            r1 = this;
            super.setBackgroundDrawable(r2)
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto La
            r0.onSetBackgroundDrawable(r2)
        La:
            return
    }

    @Override
    public void setBackgroundResource(int r2) {
            r1 = this;
            super.setBackgroundResource(r2)
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto La
            r0.onSetBackgroundResource(r2)
        La:
            return
    }

    @Override
    public void setCustomSelectionActionModeCallback(android.view.ActionMode.Callback r1) {
            r0 = this;
            android.view.ActionMode$Callback r1 = android.support.v4.widget.TextViewCompat.wrapCustomSelectionActionModeCallback(r0, r1)
            super.setCustomSelectionActionModeCallback(r1)
            return
    }

    @Override
    public void setFirstBaselineToTopHeight(int r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto La
            super.setFirstBaselineToTopHeight(r3)
            goto Ld
        La:
            android.support.v4.widget.TextViewCompat.setFirstBaselineToTopHeight(r2, r3)
        Ld:
            return
    }

    @Override
    public void setLastBaselineToBottomHeight(int r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto La
            super.setLastBaselineToBottomHeight(r3)
            goto Ld
        La:
            android.support.v4.widget.TextViewCompat.setLastBaselineToBottomHeight(r2, r3)
        Ld:
            return
    }

    @Override
    public void setLineHeight(int r1) {
            r0 = this;
            android.support.v4.widget.TextViewCompat.setLineHeight(r0, r1)
            return
    }

    public void setPrecomputedText(android.support.v4.text.PrecomputedTextCompat r1) {
            r0 = this;
            android.support.v4.widget.TextViewCompat.setPrecomputedText(r0, r1)
            return
    }

    @Override
    public void setSupportBackgroundTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto L7
            r0.setSupportBackgroundTintList(r2)
        L7:
            return
    }

    @Override
    public void setSupportBackgroundTintMode(android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto L7
            r0.setSupportBackgroundTintMode(r2)
        L7:
            return
    }

    @Override
    public void setTextAppearance(android.content.Context r2, int r3) {
            r1 = this;
            super.setTextAppearance(r2, r3)
            android.support.v7.widget.AppCompatTextHelper r0 = r1.mTextHelper
            if (r0 == 0) goto La
            r0.onSetTextAppearance(r2, r3)
        La:
            return
    }

    public void setTextFuture(java.util.concurrent.Future<android.support.v4.text.PrecomputedTextCompat> r1) {
            r0 = this;
            r0.mPrecomputedTextFuture = r1
            r0.requestLayout()
            return
    }

    public void setTextMetricsParamsCompat(android.support.v4.text.PrecomputedTextCompat.Params r1) {
            r0 = this;
            android.support.v4.widget.TextViewCompat.setTextMetricsParams(r0, r1)
            return
    }

    @Override
    public void setTextSize(int r2, float r3) {
            r1 = this;
            boolean r0 = android.support.v7.widget.AppCompatTextView.PLATFORM_SUPPORTS_AUTOSIZE
            if (r0 == 0) goto L8
            super.setTextSize(r2, r3)
            goto Lf
        L8:
            android.support.v7.widget.AppCompatTextHelper r0 = r1.mTextHelper
            if (r0 == 0) goto Lf
            r0.setTextSize(r2, r3)
        Lf:
            return
    }
}
