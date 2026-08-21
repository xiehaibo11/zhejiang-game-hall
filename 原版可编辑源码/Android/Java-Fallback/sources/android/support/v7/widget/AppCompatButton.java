package android.support.v7.widget;

public class AppCompatButton extends android.widget.Button implements android.support.v4.view.TintableBackgroundView, android.support.v4.widget.AutoSizeableTextView {
    private final android.support.v7.widget.AppCompatBackgroundHelper mBackgroundTintHelper;
    private final android.support.v7.widget.AppCompatTextHelper mTextHelper;

    public AppCompatButton(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public AppCompatButton(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.v7.appcompat.R.attr.buttonStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public AppCompatButton(android.content.Context r1, android.util.AttributeSet r2, int r3) {
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
            boolean r0 = android.support.v7.widget.AppCompatButton.PLATFORM_SUPPORTS_AUTOSIZE
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
            boolean r0 = android.support.v7.widget.AppCompatButton.PLATFORM_SUPPORTS_AUTOSIZE
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
            boolean r0 = android.support.v7.widget.AppCompatButton.PLATFORM_SUPPORTS_AUTOSIZE
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
            boolean r0 = android.support.v7.widget.AppCompatButton.PLATFORM_SUPPORTS_AUTOSIZE
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
            boolean r0 = android.support.v7.widget.AppCompatButton.PLATFORM_SUPPORTS_AUTOSIZE
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
    public void onInitializeAccessibilityEvent(android.view.accessibility.AccessibilityEvent r2) {
            r1 = this;
            super.onInitializeAccessibilityEvent(r2)
            java.lang.Class<android.widget.Button> r0 = android.widget.Button.class
            java.lang.String r0 = r0.getName()
            r2.setClassName(r0)
            return
    }

    @Override
    public void onInitializeAccessibilityNodeInfo(android.view.accessibility.AccessibilityNodeInfo r2) {
            r1 = this;
            super.onInitializeAccessibilityNodeInfo(r2)
            java.lang.Class<android.widget.Button> r0 = android.widget.Button.class
            java.lang.String r0 = r0.getName()
            r2.setClassName(r0)
            return
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
    protected void onTextChanged(java.lang.CharSequence r1, int r2, int r3, int r4) {
            r0 = this;
            super.onTextChanged(r1, r2, r3, r4)
            android.support.v7.widget.AppCompatTextHelper r1 = r0.mTextHelper
            if (r1 == 0) goto L18
            boolean r1 = android.support.v7.widget.AppCompatButton.PLATFORM_SUPPORTS_AUTOSIZE
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
            boolean r0 = android.support.v7.widget.AppCompatButton.PLATFORM_SUPPORTS_AUTOSIZE
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
            boolean r0 = android.support.v7.widget.AppCompatButton.PLATFORM_SUPPORTS_AUTOSIZE
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
            boolean r0 = android.support.v7.widget.AppCompatButton.PLATFORM_SUPPORTS_AUTOSIZE
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

    public void setSupportAllCaps(boolean r2) {
            r1 = this;
            android.support.v7.widget.AppCompatTextHelper r0 = r1.mTextHelper
            if (r0 == 0) goto L7
            r0.setAllCaps(r2)
        L7:
            return
    }

    public void setSupportBackgroundTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto L7
            r0.setSupportBackgroundTintList(r2)
        L7:
            return
    }

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

    @Override
    public void setTextSize(int r2, float r3) {
            r1 = this;
            boolean r0 = android.support.v7.widget.AppCompatButton.PLATFORM_SUPPORTS_AUTOSIZE
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
