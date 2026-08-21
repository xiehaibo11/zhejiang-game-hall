package android.support.v4.widget;

import android.content.res.Resources;
import android.os.SystemClock;
import android.support.annotation.NonNull;
import android.support.v4.view.ViewCompat;
import android.util.DisplayMetrics;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.animation.AccelerateInterpolator;
import android.view.animation.AnimationUtils;
import android.view.animation.Interpolator;

public abstract class AutoScrollHelper implements View.OnTouchListener {
    private static final int DEFAULT_ACTIVATION_DELAY = 0;
    private static final int DEFAULT_EDGE_TYPE = 1;
    private static final float DEFAULT_MAXIMUM_EDGE = Float.MAX_VALUE;
    private static final int DEFAULT_MAXIMUM_VELOCITY_DIPS = 1575;
    private static final int DEFAULT_MINIMUM_VELOCITY_DIPS = 315;
    private static final int DEFAULT_RAMP_DOWN_DURATION = 500;
    private static final int DEFAULT_RAMP_UP_DURATION = 500;
    private static final float DEFAULT_RELATIVE_EDGE = 0.2f;
    private static final float DEFAULT_RELATIVE_VELOCITY = 1.0f;
    public static final int EDGE_TYPE_INSIDE = 0;
    public static final int EDGE_TYPE_INSIDE_EXTEND = 1;
    public static final int EDGE_TYPE_OUTSIDE = 2;
    private static final int HORIZONTAL = 0;
    public static final float NO_MAX = Float.MAX_VALUE;
    public static final float NO_MIN = 0.0f;
    public static final float RELATIVE_UNSPECIFIED = 0.0f;
    private static final int VERTICAL = 1;
    private int mActivationDelay;
    private boolean mAlreadyDelayed;
    boolean mAnimating;
    private final Interpolator mEdgeInterpolator;
    private int mEdgeType;
    private boolean mEnabled;
    private boolean mExclusive;
    private float[] mMaximumEdges;
    private float[] mMaximumVelocity;
    private float[] mMinimumVelocity;
    boolean mNeedsCancel;
    boolean mNeedsReset;
    private float[] mRelativeEdges;
    private float[] mRelativeVelocity;
    private Runnable mRunnable;
    final ClampedScroller mScroller;
    final View mTarget;

    private static class ClampedScroller {
        private long mDeltaTime;
        private int mDeltaX;
        private int mDeltaY;
        private int mEffectiveRampDown;
        private int mRampDownDuration;
        private int mRampUpDuration;
        private long mStartTime;
        private long mStopTime;
        private float mStopValue;
        private float mTargetVelocityX;
        private float mTargetVelocityY;

        private float interpolateValue(float r3) {
            return (((-4.0f) * r3) * r3) + (r3 * 4.0f);
        }

        ClampedScroller() {
            this.mStartTime = Long.MIN_VALUE;
            this.mStopTime = -1;
            this.mDeltaTime = 0;
            this.mDeltaX = 0;
            this.mDeltaY = 0;
        }

        public void setRampUpDuration(int r1) {
            this.mRampUpDuration = r1;
        }

        public void setRampDownDuration(int r1) {
            this.mRampDownDuration = r1;
        }

        public void start() {
            this.mStartTime = AnimationUtils.currentAnimationTimeMillis();
            this.mStopTime = -1;
            this.mDeltaTime = this.mStartTime;
            this.mStopValue = 0.5f;
            this.mDeltaX = 0;
            this.mDeltaY = 0;
        }

        public void requestStop() {
            long r0 = AnimationUtils.currentAnimationTimeMillis();
            this.mEffectiveRampDown = AutoScrollHelper.constrain((int) (r0 - this.mStartTime), 0, this.mRampDownDuration);
            this.mStopValue = getValueAt(r0);
            this.mStopTime = r0;
        }

        public boolean isFinished() {
            if (this.mStopTime > 0) goto L5;
        L7:
            return false;
        L5:
            if (AnimationUtils.currentAnimationTimeMillis() <= (this.mStopTime + ((long) this.mEffectiveRampDown))) goto L7;
            return true;
        }

