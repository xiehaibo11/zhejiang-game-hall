package android.support.v4.widget;

import android.R;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.view.AccessibilityDelegateCompat;
import android.support.v4.view.NestedScrollingChild2;
import android.support.v4.view.NestedScrollingChildHelper;
import android.support.v4.view.NestedScrollingParent2;
import android.support.v4.view.NestedScrollingParentHelper;
import android.support.v4.view.ScrollingView;
import android.support.v4.view.ViewCompat;
import android.support.v4.view.accessibility.AccessibilityNodeInfoCompat;
import android.support.v4.view.accessibility.AccessibilityRecordCompat;
import android.support.v7.widget.ActivityChooserView;
import android.util.AttributeSet;
import android.util.Log;
import android.util.TypedValue;
import android.view.FocusFinder;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.accessibility.AccessibilityEvent;
import android.view.animation.AnimationUtils;
import android.widget.EdgeEffect;
import android.widget.FrameLayout;
import android.widget.OverScroller;
import android.widget.ScrollView;
import java.util.ArrayList;

public class NestedScrollView extends FrameLayout implements NestedScrollingParent2, NestedScrollingChild2, ScrollingView {
    private static final AccessibilityDelegate ACCESSIBILITY_DELEGATE = null;
    static final int ANIMATED_SCROLL_GAP = 250;
    private static final int INVALID_POINTER = -1;
    static final float MAX_SCROLL_FACTOR = 0.5f;
    private static final int[] SCROLLVIEW_STYLEABLE = null;
    private static final String TAG = "NestedScrollView";
    private int mActivePointerId;
    private final NestedScrollingChildHelper mChildHelper;
    private View mChildToScrollTo;
    private EdgeEffect mEdgeGlowBottom;
    private EdgeEffect mEdgeGlowTop;
    private boolean mFillViewport;
    private boolean mIsBeingDragged;
    private boolean mIsLaidOut;
    private boolean mIsLayoutDirty;
    private int mLastMotionY;
    private long mLastScroll;
    private int mLastScrollerY;
    private int mMaximumVelocity;
    private int mMinimumVelocity;
    private int mNestedYOffset;
    private OnScrollChangeListener mOnScrollChangeListener;
    private final NestedScrollingParentHelper mParentHelper;
    private SavedState mSavedState;
    private final int[] mScrollConsumed;
    private final int[] mScrollOffset;
    private OverScroller mScroller;
    private boolean mSmoothScrollingEnabled;
    private final Rect mTempRect;
    private int mTouchSlop;
    private VelocityTracker mVelocityTracker;
    private float mVerticalScrollFactor;

    static class AccessibilityDelegate extends AccessibilityDelegateCompat {
        AccessibilityDelegate() {
        }

        @Override
        public boolean performAccessibilityAction(View r3, int r4, Bundle r5) {
            if (super.performAccessibilityAction(r3, r4, r5) == false) goto L5;
            return true;
        L5:
            NestedScrollView r32 = (NestedScrollView) r3;
            if (r32.isEnabled() == true) goto L9;
            return false;
        L9:
            if (r4 != 4096) goto L11;
            int r42 = (r32.getHeight() - r32.getPaddingBottom()) - r32.getPaddingTop();
            int r43 = Math.min(r32.getScrollY() + r42, r32.getScrollRange());
            if (r43 == r32.getScrollY()) goto L22;
            r32.smoothScrollTo(0, r43);
            return true;
        L22:
            return false;
        L11:
            if (r4 == 8192) goto L13;
            return false;
        L13:
            int r44 = (r32.getHeight() - r32.getPaddingBottom()) - r32.getPaddingTop();
            int r45 = Math.max(r32.getScrollY() - r44, 0);
            if (r45 == r32.getScrollY()) goto L17;
            r32.smoothScrollTo(0, r45);
            return true;
        L17:
            return false;
        }

        @Override
        public void onInitializeAccessibilityNodeInfo(View r3, AccessibilityNodeInfoCompat r4) {
            super.onInitializeAccessibilityNodeInfo(r3, r4);
            NestedScrollView r32 = (NestedScrollView) r3;
            r4.setClassName(ScrollView.class.getName());
            if (r32.isEnabled() == false) goto L13;
            int r0 = r32.getScrollRange();
            if (r0 <= 0) goto L14;
            r4.setScrollable(true);
            if (r32.getScrollY() <= 0) goto L10;
            r4.addAction(8192);
        L10:
            if (r32.getScrollY() >= r0) goto L15;
            r4.addAction(4096);
            return;
        L15:
            return;
        L14:
            return;
        }

        @Override
        public void onInitializeAccessibilityEvent(View r2, AccessibilityEvent r3) {
            super.onInitializeAccessibilityEvent(r2, r3);
            NestedScrollView r22 = (NestedScrollView) r2;
            r3.setClassName(ScrollView.class.getName());
            if (r22.getScrollRange() <= 0) goto L5;
            boolean r0 = true;
        L6:
            r3.setScrollable(r0);
            r3.setScrollX(r22.getScrollX());
            r3.setScrollY(r22.getScrollY());
            AccessibilityRecordCompat.setMaxScrollX(r3, r22.getScrollX());
            AccessibilityRecordCompat.setMaxScrollY(r3, r22.getScrollRange());
            return;
        L5:
            r0 = false;
            goto L6
        }
    }

    public interface OnScrollChangeListener {
        void onScrollChange(NestedScrollView r1, int r2, int r3, int r4, int r5);
    }

    static class SavedState extends View.BaseSavedState {
        public static final Parcelable.Creator<SavedState> CREATOR = null;
        public int scrollPosition;

        SavedState(Parcelable r1) {
            super(r1);
        }

        SavedState(Parcel r1) {
            super(r1);
            this.scrollPosition = r1.readInt();
        }

        @Override
        public void writeToParcel(Parcel r1, int r2) {
            super.writeToParcel(r1, r2);
            r1.writeInt(this.scrollPosition);
        }

        public String toString() {
            return "HorizontalScrollView.SavedState{" + Integer.toHexString(System.identityHashCode(this)) + " scrollPosition=" + this.scrollPosition + "}";
        }

        static {
            CREATOR = new 1();
        }
    }

    private static int clamp(int r1, int r2, int r3) {
        if (r2 >= r3) goto L10;
        if (r1 >= 0) goto L6;
        return 0;
    L6:
        if ((r2 + r1) > r3) goto L8;
        return r1;
    L8:
        return r3 - r2;
    L10:
        return 0;
    }

