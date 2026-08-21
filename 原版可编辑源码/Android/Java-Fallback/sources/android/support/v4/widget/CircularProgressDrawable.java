package android.support.v4.widget;

public class CircularProgressDrawable extends android.graphics.drawable.Drawable implements android.graphics.drawable.Animatable {
    private static final int ANIMATION_DURATION = 1332;
    private static final int ARROW_HEIGHT = 5;
    private static final int ARROW_HEIGHT_LARGE = 6;
    private static final int ARROW_WIDTH = 10;
    private static final int ARROW_WIDTH_LARGE = 12;
    private static final float CENTER_RADIUS = 7.5f;
    private static final float CENTER_RADIUS_LARGE = 11.0f;
    private static final int[] COLORS = null;
    private static final float COLOR_CHANGE_OFFSET = 0.75f;
    public static final int DEFAULT = 1;
    private static final float GROUP_FULL_ROTATION = 216.0f;
    public static final int LARGE = 0;
    private static final android.view.animation.Interpolator LINEAR_INTERPOLATOR = null;
    private static final android.view.animation.Interpolator MATERIAL_INTERPOLATOR = null;
    private static final float MAX_PROGRESS_ARC = 0.8f;
    private static final float MIN_PROGRESS_ARC = 0.01f;
    private static final float RING_ROTATION = 0.20999998f;
    private static final float SHRINK_OFFSET = 0.5f;
    private static final float STROKE_WIDTH = 2.5f;
    private static final float STROKE_WIDTH_LARGE = 3.0f;
    private android.animation.Animator mAnimator;
    boolean mFinishing;
    private android.content.res.Resources mResources;
    private final android.support.v4.widget.CircularProgressDrawable.Ring mRing;
    private float mRotation;
    float mRotationCount;



    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface ProgressDrawableSize {
    }

    private static class Ring {
        int mAlpha;
        android.graphics.Path mArrow;
        int mArrowHeight;
        final android.graphics.Paint mArrowPaint;
        float mArrowScale;
        int mArrowWidth;
        final android.graphics.Paint mCirclePaint;
        int mColorIndex;
        int[] mColors;
        int mCurrentColor;
        float mEndTrim;
        final android.graphics.Paint mPaint;
        float mRingCenterRadius;
        float mRotation;
        boolean mShowArrow;
        float mStartTrim;
        float mStartingEndTrim;
        float mStartingRotation;
        float mStartingStartTrim;
        float mStrokeWidth;
        final android.graphics.RectF mTempBounds;

        Ring() {
                r3 = this;
                r3.<init>()
                android.graphics.RectF r0 = new android.graphics.RectF
                r0.<init>()
                r3.mTempBounds = r0
                android.graphics.Paint r0 = new android.graphics.Paint
                r0.<init>()
                r3.mPaint = r0
                android.graphics.Paint r0 = new android.graphics.Paint
                r0.<init>()
                r3.mArrowPaint = r0
                android.graphics.Paint r0 = new android.graphics.Paint
                r0.<init>()
                r3.mCirclePaint = r0
                r0 = 0
                r3.mStartTrim = r0
                r3.mEndTrim = r0
                r3.mRotation = r0
                r0 = 1084227584(0x40a00000, float:5.0)
                r3.mStrokeWidth = r0
                r0 = 1065353216(0x3f800000, float:1.0)
                r3.mArrowScale = r0
                r0 = 255(0xff, float:3.57E-43)
                r3.mAlpha = r0
                android.graphics.Paint r0 = r3.mPaint
                android.graphics.Paint$Cap r1 = android.graphics.Paint.Cap.SQUARE
                r0.setStrokeCap(r1)
                android.graphics.Paint r0 = r3.mPaint
                r1 = 1
                r0.setAntiAlias(r1)
                android.graphics.Paint r0 = r3.mPaint
                android.graphics.Paint$Style r2 = android.graphics.Paint.Style.STROKE
                r0.setStyle(r2)
                android.graphics.Paint r0 = r3.mArrowPaint
                android.graphics.Paint$Style r2 = android.graphics.Paint.Style.FILL
                r0.setStyle(r2)
                android.graphics.Paint r0 = r3.mArrowPaint
                r0.setAntiAlias(r1)
                android.graphics.Paint r0 = r3.mCirclePaint
                r1 = 0
                r0.setColor(r1)
                return
        }

