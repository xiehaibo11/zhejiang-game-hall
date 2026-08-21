package android.support.v7.widget;

public class AppCompatImageHelper {
    private android.support.v7.widget.TintInfo mImageTint;
    private android.support.v7.widget.TintInfo mInternalImageTint;
    private android.support.v7.widget.TintInfo mTmpInfo;
    private final android.widget.ImageView mView;

    public AppCompatImageHelper(android.widget.ImageView r1) {
            r0 = this;
            r0.<init>()
            r0.mView = r1
            return
    }

    private boolean applyFrameworkTintUsingColorFilter(android.graphics.drawable.Drawable r4) {
            r3 = this;
            android.support.v7.widget.TintInfo r0 = r3.mTmpInfo
            if (r0 != 0) goto Lb
            android.support.v7.widget.TintInfo r0 = new android.support.v7.widget.TintInfo
            r0.<init>()
            r3.mTmpInfo = r0
        Lb:
            android.support.v7.widget.TintInfo r0 = r3.mTmpInfo
            r0.clear()
            android.widget.ImageView r1 = r3.mView
            android.content.res.ColorStateList r1 = android.support.v4.widget.ImageViewCompat.getImageTintList(r1)
            r2 = 1
            if (r1 == 0) goto L1d
            r0.mHasTintList = r2
            r0.mTintList = r1
        L1d:
            android.widget.ImageView r1 = r3.mView
            android.graphics.PorterDuff$Mode r1 = android.support.v4.widget.ImageViewCompat.getImageTintMode(r1)
            if (r1 == 0) goto L29
            r0.mHasTintMode = r2
            r0.mTintMode = r1
        L29:
            boolean r1 = r0.mHasTintList
            if (r1 != 0) goto L34
            boolean r1 = r0.mHasTintMode
            if (r1 == 0) goto L32
            goto L34
        L32:
            r4 = 0
            return r4
        L34:
            android.widget.ImageView r1 = r3.mView
            int[] r1 = r1.getDrawableState()
            android.support.v7.widget.AppCompatDrawableManager.tintDrawable(r4, r0, r1)
            return r2
    }

    private boolean shouldApplyFrameworkTintUsingColorFilter() {
            r4 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 1
            r2 = 0
            r3 = 21
            if (r0 <= r3) goto Lf
            android.support.v7.widget.TintInfo r0 = r4.mInternalImageTint
            if (r0 == 0) goto Ld
            goto Le
        Ld:
            r1 = r2
        Le:
            return r1
        Lf:
            if (r0 != r3) goto L12
            return r1
        L12:
            return r2
    }

    void applySupportImageTint() {
            r3 = this;
            android.widget.ImageView r0 = r3.mView
            android.graphics.drawable.Drawable r0 = r0.getDrawable()
            if (r0 == 0) goto Lb
            android.support.v7.widget.DrawableUtils.fixDrawable(r0)
        Lb:
            if (r0 == 0) goto L35
            boolean r1 = r3.shouldApplyFrameworkTintUsingColorFilter()
            if (r1 == 0) goto L1a
            boolean r1 = r3.applyFrameworkTintUsingColorFilter(r0)
            if (r1 == 0) goto L1a
            return
        L1a:
            android.support.v7.widget.TintInfo r1 = r3.mImageTint
            if (r1 == 0) goto L28
            android.widget.ImageView r2 = r3.mView
            int[] r2 = r2.getDrawableState()
            android.support.v7.widget.AppCompatDrawableManager.tintDrawable(r0, r1, r2)
            goto L35
        L28:
            android.support.v7.widget.TintInfo r1 = r3.mInternalImageTint
            if (r1 == 0) goto L35
            android.widget.ImageView r2 = r3.mView
            int[] r2 = r2.getDrawableState()
            android.support.v7.widget.AppCompatDrawableManager.tintDrawable(r0, r1, r2)
        L35:
            return
    }