        private float getValueAt(long r8) {
            if (r8 >= this.mStartTime) goto L5;
            return 0.0f;
        L5:
            long r0 = this.mStopTime;
            if (r0 < 0) goto L13;
            if (r8 < r0) goto L13;
            long r82 = r8 - r0;
            float r02 = this.mStopValue;
            return (AutoScrollHelper.DEFAULT_RELATIVE_VELOCITY - r02) + (r02 * AutoScrollHelper.constrain(r82 / this.mEffectiveRampDown, 0.0f, AutoScrollHelper.DEFAULT_RELATIVE_VELOCITY));
        L13:
            return AutoScrollHelper.constrain((r8 - this.mStartTime) / this.mRampUpDuration, 0.0f, AutoScrollHelper.DEFAULT_RELATIVE_VELOCITY) * 0.5f;
        }

        public void computeScrollDelta() {
            if (this.mDeltaTime == 0) goto L7;
            long r0 = AnimationUtils.currentAnimationTimeMillis();
            float r2 = interpolateValue(getValueAt(r0));
            long r3 = r0 - this.mDeltaTime;
            this.mDeltaTime = r0;
            float r02 = r3 * r2;
            this.mDeltaX = (int) (this.mTargetVelocityX * r02);
            this.mDeltaY = (int) (r02 * this.mTargetVelocityY);
            return;
        L7:
            throw new RuntimeException("Cannot compute scroll delta before calling start()");
        }

        public void setTargetVelocity(float r1, float r2) {
            this.mTargetVelocityX = r1;
            this.mTargetVelocityY = r2;
        }

        public int getHorizontalDirection() {
            float r0 = this.mTargetVelocityX;
            return (int) (r0 / Math.abs(r0));
        }

        public int getVerticalDirection() {
            float r0 = this.mTargetVelocityY;
            return (int) (r0 / Math.abs(r0));
        }

        public int getDeltaX() {
            return this.mDeltaX;
        }

        public int getDeltaY() {
            return this.mDeltaY;
        }
    }

    private class ScrollAnimationRunnable implements Runnable {
        final AutoScrollHelper this$0;

        ScrollAnimationRunnable(AutoScrollHelper r1) {
            this.this$0 = r1;
        }

        @Override
        public void run() {
            if (this.this$0.mAnimating == true) goto L6;
            return;
        L6:
            if (this.this$0.mNeedsReset == false) goto L8;
            AutoScrollHelper r0 = this.this$0;
            r0.mNeedsReset = false;
            r0.mScroller.start();
        L8:
            ClampedScroller r02 = this.this$0.mScroller;
            if (r02.isFinished() == false) goto L11;
        L18:
            this.this$0.mAnimating = false;
            return;
        L11:
            if (this.this$0.shouldAnimate() == false) goto L18;
            if (this.this$0.mNeedsCancel == false) goto L16;
            AutoScrollHelper r2 = this.this$0;
            r2.mNeedsCancel = false;
            r2.cancelTargetTouch();
        L16:
            r02.computeScrollDelta();
            int r1 = r02.getDeltaX();
            int r03 = r02.getDeltaY();
            this.this$0.scrollTargetBy(r1, r03);
            ViewCompat.postOnAnimation(this.this$0.mTarget, this);
        }
    }

    static float constrain(float r1, float r2, float r3) {
        if (r1 <= r3) goto L6;
        return r3;
    L6:
        if (r1 >= r2) goto L8;
        return r2;
    L8:
        return r1;
    }

    static int constrain(int r0, int r1, int r2) {
        if (r0 <= r2) goto L4;
        return r2;
    L4:
        if (r0 >= r1) goto L6;
        return r1;
    L6:
        return r0;
    }

    public abstract boolean canTargetScrollHorizontally(int r1);

    public abstract boolean canTargetScrollVertically(int r1);

    public abstract void scrollTargetBy(int r1, int r2);

    static {
        DEFAULT_ACTIVATION_DELAY = ViewConfiguration.getTapTimeout();
    }

