package android.support.v7.widget;

public class AppCompatEditText extends android.widget.EditText implements android.support.v4.view.TintableBackgroundView {
    private final android.support.v7.widget.AppCompatBackgroundHelper mBackgroundTintHelper;
    private final android.support.v7.widget.AppCompatTextHelper mTextHelper;

    public AppCompatEditText(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public AppCompatEditText(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.v7.appcompat.R.attr.editTextStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public AppCompatEditText(android.content.Context r1, android.util.AttributeSet r2, int r3) {
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
    public android.text.Editable getText() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lb
            android.text.Editable r0 = super.getText()
            return r0
        Lb:
            android.text.Editable r0 = super.getEditableText()
            return r0
    }

    @Override
    public java.lang.CharSequence getText() {
            r1 = this;
            android.text.Editable r0 = r1.getText()
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
    public void setCustomSelectionActionModeCallback(android.view.ActionMode.Callback r1) {
            r0 = this;
            android.view.ActionMode$Callback r1 = android.support.v4.widget.TextViewCompat.wrapCustomSelectionActionModeCallback(r0, r1)
            super.setCustomSelectionActionModeCallback(r1)
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
