package android.support.v7.widget;

import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.support.annotation.DrawableRes;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.widget.TintableCompoundButton;
import android.support.v7.appcompat.R;
import android.support.v7.content.res.AppCompatResources;
import android.util.AttributeSet;
import android.widget.RadioButton;

public class AppCompatRadioButton extends RadioButton implements TintableCompoundButton {
    private final AppCompatCompoundButtonHelper mCompoundButtonHelper;
    private final AppCompatTextHelper mTextHelper;

    public AppCompatRadioButton(Context r2) {
        this(r2, null);
    }

    public AppCompatRadioButton(Context r2, AttributeSet r3) {
        this(r2, r3, R.attr.radioButtonStyle);
    }

    public AppCompatRadioButton(Context r1, AttributeSet r2, int r3) {
        super(TintContextWrapper.wrap(r1), r2, r3);
        this.mCompoundButtonHelper = new AppCompatCompoundButtonHelper(this);
        this.mCompoundButtonHelper.loadFromAttributes(r2, r3);
        this.mTextHelper = new AppCompatTextHelper(this);
        this.mTextHelper.loadFromAttributes(r2, r3);
    }

    @Override
    public void setButtonDrawable(Drawable r1) {
        super.setButtonDrawable(r1);
        AppCompatCompoundButtonHelper r12 = this.mCompoundButtonHelper;
        if (r12 == null) goto L6;
        r12.onSetButtonDrawable();
        return;
    }

    @Override
    public void setButtonDrawable(@DrawableRes int r2) {
        setButtonDrawable(AppCompatResources.getDrawable(getContext(), r2));
    }

    @Override
    public int getCompoundPaddingLeft() {
        int r0 = super.getCompoundPaddingLeft();
        AppCompatCompoundButtonHelper r1 = this.mCompoundButtonHelper;
        if (r1 != null) goto L5;
        return r0;
    L5:
        return r1.getCompoundPaddingLeft(r0);
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setSupportButtonTintList(@Nullable ColorStateList r2) {
        AppCompatCompoundButtonHelper r0 = this.mCompoundButtonHelper;
        if (r0 == null) goto L6;
        r0.setSupportButtonTintList(r2);
        return;
    }

    @Override
    @Nullable
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public ColorStateList getSupportButtonTintList() {
        AppCompatCompoundButtonHelper r0 = this.mCompoundButtonHelper;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.getSupportButtonTintList();
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setSupportButtonTintMode(@Nullable PorterDuff.Mode r2) {
        AppCompatCompoundButtonHelper r0 = this.mCompoundButtonHelper;
        if (r0 == null) goto L6;
        r0.setSupportButtonTintMode(r2);
        return;
    }

    @Override
    @Nullable
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public PorterDuff.Mode getSupportButtonTintMode() {
        AppCompatCompoundButtonHelper r0 = this.mCompoundButtonHelper;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.getSupportButtonTintMode();
    }
}
