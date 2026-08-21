package android.support.design.internal;

public class BottomNavigationMenuView extends android.view.ViewGroup implements android.support.v7.view.menu.MenuView {
    private static final long ACTIVE_ANIMATION_DURATION_MS = 115;
    private static final int[] CHECKED_STATE_SET = null;
    private static final int[] DISABLED_STATE_SET = null;
    private final int activeItemMaxWidth;
    private final int activeItemMinWidth;
    private android.support.design.internal.BottomNavigationItemView[] buttons;
    private final int inactiveItemMaxWidth;
    private final int inactiveItemMinWidth;
    private android.graphics.drawable.Drawable itemBackground;
    private int itemBackgroundRes;
    private final int itemHeight;
    private boolean itemHorizontalTranslationEnabled;
    private int itemIconSize;
    private android.content.res.ColorStateList itemIconTint;
    private final android.support.v4.util.Pools.Pool<android.support.design.internal.BottomNavigationItemView> itemPool;
    private int itemTextAppearanceActive;
    private int itemTextAppearanceInactive;
    private final android.content.res.ColorStateList itemTextColorDefault;
    private android.content.res.ColorStateList itemTextColorFromUser;
    private int labelVisibilityMode;
    private android.support.v7.view.menu.MenuBuilder menu;
    private final android.view.View.OnClickListener onClickListener;
    private android.support.design.internal.BottomNavigationPresenter presenter;
    private int selectedItemId;
    private int selectedItemPosition;
    private final android.support.transition.TransitionSet set;
    private int[] tempChildWidths;


    static {
            r0 = 1
            int[] r1 = new int[r0]
            r2 = 16842912(0x10100a0, float:2.3694006E-38)
            r3 = 0
            r1[r3] = r2
            android.support.design.internal.BottomNavigationMenuView.CHECKED_STATE_SET = r1
            int[] r0 = new int[r0]
            r1 = -16842910(0xfffffffffefeff62, float:-1.6947497E38)
            r0[r3] = r1
            android.support.design.internal.BottomNavigationMenuView.DISABLED_STATE_SET = r0
            return
    }

    public BottomNavigationMenuView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public BottomNavigationMenuView(android.content.Context r3, android.util.AttributeSet r4) {
            r2 = this;
            r2.<init>(r3, r4)
            android.support.v4.util.Pools$SynchronizedPool r3 = new android.support.v4.util.Pools$SynchronizedPool
            r4 = 5
            r3.<init>(r4)
            r2.itemPool = r3
            r3 = 0
            r2.selectedItemId = r3
            r2.selectedItemPosition = r3
            android.content.res.Resources r0 = r2.getResources()
            int r1 = android.support.design.R.dimen.design_bottom_navigation_item_max_width
            int r1 = r0.getDimensionPixelSize(r1)
            r2.inactiveItemMaxWidth = r1
            int r1 = android.support.design.R.dimen.design_bottom_navigation_item_min_width
            int r1 = r0.getDimensionPixelSize(r1)
            r2.inactiveItemMinWidth = r1
            int r1 = android.support.design.R.dimen.design_bottom_navigation_active_item_max_width
            int r1 = r0.getDimensionPixelSize(r1)
            r2.activeItemMaxWidth = r1
            int r1 = android.support.design.R.dimen.design_bottom_navigation_active_item_min_width
            int r1 = r0.getDimensionPixelSize(r1)
            r2.activeItemMinWidth = r1
            int r1 = android.support.design.R.dimen.design_bottom_navigation_height
            int r0 = r0.getDimensionPixelSize(r1)
            r2.itemHeight = r0
            r0 = 16842808(0x1010038, float:2.3693715E-38)
            android.content.res.ColorStateList r0 = r2.createDefaultColorStateList(r0)
            r2.itemTextColorDefault = r0
            android.support.transition.AutoTransition r0 = new android.support.transition.AutoTransition
            r0.<init>()
            r2.set = r0
            r0.setOrdering(r3)
            android.support.transition.TransitionSet r3 = r2.set
            r0 = 115(0x73, double:5.7E-322)
            r3.setDuration(r0)
            android.support.transition.TransitionSet r3 = r2.set
            android.support.v4.view.animation.FastOutSlowInInterpolator r0 = new android.support.v4.view.animation.FastOutSlowInInterpolator
            r0.<init>()
            r3.setInterpolator(r0)
            android.support.transition.TransitionSet r3 = r2.set
            android.support.design.internal.TextScale r0 = new android.support.design.internal.TextScale
            r0.<init>()
            r3.addTransition(r0)
            android.support.design.internal.BottomNavigationMenuView$1 r3 = new android.support.design.internal.BottomNavigationMenuView$1
            r3.<init>(r2)
            r2.onClickListener = r3
            int[] r3 = new int[r4]
            r2.tempChildWidths = r3
            return
    }

