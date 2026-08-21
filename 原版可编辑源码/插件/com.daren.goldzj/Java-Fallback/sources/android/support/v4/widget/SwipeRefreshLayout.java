package android.support.v4.widget;

import android.R;
import android.content.Context;
import android.content.res.TypedArray;
import android.os.Build;
import android.support.annotation.ColorInt;
import android.support.annotation.ColorRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.Px;
import android.support.annotation.VisibleForTesting;
import android.support.v4.content.ContextCompat;
import android.support.v4.view.NestedScrollingChild;
import android.support.v4.view.NestedScrollingChildHelper;
import android.support.v4.view.NestedScrollingParent;
import android.support.v4.view.NestedScrollingParentHelper;
import android.support.v4.view.ViewCompat;
import android.util.AttributeSet;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.animation.Animation;
import android.view.animation.DecelerateInterpolator;
import android.widget.AbsListView;
import android.widget.ListView;

public class SwipeRefreshLayout extends ViewGroup implements NestedScrollingParent, NestedScrollingChild {
    private static final int ALPHA_ANIMATION_DURATION = 300;
    private static final int ANIMATE_TO_START_DURATION = 200;
    private static final int ANIMATE_TO_TRIGGER_DURATION = 200;
    private static final int CIRCLE_BG_LIGHT = -328966;

    @VisibleForTesting
    static final int CIRCLE_DIAMETER = 40;

    @VisibleForTesting
    static final int CIRCLE_DIAMETER_LARGE = 56;
    private static final float DECELERATE_INTERPOLATION_FACTOR = 2.0f;
    public static final int DEFAULT = 1;
    private static final int DEFAULT_CIRCLE_TARGET = 64;
    public static final int DEFAULT_SLINGSHOT_DISTANCE = -1;
    private static final float DRAG_RATE = 0.5f;
    private static final int INVALID_POINTER = -1;
    public static final int LARGE = 0;
    private static final int[] LAYOUT_ATTRS = null;
    private static final String LOG_TAG = "SwipeRefreshLayout";
    private static final int MAX_ALPHA = 255;
    private static final float MAX_PROGRESS_ANGLE = 0.8f;
    private static final int SCALE_DOWN_DURATION = 150;
    private static final int STARTING_PROGRESS_ALPHA = 76;
    private int mActivePointerId;
    private Animation mAlphaMaxAnimation;
    private Animation mAlphaStartAnimation;
    private final Animation mAnimateToCorrectPosition;
    private final Animation mAnimateToStartPosition;
    private OnChildScrollUpCallback mChildScrollUpCallback;
    private int mCircleDiameter;
    CircleImageView mCircleView;
    private int mCircleViewIndex;
    int mCurrentTargetOffsetTop;
    int mCustomSlingshotDistance;
    private final DecelerateInterpolator mDecelerateInterpolator;
    protected int mFrom;
    private float mInitialDownY;
    private float mInitialMotionY;
    private boolean mIsBeingDragged;
    OnRefreshListener mListener;
    private int mMediumAnimationDuration;
    private boolean mNestedScrollInProgress;
    private final NestedScrollingChildHelper mNestedScrollingChildHelper;
    private final NestedScrollingParentHelper mNestedScrollingParentHelper;
    boolean mNotify;
    protected int mOriginalOffsetTop;
    private final int[] mParentOffsetInWindow;
    private final int[] mParentScrollConsumed;
    CircularProgressDrawable mProgress;
    private Animation.AnimationListener mRefreshListener;
    boolean mRefreshing;
    private boolean mReturningToStart;
    boolean mScale;
    private Animation mScaleAnimation;
    private Animation mScaleDownAnimation;
    private Animation mScaleDownToStartAnimation;
    int mSpinnerOffsetEnd;
    float mStartingScale;
    private View mTarget;
    private float mTotalDragDistance;
    private float mTotalUnconsumed;
    private int mTouchSlop;
    boolean mUsingCustomStart;

    public interface OnChildScrollUpCallback {
        boolean canChildScrollUp(@NonNull SwipeRefreshLayout r1, @Nullable View r2);
    }

    public interface OnRefreshListener {
        void onRefresh();
    }