        void draw(android.graphics.Canvas r9, android.graphics.Rect r10) {
                r8 = this;
                android.graphics.RectF r6 = r8.mTempBounds
                float r0 = r8.mRingCenterRadius
                float r1 = r8.mStrokeWidth
                r2 = 1073741824(0x40000000, float:2.0)
                float r1 = r1 / r2
                float r1 = r1 + r0
                r3 = 0
                int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
                if (r0 > 0) goto L2d
                int r0 = r10.width()
                int r1 = r10.height()
                int r0 = java.lang.Math.min(r0, r1)
                float r0 = (float) r0
                float r0 = r0 / r2
                int r1 = r8.mArrowWidth
                float r1 = (float) r1
                float r3 = r8.mArrowScale
                float r1 = r1 * r3
                float r1 = r1 / r2
                float r3 = r8.mStrokeWidth
                float r3 = r3 / r2
                float r1 = java.lang.Math.max(r1, r3)
                float r1 = r0 - r1
            L2d:
                int r0 = r10.centerX()
                float r0 = (float) r0
                float r0 = r0 - r1
                int r3 = r10.centerY()
                float r3 = (float) r3
                float r3 = r3 - r1
                int r4 = r10.centerX()
                float r4 = (float) r4
                float r4 = r4 + r1
                int r10 = r10.centerY()
                float r10 = (float) r10
                float r10 = r10 + r1
                r6.set(r0, r3, r4, r10)
                float r10 = r8.mStartTrim
                float r0 = r8.mRotation
                float r10 = r10 + r0
                r1 = 1135869952(0x43b40000, float:360.0)
                float r10 = r10 * r1
                float r3 = r8.mEndTrim
                float r3 = r3 + r0
                float r3 = r3 * r1
                float r7 = r3 - r10
                android.graphics.Paint r0 = r8.mPaint
                int r1 = r8.mCurrentColor
                r0.setColor(r1)
                android.graphics.Paint r0 = r8.mPaint
                int r1 = r8.mAlpha
                r0.setAlpha(r1)
                float r0 = r8.mStrokeWidth
                float r0 = r0 / r2
                r6.inset(r0, r0)
                float r1 = r6.centerX()
                float r3 = r6.centerY()
                float r4 = r6.width()
                float r4 = r4 / r2
                android.graphics.Paint r2 = r8.mCirclePaint
                r9.drawCircle(r1, r3, r4, r2)
                float r0 = -r0
                r6.inset(r0, r0)
                r4 = 0
                android.graphics.Paint r5 = r8.mPaint
                r0 = r9
                r1 = r6
                r2 = r10
                r3 = r7
                r0.drawArc(r1, r2, r3, r4, r5)
                r8.drawTriangle(r9, r10, r7, r6)
                return
        }

        void drawTriangle(android.graphics.Canvas r8, float r9, float r10, android.graphics.RectF r11) {
                r7 = this;
                boolean r0 = r7.mShowArrow
                if (r0 == 0) goto L8e
                android.graphics.Path r0 = r7.mArrow
                if (r0 != 0) goto L15
                android.graphics.Path r0 = new android.graphics.Path
                r0.<init>()
                r7.mArrow = r0
                android.graphics.Path$FillType r1 = android.graphics.Path.FillType.EVEN_ODD
                r0.setFillType(r1)
                goto L18
            L15:
                r0.reset()
            L18:
                float r0 = r11.width()
                float r1 = r11.height()
                float r0 = java.lang.Math.min(r0, r1)
                r1 = 1073741824(0x40000000, float:2.0)
                float r0 = r0 / r1
                int r2 = r7.mArrowWidth
                float r2 = (float) r2
                float r3 = r7.mArrowScale
                float r2 = r2 * r3
                float r2 = r2 / r1
                android.graphics.Path r3 = r7.mArrow
                r4 = 0
                r3.moveTo(r4, r4)
                android.graphics.Path r3 = r7.mArrow
                int r5 = r7.mArrowWidth
                float r5 = (float) r5
                float r6 = r7.mArrowScale
                float r5 = r5 * r6
                r3.lineTo(r5, r4)
                android.graphics.Path r3 = r7.mArrow
                int r4 = r7.mArrowWidth
                float r4 = (float) r4
                float r5 = r7.mArrowScale
                float r4 = r4 * r5
                float r4 = r4 / r1
                int r6 = r7.mArrowHeight
                float r6 = (float) r6
                float r6 = r6 * r5
                r3.lineTo(r4, r6)
                android.graphics.Path r3 = r7.mArrow
                float r4 = r11.centerX()
                float r0 = r0 + r4
                float r0 = r0 - r2
                float r2 = r11.centerY()
                float r4 = r7.mStrokeWidth
                float r4 = r4 / r1
                float r2 = r2 + r4
                r3.offset(r0, r2)
                android.graphics.Path r0 = r7.mArrow
                r0.close()
                android.graphics.Paint r0 = r7.mArrowPaint
                int r1 = r7.mCurrentColor
                r0.setColor(r1)
                android.graphics.Paint r0 = r7.mArrowPaint
                int r1 = r7.mAlpha
                r0.setAlpha(r1)
                r8.save()
                float r9 = r9 + r10
                float r10 = r11.centerX()
                float r11 = r11.centerY()
                r8.rotate(r9, r10, r11)
                android.graphics.Path r9 = r7.mArrow
                android.graphics.Paint r10 = r7.mArrowPaint
                r8.drawPath(r9, r10)
                r8.restore()
            L8e:
                return
        }

