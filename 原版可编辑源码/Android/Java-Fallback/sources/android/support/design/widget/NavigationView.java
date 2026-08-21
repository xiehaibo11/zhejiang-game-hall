package android.support.design.widget;

public class NavigationView extends android.support.design.internal.ScrimInsetsFrameLayout {
    private static final int[] CHECKED_STATE_SET = null;
    private static final int[] DISABLED_STATE_SET = null;
    private static final int PRESENTER_NAVIGATION_VIEW_ID = 1;
    android.support.design.widget.NavigationView.OnNavigationItemSelectedListener listener;
    private final int maxWidth;
    private final android.support.design.internal.NavigationMenu menu;
    private android.view.MenuInflater menuInflater;
    private final android.support.design.internal.NavigationMenuPresenter presenter;


    public interface OnNavigationItemSelectedListener {
        boolean onNavigationItemSelected(android.view.MenuItem r1);
    }

    public static class SavedState extends android.support.v4.view.AbsSavedState {
        public static final android.os.Parcelable.Creator<android.support.design.widget.NavigationView.SavedState> CREATOR = null;
        public android.os.Bundle menuState;


        static {
                android.support.design.widget.NavigationView$SavedState$1 r0 = new android.support.design.widget.NavigationView$SavedState$1
                r0.<init>()
                android.support.design.widget.NavigationView.SavedState.CREATOR = r0
                return
        }

        public SavedState(android.os.Parcel r1, java.lang.ClassLoader r2) {
                r0 = this;
                r0.<init>(r1, r2)
                android.os.Bundle r1 = r1.readBundle(r2)
                r0.menuState = r1
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
                android.os.Bundle r2 = r0.menuState
                r1.writeBundle(r2)
                return
        }
    }

    static {
            r0 = 1
            int[] r1 = new int[r0]
            r2 = 16842912(0x10100a0, float:2.3694006E-38)
            r3 = 0
            r1[r3] = r2
            android.support.design.widget.NavigationView.CHECKED_STATE_SET = r1
            int[] r0 = new int[r0]
            r1 = -16842910(0xfffffffffefeff62, float:-1.6947497E38)
            r0[r3] = r1
            android.support.design.widget.NavigationView.DISABLED_STATE_SET = r0
            return
    }