    static {
        LAYOUT_ATTRS = new int[]{R.attr.enabled};
    }

    void reset() {
        this.mCircleView.clearAnimation();
        this.mProgress.stop();
        this.mCircleView.setVisibility(8);
        setColorViewAlpha(255);
        if (this.mScale == false) goto L5;
        setAnimationProgress(0.0f);
    L6:
        this.mCurrentTargetOffsetTop = this.mCircleView.getTop();
        return;
    L5:
        setTargetOffsetTopAndBottom(this.mOriginalOffsetTop - this.mCurrentTargetOffsetTop);
        goto L6
    }

    @Override
    public void setEnabled(boolean r1) {
        super.setEnabled(r1);
        if (r1 == true) goto L6;
        reset();
        return;
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        reset();
    }

    private void setColorViewAlpha(int r2) {
        this.mCircleView.getBackground().setAlpha(r2);
        this.mProgress.setAlpha(r2);
    }

    public void setProgressViewOffset(boolean r1, int r2, int r3) {
        this.mScale = r1;
        this.mOriginalOffsetTop = r2;
        this.mSpinnerOffsetEnd = r3;
        this.mUsingCustomStart = true;
        reset();
        this.mRefreshing = false;
    }

    public int getProgressViewStartOffset() {
        return this.mOriginalOffsetTop;
    }

    public int getProgressViewEndOffset() {
        return this.mSpinnerOffsetEnd;
    }

    public void setProgressViewEndTarget(boolean r1, int r2) {
        this.mSpinnerOffsetEnd = r2;
        this.mScale = r1;
        this.mCircleView.invalidate();
    }

    public void setSlingshotDistance(@Px int r1) {
        this.mCustomSlingshotDistance = r1;
    }

    public void setSize(int r3) {
        if (r3 != 0) goto L4;
    L6:
        DisplayMetrics r0 = getResources().getDisplayMetrics();
        if (r3 != 0) goto L9;
        this.mCircleDiameter = (int) (r0.density * 56.0f);
    L10:
        this.mCircleView.setImageDrawable(null);
        this.mProgress.setStyle(r3);
        this.mCircleView.setImageDrawable(this.mProgress);
        return;
    L9:
        this.mCircleDiameter = (int) (r0.density * 40.0f);
        goto L10
    L4:
        if (r3 == 1) goto L6;
    }

    public SwipeRefreshLayout(@NonNull Context r2) {
        this(r2, null);
    }

    public SwipeRefreshLayout(@NonNull Context r5, @Nullable AttributeSet r6) {
        super(r5, r6);
        this.mRefreshing = false;
        this.mTotalDragDistance = -1.0f;
        this.mParentScrollConsumed = new int[2];
        this.mParentOffsetInWindow = new int[2];
        this.mActivePointerId = -1;
        this.mCircleViewIndex = -1;
        this.mRefreshListener = new 1(this);
        this.mAnimateToCorrectPosition = new 6(this);
        this.mAnimateToStartPosition = new 7(this);
        this.mTouchSlop = ViewConfiguration.get(r5).getScaledTouchSlop();
        this.mMediumAnimationDuration = getResources().getInteger(R.integer.config_mediumAnimTime);
        setWillNotDraw(false);
        this.mDecelerateInterpolator = new DecelerateInterpolator(DECELERATE_INTERPOLATION_FACTOR);
        DisplayMetrics r1 = getResources().getDisplayMetrics();
        this.mCircleDiameter = (int) (r1.density * 40.0f);
        createProgressView();
        setChildrenDrawingOrderEnabled(true);
        this.mSpinnerOffsetEnd = (int) (r1.density * 64.0f);
        this.mTotalDragDistance = this.mSpinnerOffsetEnd;
        this.mNestedScrollingParentHelper = new NestedScrollingParentHelper(this);
        this.mNestedScrollingChildHelper = new NestedScrollingChildHelper(this);
        setNestedScrollingEnabled(true);
        int r12 = -this.mCircleDiameter;
        this.mCurrentTargetOffsetTop = r12;
        this.mOriginalOffsetTop = r12;
        moveToStart(1.0f);
        TypedArray r52 = r5.obtainStyledAttributes(r6, LAYOUT_ATTRS);
        setEnabled(r52.getBoolean(0, true));
        r52.recycle();
    }

