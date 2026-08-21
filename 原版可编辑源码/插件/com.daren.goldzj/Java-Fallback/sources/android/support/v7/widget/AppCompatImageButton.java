package android.support.v7.widget;

import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.Bitmap;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.support.annotation.DrawableRes;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.view.TintableBackgroundView;
import android.support.v4.widget.TintableImageSourceView;
import android.support.v7.appcompat.R;
import android.util.AttributeSet;
import android.widget.ImageButton;

public class AppCompatImageButton extends ImageButton implements TintableBackgroundView, TintableImageSourceView {
    private final AppCompatBackgroundHelper mBackgroundTintHelper;
    private final AppCompatImageHelper mImageHelper;

    public AppCompatImageButton(Context r2) {
        this(r2, null);
    }

    public AppCompatImageButton(Context r2, AttributeSet r3) {
        this(r2, r3, R.attr.imageButtonStyle);
    }

    public AppCompatImageButton(Context r1, AttributeSet r2, int r3) {
        super(TintContextWrapper.wrap(r1), r2, r3);
        this.mBackgroundTintHelper = new AppCompatBackgroundHelper(this);
        this.mBackgroundTintHelper.loadFromAttributes(r2, r3);
        this.mImageHelper = new AppCompatImageHelper(this);
        this.mImageHelper.loadFromAttributes(r2, r3);
    }

    @Override
    public void setImageResource(@DrawableRes int r2) {
        this.mImageHelper.setImageResource(r2);
    }

    @Override
    public void setImageDrawable(@Nullable Drawable r1) {
        super.setImageDrawable(r1);
        AppCompatImageHelper r12 = this.mImageHelper;
        if (r12 == null) goto L6;
        r12.applySupportImageTint();
        return;
    }

    @Override
    public void setImageBitmap(Bitmap r1) {
        super.setImageBitmap(r1);
        AppCompatImageHelper r12 = this.mImageHelper;
        if (r12 == null) goto L6;
        r12.applySupportImageTint();
        return;
    }

    @Override
    public void setImageURI(@Nullable Uri r1) {
        super.setImageURI(r1);
        AppCompatImageHelper r12 = this.mImageHelper;
        if (r12 == null) goto L6;
        r12.applySupportImageTint();
        return;
    }

    @Override
    public void setBackgroundResource(@DrawableRes int r2) {
        super.setBackgroundResource(r2);
        AppCompatBackgroundHelper r0 = this.mBackgroundTintHelper;
        if (r0 == null) goto L6;
        r0.onSetBackgroundResource(r2);
        return;
    }

    @Override
    public void setBackgroundDrawable(Drawable r2) {
        super.setBackgroundDrawable(r2);
        AppCompatBackgroundHelper r0 = this.mBackgroundTintHelper;
        if (r0 == null) goto L6;
        r0.onSetBackgroundDrawable(r2);
        return;
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setSupportBackgroundTintList(@Nullable ColorStateList r2) {
        AppCompatBackgroundHelper r0 = this.mBackgroundTintHelper;
        if (r0 == null) goto L6;
        r0.setSupportBackgroundTintList(r2);
        return;
    }

    @Override
    @Nullable
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public ColorStateList getSupportBackgroundTintList() {
        AppCompatBackgroundHelper r0 = this.mBackgroundTintHelper;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.getSupportBackgroundTintList();
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setSupportBackgroundTintMode(@Nullable PorterDuff.Mode r2) {
        AppCompatBackgroundHelper r0 = this.mBackgroundTintHelper;
        if (r0 == null) goto L6;
        r0.setSupportBackgroundTintMode(r2);
        return;
    }

    @Override
    @Nullable
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public PorterDuff.Mode getSupportBackgroundTintMode() {
        AppCompatBackgroundHelper r0 = this.mBackgroundTintHelper;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.getSupportBackgroundTintMode();
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setSupportImageTintList(@Nullable ColorStateList r2) {
        AppCompatImageHelper r0 = this.mImageHelper;
        if (r0 == null) goto L6;
        r0.setSupportImageTintList(r2);
        return;
    }

    @Override
    @Nullable
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public ColorStateList getSupportImageTintList() {
        AppCompatImageHelper r0 = this.mImageHelper;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.getSupportImageTintList();
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setSupportImageTintMode(@Nullable PorterDuff.Mode r2) {
        AppCompatImageHelper r0 = this.mImageHelper;
        if (r0 == null) goto L6;
        r0.setSupportImageTintMode(r2);
        return;
    }

    @Override
    @Nullable
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public PorterDuff.Mode getSupportImageTintMode() {
        AppCompatImageHelper r0 = this.mImageHelper;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.getSupportImageTintMode();
    }

    @Override
    protected void drawableStateChanged() {
        super.drawableStateChanged();
        AppCompatBackgroundHelper r0 = this.mBackgroundTintHelper;
        if (r0 == null) goto L5;
        r0.applySupportBackgroundTint();
    L5:
        AppCompatImageHelper r02 = this.mImageHelper;
        if (r02 == null) goto L9;
        r02.applySupportImageTint();
        return;
    }

    @Override
    public boolean hasOverlappingRendering() {
        if (this.mImageHelper.hasOverlappingRendering() == true) goto L5;
    L7:
        return false;
    L5:
        if (super.hasOverlappingRendering() == false) goto L7;
        return true;
    }
}
