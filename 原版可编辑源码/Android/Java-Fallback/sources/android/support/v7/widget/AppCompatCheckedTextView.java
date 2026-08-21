package android.support.v7.widget;

public class AppCompatCheckedTextView extends android.widget.CheckedTextView {
    private static final int[] TINT_ATTRS = null;
    private final android.support.v7.widget.AppCompatTextHelper mTextHelper;

    static {
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 0
            r2 = 16843016(0x1010108, float:2.3694298E-38)
            r0[r1] = r2
            android.support.v7.widget.AppCompatCheckedTextView.TINT_ATTRS = r0
            return
    }

    public AppCompatCheckedTextView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public AppCompatCheckedTextView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 16843720(0x10103c8, float:2.369627E-38)
            r1.<init>(r2, r3, r0)
            return
    }

    public AppCompatCheckedTextView(android.content.Context r3, android.util.AttributeSet r4, int r5) {
            r2 = this;
            android.content.Context r3 = android.support.v7.widget.TintContextWrapper.wrap(r3)
            r2.<init>(r3, r4, r5)
            android.support.v7.widget.AppCompatTextHelper r3 = new android.support.v7.widget.AppCompatTextHelper
            r3.<init>(r2)
            r2.mTextHelper = r3
            r3.loadFromAttributes(r4, r5)
            android.support.v7.widget.AppCompatTextHelper r3 = r2.mTextHelper
            r3.applyCompoundDrawablesTints()
            android.content.Context r3 = r2.getContext()
            int[] r0 = android.support.v7.widget.AppCompatCheckedTextView.TINT_ATTRS
            r1 = 0
            android.support.v7.widget.TintTypedArray r3 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r3, r4, r0, r5, r1)
            android.graphics.drawable.Drawable r4 = r3.getDrawable(r1)
            r2.setCheckMarkDrawable(r4)
            r3.recycle()
            return
    }

    @Override
    protected void drawableStateChanged() {
            r1 = this;
            super.drawableStateChanged()
            android.support.v7.widget.AppCompatTextHelper r0 = r1.mTextHelper
            if (r0 == 0) goto La
            r0.applyCompoundDrawablesTints()
        La:
            return
    }

    @Override
    public android.view.inputmethod.InputConnection onCreateInputConnection(android.view.inputmethod.EditorInfo r2) {
            r1 = this;
            android.view.inputmethod.InputConnection r0 = super.onCreateInputConnection(r2)
            android.view.inputmethod.InputConnection r2 = android.support.v7.widget.AppCompatHintHelper.onCreateInputConnection(r0, r2, r1)
            return r2
    }

    @Override
    public void setCheckMarkDrawable(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            android.graphics.drawable.Drawable r2 = android.support.v7.content.res.AppCompatResources.getDrawable(r0, r2)
            r1.setCheckMarkDrawable(r2)
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
