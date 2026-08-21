package android.support.v7.widget;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Parcel;
import android.os.Parcelable;
import android.support.annotation.ColorInt;
import android.support.annotation.DrawableRes;
import android.support.annotation.MenuRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.annotation.StringRes;
import android.support.annotation.StyleRes;
import android.support.v4.view.AbsSavedState;
import android.support.v4.view.GravityCompat;
import android.support.v4.view.MarginLayoutParamsCompat;
import android.support.v4.view.ViewCompat;
import android.support.v7.app.ActionBar;
import android.support.v7.appcompat.R;
import android.support.v7.content.res.AppCompatResources;
import android.support.v7.view.CollapsibleActionView;
import android.support.v7.view.SupportMenuInflater;
import android.support.v7.view.menu.MenuBuilder;
import android.support.v7.view.menu.MenuItemImpl;
import android.support.v7.view.menu.MenuPresenter;
import android.support.v7.view.menu.MenuView;
import android.support.v7.view.menu.SubMenuBuilder;
import android.support.v7.widget.ActionMenuView;
import android.text.Layout;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.ContextThemeWrapper;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.ImageButton;
import android.widget.ImageView;
import android.widget.TextView;
import java.util.ArrayList;
import java.util.List;

public class Toolbar extends ViewGroup {
    private static final String TAG = "Toolbar";
    private MenuPresenter.Callback mActionMenuPresenterCallback;
    int mButtonGravity;
    ImageButton mCollapseButtonView;
    private CharSequence mCollapseDescription;
    private Drawable mCollapseIcon;
    private boolean mCollapsible;
    private int mContentInsetEndWithActions;
    private int mContentInsetStartWithNavigation;
    private RtlSpacingHelper mContentInsets;
    private boolean mEatingHover;
    private boolean mEatingTouch;
    View mExpandedActionView;
    private ExpandedActionViewMenuPresenter mExpandedMenuPresenter;
    private int mGravity;
    private final ArrayList<View> mHiddenViews;
    private ImageView mLogoView;
    private int mMaxButtonHeight;
    private MenuBuilder.Callback mMenuBuilderCallback;
    private ActionMenuView mMenuView;
    private final ActionMenuView.OnMenuItemClickListener mMenuViewItemClickListener;
    private ImageButton mNavButtonView;
    OnMenuItemClickListener mOnMenuItemClickListener;
    private ActionMenuPresenter mOuterActionMenuPresenter;
    private Context mPopupContext;
    private int mPopupTheme;
    private final Runnable mShowOverflowMenuRunnable;
    private CharSequence mSubtitleText;
    private int mSubtitleTextAppearance;
    private int mSubtitleTextColor;
    private TextView mSubtitleTextView;
    private final int[] mTempMargins;
    private final ArrayList<View> mTempViews;
    private int mTitleMarginBottom;
    private int mTitleMarginEnd;
    private int mTitleMarginStart;
    private int mTitleMarginTop;
    private CharSequence mTitleText;
    private int mTitleTextAppearance;
    private int mTitleTextColor;
    private TextView mTitleTextView;
    private ToolbarWidgetWrapper mWrapper;

    private class ExpandedActionViewMenuPresenter implements MenuPresenter {
        MenuItemImpl mCurrentExpandedItem;
        MenuBuilder mMenu;
        final Toolbar this$0;

        @Override
        public boolean flagActionItems() {
            return false;
        }

        @Override
        public int getId() {
            return 0;
        }

        @Override
        public MenuView getMenuView(ViewGroup r1) {
            return null;
        }

        @Override
        public void onCloseMenu(MenuBuilder r1, boolean r2) {
        }

        @Override
        public void onRestoreInstanceState(Parcelable r1) {
        }

        @Override
        public Parcelable onSaveInstanceState() {
            return null;
        }

        @Override
        public boolean onSubMenuSelected(SubMenuBuilder r1) {
            return false;
        }

        @Override
        public void setCallback(MenuPresenter.Callback r1) {
        }

        ExpandedActionViewMenuPresenter(Toolbar r1) {
            this.this$0 = r1;
        }

        @Override
        public void initForMenu(Context r2, MenuBuilder r3) {
            MenuBuilder r22 = this.mMenu;
            if (r22 == null) goto L7;
            MenuItemImpl r0 = this.mCurrentExpandedItem;
            if (r0 == null) goto L7;
            r22.collapseItemActionView(r0);
        L7:
            this.mMenu = r3;
        }

        @Override
        public void updateMenuView(boolean r5) {
            if (this.mCurrentExpandedItem == null) goto L17;
            MenuBuilder r52 = this.mMenu;
            boolean r0 = false;
            if (r52 == null) goto L12;
            int r53 = r52.size();
            int r1 = 0;
        L7:
            if (r1 >= r53) goto L12;
            if (this.mMenu.getItem(r1) == this.mCurrentExpandedItem) goto L10;
            r1 = r1 + 1;
            goto L7
        L10:
            r0 = true;
        L12:
            if (r0 == true) goto L18;
            collapseItemActionView(this.mMenu, this.mCurrentExpandedItem);
            return;
        L18:
            return;
        }

        @Override
        public boolean expandItemActionView(MenuBuilder r3, MenuItemImpl r4) {
            this.this$0.ensureCollapseButtonView();
            ViewParent r32 = this.this$0.mCollapseButtonView.getParent();
            Toolbar r0 = this.this$0;
            if (r32 != r0) goto L5;
        L8:
            Toolbar r33 = this.this$0;
            r33.mExpandedActionView = r4.getActionView();
            this.mCurrentExpandedItem = r4;
            ViewParent r34 = this.this$0.mExpandedActionView.getParent();
            Toolbar r02 = this.this$0;
            if (r34 != r02) goto L11;
        L14:
            this.this$0.removeChildrenForExpandedActionView();
            this.this$0.requestLayout();
            r4.setActionViewExpanded(true);
            if ((this.this$0.mExpandedActionView instanceof CollapsibleActionView) == false) goto L17;
            ((CollapsibleActionView) this.this$0.mExpandedActionView).onActionViewExpanded();
        L17:
            return true;
        L11:
            if ((r34 instanceof ViewGroup) == false) goto L13;
            ((ViewGroup) r34).removeView(r02.mExpandedActionView);
        L13:
            LayoutParams r35 = this.this$0.generateDefaultLayoutParams();
            r35.gravity = 8388611 | (this.this$0.mButtonGravity & 112);
            r35.mViewType = 2;
            this.this$0.mExpandedActionView.setLayoutParams(r35);
            Toolbar r36 = this.this$0;
            r36.addView(r36.mExpandedActionView);
            goto L14
        L5:
            if ((r32 instanceof ViewGroup) == false) goto L7;
            ((ViewGroup) r32).removeView(r0.mCollapseButtonView);
        L7:
            Toolbar r37 = this.this$0;
            r37.addView(r37.mCollapseButtonView);
            goto L8
        }

        @Override
        public boolean collapseItemActionView(MenuBuilder r2, MenuItemImpl r3) {
            if ((this.this$0.mExpandedActionView instanceof CollapsibleActionView) == false) goto L5;
            ((CollapsibleActionView) this.this$0.mExpandedActionView).onActionViewCollapsed();
        L5:
            Toolbar r22 = this.this$0;
            r22.removeView(r22.mExpandedActionView);
            Toolbar r23 = this.this$0;
            r23.removeView(r23.mCollapseButtonView);
            Toolbar r24 = this.this$0;
            r24.mExpandedActionView = null;
            r24.addChildrenForExpandedActionView();
            this.mCurrentExpandedItem = null;
            this.this$0.requestLayout();
            r3.setActionViewExpanded(false);
            return true;
        }
    }

    public static class LayoutParams extends ActionBar.LayoutParams {
        static final int CUSTOM = 0;
        static final int EXPANDED = 2;
        static final int SYSTEM = 1;
        int mViewType;

        public LayoutParams(@NonNull Context r1, AttributeSet r2) {
            super(r1, r2);
            this.mViewType = 0;
        }

        public LayoutParams(int r1, int r2) {
            super(r1, r2);
            this.mViewType = 0;
            this.gravity = 8388627;
        }

        public LayoutParams(int r1, int r2, int r3) {
            super(r1, r2);
            this.mViewType = 0;
            this.gravity = r3;
        }

        public LayoutParams(int r3) {
            this(-2, -1, r3);
        }