    public AutoScrollHelper(@NonNull View r4) {
        this.mScroller = new ClampedScroller();
        this.mEdgeInterpolator = new AccelerateInterpolator();
        this.mRelativeEdges = new float[]{0.0f, 0.0f};
        this.mMaximumEdges = new float[]{Float.MAX_VALUE, Float.MAX_VALUE};
        this.mRelativeVelocity = new float[]{0.0f, 0.0f};
        this.mMinimumVelocity = new float[]{0.0f, 0.0f};
        this.mMaximumVelocity = new float[]{Float.MAX_VALUE, Float.MAX_VALUE};
        this.mTarget = r4;
        DisplayMetrics r42 = Resources.getSystem().getDisplayMetrics();
        int r0 = (int) ((r42.density * 1575.0f) + 0.5f);
        int r43 = (int) ((r42.density * 315.0f) + 0.5f);
        float r02 = r0;
        setMaximumVelocity(r02, r02);
        float r44 = r43;
        setMinimumVelocity(r44, r44);
        setEdgeType(1);
        setMaximumEdges(Float.MAX_VALUE, Float.MAX_VALUE);
        setRelativeEdges(DEFAULT_RELATIVE_EDGE, DEFAULT_RELATIVE_EDGE);
        setRelativeVelocity(DEFAULT_RELATIVE_VELOCITY, DEFAULT_RELATIVE_VELOCITY);
        setActivationDelay(DEFAULT_ACTIVATION_DELAY);
        setRampUpDuration(500);
        setRampDownDuration(500);
    }

    public AutoScrollHelper setEnabled(boolean r2) {
        if (this.mEnabled == false) goto L6;
        if (r2 == true) goto L6;
        requestStop();
    L6:
        this.mEnabled = r2;
        return this;
    }

    public boolean isEnabled() {
        return this.mEnabled;
    }

    public AutoScrollHelper setExclusive(boolean r1) {
        this.mExclusive = r1;
        return this;
    }

    public boolean isExclusive() {
        return this.mExclusive;
    }

    @NonNull
    public AutoScrollHelper setMaximumVelocity(float r4, float r5) {
        float[] r0 = this.mMaximumVelocity;
        r0[0] = r4 / 1000.0f;
        r0[1] = r5 / 1000.0f;
        return this;
    }

    @NonNull
    public AutoScrollHelper setMinimumVelocity(float r4, float r5) {
        float[] r0 = this.mMinimumVelocity;
        r0[0] = r4 / 1000.0f;
        r0[1] = r5 / 1000.0f;
        return this;
    }

    @NonNull
    public AutoScrollHelper setRelativeVelocity(float r4, float r5) {
        float[] r0 = this.mRelativeVelocity;
        r0[0] = r4 / 1000.0f;
        r0[1] = r5 / 1000.0f;
        return this;
    }

    @NonNull
    public AutoScrollHelper setEdgeType(int r1) {
        this.mEdgeType = r1;
        return this;
    }

    @NonNull
    public AutoScrollHelper setRelativeEdges(float r3, float r4) {
        float[] r0 = this.mRelativeEdges;
        r0[0] = r3;
        r0[1] = r4;
        return this;
    }

    @NonNull
    public AutoScrollHelper setMaximumEdges(float r3, float r4) {
        float[] r0 = this.mMaximumEdges;
        r0[0] = r3;
        r0[1] = r4;
        return this;
    }

    @NonNull
    public AutoScrollHelper setActivationDelay(int r1) {
        this.mActivationDelay = r1;
        return this;
    }

    @NonNull
    public AutoScrollHelper setRampUpDuration(int r2) {
        this.mScroller.setRampUpDuration(r2);
        return this;
    }

    @NonNull
    public AutoScrollHelper setRampDownDuration(int r2) {
        this.mScroller.setRampDownDuration(r2);
        return this;
    }

    @Override
    public boolean onTouch(View r6, MotionEvent r7) {
        if (this.mEnabled == true) goto L5;
        return false;
    L5:
        int r0 = r7.getActionMasked();
        if (r0 == 0) goto L14;
        if (r0 != 1) goto L9;
    L13:
        requestStop();
    L21:
        if (this.mExclusive == true) goto L23;
        return false;
    L23:
        if (this.mAnimating == false) goto L27;
        return true;
    L27:
        return false;
    L9:
        if (r0 != 2) goto L11;
    L15:
        this.mScroller.setTargetVelocity(computeTargetVelocity(0, r7.getX(), r6.getWidth(), this.mTarget.getWidth()), computeTargetVelocity(1, r7.getY(), r6.getHeight(), this.mTarget.getHeight()));
        if (this.mAnimating == true) goto L21;
        if (shouldAnimate() == false) goto L21;
        startAnimating();
        goto L21
    L11:
        if (r0 == 3) goto L13;
    L14:
        this.mNeedsCancel = true;
        this.mAlreadyDelayed = false;
        goto L15
    }