    @Override
    protected int getChildDrawingOrder(int r2, int r3) {
        int r0 = this.mCircleViewIndex;
        if (r0 >= 0) goto L6;
        return r3;
    L6:
        if (r3 != (r2 - 1)) goto L8;
        return r0;
    L8:
        if (r3 >= r0) goto L10;
        return r3;
    L10:
        return r3 + 1;
    }

    private void createProgressView() {
        this.mCircleView = new CircleImageView(getContext(), CIRCLE_BG_LIGHT);
        this.mProgress = new CircularProgressDrawable(getContext());
        this.mProgress.setStyle(1);
        this.mCircleView.setImageDrawable(this.mProgress);
        this.mCircleView.setVisibility(8);
        addView(this.mCircleView);
    }

    public void setOnRefreshListener(@Nullable OnRefreshListener r1) {
        this.mListener = r1;
    }

    public void setRefreshing(boolean r3) {
        if (r3 == true) goto L5;
    L11:
        setRefreshing(r3, false);
        return;
    L5:
        if (this.mRefreshing == r3) goto L11;
        this.mRefreshing = r3;
        if (this.mUsingCustomStart == true) goto L9;
        int r32 = this.mSpinnerOffsetEnd + this.mOriginalOffsetTop;
    L10:
        setTargetOffsetTopAndBottom(r32 - this.mCurrentTargetOffsetTop);
        this.mNotify = false;
        startScaleUpAnimation(this.mRefreshListener);
        return;
    L9:
        r32 = this.mSpinnerOffsetEnd;
        goto L10
    }

    private void startScaleUpAnimation(Animation.AnimationListener r4) {
        this.mCircleView.setVisibility(0);
        this.mProgress.setAlpha(255);
        this.mScaleAnimation = new 2(this);
        this.mScaleAnimation.setDuration(this.mMediumAnimationDuration);
        if (r4 == null) goto L5;
        this.mCircleView.setAnimationListener(r4);
    L5:
        this.mCircleView.clearAnimation();
        this.mCircleView.startAnimation(this.mScaleAnimation);
    }

    void setAnimationProgress(float r2) {
        this.mCircleView.setScaleX(r2);
        this.mCircleView.setScaleY(r2);
    }

    private void setRefreshing(boolean r2, boolean r3) {
        if (this.mRefreshing == r2) goto L9;
        this.mNotify = r3;
        ensureTarget();
        this.mRefreshing = r2;
        if (this.mRefreshing == false) goto L7;
        animateOffsetToCorrectPosition(this.mCurrentTargetOffsetTop, this.mRefreshListener);
        return;
    L7:
        startScaleDownAnimation(this.mRefreshListener);
        return;
    }

    void startScaleDownAnimation(Animation.AnimationListener r4) {
        this.mScaleDownAnimation = new 3(this);
        this.mScaleDownAnimation.setDuration(150);
        this.mCircleView.setAnimationListener(r4);
        this.mCircleView.clearAnimation();
        this.mCircleView.startAnimation(this.mScaleDownAnimation);
    }

    private void startProgressAlphaStartAnimation() {
        this.mAlphaStartAnimation = startAlphaAnimation(this.mProgress.getAlpha(), 76);
    }

    private void startProgressAlphaMaxAnimation() {
        this.mAlphaMaxAnimation = startAlphaAnimation(this.mProgress.getAlpha(), 255);
    }

    private Animation startAlphaAnimation(final int r2, final int r3) {
        Animation r0 = new 4(this, r2, r3);
        r0.setDuration(300);
        this.mCircleView.setAnimationListener(null);
        this.mCircleView.clearAnimation();
        this.mCircleView.startAnimation(r0);
        return r0;
    }

    @Deprecated
    public void setProgressBackgroundColor(int r1) {
        setProgressBackgroundColorSchemeResource(r1);
    }

    public void setProgressBackgroundColorSchemeResource(@ColorRes int r2) {
        setProgressBackgroundColorSchemeColor(ContextCompat.getColor(getContext(), r2));
    }

