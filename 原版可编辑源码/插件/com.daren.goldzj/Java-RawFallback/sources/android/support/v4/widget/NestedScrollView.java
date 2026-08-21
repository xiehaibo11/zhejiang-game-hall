package android.support.v4.widget;

public class NestedScrollView extends android.widget.FrameLayout implements android.support.v4.view.NestedScrollingParent2, android.support.v4.view.NestedScrollingChild2, android.support.v4.view.ScrollingView {
    private static final android.support.v4.widget.NestedScrollView.AccessibilityDelegate ACCESSIBILITY_DELEGATE = null;
    static final int ANIMATED_SCROLL_GAP = 250;
    private static final int INVALID_POINTER = -1;
    static final float MAX_SCROLL_FACTOR = 0.5f;
    private static final int[] SCROLLVIEW_STYLEABLE = null;
    private static final java.lang.String TAG = "NestedScrollView";
    private int mActivePointerId;
    private final android.support.v4.view.NestedScrollingChildHelper mChildHelper;
    private android.view.View mChildToScrollTo;
    private android.widget.EdgeEffect mEdgeGlowBottom;
    private android.widget.EdgeEffect mEdgeGlowTop;
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
    private android.support.v4.widget.NestedScrollView.OnScrollChangeListener mOnScrollChangeListener;
    private final android.support.v4.view.NestedScrollingParentHelper mParentHelper;
    private android.support.v4.widget.NestedScrollView.SavedState mSavedState;
    private final int[] mScrollConsumed;
    private final int[] mScrollOffset;
    private android.widget.OverScroller mScroller;
    private boolean mSmoothScrollingEnabled;
    private final android.graphics.Rect mTempRect;
    private int mTouchSlop;
    private android.view.VelocityTracker mVelocityTracker;
    private float mVerticalScrollFactor;

    static class AccessibilityDelegate extends android.support.v4.view.AccessibilityDelegateCompat {
        AccessibilityDelegate() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onInitializeAccessibilityEvent(android.view.View r2, android.view.accessibility.AccessibilityEvent r3) {
                r1 = this;
                super.onInitializeAccessibilityEvent(r2, r3)
                android.support.v4.widget.NestedScrollView r2 = (android.support.v4.widget.NestedScrollView) r2
                java.lang.Class<android.widget.ScrollView> r0 = android.widget.ScrollView.class
                java.lang.String r0 = r0.getName()
                r3.setClassName(r0)
                int r0 = r2.getScrollRange()
                if (r0 <= 0) goto L16
                r0 = 1
                goto L17
            L16:
                r0 = 0
            L17:
                r3.setScrollable(r0)
                int r0 = r2.getScrollX()
                r3.setScrollX(r0)
                int r0 = r2.getScrollY()
                r3.setScrollY(r0)
                int r0 = r2.getScrollX()
                android.support.v4.view.accessibility.AccessibilityRecordCompat.setMaxScrollX(r3, r0)
                int r2 = r2.getScrollRange()
                android.support.v4.view.accessibility.AccessibilityRecordCompat.setMaxScrollY(r3, r2)
                return
        }

        @Override
        public void onInitializeAccessibilityNodeInfo(android.view.View r3, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r4) {
                r2 = this;
                super.onInitializeAccessibilityNodeInfo(r3, r4)
                android.support.v4.widget.NestedScrollView r3 = (android.support.v4.widget.NestedScrollView) r3
                java.lang.Class<android.widget.ScrollView> r0 = android.widget.ScrollView.class
                java.lang.String r0 = r0.getName()
                r4.setClassName(r0)
                boolean r0 = r3.isEnabled()
                if (r0 == 0) goto L34
                int r0 = r3.getScrollRange()
                if (r0 <= 0) goto L34
                r1 = 1
                r4.setScrollable(r1)
                int r1 = r3.getScrollY()
                if (r1 <= 0) goto L29
                r1 = 8192(0x2000, float:1.148E-41)
                r4.addAction(r1)
            L29:
                int r3 = r3.getScrollY()
                if (r3 >= r0) goto L34
                r3 = 4096(0x1000, float:5.74E-42)
                r4.addAction(r3)
            L34:
                return
        }

        @Override
        public boolean performAccessibilityAction(android.view.View r3, int r4, android.os.Bundle r5) {
                r2 = this;
                boolean r5 = super.performAccessibilityAction(r3, r4, r5)
                r0 = 1
                if (r5 == 0) goto L8
                return r0
            L8:
                android.support.v4.widget.NestedScrollView r3 = (android.support.v4.widget.NestedScrollView) r3
                boolean r5 = r3.isEnabled()
                r1 = 0
                if (r5 != 0) goto L12
                return r1
            L12:
                r5 = 4096(0x1000, float:5.74E-42)
                if (r4 == r5) goto L3d
                r5 = 8192(0x2000, float:1.148E-41)
                if (r4 == r5) goto L1b
                return r1
            L1b:
                int r4 = r3.getHeight()
                int r5 = r3.getPaddingBottom()
                int r4 = r4 - r5
                int r5 = r3.getPaddingTop()
                int r4 = r4 - r5
                int r5 = r3.getScrollY()
                int r5 = r5 - r4
                int r4 = java.lang.Math.max(r5, r1)
                int r5 = r3.getScrollY()
                if (r4 == r5) goto L3c
                r3.smoothScrollTo(r1, r4)
                return r0
            L3c:
                return r1
            L3d:
                int r4 = r3.getHeight()
                int r5 = r3.getPaddingBottom()
                int r4 = r4 - r5
                int r5 = r3.getPaddingTop()
                int r4 = r4 - r5
                int r5 = r3.getScrollY()
                int r5 = r5 + r4
                int r4 = r3.getScrollRange()
                int r4 = java.lang.Math.min(r5, r4)
                int r5 = r3.getScrollY()
                if (r4 == r5) goto L62
                r3.smoothScrollTo(r1, r4)
                return r0
            L62:
                return r1
        }
    }

    public interface OnScrollChangeListener {
        void onScrollChange(android.support.v4.widget.NestedScrollView r1, int r2, int r3, int r4, int r5);
    }

    static class SavedState extends android.view.View.BaseSavedState {
        public static final android.os.Parcelable.Creator<android.support.v4.widget.NestedScrollView.SavedState> CREATOR = null;
        public int scrollPosition;


        static {
                android.support.v4.widget.NestedScrollView$SavedState$1 r0 = new android.support.v4.widget.NestedScrollView$SavedState$1
                r0.<init>()
                android.support.v4.widget.NestedScrollView.SavedState.CREATOR = r0
                return
        }

        SavedState(android.os.Parcel r1) {
                r0 = this;
                r0.<init>(r1)
                int r1 = r1.readInt()
                r0.scrollPosition = r1
                return
        }

        SavedState(android.os.Parcelable r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "HorizontalScrollView.SavedState{"
                r0.append(r1)
                int r1 = java.lang.System.identityHashCode(r2)
                java.lang.String r1 = java.lang.Integer.toHexString(r1)
                r0.append(r1)
                java.lang.String r1 = " scrollPosition="
                r0.append(r1)
                int r1 = r2.scrollPosition
                r0.append(r1)
                java.lang.String r1 = "}"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        @Override
        public void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                super.writeToParcel(r1, r2)
                int r2 = r0.scrollPosition
                r1.writeInt(r2)
                return
        }
    }

    static {
            android.support.v4.widget.NestedScrollView$AccessibilityDelegate r0 = new android.support.v4.widget.NestedScrollView$AccessibilityDelegate
            r0.<init>()
            android.support.v4.widget.NestedScrollView.ACCESSIBILITY_DELEGATE = r0
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 0
            r2 = 16843130(0x101017a, float:2.3694617E-38)
            r0[r1] = r2
            android.support.v4.widget.NestedScrollView.SCROLLVIEW_STYLEABLE = r0
            return
    }

