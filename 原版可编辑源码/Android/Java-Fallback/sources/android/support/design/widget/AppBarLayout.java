package android.support.design.widget;

@android.support.design.widget.CoordinatorLayout.DefaultBehavior(android.support.design.widget.AppBarLayout.Behavior.class)
public class AppBarLayout extends android.widget.LinearLayout {
    private static final int INVALID_SCROLL_RANGE = -1;
    static final int PENDING_ACTION_ANIMATE_ENABLED = 4;
    static final int PENDING_ACTION_COLLAPSED = 2;
    static final int PENDING_ACTION_EXPANDED = 1;
    static final int PENDING_ACTION_FORCE = 8;
    static final int PENDING_ACTION_NONE = 0;
    private int downPreScrollRange;
    private int downScrollRange;
    private boolean haveChildWithInterpolator;
    private android.support.v4.view.WindowInsetsCompat lastInsets;
    private boolean liftOnScroll;
    private boolean liftable;
    private boolean liftableOverride;
    private boolean lifted;
    private java.util.List<android.support.design.widget.AppBarLayout.BaseOnOffsetChangedListener> listeners;
    private int pendingAction;
    private int[] tmpStatesArray;
    private int totalScrollRange;


    protected static class BaseBehavior<T extends android.support.design.widget.AppBarLayout> extends android.support.design.widget.HeaderBehavior<T> {
        private static final int INVALID_POSITION = -1;
        private static final int MAX_OFFSET_ANIMATION_DURATION = 600;
        private java.lang.ref.WeakReference<android.view.View> lastNestedScrollingChildRef;
        private int lastStartedType;
        private android.animation.ValueAnimator offsetAnimator;
        private int offsetDelta;
        private int offsetToChildIndexOnLayout;
        private boolean offsetToChildIndexOnLayoutIsMinHeight;
        private float offsetToChildIndexOnLayoutPerc;
        private android.support.design.widget.AppBarLayout.BaseBehavior.BaseDragCallback onDragCallback;


        public static abstract class BaseDragCallback<T extends android.support.design.widget.AppBarLayout> {
            public BaseDragCallback() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            public abstract boolean canDrag(T r1);
        }

        protected static class SavedState extends android.support.v4.view.AbsSavedState {
            public static final android.os.Parcelable.Creator<android.support.design.widget.AppBarLayout.BaseBehavior.SavedState> CREATOR = null;
            boolean firstVisibleChildAtMinimumHeight;
            int firstVisibleChildIndex;
            float firstVisibleChildPercentageShown;


            static {
                    android.support.design.widget.AppBarLayout$BaseBehavior$SavedState$1 r0 = new android.support.design.widget.AppBarLayout$BaseBehavior$SavedState$1
                    r0.<init>()
                    android.support.design.widget.AppBarLayout.BaseBehavior.SavedState.CREATOR = r0
                    return
            }

            public SavedState(android.os.Parcel r1, java.lang.ClassLoader r2) {
                    r0 = this;
                    r0.<init>(r1, r2)
                    int r2 = r1.readInt()
                    r0.firstVisibleChildIndex = r2
                    float r2 = r1.readFloat()
                    r0.firstVisibleChildPercentageShown = r2
                    byte r1 = r1.readByte()
                    if (r1 == 0) goto L17
                    r1 = 1
                    goto L18
                L17:
                    r1 = 0
                L18:
                    r0.firstVisibleChildAtMinimumHeight = r1
                    return
            }

            public SavedState(android.os.Parcelable r1) {
                    r0 = this;
                    r0.<init>(r1)
                    return
            }

            @Override
            public void writeToParcel(android.os.Parcel r1, int r2) {
                    r0 = this;
                    super.writeToParcel(r1, r2)
                    int r2 = r0.firstVisibleChildIndex
                    r1.writeInt(r2)
                    float r2 = r0.firstVisibleChildPercentageShown
                    r1.writeFloat(r2)
                    boolean r2 = r0.firstVisibleChildAtMinimumHeight
                    byte r2 = (byte) r2
                    r1.writeByte(r2)
                    return
            }
        }

        public BaseBehavior() {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.offsetToChildIndexOnLayout = r0
                return
        }

        public BaseBehavior(android.content.Context r1, android.util.AttributeSet r2) {
                r0 = this;
                r0.<init>(r1, r2)
                r1 = -1
                r0.offsetToChildIndexOnLayout = r1
                return
        }

        static int access$000(android.support.design.widget.AppBarLayout.BaseBehavior r0) {
                int r0 = r0.offsetDelta
                return r0
        }

        private void animateOffsetTo(android.support.design.widget.CoordinatorLayout r3, T r4, int r5, float r6) {
                r2 = this;
                int r0 = r2.getTopBottomOffsetForScrollingSibling()
                int r0 = r0 - r5
                int r0 = java.lang.Math.abs(r0)
                float r6 = java.lang.Math.abs(r6)
                r1 = 0
                int r1 = (r6 > r1 ? 1 : (r6 == r1 ? 0 : -1))
                if (r1 <= 0) goto L1e
                r1 = 1148846080(0x447a0000, float:1000.0)
                float r0 = (float) r0
                float r0 = r0 / r6
                float r0 = r0 * r1
                int r6 = java.lang.Math.round(r0)
                int r6 = r6 * 3
                goto L2c
            L1e:
                float r6 = (float) r0
                int r0 = r4.getHeight()
                float r0 = (float) r0
                float r6 = r6 / r0
                r0 = 1065353216(0x3f800000, float:1.0)
                float r6 = r6 + r0
                r0 = 1125515264(0x43160000, float:150.0)
                float r6 = r6 * r0
                int r6 = (int) r6
            L2c:
                r2.animateOffsetWithDuration(r3, r4, r5, r6)
                return
        }

        private void animateOffsetWithDuration(android.support.design.widget.CoordinatorLayout r4, T r5, int r6, int r7) {
                r3 = this;
                int r0 = r3.getTopBottomOffsetForScrollingSibling()
                if (r0 != r6) goto L16
                android.animation.ValueAnimator r4 = r3.offsetAnimator
                if (r4 == 0) goto L15
                boolean r4 = r4.isRunning()
                if (r4 == 0) goto L15
                android.animation.ValueAnimator r4 = r3.offsetAnimator
                r4.cancel()
            L15:
                return
            L16:
                android.animation.ValueAnimator r1 = r3.offsetAnimator
                if (r1 != 0) goto L31
                android.animation.ValueAnimator r1 = new android.animation.ValueAnimator
                r1.<init>()
                r3.offsetAnimator = r1
                android.animation.TimeInterpolator r2 = android.support.design.animation.AnimationUtils.DECELERATE_INTERPOLATOR
                r1.setInterpolator(r2)
                android.animation.ValueAnimator r1 = r3.offsetAnimator
                android.support.design.widget.AppBarLayout$BaseBehavior$1 r2 = new android.support.design.widget.AppBarLayout$BaseBehavior$1
                r2.<init>(r3, r4, r5)
                r1.addUpdateListener(r2)
                goto L34
            L31:
                r1.cancel()
            L34:
                android.animation.ValueAnimator r4 = r3.offsetAnimator
                r5 = 600(0x258, float:8.41E-43)
                int r5 = java.lang.Math.min(r7, r5)
                long r1 = (long) r5
                r4.setDuration(r1)
                android.animation.ValueAnimator r4 = r3.offsetAnimator
                r5 = 2
                int[] r5 = new int[r5]
                r7 = 0
                r5[r7] = r0
                r7 = 1
                r5[r7] = r6
                r4.setIntValues(r5)
                android.animation.ValueAnimator r4 = r3.offsetAnimator
                r4.start()
                return
        }

        private boolean canScrollChildren(android.support.design.widget.CoordinatorLayout r2, T r3, android.view.View r4) {
                r1 = this;
                boolean r0 = r3.hasScrollableChildren()
                if (r0 == 0) goto L17
                int r2 = r2.getHeight()
                int r4 = r4.getHeight()
                int r2 = r2 - r4
                int r3 = r3.getHeight()
                if (r2 > r3) goto L17
                r2 = 1
                goto L18
            L17:
                r2 = 0
            L18:
                return r2
        }

        private static boolean checkFlag(int r0, int r1) {
                r0 = r0 & r1
                if (r0 != r1) goto L5
                r0 = 1
                goto L6
            L5:
                r0 = 0
            L6:
                return r0
        }

        private android.view.View findFirstScrollingChild(android.support.design.widget.CoordinatorLayout r5) {
                r4 = this;
                int r0 = r5.getChildCount()
                r1 = 0
            L5:
                if (r1 >= r0) goto L13
                android.view.View r2 = r5.getChildAt(r1)
                boolean r3 = r2 instanceof android.support.v4.view.NestedScrollingChild
                if (r3 == 0) goto L10
                return r2
            L10:
                int r1 = r1 + 1
                goto L5
            L13:
                r5 = 0
                return r5
        }

        private static android.view.View getAppBarChildOnOffset(android.support.design.widget.AppBarLayout r4, int r5) {
                int r5 = java.lang.Math.abs(r5)
                int r0 = r4.getChildCount()
                r1 = 0
            L9:
                if (r1 >= r0) goto L1f
                android.view.View r2 = r4.getChildAt(r1)
                int r3 = r2.getTop()
                if (r5 < r3) goto L1c
                int r3 = r2.getBottom()
                if (r5 > r3) goto L1c
                return r2
            L1c:
                int r1 = r1 + 1
                goto L9
            L1f:
                r4 = 0
                return r4
        }