    public void setProgressBackgroundColorSchemeColor(@ColorInt int r2) {
        this.mCircleView.setBackgroundColor(r2);
    }

    @Deprecated
    public void setColorScheme(@ColorRes int... r1) {
        setColorSchemeResources(r1);
    }

    public void setColorSchemeResources(@ColorRes int... r5) {
        Context r0 = getContext();
        int[] r1 = new int[r5.length];
        int r2 = 0;
    L4:
        if (r2 >= r5.length) goto L6;
        r1[r2] = ContextCompat.getColor(r0, r5[r2]);
        r2 = r2 + 1;
        goto L4
    L6:
        setColorSchemeColors(r1);
    }

    public void setColorSchemeColors(@ColorInt int... r2) {
        ensureTarget();
        this.mProgress.setColorSchemeColors(r2);
    }

    public boolean isRefreshing() {
        return this.mRefreshing;
    }

    private void ensureTarget() {
        if (this.mTarget != null) goto L11;
        int r0 = 0;
    L6:
        if (r0 >= getChildCount()) goto L15;
        View r1 = getChildAt(r0);
        if (r1.equals(this.mCircleView) == false) goto L9;
        r0 = r0 + 1;
        goto L6
    L9:
        this.mTarget = r1;
        return;
    L15:
        return;
    }

    public void setDistanceToTriggerSync(int r1) {
        this.mTotalDragDistance = r1;
    }

    @Override
    protected void onLayout(boolean r3, int r4, int r5, int r6, int r7) {
        int r32 = getMeasuredWidth();
        int r42 = getMeasuredHeight();
        if (getChildCount() != 0) goto L6;
        return;
    L6:
        if (this.mTarget != null) goto L8;
        ensureTarget();
    L8:
        View r52 = this.mTarget;
        if (r52 != null) goto L11;
        return;
    L11:
        int r62 = getPaddingLeft();
        int r72 = getPaddingTop();
        int r0 = (r32 - getPaddingLeft()) - getPaddingRight();
        r52.layout(r62, r72, r0 + r62, ((r42 - getPaddingTop()) - getPaddingBottom()) + r72);
        int r43 = this.mCircleView.getMeasuredWidth();
        int r53 = this.mCircleView.getMeasuredHeight();
        int r33 = r32 / 2;
        int r44 = r43 / 2;
        int r02 = this.mCurrentTargetOffsetTop;
        this.mCircleView.layout(r33 - r44, r02, r33 + r44, r53 + r02);
    }

    @Override
    public void onMeasure(int r4, int r5) {
        super.onMeasure(r4, r5);
        if (this.mTarget != null) goto L5;
        ensureTarget();
    L5:
        View r42 = this.mTarget;
        if (r42 != null) goto L8;
        return;
    L8:
        r42.measure(View.MeasureSpec.makeMeasureSpec((getMeasuredWidth() - getPaddingLeft()) - getPaddingRight(), 1073741824), View.MeasureSpec.makeMeasureSpec((getMeasuredHeight() - getPaddingTop()) - getPaddingBottom(), 1073741824));
        this.mCircleView.measure(View.MeasureSpec.makeMeasureSpec(this.mCircleDiameter, 1073741824), View.MeasureSpec.makeMeasureSpec(this.mCircleDiameter, 1073741824));
        this.mCircleViewIndex = -1;
        int r43 = 0;
    L10:
        if (r43 >= getChildCount()) goto L18;
        if (getChildAt(r43) == this.mCircleView) goto L13;
        r43 = r43 + 1;
        goto L10
    L13:
        this.mCircleViewIndex = r43;
        return;
    }

    public int getProgressCircleDiameter() {
        return this.mCircleDiameter;
    }

    public boolean canChildScrollUp() {
        OnChildScrollUpCallback r0 = this.mChildScrollUpCallback;
        if (r0 != null) goto L5;
        View r02 = this.mTarget;
        if ((r02 instanceof ListView) == false) goto L11;
        return ListViewCompat.canScrollList((ListView) r02, -1);
    L11:
        return r02.canScrollVertically(-1);
    L5:
        return r0.canChildScrollUp(this, this.mTarget);
    }