        public LayoutParams(LayoutParams r2) {
            super(r2);
            this.mViewType = 0;
            this.mViewType = r2.mViewType;
        }

        public LayoutParams(ActionBar.LayoutParams r1) {
            super(r1);
            this.mViewType = 0;
        }

        public LayoutParams(ViewGroup.MarginLayoutParams r2) {
            super(r2);
            this.mViewType = 0;
            copyMarginsFromCompat(r2);
        }

        public LayoutParams(ViewGroup.LayoutParams r1) {
            super(r1);
            this.mViewType = 0;
        }

        void copyMarginsFromCompat(ViewGroup.MarginLayoutParams r2) {
            this.leftMargin = r2.leftMargin;
            this.topMargin = r2.topMargin;
            this.rightMargin = r2.rightMargin;
            this.bottomMargin = r2.bottomMargin;
        }
    }

    public interface OnMenuItemClickListener {
        boolean onMenuItemClick(MenuItem r1);
    }

    public static class SavedState extends AbsSavedState {
        public static final Parcelable.Creator<SavedState> CREATOR = null;
        int expandedMenuItemId;
        boolean isOverflowOpen;

        public SavedState(Parcel r2) {
            this(r2, null);
        }

        public SavedState(Parcel r1, ClassLoader r2) {
            super(r1, r2);
            this.expandedMenuItemId = r1.readInt();
            if (r1.readInt() == 0) goto L5;
            boolean r12 = true;
        L6:
            this.isOverflowOpen = r12;
            return;
        L5:
            r12 = false;
            goto L6
        }

        public SavedState(Parcelable r1) {
            super(r1);
        }

        @Override
        public void writeToParcel(Parcel r1, int r2) {
            super.writeToParcel(r1, r2);
            r1.writeInt(this.expandedMenuItemId);
            r1.writeInt(this.isOverflowOpen ? 1 : 0);
        }

        static {
            CREATOR = new 1();
        }
    }

