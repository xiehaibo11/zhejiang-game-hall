package android.support.v7.widget;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.os.Parcelable;
import android.support.annotation.RestrictTo;
import android.support.v4.view.ViewCompat;
import android.support.v4.view.ViewPropertyAnimatorCompat;
import android.support.v7.appcompat.R;
import android.support.v7.content.res.AppCompatResources;
import android.support.v7.view.menu.MenuBuilder;
import android.support.v7.view.menu.MenuPresenter;
import android.support.v7.widget.Toolbar;
import android.text.TextUtils;
import android.util.Log;
import android.util.SparseArray;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.Window;
import android.widget.AdapterView;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class ToolbarWidgetWrapper implements DecorToolbar {
    private static final int AFFECTS_LOGO_MASK = 3;
    private static final long DEFAULT_FADE_DURATION_MS = 200;
    private static final String TAG = "ToolbarWidgetWrapper";
    private ActionMenuPresenter mActionMenuPresenter;
    private View mCustomView;
    private int mDefaultNavigationContentDescription;
    private Drawable mDefaultNavigationIcon;
    private int mDisplayOpts;
    private CharSequence mHomeDescription;
    private Drawable mIcon;
    private Drawable mLogo;
    boolean mMenuPrepared;
    private Drawable mNavIcon;
    private int mNavigationMode;
    private Spinner mSpinner;
    private CharSequence mSubtitle;
    private View mTabView;
    CharSequence mTitle;
    private boolean mTitleSet;
    Toolbar mToolbar;
    Window.Callback mWindowCallback;

    @Override
    public void setHomeButtonEnabled(boolean r1) {
    }

    public ToolbarWidgetWrapper(Toolbar r3, boolean r4) {
        this(r3, r4, R.string.abc_action_bar_up_description, R.drawable.abc_ic_ab_back_material);
    }

    public ToolbarWidgetWrapper(Toolbar r4, boolean r5, int r6, int r7) {
        this.mNavigationMode = 0;
        this.mDefaultNavigationContentDescription = 0;
        this.mToolbar = r4;
        this.mTitle = r4.getTitle();
        this.mSubtitle = r4.getSubtitle();
        if (this.mTitle == null) goto L5;
        boolean r0 = true;
    L6:
        this.mTitleSet = r0;
        this.mNavIcon = r4.getNavigationIcon();
        TintTypedArray r42 = TintTypedArray.obtainStyledAttributes(r4.getContext(), null, R.styleable.ActionBar, R.attr.actionBarStyle, 0);
        this.mDefaultNavigationIcon = r42.getDrawable(R.styleable.ActionBar_homeAsUpIndicator);
        if (r5 == false) goto L44;
        CharSequence r52 = r42.getText(R.styleable.ActionBar_title);
        if (TextUtils.isEmpty(r52) == true) goto L11;
        setTitle(r52);
    L11:
        CharSequence r53 = r42.getText(R.styleable.ActionBar_subtitle);
        if (TextUtils.isEmpty(r53) == true) goto L14;
        setSubtitle(r53);
    L14:
        Drawable r54 = r42.getDrawable(R.styleable.ActionBar_logo);
        if (r54 == null) goto L17;
        setLogo(r54);
    L17:
        Drawable r55 = r42.getDrawable(R.styleable.ActionBar_icon);
        if (r55 == null) goto L21;
        setIcon(r55);
    L21:
        if (this.mNavIcon != null) goto L25;
        Drawable r56 = this.mDefaultNavigationIcon;
        if (r56 == null) goto L25;
        setNavigationIcon(r56);
    L25:
        setDisplayOptions(r42.getInt(R.styleable.ActionBar_displayOptions, 0));
        int r57 = r42.getResourceId(R.styleable.ActionBar_customNavigationLayout, 0);
        if (r57 == 0) goto L28;
        setCustomView(LayoutInflater.from(this.mToolbar.getContext()).inflate(r57, this.mToolbar, false));
        setDisplayOptions(this.mDisplayOpts | 16);
    L28:
        int r58 = r42.getLayoutDimension(R.styleable.ActionBar_height, 0);
        if (r58 <= 0) goto L31;
        ViewGroup.LayoutParams r02 = this.mToolbar.getLayoutParams();
        r02.height = r58;
        this.mToolbar.setLayoutParams(r02);
    L31:
        int r59 = r42.getDimensionPixelOffset(R.styleable.ActionBar_contentInsetStart, -1);
        int r03 = r42.getDimensionPixelOffset(R.styleable.ActionBar_contentInsetEnd, -1);
        if (r59 >= 0) goto L34;
        if (r03 >= 0) goto L34;
    L35:
        int r510 = r42.getResourceId(R.styleable.ActionBar_titleTextStyle, 0);
        if (r510 == 0) goto L38;
        Toolbar r04 = this.mToolbar;
        r04.setTitleTextAppearance(r04.getContext(), r510);
    L38:
        int r511 = r42.getResourceId(R.styleable.ActionBar_subtitleTextStyle, 0);
        if (r511 == 0) goto L41;
        Toolbar r05 = this.mToolbar;
        r05.setSubtitleTextAppearance(r05.getContext(), r511);
    L41:
        int r512 = r42.getResourceId(R.styleable.ActionBar_popupTheme, 0);
        if (r512 == 0) goto L45;
        this.mToolbar.setPopupTheme(r512);
    L45:
        r42.recycle();
        setDefaultNavigationContentDescription(r6);
        this.mHomeDescription = this.mToolbar.getNavigationContentDescription();
        this.mToolbar.setNavigationOnClickListener(new 1(this));
        return;
    L34:
        this.mToolbar.setContentInsetsRelative(Math.max(r59, 0), Math.max(r03, 0));
        goto L35
    L44:
        this.mDisplayOpts = detectDisplayOptions();
        goto L45
    L5:
        r0 = false;
        goto L6
    }

    @Override
    public void setDefaultNavigationContentDescription(int r2) {
        if (r2 != this.mDefaultNavigationContentDescription) goto L5;
        return;
    L5:
        this.mDefaultNavigationContentDescription = r2;
        if (TextUtils.isEmpty(this.mToolbar.getNavigationContentDescription()) == false) goto L9;
        setNavigationContentDescription(this.mDefaultNavigationContentDescription);
        return;
    }

    private int detectDisplayOptions() {
        if (this.mToolbar.getNavigationIcon() == null) goto L5;
        this.mDefaultNavigationIcon = this.mToolbar.getNavigationIcon();
        return 15;
    L5:
        return 11;
    }

    @Override
    public ViewGroup getViewGroup() {
        return this.mToolbar;
    }

    @Override
    public Context getContext() {
        return this.mToolbar.getContext();
    }

    @Override
    public boolean hasExpandedActionView() {
        return this.mToolbar.hasExpandedActionView();
    }

    @Override
    public void collapseActionView() {
        this.mToolbar.collapseActionView();
    }

    @Override
    public void setWindowCallback(Window.Callback r1) {
        this.mWindowCallback = r1;
    }

    @Override
    public void setWindowTitle(CharSequence r2) {
        if (this.mTitleSet == true) goto L6;
        setTitleInt(r2);
        return;
    }

    @Override
    public CharSequence getTitle() {
        return this.mToolbar.getTitle();
    }

    @Override
    public void setTitle(CharSequence r2) {
        this.mTitleSet = true;
        setTitleInt(r2);
    }

    private void setTitleInt(CharSequence r2) {
        this.mTitle = r2;
        if ((this.mDisplayOpts & 8) == 0) goto L6;
        this.mToolbar.setTitle(r2);
        return;
    }

    @Override
    public CharSequence getSubtitle() {
        return this.mToolbar.getSubtitle();
    }

    @Override
    public void setSubtitle(CharSequence r2) {
        this.mSubtitle = r2;
        if ((this.mDisplayOpts & 8) == 0) goto L6;
        this.mToolbar.setSubtitle(r2);
        return;
    }

    @Override
    public void initProgress() {
        Log.i(TAG, "Progress display unsupported");
    }

    @Override
    public void initIndeterminateProgress() {
        Log.i(TAG, "Progress display unsupported");
    }

    @Override
    public boolean hasIcon() {
        if (this.mIcon == null) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public boolean hasLogo() {
        if (this.mLogo == null) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public void setIcon(int r2) {
        if (r2 == 0) goto L4;
        Drawable r22 = AppCompatResources.getDrawable(getContext(), r2);
    L5:
        setIcon(r22);
        return;
    L4:
        r22 = null;
        goto L5
    }

    @Override
    public void setIcon(Drawable r1) {
        this.mIcon = r1;
        updateToolbarLogo();
    }

    @Override
    public void setLogo(int r2) {
        if (r2 == 0) goto L4;
        Drawable r22 = AppCompatResources.getDrawable(getContext(), r2);
    L5:
        setLogo(r22);
        return;
    L4:
        r22 = null;
        goto L5
    }

    @Override
    public void setLogo(Drawable r1) {
        this.mLogo = r1;
        updateToolbarLogo();
    }

    private void updateToolbarLogo() {
        int r0 = this.mDisplayOpts;
        if ((r0 & 2) != 0) goto L5;
        Drawable r02 = null;
    L12:
        this.mToolbar.setLogo(r02);
        return;
    L5:
        if ((r0 & 1) == 0) goto L10;
        r02 = this.mLogo;
        if (r02 != null) goto L12;
        r02 = this.mIcon;
        goto L12
    L10:
        r02 = this.mIcon;
        goto L12
    }

    @Override
    public boolean canShowOverflowMenu() {
        return this.mToolbar.canShowOverflowMenu();
    }

    @Override
    public boolean isOverflowMenuShowing() {
        return this.mToolbar.isOverflowMenuShowing();
    }

    @Override
    public boolean isOverflowMenuShowPending() {
        return this.mToolbar.isOverflowMenuShowPending();
    }

    @Override
    public boolean showOverflowMenu() {
        return this.mToolbar.showOverflowMenu();
    }

    @Override
    public boolean hideOverflowMenu() {
        return this.mToolbar.hideOverflowMenu();
    }

    @Override
    public void setMenuPrepared() {
        this.mMenuPrepared = true;
    }

    @Override
    public void setMenu(Menu r3, MenuPresenter.Callback r4) {
        if (this.mActionMenuPresenter != null) goto L5;
        this.mActionMenuPresenter = new ActionMenuPresenter(this.mToolbar.getContext());
        this.mActionMenuPresenter.setId(R.id.action_menu_presenter);
    L5:
        this.mActionMenuPresenter.setCallback(r4);
        this.mToolbar.setMenu((MenuBuilder) r3, this.mActionMenuPresenter);
    }

    @Override
    public void dismissPopupMenus() {
        this.mToolbar.dismissPopupMenus();
    }

    @Override
    public int getDisplayOptions() {
        return this.mDisplayOpts;
    }

    @Override
    public void setDisplayOptions(int r4) {
        int r0 = this.mDisplayOpts ^ r4;
        this.mDisplayOpts = r4;
        if (r0 != 0) goto L5;
        return;
    L5:
        if ((r0 & 4) == 0) goto L11;
        if ((r4 & 4) == 0) goto L9;
        updateHomeAccessibility();
    L9:
        updateNavigationIcon();
    L11:
        if ((r0 & 3) == 0) goto L14;
        updateToolbarLogo();
    L14:
        if ((r0 & 8) == 0) goto L20;
        if ((r4 & 8) == 0) goto L18;
        this.mToolbar.setTitle(this.mTitle);
        this.mToolbar.setSubtitle(this.mSubtitle);
        goto L20
    L18:
        this.mToolbar.setTitle(null);
        this.mToolbar.setSubtitle(null);
    L20:
        if ((r0 & 16) == 0) goto L29;
        View r02 = this.mCustomView;
        if (r02 != null) goto L24;
        return;
    L24:
        if ((r4 & 16) == 0) goto L26;
        this.mToolbar.addView(r02);
        return;
    L26:
        this.mToolbar.removeView(r02);
        return;
    }

    @Override
    public void setEmbeddedTabView(ScrollingTabContainerView r4) {
        View r0 = this.mTabView;
        if (r0 == null) goto L7;
        ViewParent r02 = r0.getParent();
        Toolbar r1 = this.mToolbar;
        if (r02 != r1) goto L7;
        r1.removeView(this.mTabView);
    L7:
        this.mTabView = r4;
        if (r4 != null) goto L10;
        return;
    L10:
        if (this.mNavigationMode != 2) goto L14;
        this.mToolbar.addView(this.mTabView, 0);
        Toolbar.LayoutParams r03 = (Toolbar.LayoutParams) this.mTabView.getLayoutParams();
        r03.width = -2;
        r03.height = -2;
        r03.gravity = 8388691;
        r4.setAllowCollapse(true);
        return;
    }

    @Override
    public boolean hasEmbeddedTabs() {
        if (this.mTabView == null) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public boolean isTitleTruncated() {
        return this.mToolbar.isTitleTruncated();
    }

    @Override
    public void setCollapsible(boolean r2) {
        this.mToolbar.setCollapsible(r2);
    }

    @Override
    public int getNavigationMode() {
        return this.mNavigationMode;
    }

    @Override
    public void setNavigationMode(int r5) {
        int r0 = this.mNavigationMode;
        if (r5 != r0) goto L5;
        return;
    L5:
        if (r0 == 1) goto L13;
        if (r0 != 2) goto L18;
        View r02 = this.mTabView;
        if (r02 == null) goto L18;
        ViewParent r03 = r02.getParent();
        Toolbar r3 = this.mToolbar;
        if (r03 != r3) goto L18;
        r3.removeView(this.mTabView);
    L18:
        this.mNavigationMode = r5;
        if (r5 != 0) goto L21;
        return;
    L21:
        if (r5 == 1) goto L28;
        if (r5 != 2) goto L27;
        View r52 = this.mTabView;
        if (r52 == null) goto L32;
        this.mToolbar.addView(r52, 0);
        Toolbar.LayoutParams r53 = (Toolbar.LayoutParams) this.mTabView.getLayoutParams();
        r53.width = -2;
        r53.height = -2;
        r53.gravity = 8388691;
        return;
    L32:
        return;
    L27:
        throw new IllegalArgumentException("Invalid navigation mode " + r5);
    L28:
        ensureSpinner();
        this.mToolbar.addView(this.mSpinner, 0);
        return;
    L13:
        Spinner r04 = this.mSpinner;
        if (r04 == null) goto L18;
        ViewParent r05 = r04.getParent();
        Toolbar r32 = this.mToolbar;
        if (r05 != r32) goto L18;
        r32.removeView(this.mSpinner);
        goto L18
    }

    private void ensureSpinner() {
        if (this.mSpinner != null) goto L6;
        this.mSpinner = new AppCompatSpinner(getContext(), null, R.attr.actionDropDownStyle);
        Toolbar.LayoutParams r0 = new Toolbar.LayoutParams(-2, -2, 8388627);
        this.mSpinner.setLayoutParams(r0);
        return;
    }

    @Override
    public void setDropdownParams(SpinnerAdapter r2, AdapterView.OnItemSelectedListener r3) {
        ensureSpinner();
        this.mSpinner.setAdapter(r2);
        this.mSpinner.setOnItemSelectedListener(r3);
    }

    @Override
    public void setDropdownSelectedPosition(int r2) {
        Spinner r0 = this.mSpinner;
        if (r0 == null) goto L7;
        r0.setSelection(r2);
        return;
    L7:
        throw new IllegalStateException("Can't set dropdown selected position without an adapter");
    }

    @Override
    public int getDropdownSelectedPosition() {
        Spinner r0 = this.mSpinner;
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.getSelectedItemPosition();
    }

    @Override
    public int getDropdownItemCount() {
        Spinner r0 = this.mSpinner;
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.getCount();
    }

    @Override
    public void setCustomView(View r3) {
        View r0 = this.mCustomView;
        if (r0 != null) goto L5;
    L7:
        this.mCustomView = r3;
        if (r3 != null) goto L10;
        return;
    L10:
        if ((this.mDisplayOpts & 16) == 0) goto L14;
        this.mToolbar.addView(this.mCustomView);
        return;
    L14:
        return;
    L5:
        if ((this.mDisplayOpts & 16) == 0) goto L7;
        this.mToolbar.removeView(r0);
        goto L7
    }

    @Override
    public View getCustomView() {
        return this.mCustomView;
    }

    @Override
    public void animateToVisibility(int r3) {
        ViewPropertyAnimatorCompat r32 = setupAnimatorToVisibility(r3, DEFAULT_FADE_DURATION_MS);
        if (r32 == null) goto L6;
        r32.start();
        return;
    }

    @Override
    public ViewPropertyAnimatorCompat setupAnimatorToVisibility(final int r3, long r4) {
        ViewPropertyAnimatorCompat r0 = ViewCompat.animate(this.mToolbar);
        if (r3 != 0) goto L5;
        float r1 = 1.0f;
    L7:
        return r0.alpha(r1).setDuration(r4).setListener(new 2(this, r3));
    L5:
        r1 = 0.0f;
        goto L7
    }

    @Override
    public void setNavigationIcon(Drawable r1) {
        this.mNavIcon = r1;
        updateNavigationIcon();
    }

    @Override
    public void setNavigationIcon(int r2) {
        if (r2 == 0) goto L4;
        Drawable r22 = AppCompatResources.getDrawable(getContext(), r2);
    L5:
        setNavigationIcon(r22);
        return;
    L4:
        r22 = null;
        goto L5
    }

    @Override
    public void setDefaultNavigationIcon(Drawable r2) {
        if (this.mDefaultNavigationIcon == r2) goto L6;
        this.mDefaultNavigationIcon = r2;
        updateNavigationIcon();
        return;
    }

    private void updateNavigationIcon() {
        if ((this.mDisplayOpts & 4) == 0) goto L9;
        Toolbar r0 = this.mToolbar;
        Drawable r1 = this.mNavIcon;
        if (r1 != null) goto L8;
        r1 = this.mDefaultNavigationIcon;
    L8:
        r0.setNavigationIcon(r1);
        return;
    L9:
        this.mToolbar.setNavigationIcon(null);
    }

    @Override
    public void setNavigationContentDescription(CharSequence r1) {
        this.mHomeDescription = r1;
        updateHomeAccessibility();
    }

    @Override
    public void setNavigationContentDescription(int r2) {
        if (r2 != 0) goto L4;
        String r22 = null;
    L5:
        setNavigationContentDescription(r22);
        return;
    L4:
        r22 = getContext().getString(r2);
        goto L5
    }

    private void updateHomeAccessibility() {
        if ((this.mDisplayOpts & 4) != 0) goto L5;
        return;
    L5:
        if (TextUtils.isEmpty(this.mHomeDescription) == false) goto L7;
        this.mToolbar.setNavigationContentDescription(this.mDefaultNavigationContentDescription);
        return;
    L7:
        this.mToolbar.setNavigationContentDescription(this.mHomeDescription);
    }

    @Override
    public void saveHierarchyState(SparseArray<Parcelable> r2) {
        this.mToolbar.saveHierarchyState(r2);
    }

    @Override
    public void restoreHierarchyState(SparseArray<Parcelable> r2) {
        this.mToolbar.restoreHierarchyState(r2);
    }

    @Override
    public void setBackgroundDrawable(Drawable r2) {
        ViewCompat.setBackground(this.mToolbar, r2);
    }

    @Override
    public int getHeight() {
        return this.mToolbar.getHeight();
    }

    @Override
    public void setVisibility(int r2) {
        this.mToolbar.setVisibility(r2);
    }

    @Override
    public int getVisibility() {
        return this.mToolbar.getVisibility();
    }

    @Override
    public void setMenuCallbacks(MenuPresenter.Callback r2, MenuBuilder.Callback r3) {
        this.mToolbar.setMenuCallbacks(r2, r3);
    }

    @Override
    public Menu getMenu() {
        return this.mToolbar.getMenu();
    }
}
