package android.support.design.internal;

public class BottomNavigationItemView extends android.widget.FrameLayout implements android.support.v7.view.menu.MenuView.ItemView {
    private static final int[] CHECKED_STATE_SET = null;
    public static final int INVALID_ITEM_POSITION = -1;
    private final int defaultMargin;
    private android.widget.ImageView icon;
    private android.content.res.ColorStateList iconTint;
    private boolean isShifting;
    private android.support.v7.view.menu.MenuItemImpl itemData;
    private int itemPosition;
    private int labelVisibilityMode;
    private final android.widget.TextView largeLabel;
    private float scaleDownFactor;
    private float scaleUpFactor;
    private float shiftAmount;
    private final android.widget.TextView smallLabel;

    static {
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 0
            r2 = 16842912(0x10100a0, float:2.3694006E-38)
            r0[r1] = r2
            android.support.design.internal.BottomNavigationItemView.CHECKED_STATE_SET = r0
            return
    }

    public BottomNavigationItemView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public BottomNavigationItemView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public BottomNavigationItemView(android.content.Context r2, android.util.AttributeSet r3, int r4) {
            r1 = this;
            r1.<init>(r2, r3, r4)
            r3 = -1
            r1.itemPosition = r3
            android.content.res.Resources r3 = r1.getResources()
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r2)
            int r4 = android.support.design.R.layout.design_bottom_navigation_item
            r0 = 1
            r2.inflate(r4, r1, r0)
            int r2 = android.support.design.R.drawable.design_bottom_navigation_item_background
            r1.setBackgroundResource(r2)
            int r2 = android.support.design.R.dimen.design_bottom_navigation_margin
            int r2 = r3.getDimensionPixelSize(r2)
            r1.defaultMargin = r2
            int r2 = android.support.design.R.id.icon
            android.view.View r2 = r1.findViewById(r2)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r1.icon = r2
            int r2 = android.support.design.R.id.smallLabel
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.smallLabel = r2
            int r2 = android.support.design.R.id.largeLabel
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.largeLabel = r2
            android.widget.TextView r2 = r1.smallLabel
            r3 = 2
            android.support.v4.view.ViewCompat.setImportantForAccessibility(r2, r3)
            android.widget.TextView r2 = r1.largeLabel
            android.support.v4.view.ViewCompat.setImportantForAccessibility(r2, r3)
            r1.setFocusable(r0)
            android.widget.TextView r2 = r1.smallLabel
            float r2 = r2.getTextSize()
            android.widget.TextView r3 = r1.largeLabel
            float r3 = r3.getTextSize()
            r1.calculateTextScaleFactors(r2, r3)
            return
    }

    private void calculateTextScaleFactors(float r3, float r4) {
            r2 = this;
            float r0 = r3 - r4
            r2.shiftAmount = r0
            r0 = 1065353216(0x3f800000, float:1.0)
            float r1 = r4 * r0
            float r1 = r1 / r3
            r2.scaleUpFactor = r1
            float r3 = r3 * r0
            float r3 = r3 / r4
            r2.scaleDownFactor = r3
            return
    }

    private void setViewLayoutParams(android.view.View r2, int r3, int r4) {
            r1 = this;
            android.view.ViewGroup$LayoutParams r0 = r2.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0
            r0.topMargin = r3
            r0.gravity = r4
            r2.setLayoutParams(r0)
            return
    }

    private void setViewValues(android.view.View r1, float r2, float r3, int r4) {
            r0 = this;
            r1.setScaleX(r2)
            r1.setScaleY(r3)
            r1.setVisibility(r4)
            return
    }

    @Override
    public android.support.v7.view.menu.MenuItemImpl getItemData() {
            r1 = this;
            android.support.v7.view.menu.MenuItemImpl r0 = r1.itemData
            return r0
    }

    public int getItemPosition() {
            r1 = this;
            int r0 = r1.itemPosition
            return r0
    }

    @Override
    public void initialize(android.support.v7.view.menu.MenuItemImpl r1, int r2) {
            r0 = this;
            r0.itemData = r1
            boolean r2 = r1.isCheckable()
            r0.setCheckable(r2)
            boolean r2 = r1.isChecked()
            r0.setChecked(r2)
            boolean r2 = r1.isEnabled()
            r0.setEnabled(r2)
            android.graphics.drawable.Drawable r2 = r1.getIcon()
            r0.setIcon(r2)
            java.lang.CharSequence r2 = r1.getTitle()
            r0.setTitle(r2)
            int r2 = r1.getItemId()
            r0.setId(r2)
            java.lang.CharSequence r2 = r1.getContentDescription()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L3d
            java.lang.CharSequence r2 = r1.getContentDescription()
            r0.setContentDescription(r2)
        L3d:
            java.lang.CharSequence r2 = r1.getTooltipText()
            android.support.v7.widget.TooltipCompat.setTooltipText(r0, r2)
            boolean r1 = r1.isVisible()
            if (r1 == 0) goto L4c
            r1 = 0
            goto L4e
        L4c:
            r1 = 8
        L4e:
            r0.setVisibility(r1)
            return
    }

    @Override
    public int[] onCreateDrawableState(int r2) {
            r1 = this;
            int r2 = r2 + 1
            int[] r2 = super.onCreateDrawableState(r2)
            android.support.v7.view.menu.MenuItemImpl r0 = r1.itemData
            if (r0 == 0) goto L1d
            boolean r0 = r0.isCheckable()
            if (r0 == 0) goto L1d
            android.support.v7.view.menu.MenuItemImpl r0 = r1.itemData
            boolean r0 = r0.isChecked()
            if (r0 == 0) goto L1d
            int[] r0 = android.support.design.internal.BottomNavigationItemView.CHECKED_STATE_SET
            mergeDrawableStates(r2, r0)
        L1d:
            return r2
    }

    @Override
    public boolean prefersCondensedTitle() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void setCheckable(boolean r1) {
            r0 = this;
            r0.refreshDrawableState()
            return
    }

    @Override
    public void setChecked(boolean r10) {
            r9 = this;
            android.widget.TextView r0 = r9.largeLabel
            int r1 = r0.getWidth()
            r2 = 2
            int r1 = r1 / r2
            float r1 = (float) r1
            r0.setPivotX(r1)
            android.widget.TextView r0 = r9.largeLabel
            int r1 = r0.getBaseline()
            float r1 = (float) r1
            r0.setPivotY(r1)
            android.widget.TextView r0 = r9.smallLabel
            int r1 = r0.getWidth()
            int r1 = r1 / r2
            float r1 = (float) r1
            r0.setPivotX(r1)
            android.widget.TextView r0 = r9.smallLabel
            int r1 = r0.getBaseline()
            float r1 = (float) r1
            r0.setPivotY(r1)
            int r0 = r9.labelVisibilityMode
            r1 = -1
            r3 = 17
            r4 = 1056964608(0x3f000000, float:0.5)
            r5 = 0
            r6 = 49
            r7 = 4
            r8 = 1065353216(0x3f800000, float:1.0)
            if (r0 == r1) goto Laa
            if (r0 == 0) goto L89
            r1 = 1
            if (r0 == r1) goto L58
            if (r0 == r2) goto L43
            goto Lfd
        L43:
            android.widget.ImageView r0 = r9.icon
            int r1 = r9.defaultMargin
            r9.setViewLayoutParams(r0, r1, r3)
            android.widget.TextView r0 = r9.largeLabel
            r1 = 8
            r0.setVisibility(r1)
            android.widget.TextView r0 = r9.smallLabel
            r0.setVisibility(r1)
            goto Lfd
        L58:
            if (r10 == 0) goto L74
            android.widget.ImageView r0 = r9.icon
            int r1 = r9.defaultMargin
            float r1 = (float) r1
            float r2 = r9.shiftAmount
            float r1 = r1 + r2
            int r1 = (int) r1
            r9.setViewLayoutParams(r0, r1, r6)
            android.widget.TextView r0 = r9.largeLabel
            r9.setViewValues(r0, r8, r8, r5)
            android.widget.TextView r0 = r9.smallLabel
            float r1 = r9.scaleUpFactor
            r9.setViewValues(r0, r1, r1, r7)
            goto Lfd
        L74:
            android.widget.ImageView r0 = r9.icon
            int r1 = r9.defaultMargin
            r9.setViewLayoutParams(r0, r1, r6)
            android.widget.TextView r0 = r9.largeLabel
            float r1 = r9.scaleDownFactor
            r9.setViewValues(r0, r1, r1, r7)
            android.widget.TextView r0 = r9.smallLabel
            r9.setViewValues(r0, r8, r8, r5)
            goto Lfd
        L89:
            if (r10 == 0) goto L98
            android.widget.ImageView r0 = r9.icon
            int r1 = r9.defaultMargin
            r9.setViewLayoutParams(r0, r1, r6)
            android.widget.TextView r0 = r9.largeLabel
            r9.setViewValues(r0, r8, r8, r5)
            goto La4
        L98:
            android.widget.ImageView r0 = r9.icon
            int r1 = r9.defaultMargin
            r9.setViewLayoutParams(r0, r1, r3)
            android.widget.TextView r0 = r9.largeLabel
            r9.setViewValues(r0, r4, r4, r7)
        La4:
            android.widget.TextView r0 = r9.smallLabel
            r0.setVisibility(r7)
            goto Lfd
        Laa:
            boolean r0 = r9.isShifting
            if (r0 == 0) goto Lcf
            if (r10 == 0) goto Lbd
            android.widget.ImageView r0 = r9.icon
            int r1 = r9.defaultMargin
            r9.setViewLayoutParams(r0, r1, r6)
            android.widget.TextView r0 = r9.largeLabel
            r9.setViewValues(r0, r8, r8, r5)
            goto Lc9
        Lbd:
            android.widget.ImageView r0 = r9.icon
            int r1 = r9.defaultMargin
            r9.setViewLayoutParams(r0, r1, r3)
            android.widget.TextView r0 = r9.largeLabel
            r9.setViewValues(r0, r4, r4, r7)
        Lc9:
            android.widget.TextView r0 = r9.smallLabel
            r0.setVisibility(r7)
            goto Lfd
        Lcf:
            if (r10 == 0) goto Lea
            android.widget.ImageView r0 = r9.icon
            int r1 = r9.defaultMargin
            float r1 = (float) r1
            float r2 = r9.shiftAmount
            float r1 = r1 + r2
            int r1 = (int) r1
            r9.setViewLayoutParams(r0, r1, r6)
            android.widget.TextView r0 = r9.largeLabel
            r9.setViewValues(r0, r8, r8, r5)
            android.widget.TextView r0 = r9.smallLabel
            float r1 = r9.scaleUpFactor
            r9.setViewValues(r0, r1, r1, r7)
            goto Lfd
        Lea:
            android.widget.ImageView r0 = r9.icon
            int r1 = r9.defaultMargin
            r9.setViewLayoutParams(r0, r1, r6)
            android.widget.TextView r0 = r9.largeLabel
            float r1 = r9.scaleDownFactor
            r9.setViewValues(r0, r1, r1, r7)
            android.widget.TextView r0 = r9.smallLabel
            r9.setViewValues(r0, r8, r8, r5)
        Lfd:
            r9.refreshDrawableState()
            r9.setSelected(r10)
            return
    }

    @Override
    public void setEnabled(boolean r2) {
            r1 = this;
            super.setEnabled(r2)
            android.widget.TextView r0 = r1.smallLabel
            r0.setEnabled(r2)
            android.widget.TextView r0 = r1.largeLabel
            r0.setEnabled(r2)
            android.widget.ImageView r0 = r1.icon
            r0.setEnabled(r2)
            if (r2 == 0) goto L22
            android.content.Context r2 = r1.getContext()
            r0 = 1002(0x3ea, float:1.404E-42)
            android.support.v4.view.PointerIconCompat r2 = android.support.v4.view.PointerIconCompat.getSystemIcon(r2, r0)
            android.support.v4.view.ViewCompat.setPointerIcon(r1, r2)
            goto L26
        L22:
            r2 = 0
            android.support.v4.view.ViewCompat.setPointerIcon(r1, r2)
        L26:
            return
    }

    @Override
    public void setIcon(android.graphics.drawable.Drawable r2) {
            r1 = this;
            if (r2 == 0) goto L1a
            android.graphics.drawable.Drawable$ConstantState r0 = r2.getConstantState()
            if (r0 != 0) goto L9
            goto Ld
        L9:
            android.graphics.drawable.Drawable r2 = r0.newDrawable()
        Ld:
            android.graphics.drawable.Drawable r2 = android.support.v4.graphics.drawable.DrawableCompat.wrap(r2)
            android.graphics.drawable.Drawable r2 = r2.mutate()
            android.content.res.ColorStateList r0 = r1.iconTint
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r2, r0)
        L1a:
            android.widget.ImageView r0 = r1.icon
            r0.setImageDrawable(r2)
            return
    }

    public void setIconSize(int r2) {
            r1 = this;
            android.widget.ImageView r0 = r1.icon
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0
            r0.width = r2
            r0.height = r2
            android.widget.ImageView r2 = r1.icon
            r2.setLayoutParams(r0)
            return
    }

    public void setIconTintList(android.content.res.ColorStateList r1) {
            r0 = this;
            r0.iconTint = r1
            android.support.v7.view.menu.MenuItemImpl r1 = r0.itemData
            if (r1 == 0) goto Ld
            android.graphics.drawable.Drawable r1 = r1.getIcon()
            r0.setIcon(r1)
        Ld:
            return
    }

    public void setItemBackground(int r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            goto Lc
        L4:
            android.content.Context r0 = r1.getContext()
            android.graphics.drawable.Drawable r2 = android.support.v4.content.ContextCompat.getDrawable(r0, r2)
        Lc:
            r1.setItemBackground(r2)
            return
    }

    public void setItemBackground(android.graphics.drawable.Drawable r1) {
            r0 = this;
            android.support.v4.view.ViewCompat.setBackground(r0, r1)
            return
    }

    public void setItemPosition(int r1) {
            r0 = this;
            r0.itemPosition = r1
            return
    }

    public void setLabelVisibilityMode(int r2) {
            r1 = this;
            int r0 = r1.labelVisibilityMode
            if (r0 == r2) goto L18
            r1.labelVisibilityMode = r2
            android.support.v7.view.menu.MenuItemImpl r2 = r1.itemData
            if (r2 == 0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = 0
        Ld:
            if (r2 == 0) goto L18
            android.support.v7.view.menu.MenuItemImpl r2 = r1.itemData
            boolean r2 = r2.isChecked()
            r1.setChecked(r2)
        L18:
            return
    }

    public void setShifting(boolean r2) {
            r1 = this;
            boolean r0 = r1.isShifting
            if (r0 == r2) goto L18
            r1.isShifting = r2
            android.support.v7.view.menu.MenuItemImpl r2 = r1.itemData
            if (r2 == 0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = 0
        Ld:
            if (r2 == 0) goto L18
            android.support.v7.view.menu.MenuItemImpl r2 = r1.itemData
            boolean r2 = r2.isChecked()
            r1.setChecked(r2)
        L18:
            return
    }

    @Override
    public void setShortcut(boolean r1, char r2) {
            r0 = this;
            return
    }

    public void setTextAppearanceActive(int r2) {
            r1 = this;
            android.widget.TextView r0 = r1.largeLabel
            android.support.v4.widget.TextViewCompat.setTextAppearance(r0, r2)
            android.widget.TextView r2 = r1.smallLabel
            float r2 = r2.getTextSize()
            android.widget.TextView r0 = r1.largeLabel
            float r0 = r0.getTextSize()
            r1.calculateTextScaleFactors(r2, r0)
            return
    }

    public void setTextAppearanceInactive(int r2) {
            r1 = this;
            android.widget.TextView r0 = r1.smallLabel
            android.support.v4.widget.TextViewCompat.setTextAppearance(r0, r2)
            android.widget.TextView r2 = r1.smallLabel
            float r2 = r2.getTextSize()
            android.widget.TextView r0 = r1.largeLabel
            float r0 = r0.getTextSize()
            r1.calculateTextScaleFactors(r2, r0)
            return
    }

    public void setTextColor(android.content.res.ColorStateList r2) {
            r1 = this;
            if (r2 == 0) goto Lc
            android.widget.TextView r0 = r1.smallLabel
            r0.setTextColor(r2)
            android.widget.TextView r0 = r1.largeLabel
            r0.setTextColor(r2)
        Lc:
            return
    }

    @Override
    public void setTitle(java.lang.CharSequence r2) {
            r1 = this;
            android.widget.TextView r0 = r1.smallLabel
            r0.setText(r2)
            android.widget.TextView r0 = r1.largeLabel
            r0.setText(r2)
            android.support.v7.view.menu.MenuItemImpl r0 = r1.itemData
            if (r0 == 0) goto L18
            java.lang.CharSequence r0 = r0.getContentDescription()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1b
        L18:
            r1.setContentDescription(r2)
        L1b:
            return
    }

    @Override
    public boolean showsIcon() {
            r1 = this;
            r0 = 1
            return r0
    }
}
