package android.support.v7.widget;

import android.content.Context;
import android.support.annotation.RestrictTo;
import android.support.v4.view.ViewCompat;
import android.support.v4.view.ViewPropertyAnimatorCompat;
import android.support.v7.appcompat.R;
import android.support.v7.view.ActionMode;
import android.support.v7.view.menu.MenuBuilder;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;
import android.widget.LinearLayout;
import android.widget.TextView;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class ActionBarContextView extends AbsActionBarView {
    private static final String TAG = "ActionBarContextView";
    private View mClose;
    private int mCloseItemLayout;
    private View mCustomView;
    private CharSequence mSubtitle;
    private int mSubtitleStyleRes;
    private TextView mSubtitleView;
    private CharSequence mTitle;
    private LinearLayout mTitleLayout;
    private boolean mTitleOptional;
    private int mTitleStyleRes;
    private TextView mTitleView;

    @Override
    public boolean shouldDelayChildPressedState() {
        return false;
    }

    @Override
    public void animateToVisibility(int r1) {
        super.animateToVisibility(r1);
    }

    @Override
    public boolean canShowOverflowMenu() {
        return super.canShowOverflowMenu();
    }

    @Override
    public void dismissPopupMenus() {
        super.dismissPopupMenus();
    }

    @Override
    public int getAnimatedVisibility() {
        return super.getAnimatedVisibility();
    }

    @Override
    public int getContentHeight() {
        return super.getContentHeight();
    }

    @Override
    public boolean isOverflowMenuShowPending() {
        return super.isOverflowMenuShowPending();
    }

    @Override
    public boolean isOverflowReserved() {
        return super.isOverflowReserved();
    }

    @Override
    public boolean onHoverEvent(MotionEvent r1) {
        return super.onHoverEvent(r1);
    }

    @Override
    public boolean onTouchEvent(MotionEvent r1) {
        return super.onTouchEvent(r1);
    }

    @Override
    public void postShowOverflowMenu() {
        super.postShowOverflowMenu();
    }

    @Override
    public void setVisibility(int r1) {
        super.setVisibility(r1);
    }

    @Override
    public ViewPropertyAnimatorCompat setupAnimatorToVisibility(int r1, long r2) {
        return super.setupAnimatorToVisibility(r1, r2);
    }

    public ActionBarContextView(Context r2) {
        this(r2, null);
    }

    public ActionBarContextView(Context r2, AttributeSet r3) {
        this(r2, r3, R.attr.actionModeStyle);
    }

    public ActionBarContextView(Context r3, AttributeSet r4, int r5) {
        super(r3, r4, r5);
        TintTypedArray r32 = TintTypedArray.obtainStyledAttributes(r3, r4, R.styleable.ActionMode, r5, 0);
        ViewCompat.setBackground(this, r32.getDrawable(R.styleable.ActionMode_background));
        this.mTitleStyleRes = r32.getResourceId(R.styleable.ActionMode_titleTextStyle, 0);
        this.mSubtitleStyleRes = r32.getResourceId(R.styleable.ActionMode_subtitleTextStyle, 0);
        this.mContentHeight = r32.getLayoutDimension(R.styleable.ActionMode_height, 0);
        this.mCloseItemLayout = r32.getResourceId(R.styleable.ActionMode_closeItemLayout, R.layout.abc_action_mode_close_item_material);
        r32.recycle();
    }

    @Override
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        if (this.mActionMenuPresenter == null) goto L6;
        this.mActionMenuPresenter.hideOverflowMenu();
        this.mActionMenuPresenter.hideSubMenus();
        return;
    }

    @Override
    public void setContentHeight(int r1) {
        this.mContentHeight = r1;
    }

    public void setCustomView(View r2) {
        View r0 = this.mCustomView;
        if (r0 == null) goto L5;
        removeView(r0);
    L5:
        this.mCustomView = r2;
        if (r2 == null) goto L10;
        LinearLayout r02 = this.mTitleLayout;
        if (r02 == null) goto L10;
        removeView(r02);
        this.mTitleLayout = null;
    L10:
        if (r2 == null) goto L12;
        addView(r2);
    L12:
        requestLayout();
    }

    public void setTitle(CharSequence r1) {
        this.mTitle = r1;
        initTitle();
    }

    public void setSubtitle(CharSequence r1) {
        this.mSubtitle = r1;
        initTitle();
    }

    public CharSequence getTitle() {
        return this.mTitle;
    }

    public CharSequence getSubtitle() {
        return this.mSubtitle;
    }

    private void initTitle() {
        if (this.mTitleLayout != null) goto L10;
        LayoutInflater.from(getContext()).inflate(R.layout.abc_action_bar_title_item, this);
        this.mTitleLayout = (LinearLayout) getChildAt(getChildCount() - 1);
        this.mTitleView = (TextView) this.mTitleLayout.findViewById(R.id.action_bar_title);
        this.mSubtitleView = (TextView) this.mTitleLayout.findViewById(R.id.action_bar_subtitle);
        if (this.mTitleStyleRes == 0) goto L8;
        this.mTitleView.setTextAppearance(getContext(), this.mTitleStyleRes);
    L8:
        if (this.mSubtitleStyleRes == 0) goto L10;
        this.mSubtitleView.setTextAppearance(getContext(), this.mSubtitleStyleRes);
    L10:
        this.mTitleView.setText(this.mTitle);
        this.mSubtitleView.setText(this.mSubtitle);
        boolean r0 = !TextUtils.isEmpty(this.mTitle);
        boolean r1 = !TextUtils.isEmpty(this.mSubtitle);
        TextView r2 = this.mSubtitleView;
        int r3 = 0;
        if (r1 == false) goto L13;
        int r5 = 0;
    L14:
        r2.setVisibility(r5);
        LinearLayout r22 = this.mTitleLayout;
        if (r0 == true) goto L19;
        if (r1 == true) goto L19;
        r3 = 8;
    L19:
        r22.setVisibility(r3);
        if (this.mTitleLayout.getParent() != null) goto L23;
        addView(this.mTitleLayout);
        return;
    L23:
        return;
    L13:
        r5 = 8;
        goto L14
    }

    public void initForMode(final ActionMode r4) {
        View r0 = this.mClose;
        if (r0 != null) goto L6;
        this.mClose = LayoutInflater.from(getContext()).inflate(this.mCloseItemLayout, this, false);
        addView(this.mClose);
    L8:
        this.mClose.findViewById(R.id.action_mode_close_button).setOnClickListener(new 1(this, r4));
        MenuBuilder r42 = (MenuBuilder) r4.getMenu();
        if (this.mActionMenuPresenter == null) goto L11;
        this.mActionMenuPresenter.dismissPopupMenus();
    L11:
        this.mActionMenuPresenter = new ActionMenuPresenter(getContext());
        this.mActionMenuPresenter.setReserveOverflow(true);
        ViewGroup.LayoutParams r02 = new ViewGroup.LayoutParams(-2, -1);
        r42.addMenuPresenter(this.mActionMenuPresenter, this.mPopupContext);
        this.mMenuView = (ActionMenuView) this.mActionMenuPresenter.getMenuView(this);
        ViewCompat.setBackground(this.mMenuView, null);
        addView(this.mMenuView, r02);
        return;
    L6:
        if (r0.getParent() != null) goto L8;
        addView(this.mClose);
        goto L8
    }

    public void closeMode() {
        if (this.mClose != null) goto L6;
        killMode();
        return;
    }

    public void killMode() {
        removeAllViews();
        this.mCustomView = null;
        this.mMenuView = null;
    }

    @Override
    public boolean showOverflowMenu() {
        if (this.mActionMenuPresenter != null) goto L5;
        return false;
    L5:
        return this.mActionMenuPresenter.showOverflowMenu();
    }

    @Override
    public boolean hideOverflowMenu() {
        if (this.mActionMenuPresenter != null) goto L5;
        return false;
    L5:
        return this.mActionMenuPresenter.hideOverflowMenu();
    }

    @Override
    public boolean isOverflowMenuShowing() {
        if (this.mActionMenuPresenter != null) goto L5;
        return false;
    L5:
        return this.mActionMenuPresenter.isOverflowMenuShowing();
    }

    @Override
    protected ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return new ViewGroup.MarginLayoutParams(-1, -2);
    }

    @Override
    public ViewGroup.LayoutParams generateLayoutParams(AttributeSet r3) {
        return new ViewGroup.MarginLayoutParams(getContext(), r3);
    }

    @Override
    protected void onMeasure(int r11, int r12) {
        int r2 = 1073741824;
        if (View.MeasureSpec.getMode(r11) != 1073741824) goto L67;
        if (View.MeasureSpec.getMode(r12) == 0) goto L65;
        int r112 = View.MeasureSpec.getSize(r11);
        if (this.mContentHeight <= 0) goto L9;
        int r122 = this.mContentHeight;
    L10:
        int r0 = getPaddingTop() + getPaddingBottom();
        int r1 = (r112 - getPaddingLeft()) - getPaddingRight();
        int r3 = r122 - r0;
        int r5 = View.MeasureSpec.makeMeasureSpec(r3, Integer.MIN_VALUE);
        View r6 = this.mClose;
        int r7 = 0;
        if (r6 == null) goto L14;
        int r13 = measureChildView(r6, r1, r5, 0);
        ViewGroup.MarginLayoutParams r62 = (ViewGroup.MarginLayoutParams) this.mClose.getLayoutParams();
        r1 = r13 - (r62.leftMargin + r62.rightMargin);
    L14:
        if (this.mMenuView != null) goto L16;
    L18:
        LinearLayout r63 = this.mTitleLayout;
        if (r63 != null) goto L21;
    L36:
        View r52 = this.mCustomView;
        if (r52 == null) goto L54;
        ViewGroup.LayoutParams r53 = r52.getLayoutParams();
        if (r53.width == (-2)) goto L41;
        int r64 = 1073741824;
    L43:
        if (r53.width < 0) goto L46;
        r1 = Math.min(r53.width, r1);
    L46:
        if (r53.height != (-2)) goto L50;
        r2 = Integer.MIN_VALUE;
    L50:
        if (r53.height < 0) goto L52;
        r3 = Math.min(r53.height, r3);
    L52:
        this.mCustomView.measure(View.MeasureSpec.makeMeasureSpec(r1, r64), View.MeasureSpec.makeMeasureSpec(r3, r2));
        goto L54
    L41:
        r64 = Integer.MIN_VALUE;
    L54:
        if (this.mContentHeight > 0) goto L62;
        int r123 = getChildCount();
        int r14 = 0;
    L56:
        if (r7 >= r123) goto L61;
        int r22 = getChildAt(r7).getMeasuredHeight() + r0;
        if (r22 <= r14) goto L60;
        r14 = r22;
    L60:
        r7 = r7 + 1;
        goto L56
    L61:
        setMeasuredDimension(r112, r14);
        return;
    L62:
        setMeasuredDimension(r112, r122);
        return;
    L21:
        if (this.mCustomView != null) goto L36;
        if (this.mTitleOptional == false) goto L35;
        this.mTitleLayout.measure(View.MeasureSpec.makeMeasureSpec(0, 0), r5);
        int r54 = this.mTitleLayout.getMeasuredWidth();
        if (r54 > r1) goto L27;
        boolean r65 = true;
    L28:
        if (r65 == false) goto L30;
        r1 = r1 - r54;
    L30:
        LinearLayout r55 = this.mTitleLayout;
        if (r65 == false) goto L33;
        int r66 = 0;
    L34:
        r55.setVisibility(r66);
        goto L36
    L33:
        r66 = 8;
        goto L34
    L27:
        r65 = false;
        goto L28
    L35:
        r1 = measureChildView(r63, r1, r5, 0);
        goto L36
    L16:
        if (this.mMenuView.getParent() != this) goto L18;
        r1 = measureChildView(this.mMenuView, r1, r5, 0);
        goto L18
    L9:
        r122 = View.MeasureSpec.getSize(r12);
        goto L10
    L65:
        throw new IllegalStateException(getClass().getSimpleName() + " can only be used with android:layout_height=\"wrap_content\"");
    L67:
        throw new IllegalStateException(getClass().getSimpleName() + " can only be used with android:layout_width=\"match_parent\" (or fill_parent)");
    }

    @Override
    protected void onLayout(boolean r10, int r11, int r12, int r13, int r14) {
        boolean r102 = ViewUtils.isLayoutRtl(this);
        if (r102 == false) goto L5;
        int r0 = (r13 - r11) - getPaddingRight();
    L6:
        int r6 = getPaddingTop();
        int r122 = ((r14 - r12) - getPaddingTop()) - getPaddingBottom();
        View r142 = this.mClose;
        if (r142 != null) goto L9;
    L18:
        int r143 = r0;
    L19:
        LinearLayout r02 = this.mTitleLayout;
        if (r02 != null) goto L22;
    L26:
        int r2 = r143;
        View r1 = this.mCustomView;
        if (r1 == null) goto L29;
        positionChild(r1, r2, r6, r122, r102);
    L29:
        if (r102 == false) goto L31;
        int r3 = getPaddingLeft();
    L33:
        if (this.mMenuView == null) goto L36;
        positionChild(this.mMenuView, r3, r6, r122, !r102);
        return;
    L36:
        return;
    L31:
        r3 = (r13 - r11) - getPaddingRight();
        goto L33
    L22:
        if (this.mCustomView != null) goto L26;
        if (r02.getVisibility() == 8) goto L26;
        r143 = r143 + positionChild(this.mTitleLayout, r143, r6, r122, r102);
        goto L26
    L9:
        if (r142.getVisibility() == 8) goto L18;
        ViewGroup.MarginLayoutParams r144 = (ViewGroup.MarginLayoutParams) this.mClose.getLayoutParams();
        if (r102 == false) goto L13;
        int r15 = r144.rightMargin;
    L14:
        if (r102 == false) goto L16;
        int r145 = r144.leftMargin;
    L17:
        int r8 = next(r0, r15, r102);
        r143 = next(r8 + positionChild(this.mClose, r8, r6, r122, r102), r145, r102);
        goto L19
    L16:
        r145 = r144.rightMargin;
        goto L17
    L13:
        r15 = r144.leftMargin;
        goto L14
    L5:
        r0 = getPaddingLeft();
        goto L6
    }

    @Override
    public void onInitializeAccessibilityEvent(AccessibilityEvent r3) {
        if (r3.getEventType() != 32) goto L5;
        r3.setSource(this);
        r3.setClassName(getClass().getName());
        r3.setPackageName(getContext().getPackageName());
        r3.setContentDescription(this.mTitle);
        return;
    L5:
        super.onInitializeAccessibilityEvent(r3);
    }

    public void setTitleOptional(boolean r2) {
        if (r2 == this.mTitleOptional) goto L5;
        requestLayout();
    L5:
        this.mTitleOptional = r2;
    }

    public boolean isTitleOptional() {
        return this.mTitleOptional;
    }
}
