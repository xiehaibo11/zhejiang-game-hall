package android.support.v7.widget;

import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.RippleDrawable;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.RestrictTo;
import android.support.v4.widget.ImageViewCompat;
import android.support.v7.appcompat.R;
import android.support.v7.content.res.AppCompatResources;
import android.util.AttributeSet;
import android.widget.ImageView;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class AppCompatImageHelper {
    private TintInfo mImageTint;
    private TintInfo mInternalImageTint;
    private TintInfo mTmpInfo;
    private final ImageView mView;

    public AppCompatImageHelper(ImageView r1) {
        this.mView = r1;
    }

    public void loadFromAttributes(AttributeSet r4, int r5) {
        TintTypedArray r42 = TintTypedArray.obtainStyledAttributes(this.mView.getContext(), r4, R.styleable.AppCompatImageView, r5, 0);
        Drawable r52 = this.mView.getDrawable();     // Catch: Throwable -> L20
        if (r52 != null) goto L10;
        int r1 = r42.getResourceId(R.styleable.AppCompatImageView_srcCompat, -1);     // Catch: Throwable -> L20
        if (r1 == (-1)) goto L10;
        r52 = AppCompatResources.getDrawable(this.mView.getContext(), r1);     // Catch: Throwable -> L20
        if (r52 == null) goto L10;
        this.mView.setImageDrawable(r52);     // Catch: Throwable -> L20
    L10:
        if (r52 == null) goto L13;
        DrawableUtils.fixDrawable(r52);     // Catch: Throwable -> L20
    L13:
        if (r42.hasValue(R.styleable.AppCompatImageView_tint) == false) goto L16;
        ImageViewCompat.setImageTintList(this.mView, r42.getColorStateList(R.styleable.AppCompatImageView_tint));     // Catch: Throwable -> L20
    L16:
        if (r42.hasValue(R.styleable.AppCompatImageView_tintMode) == false) goto L18;
        ImageViewCompat.setImageTintMode(this.mView, DrawableUtils.parseTintMode(r42.getInt(R.styleable.AppCompatImageView_tintMode, -1), null));     // Catch: Throwable -> L20
    L18:
        r42.recycle();
        return;
    L20:
        th = move-exception;
        r42.recycle();
        throw th;
    }

    public void setImageResource(int r2) {
        if (r2 == 0) goto L7;
        Drawable r22 = AppCompatResources.getDrawable(this.mView.getContext(), r2);
        if (r22 == null) goto L6;
        DrawableUtils.fixDrawable(r22);
    L6:
        this.mView.setImageDrawable(r22);
    L8:
        applySupportImageTint();
        return;
    L7:
        this.mView.setImageDrawable(null);
        goto L8
    }

    boolean hasOverlappingRendering() {
        Drawable r0 = this.mView.getBackground();
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return true;
    L5:
        if ((r0 instanceof RippleDrawable) == false) goto L10;
        return false;
    L10:
        return true;
    }

    void setSupportImageTintList(ColorStateList r2) {
        if (this.mImageTint != null) goto L5;
        this.mImageTint = new TintInfo();
    L5:
        TintInfo r0 = this.mImageTint;
        r0.mTintList = r2;
        r0.mHasTintList = true;
        applySupportImageTint();
    }

    ColorStateList getSupportImageTintList() {
        TintInfo r0 = this.mImageTint;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.mTintList;
    }

    void setSupportImageTintMode(PorterDuff.Mode r2) {
        if (this.mImageTint != null) goto L5;
        this.mImageTint = new TintInfo();
    L5:
        TintInfo r0 = this.mImageTint;
        r0.mTintMode = r2;
        r0.mHasTintMode = true;
        applySupportImageTint();
    }

    PorterDuff.Mode getSupportImageTintMode() {
        TintInfo r0 = this.mImageTint;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.mTintMode;
    }

    void applySupportImageTint() {
        Drawable r0 = this.mView.getDrawable();
        if (r0 == null) goto L5;
        DrawableUtils.fixDrawable(r0);
    L5:
        if (r0 != null) goto L7;
        return;
    L7:
        if (shouldApplyFrameworkTintUsingColorFilter() == true) goto L9;
    L11:
        TintInfo r1 = this.mImageTint;
        if (r1 == null) goto L14;
        AppCompatDrawableManager.tintDrawable(r0, r1, this.mView.getDrawableState());
        return;
    L14:
        TintInfo r12 = this.mInternalImageTint;
        if (r12 == null) goto L20;
        AppCompatDrawableManager.tintDrawable(r0, r12, this.mView.getDrawableState());
        return;
    L20:
        return;
    L9:
        if (applyFrameworkTintUsingColorFilter(r0) == false) goto L11;
    }

    void setInternalImageTint(ColorStateList r2) {
        if (r2 != null) goto L4;
        this.mInternalImageTint = null;
    L8:
        applySupportImageTint();
        return;
    L4:
        if (this.mInternalImageTint != null) goto L6;
        this.mInternalImageTint = new TintInfo();
    L6:
        TintInfo r0 = this.mInternalImageTint;
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
        if (this.mInternalImageTint != null) goto L12;
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
        ColorStateList r1 = ImageViewCompat.getImageTintList(this.mView);
        if (r1 == null) goto L8;
        r0.mHasTintList = true;
        r0.mTintList = r1;
    L8:
        PorterDuff.Mode r12 = ImageViewCompat.getImageTintMode(this.mView);
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