    public void setOnChildScrollUpCallback(@Nullable OnChildScrollUpCallback r1) {
        this.mChildScrollUpCallback = r1;
    }

    @Override
    public boolean onInterceptTouchEvent(MotionEvent r5) {
        ensureTarget();
        int r0 = r5.getActionMasked();
        if (this.mReturningToStart == false) goto L7;
        if (r0 != 0) goto L7;
        this.mReturningToStart = false;
    L7:
        if (isEnabled() == true) goto L9;
    L43:
        return false;
    L9:
        if (this.mReturningToStart == true) goto L43;
        if (canChildScrollUp() == true) goto L43;
        if (this.mRefreshing == true) goto L43;
        if (this.mNestedScrollInProgress == true) goto L43;
        if (r0 != 0) goto L19;
        setTargetOffsetTopAndBottom(this.mOriginalOffsetTop - this.mCircleView.getTop());
        this.mActivePointerId = r5.getPointerId(0);
        this.mIsBeingDragged = false;
        int r02 = r5.findPointerIndex(this.mActivePointerId);
        if (r02 >= 0) goto L40;
        return false;
    L40:
        this.mInitialDownY = r5.getY(r02);
    L42:
        return this.mIsBeingDragged;
    L19:
        if (r0 != 1) goto L21;
    L36:
        this.mIsBeingDragged = false;
        this.mActivePointerId = -1;
        goto L42
    L21:
        if (r0 != 2) goto L23;
        int r03 = this.mActivePointerId;
        if (r03 != (-1)) goto L32;
        Log.e(LOG_TAG, "Got ACTION_MOVE event but don't have an active pointer id.");
        return false;
    L32:
        int r04 = r5.findPointerIndex(r03);
        if (r04 >= 0) goto L35;
        return false;
    L35:
        startDragging(r5.getY(r04));
        goto L42
    L23:
        if (r0 == 3) goto L36;
        if (r0 != 6) goto L42;
        onSecondaryPointerUp(r5);
        goto L42
    }

    @Override
    public void requestDisallowInterceptTouchEvent(boolean r3) {
        if (Build.VERSION.SDK_INT < 21) goto L5;
    L6:
        View r0 = this.mTarget;
        if (r0 != null) goto L9;
    L11:
        super.requestDisallowInterceptTouchEvent(r3);
        return;
    L9:
        if (ViewCompat.isNestedScrollingEnabled(r0) == true) goto L11;
        return;
    L5:
        if ((this.mTarget instanceof AbsListView) == false) goto L6;
    }

    @Override
    public boolean onStartNestedScroll(View r1, View r2, int r3) {
        if (isEnabled() == true) goto L5;
    L11:
        return false;
    L5:
        if (this.mReturningToStart == true) goto L11;
        if (this.mRefreshing == true) goto L11;
        if ((r3 & 2) == 0) goto L11;
        return true;
    }

    @Override
    public void onNestedScrollAccepted(View r2, View r3, int r4) {
        this.mNestedScrollingParentHelper.onNestedScrollAccepted(r2, r3, r4);
        startNestedScroll(r4 & 2);
        this.mTotalUnconsumed = 0.0f;
        this.mNestedScrollInProgress = true;
    }

    @Override
    public void onNestedPreScroll(View r5, int r6, int r7, int[] r8) {
        if (r7 <= 0) goto L12;
        float r1 = this.mTotalUnconsumed;
        if (r1 <= 0.0f) goto L12;
        float r2 = r7;
        if (r2 <= r1) goto L9;
        r8[1] = r7 - ((int) r1);
        this.mTotalUnconsumed = 0.0f;
    L10:
        moveSpinner(this.mTotalUnconsumed);
        goto L12
    L9:
        this.mTotalUnconsumed = r1 - r2;
        r8[1] = r7;
    L12:
        if (this.mUsingCustomStart == false) goto L19;
        if (r7 <= 0) goto L19;
        if (this.mTotalUnconsumed != 0.0f) goto L19;
        if (Math.abs(r7 - r8[1]) <= 0) goto L19;
        this.mCircleView.setVisibility(8);
    L19:
        int[] r52 = this.mParentScrollConsumed;
        if (dispatchNestedPreScroll(r6 - r8[0], r7 - r8[1], r52, null) == false) goto L23;
        r8[0] = r8[0] + r52[0];
        r8[1] = r8[1] + r52[1];
        return;
    }