        int getAlpha() {
                r1 = this;
                int r0 = r1.mAlpha
                return r0
        }

        float getArrowHeight() {
                r1 = this;
                int r0 = r1.mArrowHeight
                float r0 = (float) r0
                return r0
        }

        float getArrowScale() {
                r1 = this;
                float r0 = r1.mArrowScale
                return r0
        }

        float getArrowWidth() {
                r1 = this;
                int r0 = r1.mArrowWidth
                float r0 = (float) r0
                return r0
        }

        int getBackgroundColor() {
                r1 = this;
                android.graphics.Paint r0 = r1.mCirclePaint
                int r0 = r0.getColor()
                return r0
        }

        float getCenterRadius() {
                r1 = this;
                float r0 = r1.mRingCenterRadius
                return r0
        }

        int[] getColors() {
                r1 = this;
                int[] r0 = r1.mColors
                return r0
        }

        float getEndTrim() {
                r1 = this;
                float r0 = r1.mEndTrim
                return r0
        }

        int getNextColor() {
                r2 = this;
                int[] r0 = r2.mColors
                int r1 = r2.getNextColorIndex()
                r0 = r0[r1]
                return r0
        }

        int getNextColorIndex() {
                r2 = this;
                int r0 = r2.mColorIndex
                int r0 = r0 + 1
                int[] r1 = r2.mColors
                int r1 = r1.length
                int r0 = r0 % r1
                return r0
        }

        float getRotation() {
                r1 = this;
                float r0 = r1.mRotation
                return r0
        }

        boolean getShowArrow() {
                r1 = this;
                boolean r0 = r1.mShowArrow
                return r0
        }

        float getStartTrim() {
                r1 = this;
                float r0 = r1.mStartTrim
                return r0
        }

        int getStartingColor() {
                r2 = this;
                int[] r0 = r2.mColors
                int r1 = r2.mColorIndex
                r0 = r0[r1]
                return r0
        }

        float getStartingEndTrim() {
                r1 = this;
                float r0 = r1.mStartingEndTrim
                return r0
        }

        float getStartingRotation() {
                r1 = this;
                float r0 = r1.mStartingRotation
                return r0
        }

        float getStartingStartTrim() {
                r1 = this;
                float r0 = r1.mStartingStartTrim
                return r0
        }

        android.graphics.Paint.Cap getStrokeCap() {
                r1 = this;
                android.graphics.Paint r0 = r1.mPaint
                android.graphics.Paint$Cap r0 = r0.getStrokeCap()
                return r0
        }

        float getStrokeWidth() {
                r1 = this;
                float r0 = r1.mStrokeWidth
                return r0
        }

        void goToNextColor() {
                r1 = this;
                int r0 = r1.getNextColorIndex()
                r1.setColorIndex(r0)
                return
        }

        void resetOriginals() {
                r1 = this;
                r0 = 0
                r1.mStartingStartTrim = r0
                r1.mStartingEndTrim = r0
                r1.mStartingRotation = r0
                r1.setStartTrim(r0)
                r1.setEndTrim(r0)
                r1.setRotation(r0)
                return
        }

        void setAlpha(int r1) {
                r0 = this;
                r0.mAlpha = r1
                return
        }

        void setArrowDimensions(float r1, float r2) {
                r0 = this;
                int r1 = (int) r1
                r0.mArrowWidth = r1
                int r1 = (int) r2
                r0.mArrowHeight = r1
                return
        }