    android.content.res.ColorStateList getSupportImageTintList() {
            r1 = this;
            android.support.v7.widget.TintInfo r0 = r1.mImageTint
            if (r0 == 0) goto L7
            android.content.res.ColorStateList r0 = r0.mTintList
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    android.graphics.PorterDuff.Mode getSupportImageTintMode() {
            r1 = this;
            android.support.v7.widget.TintInfo r0 = r1.mImageTint
            if (r0 == 0) goto L7
            android.graphics.PorterDuff$Mode r0 = r0.mTintMode
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    boolean hasOverlappingRendering() {
            r3 = this;
            android.widget.ImageView r0 = r3.mView
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L12
            boolean r0 = r0 instanceof android.graphics.drawable.RippleDrawable
            if (r0 == 0) goto L12
            r0 = 0
            return r0
        L12:
            r0 = 1
            return r0
    }

    public void loadFromAttributes(android.util.AttributeSet r4, int r5) {
            r3 = this;
            android.widget.ImageView r0 = r3.mView
            android.content.Context r0 = r0.getContext()
            int[] r1 = android.support.v7.appcompat.R.styleable.AppCompatImageView
            r2 = 0
            android.support.v7.widget.TintTypedArray r4 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r0, r4, r1, r5, r2)
            android.widget.ImageView r5 = r3.mView     // Catch: java.lang.Throwable -> L63
            android.graphics.drawable.Drawable r5 = r5.getDrawable()     // Catch: java.lang.Throwable -> L63
            r0 = -1
            if (r5 != 0) goto L2f
            int r1 = android.support.v7.appcompat.R.styleable.AppCompatImageView_srcCompat     // Catch: java.lang.Throwable -> L63
            int r1 = r4.getResourceId(r1, r0)     // Catch: java.lang.Throwable -> L63
            if (r1 == r0) goto L2f
            android.widget.ImageView r5 = r3.mView     // Catch: java.lang.Throwable -> L63
            android.content.Context r5 = r5.getContext()     // Catch: java.lang.Throwable -> L63
            android.graphics.drawable.Drawable r5 = android.support.v7.content.res.AppCompatResources.getDrawable(r5, r1)     // Catch: java.lang.Throwable -> L63
            if (r5 == 0) goto L2f
            android.widget.ImageView r1 = r3.mView     // Catch: java.lang.Throwable -> L63
            r1.setImageDrawable(r5)     // Catch: java.lang.Throwable -> L63
        L2f:
            if (r5 == 0) goto L34
            android.support.v7.widget.DrawableUtils.fixDrawable(r5)     // Catch: java.lang.Throwable -> L63
        L34:
            int r5 = android.support.v7.appcompat.R.styleable.AppCompatImageView_tint     // Catch: java.lang.Throwable -> L63
            boolean r5 = r4.hasValue(r5)     // Catch: java.lang.Throwable -> L63
            if (r5 == 0) goto L47
            android.widget.ImageView r5 = r3.mView     // Catch: java.lang.Throwable -> L63
            int r1 = android.support.v7.appcompat.R.styleable.AppCompatImageView_tint     // Catch: java.lang.Throwable -> L63
            android.content.res.ColorStateList r1 = r4.getColorStateList(r1)     // Catch: java.lang.Throwable -> L63
            android.support.v4.widget.ImageViewCompat.setImageTintList(r5, r1)     // Catch: java.lang.Throwable -> L63
        L47:
            int r5 = android.support.v7.appcompat.R.styleable.AppCompatImageView_tintMode     // Catch: java.lang.Throwable -> L63
            boolean r5 = r4.hasValue(r5)     // Catch: java.lang.Throwable -> L63
            if (r5 == 0) goto L5f
            android.widget.ImageView r5 = r3.mView     // Catch: java.lang.Throwable -> L63
            int r1 = android.support.v7.appcompat.R.styleable.AppCompatImageView_tintMode     // Catch: java.lang.Throwable -> L63
            int r0 = r4.getInt(r1, r0)     // Catch: java.lang.Throwable -> L63
            r1 = 0
            android.graphics.PorterDuff$Mode r0 = android.support.v7.widget.DrawableUtils.parseTintMode(r0, r1)     // Catch: java.lang.Throwable -> L63
            android.support.v4.widget.ImageViewCompat.setImageTintMode(r5, r0)     // Catch: java.lang.Throwable -> L63
        L5f:
            r4.recycle()
            return
        L63:
            r5 = move-exception
            r4.recycle()
            throw r5
    }

    public void setImageResource(int r2) {
            r1 = this;
            if (r2 == 0) goto L17
            android.widget.ImageView r0 = r1.mView
            android.content.Context r0 = r0.getContext()
            android.graphics.drawable.Drawable r2 = android.support.v7.content.res.AppCompatResources.getDrawable(r0, r2)
            if (r2 == 0) goto L11
            android.support.v7.widget.DrawableUtils.fixDrawable(r2)
        L11:
            android.widget.ImageView r0 = r1.mView
            r0.setImageDrawable(r2)
            goto L1d
        L17:
            android.widget.ImageView r2 = r1.mView
            r0 = 0
            r2.setImageDrawable(r0)
        L1d:
            r1.applySupportImageTint()
            return
    }

    void setInternalImageTint(android.content.res.ColorStateList r2) {
            r1 = this;
            if (r2 == 0) goto L17
            android.support.v7.widget.TintInfo r0 = r1.mInternalImageTint
            if (r0 != 0) goto Ld
            android.support.v7.widget.TintInfo r0 = new android.support.v7.widget.TintInfo
            r0.<init>()
            r1.mInternalImageTint = r0
        Ld:
            android.support.v7.widget.TintInfo r0 = r1.mInternalImageTint
            r0.mTintList = r2
            android.support.v7.widget.TintInfo r2 = r1.mInternalImageTint
            r0 = 1
            r2.mHasTintList = r0
            goto L1a
        L17:
            r2 = 0
            r1.mInternalImageTint = r2
        L1a:
            r1.applySupportImageTint()
            return
    }

    void setSupportImageTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.v7.widget.TintInfo r0 = r1.mImageTint
            if (r0 != 0) goto Lb
            android.support.v7.widget.TintInfo r0 = new android.support.v7.widget.TintInfo
            r0.<init>()
            r1.mImageTint = r0
        Lb:
            android.support.v7.widget.TintInfo r0 = r1.mImageTint
            r0.mTintList = r2
            android.support.v7.widget.TintInfo r2 = r1.mImageTint
            r0 = 1
            r2.mHasTintList = r0
            r1.applySupportImageTint()
            return
    }

    void setSupportImageTintMode(android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            android.support.v7.widget.TintInfo r0 = r1.mImageTint
            if (r0 != 0) goto Lb
            android.support.v7.widget.TintInfo r0 = new android.support.v7.widget.TintInfo
            r0.<init>()
            r1.mImageTint = r0
        Lb:
            android.support.v7.widget.TintInfo r0 = r1.mImageTint
            r0.mTintMode = r2
            android.support.v7.widget.TintInfo r2 = r1.mImageTint
            r0 = 1
            r2.mHasTintMode = r0
            r1.applySupportImageTint()
            return
    }
}