    public NestedScrollView(@android.support.annotation.NonNull android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public NestedScrollView(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.Nullable android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public NestedScrollView(@android.support.annotation.NonNull android.content.Context r5, @android.support.annotation.Nullable android.util.AttributeSet r6, int r7) {
            r4 = this;
            r4.<init>(r5, r6, r7)
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r4.mTempRect = r0
            r0 = 1
            r4.mIsLayoutDirty = r0
            r1 = 0
            r4.mIsLaidOut = r1
            r2 = 0
            r4.mChildToScrollTo = r2
            r4.mIsBeingDragged = r1
            r4.mSmoothScrollingEnabled = r0
            r2 = -1
            r4.mActivePointerId = r2
            r2 = 2
            int[] r3 = new int[r2]
            r4.mScrollOffset = r3
            int[] r2 = new int[r2]
            r4.mScrollConsumed = r2
            r4.initScrollView()
            int[] r2 = android.support.v4.widget.NestedScrollView.SCROLLVIEW_STYLEABLE
            android.content.res.TypedArray r5 = r5.obtainStyledAttributes(r6, r2, r7, r1)
            boolean r6 = r5.getBoolean(r1, r1)
            r4.setFillViewport(r6)
            r5.recycle()
            android.support.v4.view.NestedScrollingParentHelper r5 = new android.support.v4.view.NestedScrollingParentHelper
            r5.<init>(r4)
            r4.mParentHelper = r5
            android.support.v4.view.NestedScrollingChildHelper r5 = new android.support.v4.view.NestedScrollingChildHelper
            r5.<init>(r4)
            r4.mChildHelper = r5
            r4.setNestedScrollingEnabled(r0)
            android.support.v4.widget.NestedScrollView$AccessibilityDelegate r5 = android.support.v4.widget.NestedScrollView.ACCESSIBILITY_DELEGATE
            android.support.v4.view.ViewCompat.setAccessibilityDelegate(r4, r5)
            return
    }

    private boolean canScroll() {
            r4 = this;
            int r0 = r4.getChildCount()
            r1 = 0
            if (r0 <= 0) goto L2c
            android.view.View r0 = r4.getChildAt(r1)
            android.view.ViewGroup$LayoutParams r2 = r0.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r2 = (android.widget.FrameLayout.LayoutParams) r2
            int r0 = r0.getHeight()
            int r3 = r2.topMargin
            int r0 = r0 + r3
            int r2 = r2.bottomMargin
            int r0 = r0 + r2
            int r2 = r4.getHeight()
            int r3 = r4.getPaddingTop()
            int r2 = r2 - r3
            int r3 = r4.getPaddingBottom()
            int r2 = r2 - r3
            if (r0 <= r2) goto L2c
            r1 = 1
        L2c:
            return r1
    }

    private static int clamp(int r1, int r2, int r3) {
            if (r2 >= r3) goto Lc
            if (r1 >= 0) goto L5
            goto Lc
        L5:
            int r0 = r2 + r1
            if (r0 <= r3) goto Lb
            int r3 = r3 - r2
            return r3
        Lb:
            return r1
        Lc:
            r1 = 0
            return r1
    }

    private void doScrollY(int r3) {
            r2 = this;
            if (r3 == 0) goto Le
            boolean r0 = r2.mSmoothScrollingEnabled
            r1 = 0
            if (r0 == 0) goto Lb
            r2.smoothScrollBy(r1, r3)
            goto Le
        Lb:
            r2.scrollBy(r1, r3)
        Le:
            return
    }

    private void endDrag() {
            r1 = this;
            r0 = 0
            r1.mIsBeingDragged = r0
            r1.recycleVelocityTracker()
            r1.stopNestedScroll(r0)
            android.widget.EdgeEffect r0 = r1.mEdgeGlowTop
            if (r0 == 0) goto L15
            r0.onRelease()
            android.widget.EdgeEffect r0 = r1.mEdgeGlowBottom
            r0.onRelease()
        L15:
            return
    }

    private void ensureGlows() {
            r2 = this;
            int r0 = r2.getOverScrollMode()
            r1 = 2
            if (r0 == r1) goto L1e
            android.widget.EdgeEffect r0 = r2.mEdgeGlowTop
            if (r0 != 0) goto L23
            android.content.Context r0 = r2.getContext()
            android.widget.EdgeEffect r1 = new android.widget.EdgeEffect
            r1.<init>(r0)
            r2.mEdgeGlowTop = r1
            android.widget.EdgeEffect r1 = new android.widget.EdgeEffect
            r1.<init>(r0)
            r2.mEdgeGlowBottom = r1
            goto L23
        L1e:
            r0 = 0
            r2.mEdgeGlowTop = r0
            r2.mEdgeGlowBottom = r0
        L23:
            return
    }

    private android.view.View findFocusableViewInBounds(boolean r13, int r14, int r15) {
            r12 = this;
            r0 = 2
            java.util.ArrayList r0 = r12.getFocusables(r0)
            int r1 = r0.size()
            r2 = 0
            r3 = 0
            r4 = r3
            r3 = 0
            r5 = 0
        Le:
            if (r3 >= r1) goto L54
            java.lang.Object r6 = r0.get(r3)
            android.view.View r6 = (android.view.View) r6
            int r7 = r6.getTop()
            int r8 = r6.getBottom()
            r9 = 1
            if (r14 >= r8) goto L51
            if (r7 >= r15) goto L51
            if (r14 >= r7) goto L29
            if (r8 >= r15) goto L29
            r10 = 1
            goto L2a
        L29:
            r10 = 0
        L2a:
            if (r4 != 0) goto L2f
            r4 = r6
            r5 = r10
            goto L51
        L2f:
            if (r13 == 0) goto L37
            int r11 = r4.getTop()
            if (r7 < r11) goto L3f
        L37:
            if (r13 != 0) goto L41
            int r7 = r4.getBottom()
            if (r8 <= r7) goto L41
        L3f:
            r7 = 1
            goto L42
        L41:
            r7 = 0
        L42:
            if (r5 == 0) goto L49
            if (r10 == 0) goto L51
            if (r7 == 0) goto L51
            goto L50
        L49:
            if (r10 == 0) goto L4e
            r4 = r6
            r5 = 1
            goto L51
        L4e:
            if (r7 == 0) goto L51
        L50:
            r4 = r6
        L51:
            int r3 = r3 + 1
            goto Le
        L54:
            return r4
    }

    private void flingWithNestedDispatch(int r5) {
            r4 = this;
            int r0 = r4.getScrollY()
            if (r0 > 0) goto L8
            if (r5 <= 0) goto L11
        L8:
            int r1 = r4.getScrollRange()
            if (r0 < r1) goto L13
            if (r5 >= 0) goto L11
            goto L13
        L11:
            r0 = 0
            goto L14
        L13:
            r0 = 1
        L14:
            float r1 = (float) r5
            r2 = 0
            boolean r3 = r4.dispatchNestedPreFling(r2, r1)
            if (r3 != 0) goto L22
            r4.dispatchNestedFling(r2, r1, r0)
            r4.fling(r5)
        L22:
            return
    }

    private float getVerticalScrollFactorCompat() {
            r5 = this;
            float r0 = r5.mVerticalScrollFactor
            r1 = 0
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 != 0) goto L35
            android.util.TypedValue r0 = new android.util.TypedValue
            r0.<init>()
            android.content.Context r1 = r5.getContext()
            android.content.res.Resources$Theme r2 = r1.getTheme()
            r3 = 16842829(0x101004d, float:2.3693774E-38)
            r4 = 1
            boolean r2 = r2.resolveAttribute(r3, r0, r4)
            if (r2 == 0) goto L2d
            android.content.res.Resources r1 = r1.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            float r0 = r0.getDimension(r1)
            r5.mVerticalScrollFactor = r0
            goto L35
        L2d:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Expected theme to define listPreferredItemHeight."
            r0.<init>(r1)
            throw r0
        L35:
            float r0 = r5.mVerticalScrollFactor
            return r0
    }

    private boolean inChild(int r5, int r6) {
            r4 = this;
            int r0 = r4.getChildCount()
            r1 = 0
            if (r0 <= 0) goto L2a
            int r0 = r4.getScrollY()
            android.view.View r2 = r4.getChildAt(r1)
            int r3 = r2.getTop()
            int r3 = r3 - r0
            if (r6 < r3) goto L2a
            int r3 = r2.getBottom()
            int r3 = r3 - r0
            if (r6 >= r3) goto L2a
            int r6 = r2.getLeft()
            if (r5 < r6) goto L2a
            int r6 = r2.getRight()
            if (r5 >= r6) goto L2a
            r1 = 1
        L2a:
            return r1
    }

    private void initOrResetVelocityTracker() {
            r1 = this;
            android.view.VelocityTracker r0 = r1.mVelocityTracker
            if (r0 != 0) goto Lb
            android.view.VelocityTracker r0 = android.view.VelocityTracker.obtain()
            r1.mVelocityTracker = r0
            goto Le
        Lb:
            r0.clear()
        Le:
            return
    }

    private void initScrollView() {
            r2 = this;
            android.widget.OverScroller r0 = new android.widget.OverScroller
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            r2.mScroller = r0
            r0 = 1
            r2.setFocusable(r0)
            r0 = 262144(0x40000, float:3.67342E-40)
            r2.setDescendantFocusability(r0)
            r0 = 0
            r2.setWillNotDraw(r0)
            android.content.Context r0 = r2.getContext()
            android.view.ViewConfiguration r0 = android.view.ViewConfiguration.get(r0)
            int r1 = r0.getScaledTouchSlop()
            r2.mTouchSlop = r1
            int r1 = r0.getScaledMinimumFlingVelocity()
            r2.mMinimumVelocity = r1
            int r0 = r0.getScaledMaximumFlingVelocity()
            r2.mMaximumVelocity = r0
            return
    }

    private void initVelocityTrackerIfNotExists() {
            r1 = this;
            android.view.VelocityTracker r0 = r1.mVelocityTracker
            if (r0 != 0) goto La
            android.view.VelocityTracker r0 = android.view.VelocityTracker.obtain()
            r1.mVelocityTracker = r0
        La:
            return
    }

    private boolean isOffScreen(android.view.View r3) {
            r2 = this;
            int r0 = r2.getHeight()
            r1 = 0
            boolean r3 = r2.isWithinDeltaOfScreen(r3, r1, r0)
            r3 = r3 ^ 1
            return r3
    }

    private static boolean isViewDescendantOf(android.view.View r2, android.view.View r3) {
            r0 = 1
            if (r2 != r3) goto L4
            return r0
        L4:
            android.view.ViewParent r2 = r2.getParent()
            boolean r1 = r2 instanceof android.view.ViewGroup
            if (r1 == 0) goto L15
            android.view.View r2 = (android.view.View) r2
            boolean r2 = isViewDescendantOf(r2, r3)
            if (r2 == 0) goto L15
            goto L16
        L15:
            r0 = 0
        L16:
            return r0
    }

    private boolean isWithinDeltaOfScreen(android.view.View r2, int r3, int r4) {
            r1 = this;
            android.graphics.Rect r0 = r1.mTempRect
            r2.getDrawingRect(r0)
            android.graphics.Rect r0 = r1.mTempRect
            r1.offsetDescendantRectToMyCoords(r2, r0)
            android.graphics.Rect r2 = r1.mTempRect
            int r2 = r2.bottom
            int r2 = r2 + r3
            int r0 = r1.getScrollY()
            if (r2 < r0) goto L23
            android.graphics.Rect r2 = r1.mTempRect
            int r2 = r2.top
            int r2 = r2 - r3
            int r3 = r1.getScrollY()
            int r3 = r3 + r4
            if (r2 > r3) goto L23
            r2 = 1
            goto L24
        L23:
            r2 = 0
        L24:
            return r2
    }

    private void onSecondaryPointerUp(android.view.MotionEvent r4) {
            r3 = this;
            int r0 = r4.getActionIndex()
            int r1 = r4.getPointerId(r0)
            int r2 = r3.mActivePointerId
            if (r1 != r2) goto L25
            if (r0 != 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            float r1 = r4.getY(r0)
            int r1 = (int) r1
            r3.mLastMotionY = r1
            int r4 = r4.getPointerId(r0)
            r3.mActivePointerId = r4
            android.view.VelocityTracker r4 = r3.mVelocityTracker
            if (r4 == 0) goto L25
            r4.clear()
        L25:
            return
    }

    private void recycleVelocityTracker() {
            r1 = this;
            android.view.VelocityTracker r0 = r1.mVelocityTracker
            if (r0 == 0) goto La
            r0.recycle()
            r0 = 0
            r1.mVelocityTracker = r0
        La:
            return
    }

    private boolean scrollAndFocus(int r7, int r8, int r9) {
            r6 = this;
            int r0 = r6.getHeight()
            int r1 = r6.getScrollY()
            int r0 = r0 + r1
            r2 = 0
            r3 = 1
            r4 = 33
            if (r7 != r4) goto L11
            r4 = 1
            goto L12
        L11:
            r4 = 0
        L12:
            android.view.View r5 = r6.findFocusableViewInBounds(r4, r8, r9)
            if (r5 != 0) goto L19
            r5 = r6
        L19:
            if (r8 < r1) goto L1e
            if (r9 > r0) goto L1e
            goto L28
        L1e:
            if (r4 == 0) goto L22
            int r8 = r8 - r1
            goto L24
        L22:
            int r8 = r9 - r0
        L24:
            r6.doScrollY(r8)
            r2 = 1
        L28:
            android.view.View r8 = r6.findFocus()
            if (r5 == r8) goto L31
            r5.requestFocus(r7)
        L31:
            return r2
    }

    private void scrollToChild(android.view.View r2) {
            r1 = this;
            android.graphics.Rect r0 = r1.mTempRect
            r2.getDrawingRect(r0)
            android.graphics.Rect r0 = r1.mTempRect
            r1.offsetDescendantRectToMyCoords(r2, r0)
            android.graphics.Rect r2 = r1.mTempRect
            int r2 = r1.computeScrollDeltaToGetChildRectOnScreen(r2)
            if (r2 == 0) goto L16
            r0 = 0
            r1.scrollBy(r0, r2)
        L16:
            return
    }

    private boolean scrollToChildRect(android.graphics.Rect r3, boolean r4) {
            r2 = this;
            int r3 = r2.computeScrollDeltaToGetChildRectOnScreen(r3)
            r0 = 0
            if (r3 == 0) goto L9
            r1 = 1
            goto La
        L9:
            r1 = 0
        La:
            if (r1 == 0) goto L15
            if (r4 == 0) goto L12
            r2.scrollBy(r0, r3)
            goto L15
        L12:
            r2.smoothScrollBy(r0, r3)
        L15:
            return r1
    }

    @Override
    public void addView(android.view.View r2) {
            r1 = this;
            int r0 = r1.getChildCount()
            if (r0 > 0) goto La
            super.addView(r2)
            return
        La:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "ScrollView can host only one direct child"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void addView(android.view.View r2, int r3) {
            r1 = this;
            int r0 = r1.getChildCount()
            if (r0 > 0) goto La
            super.addView(r2, r3)
            return
        La:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "ScrollView can host only one direct child"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void addView(android.view.View r2, int r3, android.view.ViewGroup.LayoutParams r4) {
            r1 = this;
            int r0 = r1.getChildCount()
            if (r0 > 0) goto La
            super.addView(r2, r3, r4)
            return
        La:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "ScrollView can host only one direct child"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void addView(android.view.View r2, android.view.ViewGroup.LayoutParams r3) {
            r1 = this;
            int r0 = r1.getChildCount()
            if (r0 > 0) goto La
            super.addView(r2, r3)
            return
        La:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "ScrollView can host only one direct child"
            r2.<init>(r3)
            throw r2
    }

    public boolean arrowScroll(int r8) {
            r7 = this;
            android.view.View r0 = r7.findFocus()
            if (r0 != r7) goto L7
            r0 = 0
        L7:
            android.view.FocusFinder r1 = android.view.FocusFinder.getInstance()
            android.view.View r1 = r1.findNextFocus(r7, r0, r8)
            int r2 = r7.getMaxScrollAmount()
            if (r1 == 0) goto L36
            int r3 = r7.getHeight()
            boolean r3 = r7.isWithinDeltaOfScreen(r1, r2, r3)
            if (r3 == 0) goto L36
            android.graphics.Rect r2 = r7.mTempRect
            r1.getDrawingRect(r2)
            android.graphics.Rect r2 = r7.mTempRect
            r7.offsetDescendantRectToMyCoords(r1, r2)
            android.graphics.Rect r2 = r7.mTempRect
            int r2 = r7.computeScrollDeltaToGetChildRectOnScreen(r2)
            r7.doScrollY(r2)
            r1.requestFocus(r8)
            goto L7e
        L36:
            r1 = 33
            r3 = 0
            r4 = 130(0x82, float:1.82E-43)
            if (r8 != r1) goto L48
            int r1 = r7.getScrollY()
            if (r1 >= r2) goto L48
            int r2 = r7.getScrollY()
            goto L74
        L48:
            if (r8 != r4) goto L74
            int r1 = r7.getChildCount()
            if (r1 <= 0) goto L74
            android.view.View r1 = r7.getChildAt(r3)
            android.view.ViewGroup$LayoutParams r5 = r1.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r5 = (android.widget.FrameLayout.LayoutParams) r5
            int r1 = r1.getBottom()
            int r5 = r5.bottomMargin
            int r1 = r1 + r5
            int r5 = r7.getScrollY()
            int r6 = r7.getHeight()
            int r5 = r5 + r6
            int r6 = r7.getPaddingBottom()
            int r5 = r5 - r6
            int r1 = r1 - r5
            int r2 = java.lang.Math.min(r1, r2)
        L74:
            if (r2 != 0) goto L77
            return r3
        L77:
            if (r8 != r4) goto L7a
            goto L7b
        L7a:
            int r2 = -r2
        L7b:
            r7.doScrollY(r2)
        L7e:
            if (r0 == 0) goto L9b
            boolean r8 = r0.isFocused()
            if (r8 == 0) goto L9b
            boolean r8 = r7.isOffScreen(r0)
            if (r8 == 0) goto L9b
            int r8 = r7.getDescendantFocusability()
            r0 = 131072(0x20000, float:1.83671E-40)
            r7.setDescendantFocusability(r0)
            r7.requestFocus()
            r7.setDescendantFocusability(r8)
        L9b:
            r8 = 1
            return r8
    }

    @Override
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public int computeHorizontalScrollExtent() {
            r1 = this;
            int r0 = super.computeHorizontalScrollExtent()
            return r0
    }

    @Override
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public int computeHorizontalScrollOffset() {
            r1 = this;
            int r0 = super.computeHorizontalScrollOffset()
            return r0
    }

    @Override
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public int computeHorizontalScrollRange() {
            r1 = this;
            int r0 = super.computeHorizontalScrollRange()
            return r0
    }

    @Override
    public void computeScroll() {
            r18 = this;
            r10 = r18
            android.widget.OverScroller r0 = r10.mScroller
            boolean r0 = r0.computeScrollOffset()
            r12 = 1
            if (r0 == 0) goto L9c
            android.widget.OverScroller r0 = r10.mScroller
            r0.getCurrX()
            android.widget.OverScroller r0 = r10.mScroller
            int r13 = r0.getCurrY()
            int r0 = r10.mLastScrollerY
            int r6 = r13 - r0
            r1 = 0
            int[] r3 = r10.mScrollConsumed
            r4 = 0
            r5 = 1
            r0 = r18
            r2 = r6
            boolean r0 = r0.dispatchNestedPreScroll(r1, r2, r3, r4, r5)
            if (r0 == 0) goto L2d
            int[] r0 = r10.mScrollConsumed
            r0 = r0[r12]
            int r6 = r6 - r0
        L2d:
            r14 = r6
            if (r14 == 0) goto L96
            int r15 = r18.getScrollRange()
            int r9 = r18.getScrollY()
            r1 = 0
            int r3 = r18.getScrollX()
            r5 = 0
            r7 = 0
            r8 = 0
            r16 = 0
            r0 = r18
            r2 = r14
            r4 = r9
            r6 = r15
            r11 = r9
            r9 = r16
            r0.overScrollByCompat(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            int r0 = r18.getScrollY()
            int r2 = r0 - r11
            int r4 = r14 - r2
            r3 = 0
            r5 = 0
            r6 = 1
            r0 = r18
            boolean r0 = r0.dispatchNestedScroll(r1, r2, r3, r4, r5, r6)
            if (r0 != 0) goto L96
            int r0 = r18.getOverScrollMode()
            if (r0 == 0) goto L6e
            if (r0 != r12) goto L6b
            if (r15 <= 0) goto L6b
            goto L6e
        L6b:
            r17 = 0
            goto L70
        L6e:
            r17 = 1
        L70:
            if (r17 == 0) goto L96
            r18.ensureGlows()
            if (r13 > 0) goto L86
            if (r11 <= 0) goto L86
            android.widget.EdgeEffect r0 = r10.mEdgeGlowTop
            android.widget.OverScroller r1 = r10.mScroller
            float r1 = r1.getCurrVelocity()
            int r1 = (int) r1
            r0.onAbsorb(r1)
            goto L96
        L86:
            if (r13 < r15) goto L96
            if (r11 >= r15) goto L96
            android.widget.EdgeEffect r0 = r10.mEdgeGlowBottom
            android.widget.OverScroller r1 = r10.mScroller
            float r1 = r1.getCurrVelocity()
            int r1 = (int) r1
            r0.onAbsorb(r1)
        L96:
            r10.mLastScrollerY = r13
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r18)
            goto La8
        L9c:
            boolean r0 = r10.hasNestedScrollingParent(r12)
            if (r0 == 0) goto La5
            r10.stopNestedScroll(r12)
        La5:
            r0 = 0
            r10.mLastScrollerY = r0
        La8:
            return
    }

    protected int computeScrollDeltaToGetChildRectOnScreen(android.graphics.Rect r11) {
            r10 = this;
            int r0 = r10.getChildCount()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            int r0 = r10.getHeight()
            int r2 = r10.getScrollY()
            int r3 = r2 + r0
            int r4 = r10.getVerticalFadingEdgeLength()
            int r5 = r11.top
            if (r5 <= 0) goto L1b
            int r2 = r2 + r4
        L1b:
            android.view.View r5 = r10.getChildAt(r1)
            android.view.ViewGroup$LayoutParams r6 = r5.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r6 = (android.widget.FrameLayout.LayoutParams) r6
            int r7 = r11.bottom
            int r8 = r5.getHeight()
            int r9 = r6.topMargin
            int r8 = r8 + r9
            int r9 = r6.bottomMargin
            int r8 = r8 + r9
            if (r7 >= r8) goto L36
            int r4 = r3 - r4
            goto L37
        L36:
            r4 = r3
        L37:
            int r7 = r11.bottom
            if (r7 <= r4) goto L5a
            int r7 = r11.top
            if (r7 <= r2) goto L5a
            int r7 = r11.height()
            if (r7 <= r0) goto L49
            int r11 = r11.top
            int r11 = r11 - r2
            goto L4c
        L49:
            int r11 = r11.bottom
            int r11 = r11 - r4
        L4c:
            int r11 = r11 + r1
            int r0 = r5.getBottom()
            int r1 = r6.bottomMargin
            int r0 = r0 + r1
            int r0 = r0 - r3
            int r1 = java.lang.Math.min(r11, r0)
            goto L7a
        L5a:
            int r3 = r11.top
            if (r3 >= r2) goto L7a
            int r3 = r11.bottom
            if (r3 >= r4) goto L7a
            int r3 = r11.height()
            if (r3 <= r0) goto L6d
            int r11 = r11.bottom
            int r4 = r4 - r11
            int r1 = r1 - r4
            goto L71
        L6d:
            int r11 = r11.top
            int r2 = r2 - r11
            int r1 = r1 - r2
        L71:
            int r11 = r10.getScrollY()
            int r11 = -r11
            int r1 = java.lang.Math.max(r1, r11)
        L7a:
            return r1
    }

    @Override
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public int computeVerticalScrollExtent() {
            r1 = this;
            int r0 = super.computeVerticalScrollExtent()
            return r0
    }

    @Override
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public int computeVerticalScrollOffset() {
            r2 = this;
            int r0 = super.computeVerticalScrollOffset()
            r1 = 0
            int r0 = java.lang.Math.max(r1, r0)
            return r0
    }

    @Override
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public int computeVerticalScrollRange() {
            r4 = this;
            int r0 = r4.getChildCount()
            int r1 = r4.getHeight()
            int r2 = r4.getPaddingBottom()
            int r1 = r1 - r2
            int r2 = r4.getPaddingTop()
            int r1 = r1 - r2
            if (r0 != 0) goto L15
            return r1
        L15:
            r0 = 0
            android.view.View r2 = r4.getChildAt(r0)
            android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r3 = (android.widget.FrameLayout.LayoutParams) r3
            int r2 = r2.getBottom()
            int r3 = r3.bottomMargin
            int r2 = r2 + r3
            int r3 = r4.getScrollY()
            int r1 = r2 - r1
            int r0 = java.lang.Math.max(r0, r1)
            if (r3 >= 0) goto L35
            int r2 = r2 - r3
            goto L39
        L35:
            if (r3 <= r0) goto L39
            int r3 = r3 - r0
            int r2 = r2 + r3
        L39:
            return r2
    }

    @Override
    public boolean dispatchKeyEvent(android.view.KeyEvent r2) {
            r1 = this;
            boolean r0 = super.dispatchKeyEvent(r2)
            if (r0 != 0) goto Lf
            boolean r2 = r1.executeKeyEvent(r2)
            if (r2 == 0) goto Ld
            goto Lf
        Ld:
            r2 = 0
            goto L10
        Lf:
            r2 = 1
        L10:
            return r2
    }

    @Override
    public boolean dispatchNestedFling(float r2, float r3, boolean r4) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.mChildHelper
            boolean r2 = r0.dispatchNestedFling(r2, r3, r4)
            return r2
    }

    @Override
    public boolean dispatchNestedPreFling(float r2, float r3) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.mChildHelper
            boolean r2 = r0.dispatchNestedPreFling(r2, r3)
            return r2
    }

    @Override
    public boolean dispatchNestedPreScroll(int r7, int r8, int[] r9, int[] r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            boolean r7 = r0.dispatchNestedPreScroll(r1, r2, r3, r4, r5)
            return r7
    }

    @Override
    public boolean dispatchNestedPreScroll(int r7, int r8, int[] r9, int[] r10, int r11) {
            r6 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r6.mChildHelper
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            boolean r7 = r0.dispatchNestedPreScroll(r1, r2, r3, r4, r5)
            return r7
    }

    @Override
    public boolean dispatchNestedScroll(int r8, int r9, int r10, int r11, int[] r12) {
            r7 = this;
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            boolean r8 = r0.dispatchNestedScroll(r1, r2, r3, r4, r5, r6)
            return r8
    }

    @Override
    public boolean dispatchNestedScroll(int r8, int r9, int r10, int r11, int[] r12, int r13) {
            r7 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r7.mChildHelper
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            boolean r8 = r0.dispatchNestedScroll(r1, r2, r3, r4, r5, r6)
            return r8
    }

    @Override
    public void draw(android.graphics.Canvas r11) {
            r10 = this;
            super.draw(r11)
            android.widget.EdgeEffect r0 = r10.mEdgeGlowTop
            if (r0 == 0) goto Le2
            int r0 = r10.getScrollY()
            android.widget.EdgeEffect r1 = r10.mEdgeGlowTop
            boolean r1 = r1.isFinished()
            r2 = 0
            r3 = 21
            if (r1 != 0) goto L73
            int r1 = r11.save()
            int r4 = r10.getWidth()
            int r5 = r10.getHeight()
            int r6 = java.lang.Math.min(r2, r0)
            int r7 = android.os.Build.VERSION.SDK_INT
            if (r7 < r3) goto L33
            boolean r7 = r10.getClipToPadding()
            if (r7 == 0) goto L31
            goto L33
        L31:
            r7 = 0
            goto L42
        L33:
            int r7 = r10.getPaddingLeft()
            int r8 = r10.getPaddingRight()
            int r7 = r7 + r8
            int r4 = r4 - r7
            int r7 = r10.getPaddingLeft()
            int r7 = r7 + r2
        L42:
            int r8 = android.os.Build.VERSION.SDK_INT
            if (r8 < r3) goto L5b
            boolean r8 = r10.getClipToPadding()
            if (r8 == 0) goto L5b
            int r8 = r10.getPaddingTop()
            int r9 = r10.getPaddingBottom()
            int r8 = r8 + r9
            int r5 = r5 - r8
            int r8 = r10.getPaddingTop()
            int r6 = r6 + r8
        L5b:
            float r7 = (float) r7
            float r6 = (float) r6
            r11.translate(r7, r6)
            android.widget.EdgeEffect r6 = r10.mEdgeGlowTop
            r6.setSize(r4, r5)
            android.widget.EdgeEffect r4 = r10.mEdgeGlowTop
            boolean r4 = r4.draw(r11)
            if (r4 == 0) goto L70
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r10)
        L70:
            r11.restoreToCount(r1)
        L73:
            android.widget.EdgeEffect r1 = r10.mEdgeGlowBottom
            boolean r1 = r1.isFinished()
            if (r1 != 0) goto Le2
            int r1 = r11.save()
            int r4 = r10.getWidth()
            int r5 = r10.getHeight()
            int r6 = r10.getScrollRange()
            int r0 = java.lang.Math.max(r6, r0)
            int r0 = r0 + r5
            int r6 = android.os.Build.VERSION.SDK_INT
            if (r6 < r3) goto L9a
            boolean r6 = r10.getClipToPadding()
            if (r6 == 0) goto La9
        L9a:
            int r6 = r10.getPaddingLeft()
            int r7 = r10.getPaddingRight()
            int r6 = r6 + r7
            int r4 = r4 - r6
            int r6 = r10.getPaddingLeft()
            int r2 = r2 + r6
        La9:
            int r6 = android.os.Build.VERSION.SDK_INT
            if (r6 < r3) goto Lc2
            boolean r3 = r10.getClipToPadding()
            if (r3 == 0) goto Lc2
            int r3 = r10.getPaddingTop()
            int r6 = r10.getPaddingBottom()
            int r3 = r3 + r6
            int r5 = r5 - r3
            int r3 = r10.getPaddingBottom()
            int r0 = r0 - r3
        Lc2:
            int r2 = r2 - r4
            float r2 = (float) r2
            float r0 = (float) r0
            r11.translate(r2, r0)
            r0 = 1127481344(0x43340000, float:180.0)
            float r2 = (float) r4
            r3 = 0
            r11.rotate(r0, r2, r3)
            android.widget.EdgeEffect r0 = r10.mEdgeGlowBottom
            r0.setSize(r4, r5)
            android.widget.EdgeEffect r0 = r10.mEdgeGlowBottom
            boolean r0 = r0.draw(r11)
            if (r0 == 0) goto Ldf
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r10)
        Ldf:
            r11.restoreToCount(r1)
        Le2:
            return
    }

    public boolean executeKeyEvent(@android.support.annotation.NonNull android.view.KeyEvent r6) {
            r5 = this;
            android.graphics.Rect r0 = r5.mTempRect
            r0.setEmpty()
            boolean r0 = r5.canScroll()
            r1 = 0
            r2 = 130(0x82, float:1.82E-43)
            if (r0 != 0) goto L36
            boolean r0 = r5.isFocused()
            if (r0 == 0) goto L35
            int r6 = r6.getKeyCode()
            r0 = 4
            if (r6 == r0) goto L35
            android.view.View r6 = r5.findFocus()
            if (r6 != r5) goto L22
            r6 = 0
        L22:
            android.view.FocusFinder r0 = android.view.FocusFinder.getInstance()
            android.view.View r6 = r0.findNextFocus(r5, r6, r2)
            if (r6 == 0) goto L35
            if (r6 == r5) goto L35
            boolean r6 = r6.requestFocus(r2)
            if (r6 == 0) goto L35
            r1 = 1
        L35:
            return r1
        L36:
            int r0 = r6.getAction()
            if (r0 != 0) goto L7a
            int r0 = r6.getKeyCode()
            r3 = 19
            r4 = 33
            if (r0 == r3) goto L6b
            r3 = 20
            if (r0 == r3) goto L5b
            r3 = 62
            if (r0 == r3) goto L4f
            goto L7a
        L4f:
            boolean r6 = r6.isShiftPressed()
            if (r6 == 0) goto L57
            r2 = 33
        L57:
            r5.pageScroll(r2)
            goto L7a
        L5b:
            boolean r6 = r6.isAltPressed()
            if (r6 != 0) goto L66
            boolean r1 = r5.arrowScroll(r2)
            goto L7a
        L66:
            boolean r1 = r5.fullScroll(r2)
            goto L7a
        L6b:
            boolean r6 = r6.isAltPressed()
            if (r6 != 0) goto L76
            boolean r1 = r5.arrowScroll(r4)
            goto L7a
        L76:
            boolean r1 = r5.fullScroll(r4)
        L7a:
            return r1
    }

    public void fling(int r14) {
            r13 = this;
            int r0 = r13.getChildCount()
            if (r0 <= 0) goto L2c
            r0 = 2
            r1 = 1
            r13.startNestedScroll(r0, r1)
            android.widget.OverScroller r2 = r13.mScroller
            int r3 = r13.getScrollX()
            int r4 = r13.getScrollY()
            r5 = 0
            r7 = 0
            r8 = 0
            r9 = -2147483648(0xffffffff80000000, float:-0.0)
            r10 = 2147483647(0x7fffffff, float:NaN)
            r11 = 0
            r12 = 0
            r6 = r14
            r2.fling(r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            int r14 = r13.getScrollY()
            r13.mLastScrollerY = r14
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r13)
        L2c:
            return
    }

    public boolean fullScroll(int r6) {
            r5 = this;
            r0 = 1
            r1 = 0
            r2 = 130(0x82, float:1.82E-43)
            if (r6 != r2) goto L8
            r2 = 1
            goto L9
        L8:
            r2 = 0
        L9:
            int r3 = r5.getHeight()
            android.graphics.Rect r4 = r5.mTempRect
            r4.top = r1
            r4.bottom = r3
            if (r2 == 0) goto L3d
            int r1 = r5.getChildCount()
            if (r1 <= 0) goto L3d
            int r1 = r1 - r0
            android.view.View r0 = r5.getChildAt(r1)
            android.view.ViewGroup$LayoutParams r1 = r0.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r1 = (android.widget.FrameLayout.LayoutParams) r1
            android.graphics.Rect r2 = r5.mTempRect
            int r0 = r0.getBottom()
            int r1 = r1.bottomMargin
            int r0 = r0 + r1
            int r1 = r5.getPaddingBottom()
            int r0 = r0 + r1
            r2.bottom = r0
            android.graphics.Rect r0 = r5.mTempRect
            int r1 = r0.bottom
            int r1 = r1 - r3
            r0.top = r1
        L3d:
            android.graphics.Rect r0 = r5.mTempRect
            int r0 = r0.top
            android.graphics.Rect r1 = r5.mTempRect
            int r1 = r1.bottom
            boolean r6 = r5.scrollAndFocus(r6, r0, r1)
            return r6
    }

    @Override
    protected float getBottomFadingEdgeStrength() {
            r5 = this;
            int r0 = r5.getChildCount()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            r0 = 0
            android.view.View r0 = r5.getChildAt(r0)
            android.view.ViewGroup$LayoutParams r1 = r0.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r1 = (android.widget.FrameLayout.LayoutParams) r1
            int r2 = r5.getVerticalFadingEdgeLength()
            int r3 = r5.getHeight()
            int r4 = r5.getPaddingBottom()
            int r3 = r3 - r4
            int r0 = r0.getBottom()
            int r1 = r1.bottomMargin
            int r0 = r0 + r1
            int r1 = r5.getScrollY()
            int r0 = r0 - r1
            int r0 = r0 - r3
            if (r0 >= r2) goto L33
            float r0 = (float) r0
            float r1 = (float) r2
            float r0 = r0 / r1
            return r0
        L33:
            r0 = 1065353216(0x3f800000, float:1.0)
            return r0
    }

    public int getMaxScrollAmount() {
            r2 = this;
            int r0 = r2.getHeight()
            float r0 = (float) r0
            r1 = 1056964608(0x3f000000, float:0.5)
            float r0 = r0 * r1
            int r0 = (int) r0
            return r0
    }

    @Override
    public int getNestedScrollAxes() {
            r1 = this;
            android.support.v4.view.NestedScrollingParentHelper r0 = r1.mParentHelper
            int r0 = r0.getNestedScrollAxes()
            return r0
    }

    int getScrollRange() {
            r4 = this;
            int r0 = r4.getChildCount()
            r1 = 0
            if (r0 <= 0) goto L2e
            android.view.View r0 = r4.getChildAt(r1)
            android.view.ViewGroup$LayoutParams r2 = r0.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r2 = (android.widget.FrameLayout.LayoutParams) r2
            int r0 = r0.getHeight()
            int r3 = r2.topMargin
            int r0 = r0 + r3
            int r2 = r2.bottomMargin
            int r0 = r0 + r2
            int r2 = r4.getHeight()
            int r3 = r4.getPaddingTop()
            int r2 = r2 - r3
            int r3 = r4.getPaddingBottom()
            int r2 = r2 - r3
            int r0 = r0 - r2
            int r1 = java.lang.Math.max(r1, r0)
        L2e:
            return r1
    }

    @Override
    protected float getTopFadingEdgeStrength() {
            r2 = this;
            int r0 = r2.getChildCount()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            int r0 = r2.getVerticalFadingEdgeLength()
            int r1 = r2.getScrollY()
            if (r1 >= r0) goto L16
            float r1 = (float) r1
            float r0 = (float) r0
            float r1 = r1 / r0
            return r1
        L16:
            r0 = 1065353216(0x3f800000, float:1.0)
            return r0
    }

    @Override
    public boolean hasNestedScrollingParent() {
            r1 = this;
            r0 = 0
            boolean r0 = r1.hasNestedScrollingParent(r0)
            return r0
    }

    @Override
    public boolean hasNestedScrollingParent(int r2) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.mChildHelper
            boolean r2 = r0.hasNestedScrollingParent(r2)
            return r2
    }

