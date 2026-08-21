package android.support.design.widget;

public class TextInputEditText extends android.support.v7.widget.AppCompatEditText {
    public TextInputEditText(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public TextInputEditText(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.design.R.attr.editTextStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public TextInputEditText(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    private java.lang.CharSequence getHintFromLayout() {
            r1 = this;
            android.support.design.widget.TextInputLayout r0 = r1.getTextInputLayout()
            if (r0 == 0) goto Lb
            java.lang.CharSequence r0 = r0.getHint()
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    private android.support.design.widget.TextInputLayout getTextInputLayout() {
            r2 = this;
            android.view.ViewParent r0 = r2.getParent()
        L4:
            boolean r1 = r0 instanceof android.view.View
            if (r1 == 0) goto L14
            boolean r1 = r0 instanceof android.support.design.widget.TextInputLayout
            if (r1 == 0) goto Lf
            android.support.design.widget.TextInputLayout r0 = (android.support.design.widget.TextInputLayout) r0
            return r0
        Lf:
            android.view.ViewParent r0 = r0.getParent()
            goto L4
        L14:
            r0 = 0
            return r0
    }

    @Override
    public java.lang.CharSequence getHint() {
            r2 = this;
            android.support.design.widget.TextInputLayout r0 = r2.getTextInputLayout()
            if (r0 == 0) goto L11
            boolean r1 = r0.isProvidingHint()
            if (r1 == 0) goto L11
            java.lang.CharSequence r0 = r0.getHint()
            return r0
        L11:
            java.lang.CharSequence r0 = super.getHint()
            return r0
    }

    @Override
    public android.view.inputmethod.InputConnection onCreateInputConnection(android.view.inputmethod.EditorInfo r3) {
            r2 = this;
            android.view.inputmethod.InputConnection r0 = super.onCreateInputConnection(r3)
            if (r0 == 0) goto L10
            java.lang.CharSequence r1 = r3.hintText
            if (r1 != 0) goto L10
            java.lang.CharSequence r1 = r2.getHintFromLayout()
            r3.hintText = r1
        L10:
            return r0
    }
}
