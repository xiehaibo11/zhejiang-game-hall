package android.support.v7.widget;

public class AppCompatCheckBox extends android.widget.CheckBox implements android.support.v4.widget.TintableCompoundButton {
    private final android.support.v7.widget.AppCompatCompoundButtonHelper mCompoundButtonHelper;

    public AppCompatCheckBox(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public AppCompatCheckBox(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.v7.appcompat.R.attr.checkboxStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public AppCompatCheckBox(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            android.content.Context r1 = android.support.v7.widget.TintContextWrapper.wrap(r1)
            r0.<init>(r1, r2, r3)
            android.support.v7.widget.AppCompatCompoundButtonHelper r1 = new android.support.v7.widget.AppCompatCompoundButtonHelper
            r1.<init>(r0)
            r0.mCompoundButtonHelper = r1
            android.support.v7.widget.AppCompatCompoundButtonHelper r1 = r0.mCompoundButtonHelper
            r1.loadFromAttributes(r2, r3)
            return
    }

    @Override
    public int getCompoundPaddingLeft() {
            r2 = this;
            int r0 = super.getCompoundPaddingLeft()
            android.support.v7.widget.AppCompatCompoundButtonHelper r1 = r2.mCompoundButtonHelper
            if (r1 == 0) goto Lc
            int r0 = r1.getCompoundPaddingLeft(r0)
        Lc:
            return r0
    }

    @Override
    @android.support.annotation.Nullable
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public android.content.res.ColorStateList getSupportButtonTintList() {
            r1 = this;
            android.support.v7.widget.AppCompatCompoundButtonHelper r0 = r1.mCompoundButtonHelper
            if (r0 == 0) goto L9
            android.content.res.ColorStateList r0 = r0.getSupportButtonTintList()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    @android.support.annotation.Nullable
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public android.graphics.PorterDuff.Mode getSupportButtonTintMode() {
            r1 = this;
            android.support.v7.widget.AppCompatCompoundButtonHelper r0 = r1.mCompoundButtonHelper
            if (r0 == 0) goto L9
            android.graphics.PorterDuff$Mode r0 = r0.getSupportButtonTintMode()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public void setButtonDrawable(@android.support.annotation.DrawableRes int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            android.graphics.drawable.Drawable r2 = android.support.v7.content.res.AppCompatResources.getDrawable(r0, r2)
            r1.setButtonDrawable(r2)
            return
    }

    @Override
    public void setButtonDrawable(android.graphics.drawable.Drawable r1) {
            r0 = this;
            super.setButtonDrawable(r1)
            android.support.v7.widget.AppCompatCompoundButtonHelper r1 = r0.mCompoundButtonHelper
            if (r1 == 0) goto La
            r1.onSetButtonDrawable()
        La:
            return
    }

    @Override
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void setSupportButtonTintList(@android.support.annotation.Nullable android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.v7.widget.AppCompatCompoundButtonHelper r0 = r1.mCompoundButtonHelper
            if (r0 == 0) goto L7
            r0.setSupportButtonTintList(r2)
        L7:
            return
    }

    @Override
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void setSupportButtonTintMode(@android.support.annotation.Nullable android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            android.support.v7.widget.AppCompatCompoundButtonHelper r0 = r1.mCompoundButtonHelper
            if (r0 == 0) goto L7
            r0.setSupportButtonTintMode(r2)
        L7:
            return
    }
}
