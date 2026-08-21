package android.support.v7.widget;

public class ActionBarOverlayLayout extends android.view.ViewGroup implements android.support.v7.widget.DecorContentParent, android.support.v4.view.NestedScrollingParent {
    private static final int ACTION_BAR_ANIMATE_DELAY = 600;
    static final int[] ATTRS = null;
    private static final java.lang.String TAG = "ActionBarOverlayLayout";
    private int mActionBarHeight;
    android.support.v7.widget.ActionBarContainer mActionBarTop;
    private android.support.v7.widget.ActionBarOverlayLayout.ActionBarVisibilityCallback mActionBarVisibilityCallback;
    private final java.lang.Runnable mAddActionBarHideOffset;
    boolean mAnimatingForFling;
    private final android.graphics.Rect mBaseContentInsets;
    private final android.graphics.Rect mBaseInnerInsets;
    private android.support.v7.widget.ContentFrameLayout mContent;
    private final android.graphics.Rect mContentInsets;
    android.view.ViewPropertyAnimator mCurrentActionBarTopAnimator;
    private android.support.v7.widget.DecorToolbar mDecorToolbar;
    private android.widget.OverScroller mFlingEstimator;
    private boolean mHasNonEmbeddedTabs;
    private boolean mHideOnContentScroll;
    private int mHideOnContentScrollReference;
    private boolean mIgnoreWindowContentOverlay;
    private final android.graphics.Rect mInnerInsets;
    private final android.graphics.Rect mLastBaseContentInsets;
    private final android.graphics.Rect mLastBaseInnerInsets;
    private final android.graphics.Rect mLastInnerInsets;
    private int mLastSystemUiVisibility;
    private boolean mOverlayMode;
    private final android.support.v4.view.NestedScrollingParentHelper mParentHelper;
    private final java.lang.Runnable mRemoveActionBarHideOffset;
    final android.animation.AnimatorListenerAdapter mTopAnimatorListener;
    private android.graphics.drawable.Drawable mWindowContentOverlay;
    private int mWindowVisibility;




    public interface ActionBarVisibilityCallback {
        void enableContentAnimations(boolean r1);

        void hideForSystem();

        void onContentScrollStarted();

        void onContentScrollStopped();

        void onWindowVisibilityChanged(int r1);

        void showForSystem();
    }