    public NavigationView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public NavigationView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.design.R.attr.navigationViewStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public NavigationView(android.content.Context r10, android.util.AttributeSet r11, int r12) {
            r9 = this;
            r9.<init>(r10, r11, r12)
            android.support.design.internal.NavigationMenuPresenter r0 = new android.support.design.internal.NavigationMenuPresenter
            r0.<init>()
            r9.presenter = r0
            android.support.design.internal.NavigationMenu r0 = new android.support.design.internal.NavigationMenu
            r0.<init>(r10)
            r9.menu = r0
            int[] r3 = android.support.design.R.styleable.NavigationView
            int r5 = android.support.design.R.style.Widget_Design_NavigationView
            r0 = 0
            int[] r6 = new int[r0]
            r1 = r10
            r2 = r11
            r4 = r12
            android.support.v7.widget.TintTypedArray r11 = android.support.design.internal.ThemeEnforcement.obtainTintedStyledAttributes(r1, r2, r3, r4, r5, r6)
            int r12 = android.support.design.R.styleable.NavigationView_android_background
            android.graphics.drawable.Drawable r12 = r11.getDrawable(r12)
            android.support.v4.view.ViewCompat.setBackground(r9, r12)
            int r12 = android.support.design.R.styleable.NavigationView_elevation
            boolean r12 = r11.hasValue(r12)
            if (r12 == 0) goto L3a
            int r12 = android.support.design.R.styleable.NavigationView_elevation
            int r12 = r11.getDimensionPixelSize(r12, r0)
            float r12 = (float) r12
            android.support.v4.view.ViewCompat.setElevation(r9, r12)
        L3a:
            int r12 = android.support.design.R.styleable.NavigationView_android_fitsSystemWindows
            boolean r12 = r11.getBoolean(r12, r0)
            android.support.v4.view.ViewCompat.setFitsSystemWindows(r9, r12)
            int r12 = android.support.design.R.styleable.NavigationView_android_maxWidth
            int r12 = r11.getDimensionPixelSize(r12, r0)
            r9.maxWidth = r12
            int r12 = android.support.design.R.styleable.NavigationView_itemIconTint
            boolean r12 = r11.hasValue(r12)
            if (r12 == 0) goto L5a
            int r12 = android.support.design.R.styleable.NavigationView_itemIconTint
            android.content.res.ColorStateList r12 = r11.getColorStateList(r12)
            goto L61
        L5a:
            r12 = 16842808(0x1010038, float:2.3693715E-38)
            android.content.res.ColorStateList r12 = r9.createDefaultColorStateList(r12)
        L61:
            int r1 = android.support.design.R.styleable.NavigationView_itemTextAppearance
            boolean r1 = r11.hasValue(r1)
            r2 = 1
            if (r1 == 0) goto L72
            int r1 = android.support.design.R.styleable.NavigationView_itemTextAppearance
            int r1 = r11.getResourceId(r1, r0)
            r3 = r2
            goto L74
        L72:
            r1 = r0
            r3 = r1
        L74:
            r4 = 0
            int r5 = android.support.design.R.styleable.NavigationView_itemTextColor
            boolean r5 = r11.hasValue(r5)
            if (r5 == 0) goto L83
            int r4 = android.support.design.R.styleable.NavigationView_itemTextColor
            android.content.res.ColorStateList r4 = r11.getColorStateList(r4)
        L83:
            if (r3 != 0) goto L8e
            if (r4 != 0) goto L8e
            r4 = 16842806(0x1010036, float:2.369371E-38)
            android.content.res.ColorStateList r4 = r9.createDefaultColorStateList(r4)
        L8e:
            int r5 = android.support.design.R.styleable.NavigationView_itemBackground
            android.graphics.drawable.Drawable r5 = r11.getDrawable(r5)
            int r6 = android.support.design.R.styleable.NavigationView_itemHorizontalPadding
            boolean r6 = r11.hasValue(r6)
            if (r6 == 0) goto La7
            int r6 = android.support.design.R.styleable.NavigationView_itemHorizontalPadding
            int r6 = r11.getDimensionPixelSize(r6, r0)
            android.support.design.internal.NavigationMenuPresenter r7 = r9.presenter
            r7.setItemHorizontalPadding(r6)
        La7:
            int r6 = android.support.design.R.styleable.NavigationView_itemIconPadding
            int r6 = r11.getDimensionPixelSize(r6, r0)
            android.support.design.internal.NavigationMenu r7 = r9.menu
            android.support.design.widget.NavigationView$1 r8 = new android.support.design.widget.NavigationView$1
            r8.<init>(r9)
            r7.setCallback(r8)
            android.support.design.internal.NavigationMenuPresenter r7 = r9.presenter
            r7.setId(r2)
            android.support.design.internal.NavigationMenuPresenter r2 = r9.presenter
            android.support.design.internal.NavigationMenu r7 = r9.menu
            r2.initForMenu(r10, r7)
            android.support.design.internal.NavigationMenuPresenter r10 = r9.presenter
            r10.setItemIconTintList(r12)
            if (r3 == 0) goto Lcf
            android.support.design.internal.NavigationMenuPresenter r10 = r9.presenter
            r10.setItemTextAppearance(r1)
        Lcf:
            android.support.design.internal.NavigationMenuPresenter r10 = r9.presenter
            r10.setItemTextColor(r4)
            android.support.design.internal.NavigationMenuPresenter r10 = r9.presenter
            r10.setItemBackground(r5)
            android.support.design.internal.NavigationMenuPresenter r10 = r9.presenter
            r10.setItemIconPadding(r6)
            android.support.design.internal.NavigationMenu r10 = r9.menu
            android.support.design.internal.NavigationMenuPresenter r12 = r9.presenter
            r10.addMenuPresenter(r12)
            android.support.design.internal.NavigationMenuPresenter r10 = r9.presenter
            android.support.v7.view.menu.MenuView r10 = r10.getMenuView(r9)
            android.view.View r10 = (android.view.View) r10
            r9.addView(r10)
            int r10 = android.support.design.R.styleable.NavigationView_menu
            boolean r10 = r11.hasValue(r10)
            if (r10 == 0) goto L101
            int r10 = android.support.design.R.styleable.NavigationView_menu
            int r10 = r11.getResourceId(r10, r0)
            r9.inflateMenu(r10)
        L101:
            int r10 = android.support.design.R.styleable.NavigationView_headerLayout
            boolean r10 = r11.hasValue(r10)
            if (r10 == 0) goto L112
            int r10 = android.support.design.R.styleable.NavigationView_headerLayout
            int r10 = r11.getResourceId(r10, r0)
            r9.inflateHeaderView(r10)
        L112:
            r11.recycle()
            return
    }