        private int getChildIndexOnOffset(T r8, int r9) {
                r7 = this;
                int r0 = r8.getChildCount()
                r1 = 0
            L5:
                if (r1 >= r0) goto L34
                android.view.View r2 = r8.getChildAt(r1)
                int r3 = r2.getTop()
                int r4 = r2.getBottom()
                android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
                android.support.design.widget.AppBarLayout$LayoutParams r2 = (android.support.design.widget.AppBarLayout.LayoutParams) r2
                int r5 = r2.getScrollFlags()
                r6 = 32
                boolean r5 = checkFlag(r5, r6)
                if (r5 == 0) goto L2b
                int r5 = r2.topMargin
                int r3 = r3 - r5
                int r2 = r2.bottomMargin
                int r4 = r4 + r2
            L2b:
                int r2 = -r9
                if (r3 > r2) goto L31
                if (r4 < r2) goto L31
                return r1
            L31:
                int r1 = r1 + 1
                goto L5
            L34:
                r8 = -1
                return r8
        }

        private int interpolateOffset(T r9, int r10) {
                r8 = this;
                int r0 = java.lang.Math.abs(r10)
                int r1 = r9.getChildCount()
                r2 = 0
                r3 = r2
            La:
                if (r3 >= r1) goto L70
                android.view.View r4 = r9.getChildAt(r3)
                android.view.ViewGroup$LayoutParams r5 = r4.getLayoutParams()
                android.support.design.widget.AppBarLayout$LayoutParams r5 = (android.support.design.widget.AppBarLayout.LayoutParams) r5
                android.view.animation.Interpolator r6 = r5.getScrollInterpolator()
                int r7 = r4.getTop()
                if (r0 < r7) goto L6d
                int r7 = r4.getBottom()
                if (r0 > r7) goto L6d
                if (r6 == 0) goto L70
                int r1 = r5.getScrollFlags()
                r3 = r1 & 1
                if (r3 == 0) goto L44
                int r3 = r4.getHeight()
                int r7 = r5.topMargin
                int r3 = r3 + r7
                int r5 = r5.bottomMargin
                int r3 = r3 + r5
                int r2 = r2 + r3
                r1 = r1 & 2
                if (r1 == 0) goto L44
                int r1 = android.support.v4.view.ViewCompat.getMinimumHeight(r4)
                int r2 = r2 - r1
            L44:
                boolean r1 = android.support.v4.view.ViewCompat.getFitsSystemWindows(r4)
                if (r1 == 0) goto L4f
                int r9 = r9.getTopInset()
                int r2 = r2 - r9
            L4f:
                if (r2 <= 0) goto L70
                int r9 = r4.getTop()
                int r0 = r0 - r9
                float r9 = (float) r2
                float r0 = (float) r0
                float r0 = r0 / r9
                float r0 = r6.getInterpolation(r0)
                float r9 = r9 * r0
                int r9 = java.lang.Math.round(r9)
                int r10 = java.lang.Integer.signum(r10)
                int r0 = r4.getTop()
                int r0 = r0 + r9
                int r10 = r10 * r0
                return r10
            L6d:
                int r3 = r3 + 1
                goto La
            L70:
                return r10
        }

        private boolean shouldJumpElevationState(android.support.design.widget.CoordinatorLayout r5, T r6) {
                r4 = this;
                java.util.List r5 = r5.getDependents(r6)
                int r6 = r5.size()
                r0 = 0
                r1 = r0
            La:
                if (r1 >= r6) goto L2d
                java.lang.Object r2 = r5.get(r1)
                android.view.View r2 = (android.view.View) r2
                android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
                android.support.design.widget.CoordinatorLayout$LayoutParams r2 = (android.support.design.widget.CoordinatorLayout.LayoutParams) r2
                android.support.design.widget.CoordinatorLayout$Behavior r2 = r2.getBehavior()
                boolean r3 = r2 instanceof android.support.design.widget.AppBarLayout.ScrollingViewBehavior
                if (r3 == 0) goto L2a
                android.support.design.widget.AppBarLayout$ScrollingViewBehavior r2 = (android.support.design.widget.AppBarLayout.ScrollingViewBehavior) r2
                int r5 = r2.getOverlayTop()
                if (r5 == 0) goto L29
                r0 = 1
            L29:
                return r0
            L2a:
                int r1 = r1 + 1
                goto La
            L2d:
                return r0
        }

        private void snapToChildIfNeeded(android.support.design.widget.CoordinatorLayout r9, T r10) {
                r8 = this;
                int r0 = r8.getTopBottomOffsetForScrollingSibling()
                int r1 = r8.getChildIndexOnOffset(r10, r0)
                if (r1 < 0) goto L75
                android.view.View r2 = r10.getChildAt(r1)
                android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
                android.support.design.widget.AppBarLayout$LayoutParams r3 = (android.support.design.widget.AppBarLayout.LayoutParams) r3
                int r4 = r3.getScrollFlags()
                r5 = r4 & 17
                r6 = 17
                if (r5 != r6) goto L75
                int r5 = r2.getTop()
                int r5 = -r5
                int r6 = r2.getBottom()
                int r6 = -r6
                int r7 = r10.getChildCount()
                int r7 = r7 + (-1)
                if (r1 != r7) goto L35
                int r1 = r10.getTopInset()
                int r6 = r6 + r1
            L35:
                r1 = 2
                boolean r7 = checkFlag(r4, r1)
                if (r7 == 0) goto L42
                int r2 = android.support.v4.view.ViewCompat.getMinimumHeight(r2)
                int r6 = r6 + r2
                goto L53
            L42:
                r7 = 5
                boolean r7 = checkFlag(r4, r7)
                if (r7 == 0) goto L53
                int r2 = android.support.v4.view.ViewCompat.getMinimumHeight(r2)
                int r2 = r2 + r6
                if (r0 >= r2) goto L52
                r5 = r2
                goto L53
            L52:
                r6 = r2
            L53:
                r2 = 32
                boolean r2 = checkFlag(r4, r2)
                if (r2 == 0) goto L61
                int r2 = r3.topMargin
                int r5 = r5 + r2
                int r2 = r3.bottomMargin
                int r6 = r6 - r2
            L61:
                int r2 = r6 + r5
                int r2 = r2 / r1
                if (r0 >= r2) goto L67
                r5 = r6
            L67:
                int r0 = r10.getTotalScrollRange()
                int r0 = -r0
                r1 = 0
                int r0 = android.support.v4.math.MathUtils.clamp(r5, r0, r1)
                r1 = 0
                r8.animateOffsetTo(r9, r10, r0, r1)
            L75:
                return
        }

        private void stopNestedScrollIfNeeded(int r2, T r3, android.view.View r4, int r5) {
                r1 = this;
                r0 = 1
                if (r5 != r0) goto L17
                int r5 = r1.getTopBottomOffsetForScrollingSibling()
                if (r2 >= 0) goto Lb
                if (r5 == 0) goto L14
            Lb:
                if (r2 <= 0) goto L17
                int r2 = r3.getDownNestedScrollRange()
                int r2 = -r2
                if (r5 != r2) goto L17
            L14:
                android.support.v4.view.ViewCompat.stopNestedScroll(r4, r0)
            L17:
                return
        }

        private void updateAppBarLayoutDrawableState(android.support.design.widget.CoordinatorLayout r6, T r7, int r8, int r9, boolean r10) {
                r5 = this;
                android.view.View r0 = getAppBarChildOnOffset(r7, r8)
                if (r0 == 0) goto L6e
                android.view.ViewGroup$LayoutParams r1 = r0.getLayoutParams()
                android.support.design.widget.AppBarLayout$LayoutParams r1 = (android.support.design.widget.AppBarLayout.LayoutParams) r1
                int r1 = r1.getScrollFlags()
                r2 = r1 & 1
                r3 = 1
                r4 = 0
                if (r2 == 0) goto L41
                int r2 = android.support.v4.view.ViewCompat.getMinimumHeight(r0)
                if (r9 <= 0) goto L2f
                r9 = r1 & 12
                if (r9 == 0) goto L2f
                int r8 = -r8
                int r9 = r0.getBottom()
                int r9 = r9 - r2
                int r0 = r7.getTopInset()
                int r9 = r9 - r0
                if (r8 < r9) goto L41
            L2d:
                r8 = r3
                goto L42
            L2f:
                r9 = r1 & 2
                if (r9 == 0) goto L41
                int r8 = -r8
                int r9 = r0.getBottom()
                int r9 = r9 - r2
                int r0 = r7.getTopInset()
                int r9 = r9 - r0
                if (r8 < r9) goto L41
                goto L2d
            L41:
                r8 = r4
            L42:
                boolean r9 = r7.isLiftOnScroll()
                if (r9 == 0) goto L57
                android.view.View r9 = r5.findFirstScrollingChild(r6)
                if (r9 == 0) goto L57
                int r8 = r9.getScrollY()
                if (r8 <= 0) goto L55
                goto L56
            L55:
                r3 = r4
            L56:
                r8 = r3
            L57:
                boolean r8 = r7.setLiftedState(r8)
                int r9 = android.os.Build.VERSION.SDK_INT
                r0 = 11
                if (r9 < r0) goto L6e
                if (r10 != 0) goto L6b
                if (r8 == 0) goto L6e
                boolean r6 = r5.shouldJumpElevationState(r6, r7)
                if (r6 == 0) goto L6e
            L6b:
                r7.jumpDrawablesToCurrentState()
            L6e:
                return
        }

