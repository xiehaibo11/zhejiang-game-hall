package android.support.design.widget;

public class BottomNavigationView extends android.widget.FrameLayout {
    private static final int MENU_PRESENTER_ID = 1;
    private final android.support.v7.view.menu.MenuBuilder menu;
    private android.view.MenuInflater menuInflater;
    private final android.support.design.internal.BottomNavigationMenuView menuView;
    private final android.support.design.internal.BottomNavigationPresenter presenter;
    private android.support.design.widget.BottomNavigationView.OnNavigationItemReselectedListener reselectedListener;
    private android.support.design.widget.BottomNavigationView.OnNavigationItemSelectedListener selectedListener;


    public interface OnNavigationItemReselectedListener {
        void onNavigationItemReselected(android.view.MenuItem r1);
    }

    public interface OnNavigationItemSelectedListener {
        boolean onNavigationItemSelected(android.view.MenuItem r1);
    }

    static class SavedState extends android.support.v4.view.AbsSavedState {
        public static final android.os.Parcelable.Creator<android.support.design.widget.BottomNavigationView.SavedState> CREATOR = null;
        android.os.Bundle menuPresenterState;


        static {
                android.support.design.widget.BottomNavigationView$SavedState$1 r0 = new android.support.design.widget.BottomNavigationView$SavedState$1
                r0.<init>()
                android.support.design.widget.BottomNavigationView.SavedState.CREATOR = r0
                return
        }

        public SavedState(android.os.Parcel r1, java.lang.ClassLoader r2) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.readFromParcel(r1, r2)
                return
        }

