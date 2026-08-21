package android.support.v7.widget;

class AppCompatCompoundButtonHelper {
    private android.content.res.ColorStateList mButtonTintList;
    private android.graphics.PorterDuff.Mode mButtonTintMode;
    private boolean mHasButtonTint;
    private boolean mHasButtonTintMode;
    private boolean mSkipNextApply;
    private final android.widget.CompoundButton mView;

    interface DirectSetButtonDrawableInterface {
        void setButtonDrawable(android.graphics.drawable.Drawable r1);
    }

    AppCompatCompoundButtonHelper(android.widget.CompoundButton r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mButtonTintList = r0
            r1.mButtonTintMode = r0
            r0 = 0
            r1.mHasButtonTint = r0
            r1.mHasButtonTintMode = r0
            r1.mView = r2
            return
    }

    void applyButtonTint() {
            r2 = this;
            android.widget.CompoundButton r0 = r2.mView
            android.graphics.drawable.Drawable r0 = android.support.v4.widget.CompoundButtonCompat.getButtonDrawable(r0)
            if (r0 == 0) goto L3e
            boolean r1 = r2.mHasButtonTint
            if (r1 != 0) goto L10
            boolean r1 = r2.mHasButtonTintMode
            if (r1 == 0) goto L3e
        L10:
            android.graphics.drawable.Drawable r0 = android.support.v4.graphics.drawable.DrawableCompat.wrap(r0)
            android.graphics.drawable.Drawable r0 = r0.mutate()
            boolean r1 = r2.mHasButtonTint
            if (r1 == 0) goto L21
            android.content.res.ColorStateList r1 = r2.mButtonTintList
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r1)
        L21:
            boolean r1 = r2.mHasButtonTintMode
            if (r1 == 0) goto L2a
            android.graphics.PorterDuff$Mode r1 = r2.mButtonTintMode
            android.support.v4.graphics.drawable.DrawableCompat.setTintMode(r0, r1)
        L2a:
            boolean r1 = r0.isStateful()
            if (r1 == 0) goto L39
            android.widget.CompoundButton r1 = r2.mView
            int[] r1 = r1.getDrawableState()
            r0.setState(r1)
        L39:
            android.widget.CompoundButton r1 = r2.mView
            r1.setButtonDrawable(r0)
        L3e:
            return
    }

    int getCompoundPaddingLeft(int r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 >= r1) goto L13
            android.widget.CompoundButton r0 = r2.mView
            android.graphics.drawable.Drawable r0 = android.support.v4.widget.CompoundButtonCompat.getButtonDrawable(r0)
            if (r0 == 0) goto L13
            int r0 = r0.getIntrinsicWidth()
            int r3 = r3 + r0
        L13:
            return r3
    }

    android.content.res.ColorStateList getSupportButtonTintList() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.mButtonTintList
            return r0
    }

    android.graphics.PorterDuff.Mode getSupportButtonTintMode() {
            r1 = this;
            android.graphics.PorterDuff$Mode r0 = r1.mButtonTintMode
            return r0
    }

    void loadFromAttributes(android.util.AttributeSet r4, int r5) {
            r3 = this;
            android.widget.CompoundButton r0 = r3.mView
            android.content.Context r0 = r0.getContext()
            int[] r1 = android.support.v7.appcompat.R.styleable.CompoundButton
            r2 = 0
            android.content.res.TypedArray r4 = r0.obtainStyledAttributes(r4, r1, r5, r2)
            int r5 = android.support.v7.appcompat.R.styleable.CompoundButton_android_button     // Catch: java.lang.Throwable -> L5c
            boolean r5 = r4.hasValue(r5)     // Catch: java.lang.Throwable -> L5c
            if (r5 == 0) goto L2c
            int r5 = android.support.v7.appcompat.R.styleable.CompoundButton_android_button     // Catch: java.lang.Throwable -> L5c
            int r5 = r4.getResourceId(r5, r2)     // Catch: java.lang.Throwable -> L5c
            if (r5 == 0) goto L2c
            android.widget.CompoundButton r0 = r3.mView     // Catch: java.lang.Throwable -> L5c
            android.widget.CompoundButton r1 = r3.mView     // Catch: java.lang.Throwable -> L5c
            android.content.Context r1 = r1.getContext()     // Catch: java.lang.Throwable -> L5c
            android.graphics.drawable.Drawable r5 = android.support.v7.content.res.AppCompatResources.getDrawable(r1, r5)     // Catch: java.lang.Throwable -> L5c
            r0.setButtonDrawable(r5)     // Catch: java.lang.Throwable -> L5c
        L2c:
            int r5 = android.support.v7.appcompat.R.styleable.CompoundButton_buttonTint     // Catch: java.lang.Throwable -> L5c
            boolean r5 = r4.hasValue(r5)     // Catch: java.lang.Throwable -> L5c
            if (r5 == 0) goto L3f
            android.widget.CompoundButton r5 = r3.mView     // Catch: java.lang.Throwable -> L5c
            int r0 = android.support.v7.appcompat.R.styleable.CompoundButton_buttonTint     // Catch: java.lang.Throwable -> L5c
            android.content.res.ColorStateList r0 = r4.getColorStateList(r0)     // Catch: java.lang.Throwable -> L5c
            android.support.v4.widget.CompoundButtonCompat.setButtonTintList(r5, r0)     // Catch: java.lang.Throwable -> L5c
        L3f:
            int r5 = android.support.v7.appcompat.R.styleable.CompoundButton_buttonTintMode     // Catch: java.lang.Throwable -> L5c
            boolean r5 = r4.hasValue(r5)     // Catch: java.lang.Throwable -> L5c
            if (r5 == 0) goto L58
            android.widget.CompoundButton r5 = r3.mView     // Catch: java.lang.Throwable -> L5c
            int r0 = android.support.v7.appcompat.R.styleable.CompoundButton_buttonTintMode     // Catch: java.lang.Throwable -> L5c
            r1 = -1
            int r0 = r4.getInt(r0, r1)     // Catch: java.lang.Throwable -> L5c
            r1 = 0
            android.graphics.PorterDuff$Mode r0 = android.support.v7.widget.DrawableUtils.parseTintMode(r0, r1)     // Catch: java.lang.Throwable -> L5c
            android.support.v4.widget.CompoundButtonCompat.setButtonTintMode(r5, r0)     // Catch: java.lang.Throwable -> L5c
        L58:
            r4.recycle()
            return
        L5c:
            r5 = move-exception
            r4.recycle()
            throw r5
    }

    void onSetButtonDrawable() {
            r1 = this;
            boolean r0 = r1.mSkipNextApply
            if (r0 == 0) goto L8
            r0 = 0
            r1.mSkipNextApply = r0
            return
        L8:
            r0 = 1
            r1.mSkipNextApply = r0
            r1.applyButtonTint()
            return
    }

    void setSupportButtonTintList(android.content.res.ColorStateList r1) {
            r0 = this;
            r0.mButtonTintList = r1
            r1 = 1
            r0.mHasButtonTint = r1
            r0.applyButtonTint()
            return
    }

    void setSupportButtonTintMode(android.graphics.PorterDuff.Mode r1) {
            r0 = this;
            r0.mButtonTintMode = r1
            r1 = 1
            r0.mHasButtonTintMode = r1
            r0.applyButtonTint()
            return
    }
}