    @Override
    public int getNestedScrollAxes() {
        return this.mNestedScrollingParentHelper.getNestedScrollAxes();
    }

    @Override
    public void onStopNestedScroll(View r3) {
        this.mNestedScrollingParentHelper.onStopNestedScroll(r3);
        this.mNestedScrollInProgress = false;
        float r32 = this.mTotalUnconsumed;
        if (r32 <= 0.0f) goto L5;
        finishSpinner(r32);
        this.mTotalUnconsumed = 0.0f;
    L5:
        stopNestedScroll();
    }

    @Override
    public void onNestedScroll(View r7, int r8, int r9, int r10, int r11) {
        dispatchNestedScroll(r8, r9, r10, r11, this.mParentOffsetInWindow);
        if ((r11 + this.mParentOffsetInWindow[1]) < 0) goto L5;
        return;
    L5:
        if (canChildScrollUp() == true) goto L9;
        this.mTotalUnconsumed += Math.abs(r11);
        moveSpinner(this.mTotalUnconsumed);
        return;
    }

    @Override
    public void setNestedScrollingEnabled(boolean r2) {
        this.mNestedScrollingChildHelper.setNestedScrollingEnabled(r2);
    }

    @Override
    public boolean isNestedScrollingEnabled() {
        return this.mNestedScrollingChildHelper.isNestedScrollingEnabled();
    }

    @Override
    public boolean startNestedScroll(int r2) {
        return this.mNestedScrollingChildHelper.startNestedScroll(r2);
    }

    @Override
    public void stopNestedScroll() {
        this.mNestedScrollingChildHelper.stopNestedScroll();
    }

    @Override
    public boolean hasNestedScrollingParent() {
        return this.mNestedScrollingChildHelper.hasNestedScrollingParent();
    }

    @Override
    public boolean dispatchNestedScroll(int r7, int r8, int r9, int r10, int[] r11) {
        return this.mNestedScrollingChildHelper.dispatchNestedScroll(r7, r8, r9, r10, r11);
    }

    @Override
    public boolean dispatchNestedPreScroll(int r2, int r3, int[] r4, int[] r5) {
        return this.mNestedScrollingChildHelper.dispatchNestedPreScroll(r2, r3, r4, r5);
    }

    @Override
    public boolean onNestedPreFling(View r1, float r2, float r3) {
        return dispatchNestedPreFling(r2, r3);
    }

    @Override
    public boolean onNestedFling(View r1, float r2, float r3, boolean r4) {
        return dispatchNestedFling(r2, r3, r4);
    }

    @Override
    public boolean dispatchNestedFling(float r2, float r3, boolean r4) {
        return this.mNestedScrollingChildHelper.dispatchNestedFling(r2, r3, r4);
    }

    @Override
    public boolean dispatchNestedPreFling(float r2, float r3) {
        return this.mNestedScrollingChildHelper.dispatchNestedPreFling(r2, r3);
    }

    private boolean isAnimationRunning(Animation r2) {
        if (r2 != null) goto L4;
    L8:
        return false;
    L4:
        if (r2.hasStarted() == false) goto L8;
        if (r2.hasEnded() == true) goto L8;
        return true;
    }