        void setArrowScale(float r2) {
                r1 = this;
                float r0 = r1.mArrowScale
                int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
                if (r0 == 0) goto L8
                r1.mArrowScale = r2
            L8:
                return
        }

        void setBackgroundColor(int r2) {
                r1 = this;
                android.graphics.Paint r0 = r1.mCirclePaint
                r0.setColor(r2)
                return
        }

        void setCenterRadius(float r1) {
                r0 = this;
                r0.mRingCenterRadius = r1
                return
        }

        void setColor(int r1) {
                r0 = this;
                r0.mCurrentColor = r1
                return
        }

        void setColorFilter(android.graphics.ColorFilter r2) {
                r1 = this;
                android.graphics.Paint r0 = r1.mPaint
                r0.setColorFilter(r2)
                return
        }

        void setColorIndex(int r2) {
                r1 = this;
                r1.mColorIndex = r2
                int[] r0 = r1.mColors
                r2 = r0[r2]
                r1.mCurrentColor = r2
                return
        }

        void setColors(int[] r1) {
                r0 = this;
                r0.mColors = r1
                r1 = 0
                r0.setColorIndex(r1)
                return
        }

        void setEndTrim(float r1) {
                r0 = this;
                r0.mEndTrim = r1
                return
        }

        void setRotation(float r1) {
                r0 = this;
                r0.mRotation = r1
                return
        }

        void setShowArrow(boolean r2) {
                r1 = this;
                boolean r0 = r1.mShowArrow
                if (r0 == r2) goto L6
                r1.mShowArrow = r2
            L6:
                return
        }

        void setStartTrim(float r1) {
                r0 = this;
                r0.mStartTrim = r1
                return
        }

        void setStrokeCap(android.graphics.Paint.Cap r2) {
                r1 = this;
                android.graphics.Paint r0 = r1.mPaint
                r0.setStrokeCap(r2)
                return
        }

        void setStrokeWidth(float r2) {
                r1 = this;
                r1.mStrokeWidth = r2
                android.graphics.Paint r0 = r1.mPaint
                r0.setStrokeWidth(r2)
                return
        }

        void storeOriginals() {
                r1 = this;
                float r0 = r1.mStartTrim
                r1.mStartingStartTrim = r0
                float r0 = r1.mEndTrim
                r1.mStartingEndTrim = r0
                float r0 = r1.mRotation
                r1.mStartingRotation = r0
                return
        }
    }

    static {
            android.view.animation.LinearInterpolator r0 = new android.view.animation.LinearInterpolator
            r0.<init>()
            android.support.v4.widget.CircularProgressDrawable.LINEAR_INTERPOLATOR = r0
            android.support.v4.view.animation.FastOutSlowInInterpolator r0 = new android.support.v4.view.animation.FastOutSlowInInterpolator
            r0.<init>()
            android.support.v4.widget.CircularProgressDrawable.MATERIAL_INTERPOLATOR = r0
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 0
            r2 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0[r1] = r2
            android.support.v4.widget.CircularProgressDrawable.COLORS = r0
            return
    }

    public CircularProgressDrawable(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.Object r2 = android.support.v4.util.Preconditions.checkNotNull(r2)
            android.content.Context r2 = (android.content.Context) r2
            android.content.res.Resources r2 = r2.getResources()
            r1.mResources = r2
            android.support.v4.widget.CircularProgressDrawable$Ring r2 = new android.support.v4.widget.CircularProgressDrawable$Ring
            r2.<init>()
            r1.mRing = r2
            int[] r0 = android.support.v4.widget.CircularProgressDrawable.COLORS
            r2.setColors(r0)
            r2 = 1075838976(0x40200000, float:2.5)
            r1.setStrokeWidth(r2)
            r1.setupAnimators()
            return
    }