    private android.content.res.ColorStateList createDefaultColorStateList(int r10) {
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
            int[] r6 = android.support.design.widget.NavigationView.DISABLED_STATE_SET
            r7 = 0
            r5[r7] = r6
            int[] r6 = android.support.design.widget.NavigationView.CHECKED_STATE_SET
            r5[r2] = r6
            int[] r6 = android.support.design.widget.NavigationView.EMPTY_STATE_SET
            r8 = 2
            r5[r8] = r6
            int[] r4 = new int[r4]
            int[] r6 = android.support.design.widget.NavigationView.DISABLED_STATE_SET
            int r10 = r10.getColorForState(r6, r1)
            r4[r7] = r10
            r4[r2] = r0
            r4[r8] = r1
            r3.<init>(r5, r4)
            return r3
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

    public void addHeaderView(android.view.View r2) {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            r0.addHeaderView(r2)
            return
    }

    public android.view.MenuItem getCheckedItem() {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            android.support.v7.view.menu.MenuItemImpl r0 = r0.getCheckedItem()
            return r0
    }

    public int getHeaderCount() {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            int r0 = r0.getHeaderCount()
            return r0
    }

    public android.view.View getHeaderView(int r2) {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            android.view.View r2 = r0.getHeaderView(r2)
            return r2
    }

    public android.graphics.drawable.Drawable getItemBackground() {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            android.graphics.drawable.Drawable r0 = r0.getItemBackground()
            return r0
    }

    public int getItemHorizontalPadding() {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            int r0 = r0.getItemHorizontalPadding()
            return r0
    }

    public int getItemIconPadding() {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            int r0 = r0.getItemIconPadding()
            return r0
    }

    public android.content.res.ColorStateList getItemIconTintList() {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            android.content.res.ColorStateList r0 = r0.getItemTintList()
            return r0
    }

    public android.content.res.ColorStateList getItemTextColor() {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            android.content.res.ColorStateList r0 = r0.getItemTextColor()
            return r0
    }

    public android.view.Menu getMenu() {
            r1 = this;
            android.support.design.internal.NavigationMenu r0 = r1.menu
            return r0
    }

    public android.view.View inflateHeaderView(int r2) {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            android.view.View r2 = r0.inflateHeaderView(r2)
            return r2
    }

    public void inflateMenu(int r3) {
            r2 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r2.presenter
            r1 = 1
            r0.setUpdateSuspended(r1)
            android.view.MenuInflater r0 = r2.getMenuInflater()
            android.support.design.internal.NavigationMenu r1 = r2.menu
            r0.inflate(r3, r1)
            android.support.design.internal.NavigationMenuPresenter r3 = r2.presenter
            r0 = 0
            r3.setUpdateSuspended(r0)
            android.support.design.internal.NavigationMenuPresenter r3 = r2.presenter
            r3.updateMenuView(r0)
            return
    }

    @Override
    protected void onInsetsChanged(android.support.v4.view.WindowInsetsCompat r2) {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            r0.dispatchApplyWindowInsets(r2)
            return
    }

    @Override
    protected void onMeasure(int r4, int r5) {
            r3 = this;
            int r0 = android.view.View.MeasureSpec.getMode(r4)
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            r2 = 1073741824(0x40000000, float:2.0)
            if (r0 == r1) goto L14
            if (r0 == 0) goto Ld
            goto L22
        Ld:
            int r4 = r3.maxWidth
            int r4 = android.view.View.MeasureSpec.makeMeasureSpec(r4, r2)
            goto L22
        L14:
            int r4 = android.view.View.MeasureSpec.getSize(r4)
            int r0 = r3.maxWidth
            int r4 = java.lang.Math.min(r4, r0)
            int r4 = android.view.View.MeasureSpec.makeMeasureSpec(r4, r2)
        L22:
            super.onMeasure(r4, r5)
            return
    }

    @Override
    protected void onRestoreInstanceState(android.os.Parcelable r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.support.design.widget.NavigationView.SavedState
            if (r0 != 0) goto L8
            super.onRestoreInstanceState(r2)
            return
        L8:
            android.support.design.widget.NavigationView$SavedState r2 = (android.support.design.widget.NavigationView.SavedState) r2
            android.os.Parcelable r0 = r2.getSuperState()
            super.onRestoreInstanceState(r0)
            android.support.design.internal.NavigationMenu r0 = r1.menu
            android.os.Bundle r2 = r2.menuState
            r0.restorePresenterStates(r2)
            return
    }

    @Override
    protected android.os.Parcelable onSaveInstanceState() {
            r3 = this;
            android.os.Parcelable r0 = super.onSaveInstanceState()
            android.support.design.widget.NavigationView$SavedState r1 = new android.support.design.widget.NavigationView$SavedState
            r1.<init>(r0)
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1.menuState = r0
            android.support.design.internal.NavigationMenu r0 = r3.menu
            android.os.Bundle r2 = r1.menuState
            r0.savePresenterStates(r2)
            return r1
    }

    public void removeHeaderView(android.view.View r2) {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            r0.removeHeaderView(r2)
            return
    }

    public void setCheckedItem(int r2) {
            r1 = this;
            android.support.design.internal.NavigationMenu r0 = r1.menu
            android.view.MenuItem r2 = r0.findItem(r2)
            if (r2 == 0) goto Lf
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            android.support.v7.view.menu.MenuItemImpl r2 = (android.support.v7.view.menu.MenuItemImpl) r2
            r0.setCheckedItem(r2)
        Lf:
            return
    }

    public void setCheckedItem(android.view.MenuItem r2) {
            r1 = this;
            android.support.design.internal.NavigationMenu r0 = r1.menu
            int r2 = r2.getItemId()
            android.view.MenuItem r2 = r0.findItem(r2)
            if (r2 == 0) goto L14
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            android.support.v7.view.menu.MenuItemImpl r2 = (android.support.v7.view.menu.MenuItemImpl) r2
            r0.setCheckedItem(r2)
            return
        L14:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Called setCheckedItem(MenuItem) with an item that is not in the current menu."
            r2.<init>(r0)
            throw r2
    }

    public void setItemBackground(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            r0.setItemBackground(r2)
            return
    }

    public void setItemBackgroundResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            android.graphics.drawable.Drawable r2 = android.support.v4.content.ContextCompat.getDrawable(r0, r2)
            r1.setItemBackground(r2)
            return
    }