    private void moveSpinner(float r12) {
        this.mProgress.setArrowEnabled(true);
        float r0 = Math.min(1.0f, Math.abs(r12 / this.mTotalDragDistance));
        float r2 = (((float) Math.max(((double) r0) - 0.4d, 0.0d)) * 5.0f) / 3.0f;
        float r3 = Math.abs(r12) - this.mTotalDragDistance;
        int r4 = this.mCustomSlingshotDistance;
        if (r4 <= 0) goto L6;
    L4:
        float r42 = r4;
        double r7 = Math.max(0.0f, Math.min(r3, r42 * DECELERATE_INTERPOLATION_FACTOR) / r42) / 4.0f;
        float r32 = ((float) (r7 - Math.pow(r7, 2.0d))) * DECELERATE_INTERPOLATION_FACTOR;
        int r8 = this.mOriginalOffsetTop + ((int) ((r42 * r0) + ((r42 * r32) * DECELERATE_INTERPOLATION_FACTOR)));
        if (this.mCircleView.getVisibility() == 0) goto L13;
        this.mCircleView.setVisibility(0);
    L13:
        if (this.mScale == true) goto L16;
        this.mCircleView.setScaleX(1.0f);
        this.mCircleView.setScaleY(1.0f);
    L16:
        if (this.mScale == false) goto L19;
        setAnimationProgress(Math.min(1.0f, r12 / this.mTotalDragDistance));
    L19:
        if (r12 >= this.mTotalDragDistance) goto L26;
        if (this.mProgress.getAlpha() > 76) goto L23;
    L30:
        this.mProgress.setStartEndTrim(0.0f, Math.min(MAX_PROGRESS_ANGLE, r2 * MAX_PROGRESS_ANGLE));
        this.mProgress.setArrowScale(Math.min(1.0f, r2));
        this.mProgress.setProgressRotation((((r2 * 0.4f) - 0.25f) + (r32 * DECELERATE_INTERPOLATION_FACTOR)) * DRAG_RATE);
        setTargetOffsetTopAndBottom(r8 - this.mCurrentTargetOffsetTop);
        return;
    L23:
        if (isAnimationRunning(this.mAlphaStartAnimation) == true) goto L30;
        startProgressAlphaStartAnimation();
        goto L30
    L26:
        if (this.mProgress.getAlpha() >= 255) goto L30;
        if (isAnimationRunning(this.mAlphaMaxAnimation) == true) goto L30;
        startProgressAlphaMaxAnimation();
        goto L30
    L6:
        if (this.mUsingCustomStart == false) goto L8;
        r4 = this.mSpinnerOffsetEnd - this.mOriginalOffsetTop;
        goto L4
    L8:
        r4 = this.mSpinnerOffsetEnd;
        goto L4
    }

    private void finishSpinner(float r3) {
        if (r3 <= this.mTotalDragDistance) goto L5;
        setRefreshing(true, true);
        return;
    L5:
        this.mRefreshing = false;
        this.mProgress.setStartEndTrim(0.0f, 0.0f);
        Animation.AnimationListener r0 = null;
        if (this.mScale == true) goto L8;
        r0 = new 5(this);
    L8:
        animateOffsetToStartPosition(this.mCurrentTargetOffsetTop, r0);
        this.mProgress.setArrowEnabled(false);
    }

    @Override
    public boolean onTouchEvent(MotionEvent r6) {
        int r0 = r6.getActionMasked();
        if (this.mReturningToStart == false) goto L7;
        if (r0 != 0) goto L7;
        this.mReturningToStart = false;
    L7:
        if (isEnabled() == true) goto L9;
    L58:
        return false;
    L9:
        if (this.mReturningToStart == true) goto L58;
        if (canChildScrollUp() == true) goto L58;
        if (this.mRefreshing == true) goto L58;
        if (this.mNestedScrollInProgress == true) goto L58;
        if (r0 != 0) goto L20;
        this.mActivePointerId = r6.getPointerId(0);
        this.mIsBeingDragged = false;
    L57:
        return true;
    L20:
        if (r0 != 1) goto L22;
        int r02 = r6.findPointerIndex(this.mActivePointerId);
        if (r02 >= 0) goto L52;
        Log.e(LOG_TAG, "Got ACTION_UP event but don't have an active pointer id.");
        return false;
    L52:
        if (this.mIsBeingDragged == false) goto L54;
        float r62 = (r6.getY(r02) - this.mInitialMotionY) * DRAG_RATE;
        this.mIsBeingDragged = false;
        finishSpinner(r62);
    L54:
        this.mActivePointerId = -1;
        return false;
    L22:
        if (r0 != 2) goto L24;
        int r03 = r6.findPointerIndex(this.mActivePointerId);
        if (r03 >= 0) goto L41;
        Log.e(LOG_TAG, "Got ACTION_MOVE event but have an invalid active pointer id.");
        return false;
    L41:
        float r63 = r6.getY(r03);
        startDragging(r63);
        if (this.mIsBeingDragged == false) goto L57;
        float r64 = (r63 - this.mInitialMotionY) * DRAG_RATE;
        if (r64 <= 0.0f) goto L46;
        moveSpinner(r64);
        goto L57
    L46:
        return false;
    L24:
        if (r0 != 3) goto L26;
        return false;
    L26:
        if (r0 != 5) goto L28;
        int r04 = r6.getActionIndex();
        if (r04 >= 0) goto L35;
        Log.e(LOG_TAG, "Got ACTION_POINTER_DOWN event but have an invalid action index.");
        return false;
    L35:
        this.mActivePointerId = r6.getPointerId(r04);
        goto L57
    L28:
        if (r0 != 6) goto L57;
        onSecondaryPointerUp(r6);
        goto L57
    }

