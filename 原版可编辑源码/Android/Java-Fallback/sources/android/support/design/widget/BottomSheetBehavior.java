package android.support.design.widget;

import android.view.View;

public class BottomSheetBehavior<V extends android.view.View> extends android.support.design.widget.CoordinatorLayout.Behavior<V> {
    private static final float HIDE_FRICTION = 0.1f;
    private static final float HIDE_THRESHOLD = 0.5f;
    public static final int PEEK_HEIGHT_AUTO = -1;
    public static final int STATE_COLLAPSED = 4;
    public static final int STATE_DRAGGING = 1;
    public static final int STATE_EXPANDED = 3;
    public static final int STATE_HALF_EXPANDED = 6;
    public static final int STATE_HIDDEN = 5;
    public static final int STATE_SETTLING = 2;
    int activePointerId;
    private android.support.design.widget.BottomSheetBehavior.BottomSheetCallback callback;
    int collapsedOffset;
    private final android.support.v4.widget.ViewDragHelper.Callback dragCallback;
    private boolean fitToContents;
    int fitToContentsOffset;
    int halfExpandedOffset;
    boolean hideable;
    private boolean ignoreEvents;
    private java.util.Map<android.view.View, java.lang.Integer> importantForAccessibilityMap;
    private int initialY;
    private int lastNestedScrollDy;
    private int lastPeekHeight;
    private float maximumVelocity;
    private boolean nestedScrolled;
    java.lang.ref.WeakReference<android.view.View> nestedScrollingChildRef;
    int parentHeight;
    private int peekHeight;
    private boolean peekHeightAuto;
    private int peekHeightMin;
    private boolean skipCollapsed;
    int state;
    boolean touchingScrollingChild;
    private android.view.VelocityTracker velocityTracker;
    android.support.v4.widget.ViewDragHelper viewDragHelper;
    java.lang.ref.WeakReference<V> viewRef;



    public static abstract class BottomSheetCallback {
        public BottomSheetCallback() {
                r0 = this;
                r0.<init>()
                return
        }

        public abstract void onSlide(android.view.View r1, float r2);

        public abstract void onStateChanged(android.view.View r1, int r2);
    }

    protected static class SavedState extends android.support.v4.view.AbsSavedState {
        public static final android.os.Parcelable.Creator<android.support.design.widget.BottomSheetBehavior.SavedState> CREATOR = null;
        final int state;


        static {
                android.support.design.widget.BottomSheetBehavior$SavedState$1 r0 = new android.support.design.widget.BottomSheetBehavior$SavedState$1
                r0.<init>()
                android.support.design.widget.BottomSheetBehavior.SavedState.CREATOR = r0
                return
        }

        public SavedState(android.os.Parcel r2) {
                r1 = this;
                r0 = 0
                r1.<init>(r2, r0)
                return
        }

        public SavedState(android.os.Parcel r1, java.lang.ClassLoader r2) {
                r0 = this;
                r0.<init>(r1, r2)
                int r1 = r1.readInt()
                r0.state = r1
                return
        }

        public SavedState(android.os.Parcelable r1, int r2) {
                r0 = this;
                r0.<init>(r1)
                r0.state = r2
                return
        }