    private void applyFinishTranslation(float r5, android.support.v4.widget.CircularProgressDrawable.Ring r6) {
            r4 = this;
            r4.updateRingColor(r5, r6)
            float r0 = r6.getStartingRotation()
            r1 = 1061997773(0x3f4ccccd, float:0.8)
            float r0 = r0 / r1
            double r0 = (double) r0
            double r0 = java.lang.Math.floor(r0)
            r2 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r0 = r0 + r2
            float r0 = (float) r0
            float r1 = r6.getStartingStartTrim()
            float r2 = r6.getStartingEndTrim()
            r3 = 1008981770(0x3c23d70a, float:0.01)
            float r2 = r2 - r3
            float r3 = r6.getStartingStartTrim()
            float r2 = r2 - r3
            float r2 = r2 * r5
            float r1 = r1 + r2
            r6.setStartTrim(r1)
            float r1 = r6.getStartingEndTrim()
            r6.setEndTrim(r1)
            float r1 = r6.getStartingRotation()
            float r2 = r6.getStartingRotation()
            float r0 = r0 - r2
            float r0 = r0 * r5
            float r1 = r1 + r0
            r6.setRotation(r1)
            return
    }

    private int evaluateColorChange(float r7, int r8, int r9) {
            r6 = this;
            int r0 = r8 >> 24
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r1 = r8 >> 16
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r2 = r8 >> 8
            r2 = r2 & 255(0xff, float:3.57E-43)
            r8 = r8 & 255(0xff, float:3.57E-43)
            int r3 = r9 >> 24
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r4 = r9 >> 16
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r5 = r9 >> 8
            r5 = r5 & 255(0xff, float:3.57E-43)
            r9 = r9 & 255(0xff, float:3.57E-43)
            int r3 = r3 - r0
            float r3 = (float) r3
            float r3 = r3 * r7
            int r3 = (int) r3
            int r0 = r0 + r3
            int r0 = r0 << 24
            int r4 = r4 - r1
            float r3 = (float) r4
            float r3 = r3 * r7
            int r3 = (int) r3
            int r1 = r1 + r3
            int r1 = r1 << 16
            r0 = r0 | r1
            int r5 = r5 - r2
            float r1 = (float) r5
            float r1 = r1 * r7
            int r1 = (int) r1
            int r2 = r2 + r1
            int r1 = r2 << 8
            r0 = r0 | r1
            int r9 = r9 - r8
            float r9 = (float) r9
            float r7 = r7 * r9
            int r7 = (int) r7
            int r8 = r8 + r7
            r7 = r0 | r8
            return r7
    }

    private float getRotation() {
            r1 = this;
            float r0 = r1.mRotation
            return r0
    }

    private void setRotation(float r1) {
            r0 = this;
            r0.mRotation = r1
            return
    }

    private void setSizeParameters(float r3, float r4, float r5, float r6) {
            r2 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r2.mRing
            android.content.res.Resources r1 = r2.mResources
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            float r1 = r1.density
            float r4 = r4 * r1
            r0.setStrokeWidth(r4)
            float r3 = r3 * r1
            r0.setCenterRadius(r3)
            r3 = 0
            r0.setColorIndex(r3)
            float r5 = r5 * r1
            float r6 = r6 * r1
            r0.setArrowDimensions(r5, r6)
            return
    }