        boolean canDragView(T r3) {
                r2 = this;
                android.support.design.widget.AppBarLayout$BaseBehavior$BaseDragCallback r0 = r2.onDragCallback
                if (r0 == 0) goto L9
                boolean r3 = r0.canDrag(r3)
                return r3
            L9:
                java.lang.ref.WeakReference<android.view.View> r3 = r2.lastNestedScrollingChildRef
                r0 = 1
                if (r3 == 0) goto L25
                java.lang.Object r3 = r3.get()
                android.view.View r3 = (android.view.View) r3
                if (r3 == 0) goto L24
                boolean r1 = r3.isShown()
                if (r1 == 0) goto L24
                r1 = -1
                boolean r3 = r3.canScrollVertically(r1)
                if (r3 != 0) goto L24
                goto L25
            L24:
                r0 = 0
            L25:
                return r0
        }

        @Override
        boolean canDragView(android.view.View r1) {
                r0 = this;
                android.support.design.widget.AppBarLayout r1 = (android.support.design.widget.AppBarLayout) r1
                boolean r1 = r0.canDragView(r1)
                return r1
        }

        int getMaxDragOffset(T r1) {
                r0 = this;
                int r1 = r1.getDownNestedScrollRange()
                int r1 = -r1
                return r1
        }

        @Override
        int getMaxDragOffset(android.view.View r1) {
                r0 = this;
                android.support.design.widget.AppBarLayout r1 = (android.support.design.widget.AppBarLayout) r1
                int r1 = r0.getMaxDragOffset(r1)
                return r1
        }

        int getScrollRangeForDragFling(T r1) {
                r0 = this;
                int r1 = r1.getTotalScrollRange()
                return r1
        }

        @Override
        int getScrollRangeForDragFling(android.view.View r1) {
                r0 = this;
                android.support.design.widget.AppBarLayout r1 = (android.support.design.widget.AppBarLayout) r1
                int r1 = r0.getScrollRangeForDragFling(r1)
                return r1
        }

        @Override
        int getTopBottomOffsetForScrollingSibling() {
                r2 = this;
                int r0 = r2.getTopAndBottomOffset()
                int r1 = r2.offsetDelta
                int r0 = r0 + r1
                return r0
        }

        boolean isOffsetAnimatorRunning() {
                r1 = this;
                android.animation.ValueAnimator r0 = r1.offsetAnimator
                if (r0 == 0) goto Lc
                boolean r0 = r0.isRunning()
                if (r0 == 0) goto Lc
                r0 = 1
                goto Ld
            Lc:
                r0 = 0
            Ld:
                return r0
        }

        void onFlingFinished(android.support.design.widget.CoordinatorLayout r1, T r2) {
                r0 = this;
                r0.snapToChildIfNeeded(r1, r2)
                return
        }

        @Override
        void onFlingFinished(android.support.design.widget.CoordinatorLayout r1, android.view.View r2) {
                r0 = this;
                android.support.design.widget.AppBarLayout r2 = (android.support.design.widget.AppBarLayout) r2
                r0.onFlingFinished(r1, r2)
                return
        }

        public boolean onLayoutChild(android.support.design.widget.CoordinatorLayout r8, T r9, int r10) {
                r7 = this;
                boolean r10 = super.onLayoutChild(r8, r9, r10)
                int r0 = r9.getPendingAction()
                int r1 = r7.offsetToChildIndexOnLayout
                r2 = 0
                if (r1 < 0) goto L39
                r3 = r0 & 8
                if (r3 != 0) goto L39
                android.view.View r0 = r9.getChildAt(r1)
                int r1 = r0.getBottom()
                int r1 = -r1
                boolean r3 = r7.offsetToChildIndexOnLayoutIsMinHeight
                if (r3 == 0) goto L28
                int r0 = android.support.v4.view.ViewCompat.getMinimumHeight(r0)
                int r3 = r9.getTopInset()
                int r0 = r0 + r3
                goto L34
            L28:
                int r0 = r0.getHeight()
                float r0 = (float) r0
                float r3 = r7.offsetToChildIndexOnLayoutPerc
                float r0 = r0 * r3
                int r0 = java.lang.Math.round(r0)
            L34:
                int r1 = r1 + r0
                r7.setHeaderTopBottomOffset(r8, r9, r1)
                goto L63
            L39:
                if (r0 == 0) goto L63
                r1 = r0 & 4
                r3 = 1
                if (r1 == 0) goto L42
                r1 = r3
                goto L43
            L42:
                r1 = r2
            L43:
                r4 = r0 & 2
                r5 = 0
                if (r4 == 0) goto L57
                int r0 = r9.getUpNestedPreScrollRange()
                int r0 = -r0
                if (r1 == 0) goto L53
                r7.animateOffsetTo(r8, r9, r0, r5)
                goto L63
            L53:
                r7.setHeaderTopBottomOffset(r8, r9, r0)
                goto L63
            L57:
                r0 = r0 & r3
                if (r0 == 0) goto L63
                if (r1 == 0) goto L60
                r7.animateOffsetTo(r8, r9, r2, r5)
                goto L63
            L60:
                r7.setHeaderTopBottomOffset(r8, r9, r2)
            L63:
                r9.resetPendingAction()
                r0 = -1
                r7.offsetToChildIndexOnLayout = r0
                int r0 = r7.getTopAndBottomOffset()
                int r1 = r9.getTotalScrollRange()
                int r1 = -r1
                int r0 = android.support.v4.math.MathUtils.clamp(r0, r1, r2)
                r7.setTopAndBottomOffset(r0)
                int r4 = r7.getTopAndBottomOffset()
                r5 = 0
                r6 = 1
                r1 = r7
                r2 = r8
                r3 = r9
                r1.updateAppBarLayoutDrawableState(r2, r3, r4, r5, r6)
                int r8 = r7.getTopAndBottomOffset()
                r9.dispatchOffsetUpdates(r8)
                return r10
        }

        @Override
        public boolean onLayoutChild(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, int r3) {
                r0 = this;
                android.support.design.widget.AppBarLayout r2 = (android.support.design.widget.AppBarLayout) r2
                boolean r1 = r0.onLayoutChild(r1, r2, r3)
                return r1
        }

        public boolean onMeasureChild(android.support.design.widget.CoordinatorLayout r7, T r8, int r9, int r10, int r11, int r12) {
                r6 = this;
                android.view.ViewGroup$LayoutParams r0 = r8.getLayoutParams()
                android.support.design.widget.CoordinatorLayout$LayoutParams r0 = (android.support.design.widget.CoordinatorLayout.LayoutParams) r0
                int r0 = r0.height
                r1 = -2
                if (r0 != r1) goto L1a
                r11 = 0
                int r4 = android.view.View.MeasureSpec.makeMeasureSpec(r11, r11)
                r0 = r7
                r1 = r8
                r2 = r9
                r3 = r10
                r5 = r12
                r0.onMeasureChild(r1, r2, r3, r4, r5)
                r7 = 1
                return r7
            L1a:
                boolean r7 = super.onMeasureChild(r7, r8, r9, r10, r11, r12)
                return r7
        }

        @Override
        public boolean onMeasureChild(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, int r3, int r4, int r5, int r6) {
                r0 = this;
                android.support.design.widget.AppBarLayout r2 = (android.support.design.widget.AppBarLayout) r2
                boolean r1 = r0.onMeasureChild(r1, r2, r3, r4, r5, r6)
                return r1
        }

        public void onNestedPreScroll(android.support.design.widget.CoordinatorLayout r8, T r9, android.view.View r10, int r11, int r12, int[] r13, int r14) {
                r7 = this;
                if (r12 == 0) goto L27
                if (r12 >= 0) goto Lf
                int r11 = r9.getTotalScrollRange()
                int r11 = -r11
                int r0 = r9.getDownNestedPreScrollRange()
                int r0 = r0 + r11
                goto L15
            Lf:
                int r11 = r9.getUpNestedPreScrollRange()
                int r11 = -r11
                r0 = 0
            L15:
                r5 = r11
                r6 = r0
                if (r5 == r6) goto L27
                r11 = 1
                r1 = r7
                r2 = r8
                r3 = r9
                r4 = r12
                int r8 = r1.scroll(r2, r3, r4, r5, r6)
                r13[r11] = r8
                r7.stopNestedScrollIfNeeded(r12, r9, r10, r14)
            L27:
                return
        }

        @Override
        public void onNestedPreScroll(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, android.view.View r3, int r4, int r5, int[] r6, int r7) {
                r0 = this;
                android.support.design.widget.AppBarLayout r2 = (android.support.design.widget.AppBarLayout) r2
                r0.onNestedPreScroll(r1, r2, r3, r4, r5, r6, r7)
                return
        }

        public void onNestedScroll(android.support.design.widget.CoordinatorLayout r7, T r8, android.view.View r9, int r10, int r11, int r12, int r13, int r14) {
                r6 = this;
                if (r13 >= 0) goto L12
                int r10 = r8.getDownNestedScrollRange()
                int r4 = -r10
                r5 = 0
                r0 = r6
                r1 = r7
                r2 = r8
                r3 = r13
                r0.scroll(r1, r2, r3, r4, r5)
                r6.stopNestedScrollIfNeeded(r13, r8, r9, r14)
            L12:
                boolean r7 = r8.isLiftOnScroll()
                if (r7 == 0) goto L24
                int r7 = r9.getScrollY()
                if (r7 <= 0) goto L20
                r7 = 1
                goto L21
            L20:
                r7 = 0
            L21:
                r8.setLiftedState(r7)
            L24:
                return
        }

