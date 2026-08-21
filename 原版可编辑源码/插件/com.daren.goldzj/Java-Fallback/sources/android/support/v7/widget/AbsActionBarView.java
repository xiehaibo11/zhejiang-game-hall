package android.support.v7.widget;

import android.content.Context;
import android.content.res.Configuration;
import android.content.res.TypedArray;
import android.support.v4.view.ViewCompat;
import android.support.v4.view.ViewPropertyAnimatorCompat;
import android.support.v4.view.ViewPropertyAnimatorListener;
import android.support.v7.appcompat.R;
import android.util.AttributeSet;
import android.util.TypedValue;
import android.view.ContextThemeWrapper;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;

abstract class AbsActionBarView extends ViewGroup {
    private static final int FADE_DURATION = 200;
    protected ActionMenuPresenter mActionMenuPresenter;
    protected int mContentHeight;
    private boolean mEatingHover;
    private boolean mEatingTouch;
    protected ActionMenuView mMenuView;
    protected final Context mPopupContext;
    protected final VisibilityAnimListener mVisAnimListener;
    protected ViewPropertyAnimatorCompat mVisibilityAnim;

    protected class VisibilityAnimListener implements ViewPropertyAnimatorListener {
        private boolean mCanceled;
        int mFinalVisibility;
        final AbsActionBarView this$0;

        protected VisibilityAnimListener(AbsActionBarView r1) {
            this.this$0 = r1;
            this.mCanceled = false;
        }

        public VisibilityAnimListener withFinalVisibility(ViewPropertyAnimatorCompat r2, int r3) {
            this.this$0.mVisibilityAnim = r2;
            this.mFinalVisibility = r3;
            return this;
        }

        @Override
        public void onAnimationStart(View r2) {
            AbsActionBarView.access$001(this.this$0, 0);
            this.mCanceled = false;
        }

        @Override
        public void onAnimationEnd(View r2) {
            if (this.mCanceled == false) goto L5;
            return;
        L5:
            AbsActionBarView r22 = this.this$0;
            r22.mVisibilityAnim = null;
            AbsActionBarView.access$101(r22, this.mFinalVisibility);
        }

        @Override
        public void onAnimationCancel(View r1) {
            this.mCanceled = true;
        }
    }

    protected static int next(int r0, int r1, boolean r2) {
        if (r2 == false) goto L5;
        return r0 - r1;
    L5:
        return r0 + r1;
    }

    static void access$001(AbsActionBarView r0, int r1) {
        super.setVisibility(r1);
    }

    static void access$101(AbsActionBarView r0, int r1) {
        super.setVisibility(r1);
    }

    AbsActionBarView(Context r2) {
        this(r2, null);
    }

    AbsActionBarView(Context r2, AttributeSet r3) {
        this(r2, r3, 0);
    }

    AbsActionBarView(Context r3, AttributeSet r4, int r5) {
        super(r3, r4, r5);
        this.mVisAnimListener = new VisibilityAnimListener(this);
        TypedValue r42 = new TypedValue();
        if (r3.getTheme().resolveAttribute(R.attr.actionBarPopupTheme, r42, true) == true) goto L5;
    L7:
        this.mPopupContext = r3;
        return;
    L5:
        if (r42.resourceId == 0) goto L7;
        this.mPopupContext = new ContextThemeWrapper(r3, r42.resourceId);
    }

    @Override
    protected void onConfigurationChanged(Configuration r6) {
        super.onConfigurationChanged(r6);
        TypedArray r0 = getContext().obtainStyledAttributes(null, R.styleable.ActionBar, R.attr.actionBarStyle, 0);
        setContentHeight(r0.getLayoutDimension(R.styleable.ActionBar_height, 0));
        r0.recycle();
        ActionMenuPresenter r02 = this.mActionMenuPresenter;
        if (r02 == null) goto L6;
        r02.onConfigurationChanged(r6);
        return;
    }

    @Override
    public boolean onTouchEvent(MotionEvent r5) {
        int r0 = r5.getActionMasked();
        if (r0 != 0) goto L6;
        this.mEatingTouch = false;
    L6:
        if (this.mEatingTouch == true) goto L11;
        boolean r52 = super.onTouchEvent(r5);
        if (r0 != 0) goto L11;
        if (r52 == true) goto L11;
        this.mEatingTouch = true;
    L11:
        if (r0 != 1) goto L13;
    L14:
        this.mEatingTouch = false;
    L15:
        return true;
    L13:
        if (r0 != 3) goto L15;
        goto L14
    }