    public static class LayoutParams extends android.view.ViewGroup.MarginLayoutParams {
        public LayoutParams(int r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public LayoutParams(android.content.Context r1, android.util.AttributeSet r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public LayoutParams(android.view.ViewGroup.LayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public LayoutParams(android.view.ViewGroup.MarginLayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    static {
            r0 = 2
            int[] r0 = new int[r0]
            int r1 = android.support.v7.appcompat.R.attr.actionBarSize
            r2 = 0
            r0[r2] = r1
            r1 = 1
            r2 = 16842841(0x1010059, float:2.3693807E-38)
            r0[r1] = r2
            android.support.v7.widget.ActionBarOverlayLayout.ATTRS = r0
            return
    }

    public ActionBarOverlayLayout(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ActionBarOverlayLayout(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r2 = 0
            r0.mWindowVisibility = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r0.mBaseContentInsets = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r0.mLastBaseContentInsets = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r0.mContentInsets = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r0.mBaseInnerInsets = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r0.mLastBaseInnerInsets = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r0.mInnerInsets = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r0.mLastInnerInsets = r2
            android.support.v7.widget.ActionBarOverlayLayout$1 r2 = new android.support.v7.widget.ActionBarOverlayLayout$1
            r2.<init>(r0)
            r0.mTopAnimatorListener = r2
            android.support.v7.widget.ActionBarOverlayLayout$2 r2 = new android.support.v7.widget.ActionBarOverlayLayout$2
            r2.<init>(r0)
            r0.mRemoveActionBarHideOffset = r2
            android.support.v7.widget.ActionBarOverlayLayout$3 r2 = new android.support.v7.widget.ActionBarOverlayLayout$3
            r2.<init>(r0)
            r0.mAddActionBarHideOffset = r2
            r0.init(r1)
            android.support.v4.view.NestedScrollingParentHelper r1 = new android.support.v4.view.NestedScrollingParentHelper
            r1.<init>(r0)
            r0.mParentHelper = r1
            return
    }

    private void addActionBarHideOffset() {
            r1 = this;
            r1.haltActionBarHideOffsetAnimations()
            java.lang.Runnable r0 = r1.mAddActionBarHideOffset
            r0.run()
            return
    }

    private boolean applyInsets(android.view.View r3, android.graphics.Rect r4, boolean r5, boolean r6, boolean r7, boolean r8) {
            r2 = this;
            android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
            android.support.v7.widget.ActionBarOverlayLayout$LayoutParams r3 = (android.support.v7.widget.ActionBarOverlayLayout.LayoutParams) r3
            r0 = 1
            if (r5 == 0) goto L15
            int r5 = r3.leftMargin
            int r1 = r4.left
            if (r5 == r1) goto L15
            int r5 = r4.left
            r3.leftMargin = r5
            r5 = r0
            goto L16
        L15:
            r5 = 0
        L16:
            if (r6 == 0) goto L23
            int r6 = r3.topMargin
            int r1 = r4.top
            if (r6 == r1) goto L23
            int r5 = r4.top
            r3.topMargin = r5
            r5 = r0
        L23:
            if (r8 == 0) goto L30
            int r6 = r3.rightMargin
            int r8 = r4.right
            if (r6 == r8) goto L30
            int r5 = r4.right
            r3.rightMargin = r5
            r5 = r0
        L30:
            if (r7 == 0) goto L3d
            int r6 = r3.bottomMargin
            int r7 = r4.bottom
            if (r6 == r7) goto L3d
            int r4 = r4.bottom
            r3.bottomMargin = r4
            goto L3e
        L3d:
            r0 = r5
        L3e:
            return r0
    }

    private android.support.v7.widget.DecorToolbar getDecorToolbar(android.view.View r4) {
            r3 = this;
            boolean r0 = r4 instanceof android.support.v7.widget.DecorToolbar
            if (r0 == 0) goto L7
            android.support.v7.widget.DecorToolbar r4 = (android.support.v7.widget.DecorToolbar) r4
            return r4
        L7:
            boolean r0 = r4 instanceof android.support.v7.widget.Toolbar
            if (r0 == 0) goto L12
            android.support.v7.widget.Toolbar r4 = (android.support.v7.widget.Toolbar) r4
            android.support.v7.widget.DecorToolbar r4 = r4.getWrapper()
            return r4
        L12:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Can't make a decor toolbar out of "
            r1.append(r2)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getSimpleName()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    private void init(android.content.Context r5) {
            r4 = this;
            android.content.Context r0 = r4.getContext()
            android.content.res.Resources$Theme r0 = r0.getTheme()
            int[] r1 = android.support.v7.widget.ActionBarOverlayLayout.ATTRS
            android.content.res.TypedArray r0 = r0.obtainStyledAttributes(r1)
            r1 = 0
            int r2 = r0.getDimensionPixelSize(r1, r1)
            r4.mActionBarHeight = r2
            r2 = 1
            android.graphics.drawable.Drawable r3 = r0.getDrawable(r2)
            r4.mWindowContentOverlay = r3
            if (r3 != 0) goto L20
            r3 = r2
            goto L21
        L20:
            r3 = r1
        L21:
            r4.setWillNotDraw(r3)
            r0.recycle()
            android.content.pm.ApplicationInfo r0 = r5.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            r3 = 19
            if (r0 >= r3) goto L32
            r1 = r2
        L32:
            r4.mIgnoreWindowContentOverlay = r1
            android.widget.OverScroller r0 = new android.widget.OverScroller
            r0.<init>(r5)
            r4.mFlingEstimator = r0
            return
    }

    private void postAddActionBarHideOffset() {
            r3 = this;
            r3.haltActionBarHideOffsetAnimations()
            java.lang.Runnable r0 = r3.mAddActionBarHideOffset
            r1 = 600(0x258, double:2.964E-321)
            r3.postDelayed(r0, r1)
            return
    }

    private void postRemoveActionBarHideOffset() {
            r3 = this;
            r3.haltActionBarHideOffsetAnimations()
            java.lang.Runnable r0 = r3.mRemoveActionBarHideOffset
            r1 = 600(0x258, double:2.964E-321)
            r3.postDelayed(r0, r1)
            return
    }

    private void removeActionBarHideOffset() {
            r1 = this;
            r1.haltActionBarHideOffsetAnimations()
            java.lang.Runnable r0 = r1.mRemoveActionBarHideOffset
            r0.run()
            return
    }

    private boolean shouldHideActionBarOnFling(float r10, float r11) {
            r9 = this;
            android.widget.OverScroller r0 = r9.mFlingEstimator
            int r4 = (int) r11
            r1 = 0
            r2 = 0
            r3 = 0
            r5 = 0
            r6 = 0
            r7 = -2147483648(0xffffffff80000000, float:-0.0)
            r8 = 2147483647(0x7fffffff, float:NaN)
            r0.fling(r1, r2, r3, r4, r5, r6, r7, r8)
            android.widget.OverScroller r10 = r9.mFlingEstimator
            int r10 = r10.getFinalY()
            android.support.v7.widget.ActionBarContainer r11 = r9.mActionBarTop
            int r11 = r11.getHeight()
            if (r10 <= r11) goto L20
            r10 = 1
            goto L21
        L20:
            r10 = 0
        L21:
            return r10
    }

    @Override
    public boolean canShowOverflowMenu() {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            boolean r0 = r0.canShowOverflowMenu()
            return r0
    }

    @Override
    protected boolean checkLayoutParams(android.view.ViewGroup.LayoutParams r1) {
            r0 = this;
            boolean r1 = r1 instanceof android.support.v7.widget.ActionBarOverlayLayout.LayoutParams
            return r1
    }

    @Override
    public void dismissPopups() {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.dismissPopupMenus()
            return
    }

    @Override
    public void draw(android.graphics.Canvas r6) {
            r5 = this;
            super.draw(r6)
            android.graphics.drawable.Drawable r0 = r5.mWindowContentOverlay
            if (r0 == 0) goto L3d
            boolean r0 = r5.mIgnoreWindowContentOverlay
            if (r0 != 0) goto L3d
            android.support.v7.widget.ActionBarContainer r0 = r5.mActionBarTop
            int r0 = r0.getVisibility()
            r1 = 0
            if (r0 != 0) goto L27
            android.support.v7.widget.ActionBarContainer r0 = r5.mActionBarTop
            int r0 = r0.getBottom()
            float r0 = (float) r0
            android.support.v7.widget.ActionBarContainer r2 = r5.mActionBarTop
            float r2 = r2.getTranslationY()
            float r0 = r0 + r2
            r2 = 1056964608(0x3f000000, float:0.5)
            float r0 = r0 + r2
            int r0 = (int) r0
            goto L28
        L27:
            r0 = r1
        L28:
            android.graphics.drawable.Drawable r2 = r5.mWindowContentOverlay
            int r3 = r5.getWidth()
            android.graphics.drawable.Drawable r4 = r5.mWindowContentOverlay
            int r4 = r4.getIntrinsicHeight()
            int r4 = r4 + r0
            r2.setBounds(r1, r0, r3, r4)
            android.graphics.drawable.Drawable r0 = r5.mWindowContentOverlay
            r0.draw(r6)
        L3d:
            return
    }

    @Override
    protected boolean fitSystemWindows(android.graphics.Rect r9) {
            r8 = this;
            r8.pullChildren()
            int r0 = android.support.v4.view.ViewCompat.getWindowSystemUiVisibility(r8)
            r0 = r0 & 256(0x100, float:3.59E-43)
            android.support.v7.widget.ActionBarContainer r2 = r8.mActionBarTop
            r4 = 1
            r5 = 1
            r6 = 0
            r7 = 1
            r1 = r8
            r3 = r9
            boolean r0 = r1.applyInsets(r2, r3, r4, r5, r6, r7)
            android.graphics.Rect r1 = r8.mBaseInnerInsets
            r1.set(r9)
            android.graphics.Rect r9 = r8.mBaseInnerInsets
            android.graphics.Rect r1 = r8.mBaseContentInsets
            android.support.v7.widget.ViewUtils.computeFitSystemWindows(r8, r9, r1)
            android.graphics.Rect r9 = r8.mLastBaseInnerInsets
            android.graphics.Rect r1 = r8.mBaseInnerInsets
            boolean r9 = r9.equals(r1)
            r1 = 1
            if (r9 != 0) goto L34
            android.graphics.Rect r9 = r8.mLastBaseInnerInsets
            android.graphics.Rect r0 = r8.mBaseInnerInsets
            r9.set(r0)
            r0 = r1
        L34:
            android.graphics.Rect r9 = r8.mLastBaseContentInsets
            android.graphics.Rect r2 = r8.mBaseContentInsets
            boolean r9 = r9.equals(r2)
            if (r9 != 0) goto L46
            android.graphics.Rect r9 = r8.mLastBaseContentInsets
            android.graphics.Rect r0 = r8.mBaseContentInsets
            r9.set(r0)
            r0 = r1
        L46:
            if (r0 == 0) goto L4b
            r8.requestLayout()
        L4b:
            return r1
    }

    @Override
    protected android.support.v7.widget.ActionBarOverlayLayout.LayoutParams generateDefaultLayoutParams() {
            r2 = this;
            android.support.v7.widget.ActionBarOverlayLayout$LayoutParams r0 = new android.support.v7.widget.ActionBarOverlayLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            return r0
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateDefaultLayoutParams() {
            r1 = this;
            android.support.v7.widget.ActionBarOverlayLayout$LayoutParams r0 = r1.generateDefaultLayoutParams()
            return r0
    }

    @Override
    public android.support.v7.widget.ActionBarOverlayLayout.LayoutParams generateLayoutParams(android.util.AttributeSet r3) {
            r2 = this;
            android.support.v7.widget.ActionBarOverlayLayout$LayoutParams r0 = new android.support.v7.widget.ActionBarOverlayLayout$LayoutParams
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1, r3)
            return r0
    }

    @Override
    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet r1) {
            r0 = this;
            android.support.v7.widget.ActionBarOverlayLayout$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r2) {
            r1 = this;
            android.support.v7.widget.ActionBarOverlayLayout$LayoutParams r0 = new android.support.v7.widget.ActionBarOverlayLayout$LayoutParams
            r0.<init>(r2)
            return r0
    }

    public int getActionBarHideOffset() {
            r1 = this;
            android.support.v7.widget.ActionBarContainer r0 = r1.mActionBarTop
            if (r0 == 0) goto Lb
            float r0 = r0.getTranslationY()
            int r0 = (int) r0
            int r0 = -r0
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    @Override
    public int getNestedScrollAxes() {
            r1 = this;
            android.support.v4.view.NestedScrollingParentHelper r0 = r1.mParentHelper
            int r0 = r0.getNestedScrollAxes()
            return r0
    }

    @Override
    public java.lang.CharSequence getTitle() {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            java.lang.CharSequence r0 = r0.getTitle()
            return r0
    }

    void haltActionBarHideOffsetAnimations() {
            r1 = this;
            java.lang.Runnable r0 = r1.mRemoveActionBarHideOffset
            r1.removeCallbacks(r0)
            java.lang.Runnable r0 = r1.mAddActionBarHideOffset
            r1.removeCallbacks(r0)
            android.view.ViewPropertyAnimator r0 = r1.mCurrentActionBarTopAnimator
            if (r0 == 0) goto L11
            r0.cancel()
        L11:
            return
    }

    @Override
    public boolean hasIcon() {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            boolean r0 = r0.hasIcon()
            return r0
    }

    @Override
    public boolean hasLogo() {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            boolean r0 = r0.hasLogo()
            return r0
    }

    @Override
    public boolean hideOverflowMenu() {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            boolean r0 = r0.hideOverflowMenu()
            return r0
    }

    @Override
    public void initFeature(int r2) {
            r1 = this;
            r1.pullChildren()
            r0 = 2
            if (r2 == r0) goto L19
            r0 = 5
            if (r2 == r0) goto L13
            r0 = 109(0x6d, float:1.53E-43)
            if (r2 == r0) goto Le
            goto L1e
        Le:
            r2 = 1
            r1.setOverlayMode(r2)
            goto L1e
        L13:
            android.support.v7.widget.DecorToolbar r2 = r1.mDecorToolbar
            r2.initIndeterminateProgress()
            goto L1e
        L19:
            android.support.v7.widget.DecorToolbar r2 = r1.mDecorToolbar
            r2.initProgress()
        L1e:
            return
    }

    public boolean isHideOnContentScrollEnabled() {
            r1 = this;
            boolean r0 = r1.mHideOnContentScroll
            return r0
    }

    public boolean isInOverlayMode() {
            r1 = this;
            boolean r0 = r1.mOverlayMode
            return r0
    }

    @Override
    public boolean isOverflowMenuShowPending() {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            boolean r0 = r0.isOverflowMenuShowPending()
            return r0
    }

    @Override
    public boolean isOverflowMenuShowing() {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            boolean r0 = r0.isOverflowMenuShowing()
            return r0
    }

    @Override
    protected void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            android.content.Context r1 = r0.getContext()
            r0.init(r1)
            android.support.v4.view.ViewCompat.requestApplyInsets(r0)
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            r0.haltActionBarHideOffsetAnimations()
            return
    }

    @Override
    protected void onLayout(boolean r5, int r6, int r7, int r8, int r9) {
            r4 = this;
            int r5 = r4.getChildCount()
            int r6 = r4.getPaddingLeft()
            r4.getPaddingRight()
            int r7 = r4.getPaddingTop()
            r4.getPaddingBottom()
            r8 = 0
        L13:
            if (r8 >= r5) goto L3d
            android.view.View r9 = r4.getChildAt(r8)
            int r0 = r9.getVisibility()
            r1 = 8
            if (r0 == r1) goto L3a
            android.view.ViewGroup$LayoutParams r0 = r9.getLayoutParams()
            android.support.v7.widget.ActionBarOverlayLayout$LayoutParams r0 = (android.support.v7.widget.ActionBarOverlayLayout.LayoutParams) r0
            int r1 = r9.getMeasuredWidth()
            int r2 = r9.getMeasuredHeight()
            int r3 = r0.leftMargin
            int r3 = r3 + r6
            int r0 = r0.topMargin
            int r0 = r0 + r7
            int r1 = r1 + r3
            int r2 = r2 + r0
            r9.layout(r3, r0, r1, r2)
        L3a:
            int r8 = r8 + 1
            goto L13
        L3d:
            return
    }

    @Override
    protected void onMeasure(int r14, int r15) {
            r13 = this;
            r13.pullChildren()
            android.support.v7.widget.ActionBarContainer r1 = r13.mActionBarTop
            r3 = 0
            r5 = 0
            r0 = r13
            r2 = r14
            r4 = r15
            r0.measureChildWithMargins(r1, r2, r3, r4, r5)
            android.support.v7.widget.ActionBarContainer r0 = r13.mActionBarTop
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.support.v7.widget.ActionBarOverlayLayout$LayoutParams r0 = (android.support.v7.widget.ActionBarOverlayLayout.LayoutParams) r0
            android.support.v7.widget.ActionBarContainer r1 = r13.mActionBarTop
            int r1 = r1.getMeasuredWidth()
            int r2 = r0.leftMargin
            int r1 = r1 + r2
            int r2 = r0.rightMargin
            int r1 = r1 + r2
            r2 = 0
            int r1 = java.lang.Math.max(r2, r1)
            android.support.v7.widget.ActionBarContainer r3 = r13.mActionBarTop
            int r3 = r3.getMeasuredHeight()
            int r4 = r0.topMargin
            int r3 = r3 + r4
            int r0 = r0.bottomMargin
            int r3 = r3 + r0
            int r0 = java.lang.Math.max(r2, r3)
            android.support.v7.widget.ActionBarContainer r3 = r13.mActionBarTop
            int r3 = r3.getMeasuredState()
            int r3 = android.view.View.combineMeasuredStates(r2, r3)
            int r4 = android.support.v4.view.ViewCompat.getWindowSystemUiVisibility(r13)
            r4 = r4 & 256(0x100, float:3.59E-43)
            if (r4 == 0) goto L4a
            r4 = 1
            goto L4b
        L4a:
            r4 = r2
        L4b:
            if (r4 == 0) goto L5f
            int r5 = r13.mActionBarHeight
            boolean r6 = r13.mHasNonEmbeddedTabs
            if (r6 == 0) goto L71
            android.support.v7.widget.ActionBarContainer r6 = r13.mActionBarTop
            android.view.View r6 = r6.getTabContainer()
            if (r6 == 0) goto L71
            int r6 = r13.mActionBarHeight
            int r5 = r5 + r6
            goto L71
        L5f:
            android.support.v7.widget.ActionBarContainer r5 = r13.mActionBarTop
            int r5 = r5.getVisibility()
            r6 = 8
            if (r5 == r6) goto L70
            android.support.v7.widget.ActionBarContainer r5 = r13.mActionBarTop
            int r5 = r5.getMeasuredHeight()
            goto L71
        L70:
            r5 = r2
        L71:
            android.graphics.Rect r6 = r13.mContentInsets
            android.graphics.Rect r7 = r13.mBaseContentInsets
            r6.set(r7)
            android.graphics.Rect r6 = r13.mInnerInsets
            android.graphics.Rect r7 = r13.mBaseInnerInsets
            r6.set(r7)
            boolean r6 = r13.mOverlayMode
            if (r6 != 0) goto L94
            if (r4 != 0) goto L94
            android.graphics.Rect r4 = r13.mContentInsets
            int r6 = r4.top
            int r6 = r6 + r5
            r4.top = r6
            android.graphics.Rect r4 = r13.mContentInsets
            int r5 = r4.bottom
            int r5 = r5 + r2
            r4.bottom = r5
            goto La2
        L94:
            android.graphics.Rect r4 = r13.mInnerInsets
            int r6 = r4.top
            int r6 = r6 + r5
            r4.top = r6
            android.graphics.Rect r4 = r13.mInnerInsets
            int r5 = r4.bottom
            int r5 = r5 + r2
            r4.bottom = r5
        La2:
            android.support.v7.widget.ContentFrameLayout r7 = r13.mContent
            android.graphics.Rect r8 = r13.mContentInsets
            r9 = 1
            r10 = 1
            r11 = 1
            r12 = 1
            r6 = r13
            r6.applyInsets(r7, r8, r9, r10, r11, r12)
            android.graphics.Rect r2 = r13.mLastInnerInsets
            android.graphics.Rect r4 = r13.mInnerInsets
            boolean r2 = r2.equals(r4)
            if (r2 != 0) goto Lc6
            android.graphics.Rect r2 = r13.mLastInnerInsets
            android.graphics.Rect r4 = r13.mInnerInsets
            r2.set(r4)
            android.support.v7.widget.ContentFrameLayout r2 = r13.mContent
            android.graphics.Rect r4 = r13.mInnerInsets
            r2.dispatchFitSystemWindows(r4)
        Lc6:
            android.support.v7.widget.ContentFrameLayout r6 = r13.mContent
            r8 = 0
            r10 = 0
            r5 = r13
            r7 = r14
            r9 = r15
            r5.measureChildWithMargins(r6, r7, r8, r9, r10)
            android.support.v7.widget.ContentFrameLayout r2 = r13.mContent
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            android.support.v7.widget.ActionBarOverlayLayout$LayoutParams r2 = (android.support.v7.widget.ActionBarOverlayLayout.LayoutParams) r2
            android.support.v7.widget.ContentFrameLayout r4 = r13.mContent
            int r4 = r4.getMeasuredWidth()
            int r5 = r2.leftMargin
            int r4 = r4 + r5
            int r5 = r2.rightMargin
            int r4 = r4 + r5
            int r1 = java.lang.Math.max(r1, r4)
            android.support.v7.widget.ContentFrameLayout r4 = r13.mContent
            int r4 = r4.getMeasuredHeight()
            int r5 = r2.topMargin
            int r4 = r4 + r5
            int r2 = r2.bottomMargin
            int r4 = r4 + r2
            int r0 = java.lang.Math.max(r0, r4)
            android.support.v7.widget.ContentFrameLayout r2 = r13.mContent
            int r2 = r2.getMeasuredState()
            int r2 = android.view.View.combineMeasuredStates(r3, r2)
            int r3 = r13.getPaddingLeft()
            int r4 = r13.getPaddingRight()
            int r3 = r3 + r4
            int r1 = r1 + r3
            int r3 = r13.getPaddingTop()
            int r4 = r13.getPaddingBottom()
            int r3 = r3 + r4
            int r0 = r0 + r3
            int r3 = r13.getSuggestedMinimumHeight()
            int r0 = java.lang.Math.max(r0, r3)
            int r3 = r13.getSuggestedMinimumWidth()
            int r1 = java.lang.Math.max(r1, r3)
            int r14 = android.view.View.resolveSizeAndState(r1, r14, r2)
            int r1 = r2 << 16
            int r15 = android.view.View.resolveSizeAndState(r0, r15, r1)
            r13.setMeasuredDimension(r14, r15)
            return
    }

    @Override
    public boolean onNestedFling(android.view.View r1, float r2, float r3, boolean r4) {
            r0 = this;
            boolean r1 = r0.mHideOnContentScroll
            if (r1 == 0) goto L18
            if (r4 != 0) goto L7
            goto L18
        L7:
            boolean r1 = r0.shouldHideActionBarOnFling(r2, r3)
            if (r1 == 0) goto L11
            r0.addActionBarHideOffset()
            goto L14
        L11:
            r0.removeActionBarHideOffset()
        L14:
            r1 = 1
            r0.mAnimatingForFling = r1
            return r1
        L18:
            r1 = 0
            return r1
    }

    @Override
    public boolean onNestedPreFling(android.view.View r1, float r2, float r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void onNestedPreScroll(android.view.View r1, int r2, int r3, int[] r4) {
            r0 = this;
            return
    }

    @Override
    public void onNestedScroll(android.view.View r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            int r1 = r0.mHideOnContentScrollReference
            int r1 = r1 + r3
            r0.mHideOnContentScrollReference = r1
            r0.setActionBarHideOffset(r1)
            return
    }

    @Override
    public void onNestedScrollAccepted(android.view.View r2, android.view.View r3, int r4) {
            r1 = this;
            android.support.v4.view.NestedScrollingParentHelper r0 = r1.mParentHelper
            r0.onNestedScrollAccepted(r2, r3, r4)
            int r2 = r1.getActionBarHideOffset()
            r1.mHideOnContentScrollReference = r2
            r1.haltActionBarHideOffsetAnimations()
            android.support.v7.widget.ActionBarOverlayLayout$ActionBarVisibilityCallback r2 = r1.mActionBarVisibilityCallback
            if (r2 == 0) goto L15
            r2.onContentScrollStarted()
        L15:
            return
    }

    @Override
    public boolean onStartNestedScroll(android.view.View r1, android.view.View r2, int r3) {
            r0 = this;
            r1 = r3 & 2
            if (r1 == 0) goto L10
            android.support.v7.widget.ActionBarContainer r1 = r0.mActionBarTop
            int r1 = r1.getVisibility()
            if (r1 == 0) goto Ld
            goto L10
        Ld:
            boolean r1 = r0.mHideOnContentScroll
            return r1
        L10:
            r1 = 0
            return r1
    }

    @Override
    public void onStopNestedScroll(android.view.View r2) {
            r1 = this;
            boolean r2 = r1.mHideOnContentScroll
            if (r2 == 0) goto L19
            boolean r2 = r1.mAnimatingForFling
            if (r2 != 0) goto L19
            int r2 = r1.mHideOnContentScrollReference
            android.support.v7.widget.ActionBarContainer r0 = r1.mActionBarTop
            int r0 = r0.getHeight()
            if (r2 > r0) goto L16
            r1.postRemoveActionBarHideOffset()
            goto L19
        L16:
            r1.postAddActionBarHideOffset()
        L19:
            android.support.v7.widget.ActionBarOverlayLayout$ActionBarVisibilityCallback r2 = r1.mActionBarVisibilityCallback
            if (r2 == 0) goto L20
            r2.onContentScrollStopped()
        L20:
            return
    }

    @Override
    public void onWindowSystemUiVisibilityChanged(int r5) {
            r4 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L9
            super.onWindowSystemUiVisibilityChanged(r5)
        L9:
            r4.pullChildren()
            int r0 = r4.mLastSystemUiVisibility
            r0 = r0 ^ r5
            r4.mLastSystemUiVisibility = r5
            r1 = r5 & 4
            r2 = 0
            r3 = 1
            if (r1 != 0) goto L19
            r1 = r3
            goto L1a
        L19:
            r1 = r2
        L1a:
            r5 = r5 & 256(0x100, float:3.59E-43)
            if (r5 == 0) goto L1f
            r2 = r3
        L1f:
            android.support.v7.widget.ActionBarOverlayLayout$ActionBarVisibilityCallback r5 = r4.mActionBarVisibilityCallback
            if (r5 == 0) goto L38
            r3 = r2 ^ 1
            r5.enableContentAnimations(r3)
            if (r1 != 0) goto L33
            if (r2 != 0) goto L2d
            goto L33
        L2d:
            android.support.v7.widget.ActionBarOverlayLayout$ActionBarVisibilityCallback r5 = r4.mActionBarVisibilityCallback
            r5.hideForSystem()
            goto L38
        L33:
            android.support.v7.widget.ActionBarOverlayLayout$ActionBarVisibilityCallback r5 = r4.mActionBarVisibilityCallback
            r5.showForSystem()
        L38:
            r5 = r0 & 256(0x100, float:3.59E-43)
            if (r5 == 0) goto L43
            android.support.v7.widget.ActionBarOverlayLayout$ActionBarVisibilityCallback r5 = r4.mActionBarVisibilityCallback
            if (r5 == 0) goto L43
            android.support.v4.view.ViewCompat.requestApplyInsets(r4)
        L43:
            return
    }

    @Override
    protected void onWindowVisibilityChanged(int r2) {
            r1 = this;
            super.onWindowVisibilityChanged(r2)
            r1.mWindowVisibility = r2
            android.support.v7.widget.ActionBarOverlayLayout$ActionBarVisibilityCallback r0 = r1.mActionBarVisibilityCallback
            if (r0 == 0) goto Lc
            r0.onWindowVisibilityChanged(r2)
        Lc:
            return
    }

    void pullChildren() {
            r1 = this;
            android.support.v7.widget.ContentFrameLayout r0 = r1.mContent
            if (r0 != 0) goto L24
            int r0 = android.support.v7.appcompat.R.id.action_bar_activity_content
            android.view.View r0 = r1.findViewById(r0)
            android.support.v7.widget.ContentFrameLayout r0 = (android.support.v7.widget.ContentFrameLayout) r0
            r1.mContent = r0
            int r0 = android.support.v7.appcompat.R.id.action_bar_container
            android.view.View r0 = r1.findViewById(r0)
            android.support.v7.widget.ActionBarContainer r0 = (android.support.v7.widget.ActionBarContainer) r0
            r1.mActionBarTop = r0
            int r0 = android.support.v7.appcompat.R.id.action_bar
            android.view.View r0 = r1.findViewById(r0)
            android.support.v7.widget.DecorToolbar r0 = r1.getDecorToolbar(r0)
            r1.mDecorToolbar = r0
        L24:
            return
    }

    @Override
    public void restoreToolbarHierarchyState(android.util.SparseArray<android.os.Parcelable> r2) {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.restoreHierarchyState(r2)
            return
    }

    @Override
    public void saveToolbarHierarchyState(android.util.SparseArray<android.os.Parcelable> r2) {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.saveHierarchyState(r2)
            return
    }

    public void setActionBarHideOffset(int r2) {
            r1 = this;
            r1.haltActionBarHideOffsetAnimations()
            android.support.v7.widget.ActionBarContainer r0 = r1.mActionBarTop
            int r0 = r0.getHeight()
            int r2 = java.lang.Math.min(r2, r0)
            r0 = 0
            int r2 = java.lang.Math.max(r0, r2)
            android.support.v7.widget.ActionBarContainer r0 = r1.mActionBarTop
            int r2 = -r2
            float r2 = (float) r2
            r0.setTranslationY(r2)
            return
    }

    public void setActionBarVisibilityCallback(android.support.v7.widget.ActionBarOverlayLayout.ActionBarVisibilityCallback r2) {
            r1 = this;
            r1.mActionBarVisibilityCallback = r2
            android.os.IBinder r2 = r1.getWindowToken()
            if (r2 == 0) goto L19
            android.support.v7.widget.ActionBarOverlayLayout$ActionBarVisibilityCallback r2 = r1.mActionBarVisibilityCallback
            int r0 = r1.mWindowVisibility
            r2.onWindowVisibilityChanged(r0)
            int r2 = r1.mLastSystemUiVisibility
            if (r2 == 0) goto L19
            r1.onWindowSystemUiVisibilityChanged(r2)
            android.support.v4.view.ViewCompat.requestApplyInsets(r1)
        L19:
            return
    }

    public void setHasNonEmbeddedTabs(boolean r1) {
            r0 = this;
            r0.mHasNonEmbeddedTabs = r1
            return
    }

    public void setHideOnContentScrollEnabled(boolean r2) {
            r1 = this;
            boolean r0 = r1.mHideOnContentScroll
            if (r2 == r0) goto Lf
            r1.mHideOnContentScroll = r2
            if (r2 != 0) goto Lf
            r1.haltActionBarHideOffsetAnimations()
            r2 = 0
            r1.setActionBarHideOffset(r2)
        Lf:
            return
    }

    @Override
    public void setIcon(int r2) {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setIcon(r2)
            return
    }

    @Override
    public void setIcon(android.graphics.drawable.Drawable r2) {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setIcon(r2)
            return
    }

    @Override
    public void setLogo(int r2) {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setLogo(r2)
            return
    }

    @Override
    public void setMenu(android.view.Menu r2, android.support.v7.view.menu.MenuPresenter.Callback r3) {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setMenu(r2, r3)
            return
    }

    @Override
    public void setMenuPrepared() {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setMenuPrepared()
            return
    }

    public void setOverlayMode(boolean r2) {
            r1 = this;
            r1.mOverlayMode = r2
            if (r2 == 0) goto L14
            android.content.Context r2 = r1.getContext()
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()
            int r2 = r2.targetSdkVersion
            r0 = 19
            if (r2 >= r0) goto L14
            r2 = 1
            goto L15
        L14:
            r2 = 0
        L15:
            r1.mIgnoreWindowContentOverlay = r2
            return
    }

    public void setShowingForActionMode(boolean r1) {
            r0 = this;
            return
    }

    @Override
    public void setUiOptions(int r1) {
            r0 = this;
            return
    }

    @Override
    public void setWindowCallback(android.view.Window.Callback r2) {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setWindowCallback(r2)
            return
    }

    @Override
    public void setWindowTitle(java.lang.CharSequence r2) {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            r0.setWindowTitle(r2)
            return
    }

    @Override
    public boolean shouldDelayChildPressedState() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean showOverflowMenu() {
            r1 = this;
            r1.pullChildren()
            android.support.v7.widget.DecorToolbar r0 = r1.mDecorToolbar
            boolean r0 = r0.showOverflowMenu()
            return r0
    }
}