        @Override
        public void onNestedScroll(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, android.view.View r3, int r4, int r5, int r6, int r7, int r8) {
                r0 = this;
                android.support.design.widget.AppBarLayout r2 = (android.support.design.widget.AppBarLayout) r2
                r0.onNestedScroll(r1, r2, r3, r4, r5, r6, r7, r8)
                return
        }

        public void onRestoreInstanceState(android.support.design.widget.CoordinatorLayout r2, T r3, android.os.Parcelable r4) {
                r1 = this;
                boolean r0 = r4 instanceof android.support.design.widget.AppBarLayout.BaseBehavior.SavedState
                if (r0 == 0) goto L1a
                android.support.design.widget.AppBarLayout$BaseBehavior$SavedState r4 = (android.support.design.widget.AppBarLayout.BaseBehavior.SavedState) r4
                android.os.Parcelable r0 = r4.getSuperState()
                super.onRestoreInstanceState(r2, r3, r0)
                int r2 = r4.firstVisibleChildIndex
                r1.offsetToChildIndexOnLayout = r2
                float r2 = r4.firstVisibleChildPercentageShown
                r1.offsetToChildIndexOnLayoutPerc = r2
                boolean r2 = r4.firstVisibleChildAtMinimumHeight
                r1.offsetToChildIndexOnLayoutIsMinHeight = r2
                goto L20
            L1a:
                super.onRestoreInstanceState(r2, r3, r4)
                r2 = -1
                r1.offsetToChildIndexOnLayout = r2
            L20:
                return
        }

        @Override
        public void onRestoreInstanceState(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, android.os.Parcelable r3) {
                r0 = this;
                android.support.design.widget.AppBarLayout r2 = (android.support.design.widget.AppBarLayout) r2
                r0.onRestoreInstanceState(r1, r2, r3)
                return
        }

        public android.os.Parcelable onSaveInstanceState(android.support.design.widget.CoordinatorLayout r8, T r9) {
                r7 = this;
                android.os.Parcelable r8 = super.onSaveInstanceState(r8, r9)
                int r0 = r7.getTopAndBottomOffset()
                int r1 = r9.getChildCount()
                r2 = 0
                r3 = r2
            Le:
                if (r3 >= r1) goto L44
                android.view.View r4 = r9.getChildAt(r3)
                int r5 = r4.getBottom()
                int r5 = r5 + r0
                int r6 = r4.getTop()
                int r6 = r6 + r0
                if (r6 > 0) goto L41
                if (r5 < 0) goto L41
                android.support.design.widget.AppBarLayout$BaseBehavior$SavedState r0 = new android.support.design.widget.AppBarLayout$BaseBehavior$SavedState
                r0.<init>(r8)
                r0.firstVisibleChildIndex = r3
                int r8 = android.support.v4.view.ViewCompat.getMinimumHeight(r4)
                int r9 = r9.getTopInset()
                int r8 = r8 + r9
                if (r5 != r8) goto L35
                r2 = 1
            L35:
                r0.firstVisibleChildAtMinimumHeight = r2
                float r8 = (float) r5
                int r9 = r4.getHeight()
                float r9 = (float) r9
                float r8 = r8 / r9
                r0.firstVisibleChildPercentageShown = r8
                return r0
            L41:
                int r3 = r3 + 1
                goto Le
            L44:
                return r8
        }

        @Override
        public android.os.Parcelable onSaveInstanceState(android.support.design.widget.CoordinatorLayout r1, android.view.View r2) {
                r0 = this;
                android.support.design.widget.AppBarLayout r2 = (android.support.design.widget.AppBarLayout) r2
                android.os.Parcelable r1 = r0.onSaveInstanceState(r1, r2)
                return r1
        }

        public boolean onStartNestedScroll(android.support.design.widget.CoordinatorLayout r1, T r2, android.view.View r3, android.view.View r4, int r5, int r6) {
                r0 = this;
                r4 = r5 & 2
                if (r4 == 0) goto L12
                boolean r4 = r2.isLiftOnScroll()
                if (r4 != 0) goto L10
                boolean r1 = r0.canScrollChildren(r1, r2, r3)
                if (r1 == 0) goto L12
            L10:
                r1 = 1
                goto L13
            L12:
                r1 = 0
            L13:
                if (r1 == 0) goto L1c
                android.animation.ValueAnimator r2 = r0.offsetAnimator
                if (r2 == 0) goto L1c
                r2.cancel()
            L1c:
                r2 = 0
                r0.lastNestedScrollingChildRef = r2
                r0.lastStartedType = r6
                return r1
        }

        @Override
        public boolean onStartNestedScroll(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, android.view.View r3, android.view.View r4, int r5, int r6) {
                r0 = this;
                android.support.design.widget.AppBarLayout r2 = (android.support.design.widget.AppBarLayout) r2
                boolean r1 = r0.onStartNestedScroll(r1, r2, r3, r4, r5, r6)
                return r1
        }

        public void onStopNestedScroll(android.support.design.widget.CoordinatorLayout r2, T r3, android.view.View r4, int r5) {
                r1 = this;
                int r0 = r1.lastStartedType
                if (r0 == 0) goto L7
                r0 = 1
                if (r5 != r0) goto La
            L7:
                r1.snapToChildIfNeeded(r2, r3)
            La:
                java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
                r2.<init>(r4)
                r1.lastNestedScrollingChildRef = r2
                return
        }

        @Override
        public void onStopNestedScroll(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, android.view.View r3, int r4) {
                r0 = this;
                android.support.design.widget.AppBarLayout r2 = (android.support.design.widget.AppBarLayout) r2
                r0.onStopNestedScroll(r1, r2, r3, r4)
                return
        }

        public void setDragCallback(android.support.design.widget.AppBarLayout.BaseBehavior.BaseDragCallback r1) {
                r0 = this;
                r0.onDragCallback = r1
                return
        }

        int setHeaderTopBottomOffset(android.support.design.widget.CoordinatorLayout r9, T r10, int r11, int r12, int r13) {
                r8 = this;
                int r0 = r8.getTopBottomOffsetForScrollingSibling()
                r1 = 0
                if (r12 == 0) goto L47
                if (r0 < r12) goto L47
                if (r0 > r13) goto L47
                int r5 = android.support.v4.math.MathUtils.clamp(r11, r12, r13)
                if (r0 == r5) goto L49
                boolean r11 = r10.hasChildWithInterpolator()
                if (r11 == 0) goto L1c
                int r11 = r8.interpolateOffset(r10, r5)
                goto L1d
            L1c:
                r11 = r5
            L1d:
                boolean r12 = r8.setTopAndBottomOffset(r11)
                int r1 = r0 - r5
                int r11 = r5 - r11
                r8.offsetDelta = r11
                if (r12 != 0) goto L32
                boolean r11 = r10.hasChildWithInterpolator()
                if (r11 == 0) goto L32
                r9.dispatchDependentViewsChanged(r10)
            L32:
                int r11 = r8.getTopAndBottomOffset()
                r10.dispatchOffsetUpdates(r11)
                if (r5 >= r0) goto L3d
                r11 = -1
                goto L3e
            L3d:
                r11 = 1
            L3e:
                r6 = r11
                r7 = 0
                r2 = r8
                r3 = r9
                r4 = r10
                r2.updateAppBarLayoutDrawableState(r3, r4, r5, r6, r7)
                goto L49
            L47:
                r8.offsetDelta = r1
            L49:
                return r1
        }

        @Override
        int setHeaderTopBottomOffset(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, int r3, int r4, int r5) {
                r0 = this;
                android.support.design.widget.AppBarLayout r2 = (android.support.design.widget.AppBarLayout) r2
                int r1 = r0.setHeaderTopBottomOffset(r1, r2, r3, r4, r5)
                return r1
        }
    }

    public interface BaseOnOffsetChangedListener<T extends android.support.design.widget.AppBarLayout> {
        void onOffsetChanged(T r1, int r2);
    }

    public static class Behavior extends android.support.design.widget.AppBarLayout.BaseBehavior<android.support.design.widget.AppBarLayout> {

        public static abstract class DragCallback extends android.support.design.widget.AppBarLayout.BaseBehavior.BaseDragCallback<android.support.design.widget.AppBarLayout> {
            public DragCallback() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public Behavior() {
                r0 = this;
                r0.<init>()
                return
        }