    private void setupAnimators() {
            r3 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r3.mRing
            r1 = 2
            float[] r1 = new float[r1]
            r1 = {x002c: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.animation.ValueAnimator r1 = android.animation.ValueAnimator.ofFloat(r1)
            android.support.v4.widget.CircularProgressDrawable$1 r2 = new android.support.v4.widget.CircularProgressDrawable$1
            r2.<init>(r3, r0)
            r1.addUpdateListener(r2)
            r2 = -1
            r1.setRepeatCount(r2)
            r2 = 1
            r1.setRepeatMode(r2)
            android.view.animation.Interpolator r2 = android.support.v4.widget.CircularProgressDrawable.LINEAR_INTERPOLATOR
            r1.setInterpolator(r2)
            android.support.v4.widget.CircularProgressDrawable$2 r2 = new android.support.v4.widget.CircularProgressDrawable$2
            r2.<init>(r3, r0)
            r1.addListener(r2)
            r3.mAnimator = r1
            return
    }

    void applyTransformation(float r8, android.support.v4.widget.CircularProgressDrawable.Ring r9, boolean r10) {
            r7 = this;
            boolean r0 = r7.mFinishing
            if (r0 == 0) goto L8
            r7.applyFinishTranslation(r8, r9)
            goto L5d
        L8:
            r0 = 1065353216(0x3f800000, float:1.0)
            int r1 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r1 != 0) goto L10
            if (r10 == 0) goto L5d
        L10:
            float r10 = r9.getStartingRotation()
            r1 = 1056964608(0x3f000000, float:0.5)
            int r2 = (r8 > r1 ? 1 : (r8 == r1 ? 0 : -1))
            r3 = 1008981770(0x3c23d70a, float:0.01)
            r4 = 1061830001(0x3f4a3d71, float:0.79)
            if (r2 >= 0) goto L30
            float r0 = r8 / r1
            float r1 = r9.getStartingStartTrim()
            android.view.animation.Interpolator r2 = android.support.v4.widget.CircularProgressDrawable.MATERIAL_INTERPOLATOR
            float r0 = r2.getInterpolation(r0)
            float r0 = r0 * r4
            float r0 = r0 + r3
            float r0 = r0 + r1
            goto L46
        L30:
            float r2 = r8 - r1
            float r2 = r2 / r1
            float r1 = r9.getStartingStartTrim()
            float r1 = r1 + r4
            android.view.animation.Interpolator r5 = android.support.v4.widget.CircularProgressDrawable.MATERIAL_INTERPOLATOR
            float r2 = r5.getInterpolation(r2)
            float r0 = r0 - r2
            float r0 = r0 * r4
            float r0 = r0 + r3
            float r0 = r1 - r0
            r6 = r1
            r1 = r0
            r0 = r6
        L46:
            r2 = 1045891644(0x3e570a3c, float:0.20999998)
            float r2 = r2 * r8
            float r10 = r10 + r2
            r2 = 1129840640(0x43580000, float:216.0)
            float r3 = r7.mRotationCount
            float r8 = r8 + r3
            float r8 = r8 * r2
            r9.setStartTrim(r1)
            r9.setEndTrim(r0)
            r9.setRotation(r10)
            r7.setRotation(r8)
        L5d:
            return
    }

    @Override
    public void draw(android.graphics.Canvas r5) {
            r4 = this;
            android.graphics.Rect r0 = r4.getBounds()
            r5.save()
            float r1 = r4.mRotation
            float r2 = r0.exactCenterX()
            float r3 = r0.exactCenterY()
            r5.rotate(r1, r2, r3)
            android.support.v4.widget.CircularProgressDrawable$Ring r1 = r4.mRing
            r1.draw(r5, r0)
            r5.restore()
            return
    }

    @Override
    public int getAlpha() {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            int r0 = r0.getAlpha()
            return r0
    }

    public boolean getArrowEnabled() {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            boolean r0 = r0.getShowArrow()
            return r0
    }

    public float getArrowHeight() {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            float r0 = r0.getArrowHeight()
            return r0
    }

    public float getArrowScale() {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            float r0 = r0.getArrowScale()
            return r0
    }

    public float getArrowWidth() {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            float r0 = r0.getArrowWidth()
            return r0
    }

    public int getBackgroundColor() {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            int r0 = r0.getBackgroundColor()
            return r0
    }

    public float getCenterRadius() {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            float r0 = r0.getCenterRadius()
            return r0
    }

    public int[] getColorSchemeColors() {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            int[] r0 = r0.getColors()
            return r0
    }

    public float getEndTrim() {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            float r0 = r0.getEndTrim()
            return r0
    }

    @Override
    public int getOpacity() {
            r1 = this;
            r0 = -3
            return r0
    }

    public float getProgressRotation() {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            float r0 = r0.getRotation()
            return r0
    }

    public float getStartTrim() {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            float r0 = r0.getStartTrim()
            return r0
    }

    public android.graphics.Paint.Cap getStrokeCap() {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            android.graphics.Paint$Cap r0 = r0.getStrokeCap()
            return r0
    }

    public float getStrokeWidth() {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            float r0 = r0.getStrokeWidth()
            return r0
    }

    @Override
    public boolean isRunning() {
            r1 = this;
            android.animation.Animator r0 = r1.mAnimator
            boolean r0 = r0.isRunning()
            return r0
    }

    @Override
    public void setAlpha(int r2) {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            r0.setAlpha(r2)
            r1.invalidateSelf()
            return
    }

    public void setArrowDimensions(float r2, float r3) {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            r0.setArrowDimensions(r2, r3)
            r1.invalidateSelf()
            return
    }

    public void setArrowEnabled(boolean r2) {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            r0.setShowArrow(r2)
            r1.invalidateSelf()
            return
    }

    public void setArrowScale(float r2) {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            r0.setArrowScale(r2)
            r1.invalidateSelf()
            return
    }

    public void setBackgroundColor(int r2) {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            r0.setBackgroundColor(r2)
            r1.invalidateSelf()
            return
    }