    static android.support.design.internal.BottomNavigationPresenter access$000(android.support.design.internal.BottomNavigationMenuView r0) {
            android.support.design.internal.BottomNavigationPresenter r0 = r0.presenter
            return r0
    }

    static android.support.v7.view.menu.MenuBuilder access$100(android.support.design.internal.BottomNavigationMenuView r0) {
            android.support.v7.view.menu.MenuBuilder r0 = r0.menu
            return r0
    }

    private android.support.design.internal.BottomNavigationItemView getNewItem() {
            r2 = this;
            android.support.v4.util.Pools$Pool<android.support.design.internal.BottomNavigationItemView> r0 = r2.itemPool
            java.lang.Object r0 = r0.acquire()
            android.support.design.internal.BottomNavigationItemView r0 = (android.support.design.internal.BottomNavigationItemView) r0
            if (r0 != 0) goto L13
            android.support.design.internal.BottomNavigationItemView r0 = new android.support.design.internal.BottomNavigationItemView
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
        L13:
            return r0
    }

    private boolean isShifting(int r4, int r5) {
            r3 = this;
            r0 = 1
            r1 = 0
            r2 = -1
            if (r4 != r2) goto L9
            r4 = 3
            if (r5 <= r4) goto Lc
            goto Ld
        L9:
            if (r4 != 0) goto Lc
            goto Ld
        Lc:
            r0 = r1
        Ld:
            return r0
    }