    boolean shouldAnimate() {
        ClampedScroller r0 = this.mScroller;
        int r1 = r0.getVerticalDirection();
        int r02 = r0.getHorizontalDirection();
        if (r1 != 0) goto L5;
    L6:
        if (r02 != 0) goto L8;
    L10:
        return false;
    L8:
        if (canTargetScrollHorizontally(r02) == false) goto L10;
    L9:
        return true;
    L5:
        if (canTargetScrollVertically(r1) == true) goto L9;
        goto L6
    }

    private void startAnimating() {
        if (this.mRunnable != null) goto L5;
        this.mRunnable = new ScrollAnimationRunnable(this);
    L5:
        this.mAnimating = true;
        this.mNeedsReset = true;
        if (this.mAlreadyDelayed == true) goto L10;
        int r1 = this.mActivationDelay;
        if (r1 <= 0) goto L10;
        ViewCompat.postOnAnimationDelayed(this.mTarget, this.mRunnable, r1);
    L11:
        this.mAlreadyDelayed = true;
        return;
    L10:
        this.mRunnable.run();
        goto L11
    }

    private void requestStop() {
        if (this.mNeedsReset == false) goto L5;
        this.mAnimating = false;
        return;
    L5:
        this.mScroller.requestStop();
    }

    private float computeTargetVelocity(int r4, float r5, float r6, float r7) {
        float r52 = getEdgeValue(this.mRelativeEdges[r4], r6, this.mMaximumEdges[r4], r5);
        if (r52 != 0.0f) goto L5;
        return 0.0f;
    L5:
        float r62 = this.mRelativeVelocity[r4];
        float r1 = this.mMinimumVelocity[r4];
        float r42 = this.mMaximumVelocity[r4];
        float r63 = r62 * r7;
        if (r52 <= 0.0f) goto L10;
        return constrain(r52 * r63, r1, r42);
    L10:
        return -constrain((-r52) * r63, r1, r42);
    }

    private float getEdgeValue(float r2, float r3, float r4, float r5) {
        float r22 = constrain(r2 * r3, 0.0f, r4);
        float r42 = constrainEdgeValue(r5, r22);
        float r23 = constrainEdgeValue(r3 - r5, r22) - r42;
        if (r23 >= 0.0f) goto L6;
        float r24 = -this.mEdgeInterpolator.getInterpolation(-r23);
    L9:
        return constrain(r24, -1.0f, DEFAULT_RELATIVE_VELOCITY);
    L6:
        if (r23 <= 0.0f) goto L10;
        r24 = this.mEdgeInterpolator.getInterpolation(r23);
        goto L9
    L10:
        return 0.0f;
    }

    private float constrainEdgeValue(float r5, float r6) {
        if (r6 != 0.0f) goto L5;
        return 0.0f;
    L5:
        int r1 = this.mEdgeType;
        if (r1 == 0) goto L16;
        if (r1 == 1) goto L16;
        if (r1 == 2) goto L12;
    L26:
        return 0.0f;
    L12:
        if (r5 >= 0.0f) goto L26;
        return r5 / (-r6);
    L16:
        if (r5 >= r6) goto L26;
        if (r5 < 0.0f) goto L22;
        return DEFAULT_RELATIVE_VELOCITY - (r5 / r6);
    L22:
        if (this.mAnimating == false) goto L26;
        if (this.mEdgeType != 1) goto L26;
        return DEFAULT_RELATIVE_VELOCITY;
    }

    void cancelTargetTouch() {
        long r2 = SystemClock.uptimeMillis();
        MotionEvent r0 = MotionEvent.obtain(r2, r2, 3, 0.0f, 0.0f, 0);
        this.mTarget.onTouchEvent(r0);
        r0.recycle();
    }
}