    @Override
    public boolean onHoverEvent(MotionEvent r6) {
        int r0 = r6.getActionMasked();
        if (r0 != 9) goto L6;
        this.mEatingHover = false;
    L6:
        if (this.mEatingHover == true) goto L12;
        boolean r62 = super.onHoverEvent(r6);
        if (r0 != 9) goto L12;
        if (r62 == true) goto L12;
        this.mEatingHover = true;
    L12:
        if (r0 != 10) goto L14;
    L15:
        this.mEatingHover = false;
    L16:
        return true;
    L14:
        if (r0 != 3) goto L16;
        goto L15
    }

    public void setContentHeight(int r1) {
        this.mContentHeight = r1;
        requestLayout();
    }

    public int getContentHeight() {
        return this.mContentHeight;
    }

    public int getAnimatedVisibility() {
        if (this.mVisibilityAnim == null) goto L7;
        return this.mVisAnimListener.mFinalVisibility;
    L7:
        return getVisibility();
    }

    public ViewPropertyAnimatorCompat setupAnimatorToVisibility(int r3, long r4) {
        ViewPropertyAnimatorCompat r0 = this.mVisibilityAnim;
        if (r0 == null) goto L6;
        r0.cancel();
    L6:
        if (r3 == 0) goto L8;
        ViewPropertyAnimatorCompat r02 = ViewCompat.animate(this).alpha(0.0f);
        r02.setDuration(r4);
        r02.setListener(this.mVisAnimListener.withFinalVisibility(r02, r3));
        return r02;
    L8:
        if (getVisibility() == 0) goto L10;
        setAlpha(0.0f);
    L10:
        ViewPropertyAnimatorCompat r03 = ViewCompat.animate(this).alpha(1.0f);
        r03.setDuration(r4);
        r03.setListener(this.mVisAnimListener.withFinalVisibility(r03, r3));
        return r03;
    }

    public void animateToVisibility(int r3) {
        setupAnimatorToVisibility(r3, 200).start();
    }

    @Override
    public void setVisibility(int r2) {
        if (r2 == getVisibility()) goto L9;
        ViewPropertyAnimatorCompat r0 = this.mVisibilityAnim;
        if (r0 == null) goto L7;
        r0.cancel();
    L7:
        super.setVisibility(r2);
        return;
    }

    public boolean showOverflowMenu() {
        ActionMenuPresenter r0 = this.mActionMenuPresenter;
        if (r0 != null) goto L5;
        return false;
    L5:
        return r0.showOverflowMenu();
    }

    public void postShowOverflowMenu() {
        post(new 1(this));
    }

    public boolean hideOverflowMenu() {
        ActionMenuPresenter r0 = this.mActionMenuPresenter;
        if (r0 != null) goto L5;
        return false;
    L5:
        return r0.hideOverflowMenu();
    }

    public boolean isOverflowMenuShowing() {
        ActionMenuPresenter r0 = this.mActionMenuPresenter;
        if (r0 != null) goto L5;
        return false;
    L5:
        return r0.isOverflowMenuShowing();
    }

    public boolean isOverflowMenuShowPending() {
        ActionMenuPresenter r0 = this.mActionMenuPresenter;
        if (r0 != null) goto L5;
        return false;
    L5:
        return r0.isOverflowMenuShowPending();
    }

    public boolean isOverflowReserved() {
        ActionMenuPresenter r0 = this.mActionMenuPresenter;
        if (r0 != null) goto L5;
    L7:
        return false;
    L5:
        if (r0.isOverflowReserved() == false) goto L7;
        return true;
    }

    public boolean canShowOverflowMenu() {
        if (isOverflowReserved() == true) goto L5;
    L7:
        return false;
    L5:
        if (getVisibility() != 0) goto L7;
        return true;
    }

    public void dismissPopupMenus() {
        ActionMenuPresenter r0 = this.mActionMenuPresenter;
        if (r0 == null) goto L6;
        r0.dismissPopupMenus();
        return;
    }

    protected int measureChildView(View r2, int r3, int r4, int r5) {
        r2.measure(View.MeasureSpec.makeMeasureSpec(r3, Integer.MIN_VALUE), r4);
        return Math.max(0, (r3 - r2.getMeasuredWidth()) - r5);
    }

    protected int positionChild(View r3, int r4, int r5, int r6, boolean r7) {
        int r0 = r3.getMeasuredWidth();
        int r1 = r3.getMeasuredHeight();
        int r52 = r5 + ((r6 - r1) / 2);
        if (r7 == false) goto L5;
        r3.layout(r4 - r0, r52, r4, r1 + r52);
    L6:
        if (r7 == true) goto L8;
        return r0;
    L8:
        return -r0;
    L5:
        r3.layout(r4, r52, r4 + r0, r1 + r52);
        goto L6
    }
}
