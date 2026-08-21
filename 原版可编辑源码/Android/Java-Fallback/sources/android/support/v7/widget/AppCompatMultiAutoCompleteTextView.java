package android.support.v7.widget;

public class AppCompatMultiAutoCompleteTextView extends android.widget.MultiAutoCompleteTextView implements android.support.v4.view.TintableBackgroundView {
    private static final int[] TINT_ATTRS = null;
    private final android.support.v7.widget.AppCompatBackgroundHelper mBackgroundTintHelper;
    private final android.support.v7.widget.AppCompatTextHelper mTextHelper;

    static {
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 0
            r2 = 16843126(0x1010176, float:2.3694606E-38)
            r0[r1] = r2
            android.support.v7.widget.AppCompatMultiAutoCompleteTextView.TINT_ATTRS = r0
            return
    }

    public AppCompatMultiAutoCompleteTextView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public AppCompatMultiAutoCompleteTextView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.v7.appcompat.R.attr.autoCompleteTextViewStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public AppCompatMultiAutoCompleteTextView(android.content.Context r3, android.util.AttributeSet r4, int r5) {
            r2 = this;
            android.content.Context r3 = android.support.v7.widget.TintContextWrapper.wrap(r3)
            r2.<init>(r3, r4, r5)
            android.content.Context r3 = r2.getContext()
            int[] r0 = android.support.v7.widget.AppCompatMultiAutoCompleteTextView.TINT_ATTRS
            r1 = 0
            android.support.v7.widget.TintTypedArray r3 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r3, r4, r0, r5, r1)
            boolean r0 = r3.hasValue(r1)
            if (r0 == 0) goto L1f
            android.graphics.drawable.Drawable r0 = r3.getDrawable(r1)
            r2.setDropDownBackgroundDrawable(r0)
        L1f:
            r3.recycle()
            android.support.v7.widget.AppCompatBackgroundHelper r3 = new android.support.v7.widget.AppCompatBackgroundHelper
            r3.<init>(r2)
            r2.mBackgroundTintHelper = r3
            r3.loadFromAttributes(r4, r5)
            android.support.v7.widget.AppCompatTextHelper r3 = new android.support.v7.widget.AppCompatTextHelper
            r3.<init>(r2)
            r2.mTextHelper = r3
            r3.loadFromAttributes(r4, r5)
            android.support.v7.widget.AppCompatTextHelper r3 = r2.mTextHelper
            r3.applyCompoundDrawablesTints()
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
    public android.view.inputmethod.InputConnection onCreateInputConnection(android.view.inputmethod.EditorInfo r2) {
            r1 = this;
            android.view.inputmethod.InputConnection r0 = super.onCreateInputConnection(r2)
            android.view.inputmethod.InputConnection r2 = android.support.v7.widget.AppCompatHintHelper.onCreateInputConnection(r0, r2, r1)
            return r2
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
    public void setDropDownBackgroundResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            android.graphics.drawable.Drawable r2 = android.support.v7.content.res.AppCompatResources.getDrawable(r0, r2)
            r1.setDropDownBackgroundDrawable(r2)
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
}
