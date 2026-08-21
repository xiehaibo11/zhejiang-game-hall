package android.support.v7.widget;

import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.Nullable;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.support.v4.widget.CompoundButtonCompat;
import android.support.v7.appcompat.R;
import android.support.v7.content.res.AppCompatResources;
import android.util.AttributeSet;
import android.widget.CompoundButton;

class AppCompatCompoundButtonHelper {
    private ColorStateList mButtonTintList;
    private PorterDuff.Mode mButtonTintMode;
    private boolean mHasButtonTint;
    private boolean mHasButtonTintMode;
    private boolean mSkipNextApply;
    private final CompoundButton mView;

    interface DirectSetButtonDrawableInterface {
        void setButtonDrawable(Drawable r1);
    }

    AppCompatCompoundButtonHelper(CompoundButton r2) {
        this.mButtonTintList = null;
        this.mButtonTintMode = null;
        this.mHasButtonTint = false;
        this.mHasButtonTintMode = false;
        this.mView = r2;
    }

    void loadFromAttributes(AttributeSet r4, int r5) {
        TypedArray r42 = this.mView.getContext().obtainStyledAttributes(r4, R.styleable.CompoundButton, r5, 0);
    L16:
        th = move-exception;
        r42.recycle();
        throw th;
    L4:
        if (r42.hasValue(R.styleable.CompoundButton_android_button) == false) goto L9;
        int r52 = r42.getResourceId(R.styleable.CompoundButton_android_button, 0);     // Catch: Throwable -> L16
        if (r52 == 0) goto L9;
        this.mView.setButtonDrawable(AppCompatResources.getDrawable(this.mView.getContext(), r52));     // Catch: Throwable -> L16
    L9:
        if (r42.hasValue(R.styleable.CompoundButton_buttonTint) == false) goto L12;
        CompoundButtonCompat.setButtonTintList(this.mView, r42.getColorStateList(R.styleable.CompoundButton_buttonTint));     // Catch: Throwable -> L16
    L12:
        if (r42.hasValue(R.styleable.CompoundButton_buttonTintMode) == false) goto L14;
        CompoundButtonCompat.setButtonTintMode(this.mView, DrawableUtils.parseTintMode(r42.getInt(R.styleable.CompoundButton_buttonTintMode, -1), null));     // Catch: Throwable -> L16
    L14:
        r42.recycle();
    }

    void setSupportButtonTintList(ColorStateList r1) {
        this.mButtonTintList = r1;
        this.mHasButtonTint = true;
        applyButtonTint();
    }

    ColorStateList getSupportButtonTintList() {
        return this.mButtonTintList;
    }

    void setSupportButtonTintMode(@Nullable PorterDuff.Mode r1) {
        this.mButtonTintMode = r1;
        this.mHasButtonTintMode = true;
        applyButtonTint();
    }

    PorterDuff.Mode getSupportButtonTintMode() {
        return this.mButtonTintMode;
    }

    void onSetButtonDrawable() {
        if (this.mSkipNextApply == false) goto L6;
        this.mSkipNextApply = false;
        return;
    L6:
        this.mSkipNextApply = true;
        applyButtonTint();
    }

    void applyButtonTint() {
        Drawable r0 = CompoundButtonCompat.getButtonDrawable(this.mView);
        if (r0 != null) goto L5;
        return;
    L5:
        if (this.mHasButtonTint == false) goto L7;
    L8:
        Drawable r02 = DrawableCompat.wrap(r0).mutate();
        if (this.mHasButtonTint == false) goto L12;
        DrawableCompat.setTintList(r02, this.mButtonTintList);
    L12:
        if (this.mHasButtonTintMode == false) goto L15;
        DrawableCompat.setTintMode(r02, this.mButtonTintMode);
    L15:
        if (r02.isStateful() == false) goto L17;
        r02.setState(this.mView.getDrawableState());
    L17:
        this.mView.setButtonDrawable(r02);
        return;
    L7:
        if (this.mHasButtonTintMode == true) goto L8;
    }

    int getCompoundPaddingLeft(int r3) {
        if (Build.VERSION.SDK_INT >= 17) goto L8;
        Drawable r0 = CompoundButtonCompat.getButtonDrawable(this.mView);
        if (r0 != null) goto L7;
        return r3;
    L7:
        return r3 + r0.getIntrinsicWidth();
    L8:
        return r3;
    }
}
