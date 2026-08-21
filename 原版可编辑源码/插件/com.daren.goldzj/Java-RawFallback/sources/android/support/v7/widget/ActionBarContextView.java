package android.support.v7.widget;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class ActionBarContextView extends android.support.v7.widget.AbsActionBarView {
    private static final java.lang.String TAG = "ActionBarContextView";
    private android.view.View mClose;
    private int mCloseItemLayout;
    private android.view.View mCustomView;
    private java.lang.CharSequence mSubtitle;
    private int mSubtitleStyleRes;
    private android.widget.TextView mSubtitleView;
    private java.lang.CharSequence mTitle;
    private android.widget.LinearLayout mTitleLayout;
    private boolean mTitleOptional;
    private int mTitleStyleRes;
    private android.widget.TextView mTitleView;


    public ActionBarContextView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ActionBarContextView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.v7.appcompat.R.attr.actionModeStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public ActionBarContextView(android.content.Context r3, android.util.AttributeSet r4, int r5) {
            r2 = this;
            r2.<init>(r3, r4, r5)
            int[] r0 = android.support.v7.appcompat.R.styleable.ActionMode
            r1 = 0
            android.support.v7.widget.TintTypedArray r3 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r3, r4, r0, r5, r1)
            int r4 = android.support.v7.appcompat.R.styleable.ActionMode_background
            android.graphics.drawable.Drawable r4 = r3.getDrawable(r4)
            android.support.v4.view.ViewCompat.setBackground(r2, r4)
            int r4 = android.support.v7.appcompat.R.styleable.ActionMode_titleTextStyle
            int r4 = r3.getResourceId(r4, r1)
            r2.mTitleStyleRes = r4
            int r4 = android.support.v7.appcompat.R.styleable.ActionMode_subtitleTextStyle
            int r4 = r3.getResourceId(r4, r1)
            r2.mSubtitleStyleRes = r4
            int r4 = android.support.v7.appcompat.R.styleable.ActionMode_height
            int r4 = r3.getLayoutDimension(r4, r1)
            r2.mContentHeight = r4
            int r4 = android.support.v7.appcompat.R.styleable.ActionMode_closeItemLayout
            int r5 = android.support.v7.appcompat.R.layout.abc_action_mode_close_item_material
            int r4 = r3.getResourceId(r4, r5)
            r2.mCloseItemLayout = r4
            r3.recycle()
            return
    }

    private void initTitle() {
            r6 = this;
            android.widget.LinearLayout r0 = r6.mTitleLayout
            if (r0 != 0) goto L55
            android.content.Context r0 = r6.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            int r1 = android.support.v7.appcompat.R.layout.abc_action_bar_title_item
            r0.inflate(r1, r6)
            int r0 = r6.getChildCount()
            int r0 = r0 + (-1)
            android.view.View r0 = r6.getChildAt(r0)
            android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
            r6.mTitleLayout = r0
            android.widget.LinearLayout r0 = r6.mTitleLayout
            int r1 = android.support.v7.appcompat.R.id.action_bar_title
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r6.mTitleView = r0
            android.widget.LinearLayout r0 = r6.mTitleLayout
            int r1 = android.support.v7.appcompat.R.id.action_bar_subtitle
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r6.mSubtitleView = r0
            int r0 = r6.mTitleStyleRes
            if (r0 == 0) goto L46
            android.widget.TextView r0 = r6.mTitleView
            android.content.Context r1 = r6.getContext()
            int r2 = r6.mTitleStyleRes
            r0.setTextAppearance(r1, r2)
        L46:
            int r0 = r6.mSubtitleStyleRes
            if (r0 == 0) goto L55
            android.widget.TextView r0 = r6.mSubtitleView
            android.content.Context r1 = r6.getContext()
            int r2 = r6.mSubtitleStyleRes
            r0.setTextAppearance(r1, r2)
        L55:
            android.widget.TextView r0 = r6.mTitleView
            java.lang.CharSequence r1 = r6.mTitle
            r0.setText(r1)
            android.widget.TextView r0 = r6.mSubtitleView
            java.lang.CharSequence r1 = r6.mSubtitle
            r0.setText(r1)
            java.lang.CharSequence r0 = r6.mTitle
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r0 = r0 ^ 1
            java.lang.CharSequence r1 = r6.mSubtitle
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r1 = r1 ^ 1
            android.widget.TextView r2 = r6.mSubtitleView
            r3 = 0
            r4 = 8
            if (r1 == 0) goto L7c
            r5 = 0
            goto L7e
        L7c:
            r5 = 8
        L7e:
            r2.setVisibility(r5)
            android.widget.LinearLayout r2 = r6.mTitleLayout
            if (r0 != 0) goto L8a
            if (r1 == 0) goto L88
            goto L8a
        L88:
            r3 = 8
        L8a:
            r2.setVisibility(r3)
            android.widget.LinearLayout r0 = r6.mTitleLayout
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L9a
            android.widget.LinearLayout r0 = r6.mTitleLayout
            r6.addView(r0)
        L9a:
            return
    }

    @Override
    public void animateToVisibility(int r1) {
            r0 = this;
            super.animateToVisibility(r1)
            return
    }

    @Override
    public boolean canShowOverflowMenu() {
            r1 = this;
            boolean r0 = super.canShowOverflowMenu()
            return r0
    }

    public void closeMode() {
            r1 = this;
            android.view.View r0 = r1.mClose
            if (r0 != 0) goto L7
            r1.killMode()
        L7:
            return
    }

    @Override
    public void dismissPopupMenus() {
            r0 = this;
            super.dismissPopupMenus()
            return
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateDefaultLayoutParams() {
            r3 = this;
            android.view.ViewGroup$MarginLayoutParams r0 = new android.view.ViewGroup$MarginLayoutParams
            r1 = -1
            r2 = -2
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet r3) {
            r2 = this;
            android.view.ViewGroup$MarginLayoutParams r0 = new android.view.ViewGroup$MarginLayoutParams
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1, r3)
            return r0
    }

    @Override
    public int getAnimatedVisibility() {
            r1 = this;
            int r0 = super.getAnimatedVisibility()
            return r0
    }

    @Override
    public int getContentHeight() {
            r1 = this;
            int r0 = super.getContentHeight()
            return r0
    }

    public java.lang.CharSequence getSubtitle() {
            r1 = this;
            java.lang.CharSequence r0 = r1.mSubtitle
            return r0
    }

    public java.lang.CharSequence getTitle() {
            r1 = this;
            java.lang.CharSequence r0 = r1.mTitle
            return r0
    }

    @Override
    public boolean hideOverflowMenu() {
            r1 = this;
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mActionMenuPresenter
            if (r0 == 0) goto Lb
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mActionMenuPresenter
            boolean r0 = r0.hideOverflowMenu()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public void initForMode(android.support.v7.view.ActionMode r4) {
            r3 = this;
            android.view.View r0 = r3.mClose
            if (r0 != 0) goto L1b
            android.content.Context r0 = r3.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            int r1 = r3.mCloseItemLayout
            r2 = 0
            android.view.View r0 = r0.inflate(r1, r3, r2)
            r3.mClose = r0
            android.view.View r0 = r3.mClose
            r3.addView(r0)
            goto L26
        L1b:
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L26
            android.view.View r0 = r3.mClose
            r3.addView(r0)
        L26:
            android.view.View r0 = r3.mClose
            int r1 = android.support.v7.appcompat.R.id.action_mode_close_button
            android.view.View r0 = r0.findViewById(r1)
            android.support.v7.widget.ActionBarContextView$1 r1 = new android.support.v7.widget.ActionBarContextView$1
            r1.<init>(r3, r4)
            r0.setOnClickListener(r1)
            android.view.Menu r4 = r4.getMenu()
            android.support.v7.view.menu.MenuBuilder r4 = (android.support.v7.view.menu.MenuBuilder) r4
            android.support.v7.widget.ActionMenuPresenter r0 = r3.mActionMenuPresenter
            if (r0 == 0) goto L45
            android.support.v7.widget.ActionMenuPresenter r0 = r3.mActionMenuPresenter
            r0.dismissPopupMenus()
        L45:
            android.support.v7.widget.ActionMenuPresenter r0 = new android.support.v7.widget.ActionMenuPresenter
            android.content.Context r1 = r3.getContext()
            r0.<init>(r1)
            r3.mActionMenuPresenter = r0
            android.support.v7.widget.ActionMenuPresenter r0 = r3.mActionMenuPresenter
            r1 = 1
            r0.setReserveOverflow(r1)
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r1 = -2
            r2 = -1
            r0.<init>(r1, r2)
            android.support.v7.widget.ActionMenuPresenter r1 = r3.mActionMenuPresenter
            android.content.Context r2 = r3.mPopupContext
            r4.addMenuPresenter(r1, r2)
            android.support.v7.widget.ActionMenuPresenter r4 = r3.mActionMenuPresenter
            android.support.v7.view.menu.MenuView r4 = r4.getMenuView(r3)
            android.support.v7.widget.ActionMenuView r4 = (android.support.v7.widget.ActionMenuView) r4
            r3.mMenuView = r4
            android.support.v7.widget.ActionMenuView r4 = r3.mMenuView
            r1 = 0
            android.support.v4.view.ViewCompat.setBackground(r4, r1)
            android.support.v7.widget.ActionMenuView r4 = r3.mMenuView
            r3.addView(r4, r0)
            return
    }

    @Override
    public boolean isOverflowMenuShowPending() {
            r1 = this;
            boolean r0 = super.isOverflowMenuShowPending()
            return r0
    }

    @Override
    public boolean isOverflowMenuShowing() {
            r1 = this;
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mActionMenuPresenter
            if (r0 == 0) goto Lb
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mActionMenuPresenter
            boolean r0 = r0.isOverflowMenuShowing()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    @Override
    public boolean isOverflowReserved() {
            r1 = this;
            boolean r0 = super.isOverflowReserved()
            return r0
    }

    public boolean isTitleOptional() {
            r1 = this;
            boolean r0 = r1.mTitleOptional
            return r0
    }

    public void killMode() {
            r1 = this;
            r1.removeAllViews()
            r0 = 0
            r1.mCustomView = r0
            r1.mMenuView = r0
            return
    }

    @Override
    public void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mActionMenuPresenter
            if (r0 == 0) goto L11
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mActionMenuPresenter
            r0.hideOverflowMenu()
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mActionMenuPresenter
            r0.hideSubMenus()
        L11:
            return
    }

    @Override
    public boolean onHoverEvent(android.view.MotionEvent r1) {
            r0 = this;
            boolean r1 = super.onHoverEvent(r1)
            return r1
    }

    @Override
    public void onInitializeAccessibilityEvent(android.view.accessibility.AccessibilityEvent r3) {
            r2 = this;
            int r0 = r3.getEventType()
            r1 = 32
            if (r0 != r1) goto L27
            r3.setSource(r2)
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getName()
            r3.setClassName(r0)
            android.content.Context r0 = r2.getContext()
            java.lang.String r0 = r0.getPackageName()
            r3.setPackageName(r0)
            java.lang.CharSequence r0 = r2.mTitle
            r3.setContentDescription(r0)
            goto L2a
        L27:
            super.onInitializeAccessibilityEvent(r3)
        L2a:
            return
    }

    @Override
    protected void onLayout(boolean r10, int r11, int r12, int r13, int r14) {
            r9 = this;
            boolean r10 = android.support.v7.widget.ViewUtils.isLayoutRtl(r9)
            if (r10 == 0) goto Le
            int r0 = r13 - r11
            int r1 = r9.getPaddingRight()
            int r0 = r0 - r1
            goto L12
        Le:
            int r0 = r9.getPaddingLeft()
        L12:
            int r6 = r9.getPaddingTop()
            int r14 = r14 - r12
            int r12 = r9.getPaddingTop()
            int r14 = r14 - r12
            int r12 = r9.getPaddingBottom()
            int r12 = r14 - r12
            android.view.View r14 = r9.mClose
            r7 = 8
            if (r14 == 0) goto L59
            int r14 = r14.getVisibility()
            if (r14 == r7) goto L59
            android.view.View r14 = r9.mClose
            android.view.ViewGroup$LayoutParams r14 = r14.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r14 = (android.view.ViewGroup.MarginLayoutParams) r14
            if (r10 == 0) goto L3b
            int r1 = r14.rightMargin
            goto L3d
        L3b:
            int r1 = r14.leftMargin
        L3d:
            if (r10 == 0) goto L42
            int r14 = r14.leftMargin
            goto L44
        L42:
            int r14 = r14.rightMargin
        L44:
            int r8 = next(r0, r1, r10)
            android.view.View r1 = r9.mClose
            r0 = r9
            r2 = r8
            r3 = r6
            r4 = r12
            r5 = r10
            int r0 = r0.positionChild(r1, r2, r3, r4, r5)
            int r8 = r8 + r0
            int r14 = next(r8, r14, r10)
            goto L5a
        L59:
            r14 = r0
        L5a:
            android.widget.LinearLayout r0 = r9.mTitleLayout
            if (r0 == 0) goto L74
            android.view.View r1 = r9.mCustomView
            if (r1 != 0) goto L74
            int r0 = r0.getVisibility()
            if (r0 == r7) goto L74
            android.widget.LinearLayout r1 = r9.mTitleLayout
            r0 = r9
            r2 = r14
            r3 = r6
            r4 = r12
            r5 = r10
            int r0 = r0.positionChild(r1, r2, r3, r4, r5)
            int r14 = r14 + r0
        L74:
            r2 = r14
            android.view.View r1 = r9.mCustomView
            if (r1 == 0) goto L80
            r0 = r9
            r3 = r6
            r4 = r12
            r5 = r10
            r0.positionChild(r1, r2, r3, r4, r5)
        L80:
            if (r10 == 0) goto L88
            int r11 = r9.getPaddingLeft()
            r3 = r11
            goto L8f
        L88:
            int r13 = r13 - r11
            int r11 = r9.getPaddingRight()
            int r13 = r13 - r11
            r3 = r13
        L8f:
            android.support.v7.widget.ActionMenuView r11 = r9.mMenuView
            if (r11 == 0) goto L9e
            android.support.v7.widget.ActionMenuView r2 = r9.mMenuView
            r10 = r10 ^ 1
            r1 = r9
            r4 = r6
            r5 = r12
            r6 = r10
            r1.positionChild(r2, r3, r4, r5, r6)
        L9e:
            return
    }

    @Override
    protected void onMeasure(int r11, int r12) {
            r10 = this;
            int r0 = android.view.View.MeasureSpec.getMode(r11)
            java.lang.String r1 = " can only be used "
            r2 = 1073741824(0x40000000, float:2.0)
            if (r0 != r2) goto L115
            int r0 = android.view.View.MeasureSpec.getMode(r12)
            if (r0 == 0) goto Lf3
            int r11 = android.view.View.MeasureSpec.getSize(r11)
            int r0 = r10.mContentHeight
            if (r0 <= 0) goto L1b
            int r12 = r10.mContentHeight
            goto L1f
        L1b:
            int r12 = android.view.View.MeasureSpec.getSize(r12)
        L1f:
            int r0 = r10.getPaddingTop()
            int r1 = r10.getPaddingBottom()
            int r0 = r0 + r1
            int r1 = r10.getPaddingLeft()
            int r1 = r11 - r1
            int r3 = r10.getPaddingRight()
            int r1 = r1 - r3
            int r3 = r12 - r0
            r4 = -2147483648(0xffffffff80000000, float:-0.0)
            int r5 = android.view.View.MeasureSpec.makeMeasureSpec(r3, r4)
            android.view.View r6 = r10.mClose
            r7 = 0
            if (r6 == 0) goto L52
            int r1 = r10.measureChildView(r6, r1, r5, r7)
            android.view.View r6 = r10.mClose
            android.view.ViewGroup$LayoutParams r6 = r6.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r6 = (android.view.ViewGroup.MarginLayoutParams) r6
            int r8 = r6.leftMargin
            int r6 = r6.rightMargin
            int r8 = r8 + r6
            int r1 = r1 - r8
        L52:
            android.support.v7.widget.ActionMenuView r6 = r10.mMenuView
            if (r6 == 0) goto L64
            android.support.v7.widget.ActionMenuView r6 = r10.mMenuView
            android.view.ViewParent r6 = r6.getParent()
            if (r6 != r10) goto L64
            android.support.v7.widget.ActionMenuView r6 = r10.mMenuView
            int r1 = r10.measureChildView(r6, r1, r5, r7)
        L64:
            android.widget.LinearLayout r6 = r10.mTitleLayout
            if (r6 == 0) goto L97
            android.view.View r8 = r10.mCustomView
            if (r8 != 0) goto L97
            boolean r8 = r10.mTitleOptional
            if (r8 == 0) goto L93
            int r6 = android.view.View.MeasureSpec.makeMeasureSpec(r7, r7)
            android.widget.LinearLayout r8 = r10.mTitleLayout
            r8.measure(r6, r5)
            android.widget.LinearLayout r5 = r10.mTitleLayout
            int r5 = r5.getMeasuredWidth()
            if (r5 > r1) goto L83
            r6 = 1
            goto L84
        L83:
            r6 = 0
        L84:
            if (r6 == 0) goto L87
            int r1 = r1 - r5
        L87:
            android.widget.LinearLayout r5 = r10.mTitleLayout
            if (r6 == 0) goto L8d
            r6 = 0
            goto L8f
        L8d:
            r6 = 8
        L8f:
            r5.setVisibility(r6)
            goto L97
        L93:
            int r1 = r10.measureChildView(r6, r1, r5, r7)
        L97:
            android.view.View r5 = r10.mCustomView
            if (r5 == 0) goto Ld1
            android.view.ViewGroup$LayoutParams r5 = r5.getLayoutParams()
            int r6 = r5.width
            r8 = -2
            if (r6 == r8) goto La7
            r6 = 1073741824(0x40000000, float:2.0)
            goto La9
        La7:
            r6 = -2147483648(0xffffffff80000000, float:-0.0)
        La9:
            int r9 = r5.width
            if (r9 < 0) goto Lb3
            int r9 = r5.width
            int r1 = java.lang.Math.min(r9, r1)
        Lb3:
            int r9 = r5.height
            if (r9 == r8) goto Lb8
            goto Lba
        Lb8:
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
        Lba:
            int r4 = r5.height
            if (r4 < 0) goto Lc4
            int r4 = r5.height
            int r3 = java.lang.Math.min(r4, r3)
        Lc4:
            android.view.View r4 = r10.mCustomView
            int r1 = android.view.View.MeasureSpec.makeMeasureSpec(r1, r6)
            int r2 = android.view.View.MeasureSpec.makeMeasureSpec(r3, r2)
            r4.measure(r1, r2)
        Ld1:
            int r1 = r10.mContentHeight
            if (r1 > 0) goto Lef
            int r12 = r10.getChildCount()
            r1 = 0
        Lda:
            if (r7 >= r12) goto Leb
            android.view.View r2 = r10.getChildAt(r7)
            int r2 = r2.getMeasuredHeight()
            int r2 = r2 + r0
            if (r2 <= r1) goto Le8
            r1 = r2
        Le8:
            int r7 = r7 + 1
            goto Lda
        Leb:
            r10.setMeasuredDimension(r11, r1)
            goto Lf2
        Lef:
            r10.setMeasuredDimension(r11, r12)
        Lf2:
            return
        Lf3:
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.Class r0 = r10.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r12.append(r0)
            r12.append(r1)
            java.lang.String r0 = "with android:layout_height=\"wrap_content\""
            r12.append(r0)
            java.lang.String r12 = r12.toString()
            r11.<init>(r12)
            throw r11
        L115:
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.Class r0 = r10.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r12.append(r0)
            r12.append(r1)
            java.lang.String r0 = "with android:layout_width=\"match_parent\" (or fill_parent)"
            r12.append(r0)
            java.lang.String r12 = r12.toString()
            r11.<init>(r12)
            throw r11
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r1) {
            r0 = this;
            boolean r1 = super.onTouchEvent(r1)
            return r1
    }

    @Override
    public void postShowOverflowMenu() {
            r0 = this;
            super.postShowOverflowMenu()
            return
    }

    @Override
    public void setContentHeight(int r1) {
            r0 = this;
            r0.mContentHeight = r1
            return
    }

    public void setCustomView(android.view.View r2) {
            r1 = this;
            android.view.View r0 = r1.mCustomView
            if (r0 == 0) goto L7
            r1.removeView(r0)
        L7:
            r1.mCustomView = r2
            if (r2 == 0) goto L15
            android.widget.LinearLayout r0 = r1.mTitleLayout
            if (r0 == 0) goto L15
            r1.removeView(r0)
            r0 = 0
            r1.mTitleLayout = r0
        L15:
            if (r2 == 0) goto L1a
            r1.addView(r2)
        L1a:
            r1.requestLayout()
            return
    }

    public void setSubtitle(java.lang.CharSequence r1) {
            r0 = this;
            r0.mSubtitle = r1
            r0.initTitle()
            return
    }

    public void setTitle(java.lang.CharSequence r1) {
            r0 = this;
            r0.mTitle = r1
            r0.initTitle()
            return
    }

    public void setTitleOptional(boolean r2) {
            r1 = this;
            boolean r0 = r1.mTitleOptional
            if (r2 == r0) goto L7
            r1.requestLayout()
        L7:
            r1.mTitleOptional = r2
            return
    }

    @Override
    public void setVisibility(int r1) {
            r0 = this;
            super.setVisibility(r1)
            return
    }

    @Override
    public android.support.v4.view.ViewPropertyAnimatorCompat setupAnimatorToVisibility(int r1, long r2) {
            r0 = this;
            android.support.v4.view.ViewPropertyAnimatorCompat r1 = super.setupAnimatorToVisibility(r1, r2)
            return r1
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
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mActionMenuPresenter
            if (r0 == 0) goto Lb
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mActionMenuPresenter
            boolean r0 = r0.showOverflowMenu()
            return r0
        Lb:
            r0 = 0
            return r0
    }
}
