package android.support.v7.widget;

import android.content.res.ColorStateList;
import android.graphics.Canvas;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.support.annotation.Nullable;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.support.v4.view.ViewCompat;
import android.support.v7.appcompat.R;
import android.util.AttributeSet;
import android.widget.SeekBar;

class AppCompatSeekBarHelper extends AppCompatProgressBarHelper {
    private boolean mHasTickMarkTint;
    private boolean mHasTickMarkTintMode;
    private Drawable mTickMark;
    private ColorStateList mTickMarkTintList;
    private PorterDuff.Mode mTickMarkTintMode;
    private final SeekBar mView;

    AppCompatSeekBarHelper(SeekBar r2) {
        super(r2);
        this.mTickMarkTintList = null;
        this.mTickMarkTintMode = null;
        this.mHasTickMarkTint = false;
        this.mHasTickMarkTintMode = false;
        this.mView = r2;
    }

    @Override
    void loadFromAttributes(AttributeSet r4, int r5) {
        super.loadFromAttributes(r4, r5);
        TintTypedArray r42 = TintTypedArray.obtainStyledAttributes(this.mView.getContext(), r4, R.styleable.AppCompatSeekBar, r5, 0);
        Drawable r52 = r42.getDrawableIfKnown(R.styleable.AppCompatSeekBar_android_thumb);
        if (r52 == null) goto L5;
        this.mView.setThumb(r52);
    L5:
        setTickMark(r42.getDrawable(R.styleable.AppCompatSeekBar_tickMark));
        if (r42.hasValue(R.styleable.AppCompatSeekBar_tickMarkTintMode) == false) goto L9;
        this.mTickMarkTintMode = DrawableUtils.parseTintMode(r42.getInt(R.styleable.AppCompatSeekBar_tickMarkTintMode, -1), this.mTickMarkTintMode);
        this.mHasTickMarkTintMode = true;
    L9:
        if (r42.hasValue(R.styleable.AppCompatSeekBar_tickMarkTint) == false) goto L11;
        this.mTickMarkTintList = r42.getColorStateList(R.styleable.AppCompatSeekBar_tickMarkTint);
        this.mHasTickMarkTint = true;
    L11:
        r42.recycle();
        applyTickMarkTint();
    }

    void setTickMark(@Nullable Drawable r3) {
        Drawable r0 = this.mTickMark;
        if (r0 == null) goto L5;
        r0.setCallback(null);
    L5:
        this.mTickMark = r3;
        if (r3 == null) goto L11;
        r3.setCallback(this.mView);
        DrawableCompat.setLayoutDirection(r3, ViewCompat.getLayoutDirection(this.mView));
        if (r3.isStateful() == false) goto L10;
        r3.setState(this.mView.getDrawableState());
    L10:
        applyTickMarkTint();
    L11:
        this.mView.invalidate();
    }

    @Nullable
    Drawable getTickMark() {
        return this.mTickMark;
    }

    void setTickMarkTintList(@Nullable ColorStateList r1) {
        this.mTickMarkTintList = r1;
        this.mHasTickMarkTint = true;
        applyTickMarkTint();
    }

    @Nullable
    ColorStateList getTickMarkTintList() {
        return this.mTickMarkTintList;
    }

    void setTickMarkTintMode(@Nullable PorterDuff.Mode r1) {
        this.mTickMarkTintMode = r1;
        this.mHasTickMarkTintMode = true;
        applyTickMarkTint();
    }

    @Nullable
    PorterDuff.Mode getTickMarkTintMode() {
        return this.mTickMarkTintMode;
    }

    private void applyTickMarkTint() {
        if (this.mTickMark != null) goto L5;
        return;
    L5:
        if (this.mHasTickMarkTint == false) goto L7;
    L8:
        this.mTickMark = DrawableCompat.wrap(this.mTickMark.mutate());
        if (this.mHasTickMarkTint == false) goto L12;
        DrawableCompat.setTintList(this.mTickMark, this.mTickMarkTintList);
    L12:
        if (this.mHasTickMarkTintMode == false) goto L15;
        DrawableCompat.setTintMode(this.mTickMark, this.mTickMarkTintMode);
    L15:
        if (this.mTickMark.isStateful() == false) goto L20;
        this.mTickMark.setState(this.mView.getDrawableState());
        return;
    L20:
        return;
    L7:
        if (this.mHasTickMarkTintMode == true) goto L8;
    }

    void jumpDrawablesToCurrentState() {
        Drawable r0 = this.mTickMark;
        if (r0 == null) goto L6;
        r0.jumpToCurrentState();
        return;
    }

    void drawableStateChanged() {
        Drawable r0 = this.mTickMark;
        if (r0 != null) goto L5;
        return;
    L5:
        if (r0.isStateful() == true) goto L7;
        return;
    L7:
        if (r0.setState(this.mView.getDrawableState()) == false) goto L12;
        this.mView.invalidateDrawable(r0);
        return;
    }

    void drawTickMarks(Canvas r7) {
        if (this.mTickMark == null) goto L18;
        int r0 = this.mView.getMax();
        int r1 = 1;
        if (r0 <= 1) goto L19;
        int r2 = this.mTickMark.getIntrinsicWidth();
        int r3 = this.mTickMark.getIntrinsicHeight();
        if (r2 < 0) goto L9;
        int r22 = r2 / 2;
    L10:
        if (r3 < 0) goto L12;
        r1 = r3 / 2;
    L12:
        this.mTickMark.setBounds(-r22, -r1, r22, r1);
        float r12 = ((this.mView.getWidth() - this.mView.getPaddingLeft()) - this.mView.getPaddingRight()) / r0;
        int r23 = r7.save();
        r7.translate(this.mView.getPaddingLeft(), this.mView.getHeight() / 2);
        int r32 = 0;
    L13:
        if (r32 > r0) goto L15;
        this.mTickMark.draw(r7);
        r7.translate(r12, 0.0f);
        r32 = r32 + 1;
        goto L13
    L15:
        r7.restoreToCount(r23);
        return;
    L9:
        r22 = 1;
        goto L10
    L19:
        return;
    }
}