        public Behavior(android.content.Context r1, android.util.AttributeSet r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        @Override
        public int getLeftAndRightOffset() {
                r1 = this;
                int r0 = super.getLeftAndRightOffset()
                return r0
        }

        @Override
        public int getTopAndBottomOffset() {
                r1 = this;
                int r0 = super.getTopAndBottomOffset()
                return r0
        }

        @Override
        public boolean onLayoutChild(android.support.design.widget.CoordinatorLayout r1, android.support.design.widget.AppBarLayout r2, int r3) {
                r0 = this;
                boolean r1 = super.onLayoutChild(r1, r2, r3)
                return r1
        }

        @Override
        public boolean onMeasureChild(android.support.design.widget.CoordinatorLayout r1, android.support.design.widget.AppBarLayout r2, int r3, int r4, int r5, int r6) {
                r0 = this;
                boolean r1 = super.onMeasureChild(r1, r2, r3, r4, r5, r6)
                return r1
        }

        @Override
        public void onNestedPreScroll(android.support.design.widget.CoordinatorLayout r1, android.support.design.widget.AppBarLayout r2, android.view.View r3, int r4, int r5, int[] r6, int r7) {
                r0 = this;
                super.onNestedPreScroll(r1, r2, r3, r4, r5, r6, r7)
                return
        }

        @Override
        public void onNestedScroll(android.support.design.widget.CoordinatorLayout r1, android.support.design.widget.AppBarLayout r2, android.view.View r3, int r4, int r5, int r6, int r7, int r8) {
                r0 = this;
                super.onNestedScroll(r1, r2, r3, r4, r5, r6, r7, r8)
                return
        }

        @Override
        public void onRestoreInstanceState(android.support.design.widget.CoordinatorLayout r1, android.support.design.widget.AppBarLayout r2, android.os.Parcelable r3) {
                r0 = this;
                super.onRestoreInstanceState(r1, r2, r3)
                return
        }

        @Override
        public android.os.Parcelable onSaveInstanceState(android.support.design.widget.CoordinatorLayout r1, android.support.design.widget.AppBarLayout r2) {
                r0 = this;
                android.os.Parcelable r1 = super.onSaveInstanceState(r1, r2)
                return r1
        }

        @Override
        public boolean onStartNestedScroll(android.support.design.widget.CoordinatorLayout r1, android.support.design.widget.AppBarLayout r2, android.view.View r3, android.view.View r4, int r5, int r6) {
                r0 = this;
                boolean r1 = super.onStartNestedScroll(r1, r2, r3, r4, r5, r6)
                return r1
        }

        @Override
        public void onStopNestedScroll(android.support.design.widget.CoordinatorLayout r1, android.support.design.widget.AppBarLayout r2, android.view.View r3, int r4) {
                r0 = this;
                super.onStopNestedScroll(r1, r2, r3, r4)
                return
        }

        @Override
        public void setDragCallback(android.support.design.widget.AppBarLayout.BaseBehavior.BaseDragCallback r1) {
                r0 = this;
                super.setDragCallback(r1)
                return
        }

        @Override
        public boolean setLeftAndRightOffset(int r1) {
                r0 = this;
                boolean r1 = super.setLeftAndRightOffset(r1)
                return r1
        }

        @Override
        public boolean setTopAndBottomOffset(int r1) {
                r0 = this;
                boolean r1 = super.setTopAndBottomOffset(r1)
                return r1
        }
    }

    public static class LayoutParams extends android.widget.LinearLayout.LayoutParams {
        static final int COLLAPSIBLE_FLAGS = 10;
        static final int FLAG_QUICK_RETURN = 5;
        static final int FLAG_SNAP = 17;
        public static final int SCROLL_FLAG_ENTER_ALWAYS = 4;
        public static final int SCROLL_FLAG_ENTER_ALWAYS_COLLAPSED = 8;
        public static final int SCROLL_FLAG_EXIT_UNTIL_COLLAPSED = 2;
        public static final int SCROLL_FLAG_SCROLL = 1;
        public static final int SCROLL_FLAG_SNAP = 16;
        public static final int SCROLL_FLAG_SNAP_MARGINS = 32;
        int scrollFlags;
        android.view.animation.Interpolator scrollInterpolator;

        @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
        public @interface ScrollFlags {
        }

        public LayoutParams(int r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                r1 = 1
                r0.scrollFlags = r1
                return
        }

        public LayoutParams(int r1, int r2, float r3) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                r1 = 1
                r0.scrollFlags = r1
                return
        }

        public LayoutParams(android.content.Context r3, android.util.AttributeSet r4) {
                r2 = this;
                r2.<init>(r3, r4)
                r0 = 1
                r2.scrollFlags = r0
                int[] r0 = android.support.design.R.styleable.AppBarLayout_Layout
                android.content.res.TypedArray r4 = r3.obtainStyledAttributes(r4, r0)
                int r0 = android.support.design.R.styleable.AppBarLayout_Layout_layout_scrollFlags
                r1 = 0
                int r0 = r4.getInt(r0, r1)
                r2.scrollFlags = r0
                int r0 = android.support.design.R.styleable.AppBarLayout_Layout_layout_scrollInterpolator
                boolean r0 = r4.hasValue(r0)
                if (r0 == 0) goto L29
                int r0 = android.support.design.R.styleable.AppBarLayout_Layout_layout_scrollInterpolator
                int r0 = r4.getResourceId(r0, r1)
                android.view.animation.Interpolator r3 = android.view.animation.AnimationUtils.loadInterpolator(r3, r0)
                r2.scrollInterpolator = r3
            L29:
                r4.recycle()
                return
        }

        public LayoutParams(android.support.design.widget.AppBarLayout.LayoutParams r2) {
                r1 = this;
                r1.<init>(r2)
                r0 = 1
                r1.scrollFlags = r0
                int r0 = r2.scrollFlags
                r1.scrollFlags = r0
                android.view.animation.Interpolator r2 = r2.scrollInterpolator
                r1.scrollInterpolator = r2
                return
        }

        public LayoutParams(android.view.ViewGroup.LayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                r1 = 1
                r0.scrollFlags = r1
                return
        }

        public LayoutParams(android.view.ViewGroup.MarginLayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                r1 = 1
                r0.scrollFlags = r1
                return
        }

        public LayoutParams(android.widget.LinearLayout.LayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                r1 = 1
                r0.scrollFlags = r1
                return
        }

        public int getScrollFlags() {
                r1 = this;
                int r0 = r1.scrollFlags
                return r0
        }

        public android.view.animation.Interpolator getScrollInterpolator() {
                r1 = this;
                android.view.animation.Interpolator r0 = r1.scrollInterpolator
                return r0
        }

        boolean isCollapsible() {
                r3 = this;
                int r0 = r3.scrollFlags
                r1 = r0 & 1
                r2 = 1
                if (r1 != r2) goto Lc
                r0 = r0 & 10
                if (r0 == 0) goto Lc
                goto Ld
            Lc:
                r2 = 0
            Ld:
                return r2
        }

        public void setScrollFlags(int r1) {
                r0 = this;
                r0.scrollFlags = r1
                return
        }

        public void setScrollInterpolator(android.view.animation.Interpolator r1) {
                r0 = this;
                r0.scrollInterpolator = r1
                return
        }
    }

    public interface OnOffsetChangedListener extends android.support.design.widget.AppBarLayout.BaseOnOffsetChangedListener<android.support.design.widget.AppBarLayout> {
        @Override
        void onOffsetChanged(android.support.design.widget.AppBarLayout r1, int r2);
    }

    public static class ScrollingViewBehavior extends android.support.design.widget.HeaderScrollingViewBehavior {
        public ScrollingViewBehavior() {
                r0 = this;
                r0.<init>()
                return
        }

        public ScrollingViewBehavior(android.content.Context r2, android.util.AttributeSet r3) {
                r1 = this;
                r1.<init>(r2, r3)
                int[] r0 = android.support.design.R.styleable.ScrollingViewBehavior_Layout
                android.content.res.TypedArray r2 = r2.obtainStyledAttributes(r3, r0)
                int r3 = android.support.design.R.styleable.ScrollingViewBehavior_Layout_behavior_overlapTop
                r0 = 0
                int r3 = r2.getDimensionPixelSize(r3, r0)
                r1.setOverlayTop(r3)
                r2.recycle()
                return
        }

        private static int getAppBarLayoutOffset(android.support.design.widget.AppBarLayout r1) {
                android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
                android.support.design.widget.CoordinatorLayout$LayoutParams r1 = (android.support.design.widget.CoordinatorLayout.LayoutParams) r1
                android.support.design.widget.CoordinatorLayout$Behavior r1 = r1.getBehavior()
                boolean r0 = r1 instanceof android.support.design.widget.AppBarLayout.BaseBehavior
                if (r0 == 0) goto L15
                android.support.design.widget.AppBarLayout$BaseBehavior r1 = (android.support.design.widget.AppBarLayout.BaseBehavior) r1
                int r1 = r1.getTopBottomOffsetForScrollingSibling()
                return r1
            L15:
                r1 = 0
                return r1
        }

        private void offsetChildAsNeeded(android.view.View r4, android.view.View r5) {
                r3 = this;
                android.view.ViewGroup$LayoutParams r0 = r5.getLayoutParams()
                android.support.design.widget.CoordinatorLayout$LayoutParams r0 = (android.support.design.widget.CoordinatorLayout.LayoutParams) r0
                android.support.design.widget.CoordinatorLayout$Behavior r0 = r0.getBehavior()
                boolean r1 = r0 instanceof android.support.design.widget.AppBarLayout.BaseBehavior
                if (r1 == 0) goto L2b
                android.support.design.widget.AppBarLayout$BaseBehavior r0 = (android.support.design.widget.AppBarLayout.BaseBehavior) r0
                int r1 = r5.getBottom()
                int r2 = r4.getTop()
                int r1 = r1 - r2
                int r0 = android.support.design.widget.AppBarLayout.BaseBehavior.access$000(r0)
                int r1 = r1 + r0
                int r0 = r3.getVerticalLayoutGap()
                int r1 = r1 + r0
                int r5 = r3.getOverlapPixelsForOffset(r5)
                int r1 = r1 - r5
                android.support.v4.view.ViewCompat.offsetTopAndBottom(r4, r1)
            L2b:
                return
        }

