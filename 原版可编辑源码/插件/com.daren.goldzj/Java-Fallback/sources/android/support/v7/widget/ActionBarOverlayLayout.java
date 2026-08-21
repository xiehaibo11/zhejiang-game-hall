package android.support.v7.widget;

import android.animation.AnimatorListenerAdapter;
import android.content.Context;
import android.content.res.Configuration;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Parcelable;
import android.support.annotation.RestrictTo;
import android.support.v4.view.NestedScrollingParent;
import android.support.v4.view.NestedScrollingParentHelper;
import android.support.v4.view.ViewCompat;
import android.support.v7.appcompat.R;
import android.support.v7.view.menu.MenuPresenter;
import android.support.v7.widget.ActivityChooserView;
import android.util.AttributeSet;
import android.util.SparseArray;
import android.view.Menu;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewPropertyAnimator;
import android.view.Window;
import android.widget.OverScroller;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class ActionBarOverlayLayout extends ViewGroup implements DecorContentParent, NestedScrollingParent {
    private static final int ACTION_BAR_ANIMATE_DELAY = 600;
    static final int[] ATTRS = null;
    private static final String TAG = "ActionBarOverlayLayout";
    private int mActionBarHeight;
    ActionBarContainer mActionBarTop;
    private ActionBarVisibilityCallback mActionBarVisibilityCallback;
    private final Runnable mAddActionBarHideOffset;
    boolean mAnimatingForFling;
    private final Rect mBaseContentInsets;
    private final Rect mBaseInnerInsets;
    private ContentFrameLayout mContent;
    private final Rect mContentInsets;
    ViewPropertyAnimator mCurrentActionBarTopAnimator;
    private DecorToolbar mDecorToolbar;
    private OverScroller mFlingEstimator;
    private boolean mHasNonEmbeddedTabs;
    private boolean mHideOnContentScroll;
    private int mHideOnContentScrollReference;
    private boolean mIgnoreWindowContentOverlay;
    private final Rect mInnerInsets;
    private final Rect mLastBaseContentInsets;
    private final Rect mLastBaseInnerInsets;
    private final Rect mLastInnerInsets;
    private int mLastSystemUiVisibility;
    private boolean mOverlayMode;
    private final NestedScrollingParentHelper mParentHelper;
    private final Runnable mRemoveActionBarHideOffset;
    final AnimatorListenerAdapter mTopAnimatorListener;
    private Drawable mWindowContentOverlay;
    private int mWindowVisibility;

    public interface ActionBarVisibilityCallback {
        void enableContentAnimations(boolean r1);

        void hideForSystem();

        void onContentScrollStarted();

        void onContentScrollStopped();

        void onWindowVisibilityChanged(int r1);

        void showForSystem();
    }

    public static class LayoutParams extends ViewGroup.MarginLayoutParams {
        public LayoutParams(Context r1, AttributeSet r2) {
            super(r1, r2);
        }

        public LayoutParams(int r1, int r2) {
            super(r1, r2);
        }

        public LayoutParams(ViewGroup.LayoutParams r1) {
            super(r1);
        }

        public LayoutParams(ViewGroup.MarginLayoutParams r1) {
            super(r1);
        }
    }

    @Override
    public boolean onNestedPreFling(View r1, float r2, float r3) {
        return false;
    }

    @Override
    public void onNestedPreScroll(View r1, int r2, int r3, int[] r4) {
    }

    public void setShowingForActionMode(boolean r1) {
    }

    @Override
    public void setUiOptions(int r1) {
    }

    @Override
    public boolean shouldDelayChildPressedState() {
        return false;
    }

    @Override
    protected ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return generateDefaultLayoutParams();
    }

    @Override
    public ViewGroup.LayoutParams generateLayoutParams(AttributeSet r1) {
        return generateLayoutParams(r1);
    }

    static {
        ATTRS = new int[]{R.attr.actionBarSize, android.R.attr.windowContentOverlay};
    }

    public ActionBarOverlayLayout(Context r2) {
        this(r2, null);
    }

    public ActionBarOverlayLayout(Context r1, AttributeSet r2) {
        super(r1, r2);
        this.mWindowVisibility = 0;
        this.mBaseContentInsets = new Rect();
        this.mLastBaseContentInsets = new Rect();
        this.mContentInsets = new Rect();
        this.mBaseInnerInsets = new Rect();
        this.mLastBaseInnerInsets = new Rect();
        this.mInnerInsets = new Rect();
        this.mLastInnerInsets = new Rect();
        this.mTopAnimatorListener = new 1(this);
        this.mRemoveActionBarHideOffset = new 2(this);
        this.mAddActionBarHideOffset = new 3(this);
        init(r1);
        this.mParentHelper = new NestedScrollingParentHelper(this);
    }

    private void init(Context r5) {
        TypedArray r0 = getContext().getTheme().obtainStyledAttributes(ATTRS);
        boolean r1 = false;
        this.mActionBarHeight = r0.getDimensionPixelSize(0, 0);
        this.mWindowContentOverlay = r0.getDrawable(1);
        if (this.mWindowContentOverlay != null) goto L5;
        boolean r3 = true;
    L6:
        setWillNotDraw(r3);
        r0.recycle();
        if (r5.getApplicationInfo().targetSdkVersion >= 19) goto L9;
        r1 = true;
    L9:
        this.mIgnoreWindowContentOverlay = r1;
        this.mFlingEstimator = new OverScroller(r5);
        return;
    L5:
        r3 = false;
        goto L6
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        haltActionBarHideOffsetAnimations();
    }

    public void setActionBarVisibilityCallback(ActionBarVisibilityCallback r2) {
        this.mActionBarVisibilityCallback = r2;
        if (getWindowToken() == null) goto L8;
        this.mActionBarVisibilityCallback.onWindowVisibilityChanged(this.mWindowVisibility);
        int r22 = this.mLastSystemUiVisibility;
        if (r22 == 0) goto L9;
        onWindowSystemUiVisibilityChanged(r22);
        ViewCompat.requestApplyInsets(this);
        return;
    L9:
        return;
    }

    public void setOverlayMode(boolean r2) {
        this.mOverlayMode = r2;
        if (r2 == true) goto L5;
    L7:
        boolean r22 = false;
    L8:
        this.mIgnoreWindowContentOverlay = r22;
        return;
    L5:
        if (getContext().getApplicationInfo().targetSdkVersion >= 19) goto L7;
        r22 = true;
        goto L8
    }

    public boolean isInOverlayMode() {
        return this.mOverlayMode;
    }

    public void setHasNonEmbeddedTabs(boolean r1) {
        this.mHasNonEmbeddedTabs = r1;
    }

    @Override
    protected void onConfigurationChanged(Configuration r1) {
        super.onConfigurationChanged(r1);
        init(getContext());
        ViewCompat.requestApplyInsets(this);
    }

    @Override
    public void onWindowSystemUiVisibilityChanged(int r5) {
        if (Build.VERSION.SDK_INT < 16) goto L5;
        super.onWindowSystemUiVisibilityChanged(r5);
    L5:
        pullChildren();
        int r0 = this.mLastSystemUiVisibility ^ r5;
        this.mLastSystemUiVisibility = r5;
        boolean r2 = false;
        if ((r5 & 4) != 0) goto L8;
        boolean r1 = true;
    L10:
        if ((r5 & 256) == 0) goto L12;
        r2 = true;
    L12:
        ActionBarVisibilityCallback r52 = this.mActionBarVisibilityCallback;
        if (r52 == null) goto L21;
        r52.enableContentAnimations(!r2);
        if (r1 == true) goto L19;
        if (r2 == false) goto L19;
        this.mActionBarVisibilityCallback.hideForSystem();
    L19:
        this.mActionBarVisibilityCallback.showForSystem();
    L21:
        if ((r0 & 256) != 0) goto L23;
        return;
    L23:
        if (this.mActionBarVisibilityCallback == null) goto L27;
        ViewCompat.requestApplyInsets(this);
        return;
    L27:
        return;
    L8:
        r1 = false;
        goto L10
    }

    @Override
    protected void onWindowVisibilityChanged(int r2) {
        super.onWindowVisibilityChanged(r2);
        this.mWindowVisibility = r2;
        ActionBarVisibilityCallback r0 = this.mActionBarVisibilityCallback;
        if (r0 == null) goto L6;
        r0.onWindowVisibilityChanged(r2);
        return;
    }

    private boolean applyInsets(View r3, Rect r4, boolean r5, boolean r6, boolean r7, boolean r8) {
        LayoutParams r32 = (LayoutParams) r3.getLayoutParams();
        if (r5 == true) goto L5;
    L7:
        boolean r52 = false;
    L8:
        if (r6 == true) goto L10;
    L12:
        if (r8 == true) goto L14;
    L16:
        if (r7 == true) goto L18;
        return r52;
    L18:
        if (r32.bottomMargin == r4.bottom) goto L22;
        r32.bottomMargin = r4.bottom;
        return true;
    L22:
        return r52;
    L14:
        if (r32.rightMargin == r4.right) goto L16;
        r32.rightMargin = r4.right;
        r52 = true;
        goto L16
    L10:
        if (r32.topMargin == r4.top) goto L12;
        r32.topMargin = r4.top;
        r52 = true;
        goto L12
    L5:
        if (r32.leftMargin == r4.left) goto L7;
        r32.leftMargin = r4.left;
        r52 = true;
        goto L8
    }

    @Override
    protected boolean fitSystemWindows(Rect r9) {
        pullChildren();
        int r0 = ViewCompat.getWindowSystemUiVisibility(this) & 256;
        boolean r02 = applyInsets(this.mActionBarTop, r9, true, true, false, true);
        this.mBaseInnerInsets.set(r9);
        ViewUtils.computeFitSystemWindows(this, this.mBaseInnerInsets, this.mBaseContentInsets);
        if (this.mLastBaseInnerInsets.equals(this.mBaseInnerInsets) == true) goto L6;
        this.mLastBaseInnerInsets.set(this.mBaseInnerInsets);
        r02 = true;
    L6:
        if (this.mLastBaseContentInsets.equals(this.mBaseContentInsets) == true) goto L8;
        this.mLastBaseContentInsets.set(this.mBaseContentInsets);
        r02 = true;
    L8:
        if (r02 == false) goto L10;
        requestLayout();
    L10:
        return true;
    }

    @Override
    protected LayoutParams generateDefaultLayoutParams() {
        return new LayoutParams(-1, -1);
    }

    @Override
    public LayoutParams generateLayoutParams(AttributeSet r3) {
        return new LayoutParams(getContext(), r3);
    }

    @Override
    protected ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams r2) {
        return new LayoutParams(r2);
    }

    @Override
    protected boolean checkLayoutParams(ViewGroup.LayoutParams r1) {
        return r1 instanceof LayoutParams;
    }

    @Override
    protected void onMeasure(int r14, int r15) {
        pullChildren();
        measureChildWithMargins(this.mActionBarTop, r14, 0, r15, 0);
        LayoutParams r0 = (LayoutParams) this.mActionBarTop.getLayoutParams();
        int r1 = Math.max(0, (this.mActionBarTop.getMeasuredWidth() + r0.leftMargin) + r0.rightMargin);
        int r02 = Math.max(0, (this.mActionBarTop.getMeasuredHeight() + r0.topMargin) + r0.bottomMargin);
        int r3 = View.combineMeasuredStates(0, this.mActionBarTop.getMeasuredState());
        if ((ViewCompat.getWindowSystemUiVisibility(this) & 256) == 0) goto L5;
        boolean r4 = true;
    L6:
        if (r4 == false) goto L13;
        int r5 = this.mActionBarHeight;
        if (this.mHasNonEmbeddedTabs == true) goto L10;
    L16:
        this.mContentInsets.set(this.mBaseContentInsets);
        this.mInnerInsets.set(this.mBaseInnerInsets);
        if (this.mOverlayMode == true) goto L20;
        if (r4 == true) goto L20;
        this.mContentInsets.top += r5;
        this.mContentInsets.bottom += 0;
    L21:
        applyInsets(this.mContent, this.mContentInsets, true, true, true, true);
        if (this.mLastInnerInsets.equals(this.mInnerInsets) == true) goto L24;
        this.mLastInnerInsets.set(this.mInnerInsets);
        this.mContent.dispatchFitSystemWindows(this.mInnerInsets);
    L24:
        measureChildWithMargins(this.mContent, r14, 0, r15, 0);
        LayoutParams r2 = (LayoutParams) this.mContent.getLayoutParams();
        int r12 = Math.max(r1, (this.mContent.getMeasuredWidth() + r2.leftMargin) + r2.rightMargin);
        int r03 = Math.max(r02, (this.mContent.getMeasuredHeight() + r2.topMargin) + r2.bottomMargin);
        int r22 = View.combineMeasuredStates(r3, this.mContent.getMeasuredState());
        setMeasuredDimension(View.resolveSizeAndState(Math.max(r12 + (getPaddingLeft() + getPaddingRight()), getSuggestedMinimumWidth()), r14, r22), View.resolveSizeAndState(Math.max(r03 + (getPaddingTop() + getPaddingBottom()), getSuggestedMinimumHeight()), r15, r22 << 16));
        return;
    L20:
        this.mInnerInsets.top += r5;
        this.mInnerInsets.bottom += 0;
        goto L21
    L10:
        if (this.mActionBarTop.getTabContainer() == null) goto L16;
        r5 = r5 + this.mActionBarHeight;
        goto L16
    L13:
        if (this.mActionBarTop.getVisibility() == 8) goto L15;
        r5 = this.mActionBarTop.getMeasuredHeight();
        goto L16
    L15:
        r5 = 0;
        goto L16
    L5:
        r4 = false;
        goto L6
    }

    @Override
    protected void onLayout(boolean r5, int r6, int r7, int r8, int r9) {
        int r52 = getChildCount();
        int r62 = getPaddingLeft();
        getPaddingRight();
        int r72 = getPaddingTop();
        getPaddingBottom();
        int r82 = 0;
    L3:
        if (r82 >= r52) goto L8;
        View r92 = getChildAt(r82);
        if (r92.getVisibility() == 8) goto L7;
        LayoutParams r0 = (LayoutParams) r92.getLayoutParams();
        int r1 = r92.getMeasuredWidth();
        int r2 = r92.getMeasuredHeight();
        int r3 = r0.leftMargin + r62;
        int r02 = r0.topMargin + r72;
        r92.layout(r3, r02, r1 + r3, r2 + r02);
    L7:
        r82 = r82 + 1;
        goto L3
    }

    @Override
    public void draw(Canvas r6) {
        super.draw(r6);
        if (this.mWindowContentOverlay != null) goto L5;
        return;
    L5:
        if (this.mIgnoreWindowContentOverlay == false) goto L7;
        return;
    L7:
        if (this.mActionBarTop.getVisibility() != 0) goto L9;
        int r0 = (int) ((this.mActionBarTop.getBottom() + this.mActionBarTop.getTranslationY()) + 0.5f);
    L10:
        this.mWindowContentOverlay.setBounds(0, r0, getWidth(), this.mWindowContentOverlay.getIntrinsicHeight() + r0);
        this.mWindowContentOverlay.draw(r6);
        return;
    L9:
        r0 = 0;
        goto L10
    }

    @Override
    public boolean onStartNestedScroll(View r1, View r2, int r3) {
        if ((r3 & 2) != 0) goto L5;
        return false;
    L5:
        if (this.mActionBarTop.getVisibility() == 0) goto L8;
        return false;
    L8:
        return this.mHideOnContentScroll;
    }

    @Override
    public void onNestedScrollAccepted(View r2, View r3, int r4) {
        this.mParentHelper.onNestedScrollAccepted(r2, r3, r4);
        this.mHideOnContentScrollReference = getActionBarHideOffset();
        haltActionBarHideOffsetAnimations();
        ActionBarVisibilityCallback r22 = this.mActionBarVisibilityCallback;
        if (r22 == null) goto L6;
        r22.onContentScrollStarted();
        return;
    }

    @Override
    public void onNestedScroll(View r1, int r2, int r3, int r4, int r5) {
        this.mHideOnContentScrollReference += r3;
        setActionBarHideOffset(this.mHideOnContentScrollReference);
    }

    @Override
    public void onStopNestedScroll(View r2) {
        if (this.mHideOnContentScroll == true) goto L5;
    L10:
        ActionBarVisibilityCallback r22 = this.mActionBarVisibilityCallback;
        if (r22 == null) goto L14;
        r22.onContentScrollStopped();
        return;
    L14:
        return;
    L5:
        if (this.mAnimatingForFling == true) goto L10;
        if (this.mHideOnContentScrollReference > this.mActionBarTop.getHeight()) goto L9;
        postRemoveActionBarHideOffset();
        goto L10
    L9:
        postAddActionBarHideOffset();
        goto L10
    }

    @Override
    public boolean onNestedFling(View r1, float r2, float r3, boolean r4) {
        if (this.mHideOnContentScroll == false) goto L12;
        if (r4 == true) goto L7;
        return false;
    L7:
        if (shouldHideActionBarOnFling(r2, r3) == false) goto L9;
        addActionBarHideOffset();
    L10:
        this.mAnimatingForFling = true;
        return true;
    L9:
        removeActionBarHideOffset();
        goto L10
    L12:
        return false;
    }

    @Override
    public int getNestedScrollAxes() {
        return this.mParentHelper.getNestedScrollAxes();
    }

    void pullChildren() {
        if (this.mContent != null) goto L6;
        this.mContent = (ContentFrameLayout) findViewById(R.id.action_bar_activity_content);
        this.mActionBarTop = (ActionBarContainer) findViewById(R.id.action_bar_container);
        this.mDecorToolbar = getDecorToolbar(findViewById(R.id.action_bar));
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    private DecorToolbar getDecorToolbar(View r4) {
        if ((r4 instanceof DecorToolbar) == false) goto L7;
        return (DecorToolbar) r4;
    L7:
        if ((r4 instanceof Toolbar) == false) goto L11;
        return ((Toolbar) r4).getWrapper();
    L11:
        throw new IllegalStateException("Can't make a decor toolbar out of " + r4.getClass().getSimpleName());
    }

    public void setHideOnContentScrollEnabled(boolean r2) {
        if (r2 == this.mHideOnContentScroll) goto L8;
        this.mHideOnContentScroll = r2;
        if (r2 == true) goto L9;
        haltActionBarHideOffsetAnimations();
        setActionBarHideOffset(0);
        return;
    L9:
        return;
    }

    public boolean isHideOnContentScrollEnabled() {
        return this.mHideOnContentScroll;
    }

    public int getActionBarHideOffset() {
        ActionBarContainer r0 = this.mActionBarTop;
        if (r0 != null) goto L7;
        return 0;
    L7:
        return -((int) r0.getTranslationY());
    }

    public void setActionBarHideOffset(int r2) {
        haltActionBarHideOffsetAnimations();
        int r22 = Math.max(0, Math.min(r2, this.mActionBarTop.getHeight()));
        this.mActionBarTop.setTranslationY(-r22);
    }

    void haltActionBarHideOffsetAnimations() {
        removeCallbacks(this.mRemoveActionBarHideOffset);
        removeCallbacks(this.mAddActionBarHideOffset);
        ViewPropertyAnimator r0 = this.mCurrentActionBarTopAnimator;
        if (r0 == null) goto L6;
        r0.cancel();
        return;
    }

    private void postRemoveActionBarHideOffset() {
        haltActionBarHideOffsetAnimations();
        postDelayed(this.mRemoveActionBarHideOffset, 600);
    }

    private void postAddActionBarHideOffset() {
        haltActionBarHideOffsetAnimations();
        postDelayed(this.mAddActionBarHideOffset, 600);
    }

    private void removeActionBarHideOffset() {
        haltActionBarHideOffsetAnimations();
        this.mRemoveActionBarHideOffset.run();
    }

    private void addActionBarHideOffset() {
        haltActionBarHideOffsetAnimations();
        this.mAddActionBarHideOffset.run();
    }

    private boolean shouldHideActionBarOnFling(float r10, float r11) {
        this.mFlingEstimator.fling(0, 0, 0, (int) r11, 0, 0, Integer.MIN_VALUE, ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED);
        if (this.mFlingEstimator.getFinalY() <= this.mActionBarTop.getHeight()) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public void setWindowCallback(Window.Callback r2) {
        pullChildren();
        this.mDecorToolbar.setWindowCallback(r2);
    }

    @Override
    public void setWindowTitle(CharSequence r2) {
        pullChildren();
        this.mDecorToolbar.setWindowTitle(r2);
    }

    @Override
    public CharSequence getTitle() {
        pullChildren();
        return this.mDecorToolbar.getTitle();
    }

    @Override
    public void initFeature(int r2) {
        pullChildren();
        if (r2 != 2) goto L5;
        this.mDecorToolbar.initProgress();
        return;
    L5:
        if (r2 != 5) goto L7;
        this.mDecorToolbar.initIndeterminateProgress();
        return;
    L7:
        if (r2 != 109) goto L15;
        setOverlayMode(true);
        return;
    }

    @Override
    public boolean hasIcon() {
        pullChildren();
        return this.mDecorToolbar.hasIcon();
    }

    @Override
    public boolean hasLogo() {
        pullChildren();
        return this.mDecorToolbar.hasLogo();
    }

    @Override
    public void setIcon(int r2) {
        pullChildren();
        this.mDecorToolbar.setIcon(r2);
    }

    @Override
    public void setIcon(Drawable r2) {
        pullChildren();
        this.mDecorToolbar.setIcon(r2);
    }

    @Override
    public void setLogo(int r2) {
        pullChildren();
        this.mDecorToolbar.setLogo(r2);
    }

    @Override
    public boolean canShowOverflowMenu() {
        pullChildren();
        return this.mDecorToolbar.canShowOverflowMenu();
    }

    @Override
    public boolean isOverflowMenuShowing() {
        pullChildren();
        return this.mDecorToolbar.isOverflowMenuShowing();
    }

    @Override
    public boolean isOverflowMenuShowPending() {
        pullChildren();
        return this.mDecorToolbar.isOverflowMenuShowPending();
    }

    @Override
    public boolean showOverflowMenu() {
        pullChildren();
        return this.mDecorToolbar.showOverflowMenu();
    }

    @Override
    public boolean hideOverflowMenu() {
        pullChildren();
        return this.mDecorToolbar.hideOverflowMenu();
    }

    @Override
    public void setMenuPrepared() {
        pullChildren();
        this.mDecorToolbar.setMenuPrepared();
    }

    @Override
    public void setMenu(Menu r2, MenuPresenter.Callback r3) {
        pullChildren();
        this.mDecorToolbar.setMenu(r2, r3);
    }

    @Override
    public void saveToolbarHierarchyState(SparseArray<Parcelable> r2) {
        pullChildren();
        this.mDecorToolbar.saveHierarchyState(r2);
    }

    @Override
    public void restoreToolbarHierarchyState(SparseArray<Parcelable> r2) {
        pullChildren();
        this.mDecorToolbar.restoreHierarchyState(r2);
    }

    @Override
    public void dismissPopups() {
        pullChildren();
        this.mDecorToolbar.dismissPopupMenus();
    }
}