        public SavedState(android.os.Parcelable r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        private void readFromParcel(android.os.Parcel r1, java.lang.ClassLoader r2) {
                r0 = this;
                android.os.Bundle r1 = r1.readBundle(r2)
                r0.menuPresenterState = r1
                return
        }

        @Override
        public void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                super.writeToParcel(r1, r2)
                android.os.Bundle r2 = r0.menuPresenterState
                r1.writeBundle(r2)
                return
        }
    }

    public BottomNavigationView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public BottomNavigationView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.design.R.attr.bottomNavigationStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public BottomNavigationView(android.content.Context r12, android.util.AttributeSet r13, int r14) {
            r11 = this;
            r11.<init>(r12, r13, r14)
            android.support.design.internal.BottomNavigationPresenter r0 = new android.support.design.internal.BottomNavigationPresenter
            r0.<init>()
            r11.presenter = r0
            android.support.design.internal.BottomNavigationMenu r0 = new android.support.design.internal.BottomNavigationMenu
            r0.<init>(r12)
            r11.menu = r0
            android.support.design.internal.BottomNavigationMenuView r0 = new android.support.design.internal.BottomNavigationMenuView
            r0.<init>(r12)
            r11.menuView = r0
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -2
            r0.<init>(r1, r1)
            r1 = 17
            r0.gravity = r1
            android.support.design.internal.BottomNavigationMenuView r1 = r11.menuView
            r1.setLayoutParams(r0)
            android.support.design.internal.BottomNavigationPresenter r1 = r11.presenter
            android.support.design.internal.BottomNavigationMenuView r2 = r11.menuView
            r1.setBottomNavigationMenuView(r2)
            android.support.design.internal.BottomNavigationPresenter r1 = r11.presenter
            r2 = 1
            r1.setId(r2)
            android.support.design.internal.BottomNavigationMenuView r1 = r11.menuView
            android.support.design.internal.BottomNavigationPresenter r3 = r11.presenter
            r1.setPresenter(r3)
            android.support.v7.view.menu.MenuBuilder r1 = r11.menu
            android.support.design.internal.BottomNavigationPresenter r3 = r11.presenter
            r1.addMenuPresenter(r3)
            android.support.design.internal.BottomNavigationPresenter r1 = r11.presenter
            android.content.Context r3 = r11.getContext()
            android.support.v7.view.menu.MenuBuilder r4 = r11.menu
            r1.initForMenu(r3, r4)
            int[] r7 = android.support.design.R.styleable.BottomNavigationView
            int r9 = android.support.design.R.style.Widget_Design_BottomNavigationView
            r1 = 2
            int[] r10 = new int[r1]
            int r1 = android.support.design.R.styleable.BottomNavigationView_itemTextAppearanceInactive
            r3 = 0
            r10[r3] = r1
            int r1 = android.support.design.R.styleable.BottomNavigationView_itemTextAppearanceActive
            r10[r2] = r1
            r5 = r12
            r6 = r13
            r8 = r14
            android.support.v7.widget.TintTypedArray r13 = android.support.design.internal.ThemeEnforcement.obtainTintedStyledAttributes(r5, r6, r7, r8, r9, r10)
            int r14 = android.support.design.R.styleable.BottomNavigationView_itemIconTint
            boolean r14 = r13.hasValue(r14)
            if (r14 == 0) goto L78
            android.support.design.internal.BottomNavigationMenuView r14 = r11.menuView
            int r1 = android.support.design.R.styleable.BottomNavigationView_itemIconTint
            android.content.res.ColorStateList r1 = r13.getColorStateList(r1)
            r14.setIconTintList(r1)
            goto L84
        L78:
            android.support.design.internal.BottomNavigationMenuView r14 = r11.menuView
            r1 = 16842808(0x1010038, float:2.3693715E-38)
            android.content.res.ColorStateList r1 = r14.createDefaultColorStateList(r1)
            r14.setIconTintList(r1)
        L84:
            int r14 = android.support.design.R.styleable.BottomNavigationView_itemIconSize
            android.content.res.Resources r1 = r11.getResources()
            int r4 = android.support.design.R.dimen.design_bottom_navigation_icon_size
            int r1 = r1.getDimensionPixelSize(r4)
            int r14 = r13.getDimensionPixelSize(r14, r1)
            r11.setItemIconSize(r14)
            int r14 = android.support.design.R.styleable.BottomNavigationView_itemTextAppearanceInactive
            boolean r14 = r13.hasValue(r14)
            if (r14 == 0) goto La8
            int r14 = android.support.design.R.styleable.BottomNavigationView_itemTextAppearanceInactive
            int r14 = r13.getResourceId(r14, r3)
            r11.setItemTextAppearanceInactive(r14)
        La8:
            int r14 = android.support.design.R.styleable.BottomNavigationView_itemTextAppearanceActive
            boolean r14 = r13.hasValue(r14)
            if (r14 == 0) goto Lb9
            int r14 = android.support.design.R.styleable.BottomNavigationView_itemTextAppearanceActive
            int r14 = r13.getResourceId(r14, r3)
            r11.setItemTextAppearanceActive(r14)
        Lb9:
            int r14 = android.support.design.R.styleable.BottomNavigationView_itemTextColor
            boolean r14 = r13.hasValue(r14)
            if (r14 == 0) goto Lca
            int r14 = android.support.design.R.styleable.BottomNavigationView_itemTextColor
            android.content.res.ColorStateList r14 = r13.getColorStateList(r14)
            r11.setItemTextColor(r14)
        Lca:
            int r14 = android.support.design.R.styleable.BottomNavigationView_elevation
            boolean r14 = r13.hasValue(r14)
            if (r14 == 0) goto Ldc
            int r14 = android.support.design.R.styleable.BottomNavigationView_elevation
            int r14 = r13.getDimensionPixelSize(r14, r3)
            float r14 = (float) r14
            android.support.v4.view.ViewCompat.setElevation(r11, r14)
        Ldc:
            int r14 = android.support.design.R.styleable.BottomNavigationView_labelVisibilityMode
            r1 = -1
            int r14 = r13.getInteger(r14, r1)
            r11.setLabelVisibilityMode(r14)
            int r14 = android.support.design.R.styleable.BottomNavigationView_itemHorizontalTranslationEnabled
            boolean r14 = r13.getBoolean(r14, r2)
            r11.setItemHorizontalTranslationEnabled(r14)
            int r14 = android.support.design.R.styleable.BottomNavigationView_itemBackground
            int r14 = r13.getResourceId(r14, r3)
            android.support.design.internal.BottomNavigationMenuView r1 = r11.menuView
            r1.setItemBackgroundRes(r14)
            int r14 = android.support.design.R.styleable.BottomNavigationView_menu
            boolean r14 = r13.hasValue(r14)
            if (r14 == 0) goto L10b
            int r14 = android.support.design.R.styleable.BottomNavigationView_menu
            int r14 = r13.getResourceId(r14, r3)
            r11.inflateMenu(r14)
        L10b:
            r13.recycle()
            android.support.design.internal.BottomNavigationMenuView r13 = r11.menuView
            r11.addView(r13, r0)
            int r13 = android.os.Build.VERSION.SDK_INT
            r14 = 21
            if (r13 >= r14) goto L11c
            r11.addCompatibilityTopDivider(r12)
        L11c:
            android.support.v7.view.menu.MenuBuilder r12 = r11.menu
            android.support.design.widget.BottomNavigationView$1 r13 = new android.support.design.widget.BottomNavigationView$1
            r13.<init>(r11)
            r12.setCallback(r13)
            return
    }

    static android.support.design.widget.BottomNavigationView.OnNavigationItemReselectedListener access$000(android.support.design.widget.BottomNavigationView r0) {
            android.support.design.widget.BottomNavigationView$OnNavigationItemReselectedListener r0 = r0.reselectedListener
            return r0
    }

    static android.support.design.widget.BottomNavigationView.OnNavigationItemSelectedListener access$100(android.support.design.widget.BottomNavigationView r0) {
            android.support.design.widget.BottomNavigationView$OnNavigationItemSelectedListener r0 = r0.selectedListener
            return r0
    }

    private void addCompatibilityTopDivider(android.content.Context r4) {
            r3 = this;
            android.view.View r0 = new android.view.View
            r0.<init>(r4)
            int r1 = android.support.design.R.color.design_bottom_navigation_shadow_color
            int r4 = android.support.v4.content.ContextCompat.getColor(r4, r1)
            r0.setBackgroundColor(r4)
            android.widget.FrameLayout$LayoutParams r4 = new android.widget.FrameLayout$LayoutParams
            android.content.res.Resources r1 = r3.getResources()
            int r2 = android.support.design.R.dimen.design_bottom_navigation_shadow_height
            int r1 = r1.getDimensionPixelSize(r2)
            r2 = -1
            r4.<init>(r2, r1)
            r0.setLayoutParams(r4)
            r3.addView(r0)
            return
    }

    private android.view.MenuInflater getMenuInflater() {
            r2 = this;
            android.view.MenuInflater r0 = r2.menuInflater
            if (r0 != 0) goto Lf
            android.support.v7.view.SupportMenuInflater r0 = new android.support.v7.view.SupportMenuInflater
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            r2.menuInflater = r0
        Lf:
            android.view.MenuInflater r0 = r2.menuInflater
            return r0
    }

    public android.graphics.drawable.Drawable getItemBackground() {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            android.graphics.drawable.Drawable r0 = r0.getItemBackground()
            return r0
    }

    @java.lang.Deprecated
    public int getItemBackgroundResource() {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            int r0 = r0.getItemBackgroundRes()
            return r0
    }

    public int getItemIconSize() {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            int r0 = r0.getItemIconSize()
            return r0
    }

    public android.content.res.ColorStateList getItemIconTintList() {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            android.content.res.ColorStateList r0 = r0.getIconTintList()
            return r0
    }

    public int getItemTextAppearanceActive() {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            int r0 = r0.getItemTextAppearanceActive()
            return r0
    }

    public int getItemTextAppearanceInactive() {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            int r0 = r0.getItemTextAppearanceInactive()
            return r0
    }

    public android.content.res.ColorStateList getItemTextColor() {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            android.content.res.ColorStateList r0 = r0.getItemTextColor()
            return r0
    }

    public int getLabelVisibilityMode() {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            int r0 = r0.getLabelVisibilityMode()
            return r0
    }

    public int getMaxItemCount() {
            r1 = this;
            r0 = 5
            return r0
    }

    public android.view.Menu getMenu() {
            r1 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r1.menu
            return r0
    }

    public int getSelectedItemId() {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            int r0 = r0.getSelectedItemId()
            return r0
    }

    public void inflateMenu(int r4) {
            r3 = this;
            android.support.design.internal.BottomNavigationPresenter r0 = r3.presenter
            r1 = 1
            r0.setUpdateSuspended(r1)
            android.view.MenuInflater r0 = r3.getMenuInflater()
            android.support.v7.view.menu.MenuBuilder r2 = r3.menu
            r0.inflate(r4, r2)
            android.support.design.internal.BottomNavigationPresenter r4 = r3.presenter
            r0 = 0
            r4.setUpdateSuspended(r0)
            android.support.design.internal.BottomNavigationPresenter r4 = r3.presenter
            r4.updateMenuView(r1)
            return
    }

    public boolean isItemHorizontalTranslationEnabled() {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            boolean r0 = r0.isItemHorizontalTranslationEnabled()
            return r0
    }

    @Override
    protected void onRestoreInstanceState(android.os.Parcelable r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.support.design.widget.BottomNavigationView.SavedState
            if (r0 != 0) goto L8
            super.onRestoreInstanceState(r2)
            return
        L8:
            android.support.design.widget.BottomNavigationView$SavedState r2 = (android.support.design.widget.BottomNavigationView.SavedState) r2
            android.os.Parcelable r0 = r2.getSuperState()
            super.onRestoreInstanceState(r0)
            android.support.v7.view.menu.MenuBuilder r0 = r1.menu
            android.os.Bundle r2 = r2.menuPresenterState
            r0.restorePresenterStates(r2)
            return
    }

    @Override
    protected android.os.Parcelable onSaveInstanceState() {
            r3 = this;
            android.os.Parcelable r0 = super.onSaveInstanceState()
            android.support.design.widget.BottomNavigationView$SavedState r1 = new android.support.design.widget.BottomNavigationView$SavedState
            r1.<init>(r0)
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1.menuPresenterState = r0
            android.support.v7.view.menu.MenuBuilder r0 = r3.menu
            android.os.Bundle r2 = r1.menuPresenterState
            r0.savePresenterStates(r2)
            return r1
    }

    public void setItemBackground(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            r0.setItemBackground(r2)
            return
    }

    public void setItemBackgroundResource(int r2) {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            r0.setItemBackgroundRes(r2)
            return
    }

    public void setItemHorizontalTranslationEnabled(boolean r2) {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            boolean r0 = r0.isItemHorizontalTranslationEnabled()
            if (r0 == r2) goto L13
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            r0.setItemHorizontalTranslationEnabled(r2)
            android.support.design.internal.BottomNavigationPresenter r2 = r1.presenter
            r0 = 0
            r2.updateMenuView(r0)
        L13:
            return
    }

    public void setItemIconSize(int r2) {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            r0.setItemIconSize(r2)
            return
    }

    public void setItemIconSizeRes(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            int r2 = r0.getDimensionPixelSize(r2)
            r1.setItemIconSize(r2)
            return
    }

    public void setItemIconTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            r0.setIconTintList(r2)
            return
    }

    public void setItemTextAppearanceActive(int r2) {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            r0.setItemTextAppearanceActive(r2)
            return
    }

    public void setItemTextAppearanceInactive(int r2) {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            r0.setItemTextAppearanceInactive(r2)
            return
    }

    public void setItemTextColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            r0.setItemTextColor(r2)
            return
    }

    public void setLabelVisibilityMode(int r2) {
            r1 = this;
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            int r0 = r0.getLabelVisibilityMode()
            if (r0 == r2) goto L13
            android.support.design.internal.BottomNavigationMenuView r0 = r1.menuView
            r0.setLabelVisibilityMode(r2)
            android.support.design.internal.BottomNavigationPresenter r2 = r1.presenter
            r0 = 0
            r2.updateMenuView(r0)
        L13:
            return
    }

    public void setOnNavigationItemReselectedListener(android.support.design.widget.BottomNavigationView.OnNavigationItemReselectedListener r1) {
            r0 = this;
            r0.reselectedListener = r1
            return
    }

    public void setOnNavigationItemSelectedListener(android.support.design.widget.BottomNavigationView.OnNavigationItemSelectedListener r1) {
            r0 = this;
            r0.selectedListener = r1
            return
    }

    public void setSelectedItemId(int r4) {
            r3 = this;
            android.support.v7.view.menu.MenuBuilder r0 = r3.menu
            android.view.MenuItem r4 = r0.findItem(r4)
            if (r4 == 0) goto L17
            android.support.v7.view.menu.MenuBuilder r0 = r3.menu
            android.support.design.internal.BottomNavigationPresenter r1 = r3.presenter
            r2 = 0
            boolean r0 = r0.performItemAction(r4, r1, r2)
            if (r0 != 0) goto L17
            r0 = 1
            r4.setChecked(r0)
        L17:
            return
    }
}