        private void updateLiftedStateIfNeeded(android.view.View r2, android.view.View r3) {
                r1 = this;
                boolean r0 = r3 instanceof android.support.design.widget.AppBarLayout
                if (r0 == 0) goto L18
                android.support.design.widget.AppBarLayout r3 = (android.support.design.widget.AppBarLayout) r3
                boolean r0 = r3.isLiftOnScroll()
                if (r0 == 0) goto L18
                int r2 = r2.getScrollY()
                if (r2 <= 0) goto L14
                r2 = 1
                goto L15
            L14:
                r2 = 0
            L15:
                r3.setLiftedState(r2)
            L18:
                return
        }

        @Override
        android.support.design.widget.AppBarLayout findFirstDependency(java.util.List<android.view.View> r5) {
                r4 = this;
                int r0 = r5.size()
                r1 = 0
            L5:
                if (r1 >= r0) goto L17
                java.lang.Object r2 = r5.get(r1)
                android.view.View r2 = (android.view.View) r2
                boolean r3 = r2 instanceof android.support.design.widget.AppBarLayout
                if (r3 == 0) goto L14
                android.support.design.widget.AppBarLayout r2 = (android.support.design.widget.AppBarLayout) r2
                return r2
            L14:
                int r1 = r1 + 1
                goto L5
            L17:
                r5 = 0
                return r5
        }

        @Override
        android.view.View findFirstDependency(java.util.List r1) {
                r0 = this;
                android.support.design.widget.AppBarLayout r1 = r0.findFirstDependency(r1)
                return r1
        }

        @Override
        public int getLeftAndRightOffset() {
                r1 = this;
                int r0 = super.getLeftAndRightOffset()
                return r0
        }

        @Override
        float getOverlapRatioForOffset(android.view.View r5) {
                r4 = this;
                boolean r0 = r5 instanceof android.support.design.widget.AppBarLayout
                r1 = 0
                if (r0 == 0) goto L24
                android.support.design.widget.AppBarLayout r5 = (android.support.design.widget.AppBarLayout) r5
                int r0 = r5.getTotalScrollRange()
                int r2 = r5.getDownNestedPreScrollRange()
                int r5 = getAppBarLayoutOffset(r5)
                if (r2 == 0) goto L1a
                int r3 = r0 + r5
                if (r3 > r2) goto L1a
                return r1
            L1a:
                int r0 = r0 - r2
                if (r0 == 0) goto L24
                r1 = 1065353216(0x3f800000, float:1.0)
                float r5 = (float) r5
                float r0 = (float) r0
                float r5 = r5 / r0
                float r5 = r5 + r1
                return r5
            L24:
                return r1
        }

        @Override
        int getScrollRange(android.view.View r2) {
                r1 = this;
                boolean r0 = r2 instanceof android.support.design.widget.AppBarLayout
                if (r0 == 0) goto Lb
                android.support.design.widget.AppBarLayout r2 = (android.support.design.widget.AppBarLayout) r2
                int r2 = r2.getTotalScrollRange()
                return r2
            Lb:
                int r2 = super.getScrollRange(r2)
                return r2
        }

        @Override
        public int getTopAndBottomOffset() {
                r1 = this;
                int r0 = super.getTopAndBottomOffset()
                return r0
        }

        @Override
        public boolean layoutDependsOn(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, android.view.View r3) {
                r0 = this;
                boolean r1 = r3 instanceof android.support.design.widget.AppBarLayout
                return r1
        }

        @Override
        public boolean onDependentViewChanged(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, android.view.View r3) {
                r0 = this;
                r0.offsetChildAsNeeded(r2, r3)
                r0.updateLiftedStateIfNeeded(r2, r3)
                r1 = 0
                return r1
        }

        @Override
        public boolean onLayoutChild(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, int r3) {
                r0 = this;
                boolean r1 = super.onLayoutChild(r1, r2, r3)
                return r1
        }

        @Override
        public boolean onMeasureChild(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, int r3, int r4, int r5, int r6) {
                r0 = this;
                boolean r1 = super.onMeasureChild(r1, r2, r3, r4, r5, r6)
                return r1
        }

        @Override
        public boolean onRequestChildRectangleOnScreen(android.support.design.widget.CoordinatorLayout r4, android.view.View r5, android.graphics.Rect r6, boolean r7) {
                r3 = this;
                java.util.List r0 = r4.getDependencies(r5)
                android.support.design.widget.AppBarLayout r0 = r3.findFirstDependency(r0)
                r1 = 0
                if (r0 == 0) goto L30
                int r2 = r5.getLeft()
                int r5 = r5.getTop()
                r6.offset(r2, r5)
                android.graphics.Rect r5 = r3.tempRect1
                int r2 = r4.getWidth()
                int r4 = r4.getHeight()
                r5.set(r1, r1, r2, r4)
                boolean r4 = r5.contains(r6)
                if (r4 != 0) goto L30
                r4 = 1
                r5 = r7 ^ 1
                r0.setExpanded(r1, r5)
                return r4
            L30:
                return r1
        }

        @Override
        public boolean setLeftAndRightOffset(int r1) {
                r0 = this;
                boolean r1 = super.setLeftAndRightOffset(r1)
                return r1
        }

        @Override
        public boolean setTopAndBottomOffset(int r1) {
                r0 = this;
                boolean r1 = super.setTopAndBottomOffset(r1)
                return r1
        }
    }