    private void startDragging(float r4) {
        float r0 = this.mInitialDownY;
        float r42 = r4 - r0;
        int r1 = this.mTouchSlop;
        if (r42 > r1) goto L5;
        return;
    L5:
        if (this.mIsBeingDragged == true) goto L9;
        this.mInitialMotionY = r0 + r1;
        this.mIsBeingDragged = true;
        this.mProgress.setAlpha(76);
        return;
    }

    private void animateOffsetToCorrectPosition(int r3, Animation.AnimationListener r4) {
        this.mFrom = r3;
        this.mAnimateToCorrectPosition.reset();
        this.mAnimateToCorrectPosition.setDuration(200);
        this.mAnimateToCorrectPosition.setInterpolator(this.mDecelerateInterpolator);
        if (r4 == null) goto L5;
        this.mCircleView.setAnimationListener(r4);
    L5:
        this.mCircleView.clearAnimation();
        this.mCircleView.startAnimation(this.mAnimateToCorrectPosition);
    }

    private void animateOffsetToStartPosition(int r3, Animation.AnimationListener r4) {
        if (this.mScale == false) goto L5;
        startScaleDownReturnToStartAnimation(r3, r4);
        return;
    L5:
        this.mFrom = r3;
        this.mAnimateToStartPosition.reset();
        this.mAnimateToStartPosition.setDuration(200);
        this.mAnimateToStartPosition.setInterpolator(this.mDecelerateInterpolator);
        if (r4 == null) goto L8;
        this.mCircleView.setAnimationListener(r4);
    L8:
        this.mCircleView.clearAnimation();
        this.mCircleView.startAnimation(this.mAnimateToStartPosition);
    }

    void moveToStart(float r3) {
        setTargetOffsetTopAndBottom((this.mFrom + ((int) ((this.mOriginalOffsetTop - r0) * r3))) - this.mCircleView.getTop());
    }

    private void startScaleDownReturnToStartAnimation(int r3, Animation.AnimationListener r4) {
        this.mFrom = r3;
        this.mStartingScale = this.mCircleView.getScaleX();
        this.mScaleDownToStartAnimation = new 8(this);
        this.mScaleDownToStartAnimation.setDuration(150);
        if (r4 == null) goto L5;
        this.mCircleView.setAnimationListener(r4);
    L5:
        this.mCircleView.clearAnimation();
        this.mCircleView.startAnimation(this.mScaleDownToStartAnimation);
    }

    void setTargetOffsetTopAndBottom(int r2) {
        this.mCircleView.bringToFront();
        ViewCompat.offsetTopAndBottom(this.mCircleView, r2);
        this.mCurrentTargetOffsetTop = this.mCircleView.getTop();
    }

    private void onSecondaryPointerUp(MotionEvent r4) {
        int r0 = r4.getActionIndex();
        if (r4.getPointerId(r0) != this.mActivePointerId) goto L9;
        if (r0 != 0) goto L6;
        int r02 = 1;
    L7:
        this.mActivePointerId = r4.getPointerId(r02);
        return;
    L6:
        r02 = 0;
        goto L7
    }
}