    public void setCenterRadius(float r2) {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            r0.setCenterRadius(r2)
            r1.invalidateSelf()
            return
    }

    @Override
    public void setColorFilter(android.graphics.ColorFilter r2) {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            r0.setColorFilter(r2)
            r1.invalidateSelf()
            return
    }

    public void setColorSchemeColors(int... r2) {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            r0.setColors(r2)
            android.support.v4.widget.CircularProgressDrawable$Ring r2 = r1.mRing
            r0 = 0
            r2.setColorIndex(r0)
            r1.invalidateSelf()
            return
    }

    public void setProgressRotation(float r2) {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            r0.setRotation(r2)
            r1.invalidateSelf()
            return
    }

    public void setStartEndTrim(float r2, float r3) {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            r0.setStartTrim(r2)
            android.support.v4.widget.CircularProgressDrawable$Ring r2 = r1.mRing
            r2.setEndTrim(r3)
            r1.invalidateSelf()
            return
    }

    public void setStrokeCap(android.graphics.Paint.Cap r2) {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            r0.setStrokeCap(r2)
            r1.invalidateSelf()
            return
    }

    public void setStrokeWidth(float r2) {
            r1 = this;
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r1.mRing
            r0.setStrokeWidth(r2)
            r1.invalidateSelf()
            return
    }

    public void setStyle(int r4) {
            r3 = this;
            if (r4 != 0) goto Le
            r4 = 1093664768(0x41300000, float:11.0)
            r0 = 1077936128(0x40400000, float:3.0)
            r1 = 1094713344(0x41400000, float:12.0)
            r2 = 1086324736(0x40c00000, float:6.0)
            r3.setSizeParameters(r4, r0, r1, r2)
            goto L19
        Le:
            r4 = 1089470464(0x40f00000, float:7.5)
            r0 = 1075838976(0x40200000, float:2.5)
            r1 = 1092616192(0x41200000, float:10.0)
            r2 = 1084227584(0x40a00000, float:5.0)
            r3.setSizeParameters(r4, r0, r1, r2)
        L19:
            r3.invalidateSelf()
            return
    }

    @Override
    public void start() {
            r3 = this;
            android.animation.Animator r0 = r3.mAnimator
            r0.cancel()
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r3.mRing
            r0.storeOriginals()
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r3.mRing
            float r0 = r0.getEndTrim()
            android.support.v4.widget.CircularProgressDrawable$Ring r1 = r3.mRing
            float r1 = r1.getStartTrim()
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 == 0) goto L2a
            r0 = 1
            r3.mFinishing = r0
            android.animation.Animator r0 = r3.mAnimator
            r1 = 666(0x29a, double:3.29E-321)
            r0.setDuration(r1)
            android.animation.Animator r0 = r3.mAnimator
            r0.start()
            goto L41
        L2a:
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r3.mRing
            r1 = 0
            r0.setColorIndex(r1)
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r3.mRing
            r0.resetOriginals()
            android.animation.Animator r0 = r3.mAnimator
            r1 = 1332(0x534, double:6.58E-321)
            r0.setDuration(r1)
            android.animation.Animator r0 = r3.mAnimator
            r0.start()
        L41:
            return
    }

    @Override
    public void stop() {
            r2 = this;
            android.animation.Animator r0 = r2.mAnimator
            r0.cancel()
            r0 = 0
            r2.setRotation(r0)
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r2.mRing
            r1 = 0
            r0.setShowArrow(r1)
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r2.mRing
            r0.setColorIndex(r1)
            android.support.v4.widget.CircularProgressDrawable$Ring r0 = r2.mRing
            r0.resetOriginals()
            r2.invalidateSelf()
            return
    }

    void updateRingColor(float r3, android.support.v4.widget.CircularProgressDrawable.Ring r4) {
            r2 = this;
            r0 = 1061158912(0x3f400000, float:0.75)
            int r1 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r1 <= 0) goto L1a
            float r3 = r3 - r0
            r0 = 1048576000(0x3e800000, float:0.25)
            float r3 = r3 / r0
            int r0 = r4.getStartingColor()
            int r1 = r4.getNextColor()
            int r3 = r2.evaluateColorChange(r3, r0, r1)
            r4.setColor(r3)
            goto L21
        L1a:
            int r3 = r4.getStartingColor()
            r4.setColor(r3)
        L21:
            return
    }
}