    public void buildMenuView() {
            r6 = this;
            r6.removeAllViews()
            android.support.design.internal.BottomNavigationItemView[] r0 = r6.buttons
            r1 = 0
            if (r0 == 0) goto L18
            int r2 = r0.length
            r3 = r1
        La:
            if (r3 >= r2) goto L18
            r4 = r0[r3]
            if (r4 == 0) goto L15
            android.support.v4.util.Pools$Pool<android.support.design.internal.BottomNavigationItemView> r5 = r6.itemPool
            r5.release(r4)
        L15:
            int r3 = r3 + 1
            goto La
        L18:
            android.support.v7.view.menu.MenuBuilder r0 = r6.menu
            int r0 = r0.size()
            if (r0 != 0) goto L28
            r6.selectedItemId = r1
            r6.selectedItemPosition = r1
            r0 = 0
            r6.buttons = r0
            return
        L28:
            android.support.v7.view.menu.MenuBuilder r0 = r6.menu
            int r0 = r0.size()
            android.support.design.internal.BottomNavigationItemView[] r0 = new android.support.design.internal.BottomNavigationItemView[r0]
            r6.buttons = r0
            int r0 = r6.labelVisibilityMode
            android.support.v7.view.menu.MenuBuilder r2 = r6.menu
            java.util.ArrayList r2 = r2.getVisibleItems()
            int r2 = r2.size()
            boolean r0 = r6.isShifting(r0, r2)
            r2 = r1
        L43:
            android.support.v7.view.menu.MenuBuilder r3 = r6.menu
            int r3 = r3.size()
            r4 = 1
            if (r2 >= r3) goto Lb3
            android.support.design.internal.BottomNavigationPresenter r3 = r6.presenter
            r3.setUpdateSuspended(r4)
            android.support.v7.view.menu.MenuBuilder r3 = r6.menu
            android.view.MenuItem r3 = r3.getItem(r2)
            r3.setCheckable(r4)
            android.support.design.internal.BottomNavigationPresenter r3 = r6.presenter
            r3.setUpdateSuspended(r1)
            android.support.design.internal.BottomNavigationItemView r3 = r6.getNewItem()
            android.support.design.internal.BottomNavigationItemView[] r4 = r6.buttons
            r4[r2] = r3
            android.content.res.ColorStateList r4 = r6.itemIconTint
            r3.setIconTintList(r4)
            int r4 = r6.itemIconSize
            r3.setIconSize(r4)
            android.content.res.ColorStateList r4 = r6.itemTextColorDefault
            r3.setTextColor(r4)
            int r4 = r6.itemTextAppearanceInactive
            r3.setTextAppearanceInactive(r4)
            int r4 = r6.itemTextAppearanceActive
            r3.setTextAppearanceActive(r4)
            android.content.res.ColorStateList r4 = r6.itemTextColorFromUser
            r3.setTextColor(r4)
            android.graphics.drawable.Drawable r4 = r6.itemBackground
            if (r4 == 0) goto L8d
            r3.setItemBackground(r4)
            goto L92
        L8d:
            int r4 = r6.itemBackgroundRes
            r3.setItemBackground(r4)
        L92:
            r3.setShifting(r0)
            int r4 = r6.labelVisibilityMode
            r3.setLabelVisibilityMode(r4)
            android.support.v7.view.menu.MenuBuilder r4 = r6.menu
            android.view.MenuItem r4 = r4.getItem(r2)
            android.support.v7.view.menu.MenuItemImpl r4 = (android.support.v7.view.menu.MenuItemImpl) r4
            r3.initialize(r4, r1)
            r3.setItemPosition(r2)
            android.view.View$OnClickListener r4 = r6.onClickListener
            r3.setOnClickListener(r4)
            r6.addView(r3)
            int r2 = r2 + 1
            goto L43
        Lb3:
            android.support.v7.view.menu.MenuBuilder r0 = r6.menu
            int r0 = r0.size()
            int r0 = r0 - r4
            int r1 = r6.selectedItemPosition
            int r0 = java.lang.Math.min(r0, r1)
            r6.selectedItemPosition = r0
            android.support.v7.view.menu.MenuBuilder r1 = r6.menu
            android.view.MenuItem r0 = r1.getItem(r0)
            r0.setChecked(r4)
            return
    }

    public android.content.res.ColorStateList createDefaultColorStateList(int r10) {
            r9 = this;
            android.util.TypedValue r0 = new android.util.TypedValue
            r0.<init>()
            android.content.Context r1 = r9.getContext()
            android.content.res.Resources$Theme r1 = r1.getTheme()
            r2 = 1
            boolean r10 = r1.resolveAttribute(r10, r0, r2)
            r1 = 0
            if (r10 != 0) goto L16
            return r1
        L16:
            android.content.Context r10 = r9.getContext()
            int r3 = r0.resourceId
            android.content.res.ColorStateList r10 = android.support.v7.content.res.AppCompatResources.getColorStateList(r10, r3)
            android.content.Context r3 = r9.getContext()
            android.content.res.Resources$Theme r3 = r3.getTheme()
            int r4 = android.support.v7.appcompat.R.attr.colorPrimary
            boolean r3 = r3.resolveAttribute(r4, r0, r2)
            if (r3 != 0) goto L31
            return r1
        L31:
            int r0 = r0.data
            int r1 = r10.getDefaultColor()
            android.content.res.ColorStateList r3 = new android.content.res.ColorStateList
            r4 = 3
            int[][] r5 = new int[r4][]
            int[] r6 = android.support.design.internal.BottomNavigationMenuView.DISABLED_STATE_SET
            r7 = 0
            r5[r7] = r6
            int[] r6 = android.support.design.internal.BottomNavigationMenuView.CHECKED_STATE_SET
            r5[r2] = r6
            int[] r6 = android.support.design.internal.BottomNavigationMenuView.EMPTY_STATE_SET
            r8 = 2
            r5[r8] = r6
            int[] r4 = new int[r4]
            int[] r6 = android.support.design.internal.BottomNavigationMenuView.DISABLED_STATE_SET
            int r10 = r10.getColorForState(r6, r1)
            r4[r7] = r10
            r4[r2] = r0
            r4[r8] = r1
            r3.<init>(r5, r4)
            return r3
    }

