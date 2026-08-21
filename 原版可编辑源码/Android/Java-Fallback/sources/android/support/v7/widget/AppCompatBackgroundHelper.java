package android.support.v7.widget;

class AppCompatBackgroundHelper {
    private int mBackgroundResId;
    private android.support.v7.widget.TintInfo mBackgroundTint;
    private final android.support.v7.widget.AppCompatDrawableManager mDrawableManager;
    private android.support.v7.widget.TintInfo mInternalBackgroundTint;
    private android.support.v7.widget.TintInfo mTmpInfo;
    private final android.view.View mView;

    AppCompatBackgroundHelper(android.view.View r2) {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.mBackgroundResId = r0
            r1.mView = r2
            android.support.v7.widget.AppCompatDrawableManager r2 = android.support.v7.widget.AppCompatDrawableManager.get()
            r1.mDrawableManager = r2
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
            android.view.View r1 = r3.mView
            android.content.res.ColorStateList r1 = android.support.v4.view.ViewCompat.getBackgroundTintList(r1)
            r2 = 1
            if (r1 == 0) goto L1d
            r0.mHasTintList = r2
            r0.mTintList = r1
        L1d:
            android.view.View r1 = r3.mView
            android.graphics.PorterDuff$Mode r1 = android.support.v4.view.ViewCompat.getBackgroundTintMode(r1)
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
            android.view.View r1 = r3.mView
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
            android.support.v7.widget.TintInfo r0 = r4.mInternalBackgroundTint
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

    void applySupportBackgroundTint() {
            r3 = this;
            android.view.View r0 = r3.mView
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            if (r0 == 0) goto L30
            boolean r1 = r3.shouldApplyFrameworkTintUsingColorFilter()
            if (r1 == 0) goto L15
            boolean r1 = r3.applyFrameworkTintUsingColorFilter(r0)
            if (r1 == 0) goto L15
            return
        L15:
            android.support.v7.widget.TintInfo r1 = r3.mBackgroundTint
            if (r1 == 0) goto L23
            android.view.View r2 = r3.mView
            int[] r2 = r2.getDrawableState()
            android.support.v7.widget.AppCompatDrawableManager.tintDrawable(r0, r1, r2)
            goto L30
        L23:
            android.support.v7.widget.TintInfo r1 = r3.mInternalBackgroundTint
            if (r1 == 0) goto L30
            android.view.View r2 = r3.mView
            int[] r2 = r2.getDrawableState()
            android.support.v7.widget.AppCompatDrawableManager.tintDrawable(r0, r1, r2)
        L30:
            return
    }

    android.content.res.ColorStateList getSupportBackgroundTintList() {
            r1 = this;
            android.support.v7.widget.TintInfo r0 = r1.mBackgroundTint
            if (r0 == 0) goto L7
            android.content.res.ColorStateList r0 = r0.mTintList
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    android.graphics.PorterDuff.Mode getSupportBackgroundTintMode() {
            r1 = this;
            android.support.v7.widget.TintInfo r0 = r1.mBackgroundTint
            if (r0 == 0) goto L7
            android.graphics.PorterDuff$Mode r0 = r0.mTintMode
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    void loadFromAttributes(android.util.AttributeSet r4, int r5) {
            r3 = this;
            android.view.View r0 = r3.mView
            android.content.Context r0 = r0.getContext()
            int[] r1 = android.support.v7.appcompat.R.styleable.ViewBackgroundHelper
            r2 = 0
            android.support.v7.widget.TintTypedArray r4 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r0, r4, r1, r5, r2)
            int r5 = android.support.v7.appcompat.R.styleable.ViewBackgroundHelper_android_background     // Catch: java.lang.Throwable -> L60
            boolean r5 = r4.hasValue(r5)     // Catch: java.lang.Throwable -> L60
            r0 = -1
            if (r5 == 0) goto L31
            int r5 = android.support.v7.appcompat.R.styleable.ViewBackgroundHelper_android_background     // Catch: java.lang.Throwable -> L60
            int r5 = r4.getResourceId(r5, r0)     // Catch: java.lang.Throwable -> L60
            r3.mBackgroundResId = r5     // Catch: java.lang.Throwable -> L60
            android.support.v7.widget.AppCompatDrawableManager r5 = r3.mDrawableManager     // Catch: java.lang.Throwable -> L60
            android.view.View r1 = r3.mView     // Catch: java.lang.Throwable -> L60
            android.content.Context r1 = r1.getContext()     // Catch: java.lang.Throwable -> L60
            int r2 = r3.mBackgroundResId     // Catch: java.lang.Throwable -> L60
            android.content.res.ColorStateList r5 = r5.getTintList(r1, r2)     // Catch: java.lang.Throwable -> L60
            if (r5 == 0) goto L31
            r3.setInternalBackgroundTint(r5)     // Catch: java.lang.Throwable -> L60
        L31:
            int r5 = android.support.v7.appcompat.R.styleable.ViewBackgroundHelper_backgroundTint     // Catch: java.lang.Throwable -> L60
            boolean r5 = r4.hasValue(r5)     // Catch: java.lang.Throwable -> L60
            if (r5 == 0) goto L44
            android.view.View r5 = r3.mView     // Catch: java.lang.Throwable -> L60
            int r1 = android.support.v7.appcompat.R.styleable.ViewBackgroundHelper_backgroundTint     // Catch: java.lang.Throwable -> L60
            android.content.res.ColorStateList r1 = r4.getColorStateList(r1)     // Catch: java.lang.Throwable -> L60
            android.support.v4.view.ViewCompat.setBackgroundTintList(r5, r1)     // Catch: java.lang.Throwable -> L60
        L44:
            int r5 = android.support.v7.appcompat.R.styleable.ViewBackgroundHelper_backgroundTintMode     // Catch: java.lang.Throwable -> L60
            boolean r5 = r4.hasValue(r5)     // Catch: java.lang.Throwable -> L60
            if (r5 == 0) goto L5c
            android.view.View r5 = r3.mView     // Catch: java.lang.Throwable -> L60
            int r1 = android.support.v7.appcompat.R.styleable.ViewBackgroundHelper_backgroundTintMode     // Catch: java.lang.Throwable -> L60
            int r0 = r4.getInt(r1, r0)     // Catch: java.lang.Throwable -> L60
            r1 = 0
            android.graphics.PorterDuff$Mode r0 = android.support.v7.widget.DrawableUtils.parseTintMode(r0, r1)     // Catch: java.lang.Throwable -> L60
            android.support.v4.view.ViewCompat.setBackgroundTintMode(r5, r0)     // Catch: java.lang.Throwable -> L60
        L5c:
            r4.recycle()
            return
        L60:
            r5 = move-exception
            r4.recycle()
            throw r5
    }

    void onSetBackgroundDrawable(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r1 = -1
            r0.mBackgroundResId = r1
            r1 = 0
            r0.setInternalBackgroundTint(r1)
            r0.applySupportBackgroundTint()
            return
    }

    void onSetBackgroundResource(int r3) {
            r2 = this;
            r2.mBackgroundResId = r3
            android.support.v7.widget.AppCompatDrawableManager r0 = r2.mDrawableManager
            if (r0 == 0) goto L11
            android.view.View r1 = r2.mView
            android.content.Context r1 = r1.getContext()
            android.content.res.ColorStateList r3 = r0.getTintList(r1, r3)
            goto L12
        L11:
            r3 = 0
        L12:
            r2.setInternalBackgroundTint(r3)
            r2.applySupportBackgroundTint()
            return
    }

    void setInternalBackgroundTint(android.content.res.ColorStateList r2) {
            r1 = this;
            if (r2 == 0) goto L17
            android.support.v7.widget.TintInfo r0 = r1.mInternalBackgroundTint
            if (r0 != 0) goto Ld
            android.support.v7.widget.TintInfo r0 = new android.support.v7.widget.TintInfo
            r0.<init>()
            r1.mInternalBackgroundTint = r0
        Ld:
            android.support.v7.widget.TintInfo r0 = r1.mInternalBackgroundTint
            r0.mTintList = r2
            android.support.v7.widget.TintInfo r2 = r1.mInternalBackgroundTint
            r0 = 1
            r2.mHasTintList = r0
            goto L1a
        L17:
            r2 = 0
            r1.mInternalBackgroundTint = r2
        L1a:
            r1.applySupportBackgroundTint()
            return
    }

    void setSupportBackgroundTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.v7.widget.TintInfo r0 = r1.mBackgroundTint
            if (r0 != 0) goto Lb
            android.support.v7.widget.TintInfo r0 = new android.support.v7.widget.TintInfo
            r0.<init>()
            r1.mBackgroundTint = r0
        Lb:
            android.support.v7.widget.TintInfo r0 = r1.mBackgroundTint
            r0.mTintList = r2
            android.support.v7.widget.TintInfo r2 = r1.mBackgroundTint
            r0 = 1
            r2.mHasTintList = r0
            r1.applySupportBackgroundTint()
            return
    }

    void setSupportBackgroundTintMode(android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            android.support.v7.widget.TintInfo r0 = r1.mBackgroundTint
            if (r0 != 0) goto Lb
            android.support.v7.widget.TintInfo r0 = new android.support.v7.widget.TintInfo
            r0.<init>()
            r1.mBackgroundTint = r0
        Lb:
            android.support.v7.widget.TintInfo r0 = r1.mBackgroundTint
            r0.mTintMode = r2
            android.support.v7.widget.TintInfo r2 = r1.mBackgroundTint
            r0 = 1
            r2.mHasTintMode = r0
            r1.applySupportBackgroundTint()
            return
    }
}