    public boolean isFillViewport() {
            r1 = this;
            boolean r0 = r1.mFillViewport
            return r0
    }

    @Override
    public boolean isNestedScrollingEnabled() {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.mChildHelper
            boolean r0 = r0.isNestedScrollingEnabled()
            return r0
    }

    public boolean isSmoothScrollingEnabled() {
            r1 = this;
            boolean r0 = r1.mSmoothScrollingEnabled
            return r0
    }

    @Override
    protected void measureChild(android.view.View r3, int r4, int r5) {
            r2 = this;
            android.view.ViewGroup$LayoutParams r5 = r3.getLayoutParams()
            int r0 = r2.getPaddingLeft()
            int r1 = r2.getPaddingRight()
            int r0 = r0 + r1
            int r5 = r5.width
            int r4 = getChildMeasureSpec(r4, r0, r5)
            r5 = 0
            int r5 = android.view.View.MeasureSpec.makeMeasureSpec(r5, r5)
            r3.measure(r4, r5)
            return
    }

    @Override
    protected void measureChildWithMargins(android.view.View r2, int r3, int r4, int r5, int r6) {
            r1 = this;
            android.view.ViewGroup$LayoutParams r5 = r2.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r5 = (android.view.ViewGroup.MarginLayoutParams) r5
            int r6 = r1.getPaddingLeft()
            int r0 = r1.getPaddingRight()
            int r6 = r6 + r0
            int r0 = r5.leftMargin
            int r6 = r6 + r0
            int r0 = r5.rightMargin
            int r6 = r6 + r0
            int r6 = r6 + r4
            int r4 = r5.width
            int r3 = getChildMeasureSpec(r3, r6, r4)
            int r4 = r5.topMargin
            int r5 = r5.bottomMargin
            int r4 = r4 + r5
            r5 = 0
            int r4 = android.view.View.MeasureSpec.makeMeasureSpec(r4, r5)
            r2.measure(r3, r4)
            return
    }