    public AppBarLayout(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public AppBarLayout(android.content.Context r10, android.util.AttributeSet r11) {
            r9 = this;
            r9.<init>(r10, r11)
            r0 = -1
            r9.totalScrollRange = r0
            r9.downPreScrollRange = r0
            r9.downScrollRange = r0
            r0 = 0
            r9.pendingAction = r0
            r1 = 1
            r9.setOrientation(r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L1f
            android.support.design.widget.ViewUtilsLollipop.setBoundsViewOutlineProvider(r9)
            int r1 = android.support.design.R.style.Widget_Design_AppBarLayout
            android.support.design.widget.ViewUtilsLollipop.setStateListAnimatorFromAttrs(r9, r11, r0, r1)
        L1f:
            int[] r5 = android.support.design.R.styleable.AppBarLayout
            r6 = 0
            int r7 = android.support.design.R.style.Widget_Design_AppBarLayout
            int[] r8 = new int[r0]
            r3 = r10
            r4 = r11
            android.content.res.TypedArray r10 = android.support.design.internal.ThemeEnforcement.obtainStyledAttributes(r3, r4, r5, r6, r7, r8)
            int r11 = android.support.design.R.styleable.AppBarLayout_android_background
            android.graphics.drawable.Drawable r11 = r10.getDrawable(r11)
            android.support.v4.view.ViewCompat.setBackground(r9, r11)
            int r11 = android.support.design.R.styleable.AppBarLayout_expanded
            boolean r11 = r10.hasValue(r11)
            if (r11 == 0) goto L46
            int r11 = android.support.design.R.styleable.AppBarLayout_expanded
            boolean r11 = r10.getBoolean(r11, r0)
            r9.setExpanded(r11, r0, r0)
        L46:
            int r11 = android.os.Build.VERSION.SDK_INT
            if (r11 < r2) goto L5c
            int r11 = android.support.design.R.styleable.AppBarLayout_elevation
            boolean r11 = r10.hasValue(r11)
            if (r11 == 0) goto L5c
            int r11 = android.support.design.R.styleable.AppBarLayout_elevation
            int r11 = r10.getDimensionPixelSize(r11, r0)
            float r11 = (float) r11
            android.support.design.widget.ViewUtilsLollipop.setDefaultAppBarLayoutStateListAnimator(r9, r11)
        L5c:
            int r11 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r11 < r1) goto L84
            int r11 = android.support.design.R.styleable.AppBarLayout_android_keyboardNavigationCluster
            boolean r11 = r10.hasValue(r11)
            if (r11 == 0) goto L73
            int r11 = android.support.design.R.styleable.AppBarLayout_android_keyboardNavigationCluster
            boolean r11 = r10.getBoolean(r11, r0)
            r9.setKeyboardNavigationCluster(r11)
        L73:
            int r11 = android.support.design.R.styleable.AppBarLayout_android_touchscreenBlocksFocus
            boolean r11 = r10.hasValue(r11)
            if (r11 == 0) goto L84
            int r11 = android.support.design.R.styleable.AppBarLayout_android_touchscreenBlocksFocus
            boolean r11 = r10.getBoolean(r11, r0)
            r9.setTouchscreenBlocksFocus(r11)
        L84:
            int r11 = android.support.design.R.styleable.AppBarLayout_liftOnScroll
            boolean r11 = r10.getBoolean(r11, r0)
            r9.liftOnScroll = r11
            r10.recycle()
            android.support.design.widget.AppBarLayout$1 r10 = new android.support.design.widget.AppBarLayout$1
            r10.<init>(r9)
            android.support.v4.view.ViewCompat.setOnApplyWindowInsetsListener(r9, r10)
            return
    }

    private boolean hasCollapsibleChild() {
            r4 = this;
            int r0 = r4.getChildCount()
            r1 = 0
            r2 = r1
        L6:
            if (r2 >= r0) goto L1d
            android.view.View r3 = r4.getChildAt(r2)
            android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
            android.support.design.widget.AppBarLayout$LayoutParams r3 = (android.support.design.widget.AppBarLayout.LayoutParams) r3
            boolean r3 = r3.isCollapsible()
            if (r3 == 0) goto L1a
            r0 = 1
            return r0
        L1a:
            int r2 = r2 + 1
            goto L6
        L1d:
            return r1
    }

    private void invalidateScrollRanges() {
            r1 = this;
            r0 = -1
            r1.totalScrollRange = r0
            r1.downPreScrollRange = r0
            r1.downScrollRange = r0
            return
    }

    private void setExpanded(boolean r2, boolean r3, boolean r4) {
            r1 = this;
            if (r2 == 0) goto L4
            r2 = 1
            goto L5
        L4:
            r2 = 2
        L5:
            r0 = 0
            if (r3 == 0) goto La
            r3 = 4
            goto Lb
        La:
            r3 = r0
        Lb:
            r2 = r2 | r3
            if (r4 == 0) goto L10
            r0 = 8
        L10:
            r2 = r2 | r0
            r1.pendingAction = r2
            r1.requestLayout()
            return
    }

    private boolean setLiftableState(boolean r2) {
            r1 = this;
            boolean r0 = r1.liftable
            if (r0 == r2) goto Lb
            r1.liftable = r2
            r1.refreshDrawableState()
            r2 = 1
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public void addOnOffsetChangedListener(android.support.design.widget.AppBarLayout.BaseOnOffsetChangedListener r2) {
            r1 = this;
            java.util.List<android.support.design.widget.AppBarLayout$BaseOnOffsetChangedListener> r0 = r1.listeners
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.listeners = r0
        Lb:
            if (r2 == 0) goto L1a
            java.util.List<android.support.design.widget.AppBarLayout$BaseOnOffsetChangedListener> r0 = r1.listeners
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto L1a
            java.util.List<android.support.design.widget.AppBarLayout$BaseOnOffsetChangedListener> r0 = r1.listeners
            r0.add(r2)
        L1a:
            return
    }

    public void addOnOffsetChangedListener(android.support.design.widget.AppBarLayout.OnOffsetChangedListener r1) {
            r0 = this;
            r0.addOnOffsetChangedListener(r1)
            return
    }

    @Override
    protected boolean checkLayoutParams(android.view.ViewGroup.LayoutParams r1) {
            r0 = this;
            boolean r1 = r1 instanceof android.support.design.widget.AppBarLayout.LayoutParams
            return r1
    }

    void dispatchOffsetUpdates(int r4) {
            r3 = this;
            java.util.List<android.support.design.widget.AppBarLayout$BaseOnOffsetChangedListener> r0 = r3.listeners
            if (r0 == 0) goto L1b
            r1 = 0
            int r0 = r0.size()
        L9:
            if (r1 >= r0) goto L1b
            java.util.List<android.support.design.widget.AppBarLayout$BaseOnOffsetChangedListener> r2 = r3.listeners
            java.lang.Object r2 = r2.get(r1)
            android.support.design.widget.AppBarLayout$BaseOnOffsetChangedListener r2 = (android.support.design.widget.AppBarLayout.BaseOnOffsetChangedListener) r2
            if (r2 == 0) goto L18
            r2.onOffsetChanged(r3, r4)
        L18:
            int r1 = r1 + 1
            goto L9
        L1b:
            return
    }

    @Override
    protected android.support.design.widget.AppBarLayout.LayoutParams generateDefaultLayoutParams() {
            r3 = this;
            android.support.design.widget.AppBarLayout$LayoutParams r0 = new android.support.design.widget.AppBarLayout$LayoutParams
            r1 = -1
            r2 = -2
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateDefaultLayoutParams() {
            r1 = this;
            android.support.design.widget.AppBarLayout$LayoutParams r0 = r1.generateDefaultLayoutParams()
            return r0
    }

    @Override
    protected android.widget.LinearLayout.LayoutParams generateDefaultLayoutParams() {
            r1 = this;
            android.support.design.widget.AppBarLayout$LayoutParams r0 = r1.generateDefaultLayoutParams()
            return r0
    }

    @Override
    public android.support.design.widget.AppBarLayout.LayoutParams generateLayoutParams(android.util.AttributeSet r3) {
            r2 = this;
            android.support.design.widget.AppBarLayout$LayoutParams r0 = new android.support.design.widget.AppBarLayout$LayoutParams
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1, r3)
            return r0
    }

    @Override
    protected android.support.design.widget.AppBarLayout.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L12
            boolean r0 = r3 instanceof android.widget.LinearLayout.LayoutParams
            if (r0 == 0) goto L12
            android.support.design.widget.AppBarLayout$LayoutParams r0 = new android.support.design.widget.AppBarLayout$LayoutParams
            android.widget.LinearLayout$LayoutParams r3 = (android.widget.LinearLayout.LayoutParams) r3
            r0.<init>(r3)
            return r0
        L12:
            boolean r0 = r3 instanceof android.view.ViewGroup.MarginLayoutParams
            if (r0 == 0) goto L1e
            android.support.design.widget.AppBarLayout$LayoutParams r0 = new android.support.design.widget.AppBarLayout$LayoutParams
            android.view.ViewGroup$MarginLayoutParams r3 = (android.view.ViewGroup.MarginLayoutParams) r3
            r0.<init>(r3)
            return r0
        L1e:
            android.support.design.widget.AppBarLayout$LayoutParams r0 = new android.support.design.widget.AppBarLayout$LayoutParams
            r0.<init>(r3)
            return r0
    }

    @Override
    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet r1) {
            r0 = this;
            android.support.design.widget.AppBarLayout$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r1) {
            r0 = this;
            android.support.design.widget.AppBarLayout$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @Override
    public android.widget.LinearLayout.LayoutParams generateLayoutParams(android.util.AttributeSet r1) {
            r0 = this;
            android.support.design.widget.AppBarLayout$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @Override
    protected android.widget.LinearLayout.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r1) {
            r0 = this;
            android.support.design.widget.AppBarLayout$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    int getDownNestedPreScrollRange() {
            r9 = this;
            int r0 = r9.downPreScrollRange
            r1 = -1
            if (r0 == r1) goto L6
            return r0
        L6:
            int r0 = r9.getChildCount()
            int r0 = r0 + (-1)
            r1 = 0
            r2 = r1
        Le:
            if (r0 < 0) goto L4b
            android.view.View r3 = r9.getChildAt(r0)
            android.view.ViewGroup$LayoutParams r4 = r3.getLayoutParams()
            android.support.design.widget.AppBarLayout$LayoutParams r4 = (android.support.design.widget.AppBarLayout.LayoutParams) r4
            int r5 = r3.getMeasuredHeight()
            int r6 = r4.scrollFlags
            r7 = r6 & 5
            r8 = 5
            if (r7 != r8) goto L45
            int r7 = r4.topMargin
            int r4 = r4.bottomMargin
            int r7 = r7 + r4
            int r2 = r2 + r7
            r4 = r6 & 8
            if (r4 == 0) goto L35
            int r3 = android.support.v4.view.ViewCompat.getMinimumHeight(r3)
            int r2 = r2 + r3
            goto L48
        L35:
            r4 = r6 & 2
            if (r4 == 0) goto L3e
            int r3 = android.support.v4.view.ViewCompat.getMinimumHeight(r3)
            goto L42
        L3e:
            int r3 = r9.getTopInset()
        L42:
            int r5 = r5 - r3
            int r2 = r2 + r5
            goto L48
        L45:
            if (r2 <= 0) goto L48
            goto L4b
        L48:
            int r0 = r0 + (-1)
            goto Le
        L4b:
            int r0 = java.lang.Math.max(r1, r2)
            r9.downPreScrollRange = r0
            return r0
    }

    int getDownNestedScrollRange() {
            r9 = this;
            int r0 = r9.downScrollRange
            r1 = -1
            if (r0 == r1) goto L6
            return r0
        L6:
            int r0 = r9.getChildCount()
            r1 = 0
            r2 = r1
            r3 = r2
        Ld:
            if (r2 >= r0) goto L3c
            android.view.View r4 = r9.getChildAt(r2)
            android.view.ViewGroup$LayoutParams r5 = r4.getLayoutParams()
            android.support.design.widget.AppBarLayout$LayoutParams r5 = (android.support.design.widget.AppBarLayout.LayoutParams) r5
            int r6 = r4.getMeasuredHeight()
            int r7 = r5.topMargin
            int r8 = r5.bottomMargin
            int r7 = r7 + r8
            int r6 = r6 + r7
            int r5 = r5.scrollFlags
            r7 = r5 & 1
            if (r7 == 0) goto L3c
            int r3 = r3 + r6
            r5 = r5 & 2
            if (r5 == 0) goto L39
            int r0 = android.support.v4.view.ViewCompat.getMinimumHeight(r4)
            int r2 = r9.getTopInset()
            int r0 = r0 + r2
            int r3 = r3 - r0
            goto L3c
        L39:
            int r2 = r2 + 1
            goto Ld
        L3c:
            int r0 = java.lang.Math.max(r1, r3)
            r9.downScrollRange = r0
            return r0
    }

    public final int getMinimumHeightForVisibleOverlappingContent() {
            r3 = this;
            int r0 = r3.getTopInset()
            int r1 = android.support.v4.view.ViewCompat.getMinimumHeight(r3)
            if (r1 == 0) goto Le
        La:
            int r1 = r1 * 2
            int r1 = r1 + r0
            return r1
        Le:
            int r1 = r3.getChildCount()
            r2 = 1
            if (r1 < r2) goto L1f
            int r1 = r1 - r2
            android.view.View r1 = r3.getChildAt(r1)
            int r1 = android.support.v4.view.ViewCompat.getMinimumHeight(r1)
            goto L20
        L1f:
            r1 = 0
        L20:
            if (r1 == 0) goto L23
            goto La
        L23:
            int r0 = r3.getHeight()
            int r0 = r0 / 3
            return r0
    }

    int getPendingAction() {
            r1 = this;
            int r0 = r1.pendingAction
            return r0
    }

    @java.lang.Deprecated
    public float getTargetElevation() {
            r1 = this;
            r0 = 0
            return r0
    }

    final int getTopInset() {
            r1 = this;
            android.support.v4.view.WindowInsetsCompat r0 = r1.lastInsets
            if (r0 == 0) goto L9
            int r0 = r0.getSystemWindowInsetTop()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public final int getTotalScrollRange() {
            r9 = this;
            int r0 = r9.totalScrollRange
            r1 = -1
            if (r0 == r1) goto L6
            return r0
        L6:
            int r0 = r9.getChildCount()
            r1 = 0
            r2 = r1
            r3 = r2
        Ld:
            if (r2 >= r0) goto L37
            android.view.View r4 = r9.getChildAt(r2)
            android.view.ViewGroup$LayoutParams r5 = r4.getLayoutParams()
            android.support.design.widget.AppBarLayout$LayoutParams r5 = (android.support.design.widget.AppBarLayout.LayoutParams) r5
            int r6 = r4.getMeasuredHeight()
            int r7 = r5.scrollFlags
            r8 = r7 & 1
            if (r8 == 0) goto L37
            int r8 = r5.topMargin
            int r6 = r6 + r8
            int r5 = r5.bottomMargin
            int r6 = r6 + r5
            int r3 = r3 + r6
            r5 = r7 & 2
            if (r5 == 0) goto L34
            int r0 = android.support.v4.view.ViewCompat.getMinimumHeight(r4)
            int r3 = r3 - r0
            goto L37
        L34:
            int r2 = r2 + 1
            goto Ld
        L37:
            int r0 = r9.getTopInset()
            int r3 = r3 - r0
            int r0 = java.lang.Math.max(r1, r3)
            r9.totalScrollRange = r0
            return r0
    }

    int getUpNestedPreScrollRange() {
            r1 = this;
            int r0 = r1.getTotalScrollRange()
            return r0
    }

    boolean hasChildWithInterpolator() {
            r1 = this;
            boolean r0 = r1.haveChildWithInterpolator
            return r0
    }

    boolean hasScrollableChildren() {
            r1 = this;
            int r0 = r1.getTotalScrollRange()
            if (r0 == 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public boolean isLiftOnScroll() {
            r1 = this;
            boolean r0 = r1.liftOnScroll
            return r0
    }

    @Override
    protected int[] onCreateDrawableState(int r4) {
            r3 = this;
            int[] r0 = r3.tmpStatesArray
            if (r0 != 0) goto L9
            r0 = 4
            int[] r0 = new int[r0]
            r3.tmpStatesArray = r0
        L9:
            int[] r0 = r3.tmpStatesArray
            int r1 = r0.length
            int r4 = r4 + r1
            int[] r4 = super.onCreateDrawableState(r4)
            r1 = 0
            boolean r2 = r3.liftable
            if (r2 == 0) goto L19
            int r2 = android.support.design.R.attr.state_liftable
            goto L1c
        L19:
            int r2 = android.support.design.R.attr.state_liftable
            int r2 = -r2
        L1c:
            r0[r1] = r2
            r1 = 1
            boolean r2 = r3.liftable
            if (r2 == 0) goto L2a
            boolean r2 = r3.lifted
            if (r2 == 0) goto L2a
            int r2 = android.support.design.R.attr.state_lifted
            goto L2d
        L2a:
            int r2 = android.support.design.R.attr.state_lifted
            int r2 = -r2
        L2d:
            r0[r1] = r2
            r1 = 2
            boolean r2 = r3.liftable
            if (r2 == 0) goto L37
            int r2 = android.support.design.R.attr.state_collapsible
            goto L3a
        L37:
            int r2 = android.support.design.R.attr.state_collapsible
            int r2 = -r2
        L3a:
            r0[r1] = r2
            r1 = 3
            boolean r2 = r3.liftable
            if (r2 == 0) goto L48
            boolean r2 = r3.lifted
            if (r2 == 0) goto L48
            int r2 = android.support.design.R.attr.state_collapsed
            goto L4b
        L48:
            int r2 = android.support.design.R.attr.state_collapsed
            int r2 = -r2
        L4b:
            r0[r1] = r2
            int[] r4 = mergeDrawableStates(r4, r0)
            return r4
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            super.onLayout(r1, r2, r3, r4, r5)
            r0.invalidateScrollRanges()
            r1 = 0
            r0.haveChildWithInterpolator = r1
            int r2 = r0.getChildCount()
            r3 = r1
        Le:
            r4 = 1
            if (r3 >= r2) goto L27
            android.view.View r5 = r0.getChildAt(r3)
            android.view.ViewGroup$LayoutParams r5 = r5.getLayoutParams()
            android.support.design.widget.AppBarLayout$LayoutParams r5 = (android.support.design.widget.AppBarLayout.LayoutParams) r5
            android.view.animation.Interpolator r5 = r5.getScrollInterpolator()
            if (r5 == 0) goto L24
            r0.haveChildWithInterpolator = r4
            goto L27
        L24:
            int r3 = r3 + 1
            goto Le
        L27:
            boolean r2 = r0.liftableOverride
            if (r2 != 0) goto L39
            boolean r2 = r0.liftOnScroll
            if (r2 != 0) goto L35
            boolean r2 = r0.hasCollapsibleChild()
            if (r2 == 0) goto L36
        L35:
            r1 = r4
        L36:
            r0.setLiftableState(r1)
        L39:
            return
    }

    @Override
    protected void onMeasure(int r1, int r2) {
            r0 = this;
            super.onMeasure(r1, r2)
            r0.invalidateScrollRanges()
            return
    }

    android.support.v4.view.WindowInsetsCompat onWindowInsetChanged(android.support.v4.view.WindowInsetsCompat r3) {
            r2 = this;
            boolean r0 = android.support.v4.view.ViewCompat.getFitsSystemWindows(r2)
            if (r0 == 0) goto L8
            r0 = r3
            goto L9
        L8:
            r0 = 0
        L9:
            android.support.v4.view.WindowInsetsCompat r1 = r2.lastInsets
            boolean r1 = android.support.v4.util.ObjectsCompat.equals(r1, r0)
            if (r1 != 0) goto L16
            r2.lastInsets = r0
            r2.invalidateScrollRanges()
        L16:
            return r3
    }

    public void removeOnOffsetChangedListener(android.support.design.widget.AppBarLayout.BaseOnOffsetChangedListener r2) {
            r1 = this;
            java.util.List<android.support.design.widget.AppBarLayout$BaseOnOffsetChangedListener> r0 = r1.listeners
            if (r0 == 0) goto L9
            if (r2 == 0) goto L9
            r0.remove(r2)
        L9:
            return
    }

    public void removeOnOffsetChangedListener(android.support.design.widget.AppBarLayout.OnOffsetChangedListener r1) {
            r0 = this;
            r0.removeOnOffsetChangedListener(r1)
            return
    }

    void resetPendingAction() {
            r1 = this;
            r0 = 0
            r1.pendingAction = r0
            return
    }

    public void setExpanded(boolean r2) {
            r1 = this;
            boolean r0 = android.support.v4.view.ViewCompat.isLaidOut(r1)
            r1.setExpanded(r2, r0)
            return
    }

    public void setExpanded(boolean r2, boolean r3) {
            r1 = this;
            r0 = 1
            r1.setExpanded(r2, r3, r0)
            return
    }

    public void setLiftOnScroll(boolean r1) {
            r0 = this;
            r0.liftOnScroll = r1
            return
    }

    public boolean setLiftable(boolean r2) {
            r1 = this;
            r0 = 1
            r1.liftableOverride = r0
            boolean r2 = r1.setLiftableState(r2)
            return r2
    }

    public boolean setLifted(boolean r1) {
            r0 = this;
            boolean r1 = r0.setLiftedState(r1)
            return r1
    }

    boolean setLiftedState(boolean r2) {
            r1 = this;
            boolean r0 = r1.lifted
            if (r0 == r2) goto Lb
            r1.lifted = r2
            r1.refreshDrawableState()
            r2 = 1
            return r2
        Lb:
            r2 = 0
            return r2
    }

    @Override
    public void setOrientation(int r2) {
            r1 = this;
            r0 = 1
            if (r2 != r0) goto L7
            super.setOrientation(r2)
            return
        L7:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "AppBarLayout is always vertical and does not support horizontal orientation"
            r2.<init>(r0)
            throw r2
    }

    @java.lang.Deprecated
    public void setTargetElevation(float r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L9
            android.support.design.widget.ViewUtilsLollipop.setDefaultAppBarLayoutStateListAnimator(r2, r3)
        L9:
            return
    }
}