    @Override
    public boolean onStartNestedScroll(@NonNull View r1, @NonNull View r2, int r3, int r4) {
        if ((r3 & 2) == 0) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public boolean shouldDelayChildPressedState() {
        return true;
    }

    static {
        ACCESSIBILITY_DELEGATE = new AccessibilityDelegate();
        SCROLLVIEW_STYLEABLE = new int[]{R.attr.fillViewport};
    }

    public NestedScrollView(@NonNull Context r2) {
        this(r2, null);
    }

    public NestedScrollView(@NonNull Context r2, @Nullable AttributeSet r3) {
        this(r2, r3, 0);
    }

    public NestedScrollView(@NonNull Context r5, @Nullable AttributeSet r6, int r7) {
        super(r5, r6, r7);
        this.mTempRect = new Rect();
        this.mIsLayoutDirty = true;
        this.mIsLaidOut = false;
        this.mChildToScrollTo = null;
        this.mIsBeingDragged = false;
        this.mSmoothScrollingEnabled = true;
        this.mActivePointerId = -1;
        this.mScrollOffset = new int[2];
        this.mScrollConsumed = new int[2];
        initScrollView();
        TypedArray r52 = r5.obtainStyledAttributes(r6, SCROLLVIEW_STYLEABLE, r7, 0);
        setFillViewport(r52.getBoolean(0, false));
        r52.recycle();
        this.mParentHelper = new NestedScrollingParentHelper(this);
        this.mChildHelper = new NestedScrollingChildHelper(this);
        setNestedScrollingEnabled(true);
        ViewCompat.setAccessibilityDelegate(this, ACCESSIBILITY_DELEGATE);
    }

    @Override
    public boolean startNestedScroll(int r2, int r3) {
        return this.mChildHelper.startNestedScroll(r2, r3);
    }

    @Override
    public void stopNestedScroll(int r2) {
        this.mChildHelper.stopNestedScroll(r2);
    }

    @Override
    public boolean hasNestedScrollingParent(int r2) {
        return this.mChildHelper.hasNestedScrollingParent(r2);
    }

    @Override
    public boolean dispatchNestedScroll(int r8, int r9, int r10, int r11, int[] r12, int r13) {
        return this.mChildHelper.dispatchNestedScroll(r8, r9, r10, r11, r12, r13);
    }

    @Override
    public boolean dispatchNestedPreScroll(int r7, int r8, int[] r9, int[] r10, int r11) {
        return this.mChildHelper.dispatchNestedPreScroll(r7, r8, r9, r10, r11);
    }

    @Override
    public void setNestedScrollingEnabled(boolean r2) {
        this.mChildHelper.setNestedScrollingEnabled(r2);
    }

    @Override
    public boolean isNestedScrollingEnabled() {
        return this.mChildHelper.isNestedScrollingEnabled();
    }

    @Override
    public boolean startNestedScroll(int r2) {
        return startNestedScroll(r2, 0);
    }

    @Override
    public void stopNestedScroll() {
        stopNestedScroll(0);
    }

    @Override
    public boolean hasNestedScrollingParent() {
        return hasNestedScrollingParent(0);
    }

    @Override
    public boolean dispatchNestedScroll(int r8, int r9, int r10, int r11, int[] r12) {
        return dispatchNestedScroll(r8, r9, r10, r11, r12, 0);
    }

    @Override
    public boolean dispatchNestedPreScroll(int r7, int r8, int[] r9, int[] r10) {
        return dispatchNestedPreScroll(r7, r8, r9, r10, 0);
    }

    @Override
    public boolean dispatchNestedFling(float r2, float r3, boolean r4) {
        return this.mChildHelper.dispatchNestedFling(r2, r3, r4);
    }

    @Override
    public boolean dispatchNestedPreFling(float r2, float r3) {
        return this.mChildHelper.dispatchNestedPreFling(r2, r3);
    }

    @Override
    public void onNestedScrollAccepted(@NonNull View r2, @NonNull View r3, int r4, int r5) {
        this.mParentHelper.onNestedScrollAccepted(r2, r3, r4, r5);
        startNestedScroll(2, r5);
    }

    @Override
    public void onStopNestedScroll(@NonNull View r2, int r3) {
        this.mParentHelper.onStopNestedScroll(r2, r3);
        stopNestedScroll(r3);
    }

    @Override
    public void onNestedScroll(View r8, int r9, int r10, int r11, int r12, int r13) {
        int r82 = getScrollY();
        scrollBy(0, r12);
        int r2 = getScrollY() - r82;
        dispatchNestedScroll(0, r2, 0, r12 - r2, null, r13);
    }

    @Override
    public void onNestedPreScroll(@NonNull View r7, int r8, int r9, @NonNull int[] r10, int r11) {
        dispatchNestedPreScroll(r8, r9, r10, null, r11);
    }

    @Override
    public boolean onStartNestedScroll(View r2, View r3, int r4) {
        return onStartNestedScroll(r2, r3, r4, 0);
    }

    @Override
    public void onNestedScrollAccepted(View r2, View r3, int r4) {
        onNestedScrollAccepted(r2, r3, r4, 0);
    }

    @Override
    public void onStopNestedScroll(View r2) {
        onStopNestedScroll(r2, 0);
    }

    @Override
    public void onNestedScroll(View r8, int r9, int r10, int r11, int r12) {
        onNestedScroll(r8, r9, r10, r11, r12, 0);
    }

    @Override
    public void onNestedPreScroll(View r7, int r8, int r9, int[] r10) {
        onNestedPreScroll(r7, r8, r9, r10, 0);
    }

    @Override
    public boolean onNestedFling(View r1, float r2, float r3, boolean r4) {
        if (r4 == true) goto L5;
        flingWithNestedDispatch((int) r3);
        return true;
    L5:
        return false;
    }

    @Override
    public boolean onNestedPreFling(View r1, float r2, float r3) {
        return dispatchNestedPreFling(r2, r3);
    }

    @Override
    public int getNestedScrollAxes() {
        return this.mParentHelper.getNestedScrollAxes();
    }

    @Override
    protected float getTopFadingEdgeStrength() {
        if (getChildCount() != 0) goto L6;
        return 0.0f;
    L6:
        int r0 = getVerticalFadingEdgeLength();
        int r1 = getScrollY();
        if (r1 < r0) goto L9;
        return 1.0f;
    L9:
        return r1 / r0;
    }

    @Override
    protected float getBottomFadingEdgeStrength() {
        if (getChildCount() != 0) goto L6;
        return 0.0f;
    L6:
        View r0 = getChildAt(0);
        FrameLayout.LayoutParams r1 = (FrameLayout.LayoutParams) r0.getLayoutParams();
        int r2 = getVerticalFadingEdgeLength();
        int r02 = ((r0.getBottom() + r1.bottomMargin) - getScrollY()) - (getHeight() - getPaddingBottom());
        if (r02 < r2) goto L9;
        return 1.0f;
    L9:
        return r02 / r2;
    }

    public int getMaxScrollAmount() {
        return (int) (getHeight() * MAX_SCROLL_FACTOR);
    }

    private void initScrollView() {
        this.mScroller = new OverScroller(getContext());
        setFocusable(true);
        setDescendantFocusability(262144);
        setWillNotDraw(false);
        ViewConfiguration r0 = ViewConfiguration.get(getContext());
        this.mTouchSlop = r0.getScaledTouchSlop();
        this.mMinimumVelocity = r0.getScaledMinimumFlingVelocity();
        this.mMaximumVelocity = r0.getScaledMaximumFlingVelocity();
    }

    @Override
    public void addView(View r2) {
        if (getChildCount() > 0) goto L7;
        super.addView(r2);
        return;
    L7:
        throw new IllegalStateException("ScrollView can host only one direct child");
    }

    @Override
    public void addView(View r2, int r3) {
        if (getChildCount() > 0) goto L7;
        super.addView(r2, r3);
        return;
    L7:
        throw new IllegalStateException("ScrollView can host only one direct child");
    }

    @Override
    public void addView(View r2, ViewGroup.LayoutParams r3) {
        if (getChildCount() > 0) goto L7;
        super.addView(r2, r3);
        return;
    L7:
        throw new IllegalStateException("ScrollView can host only one direct child");
    }

    @Override
    public void addView(View r2, int r3, ViewGroup.LayoutParams r4) {
        if (getChildCount() > 0) goto L7;
        super.addView(r2, r3, r4);
        return;
    L7:
        throw new IllegalStateException("ScrollView can host only one direct child");
    }

    public void setOnScrollChangeListener(@Nullable OnScrollChangeListener r1) {
        this.mOnScrollChangeListener = r1;
    }

    private boolean canScroll() {
        if (getChildCount() <= 0) goto L8;
        View r0 = getChildAt(0);
        FrameLayout.LayoutParams r2 = (FrameLayout.LayoutParams) r0.getLayoutParams();
        if (((r0.getHeight() + r2.topMargin) + r2.bottomMargin) <= ((getHeight() - getPaddingTop()) - getPaddingBottom())) goto L9;
        return true;
    L9:
        return false;
    L8:
        return false;
    }

    public boolean isFillViewport() {
        return this.mFillViewport;
    }

    public void setFillViewport(boolean r2) {
        if (r2 == this.mFillViewport) goto L6;
        this.mFillViewport = r2;
        requestLayout();
        return;
    }

    public boolean isSmoothScrollingEnabled() {
        return this.mSmoothScrollingEnabled;
    }

    public void setSmoothScrollingEnabled(boolean r1) {
        this.mSmoothScrollingEnabled = r1;
    }

    @Override
    protected void onScrollChanged(int r7, int r8, int r9, int r10) {
        super.onScrollChanged(r7, r8, r9, r10);
        OnScrollChangeListener r0 = this.mOnScrollChangeListener;
        if (r0 == null) goto L6;
        r0.onScrollChange(this, r7, r8, r9, r10);
        return;
    }

    @Override
    protected void onMeasure(int r5, int r6) {
        super.onMeasure(r5, r6);
        if (this.mFillViewport == true) goto L6;
        return;
    L6:
        if (View.MeasureSpec.getMode(r6) != 0) goto L9;
        return;
    L9:
        if (getChildCount() <= 0) goto L14;
        View r62 = getChildAt(0);
        FrameLayout.LayoutParams r0 = (FrameLayout.LayoutParams) r62.getLayoutParams();
        int r1 = r62.getMeasuredHeight();
        int r2 = (((getMeasuredHeight() - getPaddingTop()) - getPaddingBottom()) - r0.topMargin) - r0.bottomMargin;
        if (r1 >= r2) goto L15;
        r62.measure(getChildMeasureSpec(r5, ((getPaddingLeft() + getPaddingRight()) + r0.leftMargin) + r0.rightMargin, r0.width), View.MeasureSpec.makeMeasureSpec(r2, 1073741824));
        return;
    L15:
        return;
    }

    @Override
    public boolean dispatchKeyEvent(KeyEvent r2) {
        if (super.dispatchKeyEvent(r2) == false) goto L5;
    L8:
        return true;
    L5:
        if (executeKeyEvent(r2) == true) goto L8;
        return false;
    }

    public boolean executeKeyEvent(@NonNull KeyEvent r6) {
        this.mTempRect.setEmpty();
        int r2 = 130;
        if (canScroll() == true) goto L19;
        if (isFocused() == true) goto L7;
        return false;
    L7:
        if (r6.getKeyCode() == 4) goto L41;
        View r62 = findFocus();
        if (r62 != this) goto L11;
        r62 = null;
    L11:
        View r63 = FocusFinder.getInstance().findNextFocus(this, r62, 130);
        if (r63 == null) goto L42;
        if (r63 != this) goto L15;
        return false;
    L15:
        if (r63.requestFocus(130) == false) goto L44;
        return true;
    L44:
        return false;
    L42:
        return false;
    L41:
        return false;
    L19:
        if (r6.getAction() != 0) goto L45;
        int r0 = r6.getKeyCode();
        if (r0 == 19) goto L36;
        if (r0 == 20) goto L32;
        if (r0 == 62) goto L28;
        return false;
    L28:
        if (r6.isShiftPressed() == false) goto L30;
        r2 = 33;
    L30:
        pageScroll(r2);
        return false;
    L32:
        if (r6.isAltPressed() == true) goto L48;
        return arrowScroll(130);
    L48:
        return fullScroll(130);
    L36:
        if (r6.isAltPressed() == true) goto L39;
        return arrowScroll(33);
    L39:
        return fullScroll(33);
    L45:
        return false;
    }

    private boolean inChild(int r5, int r6) {
        if (getChildCount() <= 0) goto L14;
        int r0 = getScrollY();
        View r2 = getChildAt(0);
        if (r6 >= (r2.getTop() - r0)) goto L7;
        return false;
    L7:
        if (r6 < (r2.getBottom() - r0)) goto L9;
        return false;
    L9:
        if (r5 >= r2.getLeft()) goto L11;
        return false;
    L11:
        if (r5 >= r2.getRight()) goto L18;
        return true;
    L18:
        return false;
    L14:
        return false;
    }

    private void initOrResetVelocityTracker() {
        VelocityTracker r0 = this.mVelocityTracker;
        if (r0 != null) goto L5;
        this.mVelocityTracker = VelocityTracker.obtain();
        return;
    L5:
        r0.clear();
    }

    private void initVelocityTrackerIfNotExists() {
        if (this.mVelocityTracker != null) goto L6;
        this.mVelocityTracker = VelocityTracker.obtain();
        return;
    }

    private void recycleVelocityTracker() {
        VelocityTracker r0 = this.mVelocityTracker;
        if (r0 == null) goto L6;
        r0.recycle();
        this.mVelocityTracker = null;
        return;
    }

    @Override
    public void requestDisallowInterceptTouchEvent(boolean r1) {
        if (r1 == false) goto L4;
        recycleVelocityTracker();
    L4:
        super.requestDisallowInterceptTouchEvent(r1);
    }

    @Override
    public boolean onInterceptTouchEvent(MotionEvent r12) {
        int r0 = r12.getAction();
        if (r0 == 2) goto L5;
    L7:
        int r02 = r0 & 255;
        if (r02 != 0) goto L10;
        int r03 = (int) r12.getY();
        if (inChild((int) r12.getX(), r03) == true) goto L38;
        this.mIsBeingDragged = false;
        recycleVelocityTracker();
    L40:
        return this.mIsBeingDragged;
    L38:
        this.mLastMotionY = r03;
        this.mActivePointerId = r12.getPointerId(0);
        initOrResetVelocityTracker();
        this.mVelocityTracker.addMovement(r12);
        this.mScroller.computeScrollOffset();
        this.mIsBeingDragged = !this.mScroller.isFinished();
        startNestedScroll(2, 0);
        goto L40
    L10:
        if (r02 == 1) goto L31;
        if (r02 != 2) goto L13;
        int r04 = this.mActivePointerId;
        if (r04 == (-1)) goto L40;
        int r5 = r12.findPointerIndex(r04);
        if (r5 != (-1)) goto L24;
        Log.e(TAG, "Invalid pointerId=" + r04 + " in onInterceptTouchEvent");
        goto L40
    L24:
        int r05 = (int) r12.getY(r5);
        if (Math.abs(r05 - this.mLastMotionY) <= this.mTouchSlop) goto L40;
        if ((2 & getNestedScrollAxes()) != 0) goto L40;
        this.mIsBeingDragged = true;
        this.mLastMotionY = r05;
        initVelocityTrackerIfNotExists();
        this.mVelocityTracker.addMovement(r12);
        this.mNestedYOffset = 0;
        ViewParent r122 = getParent();
        if (r122 == null) goto L40;
        r122.requestDisallowInterceptTouchEvent(true);
        goto L40
    L13:
        if (r02 == 3) goto L31;
        if (r02 != 6) goto L40;
        onSecondaryPointerUp(r12);
    L31:
        this.mIsBeingDragged = false;
        this.mActivePointerId = -1;
        recycleVelocityTracker();
        if (this.mScroller.springBack(getScrollX(), getScrollY(), 0, 0, 0, getScrollRange()) == false) goto L34;
        ViewCompat.postInvalidateOnAnimation(this);
    L34:
        stopNestedScroll(0);
        goto L40
    L5:
        if (this.mIsBeingDragged == false) goto L7;
        return true;
    }

    @Override
    public boolean onTouchEvent(MotionEvent r24) {
        initVelocityTrackerIfNotExists();
        MotionEvent r12 = MotionEvent.obtain(r24);
        int r0 = r24.getActionMasked();
        if (r0 != 0) goto L5;
        this.mNestedYOffset = 0;
    L5:
        r12.offsetLocation(0.0f, this.mNestedYOffset);
        if (r0 == 0) goto L87;
        if (r0 == 1) goto L79;
        if (r0 != 2) goto L11;
        int r9 = r24.findPointerIndex(this.mActivePointerId);
        if (r9 != (-1)) goto L30;
        Log.e(TAG, "Invalid pointerId=" + this.mActivePointerId + " in onTouchEvent");
    L98:
        VelocityTracker r02 = this.mVelocityTracker;
        if (r02 == null) goto L101;
        r02.addMovement(r12);
    L101:
        r12.recycle();
        return true;
    L30:
        int r6 = (int) r24.getY(r9);
        int r7 = this.mLastMotionY - r6;
        if (dispatchNestedPreScroll(0, r7, this.mScrollConsumed, this.mScrollOffset, 0) == false) goto L34;
        r7 = r7 - this.mScrollConsumed[1];
        r12.offsetLocation(0.0f, this.mScrollOffset[1]);
        this.mNestedYOffset += this.mScrollOffset[1];
    L34:
        if (this.mIsBeingDragged == false) goto L36;
    L44:
        int r8 = r7;
        if (this.mIsBeingDragged == false) goto L98;
        this.mLastMotionY = r6 - this.mScrollOffset[1];
        int r16 = getScrollY();
        int r72 = getScrollRange();
        int r03 = getOverScrollMode();
        if (r03 == 0) goto L52;
        if (r03 != 1) goto L51;
        if (r72 > 0) goto L52;
    L51:
        boolean r17 = false;
    L54:
        if (overScrollByCompat(0, r8, 0, getScrollY(), 0, r72, 0, 0, true) == true) goto L56;
    L58:
        int r2 = getScrollY() - r16;
        if (dispatchNestedScroll(0, r2, 0, r8 - r2, this.mScrollOffset, 0) == false) goto L61;
        this.mLastMotionY = this.mLastMotionY - this.mScrollOffset[1];
        r12.offsetLocation(0.0f, r1[1]);
        this.mNestedYOffset += this.mScrollOffset[1];
        goto L98
    L61:
        if (r17 == false) goto L98;
        ensureGlows();
        int r04 = r16 + r8;
        if (r04 >= 0) goto L68;
        EdgeEffectCompat.onPull(this.mEdgeGlowTop, r8 / getHeight(), r24.getX(r9) / getWidth());
        if (this.mEdgeGlowBottom.isFinished() == true) goto L72;
        this.mEdgeGlowBottom.onRelease();
    L72:
        EdgeEffect r05 = this.mEdgeGlowTop;
        if (r05 == null) goto L98;
        if (r05.isFinished() == true) goto L77;
    L78:
        ViewCompat.postInvalidateOnAnimation(this);
        goto L98
    L77:
        if (this.mEdgeGlowBottom.isFinished() == true) goto L98;
    L68:
        if (r04 <= r72) goto L72;
        EdgeEffectCompat.onPull(this.mEdgeGlowBottom, r8 / getHeight(), 1.0f - (r24.getX(r9) / getWidth()));
        if (this.mEdgeGlowTop.isFinished() == true) goto L72;
        this.mEdgeGlowTop.onRelease();
        goto L72
    L56:
        if (hasNestedScrollingParent(0) == true) goto L58;
        this.mVelocityTracker.clear();
    L52:
        r17 = true;
        goto L54
    L36:
        if (Math.abs(r7) <= this.mTouchSlop) goto L44;
        ViewParent r06 = getParent();
        if (r06 == null) goto L40;
        r06.requestDisallowInterceptTouchEvent(true);
    L40:
        this.mIsBeingDragged = true;
        if (r7 <= 0) goto L43;
        r7 = r7 - this.mTouchSlop;
        goto L44
    L43:
        r7 = r7 + this.mTouchSlop;
        goto L44
    L11:
        if (r0 == 3) goto L20;
        if (r0 != 5) goto L15;
        int r07 = r24.getActionIndex();
        this.mLastMotionY = (int) r24.getY(r07);
        this.mActivePointerId = r24.getPointerId(r07);
        goto L98
    L15:
        if (r0 != 6) goto L98;
        onSecondaryPointerUp(r24);
        this.mLastMotionY = (int) r24.getY(r24.findPointerIndex(this.mActivePointerId));
        goto L98
    L20:
        if (this.mIsBeingDragged == true) goto L22;
    L26:
        this.mActivePointerId = -1;
        endDrag();
        goto L98
    L22:
        if (getChildCount() <= 0) goto L26;
        if (this.mScroller.springBack(getScrollX(), getScrollY(), 0, 0, 0, getScrollRange()) == false) goto L26;
        ViewCompat.postInvalidateOnAnimation(this);
        goto L26
    L79:
        VelocityTracker r08 = this.mVelocityTracker;
        r08.computeCurrentVelocity(1000, this.mMaximumVelocity);
        int r09 = (int) r08.getYVelocity(this.mActivePointerId);
        if (Math.abs(r09) <= this.mMinimumVelocity) goto L83;
        flingWithNestedDispatch(-r09);
    L85:
        this.mActivePointerId = -1;
        endDrag();
        goto L98
    L83:
        if (this.mScroller.springBack(getScrollX(), getScrollY(), 0, 0, 0, getScrollRange()) == false) goto L85;
        ViewCompat.postInvalidateOnAnimation(this);
        goto L85
    L87:
        if (getChildCount() != 0) goto L89;
        return false;
    L89:
        boolean r010 = !this.mScroller.isFinished();
        this.mIsBeingDragged = r010;
        if (r010 == false) goto L95;
        ViewParent r011 = getParent();
        if (r011 == null) goto L95;
        r011.requestDisallowInterceptTouchEvent(true);
    L95:
        if (this.mScroller.isFinished() == true) goto L97;
        this.mScroller.abortAnimation();
    L97:
        this.mLastMotionY = (int) r24.getY();
        this.mActivePointerId = r24.getPointerId(0);
        startNestedScroll(2, 0);
        goto L98
    }

    private void onSecondaryPointerUp(MotionEvent r4) {
        int r0 = r4.getActionIndex();
        if (r4.getPointerId(r0) != this.mActivePointerId) goto L11;
        if (r0 != 0) goto L6;
        int r02 = 1;
    L7:
        this.mLastMotionY = (int) r4.getY(r02);
        this.mActivePointerId = r4.getPointerId(r02);
        VelocityTracker r42 = this.mVelocityTracker;
        if (r42 == null) goto L12;
        r42.clear();
        return;
    L12:
        return;
    L6:
        r02 = 0;
        goto L7
    }

    @Override
    public boolean onGenericMotionEvent(MotionEvent r4) {
        if ((r4.getSource() & 2) != 0) goto L5;
    L19:
        return false;
    L5:
        if (r4.getAction() != 8) goto L19;
        if (this.mIsBeingDragged == true) goto L19;
        float r42 = r4.getAxisValue(9);
        if (r42 == 0.0f) goto L19;
        int r43 = (int) (r42 * getVerticalScrollFactorCompat());
        int r0 = getScrollRange();
        int r2 = getScrollY();
        int r44 = r2 - r43;
        if (r44 >= 0) goto L14;
        r44 = 0;
    L16:
        if (r44 == r2) goto L19;
        super.scrollTo(getScrollX(), r44);
        return true;
    L14:
        if (r44 <= r0) goto L16;
        r44 = r0;
        goto L16
    }

    private float getVerticalScrollFactorCompat() {
        if (this.mVerticalScrollFactor != 0.0f) goto L10;
        TypedValue r0 = new TypedValue();
        Context r1 = getContext();
        if (r1.getTheme().resolveAttribute(R.attr.listPreferredItemHeight, r0, true) == false) goto L8;
        this.mVerticalScrollFactor = r0.getDimension(r1.getResources().getDisplayMetrics());
        goto L10
    L8:
        throw new IllegalStateException("Expected theme to define listPreferredItemHeight.");
    L10:
        return this.mVerticalScrollFactor;
    }

    @Override
    protected void onOverScrolled(int r1, int r2, boolean r3, boolean r4) {
        super.scrollTo(r1, r2);
    }

    boolean overScrollByCompat(int r13, int r14, int r15, int r16, int r17, int r18, int r19, int r20, boolean r21) {
        int r1 = getOverScrollMode();
        if (computeHorizontalScrollRange() <= computeHorizontalScrollExtent()) goto L5;
        boolean r2 = true;
    L7:
        if (computeVerticalScrollRange() <= computeVerticalScrollExtent()) goto L9;
        boolean r3 = true;
    L10:
        if (r1 == 0) goto L15;
        if (r1 != 1) goto L14;
        if (r2 == true) goto L15;
    L14:
        boolean r22 = false;
    L16:
        if (r1 == 0) goto L21;
        if (r1 != 1) goto L20;
        if (r3 == true) goto L21;
    L20:
        boolean r12 = false;
    L22:
        int r32 = r15 + r13;
        if (r22 == true) goto L25;
        int r23 = 0;
    L26:
        int r6 = r16 + r14;
        if (r12 == true) goto L29;
        int r110 = 0;
    L30:
        int r7 = -r23;
        int r24 = r23 + r17;
        int r8 = -r110;
        int r111 = r110 + r18;
        if (r32 <= r24) goto L34;
        r7 = r24;
    L33:
        boolean r25 = true;
    L37:
        if (r6 <= r111) goto L40;
        r6 = r111;
    L39:
        boolean r112 = true;
    L43:
        if (r112 == true) goto L45;
    L47:
        onOverScrolled(r7, r6, r25, r112);
        if (r25 == true) goto L50;
        if (r112 == true) goto L50;
        return false;
    L50:
        return true;
    L45:
        if (hasNestedScrollingParent(1) == true) goto L47;
        int r142 = r7;
        int r152 = r6;
        this.mScroller.springBack(r142, r152, 0, 0, 0, getScrollRange());
        goto L47
    L40:
        if (r6 >= r8) goto L42;
        r6 = r8;
        goto L39
    L42:
        r112 = false;
        goto L43
    L34:
        if (r32 < r7) goto L33;
        r7 = r32;
        r25 = false;
        goto L37
    L29:
        r110 = r20;
        goto L30
    L25:
        r23 = r19;
    L21:
        r12 = true;
    L15:
        r22 = true;
        goto L16
    L9:
        r3 = false;
        goto L10
    L5:
        r2 = false;
        goto L7
    }

    int getScrollRange() {
        if (getChildCount() <= 0) goto L6;
        View r0 = getChildAt(0);
        FrameLayout.LayoutParams r2 = (FrameLayout.LayoutParams) r0.getLayoutParams();
        return Math.max(0, ((r0.getHeight() + r2.topMargin) + r2.bottomMargin) - ((getHeight() - getPaddingTop()) - getPaddingBottom()));
    L6:
        return 0;
    }

    private View findFocusableViewInBounds(boolean r13, int r14, int r15) {
        ArrayList r0 = getFocusables(2);
        int r1 = r0.size();
        View r4 = null;
        int r3 = 0;
        boolean r5 = false;
    L3:
        if (r3 >= r1) goto L30;
        View r6 = (View) r0.get(r3);
        int r7 = r6.getTop();
        int r8 = r6.getBottom();
        if (r14 >= r8) goto L29;
        if (r7 >= r15) goto L29;
        if (r14 >= r7) goto L10;
        if (r8 >= r15) goto L10;
        boolean r10 = true;
    L11:
        if (r4 != null) goto L13;
        r4 = r6;
        r5 = r10;
        goto L29
    L13:
        if (r13 == true) goto L15;
    L16:
        if (r13 == false) goto L18;
    L20:
        boolean r72 = false;
    L21:
        if (r5 == false) goto L25;
        if (r10 == false) goto L29;
        if (r72 == false) goto L29;
    L28:
        r4 = r6;
        goto L29
    L25:
        if (r10 == false) goto L27;
        r4 = r6;
        r5 = true;
        goto L29
    L27:
        if (r72 == false) goto L29;
    L18:
        if (r8 <= r4.getBottom()) goto L20;
    L19:
        r72 = true;
        goto L21
    L15:
        if (r7 < r4.getTop()) goto L19;
    L10:
        r10 = false;
    L29:
        r3 = r3 + 1;
        goto L3
    L30:
        return r4;
    }

    public boolean pageScroll(int r5) {
        if (r5 != 130) goto L5;
        boolean r2 = true;
    L6:
        int r3 = getHeight();
        if (r2 == false) goto L13;
        Rect r1 = this.mTempRect;
        r1.top = getScrollY() + r3;
        int r12 = getChildCount();
        if (r12 <= 0) goto L16;
        View r0 = getChildAt(r12 - 1);
        FrameLayout.LayoutParams r13 = (FrameLayout.LayoutParams) r0.getLayoutParams();
        int r02 = (r0.getBottom() + r13.bottomMargin) + getPaddingBottom();
        if ((this.mTempRect.top + r3) <= r02) goto L16;
        int r03 = r02 - r3;
        this.mTempRect.top = r03;
    L16:
        Rect r04 = this.mTempRect;
        r04.bottom = r04.top + r3;
        return scrollAndFocus(r5, this.mTempRect.top, this.mTempRect.bottom);
    L13:
        Rect r05 = this.mTempRect;
        r05.top = getScrollY() - r3;
        if (this.mTempRect.top >= 0) goto L16;
        this.mTempRect.top = 0;
        goto L16
    L5:
        r2 = false;
        goto L6
    }

    public boolean fullScroll(int r6) {
        if (r6 != 130) goto L5;
        boolean r2 = true;
    L6:
        int r3 = getHeight();
        Rect r4 = this.mTempRect;
        r4.top = 0;
        r4.bottom = r3;
        if (r2 == false) goto L12;
        int r1 = getChildCount();
        if (r1 <= 0) goto L12;
        View r0 = getChildAt(r1 - 1);
        FrameLayout.LayoutParams r12 = (FrameLayout.LayoutParams) r0.getLayoutParams();
        Rect r22 = this.mTempRect;
        r22.bottom = (r0.getBottom() + r12.bottomMargin) + getPaddingBottom();
        Rect r02 = this.mTempRect;
        r02.top = r02.bottom - r3;
    L12:
        return scrollAndFocus(r6, this.mTempRect.top, this.mTempRect.bottom);
    L5:
        r2 = false;
        goto L6
    }

    private boolean scrollAndFocus(int r7, int r8, int r9) {
        int r0 = getHeight();
        int r1 = getScrollY();
        int r02 = r0 + r1;
        boolean r2 = false;
        if (r7 != 33) goto L5;
        boolean r4 = true;
    L6:
        View r5 = findFocusableViewInBounds(r4, r8, r9);
        if (r5 != null) goto L9;
        r5 = this;
    L9:
        if (r8 < r1) goto L12;
        if (r9 > r02) goto L12;
    L17:
        if (r5 == findFocus()) goto L19;
        r5.requestFocus(r7);
    L19:
        return r2;
    L12:
        if (r4 == false) goto L14;
        int r82 = r8 - r1;
    L15:
        doScrollY(r82);
        r2 = true;
        goto L17
    L14:
        r82 = r9 - r02;
        goto L15
    L5:
        r4 = false;
        goto L6
    }

    public boolean arrowScroll(int r8) {
        View r0 = findFocus();
        if (r0 != this) goto L5;
        r0 = null;
    L5:
        View r1 = FocusFinder.getInstance().findNextFocus(this, r0, r8);
        int r2 = getMaxScrollAmount();
        if (r1 == null) goto L11;
        if (isWithinDeltaOfScreen(r1, r2, getHeight()) == false) goto L11;
        r1.getDrawingRect(this.mTempRect);
        offsetDescendantRectToMyCoords(r1, this.mTempRect);
        doScrollY(computeScrollDeltaToGetChildRectOnScreen(this.mTempRect));
        r1.requestFocus(r8);
    L25:
        if (r0 != null) goto L27;
        return true;
    L27:
        if (r0.isFocused() == true) goto L29;
        return true;
    L29:
        if (isOffScreen(r0) == false) goto L35;
        int r82 = getDescendantFocusability();
        setDescendantFocusability(131072);
        requestFocus();
        setDescendantFocusability(r82);
        return true;
    L35:
        return true;
    L11:
        if (r8 == 33) goto L13;
    L15:
        if (r8 == 130) goto L17;
    L19:
        if (r2 != 0) goto L21;
        return false;
    L21:
        if (r8 == 130) goto L24;
        r2 = -r2;
    L24:
        doScrollY(r2);
        goto L25
    L17:
        if (getChildCount() <= 0) goto L19;
        View r12 = getChildAt(0);
        FrameLayout.LayoutParams r5 = (FrameLayout.LayoutParams) r12.getLayoutParams();
        r2 = Math.min((r12.getBottom() + r5.bottomMargin) - ((getScrollY() + getHeight()) - getPaddingBottom()), r2);
        goto L19
    L13:
        if (getScrollY() >= r2) goto L15;
        r2 = getScrollY();
        goto L19
    }

    private boolean isOffScreen(View r3) {
        return !isWithinDeltaOfScreen(r3, 0, getHeight());
    }

    private boolean isWithinDeltaOfScreen(View r2, int r3, int r4) {
        r2.getDrawingRect(this.mTempRect);
        offsetDescendantRectToMyCoords(r2, this.mTempRect);
        if ((this.mTempRect.bottom + r3) >= getScrollY()) goto L5;
    L7:
        return false;
    L5:
        if ((this.mTempRect.top - r3) > (getScrollY() + r4)) goto L7;
        return true;
    }

    private void doScrollY(int r3) {
        if (r3 != 0) goto L4;
        return;
    L4:
        if (this.mSmoothScrollingEnabled == false) goto L6;
        smoothScrollBy(0, r3);
        return;
    L6:
        scrollBy(0, r3);
    }

    public final void smoothScrollBy(int r6, int r7) {
        if (getChildCount() != 0) goto L6;
        return;
    L6:
        if ((AnimationUtils.currentAnimationTimeMillis() - this.mLastScroll) <= 250) goto L9;
        View r0 = getChildAt(0);
        FrameLayout.LayoutParams r1 = (FrameLayout.LayoutParams) r0.getLayoutParams();
        int r02 = (r0.getHeight() + r1.topMargin) + r1.bottomMargin;
        int r12 = (getHeight() - getPaddingTop()) - getPaddingBottom();
        int r2 = getScrollY();
        int r72 = r7 + r2;
        int r73 = Math.max(0, Math.min(r72, Math.max(0, r02 - r12))) - r2;
        this.mLastScrollerY = getScrollY();
        this.mScroller.startScroll(getScrollX(), r2, 0, r73);
        ViewCompat.postInvalidateOnAnimation(this);
    L12:
        this.mLastScroll = AnimationUtils.currentAnimationTimeMillis();
        return;
    L9:
        if (this.mScroller.isFinished() == true) goto L11;
        this.mScroller.abortAnimation();
    L11:
        scrollBy(r6, r7);
        goto L12
    }

    public final void smoothScrollTo(int r2, int r3) {
        smoothScrollBy(r2 - getScrollX(), r3 - getScrollY());
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public int computeVerticalScrollRange() {
        int r0 = getChildCount();
        int r1 = (getHeight() - getPaddingBottom()) - getPaddingTop();
        if (r0 != 0) goto L5;
        return r1;
    L5:
        View r2 = getChildAt(0);
        FrameLayout.LayoutParams r3 = (FrameLayout.LayoutParams) r2.getLayoutParams();
        int r22 = r2.getBottom() + r3.bottomMargin;
        int r32 = getScrollY();
        int r02 = Math.max(0, r22 - r1);
        if (r32 < 0) goto L11;
        if (r32 > r02) goto L10;
        return r22;
    L10:
        return r22 + (r32 - r02);
    L11:
        return r22 - r32;
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public int computeVerticalScrollOffset() {
        return Math.max(0, super.computeVerticalScrollOffset());
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public int computeVerticalScrollExtent() {
        return super.computeVerticalScrollExtent();
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public int computeHorizontalScrollRange() {
        return super.computeHorizontalScrollRange();
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public int computeHorizontalScrollOffset() {
        return super.computeHorizontalScrollOffset();
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public int computeHorizontalScrollExtent() {
        return super.computeHorizontalScrollExtent();
    }

    @Override
    protected void measureChild(View r3, int r4, int r5) {
        ViewGroup.LayoutParams r52 = r3.getLayoutParams();
        r3.measure(getChildMeasureSpec(r4, getPaddingLeft() + getPaddingRight(), r52.width), View.MeasureSpec.makeMeasureSpec(0, 0));
    }

    @Override
    protected void measureChildWithMargins(View r2, int r3, int r4, int r5, int r6) {
        ViewGroup.MarginLayoutParams r52 = (ViewGroup.MarginLayoutParams) r2.getLayoutParams();
        r2.measure(getChildMeasureSpec(r3, (((getPaddingLeft() + getPaddingRight()) + r52.leftMargin) + r52.rightMargin) + r4, r52.width), View.MeasureSpec.makeMeasureSpec(r52.topMargin + r52.bottomMargin, 0));
    }

    @Override
    public void computeScroll() {
        if (this.mScroller.computeScrollOffset() == false) goto L28;
        this.mScroller.getCurrX();
        int r13 = this.mScroller.getCurrY();
        int r6 = r13 - this.mLastScrollerY;
        if (dispatchNestedPreScroll(0, r6, this.mScrollConsumed, null, 1) == false) goto L7;
        r6 = r6 - this.mScrollConsumed[1];
    L7:
        int r14 = r6;
        if (r14 == 0) goto L26;
        int r15 = getScrollRange();
        int r9 = getScrollY();
        overScrollByCompat(0, r14, getScrollX(), r9, 0, r15, 0, 0, false);
        int r2 = getScrollY() - r9;
        if (dispatchNestedScroll(0, r2, 0, r14 - r2, null, 1) == true) goto L26;
        int r0 = getOverScrollMode();
        if (r0 == 0) goto L17;
        if (r0 != 1) goto L16;
        if (r15 > 0) goto L17;
    L16:
        boolean r17 = false;
    L18:
        if (r17 == false) goto L26;
        ensureGlows();
        if (r13 > 0) goto L23;
        if (r9 <= 0) goto L23;
        this.mEdgeGlowTop.onAbsorb((int) this.mScroller.getCurrVelocity());
    L23:
        if (r13 < r15) goto L26;
        if (r9 >= r15) goto L26;
        this.mEdgeGlowBottom.onAbsorb((int) this.mScroller.getCurrVelocity());
    L17:
        r17 = true;
    L26:
        this.mLastScrollerY = r13;
        ViewCompat.postInvalidateOnAnimation(this);
        return;
    L28:
        if (hasNestedScrollingParent(1) == false) goto L30;
        stopNestedScroll(1);
    L30:
        this.mLastScrollerY = 0;
    }

    private void scrollToChild(View r2) {
        r2.getDrawingRect(this.mTempRect);
        offsetDescendantRectToMyCoords(r2, this.mTempRect);
        int r22 = computeScrollDeltaToGetChildRectOnScreen(this.mTempRect);
        if (r22 == 0) goto L6;
        scrollBy(0, r22);
        return;
    }

    private boolean scrollToChildRect(Rect r3, boolean r4) {
        int r32 = computeScrollDeltaToGetChildRectOnScreen(r3);
        if (r32 == 0) goto L5;
        boolean r1 = true;
    L6:
        if (r1 == false) goto L10;
        if (r4 == false) goto L9;
        scrollBy(0, r32);
        goto L10
    L9:
        smoothScrollBy(0, r32);
    L10:
        return r1;
    L5:
        r1 = false;
        goto L6
    }

    protected int computeScrollDeltaToGetChildRectOnScreen(Rect r11) {
        if (getChildCount() != 0) goto L5;
        return 0;
    L5:
        int r0 = getHeight();
        int r2 = getScrollY();
        int r3 = r2 + r0;
        int r4 = getVerticalFadingEdgeLength();
        if (r11.top <= 0) goto L8;
        r2 = r2 + r4;
    L8:
        View r5 = getChildAt(0);
        FrameLayout.LayoutParams r6 = (FrameLayout.LayoutParams) r5.getLayoutParams();
        if (r11.bottom >= ((r5.getHeight() + r6.topMargin) + r6.bottomMargin)) goto L11;
        int r42 = r3 - r4;
    L13:
        if (r11.bottom <= r42) goto L22;
        if (r11.top <= r2) goto L22;
        if (r11.height() <= r0) goto L19;
        int r112 = r11.top - r2;
    L31:
        return Math.min(r112 + 0, (r5.getBottom() + r6.bottomMargin) - r3);
    L19:
        r112 = r11.bottom - r42;
    L22:
        if (r11.top < r2) goto L24;
        return 0;
    L24:
        if (r11.bottom < r42) goto L26;
        return 0;
    L26:
        if (r11.height() <= r0) goto L28;
        int r1 = 0 - (r42 - r11.bottom);
    L30:
        return Math.max(r1, -getScrollY());
    L28:
        r1 = 0 - (r2 - r11.top);
        goto L30
    L11:
        r42 = r3;
        goto L13
    }

    @Override
    public void requestChildFocus(View r2, View r3) {
        if (this.mIsLayoutDirty == true) goto L5;
        scrollToChild(r3);
    L6:
        super.requestChildFocus(r2, r3);
        return;
    L5:
        this.mChildToScrollTo = r3;
        goto L6
    }

    @Override
    protected boolean onRequestFocusInDescendants(int r4, Rect r5) {
        if (r4 != 2) goto L6;
        r4 = 130;
    L8:
        if (r5 != null) goto L10;
        View r0 = FocusFinder.getInstance().findNextFocus(this, null, r4);
    L12:
        if (r0 != null) goto L15;
        return false;
    L15:
        if (isOffScreen(r0) == false) goto L18;
        return false;
    L18:
        return r0.requestFocus(r4, r5);
    L10:
        r0 = FocusFinder.getInstance().findNextFocusFromRect(this, r5, r4);
        goto L12
    L6:
        if (r4 != 1) goto L8;
        r4 = 33;
        goto L8
    }

    @Override
    public boolean requestChildRectangleOnScreen(View r3, Rect r4, boolean r5) {
        r4.offset(r3.getLeft() - r3.getScrollX(), r3.getTop() - r3.getScrollY());
        return scrollToChildRect(r4, r5);
    }

    @Override
    public void requestLayout() {
        this.mIsLayoutDirty = true;
        super.requestLayout();
    }

    @Override
    protected void onLayout(boolean r2, int r3, int r4, int r5, int r6) {
        super.onLayout(r2, r3, r4, r5, r6);
        int r22 = 0;
        this.mIsLayoutDirty = false;
        View r32 = this.mChildToScrollTo;
        if (r32 != null) goto L5;
    L7:
        this.mChildToScrollTo = null;
        if (this.mIsLaidOut == false) goto L10;
    L18:
        scrollTo(getScrollX(), getScrollY());
        this.mIsLaidOut = true;
        return;
    L10:
        if (this.mSavedState == null) goto L13;
        scrollTo(getScrollX(), this.mSavedState.scrollPosition);
        this.mSavedState = null;
    L13:
        if (getChildCount() <= 0) goto L15;
        View r23 = getChildAt(0);
        FrameLayout.LayoutParams r33 = (FrameLayout.LayoutParams) r23.getLayoutParams();
        r22 = (r23.getMeasuredHeight() + r33.topMargin) + r33.bottomMargin;
    L15:
        int r62 = ((r6 - r4) - getPaddingTop()) - getPaddingBottom();
        int r34 = getScrollY();
        int r24 = clamp(r34, r62, r22);
        if (r24 == r34) goto L18;
        scrollTo(getScrollX(), r24);
        goto L18
    L5:
        if (isViewDescendantOf(r32, this) == false) goto L7;
        scrollToChild(this.mChildToScrollTo);
        goto L7
    }

    @Override
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.mIsLaidOut = false;
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
        super.onSizeChanged(r1, r2, r3, r4);
        View r12 = findFocus();
        if (r12 == null) goto L10;
        if (this != r12) goto L7;
        return;
    L7:
        if (isWithinDeltaOfScreen(r12, 0, r4) == false) goto L11;
        r12.getDrawingRect(this.mTempRect);
        offsetDescendantRectToMyCoords(r12, this.mTempRect);
        doScrollY(computeScrollDeltaToGetChildRectOnScreen(this.mTempRect));
        return;
    L11:
        return;
    }

    private static boolean isViewDescendantOf(View r2, View r3) {
        if (r2 != r3) goto L5;
        return true;
    L5:
        Object r22 = r2.getParent();
        if ((r22 instanceof ViewGroup) == true) goto L8;
    L10:
        return false;
    L8:
        if (isViewDescendantOf((View) r22, r3) == false) goto L10;
        return true;
    }

    public void fling(int r14) {
        if (getChildCount() <= 0) goto L6;
        startNestedScroll(2, 1);
        this.mScroller.fling(getScrollX(), getScrollY(), 0, r14, 0, 0, Integer.MIN_VALUE, ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED, 0, 0);
        this.mLastScrollerY = getScrollY();
        ViewCompat.postInvalidateOnAnimation(this);
        return;
    }

    private void flingWithNestedDispatch(int r5) {
        int r0 = getScrollY();
        if (r0 > 0) goto L6;
        if (r5 > 0) goto L6;
    L9:
        boolean r02 = false;
    L11:
        float r1 = r5;
        if (dispatchNestedPreFling(0.0f, r1) == true) goto L15;
        dispatchNestedFling(0.0f, r1, r02);
        fling(r5);
        return;
    L15:
        return;
    L6:
        if (r0 < getScrollRange()) goto L10;
        if (r5 >= 0) goto L9;
    L10:
        r02 = true;
        goto L11
    }

    private void endDrag() {
        this.mIsBeingDragged = false;
        recycleVelocityTracker();
        stopNestedScroll(0);
        EdgeEffect r0 = this.mEdgeGlowTop;
        if (r0 == null) goto L6;
        r0.onRelease();
        this.mEdgeGlowBottom.onRelease();
        return;
    }

    @Override
    public void scrollTo(int r7, int r8) {
        if (getChildCount() <= 0) goto L10;
        View r0 = getChildAt(0);
        FrameLayout.LayoutParams r1 = (FrameLayout.LayoutParams) r0.getLayoutParams();
        int r2 = (getWidth() - getPaddingLeft()) - getPaddingRight();
        int r3 = (r0.getWidth() + r1.leftMargin) + r1.rightMargin;
        int r4 = (getHeight() - getPaddingTop()) - getPaddingBottom();
        int r02 = (r0.getHeight() + r1.topMargin) + r1.bottomMargin;
        int r72 = clamp(r7, r2, r3);
        int r82 = clamp(r8, r4, r02);
        if (r72 == getScrollX()) goto L7;
    L8:
        super.scrollTo(r72, r82);
        return;
    L7:
        if (r82 != getScrollY()) goto L8;
        return;
    }

    private void ensureGlows() {
        if (getOverScrollMode() != 2) goto L5;
        this.mEdgeGlowTop = null;
        this.mEdgeGlowBottom = null;
        return;
    L5:
        if (this.mEdgeGlowTop != null) goto L9;
        Context r0 = getContext();
        this.mEdgeGlowTop = new EdgeEffect(r0);
        this.mEdgeGlowBottom = new EdgeEffect(r0);
        return;
    }

    @Override
    public void draw(Canvas r11) {
        super.draw(r11);
        if (this.mEdgeGlowTop == null) goto L39;
        int r0 = getScrollY();
        int r2 = 0;
        if (this.mEdgeGlowTop.isFinished() == true) goto L23;
        int r1 = r11.save();
        int r4 = getWidth();
        int r5 = getHeight();
        int r6 = Math.min(0, r0);
        if (Build.VERSION.SDK_INT >= 21) goto L9;
    L12:
        r4 = r4 - (getPaddingLeft() + getPaddingRight());
        int r7 = getPaddingLeft() + 0;
    L14:
        if (Build.VERSION.SDK_INT >= 21) goto L16;
    L18:
        r11.translate(r7, r6);
        this.mEdgeGlowTop.setSize(r4, r5);
        if (this.mEdgeGlowTop.draw(r11) == false) goto L21;
        ViewCompat.postInvalidateOnAnimation(this);
    L21:
        r11.restoreToCount(r1);
        goto L23
    L16:
        if (getClipToPadding() == false) goto L18;
        r5 = r5 - (getPaddingTop() + getPaddingBottom());
        r6 = r6 + getPaddingTop();
        goto L18
    L9:
        if (getClipToPadding() == true) goto L12;
        r7 = 0;
    L23:
        if (this.mEdgeGlowBottom.isFinished() == true) goto L40;
        int r12 = r11.save();
        int r42 = getWidth();
        int r52 = getHeight();
        int r02 = Math.max(getScrollRange(), r0) + r52;
        if (Build.VERSION.SDK_INT >= 21) goto L27;
    L28:
        r42 = r42 - (getPaddingLeft() + getPaddingRight());
        r2 = 0 + getPaddingLeft();
    L30:
        if (Build.VERSION.SDK_INT >= 21) goto L32;
    L34:
        r11.translate(r2 - r42, r02);
        r11.rotate(180.0f, r42, 0.0f);
        this.mEdgeGlowBottom.setSize(r42, r52);
        if (this.mEdgeGlowBottom.draw(r11) == false) goto L37;
        ViewCompat.postInvalidateOnAnimation(this);
    L37:
        r11.restoreToCount(r12);
        return;
    L32:
        if (getClipToPadding() == false) goto L34;
        r52 = r52 - (getPaddingTop() + getPaddingBottom());
        r02 = r02 - getPaddingBottom();
        goto L34
    L27:
        if (getClipToPadding() == false) goto L30;
    L40:
        return;
    }

    @Override
    protected void onRestoreInstanceState(Parcelable r2) {
        if ((r2 instanceof SavedState) == true) goto L6;
        super.onRestoreInstanceState(r2);
        return;
    L6:
        SavedState r22 = (SavedState) r2;
        super.onRestoreInstanceState(r22.getSuperState());
        this.mSavedState = r22;
        requestLayout();
    }

    @Override
    protected Parcelable onSaveInstanceState() {
        SavedState r1 = new SavedState(super.onSaveInstanceState());
        r1.scrollPosition = getScrollY();
        return r1;
    }
}
