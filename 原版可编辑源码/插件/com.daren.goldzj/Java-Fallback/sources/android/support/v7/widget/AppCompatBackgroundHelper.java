package android.support.v7.widget;

import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.v4.view.ViewCompat;
import android.support.v7.appcompat.R;
import android.util.AttributeSet;
import android.view.View;

class AppCompatBackgroundHelper {
    private int mBackgroundResId;
    private TintInfo mBackgroundTint;
    private final AppCompatDrawableManager mDrawableManager;
    private TintInfo mInternalBackgroundTint;
    private TintInfo mTmpInfo;
    private final View mView;

    AppCompatBackgroundHelper(View r2) {
        this.mBackgroundResId = -1;
        this.mView = r2;
        this.mDrawableManager = AppCompatDrawableManager.get();
    }

    void loadFromAttributes(AttributeSet r4, int r5) {
        TintTypedArray r42 = TintTypedArray.obtainStyledAttributes(this.mView.getContext(), r4, R.styleable.ViewBackgroundHelper, r5, 0);
    L16:
        th = move-exception;
        r42.recycle();
        throw th;
    L4:
        if (r42.hasValue(R.styleable.ViewBackgroundHelper_android_background) == false) goto L9;
        this.mBackgroundResId = r42.getResourceId(R.styleable.ViewBackgroundHelper_android_background, -1);     // Catch: Throwable -> L16
        ColorStateList r52 = this.mDrawableManager.getTintList(this.mView.getContext(), this.mBackgroundResId);     // Catch: Throwable -> L16
        if (r52 == null) goto L9;
        setInternalBackgroundTint(r52);     // Catch: Throwable -> L16
    L9:
        if (r42.hasValue(R.styleable.ViewBackgroundHelper_backgroundTint) == false) goto L12;
        ViewCompat.setBackgroundTintList(this.mView, r42.getColorStateList(R.styleable.ViewBackgroundHelper_backgroundTint));     // Catch: Throwable -> L16
    L12:
        if (r42.hasValue(R.styleable.ViewBackgroundHelper_backgroundTintMode) == false) goto L14;
        ViewCompat.setBackgroundTintMode(this.mView, DrawableUtils.parseTintMode(r42.getInt(R.styleable.ViewBackgroundHelper_backgroundTintMode, -1), null));     // Catch: Throwable -> L16
    L14:
        r42.recycle();
    }

    void onSetBackgroundResource(int r3) {
        this.mBackgroundResId = r3;
        AppCompatDrawableManager r0 = this.mDrawableManager;
        if (r0 == null) goto L5;
        ColorStateList r32 = r0.getTintList(this.mView.getContext(), r3);
    L6:
        setInternalBackgroundTint(r32);
        applySupportBackgroundTint();
        return;
    L5:
        r32 = null;
        goto L6
    }

    void onSetBackgroundDrawable(Drawable r1) {
        this.mBackgroundResId = -1;
        setInternalBackgroundTint(null);
        applySupportBackgroundTint();
    }

    void setSupportBackgroundTintList(ColorStateList r2) {
        if (this.mBackgroundTint != null) goto L5;
        this.mBackgroundTint = new TintInfo();
    L5:
        TintInfo r0 = this.mBackgroundTint;
        r0.mTintList = r2;
        r0.mHasTintList = true;
        applySupportBackgroundTint();
    }

    ColorStateList getSupportBackgroundTintList() {
        TintInfo r0 = this.mBackgroundTint;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.mTintList;
    }

    void setSupportBackgroundTintMode(PorterDuff.Mode r2) {
        if (this.mBackgroundTint != null) goto L5;
        this.mBackgroundTint = new TintInfo();
    L5:
        TintInfo r0 = this.mBackgroundTint;
        r0.mTintMode = r2;
        r0.mHasTintMode = true;
        applySupportBackgroundTint();
    }

    PorterDuff.Mode getSupportBackgroundTintMode() {
        TintInfo r0 = this.mBackgroundTint;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.mTintMode;
    }

    void applySupportBackgroundTint() {
        Drawable r0 = this.mView.getBackground();
        if (r0 != null) goto L5;
        return;
    L5:
        if (shouldApplyFrameworkTintUsingColorFilter() == true) goto L7;
    L9:
        TintInfo r1 = this.mBackgroundTint;
        if (r1 == null) goto L12;
        AppCompatDrawableManager.tintDrawable(r0, r1, this.mView.getDrawableState());
        return;
    L12:
        TintInfo r12 = this.mInternalBackgroundTint;
        if (r12 == null) goto L18;
        AppCompatDrawableManager.tintDrawable(r0, r12, this.mView.getDrawableState());
        return;
    L18:
        return;
    L7:
        if (applyFrameworkTintUsingColorFilter(r0) == false) goto L9;
    }

    void setInternalBackgroundTint(ColorStateList r2) {
        if (r2 != null) goto L4;
        this.mInternalBackgroundTint = null;
    L8:
        applySupportBackgroundTint();
        return;
    L4:
        if (this.mInternalBackgroundTint != null) goto L6;
        this.mInternalBackgroundTint = new TintInfo();
    L6:
        TintInfo r0 = this.mInternalBackgroundTint;
        r0.mTintList = r2;
        r0.mHasTintList = true;
        goto L8
    }

    private boolean shouldApplyFrameworkTintUsingColorFilter() {
        int r0 = Build.VERSION.SDK_INT;
        if (r0 > 21) goto L5;
        if (r0 != 21) goto L11;
        return true;
    L11:
        return false;
    L5:
        if (this.mInternalBackgroundTint != null) goto L12;
        return false;
    L12:
        return true;
    }

    private boolean applyFrameworkTintUsingColorFilter(@NonNull Drawable r4) {
        if (this.mTmpInfo != null) goto L5;
        this.mTmpInfo = new TintInfo();
    L5:
        TintInfo r0 = this.mTmpInfo;
        r0.clear();
        ColorStateList r1 = ViewCompat.getBackgroundTintList(this.mView);
        if (r1 == null) goto L8;
        r0.mHasTintList = true;
        r0.mTintList = r1;
    L8:
        PorterDuff.Mode r12 = ViewCompat.getBackgroundTintMode(this.mView);
        if (r12 == null) goto L12;
        r0.mHasTintMode = true;
        r0.mTintMode = r12;
    L12:
        if (r0.mHasTintList == false) goto L14;
    L18:
        AppCompatDrawableManager.tintDrawable(r4, r0, this.mView.getDrawableState());
        return true;
    L14:
        if (r0.mHasTintMode == true) goto L18;
        return false;
    }
}