        @Override
        public void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                super.writeToParcel(r1, r2)
                int r2 = r0.state
                r1.writeInt(r2)
                return
        }
    }

    private class SettleRunnable implements java.lang.Runnable {
        private final int targetState;
        final android.support.design.widget.BottomSheetBehavior this$0;
        private final android.view.View view;

        SettleRunnable(android.support.design.widget.BottomSheetBehavior r1, android.view.View r2, int r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.view = r2
                r0.targetState = r3
                return
        }

        @Override
        public void run() {
                r2 = this;
                android.support.design.widget.BottomSheetBehavior r0 = r2.this$0
                android.support.v4.widget.ViewDragHelper r0 = r0.viewDragHelper
                if (r0 == 0) goto L17
                android.support.design.widget.BottomSheetBehavior r0 = r2.this$0
                android.support.v4.widget.ViewDragHelper r0 = r0.viewDragHelper
                r1 = 1
                boolean r0 = r0.continueSettling(r1)
                if (r0 == 0) goto L17
                android.view.View r0 = r2.view
                android.support.v4.view.ViewCompat.postOnAnimation(r0, r2)
                goto L1e
            L17:
                android.support.design.widget.BottomSheetBehavior r0 = r2.this$0
                int r1 = r2.targetState
                r0.setStateInternal(r1)
            L1e:
                return
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface State {
    }

    public BottomSheetBehavior() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.fitToContents = r0
            r0 = 4
            r1.state = r0
            android.support.design.widget.BottomSheetBehavior$2 r0 = new android.support.design.widget.BottomSheetBehavior$2
            r0.<init>(r1)
            r1.dragCallback = r0
            return
    }

    public BottomSheetBehavior(android.content.Context r5, android.util.AttributeSet r6) {
            r4 = this;
            r4.<init>(r5, r6)
            r0 = 1
            r4.fitToContents = r0
            r1 = 4
            r4.state = r1
            android.support.design.widget.BottomSheetBehavior$2 r1 = new android.support.design.widget.BottomSheetBehavior$2
            r1.<init>(r4)
            r4.dragCallback = r1
            int[] r1 = android.support.design.R.styleable.BottomSheetBehavior_Layout
            android.content.res.TypedArray r6 = r5.obtainStyledAttributes(r6, r1)
            int r1 = android.support.design.R.styleable.BottomSheetBehavior_Layout_behavior_peekHeight
            android.util.TypedValue r1 = r6.peekValue(r1)
            r2 = -1
            if (r1 == 0) goto L29
            int r3 = r1.data
            if (r3 != r2) goto L29
            int r1 = r1.data
            r4.setPeekHeight(r1)
            goto L32
        L29:
            int r1 = android.support.design.R.styleable.BottomSheetBehavior_Layout_behavior_peekHeight
            int r1 = r6.getDimensionPixelSize(r1, r2)
            r4.setPeekHeight(r1)
        L32:
            int r1 = android.support.design.R.styleable.BottomSheetBehavior_Layout_behavior_hideable
            r2 = 0
            boolean r1 = r6.getBoolean(r1, r2)
            r4.setHideable(r1)
            int r1 = android.support.design.R.styleable.BottomSheetBehavior_Layout_behavior_fitToContents
            boolean r0 = r6.getBoolean(r1, r0)
            r4.setFitToContents(r0)
            int r0 = android.support.design.R.styleable.BottomSheetBehavior_Layout_behavior_skipCollapsed
            boolean r0 = r6.getBoolean(r0, r2)
            r4.setSkipCollapsed(r0)
            r6.recycle()
            android.view.ViewConfiguration r5 = android.view.ViewConfiguration.get(r5)
            int r5 = r5.getScaledMaximumFlingVelocity()
            float r5 = (float) r5
            r4.maximumVelocity = r5
            return
    }

    static boolean access$000(android.support.design.widget.BottomSheetBehavior r0) {
            boolean r0 = r0.fitToContents
            return r0
    }

    static int access$100(android.support.design.widget.BottomSheetBehavior r0) {
            int r0 = r0.getExpandedOffset()
            return r0
    }

    private void calculateCollapsedOffset() {
            r2 = this;
            boolean r0 = r2.fitToContents
            if (r0 == 0) goto L12
            int r0 = r2.parentHeight
            int r1 = r2.lastPeekHeight
            int r0 = r0 - r1
            int r1 = r2.fitToContentsOffset
            int r0 = java.lang.Math.max(r0, r1)
            r2.collapsedOffset = r0
            goto L19
        L12:
            int r0 = r2.parentHeight
            int r1 = r2.lastPeekHeight
            int r0 = r0 - r1
            r2.collapsedOffset = r0
        L19:
            return
    }

    public static <V extends android.view.View> android.support.design.widget.BottomSheetBehavior<V> from(V r1) {
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            boolean r0 = r1 instanceof android.support.design.widget.CoordinatorLayout.LayoutParams
            if (r0 == 0) goto L1d
            android.support.design.widget.CoordinatorLayout$LayoutParams r1 = (android.support.design.widget.CoordinatorLayout.LayoutParams) r1
            android.support.design.widget.CoordinatorLayout$Behavior r1 = r1.getBehavior()
            boolean r0 = r1 instanceof android.support.design.widget.BottomSheetBehavior
            if (r0 == 0) goto L15
            android.support.design.widget.BottomSheetBehavior r1 = (android.support.design.widget.BottomSheetBehavior) r1
            return r1
        L15:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "The view is not associated with BottomSheetBehavior"
            r1.<init>(r0)
            throw r1
        L1d:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "The view is not a child of CoordinatorLayout"
            r1.<init>(r0)
            throw r1
    }

    private int getExpandedOffset() {
            r1 = this;
            boolean r0 = r1.fitToContents
            if (r0 == 0) goto L7
            int r0 = r1.fitToContentsOffset
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    private float getYVelocity() {
            r3 = this;
            android.view.VelocityTracker r0 = r3.velocityTracker
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            r1 = 1000(0x3e8, float:1.401E-42)
            float r2 = r3.maximumVelocity
            r0.computeCurrentVelocity(r1, r2)
            android.view.VelocityTracker r0 = r3.velocityTracker
            int r1 = r3.activePointerId
            float r0 = r0.getYVelocity(r1)
            return r0
    }

    private void reset() {
            r1 = this;
            r0 = -1
            r1.activePointerId = r0
            android.view.VelocityTracker r0 = r1.velocityTracker
            if (r0 == 0) goto Ld
            r0.recycle()
            r0 = 0
            r1.velocityTracker = r0
        Ld:
            return
    }

    private void updateImportantForAccessibility(boolean r8) {
            r7 = this;
            java.lang.ref.WeakReference<V extends android.view.View> r0 = r7.viewRef
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            android.view.ViewParent r0 = r0.getParent()
            boolean r1 = r0 instanceof android.support.design.widget.CoordinatorLayout
            if (r1 != 0) goto L14
            return
        L14:
            android.support.design.widget.CoordinatorLayout r0 = (android.support.design.widget.CoordinatorLayout) r0
            int r1 = r0.getChildCount()
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 16
            if (r2 < r3) goto L2f
            if (r8 == 0) goto L2f
            java.util.Map<android.view.View, java.lang.Integer> r2 = r7.importantForAccessibilityMap
            if (r2 != 0) goto L2e
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>(r1)
            r7.importantForAccessibilityMap = r2
            goto L2f
        L2e:
            return
        L2f:
            r2 = 0
        L30:
            if (r2 >= r1) goto L73
            android.view.View r4 = r0.getChildAt(r2)
            java.lang.ref.WeakReference<V extends android.view.View> r5 = r7.viewRef
            java.lang.Object r5 = r5.get()
            if (r4 != r5) goto L3f
            goto L70
        L3f:
            if (r8 != 0) goto L5b
            java.util.Map<android.view.View, java.lang.Integer> r5 = r7.importantForAccessibilityMap
            if (r5 == 0) goto L70
            boolean r5 = r5.containsKey(r4)
            if (r5 == 0) goto L70
            java.util.Map<android.view.View, java.lang.Integer> r5 = r7.importantForAccessibilityMap
            java.lang.Object r5 = r5.get(r4)
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            android.support.v4.view.ViewCompat.setImportantForAccessibility(r4, r5)
            goto L70
        L5b:
            int r5 = android.os.Build.VERSION.SDK_INT
            if (r5 < r3) goto L6c
            java.util.Map<android.view.View, java.lang.Integer> r5 = r7.importantForAccessibilityMap
            int r6 = r4.getImportantForAccessibility()
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r5.put(r4, r6)
        L6c:
            r5 = 4
            android.support.v4.view.ViewCompat.setImportantForAccessibility(r4, r5)
        L70:
            int r2 = r2 + 1
            goto L30
        L73:
            if (r8 != 0) goto L78
            r8 = 0
            r7.importantForAccessibilityMap = r8
        L78:
            return
    }

    void dispatchOnSlide(int r5) {
            r4 = this;
            java.lang.ref.WeakReference<V extends android.view.View> r0 = r4.viewRef
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L2b
            android.support.design.widget.BottomSheetBehavior$BottomSheetCallback r1 = r4.callback
            if (r1 == 0) goto L2b
            int r2 = r4.collapsedOffset
            if (r5 <= r2) goto L1e
            int r5 = r2 - r5
            float r5 = (float) r5
            int r3 = r4.parentHeight
            int r3 = r3 - r2
            float r2 = (float) r3
            float r5 = r5 / r2
            r1.onSlide(r0, r5)
            goto L2b
        L1e:
            int r5 = r2 - r5
            float r5 = (float) r5
            int r3 = r4.getExpandedOffset()
            int r2 = r2 - r3
            float r2 = (float) r2
            float r5 = r5 / r2
            r1.onSlide(r0, r5)
        L2b:
            return
    }

    android.view.View findScrollingChild(android.view.View r4) {
            r3 = this;
            boolean r0 = android.support.v4.view.ViewCompat.isNestedScrollingEnabled(r4)
            if (r0 == 0) goto L7
            return r4
        L7:
            boolean r0 = r4 instanceof android.view.ViewGroup
            if (r0 == 0) goto L22
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4
            r0 = 0
            int r1 = r4.getChildCount()
        L12:
            if (r0 >= r1) goto L22
            android.view.View r2 = r4.getChildAt(r0)
            android.view.View r2 = r3.findScrollingChild(r2)
            if (r2 == 0) goto L1f
            return r2
        L1f:
            int r0 = r0 + 1
            goto L12
        L22:
            r4 = 0
            return r4
    }

    public final int getPeekHeight() {
            r1 = this;
            boolean r0 = r1.peekHeightAuto
            if (r0 == 0) goto L6
            r0 = -1
            goto L8
        L6:
            int r0 = r1.peekHeight
        L8:
            return r0
    }

    int getPeekHeightMin() {
            r1 = this;
            int r0 = r1.peekHeightMin
            return r0
    }

    public boolean getSkipCollapsed() {
            r1 = this;
            boolean r0 = r1.skipCollapsed
            return r0
    }

    public final int getState() {
            r1 = this;
            int r0 = r1.state
            return r0
    }

    public boolean isFitToContents() {
            r1 = this;
            boolean r0 = r1.fitToContents
            return r0
    }

    public boolean isHideable() {
            r1 = this;
            boolean r0 = r1.hideable
            return r0
    }

    @Override
    public boolean onInterceptTouchEvent(android.support.design.widget.CoordinatorLayout r9, V r10, android.view.MotionEvent r11) {
            r8 = this;
            boolean r0 = r10.isShown()
            r1 = 0
            r2 = 1
            if (r0 != 0) goto Lb
            r8.ignoreEvents = r2
            return r1
        Lb:
            int r0 = r11.getActionMasked()
            if (r0 != 0) goto L14
            r8.reset()
        L14:
            android.view.VelocityTracker r3 = r8.velocityTracker
            if (r3 != 0) goto L1e
            android.view.VelocityTracker r3 = android.view.VelocityTracker.obtain()
            r8.velocityTracker = r3
        L1e:
            android.view.VelocityTracker r3 = r8.velocityTracker
            r3.addMovement(r11)
            r3 = 0
            r4 = -1
            if (r0 == 0) goto L38
            if (r0 == r2) goto L2d
            r10 = 3
            if (r0 == r10) goto L2d
            goto L77
        L2d:
            r8.touchingScrollingChild = r1
            r8.activePointerId = r4
            boolean r10 = r8.ignoreEvents
            if (r10 == 0) goto L77
            r8.ignoreEvents = r1
            return r1
        L38:
            float r5 = r11.getX()
            int r5 = (int) r5
            float r6 = r11.getY()
            int r6 = (int) r6
            r8.initialY = r6
            java.lang.ref.WeakReference<android.view.View> r6 = r8.nestedScrollingChildRef
            if (r6 == 0) goto L4f
            java.lang.Object r6 = r6.get()
            android.view.View r6 = (android.view.View) r6
            goto L50
        L4f:
            r6 = r3
        L50:
            if (r6 == 0) goto L66
            int r7 = r8.initialY
            boolean r6 = r9.isPointInChildBounds(r6, r5, r7)
            if (r6 == 0) goto L66
            int r6 = r11.getActionIndex()
            int r6 = r11.getPointerId(r6)
            r8.activePointerId = r6
            r8.touchingScrollingChild = r2
        L66:
            int r6 = r8.activePointerId
            if (r6 != r4) goto L74
            int r4 = r8.initialY
            boolean r10 = r9.isPointInChildBounds(r10, r5, r4)
            if (r10 != 0) goto L74
            r10 = r2
            goto L75
        L74:
            r10 = r1
        L75:
            r8.ignoreEvents = r10
        L77:
            boolean r10 = r8.ignoreEvents
            if (r10 != 0) goto L86
            android.support.v4.widget.ViewDragHelper r10 = r8.viewDragHelper
            if (r10 == 0) goto L86
            boolean r10 = r10.shouldInterceptTouchEvent(r11)
            if (r10 == 0) goto L86
            return r2
        L86:
            java.lang.ref.WeakReference<android.view.View> r10 = r8.nestedScrollingChildRef
            if (r10 == 0) goto L91
            java.lang.Object r10 = r10.get()
            r3 = r10
            android.view.View r3 = (android.view.View) r3
        L91:
            r10 = 2
            if (r0 != r10) goto Lca
            if (r3 == 0) goto Lca
            boolean r10 = r8.ignoreEvents
            if (r10 != 0) goto Lca
            int r10 = r8.state
            if (r10 == r2) goto Lca
            float r10 = r11.getX()
            int r10 = (int) r10
            float r0 = r11.getY()
            int r0 = (int) r0
            boolean r9 = r9.isPointInChildBounds(r3, r10, r0)
            if (r9 != 0) goto Lca
            android.support.v4.widget.ViewDragHelper r9 = r8.viewDragHelper
            if (r9 == 0) goto Lca
            int r9 = r8.initialY
            float r9 = (float) r9
            float r10 = r11.getY()
            float r9 = r9 - r10
            float r9 = java.lang.Math.abs(r9)
            android.support.v4.widget.ViewDragHelper r10 = r8.viewDragHelper
            int r10 = r10.getTouchSlop()
            float r10 = (float) r10
            int r9 = (r9 > r10 ? 1 : (r9 == r10 ? 0 : -1))
            if (r9 <= 0) goto Lca
            r1 = r2
        Lca:
            return r1
    }

    @Override
    public boolean onLayoutChild(android.support.design.widget.CoordinatorLayout r5, V r6, int r7) {
            r4 = this;
            boolean r0 = android.support.v4.view.ViewCompat.getFitsSystemWindows(r5)
            r1 = 1
            if (r0 == 0) goto L10
            boolean r0 = android.support.v4.view.ViewCompat.getFitsSystemWindows(r6)
            if (r0 != 0) goto L10
            r6.setFitsSystemWindows(r1)
        L10:
            int r0 = r6.getTop()
            r5.onLayoutChild(r6, r7)
            int r7 = r5.getHeight()
            r4.parentHeight = r7
            boolean r7 = r4.peekHeightAuto
            if (r7 == 0) goto L45
            int r7 = r4.peekHeightMin
            if (r7 != 0) goto L31
            android.content.res.Resources r7 = r5.getResources()
            int r2 = android.support.design.R.dimen.design_bottom_sheet_peek_height_min
            int r7 = r7.getDimensionPixelSize(r2)
            r4.peekHeightMin = r7
        L31:
            int r7 = r4.peekHeightMin
            int r2 = r4.parentHeight
            int r3 = r5.getWidth()
            int r3 = r3 * 9
            int r3 = r3 / 16
            int r2 = r2 - r3
            int r7 = java.lang.Math.max(r7, r2)
            r4.lastPeekHeight = r7
            goto L49
        L45:
            int r7 = r4.peekHeight
            r4.lastPeekHeight = r7
        L49:
            r7 = 0
            int r2 = r4.parentHeight
            int r3 = r6.getHeight()
            int r2 = r2 - r3
            int r7 = java.lang.Math.max(r7, r2)
            r4.fitToContentsOffset = r7
            int r7 = r4.parentHeight
            r2 = 2
            int r7 = r7 / r2
            r4.halfExpandedOffset = r7
            r4.calculateCollapsedOffset()
            int r7 = r4.state
            r3 = 3
            if (r7 != r3) goto L6d
            int r7 = r4.getExpandedOffset()
            android.support.v4.view.ViewCompat.offsetTopAndBottom(r6, r7)
            goto L9a
        L6d:
            r3 = 6
            if (r7 != r3) goto L76
            int r7 = r4.halfExpandedOffset
            android.support.v4.view.ViewCompat.offsetTopAndBottom(r6, r7)
            goto L9a
        L76:
            boolean r3 = r4.hideable
            if (r3 == 0) goto L83
            r3 = 5
            if (r7 != r3) goto L83
            int r7 = r4.parentHeight
            android.support.v4.view.ViewCompat.offsetTopAndBottom(r6, r7)
            goto L9a
        L83:
            int r7 = r4.state
            r3 = 4
            if (r7 != r3) goto L8e
            int r7 = r4.collapsedOffset
            android.support.v4.view.ViewCompat.offsetTopAndBottom(r6, r7)
            goto L9a
        L8e:
            if (r7 == r1) goto L92
            if (r7 != r2) goto L9a
        L92:
            int r7 = r6.getTop()
            int r0 = r0 - r7
            android.support.v4.view.ViewCompat.offsetTopAndBottom(r6, r0)
        L9a:
            android.support.v4.widget.ViewDragHelper r7 = r4.viewDragHelper
            if (r7 != 0) goto La6
            android.support.v4.widget.ViewDragHelper$Callback r7 = r4.dragCallback
            android.support.v4.widget.ViewDragHelper r5 = android.support.v4.widget.ViewDragHelper.create(r5, r7)
            r4.viewDragHelper = r5
        La6:
            java.lang.ref.WeakReference r5 = new java.lang.ref.WeakReference
            r5.<init>(r6)
            r4.viewRef = r5
            java.lang.ref.WeakReference r5 = new java.lang.ref.WeakReference
            android.view.View r6 = r4.findScrollingChild(r6)
            r5.<init>(r6)
            r4.nestedScrollingChildRef = r5
            return r1
    }

    @Override
    public boolean onNestedPreFling(android.support.design.widget.CoordinatorLayout r3, V r4, android.view.View r5, float r6, float r7) {
            r2 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r2.nestedScrollingChildRef
            java.lang.Object r0 = r0.get()
            if (r5 != r0) goto L15
            int r0 = r2.state
            r1 = 3
            if (r0 != r1) goto L13
            boolean r3 = super.onNestedPreFling(r3, r4, r5, r6, r7)
            if (r3 == 0) goto L15
        L13:
            r3 = 1
            goto L16
        L15:
            r3 = 0
        L16:
            return r3
    }

    @Override
    public void onNestedPreScroll(android.support.design.widget.CoordinatorLayout r2, V r3, android.view.View r4, int r5, int r6, int[] r7, int r8) {
            r1 = this;
            r2 = 1
            if (r8 != r2) goto L4
            return
        L4:
            java.lang.ref.WeakReference<android.view.View> r5 = r1.nestedScrollingChildRef
            java.lang.Object r5 = r5.get()
            android.view.View r5 = (android.view.View) r5
            if (r4 == r5) goto Lf
            return
        Lf:
            int r5 = r3.getTop()
            int r8 = r5 - r6
            if (r6 <= 0) goto L39
            int r4 = r1.getExpandedOffset()
            if (r8 >= r4) goto L2f
            int r4 = r1.getExpandedOffset()
            int r5 = r5 - r4
            r7[r2] = r5
            r4 = r7[r2]
            int r4 = -r4
            android.support.v4.view.ViewCompat.offsetTopAndBottom(r3, r4)
            r4 = 3
            r1.setStateInternal(r4)
            goto L62
        L2f:
            r7[r2] = r6
            int r4 = -r6
            android.support.v4.view.ViewCompat.offsetTopAndBottom(r3, r4)
            r1.setStateInternal(r2)
            goto L62
        L39:
            if (r6 >= 0) goto L62
            r0 = -1
            boolean r4 = r4.canScrollVertically(r0)
            if (r4 != 0) goto L62
            int r4 = r1.collapsedOffset
            if (r8 <= r4) goto L59
            boolean r8 = r1.hideable
            if (r8 == 0) goto L4b
            goto L59
        L4b:
            int r5 = r5 - r4
            r7[r2] = r5
            r4 = r7[r2]
            int r4 = -r4
            android.support.v4.view.ViewCompat.offsetTopAndBottom(r3, r4)
            r4 = 4
            r1.setStateInternal(r4)
            goto L62
        L59:
            r7[r2] = r6
            int r4 = -r6
            android.support.v4.view.ViewCompat.offsetTopAndBottom(r3, r4)
            r1.setStateInternal(r2)
        L62:
            int r3 = r3.getTop()
            r1.dispatchOnSlide(r3)
            r1.lastNestedScrollDy = r6
            r1.nestedScrolled = r2
            return
    }

    @Override
    public void onRestoreInstanceState(android.support.design.widget.CoordinatorLayout r2, V r3, android.os.Parcelable r4) {
            r1 = this;
            android.support.design.widget.BottomSheetBehavior$SavedState r4 = (android.support.design.widget.BottomSheetBehavior.SavedState) r4
            android.os.Parcelable r0 = r4.getSuperState()
            super.onRestoreInstanceState(r2, r3, r0)
            int r2 = r4.state
            r3 = 1
            if (r2 == r3) goto L19
            int r2 = r4.state
            r3 = 2
            if (r2 != r3) goto L14
            goto L19
        L14:
            int r2 = r4.state
            r1.state = r2
            goto L1c
        L19:
            r2 = 4
            r1.state = r2
        L1c:
            return
    }

    @Override
    public android.os.Parcelable onSaveInstanceState(android.support.design.widget.CoordinatorLayout r2, V r3) {
            r1 = this;
            android.support.design.widget.BottomSheetBehavior$SavedState r0 = new android.support.design.widget.BottomSheetBehavior$SavedState
            android.os.Parcelable r2 = super.onSaveInstanceState(r2, r3)
            int r3 = r1.state
            r0.<init>(r2, r3)
            return r0
    }

    @Override
    public boolean onStartNestedScroll(android.support.design.widget.CoordinatorLayout r1, V r2, android.view.View r3, android.view.View r4, int r5, int r6) {
            r0 = this;
            r1 = 0
            r0.lastNestedScrollDy = r1
            r0.nestedScrolled = r1
            r2 = r5 & 2
            if (r2 == 0) goto La
            r1 = 1
        La:
            return r1
    }

    @Override
    public void onStopNestedScroll(android.support.design.widget.CoordinatorLayout r4, V r5, android.view.View r6, int r7) {
            r3 = this;
            int r4 = r5.getTop()
            int r7 = r3.getExpandedOffset()
            r0 = 3
            if (r4 != r7) goto Lf
            r3.setStateInternal(r0)
            return
        Lf:
            java.lang.ref.WeakReference<android.view.View> r4 = r3.nestedScrollingChildRef
            java.lang.Object r4 = r4.get()
            if (r6 != r4) goto La9
            boolean r4 = r3.nestedScrolled
            if (r4 != 0) goto L1d
            goto La9
        L1d:
            int r4 = r3.lastNestedScrollDy
            r6 = 0
            r7 = 4
            if (r4 <= 0) goto L29
            int r4 = r3.getExpandedOffset()
            goto L8b
        L29:
            boolean r4 = r3.hideable
            if (r4 == 0) goto L3b
            float r4 = r3.getYVelocity()
            boolean r4 = r3.shouldHide(r5, r4)
            if (r4 == 0) goto L3b
            int r4 = r3.parentHeight
            r0 = 5
            goto L8b
        L3b:
            int r4 = r3.lastNestedScrollDy
            if (r4 != 0) goto L88
            int r4 = r5.getTop()
            boolean r1 = r3.fitToContents
            r2 = 6
            if (r1 == 0) goto L5f
            int r1 = r3.fitToContentsOffset
            int r1 = r4 - r1
            int r1 = java.lang.Math.abs(r1)
            int r2 = r3.collapsedOffset
            int r4 = r4 - r2
            int r4 = java.lang.Math.abs(r4)
            if (r1 >= r4) goto L5c
            int r4 = r3.fitToContentsOffset
            goto L8b
        L5c:
            int r4 = r3.collapsedOffset
            goto L8a
        L5f:
            int r1 = r3.halfExpandedOffset
            if (r4 >= r1) goto L72
            int r7 = r3.collapsedOffset
            int r7 = r4 - r7
            int r7 = java.lang.Math.abs(r7)
            if (r4 >= r7) goto L6f
            r4 = r6
            goto L8b
        L6f:
            int r4 = r3.halfExpandedOffset
            goto L83
        L72:
            int r0 = r4 - r1
            int r0 = java.lang.Math.abs(r0)
            int r1 = r3.collapsedOffset
            int r4 = r4 - r1
            int r4 = java.lang.Math.abs(r4)
            if (r0 >= r4) goto L85
            int r4 = r3.halfExpandedOffset
        L83:
            r0 = r2
            goto L8b
        L85:
            int r4 = r3.collapsedOffset
            goto L8a
        L88:
            int r4 = r3.collapsedOffset
        L8a:
            r0 = r7
        L8b:
            android.support.v4.widget.ViewDragHelper r7 = r3.viewDragHelper
            int r1 = r5.getLeft()
            boolean r4 = r7.smoothSlideViewTo(r5, r1, r4)
            if (r4 == 0) goto La4
            r4 = 2
            r3.setStateInternal(r4)
            android.support.design.widget.BottomSheetBehavior$SettleRunnable r4 = new android.support.design.widget.BottomSheetBehavior$SettleRunnable
            r4.<init>(r3, r5, r0)
            android.support.v4.view.ViewCompat.postOnAnimation(r5, r4)
            goto La7
        La4:
            r3.setStateInternal(r0)
        La7:
            r3.nestedScrolled = r6
        La9:
            return
    }

    @Override
    public boolean onTouchEvent(android.support.design.widget.CoordinatorLayout r3, V r4, android.view.MotionEvent r5) {
            r2 = this;
            boolean r3 = r4.isShown()
            if (r3 != 0) goto L8
            r3 = 0
            return r3
        L8:
            int r3 = r5.getActionMasked()
            int r0 = r2.state
            r1 = 1
            if (r0 != r1) goto L14
            if (r3 != 0) goto L14
            return r1
        L14:
            android.support.v4.widget.ViewDragHelper r0 = r2.viewDragHelper
            if (r0 == 0) goto L1b
            r0.processTouchEvent(r5)
        L1b:
            if (r3 != 0) goto L20
            r2.reset()
        L20:
            android.view.VelocityTracker r0 = r2.velocityTracker
            if (r0 != 0) goto L2a
            android.view.VelocityTracker r0 = android.view.VelocityTracker.obtain()
            r2.velocityTracker = r0
        L2a:
            android.view.VelocityTracker r0 = r2.velocityTracker
            r0.addMovement(r5)
            r0 = 2
            if (r3 != r0) goto L5a
            boolean r3 = r2.ignoreEvents
            if (r3 != 0) goto L5a
            int r3 = r2.initialY
            float r3 = (float) r3
            float r0 = r5.getY()
            float r3 = r3 - r0
            float r3 = java.lang.Math.abs(r3)
            android.support.v4.widget.ViewDragHelper r0 = r2.viewDragHelper
            int r0 = r0.getTouchSlop()
            float r0 = (float) r0
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 <= 0) goto L5a
            android.support.v4.widget.ViewDragHelper r3 = r2.viewDragHelper
            int r0 = r5.getActionIndex()
            int r5 = r5.getPointerId(r0)
            r3.captureChildView(r4, r5)
        L5a:
            boolean r3 = r2.ignoreEvents
            r3 = r3 ^ r1
            return r3
    }

    public void setBottomSheetCallback(android.support.design.widget.BottomSheetBehavior.BottomSheetCallback r1) {
            r0 = this;
            r0.callback = r1
            return
    }

    public void setFitToContents(boolean r2) {
            r1 = this;
            boolean r0 = r1.fitToContents
            if (r0 != r2) goto L5
            return
        L5:
            r1.fitToContents = r2
            java.lang.ref.WeakReference<V extends android.view.View> r2 = r1.viewRef
            if (r2 == 0) goto Le
            r1.calculateCollapsedOffset()
        Le:
            boolean r2 = r1.fitToContents
            if (r2 == 0) goto L19
            int r2 = r1.state
            r0 = 6
            if (r2 != r0) goto L19
            r2 = 3
            goto L1b
        L19:
            int r2 = r1.state
        L1b:
            r1.setStateInternal(r2)
            return
    }

    public void setHideable(boolean r1) {
            r0 = this;
            r0.hideable = r1
            return
    }

    public final void setPeekHeight(int r4) {
            r3 = this;
            r0 = 1
            r1 = 0
            r2 = -1
            if (r4 != r2) goto Lc
            boolean r4 = r3.peekHeightAuto
            if (r4 != 0) goto L15
            r3.peekHeightAuto = r0
            goto L24
        Lc:
            boolean r2 = r3.peekHeightAuto
            if (r2 != 0) goto L17
            int r2 = r3.peekHeight
            if (r2 == r4) goto L15
            goto L17
        L15:
            r0 = r1
            goto L24
        L17:
            r3.peekHeightAuto = r1
            int r1 = java.lang.Math.max(r1, r4)
            r3.peekHeight = r1
            int r1 = r3.parentHeight
            int r1 = r1 - r4
            r3.collapsedOffset = r1
        L24:
            if (r0 == 0) goto L3a
            int r4 = r3.state
            r0 = 4
            if (r4 != r0) goto L3a
            java.lang.ref.WeakReference<V extends android.view.View> r4 = r3.viewRef
            if (r4 == 0) goto L3a
            java.lang.Object r4 = r4.get()
            android.view.View r4 = (android.view.View) r4
            if (r4 == 0) goto L3a
            r4.requestLayout()
        L3a:
            return
    }

    public void setSkipCollapsed(boolean r1) {
            r0 = this;
            r0.skipCollapsed = r1
            return
    }

    public final void setState(int r3) {
            r2 = this;
            int r0 = r2.state
            if (r3 != r0) goto L5
            return
        L5:
            java.lang.ref.WeakReference<V extends android.view.View> r0 = r2.viewRef
            if (r0 != 0) goto L1c
            r0 = 4
            if (r3 == r0) goto L19
            r0 = 3
            if (r3 == r0) goto L19
            r0 = 6
            if (r3 == r0) goto L19
            boolean r0 = r2.hideable
            if (r0 == 0) goto L1b
            r0 = 5
            if (r3 != r0) goto L1b
        L19:
            r2.state = r3
        L1b:
            return
        L1c:
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 != 0) goto L25
            return
        L25:
            android.view.ViewParent r1 = r0.getParent()
            if (r1 == 0) goto L40
            boolean r1 = r1.isLayoutRequested()
            if (r1 == 0) goto L40
            boolean r1 = android.support.v4.view.ViewCompat.isAttachedToWindow(r0)
            if (r1 == 0) goto L40
            android.support.design.widget.BottomSheetBehavior$1 r1 = new android.support.design.widget.BottomSheetBehavior$1
            r1.<init>(r2, r0, r3)
            r0.post(r1)
            goto L43
        L40:
            r2.startSettlingAnimation(r0, r3)
        L43:
            return
    }

    void setStateInternal(int r3) {
            r2 = this;
            int r0 = r2.state
            if (r0 != r3) goto L5
            return
        L5:
            r2.state = r3
            r0 = 6
            if (r3 == r0) goto L19
            r0 = 3
            if (r3 != r0) goto Le
            goto L19
        Le:
            r0 = 5
            if (r3 == r0) goto L14
            r0 = 4
            if (r3 != r0) goto L1d
        L14:
            r0 = 0
            r2.updateImportantForAccessibility(r0)
            goto L1d
        L19:
            r0 = 1
            r2.updateImportantForAccessibility(r0)
        L1d:
            java.lang.ref.WeakReference<V extends android.view.View> r0 = r2.viewRef
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L2e
            android.support.design.widget.BottomSheetBehavior$BottomSheetCallback r1 = r2.callback
            if (r1 == 0) goto L2e
            r1.onStateChanged(r0, r3)
        L2e:
            return
    }

    boolean shouldHide(android.view.View r5, float r6) {
            r4 = this;
            boolean r0 = r4.skipCollapsed
            r1 = 1
            if (r0 == 0) goto L6
            return r1
        L6:
            int r0 = r5.getTop()
            int r2 = r4.collapsedOffset
            r3 = 0
            if (r0 >= r2) goto L10
            return r3
        L10:
            int r5 = r5.getTop()
            float r5 = (float) r5
            r0 = 1036831949(0x3dcccccd, float:0.1)
            float r6 = r6 * r0
            float r5 = r5 + r6
            int r6 = r4.collapsedOffset
            float r6 = (float) r6
            float r5 = r5 - r6
            float r5 = java.lang.Math.abs(r5)
            int r6 = r4.peekHeight
            float r6 = (float) r6
            float r5 = r5 / r6
            r6 = 1056964608(0x3f000000, float:0.5)
            int r5 = (r5 > r6 ? 1 : (r5 == r6 ? 0 : -1))
            if (r5 <= 0) goto L2d
            goto L2e
        L2d:
            r1 = r3
        L2e:
            return r1
    }

    void startSettlingAnimation(android.view.View r4, int r5) {
            r3 = this;
            r0 = 3
            r1 = 4
            if (r5 != r1) goto L7
            int r0 = r3.collapsedOffset
            goto L29
        L7:
            r1 = 6
            if (r5 != r1) goto L19
            int r1 = r3.halfExpandedOffset
            boolean r2 = r3.fitToContents
            if (r2 == 0) goto L17
            int r2 = r3.fitToContentsOffset
            if (r1 > r2) goto L17
            r5 = r0
            r0 = r2
            goto L29
        L17:
            r0 = r1
            goto L29
        L19:
            if (r5 != r0) goto L20
            int r0 = r3.getExpandedOffset()
            goto L29
        L20:
            boolean r0 = r3.hideable
            if (r0 == 0) goto L46
            r0 = 5
            if (r5 != r0) goto L46
            int r0 = r3.parentHeight
        L29:
            android.support.v4.widget.ViewDragHelper r1 = r3.viewDragHelper
            int r2 = r4.getLeft()
            boolean r0 = r1.smoothSlideViewTo(r4, r2, r0)
            if (r0 == 0) goto L42
            r0 = 2
            r3.setStateInternal(r0)
            android.support.design.widget.BottomSheetBehavior$SettleRunnable r0 = new android.support.design.widget.BottomSheetBehavior$SettleRunnable
            r0.<init>(r3, r4, r5)
            android.support.v4.view.ViewCompat.postOnAnimation(r4, r0)
            goto L45
        L42:
            r3.setStateInternal(r5)
        L45:
            return
        L46:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Illegal state argument: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r4.<init>(r5)
            throw r4
    }
}