    @Override
    protected ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return generateDefaultLayoutParams();
    }

    @Override
    public ViewGroup.LayoutParams generateLayoutParams(AttributeSet r1) {
        return generateLayoutParams(r1);
    }

    @Override
    protected ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams r1) {
        return generateLayoutParams(r1);
    }

    public Toolbar(Context r2) {
        this(r2, null);
    }

    public Toolbar(Context r2, @Nullable AttributeSet r3) {
        this(r2, r3, R.attr.toolbarStyle);
    }

    public Toolbar(Context r7, @Nullable AttributeSet r8, int r9) {
        super(r7, r8, r9);
        this.mGravity = 8388627;
        this.mTempViews = new ArrayList();
        this.mHiddenViews = new ArrayList();
        this.mTempMargins = new int[2];
        this.mMenuViewItemClickListener = new 1(this);
        this.mShowOverflowMenuRunnable = new 2(this);
        TintTypedArray r72 = TintTypedArray.obtainStyledAttributes(getContext(), r8, R.styleable.Toolbar, r9, 0);
        this.mTitleTextAppearance = r72.getResourceId(R.styleable.Toolbar_titleTextAppearance, 0);
        this.mSubtitleTextAppearance = r72.getResourceId(R.styleable.Toolbar_subtitleTextAppearance, 0);
        this.mGravity = r72.getInteger(R.styleable.Toolbar_android_gravity, this.mGravity);
        this.mButtonGravity = r72.getInteger(R.styleable.Toolbar_buttonGravity, 48);
        int r82 = r72.getDimensionPixelOffset(R.styleable.Toolbar_titleMargin, 0);
        if (r72.hasValue(R.styleable.Toolbar_titleMargins) == false) goto L5;
        r82 = r72.getDimensionPixelOffset(R.styleable.Toolbar_titleMargins, r82);
    L5:
        this.mTitleMarginBottom = r82;
        this.mTitleMarginTop = r82;
        this.mTitleMarginEnd = r82;
        this.mTitleMarginStart = r82;
        int r83 = r72.getDimensionPixelOffset(R.styleable.Toolbar_titleMarginStart, -1);
        if (r83 < 0) goto L8;
        this.mTitleMarginStart = r83;
    L8:
        int r84 = r72.getDimensionPixelOffset(R.styleable.Toolbar_titleMarginEnd, -1);
        if (r84 < 0) goto L11;
        this.mTitleMarginEnd = r84;
    L11:
        int r85 = r72.getDimensionPixelOffset(R.styleable.Toolbar_titleMarginTop, -1);
        if (r85 < 0) goto L14;
        this.mTitleMarginTop = r85;
    L14:
        int r86 = r72.getDimensionPixelOffset(R.styleable.Toolbar_titleMarginBottom, -1);
        if (r86 < 0) goto L17;
        this.mTitleMarginBottom = r86;
    L17:
        this.mMaxButtonHeight = r72.getDimensionPixelSize(R.styleable.Toolbar_maxButtonHeight, -1);
        int r87 = r72.getDimensionPixelOffset(R.styleable.Toolbar_contentInsetStart, Integer.MIN_VALUE);
        int r2 = r72.getDimensionPixelOffset(R.styleable.Toolbar_contentInsetEnd, Integer.MIN_VALUE);
        int r3 = r72.getDimensionPixelSize(R.styleable.Toolbar_contentInsetLeft, 0);
        int r4 = r72.getDimensionPixelSize(R.styleable.Toolbar_contentInsetRight, 0);
        ensureContentInsets();
        this.mContentInsets.setAbsolute(r3, r4);
        if (r87 != Integer.MIN_VALUE) goto L20;
        if (r2 != Integer.MIN_VALUE) goto L20;
    L21:
        this.mContentInsetStartWithNavigation = r72.getDimensionPixelOffset(R.styleable.Toolbar_contentInsetStartWithNavigation, Integer.MIN_VALUE);
        this.mContentInsetEndWithActions = r72.getDimensionPixelOffset(R.styleable.Toolbar_contentInsetEndWithActions, Integer.MIN_VALUE);
        this.mCollapseIcon = r72.getDrawable(R.styleable.Toolbar_collapseIcon);
        this.mCollapseDescription = r72.getText(R.styleable.Toolbar_collapseContentDescription);
        CharSequence r88 = r72.getText(R.styleable.Toolbar_title);
        if (TextUtils.isEmpty(r88) == true) goto L24;
        setTitle(r88);
    L24:
        CharSequence r89 = r72.getText(R.styleable.Toolbar_subtitle);
        if (TextUtils.isEmpty(r89) == true) goto L27;
        setSubtitle(r89);
    L27:
        this.mPopupContext = getContext();
        setPopupTheme(r72.getResourceId(R.styleable.Toolbar_popupTheme, 0));
        Drawable r810 = r72.getDrawable(R.styleable.Toolbar_navigationIcon);
        if (r810 == null) goto L30;
        setNavigationIcon(r810);
    L30:
        CharSequence r811 = r72.getText(R.styleable.Toolbar_navigationContentDescription);
        if (TextUtils.isEmpty(r811) == true) goto L33;
        setNavigationContentDescription(r811);
    L33:
        Drawable r812 = r72.getDrawable(R.styleable.Toolbar_logo);
        if (r812 == null) goto L36;
        setLogo(r812);
    L36:
        CharSequence r813 = r72.getText(R.styleable.Toolbar_logoDescription);
        if (TextUtils.isEmpty(r813) == true) goto L40;
        setLogoDescription(r813);
    L40:
        if (r72.hasValue(R.styleable.Toolbar_titleTextColor) == false) goto L43;
        setTitleTextColor(r72.getColor(R.styleable.Toolbar_titleTextColor, -1));
    L43:
        if (r72.hasValue(R.styleable.Toolbar_subtitleTextColor) == false) goto L45;
        setSubtitleTextColor(r72.getColor(R.styleable.Toolbar_subtitleTextColor, -1));
    L45:
        r72.recycle();
        return;
    L20:
        this.mContentInsets.setRelative(r87, r2);
        goto L21
    }

    public void setPopupTheme(@StyleRes int r3) {
        if (this.mPopupTheme == r3) goto L9;
        this.mPopupTheme = r3;
        if (r3 != 0) goto L7;
        this.mPopupContext = getContext();
        return;
    L7:
        this.mPopupContext = new ContextThemeWrapper(getContext(), r3);
        return;
    }

    public int getPopupTheme() {
        return this.mPopupTheme;
    }

    public void setTitleMargin(int r1, int r2, int r3, int r4) {
        this.mTitleMarginStart = r1;
        this.mTitleMarginTop = r2;
        this.mTitleMarginEnd = r3;
        this.mTitleMarginBottom = r4;
        requestLayout();
    }

    public int getTitleMarginStart() {
        return this.mTitleMarginStart;
    }

    public void setTitleMarginStart(int r1) {
        this.mTitleMarginStart = r1;
        requestLayout();
    }

    public int getTitleMarginTop() {
        return this.mTitleMarginTop;
    }

    public void setTitleMarginTop(int r1) {
        this.mTitleMarginTop = r1;
        requestLayout();
    }

    public int getTitleMarginEnd() {
        return this.mTitleMarginEnd;
    }

    public void setTitleMarginEnd(int r1) {
        this.mTitleMarginEnd = r1;
        requestLayout();
    }

    public int getTitleMarginBottom() {
        return this.mTitleMarginBottom;
    }

    public void setTitleMarginBottom(int r1) {
        this.mTitleMarginBottom = r1;
        requestLayout();
    }

    @Override
    public void onRtlPropertiesChanged(int r3) {
        if (Build.VERSION.SDK_INT < 17) goto L5;
        super.onRtlPropertiesChanged(r3);
    L5:
        ensureContentInsets();
        RtlSpacingHelper r0 = this.mContentInsets;
        boolean r1 = true;
        if (r3 == 1) goto L9;
        r1 = false;
    L9:
        r0.setDirection(r1);
    }

    public void setLogo(@DrawableRes int r2) {
        setLogo(AppCompatResources.getDrawable(getContext(), r2));
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public boolean canShowOverflowMenu() {
        if (getVisibility() != 0) goto L9;
        ActionMenuView r0 = this.mMenuView;
        if (r0 == null) goto L9;
        if (r0.isOverflowReserved() == false) goto L9;
        return true;
    L9:
        return false;
    }

    public boolean isOverflowMenuShowing() {
        ActionMenuView r0 = this.mMenuView;
        if (r0 != null) goto L5;
    L7:
        return false;
    L5:
        if (r0.isOverflowMenuShowing() == false) goto L7;
        return true;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public boolean isOverflowMenuShowPending() {
        ActionMenuView r0 = this.mMenuView;
        if (r0 != null) goto L5;
    L7:
        return false;
    L5:
        if (r0.isOverflowMenuShowPending() == false) goto L7;
        return true;
    }

    public boolean showOverflowMenu() {
        ActionMenuView r0 = this.mMenuView;
        if (r0 != null) goto L5;
    L7:
        return false;
    L5:
        if (r0.showOverflowMenu() == false) goto L7;
        return true;
    }

    public boolean hideOverflowMenu() {
        ActionMenuView r0 = this.mMenuView;
        if (r0 != null) goto L5;
    L7:
        return false;
    L5:
        if (r0.hideOverflowMenu() == false) goto L7;
        return true;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setMenu(MenuBuilder r4, ActionMenuPresenter r5) {
        if (r4 == null) goto L4;
    L6:
        ensureMenuView();
        MenuBuilder r0 = this.mMenuView.peekMenu();
        if (r0 != r4) goto L9;
        return;
    L9:
        if (r0 == null) goto L12;
        r0.removeMenuPresenter(this.mOuterActionMenuPresenter);
        r0.removeMenuPresenter(this.mExpandedMenuPresenter);
    L12:
        if (this.mExpandedMenuPresenter != null) goto L14;
        this.mExpandedMenuPresenter = new ExpandedActionViewMenuPresenter(this);
    L14:
        r5.setExpandedActionViewsExclusive(true);
        if (r4 == null) goto L17;
        r4.addMenuPresenter(r5, this.mPopupContext);
        r4.addMenuPresenter(this.mExpandedMenuPresenter, this.mPopupContext);
    L18:
        this.mMenuView.setPopupTheme(this.mPopupTheme);
        this.mMenuView.setPresenter(r5);
        this.mOuterActionMenuPresenter = r5;
        return;
    L17:
        r5.initForMenu(this.mPopupContext, null);
        this.mExpandedMenuPresenter.initForMenu(this.mPopupContext, null);
        r5.updateMenuView(true);
        this.mExpandedMenuPresenter.updateMenuView(true);
        goto L18
    L4:
        if (this.mMenuView != null) goto L6;
    }

    public void dismissPopupMenus() {
        ActionMenuView r0 = this.mMenuView;
        if (r0 == null) goto L6;
        r0.dismissPopupMenus();
        return;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public boolean isTitleTruncated() {
        TextView r0 = this.mTitleTextView;
        if (r0 != null) goto L5;
        return false;
    L5:
        Layout r02 = r0.getLayout();
        if (r02 != null) goto L8;
        return false;
    L8:
        int r2 = r02.getLineCount();
        int r3 = 0;
    L9:
        if (r3 >= r2) goto L15;
        if (r02.getEllipsisCount(r3) > 0) goto L12;
        r3 = r3 + 1;
        goto L9
    L12:
        return true;
    L15:
        return false;
    }

    public void setLogo(Drawable r3) {
        if (r3 == null) goto L6;
        ensureLogoView();
        if (isChildOrHidden(this.mLogoView) == true) goto L11;
        addSystemView(this.mLogoView, true);
    L11:
        ImageView r0 = this.mLogoView;
        if (r0 == null) goto L15;
        r0.setImageDrawable(r3);
        return;
    L15:
        return;
    L6:
        ImageView r02 = this.mLogoView;
        if (r02 == null) goto L11;
        if (isChildOrHidden(r02) == false) goto L11;
        removeView(this.mLogoView);
        this.mHiddenViews.remove(this.mLogoView);
        goto L11
    }

    public Drawable getLogo() {
        ImageView r0 = this.mLogoView;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.getDrawable();
    }

    public void setLogoDescription(@StringRes int r2) {
        setLogoDescription(getContext().getText(r2));
    }

    public void setLogoDescription(CharSequence r2) {
        if (TextUtils.isEmpty(r2) == true) goto L5;
        ensureLogoView();
    L5:
        ImageView r0 = this.mLogoView;
        if (r0 == null) goto L9;
        r0.setContentDescription(r2);
        return;
    }

    public CharSequence getLogoDescription() {
        ImageView r0 = this.mLogoView;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.getContentDescription();
    }

    private void ensureLogoView() {
        if (this.mLogoView != null) goto L6;
        this.mLogoView = new AppCompatImageView(getContext());
        return;
    }

    public boolean hasExpandedActionView() {
        ExpandedActionViewMenuPresenter r0 = this.mExpandedMenuPresenter;
        if (r0 != null) goto L5;
    L7:
        return false;
    L5:
        if (r0.mCurrentExpandedItem == null) goto L7;
        return true;
    }

    public void collapseActionView() {
        ExpandedActionViewMenuPresenter r0 = this.mExpandedMenuPresenter;
        if (r0 != null) goto L5;
        MenuItemImpl r02 = null;
    L6:
        if (r02 == null) goto L9;
        r02.collapseActionView();
        return;
    L9:
        return;
    L5:
        r02 = r0.mCurrentExpandedItem;
        goto L6
    }

    public CharSequence getTitle() {
        return this.mTitleText;
    }

    public void setTitle(@StringRes int r2) {
        setTitle(getContext().getText(r2));
    }

    public void setTitle(CharSequence r4) {
        if (TextUtils.isEmpty(r4) == false) goto L5;
        TextView r0 = this.mTitleTextView;
        if (r0 != null) goto L18;
    L20:
        TextView r02 = this.mTitleTextView;
        if (r02 == null) goto L23;
        r02.setText(r4);
    L23:
        this.mTitleText = r4;
        return;
    L18:
        if (isChildOrHidden(r0) == false) goto L20;
        removeView(this.mTitleTextView);
        this.mHiddenViews.remove(this.mTitleTextView);
        goto L20
    L5:
        if (this.mTitleTextView != null) goto L13;
        Context r03 = getContext();
        this.mTitleTextView = new AppCompatTextView(r03);
        this.mTitleTextView.setSingleLine();
        this.mTitleTextView.setEllipsize(TextUtils.TruncateAt.END);
        int r1 = this.mTitleTextAppearance;
        if (r1 == 0) goto L9;
        this.mTitleTextView.setTextAppearance(r03, r1);
    L9:
        int r04 = this.mTitleTextColor;
        if (r04 == 0) goto L13;
        this.mTitleTextView.setTextColor(r04);
    L13:
        if (isChildOrHidden(this.mTitleTextView) == true) goto L20;
        addSystemView(this.mTitleTextView, true);
        goto L20
    }

    public CharSequence getSubtitle() {
        return this.mSubtitleText;
    }

    public void setSubtitle(@StringRes int r2) {
        setSubtitle(getContext().getText(r2));
    }

    public void setSubtitle(CharSequence r4) {
        if (TextUtils.isEmpty(r4) == false) goto L5;
        TextView r0 = this.mSubtitleTextView;
        if (r0 != null) goto L18;
    L20:
        TextView r02 = this.mSubtitleTextView;
        if (r02 == null) goto L23;
        r02.setText(r4);
    L23:
        this.mSubtitleText = r4;
        return;
    L18:
        if (isChildOrHidden(r0) == false) goto L20;
        removeView(this.mSubtitleTextView);
        this.mHiddenViews.remove(this.mSubtitleTextView);
        goto L20
    L5:
        if (this.mSubtitleTextView != null) goto L13;
        Context r03 = getContext();
        this.mSubtitleTextView = new AppCompatTextView(r03);
        this.mSubtitleTextView.setSingleLine();
        this.mSubtitleTextView.setEllipsize(TextUtils.TruncateAt.END);
        int r1 = this.mSubtitleTextAppearance;
        if (r1 == 0) goto L9;
        this.mSubtitleTextView.setTextAppearance(r03, r1);
    L9:
        int r04 = this.mSubtitleTextColor;
        if (r04 == 0) goto L13;
        this.mSubtitleTextView.setTextColor(r04);
    L13:
        if (isChildOrHidden(this.mSubtitleTextView) == true) goto L20;
        addSystemView(this.mSubtitleTextView, true);
        goto L20
    }

    public void setTitleTextAppearance(Context r2, @StyleRes int r3) {
        this.mTitleTextAppearance = r3;
        TextView r0 = this.mTitleTextView;
        if (r0 == null) goto L6;
        r0.setTextAppearance(r2, r3);
        return;
    }

    public void setSubtitleTextAppearance(Context r2, @StyleRes int r3) {
        this.mSubtitleTextAppearance = r3;
        TextView r0 = this.mSubtitleTextView;
        if (r0 == null) goto L6;
        r0.setTextAppearance(r2, r3);
        return;
    }

    public void setTitleTextColor(@ColorInt int r2) {
        this.mTitleTextColor = r2;
        TextView r0 = this.mTitleTextView;
        if (r0 == null) goto L6;
        r0.setTextColor(r2);
        return;
    }

    public void setSubtitleTextColor(@ColorInt int r2) {
        this.mSubtitleTextColor = r2;
        TextView r0 = this.mSubtitleTextView;
        if (r0 == null) goto L6;
        r0.setTextColor(r2);
        return;
    }

    @Nullable
    public CharSequence getNavigationContentDescription() {
        ImageButton r0 = this.mNavButtonView;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.getContentDescription();
    }

    public void setNavigationContentDescription(@StringRes int r2) {
        if (r2 == 0) goto L4;
        CharSequence r22 = getContext().getText(r2);
    L5:
        setNavigationContentDescription(r22);
        return;
    L4:
        r22 = null;
        goto L5
    }

    public void setNavigationContentDescription(@Nullable CharSequence r2) {
        if (TextUtils.isEmpty(r2) == true) goto L5;
        ensureNavButtonView();
    L5:
        ImageButton r0 = this.mNavButtonView;
        if (r0 == null) goto L9;
        r0.setContentDescription(r2);
        return;
    }

    public void setNavigationIcon(@DrawableRes int r2) {
        setNavigationIcon(AppCompatResources.getDrawable(getContext(), r2));
    }

    public void setNavigationIcon(@Nullable Drawable r3) {
        if (r3 == null) goto L6;
        ensureNavButtonView();
        if (isChildOrHidden(this.mNavButtonView) == true) goto L11;
        addSystemView(this.mNavButtonView, true);
    L11:
        ImageButton r0 = this.mNavButtonView;
        if (r0 == null) goto L15;
        r0.setImageDrawable(r3);
        return;
    L15:
        return;
    L6:
        ImageButton r02 = this.mNavButtonView;
        if (r02 == null) goto L11;
        if (isChildOrHidden(r02) == false) goto L11;
        removeView(this.mNavButtonView);
        this.mHiddenViews.remove(this.mNavButtonView);
        goto L11
    }

    @Nullable
    public Drawable getNavigationIcon() {
        ImageButton r0 = this.mNavButtonView;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.getDrawable();
    }

    public void setNavigationOnClickListener(View.OnClickListener r2) {
        ensureNavButtonView();
        this.mNavButtonView.setOnClickListener(r2);
    }

    public Menu getMenu() {
        ensureMenu();
        return this.mMenuView.getMenu();
    }

    public void setOverflowIcon(@Nullable Drawable r2) {
        ensureMenu();
        this.mMenuView.setOverflowIcon(r2);
    }

    @Nullable
    public Drawable getOverflowIcon() {
        ensureMenu();
        return this.mMenuView.getOverflowIcon();
    }

    private void ensureMenu() {
        ensureMenuView();
        if (this.mMenuView.peekMenu() != null) goto L9;
        MenuBuilder r0 = (MenuBuilder) this.mMenuView.getMenu();
        if (this.mExpandedMenuPresenter != null) goto L7;
        this.mExpandedMenuPresenter = new ExpandedActionViewMenuPresenter(this);
    L7:
        this.mMenuView.setExpandedActionViewsExclusive(true);
        r0.addMenuPresenter(this.mExpandedMenuPresenter, this.mPopupContext);
        return;
    }

    private void ensureMenuView() {
        if (this.mMenuView != null) goto L6;
        this.mMenuView = new ActionMenuView(getContext());
        this.mMenuView.setPopupTheme(this.mPopupTheme);
        this.mMenuView.setOnMenuItemClickListener(this.mMenuViewItemClickListener);
        this.mMenuView.setMenuCallbacks(this.mActionMenuPresenterCallback, this.mMenuBuilderCallback);
        LayoutParams r0 = generateDefaultLayoutParams();
        r0.gravity = 8388613 | (this.mButtonGravity & 112);
        this.mMenuView.setLayoutParams(r0);
        addSystemView(this.mMenuView, false);
        return;
    }

    private MenuInflater getMenuInflater() {
        return new SupportMenuInflater(getContext());
    }

    public void inflateMenu(@MenuRes int r3) {
        getMenuInflater().inflate(r3, getMenu());
    }

    public void setOnMenuItemClickListener(OnMenuItemClickListener r1) {
        this.mOnMenuItemClickListener = r1;
    }

    public void setContentInsetsRelative(int r2, int r3) {
        ensureContentInsets();
        this.mContentInsets.setRelative(r2, r3);
    }

    public int getContentInsetStart() {
        RtlSpacingHelper r0 = this.mContentInsets;
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.getStart();
    }

    public int getContentInsetEnd() {
        RtlSpacingHelper r0 = this.mContentInsets;
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.getEnd();
    }

    public void setContentInsetsAbsolute(int r2, int r3) {
        ensureContentInsets();
        this.mContentInsets.setAbsolute(r2, r3);
    }

    public int getContentInsetLeft() {
        RtlSpacingHelper r0 = this.mContentInsets;
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.getLeft();
    }

    public int getContentInsetRight() {
        RtlSpacingHelper r0 = this.mContentInsets;
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.getRight();
    }

    public int getContentInsetStartWithNavigation() {
        int r0 = this.mContentInsetStartWithNavigation;
        if (r0 == Integer.MIN_VALUE) goto L6;
        return r0;
    L6:
        return getContentInsetStart();
    }

    public void setContentInsetStartWithNavigation(int r2) {
        if (r2 >= 0) goto L5;
        r2 = Integer.MIN_VALUE;
    L5:
        if (r2 == this.mContentInsetStartWithNavigation) goto L10;
        this.mContentInsetStartWithNavigation = r2;
        if (getNavigationIcon() == null) goto L11;
        requestLayout();
        return;
    L11:
        return;
    }

    public int getContentInsetEndWithActions() {
        int r0 = this.mContentInsetEndWithActions;
        if (r0 == Integer.MIN_VALUE) goto L6;
        return r0;
    L6:
        return getContentInsetEnd();
    }

    public void setContentInsetEndWithActions(int r2) {
        if (r2 >= 0) goto L5;
        r2 = Integer.MIN_VALUE;
    L5:
        if (r2 == this.mContentInsetEndWithActions) goto L10;
        this.mContentInsetEndWithActions = r2;
        if (getNavigationIcon() == null) goto L11;
        requestLayout();
        return;
    L11:
        return;
    }

    public int getCurrentContentInsetStart() {
        if (getNavigationIcon() == null) goto L6;
        return Math.max(getContentInsetStart(), Math.max(this.mContentInsetStartWithNavigation, 0));
    L6:
        return getContentInsetStart();
    }

    public int getCurrentContentInsetEnd() {
        ActionMenuView r0 = this.mMenuView;
        if (r0 == null) goto L9;
        MenuBuilder r02 = r0.peekMenu();
        if (r02 == null) goto L9;
        if (r02.hasVisibleItems() == false) goto L9;
        boolean r03 = true;
    L10:
        if (r03 == false) goto L13;
        return Math.max(getContentInsetEnd(), Math.max(this.mContentInsetEndWithActions, 0));
    L13:
        return getContentInsetEnd();
    L9:
        r03 = false;
        goto L10
    }

    public int getCurrentContentInsetLeft() {
        if (ViewCompat.getLayoutDirection(this) != 1) goto L6;
        return getCurrentContentInsetEnd();
    L6:
        return getCurrentContentInsetStart();
    }

    public int getCurrentContentInsetRight() {
        if (ViewCompat.getLayoutDirection(this) != 1) goto L6;
        return getCurrentContentInsetStart();
    L6:
        return getCurrentContentInsetEnd();
    }

    private void ensureNavButtonView() {
        if (this.mNavButtonView != null) goto L6;
        this.mNavButtonView = new AppCompatImageButton(getContext(), null, R.attr.toolbarNavigationButtonStyle);
        LayoutParams r0 = generateDefaultLayoutParams();
        r0.gravity = 8388611 | (this.mButtonGravity & 112);
        this.mNavButtonView.setLayoutParams(r0);
        return;
    }

    void ensureCollapseButtonView() {
        if (this.mCollapseButtonView != null) goto L6;
        this.mCollapseButtonView = new AppCompatImageButton(getContext(), null, R.attr.toolbarNavigationButtonStyle);
        this.mCollapseButtonView.setImageDrawable(this.mCollapseIcon);
        this.mCollapseButtonView.setContentDescription(this.mCollapseDescription);
        LayoutParams r0 = generateDefaultLayoutParams();
        r0.gravity = 8388611 | (this.mButtonGravity & 112);
        r0.mViewType = 2;
        this.mCollapseButtonView.setLayoutParams(r0);
        this.mCollapseButtonView.setOnClickListener(new 3(this));
        return;
    }

    private void addSystemView(View r3, boolean r4) {
        ViewGroup.LayoutParams r0 = r3.getLayoutParams();
        if (r0 != null) goto L6;
        LayoutParams r02 = generateDefaultLayoutParams();
    L9:
        r02.mViewType = 1;
        if (r4 == true) goto L12;
    L14:
        addView(r3, r02);
        return;
    L12:
        if (this.mExpandedActionView == null) goto L14;
        r3.setLayoutParams(r02);
        this.mHiddenViews.add(r3);
        return;
    L6:
        if (checkLayoutParams(r0) == true) goto L8;
        r02 = generateLayoutParams(r0);
        goto L9
    L8:
        r02 = (LayoutParams) r0;
        goto L9
    }

    @Override
    protected Parcelable onSaveInstanceState() {
        SavedState r0 = new SavedState(super.onSaveInstanceState());
        ExpandedActionViewMenuPresenter r1 = this.mExpandedMenuPresenter;
        if (r1 != null) goto L5;
    L7:
        r0.isOverflowOpen = isOverflowMenuShowing();
        return r0;
    L5:
        if (r1.mCurrentExpandedItem == null) goto L7;
        r0.expandedMenuItemId = this.mExpandedMenuPresenter.mCurrentExpandedItem.getItemId();
        goto L7
    }

    @Override
    protected void onRestoreInstanceState(Parcelable r3) {
        if ((r3 instanceof SavedState) == true) goto L6;
        super.onRestoreInstanceState(r3);
        return;
    L6:
        SavedState r32 = (SavedState) r3;
        super.onRestoreInstanceState(r32.getSuperState());
        ActionMenuView r0 = this.mMenuView;
        if (r0 == null) goto L9;
        MenuBuilder r02 = r0.peekMenu();
    L11:
        if (r32.expandedMenuItemId == 0) goto L19;
        if (this.mExpandedMenuPresenter == null) goto L19;
        if (r02 == null) goto L19;
        MenuItem r03 = r02.findItem(r32.expandedMenuItemId);
        if (r03 == null) goto L19;
        r03.expandActionView();
    L19:
        if (r32.isOverflowOpen == false) goto L22;
        postShowOverflowMenu();
        return;
    L22:
        return;
    L9:
        r02 = null;
        goto L11
    }

    private void postShowOverflowMenu() {
        removeCallbacks(this.mShowOverflowMenuRunnable);
        post(this.mShowOverflowMenuRunnable);
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        removeCallbacks(this.mShowOverflowMenuRunnable);
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

    private void measureChildConstrained(View r4, int r5, int r6, int r7, int r8, int r9) {
        ViewGroup.MarginLayoutParams r0 = (ViewGroup.MarginLayoutParams) r4.getLayoutParams();
        int r52 = getChildMeasureSpec(r5, (((getPaddingLeft() + getPaddingRight()) + r0.leftMargin) + r0.rightMargin) + r6, r0.width);
        int r62 = getChildMeasureSpec(r7, (((getPaddingTop() + getPaddingBottom()) + r0.topMargin) + r0.bottomMargin) + r8, r0.height);
        int r72 = View.MeasureSpec.getMode(r62);
        if (r72 == 1073741824) goto L8;
        if (r9 < 0) goto L8;
        if (r72 == 0) goto L7;
        r9 = Math.min(View.MeasureSpec.getSize(r62), r9);
    L7:
        r62 = View.MeasureSpec.makeMeasureSpec(r9, 1073741824);
    L8:
        r4.measure(r52, r62);
    }

    private int measureChildCollapseMargins(View r8, int r9, int r10, int r11, int r12, int[] r13) {
        ViewGroup.MarginLayoutParams r0 = (ViewGroup.MarginLayoutParams) r8.getLayoutParams();
        int r1 = r0.leftMargin - r13[0];
        int r3 = r0.rightMargin - r13[1];
        int r5 = Math.max(0, r1) + Math.max(0, r3);
        r13[0] = Math.max(0, -r1);
        r13[1] = Math.max(0, -r3);
        r8.measure(getChildMeasureSpec(r9, ((getPaddingLeft() + getPaddingRight()) + r5) + r10, r0.width), getChildMeasureSpec(r11, (((getPaddingTop() + getPaddingBottom()) + r0.topMargin) + r0.bottomMargin) + r12, r0.height));
        return r8.getMeasuredWidth() + r5;
    }

    private boolean shouldCollapse() {
        if (this.mCollapsible == true) goto L5;
        return false;
    L5:
        int r0 = getChildCount();
        int r2 = 0;
    L6:
        if (r2 >= r0) goto L15;
        View r3 = getChildAt(r2);
        if (shouldLayout(r3) == false) goto L14;
        if (r3.getMeasuredWidth() <= 0) goto L14;
        if (r3.getMeasuredHeight() <= 0) goto L14;
        return false;
    L14:
        r2 = r2 + 1;
        goto L6
    L15:
        return true;
    }

    @Override
    protected void onMeasure(int r17, int r18) {
        int[] r8 = this.mTempMargins;
        if (ViewUtils.isLayoutRtl(this) == false) goto L5;
        char r10 = 1;
        char r11 = 0;
    L7:
        if (shouldLayout(this.mNavButtonView) == false) goto L9;
        measureChildConstrained(this.mNavButtonView, r17, 0, r18, 0, this.mMaxButtonHeight);
        int r0 = this.mNavButtonView.getMeasuredWidth() + getHorizontalMargins(this.mNavButtonView);
        int r1 = Math.max(0, this.mNavButtonView.getMeasuredHeight() + getVerticalMargins(this.mNavButtonView));
        int r12 = r1;
        int r13 = View.combineMeasuredStates(0, this.mNavButtonView.getMeasuredState());
    L11:
        if (shouldLayout(this.mCollapseButtonView) == false) goto L13;
        measureChildConstrained(this.mCollapseButtonView, r17, 0, r18, 0, this.mMaxButtonHeight);
        r0 = this.mCollapseButtonView.getMeasuredWidth() + getHorizontalMargins(this.mCollapseButtonView);
        r12 = Math.max(r12, this.mCollapseButtonView.getMeasuredHeight() + getVerticalMargins(this.mCollapseButtonView));
        r13 = View.combineMeasuredStates(r13, this.mCollapseButtonView.getMeasuredState());
    L13:
        int r14 = getCurrentContentInsetStart();
        int r142 = 0 + Math.max(r14, r0);
        r8[r10] = Math.max(0, r14 - r0);
        if (shouldLayout(this.mMenuView) == false) goto L16;
        measureChildConstrained(this.mMenuView, r17, r142, r18, 0, this.mMaxButtonHeight);
        int r02 = this.mMenuView.getMeasuredWidth() + getHorizontalMargins(this.mMenuView);
        r12 = Math.max(r12, this.mMenuView.getMeasuredHeight() + getVerticalMargins(this.mMenuView));
        r13 = View.combineMeasuredStates(r13, this.mMenuView.getMeasuredState());
    L17:
        int r15 = getCurrentContentInsetEnd();
        int r102 = r142 + Math.max(r15, r02);
        r8[r11] = Math.max(0, r15 - r02);
        if (shouldLayout(this.mExpandedActionView) == false) goto L21;
        r102 = r102 + measureChildCollapseMargins(this.mExpandedActionView, r17, r102, r18, 0, r8);
        r12 = Math.max(r12, this.mExpandedActionView.getMeasuredHeight() + getVerticalMargins(this.mExpandedActionView));
        r13 = View.combineMeasuredStates(r13, this.mExpandedActionView.getMeasuredState());
    L21:
        if (shouldLayout(this.mLogoView) == false) goto L23;
        r102 = r102 + measureChildCollapseMargins(this.mLogoView, r17, r102, r18, 0, r8);
        r12 = Math.max(r12, this.mLogoView.getMeasuredHeight() + getVerticalMargins(this.mLogoView));
        r13 = View.combineMeasuredStates(r13, this.mLogoView.getMeasuredState());
    L23:
        int r112 = getChildCount();
        int r143 = r12;
        int r122 = r102;
        int r103 = 0;
    L24:
        if (r103 >= r112) goto L32;
        View r152 = getChildAt(r103);
        if (((LayoutParams) r152.getLayoutParams()).mViewType != 0) goto L31;
        if (shouldLayout(r152) == false) goto L31;
        r122 = r122 + measureChildCollapseMargins(r152, r17, r122, r18, 0, r8);
        int r03 = Math.max(r143, r152.getMeasuredHeight() + getVerticalMargins(r152));
        r143 = r03;
        r13 = View.combineMeasuredStates(r13, r152.getMeasuredState());
    L31:
        r103 = r103 + 1;
        goto L24
    L32:
        int r104 = this.mTitleMarginTop + this.mTitleMarginBottom;
        int r113 = this.mTitleMarginStart + this.mTitleMarginEnd;
        if (shouldLayout(this.mTitleTextView) == false) goto L35;
        measureChildCollapseMargins(this.mTitleTextView, r17, r122 + r113, r18, r104, r8);
        int r04 = this.mTitleTextView.getMeasuredWidth() + getHorizontalMargins(this.mTitleTextView);
        int r16 = this.mTitleTextView.getMeasuredHeight() + getVerticalMargins(this.mTitleTextView);
        int r153 = r16;
        int r6 = View.combineMeasuredStates(r13, this.mTitleTextView.getMeasuredState());
        int r132 = r04;
    L37:
        if (shouldLayout(this.mSubtitleTextView) == false) goto L40;
        int r5 = r153 + r104;
        r132 = Math.max(r132, measureChildCollapseMargins(this.mSubtitleTextView, r17, r122 + r113, r18, r5, r8));
        r153 = r153 + (this.mSubtitleTextView.getMeasuredHeight() + getVerticalMargins(this.mSubtitleTextView));
        r6 = View.combineMeasuredStates(r6, this.mSubtitleTextView.getMeasuredState());
    L40:
        int r05 = Math.max(r143, r153);
        int r123 = (r122 + r132) + (getPaddingLeft() + getPaddingRight());
        int r06 = r05 + (getPaddingTop() + getPaddingBottom());
        int r19 = View.resolveSizeAndState(Math.max(r123, getSuggestedMinimumWidth()), r17, (-16777216) & r6);
        int r07 = View.resolveSizeAndState(Math.max(r06, getSuggestedMinimumHeight()), r18, r6 << 16);
        if (shouldCollapse() == false) goto L43;
        r07 = 0;
    L43:
        setMeasuredDimension(r19, r07);
        return;
    L35:
        r6 = r13;
        r132 = 0;
        r153 = 0;
        goto L37
    L16:
        r02 = 0;
        goto L17
    L9:
        r0 = 0;
        r12 = 0;
        r13 = 0;
        goto L11
    L5:
        r10 = 0;
        r11 = 1;
        goto L7
    }

    @Override
    protected void onLayout(boolean r19, int r20, int r21, int r22, int r23) {
        if (ViewCompat.getLayoutDirection(this) != 1) goto L5;
        boolean r1 = true;
    L6:
        int r4 = getWidth();
        int r5 = getHeight();
        int r6 = getPaddingLeft();
        int r7 = getPaddingRight();
        int r8 = getPaddingTop();
        int r9 = getPaddingBottom();
        int r10 = r4 - r7;
        int[] r11 = this.mTempMargins;
        r11[1] = 0;
        r11[0] = 0;
        int r12 = ViewCompat.getMinimumHeight(this);
        if (r12 < 0) goto L9;
        int r122 = Math.min(r12, r23 - r21);
    L11:
        if (shouldLayout(this.mNavButtonView) == false) goto L15;
        if (r1 == false) goto L14;
        int r14 = layoutChildRight(this.mNavButtonView, r10, r11, r122);
        int r13 = r6;
    L18:
        if (shouldLayout(this.mCollapseButtonView) == false) goto L23;
        if (r1 == false) goto L21;
        r14 = layoutChildRight(this.mCollapseButtonView, r14, r11, r122);
        goto L23
    L21:
        r13 = layoutChildLeft(this.mCollapseButtonView, r13, r11, r122);
    L23:
        if (shouldLayout(this.mMenuView) == false) goto L27;
        if (r1 == false) goto L26;
        r13 = layoutChildLeft(this.mMenuView, r13, r11, r122);
        goto L27
    L26:
        r14 = layoutChildRight(this.mMenuView, r14, r11, r122);
    L27:
        int r15 = getCurrentContentInsetLeft();
        int r16 = getCurrentContentInsetRight();
        r11[0] = Math.max(0, r15 - r13);
        r11[1] = Math.max(0, r16 - (r10 - r14));
        int r2 = Math.max(r13, r15);
        int r102 = Math.min(r14, r10 - r16);
        if (shouldLayout(this.mExpandedActionView) == false) goto L33;
        if (r1 == false) goto L31;
        r102 = layoutChildRight(this.mExpandedActionView, r102, r11, r122);
        goto L33
    L31:
        r2 = layoutChildLeft(this.mExpandedActionView, r2, r11, r122);
    L33:
        if (shouldLayout(this.mLogoView) == false) goto L37;
        if (r1 == false) goto L36;
        r102 = layoutChildRight(this.mLogoView, r102, r11, r122);
        goto L37
    L36:
        r2 = layoutChildLeft(this.mLogoView, r2, r11, r122);
    L37:
        boolean r132 = shouldLayout(this.mTitleTextView);
        boolean r142 = shouldLayout(this.mSubtitleTextView);
        if (r132 == false) goto L40;
        LayoutParams r152 = (LayoutParams) this.mTitleTextView.getLayoutParams();
        int r222 = r7;
        int r3 = ((r152.topMargin + this.mTitleTextView.getMeasuredHeight()) + r152.bottomMargin) + 0;
    L41:
        if (r142 == false) goto L43;
        LayoutParams r72 = (LayoutParams) this.mSubtitleTextView.getLayoutParams();
        int r162 = r4;
        r3 = r3 + ((r72.topMargin + this.mSubtitleTextView.getMeasuredHeight()) + r72.bottomMargin);
    L44:
        if (r132 == true) goto L49;
        if (r142 == true) goto L49;
        int r17 = r6;
        int r212 = r122;
    L48:
        int r73 = 0;
    L103:
        addCustomViewsWithGravity(this.mTempViews, 3);
        int r18 = this.mTempViews.size();
        int r32 = r2;
        int r24 = 0;
    L104:
        if (r24 >= r18) goto L106;
        r32 = layoutChildLeft(this.mTempViews.get(r24), r32, r11, r212);
        r24 = r24 + 1;
        goto L104
    L106:
        int r123 = r212;
        addCustomViewsWithGravity(this.mTempViews, 5);
        int r110 = this.mTempViews.size();
        int r25 = 0;
    L107:
        if (r25 >= r110) goto L109;
        r102 = layoutChildRight(this.mTempViews.get(r25), r102, r11, r123);
        r25 = r25 + 1;
        goto L107
    L109:
        addCustomViewsWithGravity(this.mTempViews, 1);
        int r111 = getViewListMeasuredWidth(this.mTempViews, r11);
        int r26 = (r17 + (((r162 - r17) - r222) / 2)) - (r111 / 2);
        int r112 = r111 + r26;
        if (r26 < r32) goto L115;
        if (r112 <= r102) goto L114;
        r32 = r26 - (r112 - r102);
        goto L115
    L114:
        r32 = r26;
    L115:
        int r113 = this.mTempViews.size();
    L116:
        if (r73 >= r113) goto L118;
        r32 = layoutChildLeft(this.mTempViews.get(r73), r32, r11, r123);
        r73 = r73 + 1;
        goto L116
    L118:
        this.mTempViews.clear();
        return;
    L49:
        if (r132 == false) goto L51;
        TextView r42 = this.mTitleTextView;
    L52:
        if (r142 == false) goto L54;
        TextView r74 = this.mSubtitleTextView;
    L55:
        LayoutParams r43 = (LayoutParams) r42.getLayoutParams();
        LayoutParams r75 = (LayoutParams) r74.getLayoutParams();
        if (r132 == true) goto L58;
    L59:
        if (r142 == true) goto L61;
    L63:
        r17 = r6;
        boolean r153 = false;
    L64:
        int r62 = this.mGravity & 112;
        r212 = r122;
        if (r62 != 48) goto L67;
        int r232 = r2;
        int r82 = (getPaddingTop() + r43.topMargin) + this.mTitleMarginTop;
    L77:
        if (r1 == false) goto L91;
        if (r153 == false) goto L80;
        int r33 = this.mTitleMarginStart;
        char r114 = 1;
    L81:
        int r34 = r33 - r11[r114];
        r102 = r102 - Math.max(0, r34);
        r11[r114] = Math.max(0, -r34);
        if (r132 == false) goto L84;
        LayoutParams r115 = (LayoutParams) this.mTitleTextView.getLayoutParams();
        int r27 = r102 - this.mTitleTextView.getMeasuredWidth();
        int r35 = this.mTitleTextView.getMeasuredHeight() + r82;
        this.mTitleTextView.layout(r27, r82, r102, r35);
        int r28 = r27 - this.mTitleMarginEnd;
        r82 = r35 + r115.bottomMargin;
    L85:
        if (r142 == false) goto L87;
        LayoutParams r116 = (LayoutParams) this.mSubtitleTextView.getLayoutParams();
        int r83 = r82 + r116.topMargin;
        int r36 = r102 - this.mSubtitleTextView.getMeasuredWidth();
        int r44 = this.mSubtitleTextView.getMeasuredHeight() + r83;
        this.mSubtitleTextView.layout(r36, r83, r102, r44);
        int r37 = r102 - this.mTitleMarginEnd;
        int r117 = r116.bottomMargin;
    L88:
        if (r153 == false) goto L90;
        r102 = Math.min(r28, r37);
    L90:
        r2 = r232;
        goto L48
    L87:
        r37 = r102;
        goto L88
    L84:
        r28 = r102;
        goto L85
    L80:
        r114 = 1;
        r33 = 0;
        goto L81
    L91:
        if (r153 == false) goto L93;
        int r38 = this.mTitleMarginStart;
    L94:
        r73 = 0;
        int r39 = r38 - r11[0];
        r2 = r232 + Math.max(0, r39);
        r11[0] = Math.max(0, -r39);
        if (r132 == false) goto L97;
        LayoutParams r118 = (LayoutParams) this.mTitleTextView.getLayoutParams();
        int r310 = this.mTitleTextView.getMeasuredWidth() + r2;
        int r45 = this.mTitleTextView.getMeasuredHeight() + r82;
        this.mTitleTextView.layout(r2, r82, r310, r45);
        int r311 = r310 + this.mTitleMarginEnd;
        r82 = r45 + r118.bottomMargin;
    L98:
        if (r142 == false) goto L100;
        LayoutParams r119 = (LayoutParams) this.mSubtitleTextView.getLayoutParams();
        int r84 = r82 + r119.topMargin;
        int r46 = this.mSubtitleTextView.getMeasuredWidth() + r2;
        int r52 = this.mSubtitleTextView.getMeasuredHeight() + r84;
        this.mSubtitleTextView.layout(r2, r84, r46, r52);
        int r47 = r46 + this.mTitleMarginEnd;
        int r120 = r119.bottomMargin;
    L101:
        if (r153 == false) goto L103;
        r2 = Math.max(r311, r47);
        goto L103
    L100:
        r47 = r2;
        goto L101
    L97:
        r311 = r2;
        goto L98
    L93:
        r38 = 0;
        goto L94
    L67:
        if (r62 == 80) goto L75;
        int r63 = (((r5 - r8) - r9) - r3) / 2;
        r232 = r2;
        if (r63 >= (r43.topMargin + this.mTitleMarginTop)) goto L71;
        r63 = r43.topMargin + this.mTitleMarginTop;
    L74:
        r82 = r8 + r63;
        goto L77
    L71:
        int r53 = (((r5 - r9) - r3) - r63) - r8;
        if (r53 >= (r43.bottomMargin + this.mTitleMarginBottom)) goto L74;
        r63 = Math.max(0, r63 - ((r75.bottomMargin + this.mTitleMarginBottom) - r53));
        goto L74
    L75:
        r232 = r2;
        r82 = (((r5 - r9) - r75.bottomMargin) - this.mTitleMarginBottom) - r3;
        goto L77
    L61:
        if (this.mSubtitleTextView.getMeasuredWidth() <= 0) goto L63;
    L62:
        r17 = r6;
        r153 = true;
        goto L64
    L58:
        if (this.mTitleTextView.getMeasuredWidth() > 0) goto L62;
    L54:
        r74 = this.mTitleTextView;
        goto L55
    L51:
        r42 = this.mSubtitleTextView;
        goto L52
    L43:
        r162 = r4;
        goto L44
    L40:
        r222 = r7;
        r3 = 0;
        goto L41
    L14:
        r13 = layoutChildLeft(this.mNavButtonView, r6, r11, r122);
    L16:
        r14 = r10;
        goto L18
    L15:
        r13 = r6;
        goto L16
    L9:
        r122 = 0;
        goto L11
    L5:
        r1 = false;
        goto L6
    }

    private int getViewListMeasuredWidth(List<View> r9, int[] r10) {
        int r1 = r10[0];
        int r102 = r10[1];
        int r2 = r9.size();
        int r4 = r102;
        int r3 = r1;
        int r103 = 0;
        int r12 = 0;
    L3:
        if (r103 >= r2) goto L5;
        View r5 = r9.get(r103);
        LayoutParams r6 = (LayoutParams) r5.getLayoutParams();
        int r7 = r6.leftMargin - r3;
        int r32 = r6.rightMargin - r4;
        int r42 = Math.max(0, r7);
        int r62 = Math.max(0, r32);
        int r72 = Math.max(0, -r7);
        int r33 = Math.max(0, -r32);
        r12 = r12 + ((r42 + r5.getMeasuredWidth()) + r62);
        r103 = r103 + 1;
        r4 = r33;
        r3 = r72;
        goto L3
    L5:
        return r12;
    }

    private int layoutChildLeft(View r5, int r6, int[] r7, int r8) {
        LayoutParams r0 = (LayoutParams) r5.getLayoutParams();
        int r1 = r0.leftMargin - r7[0];
        int r62 = r6 + Math.max(0, r1);
        r7[0] = Math.max(0, -r1);
        int r72 = getChildTop(r5, r8);
        int r82 = r5.getMeasuredWidth();
        r5.layout(r62, r72, r62 + r82, r5.getMeasuredHeight() + r72);
        return r62 + (r82 + r0.rightMargin);
    }

    private int layoutChildRight(View r6, int r7, int[] r8, int r9) {
        LayoutParams r0 = (LayoutParams) r6.getLayoutParams();
        int r1 = r0.rightMargin - r8[1];
        int r72 = r7 - Math.max(0, r1);
        r8[1] = Math.max(0, -r1);
        int r82 = getChildTop(r6, r9);
        int r92 = r6.getMeasuredWidth();
        r6.layout(r72 - r92, r82, r72, r6.getMeasuredHeight() + r82);
        return r72 - (r92 + r0.leftMargin);
    }

    private int getChildTop(View r7, int r8) {
        LayoutParams r0 = (LayoutParams) r7.getLayoutParams();
        int r72 = r7.getMeasuredHeight();
        if (r8 <= 0) goto L5;
        int r82 = (r72 - r8) / 2;
    L6:
        int r2 = getChildVerticalGravity(r0.gravity);
        if (r2 == 48) goto L21;
        if (r2 == 80) goto L19;
        int r83 = getPaddingTop();
        int r22 = getPaddingBottom();
        int r3 = getHeight();
        int r4 = (((r3 - r83) - r22) - r72) / 2;
        if (r4 >= r0.topMargin) goto L13;
        r4 = r0.topMargin;
    L17:
        return r83 + r4;
    L13:
        int r32 = (((r3 - r22) - r72) - r4) - r83;
        if (r32 >= r0.bottomMargin) goto L17;
        r4 = Math.max(0, r4 - (r0.bottomMargin - r32));
        goto L17
    L19:
        return (((getHeight() - getPaddingBottom()) - r72) - r0.bottomMargin) - r82;
    L21:
        return getPaddingTop() - r82;
    L5:
        r82 = 0;
        goto L6
    }

    private int getChildVerticalGravity(int r2) {
        int r22 = r2 & 112;
        if (r22 != 16) goto L5;
        return r22;
    L5:
        if (r22 != 48) goto L7;
        return r22;
    L7:
        if (r22 != 80) goto L9;
        return r22;
    L9:
        return this.mGravity & 112;
    }

    private void addCustomViewsWithGravity(List<View> r6, int r7) {
        int r1 = 0;
        if (ViewCompat.getLayoutDirection(this) != 1) goto L5;
        boolean r0 = true;
    L6:
        int r3 = getChildCount();
        int r72 = GravityCompat.getAbsoluteGravity(r7, ViewCompat.getLayoutDirection(this));
        r6.clear();
        if (r0 == false) goto L18;
        int r32 = r3 - 1;
    L9:
        if (r32 < 0) goto L27;
        View r02 = getChildAt(r32);
        LayoutParams r12 = (LayoutParams) r02.getLayoutParams();
        if (r12.mViewType != 0) goto L17;
        if (shouldLayout(r02) == false) goto L17;
        if (getChildHorizontalGravity(r12.gravity) != r72) goto L17;
        r6.add(r02);
    L17:
        r32 = r32 - 1;
        goto L9
    L27:
        return;
    L18:
        if (r1 >= r3) goto L38;
        View r03 = getChildAt(r1);
        LayoutParams r2 = (LayoutParams) r03.getLayoutParams();
        if (r2.mViewType != 0) goto L26;
        if (shouldLayout(r03) == false) goto L26;
        if (getChildHorizontalGravity(r2.gravity) != r72) goto L26;
        r6.add(r03);
    L26:
        r1 = r1 + 1;
        goto L18
    L38:
        return;
    L5:
        r0 = false;
        goto L6
    }

    private int getChildHorizontalGravity(int r5) {
        int r0 = ViewCompat.getLayoutDirection(this);
        int r52 = GravityCompat.getAbsoluteGravity(r5, r0) & 7;
        if (r52 != 1) goto L5;
    L11:
        return r52;
    L5:
        if (r52 == 3) goto L11;
        if (r52 == 5) goto L11;
        if (r0 != 1) goto L12;
        return 5;
    L12:
        return 3;
    }

    private boolean shouldLayout(View r2) {
        if (r2 != null) goto L4;
    L8:
        return false;
    L4:
        if (r2.getParent() != this) goto L8;
        if (r2.getVisibility() == 8) goto L8;
        return true;
    }

    private int getHorizontalMargins(View r2) {
        ViewGroup.MarginLayoutParams r22 = (ViewGroup.MarginLayoutParams) r2.getLayoutParams();
        return MarginLayoutParamsCompat.getMarginStart(r22) + MarginLayoutParamsCompat.getMarginEnd(r22);
    }

    private int getVerticalMargins(View r2) {
        ViewGroup.MarginLayoutParams r22 = (ViewGroup.MarginLayoutParams) r2.getLayoutParams();
        return r22.topMargin + r22.bottomMargin;
    }

    @Override
    public LayoutParams generateLayoutParams(AttributeSet r3) {
        return new LayoutParams(getContext(), r3);
    }

    @Override
    protected LayoutParams generateLayoutParams(ViewGroup.LayoutParams r2) {
        if ((r2 instanceof LayoutParams) == false) goto L7;
        return new LayoutParams((LayoutParams) r2);
    L7:
        if ((r2 instanceof ActionBar.LayoutParams) == false) goto L11;
        return new LayoutParams((ActionBar.LayoutParams) r2);
    L11:
        if ((r2 instanceof ViewGroup.MarginLayoutParams) == false) goto L15;
        return new LayoutParams((ViewGroup.MarginLayoutParams) r2);
    L15:
        return new LayoutParams(r2);
    }

    @Override
    protected LayoutParams generateDefaultLayoutParams() {
        return new LayoutParams(-2, -2);
    }

    @Override
    protected boolean checkLayoutParams(ViewGroup.LayoutParams r2) {
        if (super.checkLayoutParams(r2) == true) goto L5;
    L7:
        return false;
    L5:
        if ((r2 instanceof LayoutParams) == false) goto L7;
        return true;
    }

    private static boolean isCustomView(View r0) {
        if (((LayoutParams) r0.getLayoutParams()).mViewType != 0) goto L5;
        return true;
    L5:
        return false;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public DecorToolbar getWrapper() {
        if (this.mWrapper != null) goto L6;
        this.mWrapper = new ToolbarWidgetWrapper(this, true);
    L6:
        return this.mWrapper;
    }

    void removeChildrenForExpandedActionView() {
        int r0 = getChildCount() - 1;
    L3:
        if (r0 < 0) goto L10;
        View r1 = getChildAt(r0);
        if (((LayoutParams) r1.getLayoutParams()).mViewType == 2) goto L9;
        if (r1 == this.mMenuView) goto L9;
        removeViewAt(r0);
        this.mHiddenViews.add(r1);
    L9:
        r0 = r0 - 1;
        goto L3
    }

    void addChildrenForExpandedActionView() {
        int r0 = this.mHiddenViews.size() - 1;
    L3:
        if (r0 < 0) goto L5;
        addView(this.mHiddenViews.get(r0));
        r0 = r0 - 1;
        goto L3
    L5:
        this.mHiddenViews.clear();
    }

    private boolean isChildOrHidden(View r2) {
        if (r2.getParent() != this) goto L5;
    L8:
        return true;
    L5:
        if (this.mHiddenViews.contains(r2) == true) goto L8;
        return false;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setCollapsible(boolean r1) {
        this.mCollapsible = r1;
        requestLayout();
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setMenuCallbacks(MenuPresenter.Callback r2, MenuBuilder.Callback r3) {
        this.mActionMenuPresenterCallback = r2;
        this.mMenuBuilderCallback = r3;
        ActionMenuView r0 = this.mMenuView;
        if (r0 == null) goto L6;
        r0.setMenuCallbacks(r2, r3);
        return;
    }

    private void ensureContentInsets() {
        if (this.mContentInsets != null) goto L6;
        this.mContentInsets = new RtlSpacingHelper();
        return;
    }

    ActionMenuPresenter getOuterActionMenuPresenter() {
        return this.mOuterActionMenuPresenter;
    }

    Context getPopupContext() {
        return this.mPopupContext;
    }
}