    public android.content.res.ColorStateList getIconTintList() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.itemIconTint
            return r0
    }

    public android.graphics.drawable.Drawable getItemBackground() {
            r2 = this;
            android.support.design.internal.BottomNavigationItemView[] r0 = r2.buttons
            if (r0 == 0) goto Lf
            int r1 = r0.length
            if (r1 <= 0) goto Lf
            r1 = 0
            r0 = r0[r1]
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            return r0
        Lf:
            android.graphics.drawable.Drawable r0 = r2.itemBackground
            return r0
    }

    @java.lang.Deprecated
    public int getItemBackgroundRes() {
            r1 = this;
            int r0 = r1.itemBackgroundRes
            return r0
    }

    public int getItemIconSize() {
            r1 = this;
            int r0 = r1.itemIconSize
            return r0
    }

    public int getItemTextAppearanceActive() {
            r1 = this;
            int r0 = r1.itemTextAppearanceActive
            return r0
    }

    public int getItemTextAppearanceInactive() {
            r1 = this;
            int r0 = r1.itemTextAppearanceInactive
            return r0
    }

    public android.content.res.ColorStateList getItemTextColor() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.itemTextColorFromUser
            return r0
    }

    public int getLabelVisibilityMode() {
            r1 = this;
            int r0 = r1.labelVisibilityMode
            return r0
    }

    public int getSelectedItemId() {
            r1 = this;
            int r0 = r1.selectedItemId
            return r0
    }

    @Override
    public int getWindowAnimations() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void initialize(android.support.v7.view.menu.MenuBuilder r1) {
            r0 = this;
            r0.menu = r1
            return
    }

    public boolean isItemHorizontalTranslationEnabled() {
            r1 = this;
            boolean r0 = r1.itemHorizontalTranslationEnabled
            return r0
    }

    @Override
    protected void onLayout(boolean r5, int r6, int r7, int r8, int r9) {
            r4 = this;
            int r5 = r4.getChildCount()
            int r8 = r8 - r6
            int r9 = r9 - r7
            r6 = 0
            r7 = r6
            r0 = r7
        L9:
            if (r7 >= r5) goto L3b
            android.view.View r1 = r4.getChildAt(r7)
            int r2 = r1.getVisibility()
            r3 = 8
            if (r2 != r3) goto L18
            goto L38
        L18:
            int r2 = android.support.v4.view.ViewCompat.getLayoutDirection(r4)
            r3 = 1
            if (r2 != r3) goto L2b
            int r2 = r8 - r0
            int r3 = r1.getMeasuredWidth()
            int r3 = r2 - r3
            r1.layout(r3, r6, r2, r9)
            goto L33
        L2b:
            int r2 = r1.getMeasuredWidth()
            int r2 = r2 + r0
            r1.layout(r0, r6, r2, r9)
        L33:
            int r1 = r1.getMeasuredWidth()
            int r0 = r0 + r1
        L38:
            int r7 = r7 + 1
            goto L9
        L3b:
            return
    }

    @Override
    protected void onMeasure(int r11, int r12) {
            r10 = this;
            int r11 = android.view.View.MeasureSpec.getSize(r11)
            android.support.v7.view.menu.MenuBuilder r12 = r10.menu
            java.util.ArrayList r12 = r12.getVisibleItems()
            int r12 = r12.size()
            int r0 = r10.getChildCount()
            int r1 = r10.itemHeight
            r2 = 1073741824(0x40000000, float:2.0)
            int r1 = android.view.View.MeasureSpec.makeMeasureSpec(r1, r2)
            int r3 = r10.labelVisibilityMode
            boolean r3 = r10.isShifting(r3, r12)
            r4 = 8
            r5 = 1
            r6 = 0
            if (r3 == 0) goto L9f
            boolean r3 = r10.itemHorizontalTranslationEnabled
            if (r3 == 0) goto L9f
            int r3 = r10.selectedItemPosition
            android.view.View r3 = r10.getChildAt(r3)
            int r7 = r10.activeItemMinWidth
            int r8 = r3.getVisibility()
            if (r8 == r4) goto L4b
            int r8 = r10.activeItemMaxWidth
            r9 = -2147483648(0xffffffff80000000, float:-0.0)
            int r8 = android.view.View.MeasureSpec.makeMeasureSpec(r8, r9)
            r3.measure(r8, r1)
            int r8 = r3.getMeasuredWidth()
            int r7 = java.lang.Math.max(r7, r8)
        L4b:
            int r3 = r3.getVisibility()
            if (r3 == r4) goto L53
            r3 = r5
            goto L54
        L53:
            r3 = r6
        L54:
            int r12 = r12 - r3
            int r3 = r10.inactiveItemMinWidth
            int r3 = r3 * r12
            int r3 = r11 - r3
            int r8 = r10.activeItemMaxWidth
            int r7 = java.lang.Math.min(r7, r8)
            int r3 = java.lang.Math.min(r3, r7)
            int r11 = r11 - r3
            if (r12 != 0) goto L69
            r7 = r5
            goto L6a
        L69:
            r7 = r12
        L6a:
            int r7 = r11 / r7
            int r8 = r10.inactiveItemMaxWidth
            int r7 = java.lang.Math.min(r7, r8)
            int r12 = r12 * r7
            int r11 = r11 - r12
            r12 = r6
        L75:
            if (r12 >= r0) goto Ld0
            android.view.View r8 = r10.getChildAt(r12)
            int r8 = r8.getVisibility()
            if (r8 == r4) goto L98
            int[] r8 = r10.tempChildWidths
            int r9 = r10.selectedItemPosition
            if (r12 != r9) goto L89
            r9 = r3
            goto L8a
        L89:
            r9 = r7
        L8a:
            r8[r12] = r9
            if (r11 <= 0) goto L9c
            int[] r8 = r10.tempChildWidths
            r9 = r8[r12]
            int r9 = r9 + r5
            r8[r12] = r9
            int r11 = r11 + (-1)
            goto L9c
        L98:
            int[] r8 = r10.tempChildWidths
            r8[r12] = r6
        L9c:
            int r12 = r12 + 1
            goto L75
        L9f:
            if (r12 != 0) goto La3
            r3 = r5
            goto La4
        La3:
            r3 = r12
        La4:
            int r3 = r11 / r3
            int r7 = r10.activeItemMaxWidth
            int r3 = java.lang.Math.min(r3, r7)
            int r12 = r12 * r3
            int r11 = r11 - r12
            r12 = r6
        Laf:
            if (r12 >= r0) goto Ld0
            android.view.View r7 = r10.getChildAt(r12)
            int r7 = r7.getVisibility()
            if (r7 == r4) goto Lc9
            int[] r7 = r10.tempChildWidths
            r7[r12] = r3
            if (r11 <= 0) goto Lcd
            r8 = r7[r12]
            int r8 = r8 + r5
            r7[r12] = r8
            int r11 = r11 + (-1)
            goto Lcd
        Lc9:
            int[] r7 = r10.tempChildWidths
            r7[r12] = r6
        Lcd:
            int r12 = r12 + 1
            goto Laf
        Ld0:
            r11 = r6
            r12 = r11
        Ld2:
            if (r11 >= r0) goto Lfc
            android.view.View r3 = r10.getChildAt(r11)
            int r5 = r3.getVisibility()
            if (r5 != r4) goto Ldf
            goto Lf9
        Ldf:
            int[] r5 = r10.tempChildWidths
            r5 = r5[r11]
            int r5 = android.view.View.MeasureSpec.makeMeasureSpec(r5, r2)
            r3.measure(r5, r1)
            android.view.ViewGroup$LayoutParams r5 = r3.getLayoutParams()
            int r7 = r3.getMeasuredWidth()
            r5.width = r7
            int r3 = r3.getMeasuredWidth()
            int r12 = r12 + r3
        Lf9:
            int r11 = r11 + 1
            goto Ld2
        Lfc:
            int r11 = android.view.View.MeasureSpec.makeMeasureSpec(r12, r2)
            int r11 = android.view.View.resolveSizeAndState(r12, r11, r6)
            int r12 = r10.itemHeight
            int r12 = android.view.View.resolveSizeAndState(r12, r1, r6)
            r10.setMeasuredDimension(r11, r12)
            return
    }

    public void setIconTintList(android.content.res.ColorStateList r5) {
            r4 = this;
            r4.itemIconTint = r5
            android.support.design.internal.BottomNavigationItemView[] r0 = r4.buttons
            if (r0 == 0) goto L12
            int r1 = r0.length
            r2 = 0
        L8:
            if (r2 >= r1) goto L12
            r3 = r0[r2]
            r3.setIconTintList(r5)
            int r2 = r2 + 1
            goto L8
        L12:
            return
    }

    public void setItemBackground(android.graphics.drawable.Drawable r5) {
            r4 = this;
            r4.itemBackground = r5
            android.support.design.internal.BottomNavigationItemView[] r0 = r4.buttons
            if (r0 == 0) goto L12
            int r1 = r0.length
            r2 = 0
        L8:
            if (r2 >= r1) goto L12
            r3 = r0[r2]
            r3.setItemBackground(r5)
            int r2 = r2 + 1
            goto L8
        L12:
            return
    }

    public void setItemBackgroundRes(int r5) {
            r4 = this;
            r4.itemBackgroundRes = r5
            android.support.design.internal.BottomNavigationItemView[] r0 = r4.buttons
            if (r0 == 0) goto L12
            int r1 = r0.length
            r2 = 0
        L8:
            if (r2 >= r1) goto L12
            r3 = r0[r2]
            r3.setItemBackground(r5)
            int r2 = r2 + 1
            goto L8
        L12:
            return
    }

    public void setItemHorizontalTranslationEnabled(boolean r1) {
            r0 = this;
            r0.itemHorizontalTranslationEnabled = r1
            return
    }

    public void setItemIconSize(int r5) {
            r4 = this;
            r4.itemIconSize = r5
            android.support.design.internal.BottomNavigationItemView[] r0 = r4.buttons
            if (r0 == 0) goto L12
            int r1 = r0.length
            r2 = 0
        L8:
            if (r2 >= r1) goto L12
            r3 = r0[r2]
            r3.setIconSize(r5)
            int r2 = r2 + 1
            goto L8
        L12:
            return
    }

    public void setItemTextAppearanceActive(int r6) {
            r5 = this;
            r5.itemTextAppearanceActive = r6
            android.support.design.internal.BottomNavigationItemView[] r0 = r5.buttons
            if (r0 == 0) goto L19
            int r1 = r0.length
            r2 = 0
        L8:
            if (r2 >= r1) goto L19
            r3 = r0[r2]
            r3.setTextAppearanceActive(r6)
            android.content.res.ColorStateList r4 = r5.itemTextColorFromUser
            if (r4 == 0) goto L16
            r3.setTextColor(r4)
        L16:
            int r2 = r2 + 1
            goto L8
        L19:
            return
    }

    public void setItemTextAppearanceInactive(int r6) {
            r5 = this;
            r5.itemTextAppearanceInactive = r6
            android.support.design.internal.BottomNavigationItemView[] r0 = r5.buttons
            if (r0 == 0) goto L19
            int r1 = r0.length
            r2 = 0
        L8:
            if (r2 >= r1) goto L19
            r3 = r0[r2]
            r3.setTextAppearanceInactive(r6)
            android.content.res.ColorStateList r4 = r5.itemTextColorFromUser
            if (r4 == 0) goto L16
            r3.setTextColor(r4)
        L16:
            int r2 = r2 + 1
            goto L8
        L19:
            return
    }

    public void setItemTextColor(android.content.res.ColorStateList r5) {
            r4 = this;
            r4.itemTextColorFromUser = r5
            android.support.design.internal.BottomNavigationItemView[] r0 = r4.buttons
            if (r0 == 0) goto L12
            int r1 = r0.length
            r2 = 0
        L8:
            if (r2 >= r1) goto L12
            r3 = r0[r2]
            r3.setTextColor(r5)
            int r2 = r2 + 1
            goto L8
        L12:
            return
    }

    public void setLabelVisibilityMode(int r1) {
            r0 = this;
            r0.labelVisibilityMode = r1
            return
    }

    public void setPresenter(android.support.design.internal.BottomNavigationPresenter r1) {
            r0 = this;
            r0.presenter = r1
            return
    }

    void tryRestoreSelectedItemId(int r5) {
            r4 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r4.menu
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L21
            android.support.v7.view.menu.MenuBuilder r2 = r4.menu
            android.view.MenuItem r2 = r2.getItem(r1)
            int r3 = r2.getItemId()
            if (r5 != r3) goto L1e
            r4.selectedItemId = r5
            r4.selectedItemPosition = r1
            r5 = 1
            r2.setChecked(r5)
            goto L21
        L1e:
            int r1 = r1 + 1
            goto L7
        L21:
            return
    }

    public void updateMenuView() {
            r6 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r6.menu
            if (r0 == 0) goto L7d
            android.support.design.internal.BottomNavigationItemView[] r1 = r6.buttons
            if (r1 != 0) goto La
            goto L7d
        La:
            int r0 = r0.size()
            android.support.design.internal.BottomNavigationItemView[] r1 = r6.buttons
            int r1 = r1.length
            if (r0 == r1) goto L17
            r6.buildMenuView()
            return
        L17:
            int r1 = r6.selectedItemId
            r2 = 0
            r3 = r2
        L1b:
            if (r3 >= r0) goto L34
            android.support.v7.view.menu.MenuBuilder r4 = r6.menu
            android.view.MenuItem r4 = r4.getItem(r3)
            boolean r5 = r4.isChecked()
            if (r5 == 0) goto L31
            int r4 = r4.getItemId()
            r6.selectedItemId = r4
            r6.selectedItemPosition = r3
        L31:
            int r3 = r3 + 1
            goto L1b
        L34:
            int r3 = r6.selectedItemId
            if (r1 == r3) goto L3d
            android.support.transition.TransitionSet r1 = r6.set
            android.support.transition.TransitionManager.beginDelayedTransition(r6, r1)
        L3d:
            int r1 = r6.labelVisibilityMode
            android.support.v7.view.menu.MenuBuilder r3 = r6.menu
            java.util.ArrayList r3 = r3.getVisibleItems()
            int r3 = r3.size()
            boolean r1 = r6.isShifting(r1, r3)
            r3 = r2
        L4e:
            if (r3 >= r0) goto L7d
            android.support.design.internal.BottomNavigationPresenter r4 = r6.presenter
            r5 = 1
            r4.setUpdateSuspended(r5)
            android.support.design.internal.BottomNavigationItemView[] r4 = r6.buttons
            r4 = r4[r3]
            int r5 = r6.labelVisibilityMode
            r4.setLabelVisibilityMode(r5)
            android.support.design.internal.BottomNavigationItemView[] r4 = r6.buttons
            r4 = r4[r3]
            r4.setShifting(r1)
            android.support.design.internal.BottomNavigationItemView[] r4 = r6.buttons
            r4 = r4[r3]
            android.support.v7.view.menu.MenuBuilder r5 = r6.menu
            android.view.MenuItem r5 = r5.getItem(r3)
            android.support.v7.view.menu.MenuItemImpl r5 = (android.support.v7.view.menu.MenuItemImpl) r5
            r4.initialize(r5, r2)
            android.support.design.internal.BottomNavigationPresenter r4 = r6.presenter
            r4.setUpdateSuspended(r2)
            int r3 = r3 + 1
            goto L4e
        L7d:
            return
    }
}