    public void setItemHorizontalPadding(int r2) {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            r0.setItemHorizontalPadding(r2)
            return
    }

    public void setItemHorizontalPaddingResource(int r3) {
            r2 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r2.presenter
            android.content.res.Resources r1 = r2.getResources()
            int r3 = r1.getDimensionPixelSize(r3)
            r0.setItemHorizontalPadding(r3)
            return
    }

    public void setItemIconPadding(int r2) {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            r0.setItemIconPadding(r2)
            return
    }

    public void setItemIconPaddingResource(int r3) {
            r2 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r2.presenter
            android.content.res.Resources r1 = r2.getResources()
            int r3 = r1.getDimensionPixelSize(r3)
            r0.setItemIconPadding(r3)
            return
    }

    public void setItemIconTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            r0.setItemIconTintList(r2)
            return
    }

    public void setItemTextAppearance(int r2) {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            r0.setItemTextAppearance(r2)
            return
    }

    public void setItemTextColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.design.internal.NavigationMenuPresenter r0 = r1.presenter
            r0.setItemTextColor(r2)
            return
    }

    public void setNavigationItemSelectedListener(android.support.design.widget.NavigationView.OnNavigationItemSelectedListener r1) {
            r0 = this;
            r0.listener = r1
            return
    }
}
