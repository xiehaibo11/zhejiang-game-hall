package android.support.v7.widget;

class AppCompatSeekBarHelper extends android.support.v7.widget.AppCompatProgressBarHelper {
    private boolean mHasTickMarkTint;
    private boolean mHasTickMarkTintMode;
    private android.graphics.drawable.Drawable mTickMark;
    private android.content.res.ColorStateList mTickMarkTintList;
    private android.graphics.PorterDuff.Mode mTickMarkTintMode;
    private final android.widget.SeekBar mView;

    AppCompatSeekBarHelper(android.widget.SeekBar r2) {
            r1 = this;
            r1.<init>(r2)
            r0 = 0
            r1.mTickMarkTintList = r0
            r1.mTickMarkTintMode = r0
            r0 = 0
            r1.mHasTickMarkTint = r0
            r1.mHasTickMarkTintMode = r0
            r1.mView = r2
            return
    }

    private void applyTickMarkTint() {
            r2 = this;
            android.graphics.drawable.Drawable r0 = r2.mTickMark
            if (r0 == 0) goto L3f
            boolean r0 = r2.mHasTickMarkTint
            if (r0 != 0) goto Lc
            boolean r0 = r2.mHasTickMarkTintMode
            if (r0 == 0) goto L3f
        Lc:
            android.graphics.drawable.Drawable r0 = r2.mTickMark
            android.graphics.drawable.Drawable r0 = r0.mutate()
            android.graphics.drawable.Drawable r0 = android.support.v4.graphics.drawable.DrawableCompat.wrap(r0)
            r2.mTickMark = r0
            boolean r1 = r2.mHasTickMarkTint
            if (r1 == 0) goto L21
            android.content.res.ColorStateList r1 = r2.mTickMarkTintList
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r1)
        L21:
            boolean r0 = r2.mHasTickMarkTintMode
            if (r0 == 0) goto L2c
            android.graphics.drawable.Drawable r0 = r2.mTickMark
            android.graphics.PorterDuff$Mode r1 = r2.mTickMarkTintMode
            android.support.v4.graphics.drawable.DrawableCompat.setTintMode(r0, r1)
        L2c:
            android.graphics.drawable.Drawable r0 = r2.mTickMark
            boolean r0 = r0.isStateful()
            if (r0 == 0) goto L3f
            android.graphics.drawable.Drawable r0 = r2.mTickMark
            android.widget.SeekBar r1 = r2.mView
            int[] r1 = r1.getDrawableState()
            r0.setState(r1)
        L3f:
            return
    }

    void drawTickMarks(android.graphics.Canvas r7) {
            r6 = this;
            android.graphics.drawable.Drawable r0 = r6.mTickMark
            if (r0 == 0) goto L6a
            android.widget.SeekBar r0 = r6.mView
            int r0 = r0.getMax()
            r1 = 1
            if (r0 <= r1) goto L6a
            android.graphics.drawable.Drawable r2 = r6.mTickMark
            int r2 = r2.getIntrinsicWidth()
            android.graphics.drawable.Drawable r3 = r6.mTickMark
            int r3 = r3.getIntrinsicHeight()
            if (r2 < 0) goto L1e
            int r2 = r2 / 2
            goto L1f
        L1e:
            r2 = r1
        L1f:
            if (r3 < 0) goto L23
            int r1 = r3 / 2
        L23:
            android.graphics.drawable.Drawable r3 = r6.mTickMark
            int r4 = -r2
            int r5 = -r1
            r3.setBounds(r4, r5, r2, r1)
            android.widget.SeekBar r1 = r6.mView
            int r1 = r1.getWidth()
            android.widget.SeekBar r2 = r6.mView
            int r2 = r2.getPaddingLeft()
            int r1 = r1 - r2
            android.widget.SeekBar r2 = r6.mView
            int r2 = r2.getPaddingRight()
            int r1 = r1 - r2
            float r1 = (float) r1
            float r2 = (float) r0
            float r1 = r1 / r2
            int r2 = r7.save()
            android.widget.SeekBar r3 = r6.mView
            int r3 = r3.getPaddingLeft()
            float r3 = (float) r3
            android.widget.SeekBar r4 = r6.mView
            int r4 = r4.getHeight()
            int r4 = r4 / 2
            float r4 = (float) r4
            r7.translate(r3, r4)
            r3 = 0
        L59:
            if (r3 > r0) goto L67
            android.graphics.drawable.Drawable r4 = r6.mTickMark
            r4.draw(r7)
            r4 = 0
            r7.translate(r1, r4)
            int r3 = r3 + 1
            goto L59
        L67:
            r7.restoreToCount(r2)
        L6a:
            return
    }

    void drawableStateChanged() {
            r2 = this;
            android.graphics.drawable.Drawable r0 = r2.mTickMark
            if (r0 == 0) goto L1b
            boolean r1 = r0.isStateful()
            if (r1 == 0) goto L1b
            android.widget.SeekBar r1 = r2.mView
            int[] r1 = r1.getDrawableState()
            boolean r1 = r0.setState(r1)
            if (r1 == 0) goto L1b
            android.widget.SeekBar r1 = r2.mView
            r1.invalidateDrawable(r0)
        L1b:
            return
    }

    android.graphics.drawable.Drawable getTickMark() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mTickMark
            return r0
    }

    android.content.res.ColorStateList getTickMarkTintList() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.mTickMarkTintList
            return r0
    }

    android.graphics.PorterDuff.Mode getTickMarkTintMode() {
            r1 = this;
            android.graphics.PorterDuff$Mode r0 = r1.mTickMarkTintMode
            return r0
    }

    void jumpDrawablesToCurrentState() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mTickMark
            if (r0 == 0) goto L7
            r0.jumpToCurrentState()
        L7:
            return
    }

    @Override
    void loadFromAttributes(android.util.AttributeSet r4, int r5) {
            r3 = this;
            super.loadFromAttributes(r4, r5)
            android.widget.SeekBar r0 = r3.mView
            android.content.Context r0 = r0.getContext()
            int[] r1 = android.support.v7.appcompat.R.styleable.AppCompatSeekBar
            r2 = 0
            android.support.v7.widget.TintTypedArray r4 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r0, r4, r1, r5, r2)
            int r5 = android.support.v7.appcompat.R.styleable.AppCompatSeekBar_android_thumb
            android.graphics.drawable.Drawable r5 = r4.getDrawableIfKnown(r5)
            if (r5 == 0) goto L1d
            android.widget.SeekBar r0 = r3.mView
            r0.setThumb(r5)
        L1d:
            int r5 = android.support.v7.appcompat.R.styleable.AppCompatSeekBar_tickMark
            android.graphics.drawable.Drawable r5 = r4.getDrawable(r5)
            r3.setTickMark(r5)
            int r5 = android.support.v7.appcompat.R.styleable.AppCompatSeekBar_tickMarkTintMode
            boolean r5 = r4.hasValue(r5)
            r0 = 1
            if (r5 == 0) goto L40
            int r5 = android.support.v7.appcompat.R.styleable.AppCompatSeekBar_tickMarkTintMode
            r1 = -1
            int r5 = r4.getInt(r5, r1)
            android.graphics.PorterDuff$Mode r1 = r3.mTickMarkTintMode
            android.graphics.PorterDuff$Mode r5 = android.support.v7.widget.DrawableUtils.parseTintMode(r5, r1)
            r3.mTickMarkTintMode = r5
            r3.mHasTickMarkTintMode = r0
        L40:
            int r5 = android.support.v7.appcompat.R.styleable.AppCompatSeekBar_tickMarkTint
            boolean r5 = r4.hasValue(r5)
            if (r5 == 0) goto L52
            int r5 = android.support.v7.appcompat.R.styleable.AppCompatSeekBar_tickMarkTint
            android.content.res.ColorStateList r5 = r4.getColorStateList(r5)
            r3.mTickMarkTintList = r5
            r3.mHasTickMarkTint = r0
        L52:
            r4.recycle()
            r3.applyTickMarkTint()
            return
    }

    void setTickMark(android.graphics.drawable.Drawable r3) {
            r2 = this;
            android.graphics.drawable.Drawable r0 = r2.mTickMark
            if (r0 == 0) goto L8
            r1 = 0
            r0.setCallback(r1)
        L8:
            r2.mTickMark = r3
            if (r3 == 0) goto L2c
            android.widget.SeekBar r0 = r2.mView
            r3.setCallback(r0)
            android.widget.SeekBar r0 = r2.mView
            int r0 = android.support.v4.view.ViewCompat.getLayoutDirection(r0)
            android.support.v4.graphics.drawable.DrawableCompat.setLayoutDirection(r3, r0)
            boolean r0 = r3.isStateful()
            if (r0 == 0) goto L29
            android.widget.SeekBar r0 = r2.mView
            int[] r0 = r0.getDrawableState()
            r3.setState(r0)
        L29:
            r2.applyTickMarkTint()
        L2c:
            android.widget.SeekBar r3 = r2.mView
            r3.invalidate()
            return
    }

    void setTickMarkTintList(android.content.res.ColorStateList r1) {
            r0 = this;
            r0.mTickMarkTintList = r1
            r1 = 1
            r0.mHasTickMarkTint = r1
            r0.applyTickMarkTint()
            return
    }

    void setTickMarkTintMode(android.graphics.PorterDuff.Mode r1) {
            r0 = this;
            r0.mTickMarkTintMode = r1
            r1 = 1
            r0.mHasTickMarkTintMode = r1
            r0.applyTickMarkTint()
            return
    }
}