    @Override
    public void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            r0 = 0
            r1.mIsLaidOut = r0
            return
    }

    @Override
    public boolean onGenericMotionEvent(android.view.MotionEvent r4) {
            r3 = this;
            int r0 = r4.getSource()
            r0 = r0 & 2
            r1 = 0
            if (r0 == 0) goto L44
            int r0 = r4.getAction()
            r2 = 8
            if (r0 == r2) goto L12
            goto L44
        L12:
            boolean r0 = r3.mIsBeingDragged
            if (r0 != 0) goto L44
            r0 = 9
            float r4 = r4.getAxisValue(r0)
            r0 = 0
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 == 0) goto L44
            float r0 = r3.getVerticalScrollFactorCompat()
            float r4 = r4 * r0
            int r4 = (int) r4
            int r0 = r3.getScrollRange()
            int r2 = r3.getScrollY()
            int r4 = r2 - r4
            if (r4 >= 0) goto L36
            r4 = 0
            goto L39
        L36:
            if (r4 <= r0) goto L39
            r4 = r0
        L39:
            if (r4 == r2) goto L44
            int r0 = r3.getScrollX()
            super.scrollTo(r0, r4)
            r4 = 1
            return r4
        L44:
            return r1
    }

    @Override
    public boolean onInterceptTouchEvent(android.view.MotionEvent r12) {
            r11 = this;
            int r0 = r12.getAction()
            r1 = 2
            r2 = 1
            if (r0 != r1) goto Ld
            boolean r3 = r11.mIsBeingDragged
            if (r3 == 0) goto Ld
            return r2
        Ld:
            r0 = r0 & 255(0xff, float:3.57E-43)
            r3 = 0
            if (r0 == 0) goto La2
            r4 = -1
            if (r0 == r2) goto L7d
            if (r0 == r1) goto L24
            r1 = 3
            if (r0 == r1) goto L7d
            r1 = 6
            if (r0 == r1) goto L1f
            goto Ld9
        L1f:
            r11.onSecondaryPointerUp(r12)
            goto Ld9
        L24:
            int r0 = r11.mActivePointerId
            if (r0 != r4) goto L2a
            goto Ld9
        L2a:
            int r5 = r12.findPointerIndex(r0)
            if (r5 != r4) goto L4d
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r1 = "Invalid pointerId="
            r12.append(r1)
            r12.append(r0)
            java.lang.String r0 = " in onInterceptTouchEvent"
            r12.append(r0)
            java.lang.String r12 = r12.toString()
            java.lang.String r0 = "NestedScrollView"
            android.util.Log.e(r0, r12)
            goto Ld9
        L4d:
            float r0 = r12.getY(r5)
            int r0 = (int) r0
            int r4 = r11.mLastMotionY
            int r4 = r0 - r4
            int r4 = java.lang.Math.abs(r4)
            int r5 = r11.mTouchSlop
            if (r4 <= r5) goto Ld9
            int r4 = r11.getNestedScrollAxes()
            r1 = r1 & r4
            if (r1 != 0) goto Ld9
            r11.mIsBeingDragged = r2
            r11.mLastMotionY = r0
            r11.initVelocityTrackerIfNotExists()
            android.view.VelocityTracker r0 = r11.mVelocityTracker
            r0.addMovement(r12)
            r11.mNestedYOffset = r3
            android.view.ViewParent r12 = r11.getParent()
            if (r12 == 0) goto Ld9
            r12.requestDisallowInterceptTouchEvent(r2)
            goto Ld9
        L7d:
            r11.mIsBeingDragged = r3
            r11.mActivePointerId = r4
            r11.recycleVelocityTracker()
            android.widget.OverScroller r4 = r11.mScroller
            int r5 = r11.getScrollX()
            int r6 = r11.getScrollY()
            r7 = 0
            r8 = 0
            r9 = 0
            int r10 = r11.getScrollRange()
            boolean r12 = r4.springBack(r5, r6, r7, r8, r9, r10)
            if (r12 == 0) goto L9e
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r11)
        L9e:
            r11.stopNestedScroll(r3)
            goto Ld9
        La2:
            float r0 = r12.getY()
            int r0 = (int) r0
            float r4 = r12.getX()
            int r4 = (int) r4
            boolean r4 = r11.inChild(r4, r0)
            if (r4 != 0) goto Lb8
            r11.mIsBeingDragged = r3
            r11.recycleVelocityTracker()
            goto Ld9
        Lb8:
            r11.mLastMotionY = r0
            int r0 = r12.getPointerId(r3)
            r11.mActivePointerId = r0
            r11.initOrResetVelocityTracker()
            android.view.VelocityTracker r0 = r11.mVelocityTracker
            r0.addMovement(r12)
            android.widget.OverScroller r12 = r11.mScroller
            r12.computeScrollOffset()
            android.widget.OverScroller r12 = r11.mScroller
            boolean r12 = r12.isFinished()
            r12 = r12 ^ r2
            r11.mIsBeingDragged = r12
            r11.startNestedScroll(r1, r3)
        Ld9:
            boolean r12 = r11.mIsBeingDragged
            return r12
    }

    @Override
    protected void onLayout(boolean r2, int r3, int r4, int r5, int r6) {
            r1 = this;
            super.onLayout(r2, r3, r4, r5, r6)
            r2 = 0
            r1.mIsLayoutDirty = r2
            android.view.View r3 = r1.mChildToScrollTo
            if (r3 == 0) goto L15
            boolean r3 = isViewDescendantOf(r3, r1)
            if (r3 == 0) goto L15
            android.view.View r3 = r1.mChildToScrollTo
            r1.scrollToChild(r3)
        L15:
            r3 = 0
            r1.mChildToScrollTo = r3
            boolean r5 = r1.mIsLaidOut
            if (r5 != 0) goto L63
            android.support.v4.widget.NestedScrollView$SavedState r5 = r1.mSavedState
            if (r5 == 0) goto L2d
            int r5 = r1.getScrollX()
            android.support.v4.widget.NestedScrollView$SavedState r0 = r1.mSavedState
            int r0 = r0.scrollPosition
            r1.scrollTo(r5, r0)
            r1.mSavedState = r3
        L2d:
            int r3 = r1.getChildCount()
            if (r3 <= 0) goto L47
            android.view.View r2 = r1.getChildAt(r2)
            android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r3 = (android.widget.FrameLayout.LayoutParams) r3
            int r2 = r2.getMeasuredHeight()
            int r5 = r3.topMargin
            int r2 = r2 + r5
            int r3 = r3.bottomMargin
            int r2 = r2 + r3
        L47:
            int r6 = r6 - r4
            int r3 = r1.getPaddingTop()
            int r6 = r6 - r3
            int r3 = r1.getPaddingBottom()
            int r6 = r6 - r3
            int r3 = r1.getScrollY()
            int r2 = clamp(r3, r6, r2)
            if (r2 == r3) goto L63
            int r3 = r1.getScrollX()
            r1.scrollTo(r3, r2)
        L63:
            int r2 = r1.getScrollX()
            int r3 = r1.getScrollY()
            r1.scrollTo(r2, r3)
            r2 = 1
            r1.mIsLaidOut = r2
            return
    }

    @Override
    protected void onMeasure(int r5, int r6) {
            r4 = this;
            super.onMeasure(r5, r6)
            boolean r0 = r4.mFillViewport
            if (r0 != 0) goto L8
            return
        L8:
            int r6 = android.view.View.MeasureSpec.getMode(r6)
            if (r6 != 0) goto Lf
            return
        Lf:
            int r6 = r4.getChildCount()
            if (r6 <= 0) goto L58
            r6 = 0
            android.view.View r6 = r4.getChildAt(r6)
            android.view.ViewGroup$LayoutParams r0 = r6.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0
            int r1 = r6.getMeasuredHeight()
            int r2 = r4.getMeasuredHeight()
            int r3 = r4.getPaddingTop()
            int r2 = r2 - r3
            int r3 = r4.getPaddingBottom()
            int r2 = r2 - r3
            int r3 = r0.topMargin
            int r2 = r2 - r3
            int r3 = r0.bottomMargin
            int r2 = r2 - r3
            if (r1 >= r2) goto L58
            int r1 = r4.getPaddingLeft()
            int r3 = r4.getPaddingRight()
            int r1 = r1 + r3
            int r3 = r0.leftMargin
            int r1 = r1 + r3
            int r3 = r0.rightMargin
            int r1 = r1 + r3
            int r0 = r0.width
            int r5 = getChildMeasureSpec(r5, r1, r0)
            r0 = 1073741824(0x40000000, float:2.0)
            int r0 = android.view.View.MeasureSpec.makeMeasureSpec(r2, r0)
            r6.measure(r5, r0)
        L58:
            return
    }

    @Override
    public boolean onNestedFling(android.view.View r1, float r2, float r3, boolean r4) {
            r0 = this;
            if (r4 != 0) goto L8
            int r1 = (int) r3
            r0.flingWithNestedDispatch(r1)
            r1 = 1
            return r1
        L8:
            r1 = 0
            return r1
    }

    @Override
    public boolean onNestedPreFling(android.view.View r1, float r2, float r3) {
            r0 = this;
            boolean r1 = r0.dispatchNestedPreFling(r2, r3)
            return r1
    }

    @Override
    public void onNestedPreScroll(android.view.View r7, int r8, int r9, int[] r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.onNestedPreScroll(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public void onNestedPreScroll(@android.support.annotation.NonNull android.view.View r7, int r8, int r9, @android.support.annotation.NonNull int[] r10, int r11) {
            r6 = this;
            r4 = 0
            r0 = r6
            r1 = r8
            r2 = r9
            r3 = r10
            r5 = r11
            r0.dispatchNestedPreScroll(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public void onNestedScroll(android.view.View r8, int r9, int r10, int r11, int r12) {
            r7 = this;
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.onNestedScroll(r1, r2, r3, r4, r5, r6)
            return
    }

    @Override
    public void onNestedScroll(android.view.View r8, int r9, int r10, int r11, int r12, int r13) {
            r7 = this;
            int r8 = r7.getScrollY()
            r9 = 0
            r7.scrollBy(r9, r12)
            int r9 = r7.getScrollY()
            int r2 = r9 - r8
            int r4 = r12 - r2
            r1 = 0
            r3 = 0
            r5 = 0
            r0 = r7
            r6 = r13
            r0.dispatchNestedScroll(r1, r2, r3, r4, r5, r6)
            return
    }

    @Override
    public void onNestedScrollAccepted(android.view.View r2, android.view.View r3, int r4) {
            r1 = this;
            r0 = 0
            r1.onNestedScrollAccepted(r2, r3, r4, r0)
            return
    }

    @Override
    public void onNestedScrollAccepted(@android.support.annotation.NonNull android.view.View r2, @android.support.annotation.NonNull android.view.View r3, int r4, int r5) {
            r1 = this;
            android.support.v4.view.NestedScrollingParentHelper r0 = r1.mParentHelper
            r0.onNestedScrollAccepted(r2, r3, r4, r5)
            r2 = 2
            r1.startNestedScroll(r2, r5)
            return
    }

    @Override
    protected void onOverScrolled(int r1, int r2, boolean r3, boolean r4) {
            r0 = this;
            super.scrollTo(r1, r2)
            return
    }

    @Override
    protected boolean onRequestFocusInDescendants(int r4, android.graphics.Rect r5) {
            r3 = this;
            r0 = 2
            if (r4 != r0) goto L6
            r4 = 130(0x82, float:1.82E-43)
            goto Lb
        L6:
            r0 = 1
            if (r4 != r0) goto Lb
            r4 = 33
        Lb:
            if (r5 != 0) goto L17
            android.view.FocusFinder r0 = android.view.FocusFinder.getInstance()
            r1 = 0
            android.view.View r0 = r0.findNextFocus(r3, r1, r4)
            goto L1f
        L17:
            android.view.FocusFinder r0 = android.view.FocusFinder.getInstance()
            android.view.View r0 = r0.findNextFocusFromRect(r3, r5, r4)
        L1f:
            r1 = 0
            if (r0 != 0) goto L23
            return r1
        L23:
            boolean r2 = r3.isOffScreen(r0)
            if (r2 == 0) goto L2a
            return r1
        L2a:
            boolean r4 = r0.requestFocus(r4, r5)
            return r4
    }

    @Override
    protected void onRestoreInstanceState(android.os.Parcelable r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.support.v4.widget.NestedScrollView.SavedState
            if (r0 != 0) goto L8
            super.onRestoreInstanceState(r2)
            return
        L8:
            android.support.v4.widget.NestedScrollView$SavedState r2 = (android.support.v4.widget.NestedScrollView.SavedState) r2
            android.os.Parcelable r0 = r2.getSuperState()
            super.onRestoreInstanceState(r0)
            r1.mSavedState = r2
            r1.requestLayout()
            return
    }

    @Override
    protected android.os.Parcelable onSaveInstanceState() {
            r2 = this;
            android.os.Parcelable r0 = super.onSaveInstanceState()
            android.support.v4.widget.NestedScrollView$SavedState r1 = new android.support.v4.widget.NestedScrollView$SavedState
            r1.<init>(r0)
            int r0 = r2.getScrollY()
            r1.scrollPosition = r0
            return r1
    }

    @Override
    protected void onScrollChanged(int r7, int r8, int r9, int r10) {
            r6 = this;
            super.onScrollChanged(r7, r8, r9, r10)
            android.support.v4.widget.NestedScrollView$OnScrollChangeListener r0 = r6.mOnScrollChangeListener
            if (r0 == 0) goto Lf
            r1 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r0.onScrollChange(r1, r2, r3, r4, r5)
        Lf:
            return
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onSizeChanged(r1, r2, r3, r4)
            android.view.View r1 = r0.findFocus()
            if (r1 == 0) goto L26
            if (r0 != r1) goto Lc
            goto L26
        Lc:
            r2 = 0
            boolean r2 = r0.isWithinDeltaOfScreen(r1, r2, r4)
            if (r2 == 0) goto L26
            android.graphics.Rect r2 = r0.mTempRect
            r1.getDrawingRect(r2)
            android.graphics.Rect r2 = r0.mTempRect
            r0.offsetDescendantRectToMyCoords(r1, r2)
            android.graphics.Rect r1 = r0.mTempRect
            int r1 = r0.computeScrollDeltaToGetChildRectOnScreen(r1)
            r0.doScrollY(r1)
        L26:
            return
    }

    @Override
    public boolean onStartNestedScroll(android.view.View r2, android.view.View r3, int r4) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.onStartNestedScroll(r2, r3, r4, r0)
            return r2
    }

    @Override
    public boolean onStartNestedScroll(@android.support.annotation.NonNull android.view.View r1, @android.support.annotation.NonNull android.view.View r2, int r3, int r4) {
            r0 = this;
            r1 = r3 & 2
            if (r1 == 0) goto L6
            r1 = 1
            goto L7
        L6:
            r1 = 0
        L7:
            return r1
    }

    @Override
    public void onStopNestedScroll(android.view.View r2) {
            r1 = this;
            r0 = 0
            r1.onStopNestedScroll(r2, r0)
            return
    }

    @Override
    public void onStopNestedScroll(@android.support.annotation.NonNull android.view.View r2, int r3) {
            r1 = this;
            android.support.v4.view.NestedScrollingParentHelper r0 = r1.mParentHelper
            r0.onStopNestedScroll(r2, r3)
            r1.stopNestedScroll(r3)
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r24) {
            r23 = this;
            r10 = r23
            r11 = r24
            r23.initVelocityTrackerIfNotExists()
            android.view.MotionEvent r12 = android.view.MotionEvent.obtain(r24)
            int r0 = r24.getActionMasked()
            r13 = 0
            if (r0 != 0) goto L14
            r10.mNestedYOffset = r13
        L14:
            int r1 = r10.mNestedYOffset
            float r1 = (float) r1
            r14 = 0
            r12.offsetLocation(r14, r1)
            r1 = 2
            r15 = 1
            if (r0 == 0) goto L225
            r2 = -1
            if (r0 == r15) goto L1e7
            if (r0 == r1) goto L7f
            r1 = 3
            if (r0 == r1) goto L54
            r1 = 5
            if (r0 == r1) goto L41
            r1 = 6
            if (r0 == r1) goto L2f
            goto L25d
        L2f:
            r23.onSecondaryPointerUp(r24)
            int r0 = r10.mActivePointerId
            int r0 = r11.findPointerIndex(r0)
            float r0 = r11.getY(r0)
            int r0 = (int) r0
            r10.mLastMotionY = r0
            goto L25d
        L41:
            int r0 = r24.getActionIndex()
            float r1 = r11.getY(r0)
            int r1 = (int) r1
            r10.mLastMotionY = r1
            int r0 = r11.getPointerId(r0)
            r10.mActivePointerId = r0
            goto L25d
        L54:
            boolean r0 = r10.mIsBeingDragged
            if (r0 == 0) goto L78
            int r0 = r23.getChildCount()
            if (r0 <= 0) goto L78
            android.widget.OverScroller r3 = r10.mScroller
            int r4 = r23.getScrollX()
            int r5 = r23.getScrollY()
            r6 = 0
            r7 = 0
            r8 = 0
            int r9 = r23.getScrollRange()
            boolean r0 = r3.springBack(r4, r5, r6, r7, r8, r9)
            if (r0 == 0) goto L78
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r23)
        L78:
            r10.mActivePointerId = r2
            r23.endDrag()
            goto L25d
        L7f:
            int r0 = r10.mActivePointerId
            int r9 = r11.findPointerIndex(r0)
            if (r9 != r2) goto La6
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid pointerId="
            r0.append(r1)
            int r1 = r10.mActivePointerId
            r0.append(r1)
            java.lang.String r1 = " in onTouchEvent"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "NestedScrollView"
            android.util.Log.e(r1, r0)
            goto L25d
        La6:
            float r0 = r11.getY(r9)
            int r6 = (int) r0
            int r0 = r10.mLastMotionY
            int r7 = r0 - r6
            r1 = 0
            int[] r3 = r10.mScrollConsumed
            int[] r4 = r10.mScrollOffset
            r5 = 0
            r0 = r23
            r2 = r7
            boolean r0 = r0.dispatchNestedPreScroll(r1, r2, r3, r4, r5)
            if (r0 == 0) goto Ld4
            int[] r0 = r10.mScrollConsumed
            r0 = r0[r15]
            int r7 = r7 - r0
            int[] r0 = r10.mScrollOffset
            r0 = r0[r15]
            float r0 = (float) r0
            r12.offsetLocation(r14, r0)
            int r0 = r10.mNestedYOffset
            int[] r1 = r10.mScrollOffset
            r1 = r1[r15]
            int r0 = r0 + r1
            r10.mNestedYOffset = r0
        Ld4:
            boolean r0 = r10.mIsBeingDragged
            if (r0 != 0) goto Lf4
            int r0 = java.lang.Math.abs(r7)
            int r1 = r10.mTouchSlop
            if (r0 <= r1) goto Lf4
            android.view.ViewParent r0 = r23.getParent()
            if (r0 == 0) goto Le9
            r0.requestDisallowInterceptTouchEvent(r15)
        Le9:
            r10.mIsBeingDragged = r15
            if (r7 <= 0) goto Lf1
            int r0 = r10.mTouchSlop
            int r7 = r7 - r0
            goto Lf4
        Lf1:
            int r0 = r10.mTouchSlop
            int r7 = r7 + r0
        Lf4:
            r8 = r7
            boolean r0 = r10.mIsBeingDragged
            if (r0 == 0) goto L25d
            int[] r0 = r10.mScrollOffset
            r0 = r0[r15]
            int r6 = r6 - r0
            r10.mLastMotionY = r6
            int r16 = r23.getScrollY()
            int r7 = r23.getScrollRange()
            int r0 = r23.getOverScrollMode()
            if (r0 == 0) goto L116
            if (r0 != r15) goto L113
            if (r7 <= 0) goto L113
            goto L116
        L113:
            r17 = 0
            goto L118
        L116:
            r17 = 1
        L118:
            r1 = 0
            r3 = 0
            int r4 = r23.getScrollY()
            r5 = 0
            r18 = 0
            r19 = 0
            r20 = 1
            r0 = r23
            r2 = r8
            r6 = r7
            r21 = r7
            r7 = r18
            r14 = r8
            r8 = r19
            r22 = r9
            r9 = r20
            boolean r0 = r0.overScrollByCompat(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            if (r0 == 0) goto L145
            boolean r0 = r10.hasNestedScrollingParent(r13)
            if (r0 != 0) goto L145
            android.view.VelocityTracker r0 = r10.mVelocityTracker
            r0.clear()
        L145:
            int r0 = r23.getScrollY()
            int r2 = r0 - r16
            int r4 = r14 - r2
            r1 = 0
            r3 = 0
            int[] r5 = r10.mScrollOffset
            r6 = 0
            r0 = r23
            boolean r0 = r0.dispatchNestedScroll(r1, r2, r3, r4, r5, r6)
            if (r0 == 0) goto L175
            int r0 = r10.mLastMotionY
            int[] r1 = r10.mScrollOffset
            r2 = r1[r15]
            int r0 = r0 - r2
            r10.mLastMotionY = r0
            r0 = r1[r15]
            float r0 = (float) r0
            r1 = 0
            r12.offsetLocation(r1, r0)
            int r0 = r10.mNestedYOffset
            int[] r1 = r10.mScrollOffset
            r1 = r1[r15]
            int r0 = r0 + r1
            r10.mNestedYOffset = r0
            goto L25d
        L175:
            if (r17 == 0) goto L25d
            r23.ensureGlows()
            int r0 = r16 + r14
            if (r0 >= 0) goto L1a4
            android.widget.EdgeEffect r0 = r10.mEdgeGlowTop
            float r1 = (float) r14
            int r2 = r23.getHeight()
            float r2 = (float) r2
            float r1 = r1 / r2
            r2 = r22
            float r2 = r11.getX(r2)
            int r3 = r23.getWidth()
            float r3 = (float) r3
            float r2 = r2 / r3
            android.support.v4.widget.EdgeEffectCompat.onPull(r0, r1, r2)
            android.widget.EdgeEffect r0 = r10.mEdgeGlowBottom
            boolean r0 = r0.isFinished()
            if (r0 != 0) goto L1d0
            android.widget.EdgeEffect r0 = r10.mEdgeGlowBottom
            r0.onRelease()
            goto L1d0
        L1a4:
            r1 = r21
            r2 = r22
            if (r0 <= r1) goto L1d0
            android.widget.EdgeEffect r0 = r10.mEdgeGlowBottom
            float r1 = (float) r14
            int r3 = r23.getHeight()
            float r3 = (float) r3
            float r1 = r1 / r3
            r3 = 1065353216(0x3f800000, float:1.0)
            float r2 = r11.getX(r2)
            int r4 = r23.getWidth()
            float r4 = (float) r4
            float r2 = r2 / r4
            float r3 = r3 - r2
            android.support.v4.widget.EdgeEffectCompat.onPull(r0, r1, r3)
            android.widget.EdgeEffect r0 = r10.mEdgeGlowTop
            boolean r0 = r0.isFinished()
            if (r0 != 0) goto L1d0
            android.widget.EdgeEffect r0 = r10.mEdgeGlowTop
            r0.onRelease()
        L1d0:
            android.widget.EdgeEffect r0 = r10.mEdgeGlowTop
            if (r0 == 0) goto L25d
            boolean r0 = r0.isFinished()
            if (r0 == 0) goto L1e2
            android.widget.EdgeEffect r0 = r10.mEdgeGlowBottom
            boolean r0 = r0.isFinished()
            if (r0 != 0) goto L25d
        L1e2:
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r23)
            goto L25d
        L1e7:
            android.view.VelocityTracker r0 = r10.mVelocityTracker
            r1 = 1000(0x3e8, float:1.401E-42)
            int r3 = r10.mMaximumVelocity
            float r3 = (float) r3
            r0.computeCurrentVelocity(r1, r3)
            int r1 = r10.mActivePointerId
            float r0 = r0.getYVelocity(r1)
            int r0 = (int) r0
            int r1 = java.lang.Math.abs(r0)
            int r3 = r10.mMinimumVelocity
            if (r1 <= r3) goto L205
            int r0 = -r0
            r10.flingWithNestedDispatch(r0)
            goto L21f
        L205:
            android.widget.OverScroller r3 = r10.mScroller
            int r4 = r23.getScrollX()
            int r5 = r23.getScrollY()
            r6 = 0
            r7 = 0
            r8 = 0
            int r9 = r23.getScrollRange()
            boolean r0 = r3.springBack(r4, r5, r6, r7, r8, r9)
            if (r0 == 0) goto L21f
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r23)
        L21f:
            r10.mActivePointerId = r2
            r23.endDrag()
            goto L25d
        L225:
            int r0 = r23.getChildCount()
            if (r0 != 0) goto L22c
            return r13
        L22c:
            android.widget.OverScroller r0 = r10.mScroller
            boolean r0 = r0.isFinished()
            r0 = r0 ^ r15
            r10.mIsBeingDragged = r0
            if (r0 == 0) goto L240
            android.view.ViewParent r0 = r23.getParent()
            if (r0 == 0) goto L240
            r0.requestDisallowInterceptTouchEvent(r15)
        L240:
            android.widget.OverScroller r0 = r10.mScroller
            boolean r0 = r0.isFinished()
            if (r0 != 0) goto L24d
            android.widget.OverScroller r0 = r10.mScroller
            r0.abortAnimation()
        L24d:
            float r0 = r24.getY()
            int r0 = (int) r0
            r10.mLastMotionY = r0
            int r0 = r11.getPointerId(r13)
            r10.mActivePointerId = r0
            r10.startNestedScroll(r1, r13)
        L25d:
            android.view.VelocityTracker r0 = r10.mVelocityTracker
            if (r0 == 0) goto L264
            r0.addMovement(r12)
        L264:
            r12.recycle()
            return r15
    }

    boolean overScrollByCompat(int r13, int r14, int r15, int r16, int r17, int r18, int r19, int r20, boolean r21) {
            r12 = this;
            r0 = r12
            int r1 = r12.getOverScrollMode()
            int r2 = r12.computeHorizontalScrollRange()
            int r3 = r12.computeHorizontalScrollExtent()
            r4 = 0
            r5 = 1
            if (r2 <= r3) goto L13
            r2 = 1
            goto L14
        L13:
            r2 = 0
        L14:
            int r3 = r12.computeVerticalScrollRange()
            int r6 = r12.computeVerticalScrollExtent()
            if (r3 <= r6) goto L20
            r3 = 1
            goto L21
        L20:
            r3 = 0
        L21:
            if (r1 == 0) goto L2a
            if (r1 != r5) goto L28
            if (r2 == 0) goto L28
            goto L2a
        L28:
            r2 = 0
            goto L2b
        L2a:
            r2 = 1
        L2b:
            if (r1 == 0) goto L34
            if (r1 != r5) goto L32
            if (r3 == 0) goto L32
            goto L34
        L32:
            r1 = 0
            goto L35
        L34:
            r1 = 1
        L35:
            int r3 = r15 + r13
            if (r2 != 0) goto L3b
            r2 = 0
            goto L3d
        L3b:
            r2 = r19
        L3d:
            int r6 = r16 + r14
            if (r1 != 0) goto L43
            r1 = 0
            goto L45
        L43:
            r1 = r20
        L45:
            int r7 = -r2
            int r2 = r2 + r17
            int r8 = -r1
            int r1 = r1 + r18
            if (r3 <= r2) goto L50
            r7 = r2
        L4e:
            r2 = 1
            goto L55
        L50:
            if (r3 >= r7) goto L53
            goto L4e
        L53:
            r7 = r3
            r2 = 0
        L55:
            if (r6 <= r1) goto L5a
            r6 = r1
        L58:
            r1 = 1
            goto L5f
        L5a:
            if (r6 >= r8) goto L5e
            r6 = r8
            goto L58
        L5e:
            r1 = 0
        L5f:
            if (r1 == 0) goto L7e
            boolean r3 = r12.hasNestedScrollingParent(r5)
            if (r3 != 0) goto L7e
            android.widget.OverScroller r3 = r0.mScroller
            r8 = 0
            r9 = 0
            r10 = 0
            int r11 = r12.getScrollRange()
            r13 = r3
            r14 = r7
            r15 = r6
            r16 = r8
            r17 = r9
            r18 = r10
            r19 = r11
            r13.springBack(r14, r15, r16, r17, r18, r19)
        L7e:
            r12.onOverScrolled(r7, r6, r2, r1)
            if (r2 != 0) goto L85
            if (r1 == 0) goto L86
        L85:
            r4 = 1
        L86:
            return r4
    }

    public boolean pageScroll(int r5) {
            r4 = this;
            r0 = 1
            r1 = 0
            r2 = 130(0x82, float:1.82E-43)
            if (r5 != r2) goto L8
            r2 = 1
            goto L9
        L8:
            r2 = 0
        L9:
            int r3 = r4.getHeight()
            if (r2 == 0) goto L42
            android.graphics.Rect r1 = r4.mTempRect
            int r2 = r4.getScrollY()
            int r2 = r2 + r3
            r1.top = r2
            int r1 = r4.getChildCount()
            if (r1 <= 0) goto L55
            int r1 = r1 - r0
            android.view.View r0 = r4.getChildAt(r1)
            android.view.ViewGroup$LayoutParams r1 = r0.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r1 = (android.widget.FrameLayout.LayoutParams) r1
            int r0 = r0.getBottom()
            int r1 = r1.bottomMargin
            int r0 = r0 + r1
            int r1 = r4.getPaddingBottom()
            int r0 = r0 + r1
            android.graphics.Rect r1 = r4.mTempRect
            int r1 = r1.top
            int r1 = r1 + r3
            if (r1 <= r0) goto L55
            android.graphics.Rect r1 = r4.mTempRect
            int r0 = r0 - r3
            r1.top = r0
            goto L55
        L42:
            android.graphics.Rect r0 = r4.mTempRect
            int r2 = r4.getScrollY()
            int r2 = r2 - r3
            r0.top = r2
            android.graphics.Rect r0 = r4.mTempRect
            int r0 = r0.top
            if (r0 >= 0) goto L55
            android.graphics.Rect r0 = r4.mTempRect
            r0.top = r1
        L55:
            android.graphics.Rect r0 = r4.mTempRect
            int r1 = r0.top
            int r1 = r1 + r3
            r0.bottom = r1
            android.graphics.Rect r0 = r4.mTempRect
            int r0 = r0.top
            android.graphics.Rect r1 = r4.mTempRect
            int r1 = r1.bottom
            boolean r5 = r4.scrollAndFocus(r5, r0, r1)
            return r5
    }

    @Override
    public void requestChildFocus(android.view.View r2, android.view.View r3) {
            r1 = this;
            boolean r0 = r1.mIsLayoutDirty
            if (r0 != 0) goto L8
            r1.scrollToChild(r3)
            goto La
        L8:
            r1.mChildToScrollTo = r3
        La:
            super.requestChildFocus(r2, r3)
            return
    }

    @Override
    public boolean requestChildRectangleOnScreen(android.view.View r3, android.graphics.Rect r4, boolean r5) {
            r2 = this;
            int r0 = r3.getLeft()
            int r1 = r3.getScrollX()
            int r0 = r0 - r1
            int r1 = r3.getTop()
            int r3 = r3.getScrollY()
            int r1 = r1 - r3
            r4.offset(r0, r1)
            boolean r3 = r2.scrollToChildRect(r4, r5)
            return r3
    }

    @Override
    public void requestDisallowInterceptTouchEvent(boolean r1) {
            r0 = this;
            if (r1 == 0) goto L5
            r0.recycleVelocityTracker()
        L5:
            super.requestDisallowInterceptTouchEvent(r1)
            return
    }

    @Override
    public void requestLayout() {
            r1 = this;
            r0 = 1
            r1.mIsLayoutDirty = r0
            super.requestLayout()
            return
    }

    @Override
    public void scrollTo(int r7, int r8) {
            r6 = this;
            int r0 = r6.getChildCount()
            if (r0 <= 0) goto L58
            r0 = 0
            android.view.View r0 = r6.getChildAt(r0)
            android.view.ViewGroup$LayoutParams r1 = r0.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r1 = (android.widget.FrameLayout.LayoutParams) r1
            int r2 = r6.getWidth()
            int r3 = r6.getPaddingLeft()
            int r2 = r2 - r3
            int r3 = r6.getPaddingRight()
            int r2 = r2 - r3
            int r3 = r0.getWidth()
            int r4 = r1.leftMargin
            int r3 = r3 + r4
            int r4 = r1.rightMargin
            int r3 = r3 + r4
            int r4 = r6.getHeight()
            int r5 = r6.getPaddingTop()
            int r4 = r4 - r5
            int r5 = r6.getPaddingBottom()
            int r4 = r4 - r5
            int r0 = r0.getHeight()
            int r5 = r1.topMargin
            int r0 = r0 + r5
            int r1 = r1.bottomMargin
            int r0 = r0 + r1
            int r7 = clamp(r7, r2, r3)
            int r8 = clamp(r8, r4, r0)
            int r0 = r6.getScrollX()
            if (r7 != r0) goto L55
            int r0 = r6.getScrollY()
            if (r8 == r0) goto L58
        L55:
            super.scrollTo(r7, r8)
        L58:
            return
    }

    public void setFillViewport(boolean r2) {
            r1 = this;
            boolean r0 = r1.mFillViewport
            if (r2 == r0) goto L9
            r1.mFillViewport = r2
            r1.requestLayout()
        L9:
            return
    }

    @Override
    public void setNestedScrollingEnabled(boolean r2) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.mChildHelper
            r0.setNestedScrollingEnabled(r2)
            return
    }

    public void setOnScrollChangeListener(@android.support.annotation.Nullable android.support.v4.widget.NestedScrollView.OnScrollChangeListener r1) {
            r0 = this;
            r0.mOnScrollChangeListener = r1
            return
    }

    public void setSmoothScrollingEnabled(boolean r1) {
            r0 = this;
            r0.mSmoothScrollingEnabled = r1
            return
    }

    @Override
    public boolean shouldDelayChildPressedState() {
            r1 = this;
            r0 = 1
            return r0
    }

    public final void smoothScrollBy(int r6, int r7) {
            r5 = this;
            int r0 = r5.getChildCount()
            if (r0 != 0) goto L7
            return
        L7:
            long r0 = android.view.animation.AnimationUtils.currentAnimationTimeMillis()
            long r2 = r5.mLastScroll
            long r0 = r0 - r2
            r2 = 250(0xfa, double:1.235E-321)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L5d
            r6 = 0
            android.view.View r0 = r5.getChildAt(r6)
            android.view.ViewGroup$LayoutParams r1 = r0.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r1 = (android.widget.FrameLayout.LayoutParams) r1
            int r0 = r0.getHeight()
            int r2 = r1.topMargin
            int r0 = r0 + r2
            int r1 = r1.bottomMargin
            int r0 = r0 + r1
            int r1 = r5.getHeight()
            int r2 = r5.getPaddingTop()
            int r1 = r1 - r2
            int r2 = r5.getPaddingBottom()
            int r1 = r1 - r2
            int r2 = r5.getScrollY()
            int r0 = r0 - r1
            int r0 = java.lang.Math.max(r6, r0)
            int r7 = r7 + r2
            int r7 = java.lang.Math.min(r7, r0)
            int r7 = java.lang.Math.max(r6, r7)
            int r7 = r7 - r2
            int r0 = r5.getScrollY()
            r5.mLastScrollerY = r0
            android.widget.OverScroller r0 = r5.mScroller
            int r1 = r5.getScrollX()
            r0.startScroll(r1, r2, r6, r7)
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r5)
            goto L6d
        L5d:
            android.widget.OverScroller r0 = r5.mScroller
            boolean r0 = r0.isFinished()
            if (r0 != 0) goto L6a
            android.widget.OverScroller r0 = r5.mScroller
            r0.abortAnimation()
        L6a:
            r5.scrollBy(r6, r7)
        L6d:
            long r6 = android.view.animation.AnimationUtils.currentAnimationTimeMillis()
            r5.mLastScroll = r6
            return
    }

    public final void smoothScrollTo(int r2, int r3) {
            r1 = this;
            int r0 = r1.getScrollX()
            int r2 = r2 - r0
            int r0 = r1.getScrollY()
            int r3 = r3 - r0
            r1.smoothScrollBy(r2, r3)
            return
    }

    @Override
    public boolean startNestedScroll(int r2) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.startNestedScroll(r2, r0)
            return r2
    }

    @Override
    public boolean startNestedScroll(int r2, int r3) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.mChildHelper
            boolean r2 = r0.startNestedScroll(r2, r3)
            return r2
    }

    @Override
    public void stopNestedScroll() {
            r1 = this;
            r0 = 0
            r1.stopNestedScroll(r0)
            return
    }

    @Override
    public void stopNestedScroll(int r2) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.mChildHelper
            r0.stopNestedScroll(r2)
            return
    }
}
