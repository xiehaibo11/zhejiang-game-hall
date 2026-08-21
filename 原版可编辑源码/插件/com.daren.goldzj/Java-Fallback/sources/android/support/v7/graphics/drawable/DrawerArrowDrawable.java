package android.support.v7.graphics.drawable;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.support.annotation.ColorInt;
import android.support.annotation.FloatRange;
import android.support.annotation.RestrictTo;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.support.v7.appcompat.R;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class DrawerArrowDrawable extends Drawable {
    public static final int ARROW_DIRECTION_END = 3;
    public static final int ARROW_DIRECTION_LEFT = 0;
    public static final int ARROW_DIRECTION_RIGHT = 1;
    public static final int ARROW_DIRECTION_START = 2;
    private static final float ARROW_HEAD_ANGLE = 0.0f;
    private float mArrowHeadLength;
    private float mArrowShaftLength;
    private float mBarGap;
    private float mBarLength;
    private int mDirection;
    private float mMaxCutForBarSize;
    private final Paint mPaint;
    private final Path mPath;
    private float mProgress;
    private final int mSize;
    private boolean mSpin;
    private boolean mVerticalMirror;

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface ArrowDirection {
    }

    private static float lerp(float r0, float r1, float r2) {
        return r0 + ((r1 - r0) * r2);
    }

    @Override
    public int getOpacity() {
        return -3;
    }

    static {
        ARROW_HEAD_ANGLE = (float) Math.toRadians(45.0d);
    }

    public DrawerArrowDrawable(Context r7) {
        this.mPaint = new Paint();
        this.mPath = new Path();
        this.mVerticalMirror = false;
        this.mDirection = 2;
        this.mPaint.setStyle(Paint.Style.STROKE);
        this.mPaint.setStrokeJoin(Paint.Join.MITER);
        this.mPaint.setStrokeCap(Paint.Cap.BUTT);
        this.mPaint.setAntiAlias(true);
        TypedArray r72 = r7.getTheme().obtainStyledAttributes(null, R.styleable.DrawerArrowToggle, R.attr.drawerArrowStyle, R.style.Base_Widget_AppCompat_DrawerArrowToggle);
        setColor(r72.getColor(R.styleable.DrawerArrowToggle_color, 0));
        setBarThickness(r72.getDimension(R.styleable.DrawerArrowToggle_thickness, 0.0f));
        setSpinEnabled(r72.getBoolean(R.styleable.DrawerArrowToggle_spinBars, true));
        setGapSize(Math.round(r72.getDimension(R.styleable.DrawerArrowToggle_gapBetweenBars, 0.0f)));
        this.mSize = r72.getDimensionPixelSize(R.styleable.DrawerArrowToggle_drawableSize, 0);
        this.mBarLength = Math.round(r72.getDimension(R.styleable.DrawerArrowToggle_barLength, 0.0f));
        this.mArrowHeadLength = Math.round(r72.getDimension(R.styleable.DrawerArrowToggle_arrowHeadLength, 0.0f));
        this.mArrowShaftLength = r72.getDimension(R.styleable.DrawerArrowToggle_arrowShaftLength, 0.0f);
        r72.recycle();
    }

    public void setArrowHeadLength(float r2) {
        if (this.mArrowHeadLength == r2) goto L6;
        this.mArrowHeadLength = r2;
        invalidateSelf();
        return;
    }

    public float getArrowHeadLength() {
        return this.mArrowHeadLength;
    }

    public void setArrowShaftLength(float r2) {
        if (this.mArrowShaftLength == r2) goto L6;
        this.mArrowShaftLength = r2;
        invalidateSelf();
        return;
    }

    public float getArrowShaftLength() {
        return this.mArrowShaftLength;
    }

    public float getBarLength() {
        return this.mBarLength;
    }

    public void setBarLength(float r2) {
        if (this.mBarLength == r2) goto L6;
        this.mBarLength = r2;
        invalidateSelf();
        return;
    }

    public void setColor(@ColorInt int r2) {
        if (r2 == this.mPaint.getColor()) goto L6;
        this.mPaint.setColor(r2);
        invalidateSelf();
        return;
    }

    @ColorInt
    public int getColor() {
        return this.mPaint.getColor();
    }

    public void setBarThickness(float r5) {
        if (this.mPaint.getStrokeWidth() == r5) goto L6;
        this.mPaint.setStrokeWidth(r5);
        this.mMaxCutForBarSize = (float) (((double) (r5 / 2.0f)) * Math.cos(ARROW_HEAD_ANGLE));
        invalidateSelf();
        return;
    }

    public float getBarThickness() {
        return this.mPaint.getStrokeWidth();
    }

    public float getGapSize() {
        return this.mBarGap;
    }

    public void setGapSize(float r2) {
        if (r2 == this.mBarGap) goto L6;
        this.mBarGap = r2;
        invalidateSelf();
        return;
    }

    public void setDirection(int r2) {
        if (r2 == this.mDirection) goto L6;
        this.mDirection = r2;
        invalidateSelf();
        return;
    }

    public boolean isSpinEnabled() {
        return this.mSpin;
    }

    public void setSpinEnabled(boolean r2) {
        if (this.mSpin == r2) goto L6;
        this.mSpin = r2;
        invalidateSelf();
        return;
    }

    public int getDirection() {
        return this.mDirection;
    }

    public void setVerticalMirror(boolean r2) {
        if (this.mVerticalMirror == r2) goto L6;
        this.mVerticalMirror = r2;
        invalidateSelf();
        return;
    }

    @Override
    public void draw(Canvas r19) {
        Rect r2 = getBounds();
        int r3 = this.mDirection;
        boolean r4 = false;
        if (r3 == 0) goto L13;
        if (r3 != 1) goto L6;
    L12:
        r4 = true;
        goto L13
    L6:
        if (r3 == 3) goto L11;
        if (DrawableCompat.getLayoutDirection(this) != 1) goto L13;
    L11:
        if (DrawableCompat.getLayoutDirection(this) == 0) goto L12;
    L13:
        float r32 = this.mArrowHeadLength;
        float r33 = lerp(this.mBarLength, (float) Math.sqrt((r32 * r32) * 2.0f), this.mProgress);
        float r7 = lerp(this.mBarLength, this.mArrowShaftLength, this.mProgress);
        float r8 = Math.round(lerp(0.0f, this.mMaxCutForBarSize, this.mProgress));
        float r9 = lerp(0.0f, ARROW_HEAD_ANGLE, this.mProgress);
        if (r4 == false) goto L16;
        float r11 = 0.0f;
    L18:
        if (r4 == false) goto L20;
        float r13 = 180.0f;
    L21:
        float r112 = lerp(r11, r13, this.mProgress);
        double r132 = r33;
        double r10 = r9;
        boolean r92 = r4;
        float r34 = Math.round(Math.cos(r10) * r132);
        float r42 = Math.round(r132 * Math.sin(r10));
        this.mPath.rewind();
        float r102 = lerp(this.mBarGap + this.mPaint.getStrokeWidth(), -this.mMaxCutForBarSize, this.mProgress);
        float r113 = (-r7) / 2.0f;
        this.mPath.moveTo(r113 + r8, 0.0f);
        this.mPath.rLineTo(r7 - (r8 * 2.0f), 0.0f);
        this.mPath.moveTo(r113, r102);
        this.mPath.rLineTo(r34, r42);
        this.mPath.moveTo(r113, -r102);
        this.mPath.rLineTo(r34, -r42);
        this.mPath.close();
        r19.save();
        float r35 = this.mPaint.getStrokeWidth();
        float r43 = r2.height() - (3.0f * r35);
        float r5 = this.mBarGap;
        r19.translate(r2.centerX(), ((((int) (r43 - (2.0f * r5))) / 4) * 2) + ((r35 * 1.5f) + r5));
        if (this.mSpin == true) goto L24;
        if (r92 == false) goto L30;
        r19.rotate(180.0f);
    L30:
        r19.drawPath(this.mPath, this.mPaint);
        r19.restore();
        return;
    L24:
        if ((this.mVerticalMirror ^ r92) == false) goto L26;
        int r52 = -1;
    L27:
        r19.rotate(r112 * r52);
        goto L30
    L26:
        r52 = 1;
        goto L27
    L20:
        r13 = 0.0f;
        goto L21
    L16:
        r11 = -180.0f;
        goto L18
    }

    @Override
    public void setAlpha(int r2) {
        if (r2 == this.mPaint.getAlpha()) goto L6;
        this.mPaint.setAlpha(r2);
        invalidateSelf();
        return;
    }

    @Override
    public void setColorFilter(ColorFilter r2) {
        this.mPaint.setColorFilter(r2);
        invalidateSelf();
    }

    @Override
    public int getIntrinsicHeight() {
        return this.mSize;
    }

    @Override
    public int getIntrinsicWidth() {
        return this.mSize;
    }

    @FloatRange(from = 0.0d, to = 1.0d)
    public float getProgress() {
        return this.mProgress;
    }

    public void setProgress(@FloatRange(from = 0.0d, to = 1.0d) float r2) {
        if (this.mProgress == r2) goto L6;
        this.mProgress = r2;
        invalidateSelf();
        return;
    }

    public final Paint getPaint() {
        return this.mPaint;
    }
}
