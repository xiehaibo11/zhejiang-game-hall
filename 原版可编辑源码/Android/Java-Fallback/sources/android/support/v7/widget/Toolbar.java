package android.support.v7.widget;

public class Toolbar extends android.view.ViewGroup {
    private static final java.lang.String TAG = "Toolbar";
    private android.support.v7.view.menu.MenuPresenter.Callback mActionMenuPresenterCallback;
    int mButtonGravity;
    android.widget.ImageButton mCollapseButtonView;
    private java.lang.CharSequence mCollapseDescription;
    private android.graphics.drawable.Drawable mCollapseIcon;
    private boolean mCollapsible;
    private int mContentInsetEndWithActions;
    private int mContentInsetStartWithNavigation;
    private android.support.v7.widget.RtlSpacingHelper mContentInsets;
    private boolean mEatingHover;
    private boolean mEatingTouch;
    android.view.View mExpandedActionView;
    private android.support.v7.widget.Toolbar.ExpandedActionViewMenuPresenter mExpandedMenuPresenter;
    private int mGravity;
    private final java.util.ArrayList<android.view.View> mHiddenViews;
    private android.widget.ImageView mLogoView;
    private int mMaxButtonHeight;
    private android.support.v7.view.menu.MenuBuilder.Callback mMenuBuilderCallback;
    private android.support.v7.widget.ActionMenuView mMenuView;
    private final android.support.v7.widget.ActionMenuView.OnMenuItemClickListener mMenuViewItemClickListener;
    private android.widget.ImageButton mNavButtonView;
    android.support.v7.widget.Toolbar.OnMenuItemClickListener mOnMenuItemClickListener;
    private android.support.v7.widget.ActionMenuPresenter mOuterActionMenuPresenter;
    private android.content.Context mPopupContext;
    private int mPopupTheme;
    private final java.lang.Runnable mShowOverflowMenuRunnable;
    private java.lang.CharSequence mSubtitleText;
    private int mSubtitleTextAppearance;
    private int mSubtitleTextColor;
    private android.widget.TextView mSubtitleTextView;
    private final int[] mTempMargins;
    private final java.util.ArrayList<android.view.View> mTempViews;
    private int mTitleMarginBottom;
    private int mTitleMarginEnd;
    private int mTitleMarginStart;
    private int mTitleMarginTop;
    private java.lang.CharSequence mTitleText;
    private int mTitleTextAppearance;
    private int mTitleTextColor;
    private android.widget.TextView mTitleTextView;
    private android.support.v7.widget.ToolbarWidgetWrapper mWrapper;




    private class ExpandedActionViewMenuPresenter implements android.support.v7.view.menu.MenuPresenter {
        android.support.v7.view.menu.MenuItemImpl mCurrentExpandedItem;
        android.support.v7.view.menu.MenuBuilder mMenu;
        final android.support.v7.widget.Toolbar this$0;

        ExpandedActionViewMenuPresenter(android.support.v7.widget.Toolbar r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public boolean collapseItemActionView(android.support.v7.view.menu.MenuBuilder r2, android.support.v7.view.menu.MenuItemImpl r3) {
                r1 = this;
                android.support.v7.widget.Toolbar r2 = r1.this$0
                android.view.View r2 = r2.mExpandedActionView
                boolean r2 = r2 instanceof android.support.v7.view.CollapsibleActionView
                if (r2 == 0) goto L11
                android.support.v7.widget.Toolbar r2 = r1.this$0
                android.view.View r2 = r2.mExpandedActionView
                android.support.v7.view.CollapsibleActionView r2 = (android.support.v7.view.CollapsibleActionView) r2
                r2.onActionViewCollapsed()
            L11:
                android.support.v7.widget.Toolbar r2 = r1.this$0
                android.view.View r0 = r2.mExpandedActionView
                r2.removeView(r0)
                android.support.v7.widget.Toolbar r2 = r1.this$0
                android.widget.ImageButton r0 = r2.mCollapseButtonView
                r2.removeView(r0)
                android.support.v7.widget.Toolbar r2 = r1.this$0
                r0 = 0
                r2.mExpandedActionView = r0
                android.support.v7.widget.Toolbar r2 = r1.this$0
                r2.addChildrenForExpandedActionView()
                r1.mCurrentExpandedItem = r0
                android.support.v7.widget.Toolbar r2 = r1.this$0
                r2.requestLayout()
                r2 = 0
                r3.setActionViewExpanded(r2)
                r2 = 1
                return r2
        }

        @Override
        public boolean expandItemActionView(android.support.v7.view.menu.MenuBuilder r3, android.support.v7.view.menu.MenuItemImpl r4) {
                r2 = this;
                android.support.v7.widget.Toolbar r3 = r2.this$0
                r3.ensureCollapseButtonView()
                android.support.v7.widget.Toolbar r3 = r2.this$0
                android.widget.ImageButton r3 = r3.mCollapseButtonView
                android.view.ViewParent r3 = r3.getParent()
                android.support.v7.widget.Toolbar r0 = r2.this$0
                if (r3 == r0) goto L23
                boolean r1 = r3 instanceof android.view.ViewGroup
                if (r1 == 0) goto L1c
                android.view.ViewGroup r3 = (android.view.ViewGroup) r3
                android.widget.ImageButton r0 = r0.mCollapseButtonView
                r3.removeView(r0)
            L1c:
                android.support.v7.widget.Toolbar r3 = r2.this$0
                android.widget.ImageButton r0 = r3.mCollapseButtonView
                r3.addView(r0)
            L23:
                android.support.v7.widget.Toolbar r3 = r2.this$0
                android.view.View r0 = r4.getActionView()
                r3.mExpandedActionView = r0
                r2.mCurrentExpandedItem = r4
                android.support.v7.widget.Toolbar r3 = r2.this$0
                android.view.View r3 = r3.mExpandedActionView
                android.view.ViewParent r3 = r3.getParent()
                android.support.v7.widget.Toolbar r0 = r2.this$0
                if (r3 == r0) goto L67
                boolean r1 = r3 instanceof android.view.ViewGroup
                if (r1 == 0) goto L44
                android.view.ViewGroup r3 = (android.view.ViewGroup) r3
                android.view.View r0 = r0.mExpandedActionView
                r3.removeView(r0)
            L44:
                android.support.v7.widget.Toolbar r3 = r2.this$0
                android.support.v7.widget.Toolbar$LayoutParams r3 = r3.generateDefaultLayoutParams()
                r0 = 8388611(0x800003, float:1.1754948E-38)
                android.support.v7.widget.Toolbar r1 = r2.this$0
                int r1 = r1.mButtonGravity
                r1 = r1 & 112(0x70, float:1.57E-43)
                r0 = r0 | r1
                r3.gravity = r0
                r0 = 2
                r3.mViewType = r0
                android.support.v7.widget.Toolbar r0 = r2.this$0
                android.view.View r0 = r0.mExpandedActionView
                r0.setLayoutParams(r3)
                android.support.v7.widget.Toolbar r3 = r2.this$0
                android.view.View r0 = r3.mExpandedActionView
                r3.addView(r0)
            L67:
                android.support.v7.widget.Toolbar r3 = r2.this$0
                r3.removeChildrenForExpandedActionView()
                android.support.v7.widget.Toolbar r3 = r2.this$0
                r3.requestLayout()
                r3 = 1
                r4.setActionViewExpanded(r3)
                android.support.v7.widget.Toolbar r4 = r2.this$0
                android.view.View r4 = r4.mExpandedActionView
                boolean r4 = r4 instanceof android.support.v7.view.CollapsibleActionView
                if (r4 == 0) goto L86
                android.support.v7.widget.Toolbar r4 = r2.this$0
                android.view.View r4 = r4.mExpandedActionView
                android.support.v7.view.CollapsibleActionView r4 = (android.support.v7.view.CollapsibleActionView) r4
                r4.onActionViewExpanded()
            L86:
                return r3
        }

        @Override
        public boolean flagActionItems() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public int getId() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public android.support.v7.view.menu.MenuView getMenuView(android.view.ViewGroup r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void initForMenu(android.content.Context r2, android.support.v7.view.menu.MenuBuilder r3) {
                r1 = this;
                android.support.v7.view.menu.MenuBuilder r2 = r1.mMenu
                if (r2 == 0) goto Lb
                android.support.v7.view.menu.MenuItemImpl r0 = r1.mCurrentExpandedItem
                if (r0 == 0) goto Lb
                r2.collapseItemActionView(r0)
            Lb:
                r1.mMenu = r3
                return
        }

        @Override
        public void onCloseMenu(android.support.v7.view.menu.MenuBuilder r1, boolean r2) {
                r0 = this;
                return
        }

        @Override
        public void onRestoreInstanceState(android.os.Parcelable r1) {
                r0 = this;
                return
        }

        @Override
        public android.os.Parcelable onSaveInstanceState() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public boolean onSubMenuSelected(android.support.v7.view.menu.SubMenuBuilder r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void setCallback(android.support.v7.view.menu.MenuPresenter.Callback r1) {
                r0 = this;
                return
        }

        @Override
        public void updateMenuView(boolean r5) {
                r4 = this;
                android.support.v7.view.menu.MenuItemImpl r5 = r4.mCurrentExpandedItem
                if (r5 == 0) goto L28
                android.support.v7.view.menu.MenuBuilder r5 = r4.mMenu
                r0 = 0
                if (r5 == 0) goto L1f
                int r5 = r5.size()
                r1 = r0
            Le:
                if (r1 >= r5) goto L1f
                android.support.v7.view.menu.MenuBuilder r2 = r4.mMenu
                android.view.MenuItem r2 = r2.getItem(r1)
                android.support.v7.view.menu.MenuItemImpl r3 = r4.mCurrentExpandedItem
                if (r2 != r3) goto L1c
                r0 = 1
                goto L1f
            L1c:
                int r1 = r1 + 1
                goto Le
            L1f:
                if (r0 != 0) goto L28
                android.support.v7.view.menu.MenuBuilder r5 = r4.mMenu
                android.support.v7.view.menu.MenuItemImpl r0 = r4.mCurrentExpandedItem
                r4.collapseItemActionView(r5, r0)
            L28:
                return
        }
    }

    public static class LayoutParams extends android.support.v7.app.ActionBar.LayoutParams {
        static final int CUSTOM = 0;
        static final int EXPANDED = 2;
        static final int SYSTEM = 1;
        int mViewType;

        public LayoutParams(int r3) {
                r2 = this;
                r0 = -2
                r1 = -1
                r2.<init>(r0, r1, r3)
                return
        }

        public LayoutParams(int r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                r1 = 0
                r0.mViewType = r1
                r1 = 8388627(0x800013, float:1.175497E-38)
                r0.gravity = r1
                return
        }

        public LayoutParams(int r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r1 = 0
                r0.mViewType = r1
                r0.gravity = r3
                return
        }

        public LayoutParams(android.content.Context r1, android.util.AttributeSet r2) {
                r0 = this;
                r0.<init>(r1, r2)
                r1 = 0
                r0.mViewType = r1
                return
        }

        public LayoutParams(android.support.v7.app.ActionBar.LayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                r1 = 0
                r0.mViewType = r1
                return
        }

        public LayoutParams(android.support.v7.widget.Toolbar.LayoutParams r2) {
                r1 = this;
                r1.<init>(r2)
                r0 = 0
                r1.mViewType = r0
                int r2 = r2.mViewType
                r1.mViewType = r2
                return
        }

        public LayoutParams(android.view.ViewGroup.LayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                r1 = 0
                r0.mViewType = r1
                return
        }

        public LayoutParams(android.view.ViewGroup.MarginLayoutParams r2) {
                r1 = this;
                r1.<init>(r2)
                r0 = 0
                r1.mViewType = r0
                r1.copyMarginsFromCompat(r2)
                return
        }

        void copyMarginsFromCompat(android.view.ViewGroup.MarginLayoutParams r2) {
                r1 = this;
                int r0 = r2.leftMargin
                r1.leftMargin = r0
                int r0 = r2.topMargin
                r1.topMargin = r0
                int r0 = r2.rightMargin
                r1.rightMargin = r0
                int r2 = r2.bottomMargin
                r1.bottomMargin = r2
                return
        }
    }

    public interface OnMenuItemClickListener {
        boolean onMenuItemClick(android.view.MenuItem r1);
    }

    public static class SavedState extends android.support.v4.view.AbsSavedState {
        public static final android.os.Parcelable.Creator<android.support.v7.widget.Toolbar.SavedState> CREATOR = null;
        int expandedMenuItemId;
        boolean isOverflowOpen;


        static {
                android.support.v7.widget.Toolbar$SavedState$1 r0 = new android.support.v7.widget.Toolbar$SavedState$1
                r0.<init>()
                android.support.v7.widget.Toolbar.SavedState.CREATOR = r0
                return
        }

        public SavedState(android.os.Parcel r2) {
                r1 = this;
                r0 = 0
                r1.<init>(r2, r0)
                return
        }

        public SavedState(android.os.Parcel r1, java.lang.ClassLoader r2) {
                r0 = this;
                r0.<init>(r1, r2)
                int r2 = r1.readInt()
                r0.expandedMenuItemId = r2
                int r1 = r1.readInt()
                if (r1 == 0) goto L11
                r1 = 1
                goto L12
            L11:
                r1 = 0
            L12:
                r0.isOverflowOpen = r1
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
                int r2 = r0.expandedMenuItemId
                r1.writeInt(r2)
                boolean r2 = r0.isOverflowOpen
                r1.writeInt(r2)
                return
        }
    }

    public Toolbar(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public Toolbar(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.v7.appcompat.R.attr.toolbarStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public Toolbar(android.content.Context r7, android.util.AttributeSet r8, int r9) {
            r6 = this;
            r6.<init>(r7, r8, r9)
            r7 = 8388627(0x800013, float:1.175497E-38)
            r6.mGravity = r7
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            r6.mTempViews = r7
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            r6.mHiddenViews = r7
            r7 = 2
            int[] r7 = new int[r7]
            r6.mTempMargins = r7
            android.support.v7.widget.Toolbar$1 r7 = new android.support.v7.widget.Toolbar$1
            r7.<init>(r6)
            r6.mMenuViewItemClickListener = r7
            android.support.v7.widget.Toolbar$2 r7 = new android.support.v7.widget.Toolbar$2
            r7.<init>(r6)
            r6.mShowOverflowMenuRunnable = r7
            android.content.Context r7 = r6.getContext()
            int[] r0 = android.support.v7.appcompat.R.styleable.Toolbar
            r1 = 0
            android.support.v7.widget.TintTypedArray r7 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r7, r8, r0, r9, r1)
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_titleTextAppearance
            int r8 = r7.getResourceId(r8, r1)
            r6.mTitleTextAppearance = r8
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_subtitleTextAppearance
            int r8 = r7.getResourceId(r8, r1)
            r6.mSubtitleTextAppearance = r8
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_android_gravity
            int r9 = r6.mGravity
            int r8 = r7.getInteger(r8, r9)
            r6.mGravity = r8
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_buttonGravity
            r9 = 48
            int r8 = r7.getInteger(r8, r9)
            r6.mButtonGravity = r8
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_titleMargin
            int r8 = r7.getDimensionPixelOffset(r8, r1)
            int r9 = android.support.v7.appcompat.R.styleable.Toolbar_titleMargins
            boolean r9 = r7.hasValue(r9)
            if (r9 == 0) goto L6c
            int r9 = android.support.v7.appcompat.R.styleable.Toolbar_titleMargins
            int r8 = r7.getDimensionPixelOffset(r9, r8)
        L6c:
            r6.mTitleMarginBottom = r8
            r6.mTitleMarginTop = r8
            r6.mTitleMarginEnd = r8
            r6.mTitleMarginStart = r8
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_titleMarginStart
            r9 = -1
            int r8 = r7.getDimensionPixelOffset(r8, r9)
            if (r8 < 0) goto L7f
            r6.mTitleMarginStart = r8
        L7f:
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_titleMarginEnd
            int r8 = r7.getDimensionPixelOffset(r8, r9)
            if (r8 < 0) goto L89
            r6.mTitleMarginEnd = r8
        L89:
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_titleMarginTop
            int r8 = r7.getDimensionPixelOffset(r8, r9)
            if (r8 < 0) goto L93
            r6.mTitleMarginTop = r8
        L93:
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_titleMarginBottom
            int r8 = r7.getDimensionPixelOffset(r8, r9)
            if (r8 < 0) goto L9d
            r6.mTitleMarginBottom = r8
        L9d:
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_maxButtonHeight
            int r8 = r7.getDimensionPixelSize(r8, r9)
            r6.mMaxButtonHeight = r8
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_contentInsetStart
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            int r8 = r7.getDimensionPixelOffset(r8, r0)
            int r2 = android.support.v7.appcompat.R.styleable.Toolbar_contentInsetEnd
            int r2 = r7.getDimensionPixelOffset(r2, r0)
            int r3 = android.support.v7.appcompat.R.styleable.Toolbar_contentInsetLeft
            int r3 = r7.getDimensionPixelSize(r3, r1)
            int r4 = android.support.v7.appcompat.R.styleable.Toolbar_contentInsetRight
            int r4 = r7.getDimensionPixelSize(r4, r1)
            r6.ensureContentInsets()
            android.support.v7.widget.RtlSpacingHelper r5 = r6.mContentInsets
            r5.setAbsolute(r3, r4)
            if (r8 != r0) goto Lcb
            if (r2 == r0) goto Ld0
        Lcb:
            android.support.v7.widget.RtlSpacingHelper r3 = r6.mContentInsets
            r3.setRelative(r8, r2)
        Ld0:
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_contentInsetStartWithNavigation
            int r8 = r7.getDimensionPixelOffset(r8, r0)
            r6.mContentInsetStartWithNavigation = r8
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_contentInsetEndWithActions
            int r8 = r7.getDimensionPixelOffset(r8, r0)
            r6.mContentInsetEndWithActions = r8
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_collapseIcon
            android.graphics.drawable.Drawable r8 = r7.getDrawable(r8)
            r6.mCollapseIcon = r8
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_collapseContentDescription
            java.lang.CharSequence r8 = r7.getText(r8)
            r6.mCollapseDescription = r8
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_title
            java.lang.CharSequence r8 = r7.getText(r8)
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto Lff
            r6.setTitle(r8)
        Lff:
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_subtitle
            java.lang.CharSequence r8 = r7.getText(r8)
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L10e
            r6.setSubtitle(r8)
        L10e:
            android.content.Context r8 = r6.getContext()
            r6.mPopupContext = r8
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_popupTheme
            int r8 = r7.getResourceId(r8, r1)
            r6.setPopupTheme(r8)
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_navigationIcon
            android.graphics.drawable.Drawable r8 = r7.getDrawable(r8)
            if (r8 == 0) goto L128
            r6.setNavigationIcon(r8)
        L128:
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_navigationContentDescription
            java.lang.CharSequence r8 = r7.getText(r8)
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L137
            r6.setNavigationContentDescription(r8)
        L137:
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_logo
            android.graphics.drawable.Drawable r8 = r7.getDrawable(r8)
            if (r8 == 0) goto L142
            r6.setLogo(r8)
        L142:
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_logoDescription
            java.lang.CharSequence r8 = r7.getText(r8)
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L151
            r6.setLogoDescription(r8)
        L151:
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_titleTextColor
            boolean r8 = r7.hasValue(r8)
            if (r8 == 0) goto L162
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_titleTextColor
            int r8 = r7.getColor(r8, r9)
            r6.setTitleTextColor(r8)
        L162:
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_subtitleTextColor
            boolean r8 = r7.hasValue(r8)
            if (r8 == 0) goto L173
            int r8 = android.support.v7.appcompat.R.styleable.Toolbar_subtitleTextColor
            int r8 = r7.getColor(r8, r9)
            r6.setSubtitleTextColor(r8)
        L173:
            r7.recycle()
            return
    }

    private void addCustomViewsWithGravity(java.util.List<android.view.View> r6, int r7) {
            r5 = this;
            int r0 = android.support.v4.view.ViewCompat.getLayoutDirection(r5)
            r1 = 0
            r2 = 1
            if (r0 != r2) goto La
            r0 = r2
            goto Lb
        La:
            r0 = r1
        Lb:
            int r3 = r5.getChildCount()
            int r4 = android.support.v4.view.ViewCompat.getLayoutDirection(r5)
            int r7 = android.support.v4.view.GravityCompat.getAbsoluteGravity(r7, r4)
            r6.clear()
            if (r0 == 0) goto L41
            int r3 = r3 - r2
        L1d:
            if (r3 < 0) goto L65
            android.view.View r0 = r5.getChildAt(r3)
            android.view.ViewGroup$LayoutParams r1 = r0.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r1 = (android.support.v7.widget.Toolbar.LayoutParams) r1
            int r2 = r1.mViewType
            if (r2 != 0) goto L3e
            boolean r2 = r5.shouldLayout(r0)
            if (r2 == 0) goto L3e
            int r1 = r1.gravity
            int r1 = r5.getChildHorizontalGravity(r1)
            if (r1 != r7) goto L3e
            r6.add(r0)
        L3e:
            int r3 = r3 + (-1)
            goto L1d
        L41:
            if (r1 >= r3) goto L65
            android.view.View r0 = r5.getChildAt(r1)
            android.view.ViewGroup$LayoutParams r2 = r0.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r2 = (android.support.v7.widget.Toolbar.LayoutParams) r2
            int r4 = r2.mViewType
            if (r4 != 0) goto L62
            boolean r4 = r5.shouldLayout(r0)
            if (r4 == 0) goto L62
            int r2 = r2.gravity
            int r2 = r5.getChildHorizontalGravity(r2)
            if (r2 != r7) goto L62
            r6.add(r0)
        L62:
            int r1 = r1 + 1
            goto L41
        L65:
            return
    }

    private void addSystemView(android.view.View r3, boolean r4) {
            r2 = this;
            android.view.ViewGroup$LayoutParams r0 = r3.getLayoutParams()
            if (r0 != 0) goto Lb
            android.support.v7.widget.Toolbar$LayoutParams r0 = r2.generateDefaultLayoutParams()
            goto L18
        Lb:
            boolean r1 = r2.checkLayoutParams(r0)
            if (r1 != 0) goto L16
            android.support.v7.widget.Toolbar$LayoutParams r0 = r2.generateLayoutParams(r0)
            goto L18
        L16:
            android.support.v7.widget.Toolbar$LayoutParams r0 = (android.support.v7.widget.Toolbar.LayoutParams) r0
        L18:
            r1 = 1
            r0.mViewType = r1
            if (r4 == 0) goto L2a
            android.view.View r4 = r2.mExpandedActionView
            if (r4 == 0) goto L2a
            r3.setLayoutParams(r0)
            java.util.ArrayList<android.view.View> r4 = r2.mHiddenViews
            r4.add(r3)
            goto L2d
        L2a:
            r2.addView(r3, r0)
        L2d:
            return
    }

    private void ensureContentInsets() {
            r1 = this;
            android.support.v7.widget.RtlSpacingHelper r0 = r1.mContentInsets
            if (r0 != 0) goto Lb
            android.support.v7.widget.RtlSpacingHelper r0 = new android.support.v7.widget.RtlSpacingHelper
            r0.<init>()
            r1.mContentInsets = r0
        Lb:
            return
    }

    private void ensureLogoView() {
            r2 = this;
            android.widget.ImageView r0 = r2.mLogoView
            if (r0 != 0) goto Lf
            android.support.v7.widget.AppCompatImageView r0 = new android.support.v7.widget.AppCompatImageView
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            r2.mLogoView = r0
        Lf:
            return
    }

    private void ensureMenu() {
            r3 = this;
            r3.ensureMenuView()
            android.support.v7.widget.ActionMenuView r0 = r3.mMenuView
            android.support.v7.view.menu.MenuBuilder r0 = r0.peekMenu()
            if (r0 != 0) goto L2b
            android.support.v7.widget.ActionMenuView r0 = r3.mMenuView
            android.view.Menu r0 = r0.getMenu()
            android.support.v7.view.menu.MenuBuilder r0 = (android.support.v7.view.menu.MenuBuilder) r0
            android.support.v7.widget.Toolbar$ExpandedActionViewMenuPresenter r1 = r3.mExpandedMenuPresenter
            if (r1 != 0) goto L1e
            android.support.v7.widget.Toolbar$ExpandedActionViewMenuPresenter r1 = new android.support.v7.widget.Toolbar$ExpandedActionViewMenuPresenter
            r1.<init>(r3)
            r3.mExpandedMenuPresenter = r1
        L1e:
            android.support.v7.widget.ActionMenuView r1 = r3.mMenuView
            r2 = 1
            r1.setExpandedActionViewsExclusive(r2)
            android.support.v7.widget.Toolbar$ExpandedActionViewMenuPresenter r1 = r3.mExpandedMenuPresenter
            android.content.Context r2 = r3.mPopupContext
            r0.addMenuPresenter(r1, r2)
        L2b:
            return
    }

    private void ensureMenuView() {
            r3 = this;
            android.support.v7.widget.ActionMenuView r0 = r3.mMenuView
            if (r0 != 0) goto L3d
            android.support.v7.widget.ActionMenuView r0 = new android.support.v7.widget.ActionMenuView
            android.content.Context r1 = r3.getContext()
            r0.<init>(r1)
            r3.mMenuView = r0
            int r1 = r3.mPopupTheme
            r0.setPopupTheme(r1)
            android.support.v7.widget.ActionMenuView r0 = r3.mMenuView
            android.support.v7.widget.ActionMenuView$OnMenuItemClickListener r1 = r3.mMenuViewItemClickListener
            r0.setOnMenuItemClickListener(r1)
            android.support.v7.widget.ActionMenuView r0 = r3.mMenuView
            android.support.v7.view.menu.MenuPresenter$Callback r1 = r3.mActionMenuPresenterCallback
            android.support.v7.view.menu.MenuBuilder$Callback r2 = r3.mMenuBuilderCallback
            r0.setMenuCallbacks(r1, r2)
            android.support.v7.widget.Toolbar$LayoutParams r0 = r3.generateDefaultLayoutParams()
            r1 = 8388613(0x800005, float:1.175495E-38)
            int r2 = r3.mButtonGravity
            r2 = r2 & 112(0x70, float:1.57E-43)
            r1 = r1 | r2
            r0.gravity = r1
            android.support.v7.widget.ActionMenuView r1 = r3.mMenuView
            r1.setLayoutParams(r0)
            android.support.v7.widget.ActionMenuView r0 = r3.mMenuView
            r1 = 0
            r3.addSystemView(r0, r1)
        L3d:
            return
    }

    private void ensureNavButtonView() {
            r4 = this;
            android.widget.ImageButton r0 = r4.mNavButtonView
            if (r0 != 0) goto L25
            android.support.v7.widget.AppCompatImageButton r0 = new android.support.v7.widget.AppCompatImageButton
            android.content.Context r1 = r4.getContext()
            r2 = 0
            int r3 = android.support.v7.appcompat.R.attr.toolbarNavigationButtonStyle
            r0.<init>(r1, r2, r3)
            r4.mNavButtonView = r0
            android.support.v7.widget.Toolbar$LayoutParams r0 = r4.generateDefaultLayoutParams()
            r1 = 8388611(0x800003, float:1.1754948E-38)
            int r2 = r4.mButtonGravity
            r2 = r2 & 112(0x70, float:1.57E-43)
            r1 = r1 | r2
            r0.gravity = r1
            android.widget.ImageButton r1 = r4.mNavButtonView
            r1.setLayoutParams(r0)
        L25:
            return
    }

    private int getChildHorizontalGravity(int r5) {
            r4 = this;
            int r0 = android.support.v4.view.ViewCompat.getLayoutDirection(r4)
            int r5 = android.support.v4.view.GravityCompat.getAbsoluteGravity(r5, r0)
            r5 = r5 & 7
            r1 = 1
            if (r5 == r1) goto L17
            r2 = 3
            if (r5 == r2) goto L17
            r3 = 5
            if (r5 == r3) goto L17
            if (r0 != r1) goto L16
            r2 = r3
        L16:
            return r2
        L17:
            return r5
    }

    private int getChildTop(android.view.View r7, int r8) {
            r6 = this;
            android.view.ViewGroup$LayoutParams r0 = r7.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r0 = (android.support.v7.widget.Toolbar.LayoutParams) r0
            int r7 = r7.getMeasuredHeight()
            r1 = 0
            if (r8 <= 0) goto L12
            int r8 = r7 - r8
            int r8 = r8 / 2
            goto L13
        L12:
            r8 = r1
        L13:
            int r2 = r0.gravity
            int r2 = r6.getChildVerticalGravity(r2)
            r3 = 48
            if (r2 == r3) goto L5b
            r3 = 80
            if (r2 == r3) goto L4c
            int r8 = r6.getPaddingTop()
            int r2 = r6.getPaddingBottom()
            int r3 = r6.getHeight()
            int r4 = r3 - r8
            int r4 = r4 - r2
            int r4 = r4 - r7
            int r4 = r4 / 2
            int r5 = r0.topMargin
            if (r4 >= r5) goto L3a
            int r4 = r0.topMargin
            goto L4a
        L3a:
            int r3 = r3 - r2
            int r3 = r3 - r7
            int r3 = r3 - r4
            int r3 = r3 - r8
            int r7 = r0.bottomMargin
            if (r3 >= r7) goto L4a
            int r7 = r0.bottomMargin
            int r7 = r7 - r3
            int r4 = r4 - r7
            int r4 = java.lang.Math.max(r1, r4)
        L4a:
            int r8 = r8 + r4
            return r8
        L4c:
            int r1 = r6.getHeight()
            int r2 = r6.getPaddingBottom()
            int r1 = r1 - r2
            int r1 = r1 - r7
            int r7 = r0.bottomMargin
            int r1 = r1 - r7
            int r1 = r1 - r8
            return r1
        L5b:
            int r7 = r6.getPaddingTop()
            int r7 = r7 - r8
            return r7
    }

    private int getChildVerticalGravity(int r2) {
            r1 = this;
            r2 = r2 & 112(0x70, float:1.57E-43)
            r0 = 16
            if (r2 == r0) goto L12
            r0 = 48
            if (r2 == r0) goto L12
            r0 = 80
            if (r2 == r0) goto L12
            int r2 = r1.mGravity
            r2 = r2 & 112(0x70, float:1.57E-43)
        L12:
            return r2
    }

    private int getHorizontalMargins(android.view.View r2) {
            r1 = this;
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r2 = (android.view.ViewGroup.MarginLayoutParams) r2
            int r0 = android.support.v4.view.MarginLayoutParamsCompat.getMarginStart(r2)
            int r2 = android.support.v4.view.MarginLayoutParamsCompat.getMarginEnd(r2)
            int r0 = r0 + r2
            return r0
    }

    private android.view.MenuInflater getMenuInflater() {
            r2 = this;
            android.support.v7.view.SupportMenuInflater r0 = new android.support.v7.view.SupportMenuInflater
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            return r0
    }

    private int getVerticalMargins(android.view.View r2) {
            r1 = this;
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r2 = (android.view.ViewGroup.MarginLayoutParams) r2
            int r0 = r2.topMargin
            int r2 = r2.bottomMargin
            int r0 = r0 + r2
            return r0
    }

    private int getViewListMeasuredWidth(java.util.List<android.view.View> r9, int[] r10) {
            r8 = this;
            r0 = 0
            r1 = r10[r0]
            r2 = 1
            r10 = r10[r2]
            int r2 = r9.size()
            r3 = r0
            r4 = r3
        Lc:
            if (r3 >= r2) goto L3e
            java.lang.Object r5 = r9.get(r3)
            android.view.View r5 = (android.view.View) r5
            android.view.ViewGroup$LayoutParams r6 = r5.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r6 = (android.support.v7.widget.Toolbar.LayoutParams) r6
            int r7 = r6.leftMargin
            int r7 = r7 - r1
            int r1 = r6.rightMargin
            int r1 = r1 - r10
            int r10 = java.lang.Math.max(r0, r7)
            int r6 = java.lang.Math.max(r0, r1)
            int r7 = -r7
            int r7 = java.lang.Math.max(r0, r7)
            int r1 = -r1
            int r1 = java.lang.Math.max(r0, r1)
            int r5 = r5.getMeasuredWidth()
            int r10 = r10 + r5
            int r10 = r10 + r6
            int r4 = r4 + r10
            int r3 = r3 + 1
            r10 = r1
            r1 = r7
            goto Lc
        L3e:
            return r4
    }

    private boolean isChildOrHidden(android.view.View r2) {
            r1 = this;
            android.view.ViewParent r0 = r2.getParent()
            if (r0 == r1) goto L11
            java.util.ArrayList<android.view.View> r0 = r1.mHiddenViews
            boolean r2 = r0.contains(r2)
            if (r2 == 0) goto Lf
            goto L11
        Lf:
            r2 = 0
            goto L12
        L11:
            r2 = 1
        L12:
            return r2
    }

    private static boolean isCustomView(android.view.View r0) {
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r0 = (android.support.v7.widget.Toolbar.LayoutParams) r0
            int r0 = r0.mViewType
            if (r0 != 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    private int layoutChildLeft(android.view.View r5, int r6, int[] r7, int r8) {
            r4 = this;
            android.view.ViewGroup$LayoutParams r0 = r5.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r0 = (android.support.v7.widget.Toolbar.LayoutParams) r0
            int r1 = r0.leftMargin
            r2 = 0
            r3 = r7[r2]
            int r1 = r1 - r3
            int r3 = java.lang.Math.max(r2, r1)
            int r6 = r6 + r3
            int r1 = -r1
            int r1 = java.lang.Math.max(r2, r1)
            r7[r2] = r1
            int r7 = r4.getChildTop(r5, r8)
            int r8 = r5.getMeasuredWidth()
            int r1 = r6 + r8
            int r2 = r5.getMeasuredHeight()
            int r2 = r2 + r7
            r5.layout(r6, r7, r1, r2)
            int r5 = r0.rightMargin
            int r8 = r8 + r5
            int r6 = r6 + r8
            return r6
    }

    private int layoutChildRight(android.view.View r6, int r7, int[] r8, int r9) {
            r5 = this;
            android.view.ViewGroup$LayoutParams r0 = r6.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r0 = (android.support.v7.widget.Toolbar.LayoutParams) r0
            int r1 = r0.rightMargin
            r2 = 1
            r3 = r8[r2]
            int r1 = r1 - r3
            r3 = 0
            int r4 = java.lang.Math.max(r3, r1)
            int r7 = r7 - r4
            int r1 = -r1
            int r1 = java.lang.Math.max(r3, r1)
            r8[r2] = r1
            int r8 = r5.getChildTop(r6, r9)
            int r9 = r6.getMeasuredWidth()
            int r1 = r7 - r9
            int r2 = r6.getMeasuredHeight()
            int r2 = r2 + r8
            r6.layout(r1, r8, r7, r2)
            int r6 = r0.leftMargin
            int r9 = r9 + r6
            int r7 = r7 - r9
            return r7
    }

    private int measureChildCollapseMargins(android.view.View r8, int r9, int r10, int r11, int r12, int[] r13) {
            r7 = this;
            android.view.ViewGroup$LayoutParams r0 = r8.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r0 = (android.view.ViewGroup.MarginLayoutParams) r0
            int r1 = r0.leftMargin
            r2 = 0
            r3 = r13[r2]
            int r1 = r1 - r3
            int r3 = r0.rightMargin
            r4 = 1
            r5 = r13[r4]
            int r3 = r3 - r5
            int r5 = java.lang.Math.max(r2, r1)
            int r6 = java.lang.Math.max(r2, r3)
            int r5 = r5 + r6
            int r1 = -r1
            int r1 = java.lang.Math.max(r2, r1)
            r13[r2] = r1
            int r1 = -r3
            int r1 = java.lang.Math.max(r2, r1)
            r13[r4] = r1
            int r13 = r7.getPaddingLeft()
            int r1 = r7.getPaddingRight()
            int r13 = r13 + r1
            int r13 = r13 + r5
            int r13 = r13 + r10
            int r10 = r0.width
            int r9 = getChildMeasureSpec(r9, r13, r10)
            int r10 = r7.getPaddingTop()
            int r13 = r7.getPaddingBottom()
            int r10 = r10 + r13
            int r13 = r0.topMargin
            int r10 = r10 + r13
            int r13 = r0.bottomMargin
            int r10 = r10 + r13
            int r10 = r10 + r12
            int r12 = r0.height
            int r10 = getChildMeasureSpec(r11, r10, r12)
            r8.measure(r9, r10)
            int r8 = r8.getMeasuredWidth()
            int r8 = r8 + r5
            return r8
    }

    private void measureChildConstrained(android.view.View r4, int r5, int r6, int r7, int r8, int r9) {
            r3 = this;
            android.view.ViewGroup$LayoutParams r0 = r4.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r0 = (android.view.ViewGroup.MarginLayoutParams) r0
            int r1 = r3.getPaddingLeft()
            int r2 = r3.getPaddingRight()
            int r1 = r1 + r2
            int r2 = r0.leftMargin
            int r1 = r1 + r2
            int r2 = r0.rightMargin
            int r1 = r1 + r2
            int r1 = r1 + r6
            int r6 = r0.width
            int r5 = getChildMeasureSpec(r5, r1, r6)
            int r6 = r3.getPaddingTop()
            int r1 = r3.getPaddingBottom()
            int r6 = r6 + r1
            int r1 = r0.topMargin
            int r6 = r6 + r1
            int r1 = r0.bottomMargin
            int r6 = r6 + r1
            int r6 = r6 + r8
            int r8 = r0.height
            int r6 = getChildMeasureSpec(r7, r6, r8)
            int r7 = android.view.View.MeasureSpec.getMode(r6)
            r8 = 1073741824(0x40000000, float:2.0)
            if (r7 == r8) goto L4a
            if (r9 < 0) goto L4a
            if (r7 == 0) goto L46
            int r6 = android.view.View.MeasureSpec.getSize(r6)
            int r9 = java.lang.Math.min(r6, r9)
        L46:
            int r6 = android.view.View.MeasureSpec.makeMeasureSpec(r9, r8)
        L4a:
            r4.measure(r5, r6)
            return
    }

    private void postShowOverflowMenu() {
            r1 = this;
            java.lang.Runnable r0 = r1.mShowOverflowMenuRunnable
            r1.removeCallbacks(r0)
            java.lang.Runnable r0 = r1.mShowOverflowMenuRunnable
            r1.post(r0)
            return
    }

    private boolean shouldCollapse() {
            r5 = this;
            boolean r0 = r5.mCollapsible
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            int r0 = r5.getChildCount()
            r2 = r1
        Lb:
            if (r2 >= r0) goto L27
            android.view.View r3 = r5.getChildAt(r2)
            boolean r4 = r5.shouldLayout(r3)
            if (r4 == 0) goto L24
            int r4 = r3.getMeasuredWidth()
            if (r4 <= 0) goto L24
            int r3 = r3.getMeasuredHeight()
            if (r3 <= 0) goto L24
            return r1
        L24:
            int r2 = r2 + 1
            goto Lb
        L27:
            r0 = 1
            return r0
    }

    private boolean shouldLayout(android.view.View r2) {
            r1 = this;
            if (r2 == 0) goto L12
            android.view.ViewParent r0 = r2.getParent()
            if (r0 != r1) goto L12
            int r2 = r2.getVisibility()
            r0 = 8
            if (r2 == r0) goto L12
            r2 = 1
            goto L13
        L12:
            r2 = 0
        L13:
            return r2
    }

    void addChildrenForExpandedActionView() {
            r2 = this;
            java.util.ArrayList<android.view.View> r0 = r2.mHiddenViews
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L18
            java.util.ArrayList<android.view.View> r1 = r2.mHiddenViews
            java.lang.Object r1 = r1.get(r0)
            android.view.View r1 = (android.view.View) r1
            r2.addView(r1)
            int r0 = r0 + (-1)
            goto L8
        L18:
            java.util.ArrayList<android.view.View> r0 = r2.mHiddenViews
            r0.clear()
            return
    }

    public boolean canShowOverflowMenu() {
            r1 = this;
            int r0 = r1.getVisibility()
            if (r0 != 0) goto L12
            android.support.v7.widget.ActionMenuView r0 = r1.mMenuView
            if (r0 == 0) goto L12
            boolean r0 = r0.isOverflowReserved()
            if (r0 == 0) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            return r0
    }

    @Override
    protected boolean checkLayoutParams(android.view.ViewGroup.LayoutParams r2) {
            r1 = this;
            boolean r0 = super.checkLayoutParams(r2)
            if (r0 == 0) goto Lc
            boolean r2 = r2 instanceof android.support.v7.widget.Toolbar.LayoutParams
            if (r2 == 0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = 0
        Ld:
            return r2
    }

    public void collapseActionView() {
            r1 = this;
            android.support.v7.widget.Toolbar$ExpandedActionViewMenuPresenter r0 = r1.mExpandedMenuPresenter
            if (r0 != 0) goto L6
            r0 = 0
            goto L8
        L6:
            android.support.v7.view.menu.MenuItemImpl r0 = r0.mCurrentExpandedItem
        L8:
            if (r0 == 0) goto Ld
            r0.collapseActionView()
        Ld:
            return
    }

    public void dismissPopupMenus() {
            r1 = this;
            android.support.v7.widget.ActionMenuView r0 = r1.mMenuView
            if (r0 == 0) goto L7
            r0.dismissPopupMenus()
        L7:
            return
    }

    void ensureCollapseButtonView() {
            r4 = this;
            android.widget.ImageButton r0 = r4.mCollapseButtonView
            if (r0 != 0) goto L3e
            android.support.v7.widget.AppCompatImageButton r0 = new android.support.v7.widget.AppCompatImageButton
            android.content.Context r1 = r4.getContext()
            r2 = 0
            int r3 = android.support.v7.appcompat.R.attr.toolbarNavigationButtonStyle
            r0.<init>(r1, r2, r3)
            r4.mCollapseButtonView = r0
            android.graphics.drawable.Drawable r1 = r4.mCollapseIcon
            r0.setImageDrawable(r1)
            android.widget.ImageButton r0 = r4.mCollapseButtonView
            java.lang.CharSequence r1 = r4.mCollapseDescription
            r0.setContentDescription(r1)
            android.support.v7.widget.Toolbar$LayoutParams r0 = r4.generateDefaultLayoutParams()
            r1 = 8388611(0x800003, float:1.1754948E-38)
            int r2 = r4.mButtonGravity
            r2 = r2 & 112(0x70, float:1.57E-43)
            r1 = r1 | r2
            r0.gravity = r1
            r1 = 2
            r0.mViewType = r1
            android.widget.ImageButton r1 = r4.mCollapseButtonView
            r1.setLayoutParams(r0)
            android.widget.ImageButton r0 = r4.mCollapseButtonView
            android.support.v7.widget.Toolbar$3 r1 = new android.support.v7.widget.Toolbar$3
            r1.<init>(r4)
            r0.setOnClickListener(r1)
        L3e:
            return
    }

    @Override
    protected android.support.v7.widget.Toolbar.LayoutParams generateDefaultLayoutParams() {
            r2 = this;
            android.support.v7.widget.Toolbar$LayoutParams r0 = new android.support.v7.widget.Toolbar$LayoutParams
            r1 = -2
            r0.<init>(r1, r1)
            return r0
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateDefaultLayoutParams() {
            r1 = this;
            android.support.v7.widget.Toolbar$LayoutParams r0 = r1.generateDefaultLayoutParams()
            return r0
    }

    @Override
    public android.support.v7.widget.Toolbar.LayoutParams generateLayoutParams(android.util.AttributeSet r3) {
            r2 = this;
            android.support.v7.widget.Toolbar$LayoutParams r0 = new android.support.v7.widget.Toolbar$LayoutParams
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1, r3)
            return r0
    }

    @Override
    protected android.support.v7.widget.Toolbar.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.support.v7.widget.Toolbar.LayoutParams
            if (r0 == 0) goto Lc
            android.support.v7.widget.Toolbar$LayoutParams r0 = new android.support.v7.widget.Toolbar$LayoutParams
            android.support.v7.widget.Toolbar$LayoutParams r2 = (android.support.v7.widget.Toolbar.LayoutParams) r2
            r0.<init>(r2)
            return r0
        Lc:
            boolean r0 = r2 instanceof android.support.v7.app.ActionBar.LayoutParams
            if (r0 == 0) goto L18
            android.support.v7.widget.Toolbar$LayoutParams r0 = new android.support.v7.widget.Toolbar$LayoutParams
            android.support.v7.app.ActionBar$LayoutParams r2 = (android.support.v7.app.ActionBar.LayoutParams) r2
            r0.<init>(r2)
            return r0
        L18:
            boolean r0 = r2 instanceof android.view.ViewGroup.MarginLayoutParams
            if (r0 == 0) goto L24
            android.support.v7.widget.Toolbar$LayoutParams r0 = new android.support.v7.widget.Toolbar$LayoutParams
            android.view.ViewGroup$MarginLayoutParams r2 = (android.view.ViewGroup.MarginLayoutParams) r2
            r0.<init>(r2)
            return r0
        L24:
            android.support.v7.widget.Toolbar$LayoutParams r0 = new android.support.v7.widget.Toolbar$LayoutParams
            r0.<init>(r2)
            return r0
    }

    @Override
    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet r1) {
            r0 = this;
            android.support.v7.widget.Toolbar$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r1) {
            r0 = this;
            android.support.v7.widget.Toolbar$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    public int getContentInsetEnd() {
            r1 = this;
            android.support.v7.widget.RtlSpacingHelper r0 = r1.mContentInsets
            if (r0 == 0) goto L9
            int r0 = r0.getEnd()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public int getContentInsetEndWithActions() {
            r2 = this;
            int r0 = r2.mContentInsetEndWithActions
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r0 == r1) goto L7
            goto Lb
        L7:
            int r0 = r2.getContentInsetEnd()
        Lb:
            return r0
    }

    public int getContentInsetLeft() {
            r1 = this;
            android.support.v7.widget.RtlSpacingHelper r0 = r1.mContentInsets
            if (r0 == 0) goto L9
            int r0 = r0.getLeft()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public int getContentInsetRight() {
            r1 = this;
            android.support.v7.widget.RtlSpacingHelper r0 = r1.mContentInsets
            if (r0 == 0) goto L9
            int r0 = r0.getRight()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public int getContentInsetStart() {
            r1 = this;
            android.support.v7.widget.RtlSpacingHelper r0 = r1.mContentInsets
            if (r0 == 0) goto L9
            int r0 = r0.getStart()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public int getContentInsetStartWithNavigation() {
            r2 = this;
            int r0 = r2.mContentInsetStartWithNavigation
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r0 == r1) goto L7
            goto Lb
        L7:
            int r0 = r2.getContentInsetStart()
        Lb:
            return r0
    }

    public int getCurrentContentInsetEnd() {
            r3 = this;
            android.support.v7.widget.ActionMenuView r0 = r3.mMenuView
            r1 = 0
            if (r0 == 0) goto L13
            android.support.v7.view.menu.MenuBuilder r0 = r0.peekMenu()
            if (r0 == 0) goto L13
            boolean r0 = r0.hasVisibleItems()
            if (r0 == 0) goto L13
            r0 = 1
            goto L14
        L13:
            r0 = r1
        L14:
            if (r0 == 0) goto L25
            int r0 = r3.getContentInsetEnd()
            int r2 = r3.mContentInsetEndWithActions
            int r1 = java.lang.Math.max(r2, r1)
            int r0 = java.lang.Math.max(r0, r1)
            goto L29
        L25:
            int r0 = r3.getContentInsetEnd()
        L29:
            return r0
    }

    public int getCurrentContentInsetLeft() {
            r2 = this;
            int r0 = android.support.v4.view.ViewCompat.getLayoutDirection(r2)
            r1 = 1
            if (r0 != r1) goto Lc
            int r0 = r2.getCurrentContentInsetEnd()
            goto L10
        Lc:
            int r0 = r2.getCurrentContentInsetStart()
        L10:
            return r0
    }

    public int getCurrentContentInsetRight() {
            r2 = this;
            int r0 = android.support.v4.view.ViewCompat.getLayoutDirection(r2)
            r1 = 1
            if (r0 != r1) goto Lc
            int r0 = r2.getCurrentContentInsetStart()
            goto L10
        Lc:
            int r0 = r2.getCurrentContentInsetEnd()
        L10:
            return r0
    }

    public int getCurrentContentInsetStart() {
            r3 = this;
            android.graphics.drawable.Drawable r0 = r3.getNavigationIcon()
            if (r0 == 0) goto L16
            int r0 = r3.getContentInsetStart()
            int r1 = r3.mContentInsetStartWithNavigation
            r2 = 0
            int r1 = java.lang.Math.max(r1, r2)
            int r0 = java.lang.Math.max(r0, r1)
            goto L1a
        L16:
            int r0 = r3.getContentInsetStart()
        L1a:
            return r0
    }

    public android.graphics.drawable.Drawable getLogo() {
            r1 = this;
            android.widget.ImageView r0 = r1.mLogoView
            if (r0 == 0) goto L9
            android.graphics.drawable.Drawable r0 = r0.getDrawable()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public java.lang.CharSequence getLogoDescription() {
            r1 = this;
            android.widget.ImageView r0 = r1.mLogoView
            if (r0 == 0) goto L9
            java.lang.CharSequence r0 = r0.getContentDescription()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public android.view.Menu getMenu() {
            r1 = this;
            r1.ensureMenu()
            android.support.v7.widget.ActionMenuView r0 = r1.mMenuView
            android.view.Menu r0 = r0.getMenu()
            return r0
    }

    public java.lang.CharSequence getNavigationContentDescription() {
            r1 = this;
            android.widget.ImageButton r0 = r1.mNavButtonView
            if (r0 == 0) goto L9
            java.lang.CharSequence r0 = r0.getContentDescription()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public android.graphics.drawable.Drawable getNavigationIcon() {
            r1 = this;
            android.widget.ImageButton r0 = r1.mNavButtonView
            if (r0 == 0) goto L9
            android.graphics.drawable.Drawable r0 = r0.getDrawable()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    android.support.v7.widget.ActionMenuPresenter getOuterActionMenuPresenter() {
            r1 = this;
            android.support.v7.widget.ActionMenuPresenter r0 = r1.mOuterActionMenuPresenter
            return r0
    }

    public android.graphics.drawable.Drawable getOverflowIcon() {
            r1 = this;
            r1.ensureMenu()
            android.support.v7.widget.ActionMenuView r0 = r1.mMenuView
            android.graphics.drawable.Drawable r0 = r0.getOverflowIcon()
            return r0
    }

    android.content.Context getPopupContext() {
            r1 = this;
            android.content.Context r0 = r1.mPopupContext
            return r0
    }

    public int getPopupTheme() {
            r1 = this;
            int r0 = r1.mPopupTheme
            return r0
    }

    public java.lang.CharSequence getSubtitle() {
            r1 = this;
            java.lang.CharSequence r0 = r1.mSubtitleText
            return r0
    }

    public java.lang.CharSequence getTitle() {
            r1 = this;
            java.lang.CharSequence r0 = r1.mTitleText
            return r0
    }

    public int getTitleMarginBottom() {
            r1 = this;
            int r0 = r1.mTitleMarginBottom
            return r0
    }

    public int getTitleMarginEnd() {
            r1 = this;
            int r0 = r1.mTitleMarginEnd
            return r0
    }

    public int getTitleMarginStart() {
            r1 = this;
            int r0 = r1.mTitleMarginStart
            return r0
    }

    public int getTitleMarginTop() {
            r1 = this;
            int r0 = r1.mTitleMarginTop
            return r0
    }

    public android.support.v7.widget.DecorToolbar getWrapper() {
            r2 = this;
            android.support.v7.widget.ToolbarWidgetWrapper r0 = r2.mWrapper
            if (r0 != 0) goto Lc
            android.support.v7.widget.ToolbarWidgetWrapper r0 = new android.support.v7.widget.ToolbarWidgetWrapper
            r1 = 1
            r0.<init>(r2, r1)
            r2.mWrapper = r0
        Lc:
            android.support.v7.widget.ToolbarWidgetWrapper r0 = r2.mWrapper
            return r0
    }

    public boolean hasExpandedActionView() {
            r1 = this;
            android.support.v7.widget.Toolbar$ExpandedActionViewMenuPresenter r0 = r1.mExpandedMenuPresenter
            if (r0 == 0) goto La
            android.support.v7.view.menu.MenuItemImpl r0 = r0.mCurrentExpandedItem
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    public boolean hideOverflowMenu() {
            r1 = this;
            android.support.v7.widget.ActionMenuView r0 = r1.mMenuView
            if (r0 == 0) goto Lc
            boolean r0 = r0.hideOverflowMenu()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public void inflateMenu(int r3) {
            r2 = this;
            android.view.MenuInflater r0 = r2.getMenuInflater()
            android.view.Menu r1 = r2.getMenu()
            r0.inflate(r3, r1)
            return
    }

    public boolean isOverflowMenuShowPending() {
            r1 = this;
            android.support.v7.widget.ActionMenuView r0 = r1.mMenuView
            if (r0 == 0) goto Lc
            boolean r0 = r0.isOverflowMenuShowPending()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public boolean isOverflowMenuShowing() {
            r1 = this;
            android.support.v7.widget.ActionMenuView r0 = r1.mMenuView
            if (r0 == 0) goto Lc
            boolean r0 = r0.isOverflowMenuShowing()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public boolean isTitleTruncated() {
            r5 = this;
            android.widget.TextView r0 = r5.mTitleTextView
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            android.text.Layout r0 = r0.getLayout()
            if (r0 != 0) goto Ld
            return r1
        Ld:
            int r2 = r0.getLineCount()
            r3 = r1
        L12:
            if (r3 >= r2) goto L1f
            int r4 = r0.getEllipsisCount(r3)
            if (r4 <= 0) goto L1c
            r0 = 1
            return r0
        L1c:
            int r3 = r3 + 1
            goto L12
        L1f:
            return r1
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            java.lang.Runnable r0 = r1.mShowOverflowMenuRunnable
            r1.removeCallbacks(r0)
            return
    }

    @Override
    public boolean onHoverEvent(android.view.MotionEvent r6) {
            r5 = this;
            int r0 = r6.getActionMasked()
            r1 = 0
            r2 = 9
            if (r0 != r2) goto Lb
            r5.mEatingHover = r1
        Lb:
            boolean r3 = r5.mEatingHover
            r4 = 1
            if (r3 != 0) goto L1a
            boolean r6 = super.onHoverEvent(r6)
            if (r0 != r2) goto L1a
            if (r6 != 0) goto L1a
            r5.mEatingHover = r4
        L1a:
            r6 = 10
            if (r0 == r6) goto L21
            r6 = 3
            if (r0 != r6) goto L23
        L21:
            r5.mEatingHover = r1
        L23:
            return r4
    }

    @Override
    protected void onLayout(boolean r20, int r21, int r22, int r23, int r24) {
            r19 = this;
            r0 = r19
            int r1 = android.support.v4.view.ViewCompat.getLayoutDirection(r19)
            r2 = 1
            r3 = 0
            if (r1 != r2) goto Lc
            r1 = r2
            goto Ld
        Lc:
            r1 = r3
        Ld:
            int r4 = r19.getWidth()
            int r5 = r19.getHeight()
            int r6 = r19.getPaddingLeft()
            int r7 = r19.getPaddingRight()
            int r8 = r19.getPaddingTop()
            int r9 = r19.getPaddingBottom()
            int r10 = r4 - r7
            int[] r11 = r0.mTempMargins
            r11[r2] = r3
            r11[r3] = r3
            int r12 = android.support.v4.view.ViewCompat.getMinimumHeight(r19)
            if (r12 < 0) goto L3a
            int r13 = r24 - r22
            int r12 = java.lang.Math.min(r12, r13)
            goto L3b
        L3a:
            r12 = r3
        L3b:
            android.widget.ImageButton r13 = r0.mNavButtonView
            boolean r13 = r0.shouldLayout(r13)
            if (r13 == 0) goto L55
            if (r1 == 0) goto L4e
            android.widget.ImageButton r13 = r0.mNavButtonView
            int r13 = r0.layoutChildRight(r13, r10, r11, r12)
            r14 = r13
            r13 = r6
            goto L57
        L4e:
            android.widget.ImageButton r13 = r0.mNavButtonView
            int r13 = r0.layoutChildLeft(r13, r6, r11, r12)
            goto L56
        L55:
            r13 = r6
        L56:
            r14 = r10
        L57:
            android.widget.ImageButton r15 = r0.mCollapseButtonView
            boolean r15 = r0.shouldLayout(r15)
            if (r15 == 0) goto L6e
            if (r1 == 0) goto L68
            android.widget.ImageButton r15 = r0.mCollapseButtonView
            int r14 = r0.layoutChildRight(r15, r14, r11, r12)
            goto L6e
        L68:
            android.widget.ImageButton r15 = r0.mCollapseButtonView
            int r13 = r0.layoutChildLeft(r15, r13, r11, r12)
        L6e:
            android.support.v7.widget.ActionMenuView r15 = r0.mMenuView
            boolean r15 = r0.shouldLayout(r15)
            if (r15 == 0) goto L85
            if (r1 == 0) goto L7f
            android.support.v7.widget.ActionMenuView r15 = r0.mMenuView
            int r13 = r0.layoutChildLeft(r15, r13, r11, r12)
            goto L85
        L7f:
            android.support.v7.widget.ActionMenuView r15 = r0.mMenuView
            int r14 = r0.layoutChildRight(r15, r14, r11, r12)
        L85:
            int r15 = r19.getCurrentContentInsetLeft()
            int r16 = r19.getCurrentContentInsetRight()
            int r2 = r15 - r13
            int r2 = java.lang.Math.max(r3, r2)
            r11[r3] = r2
            int r2 = r10 - r14
            int r2 = r16 - r2
            int r2 = java.lang.Math.max(r3, r2)
            r17 = 1
            r11[r17] = r2
            int r2 = java.lang.Math.max(r13, r15)
            int r10 = r10 - r16
            int r10 = java.lang.Math.min(r14, r10)
            android.view.View r13 = r0.mExpandedActionView
            boolean r13 = r0.shouldLayout(r13)
            if (r13 == 0) goto Lc2
            if (r1 == 0) goto Lbc
            android.view.View r13 = r0.mExpandedActionView
            int r10 = r0.layoutChildRight(r13, r10, r11, r12)
            goto Lc2
        Lbc:
            android.view.View r13 = r0.mExpandedActionView
            int r2 = r0.layoutChildLeft(r13, r2, r11, r12)
        Lc2:
            android.widget.ImageView r13 = r0.mLogoView
            boolean r13 = r0.shouldLayout(r13)
            if (r13 == 0) goto Ld9
            if (r1 == 0) goto Ld3
            android.widget.ImageView r13 = r0.mLogoView
            int r10 = r0.layoutChildRight(r13, r10, r11, r12)
            goto Ld9
        Ld3:
            android.widget.ImageView r13 = r0.mLogoView
            int r2 = r0.layoutChildLeft(r13, r2, r11, r12)
        Ld9:
            android.widget.TextView r13 = r0.mTitleTextView
            boolean r13 = r0.shouldLayout(r13)
            android.widget.TextView r14 = r0.mSubtitleTextView
            boolean r14 = r0.shouldLayout(r14)
            if (r13 == 0) goto L100
            android.widget.TextView r15 = r0.mTitleTextView
            android.view.ViewGroup$LayoutParams r15 = r15.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r15 = (android.support.v7.widget.Toolbar.LayoutParams) r15
            int r3 = r15.topMargin
            r23 = r7
            android.widget.TextView r7 = r0.mTitleTextView
            int r7 = r7.getMeasuredHeight()
            int r3 = r3 + r7
            int r7 = r15.bottomMargin
            int r3 = r3 + r7
            r7 = 0
            int r3 = r3 + r7
            goto L103
        L100:
            r23 = r7
            r3 = 0
        L103:
            if (r14 == 0) goto L11d
            android.widget.TextView r7 = r0.mSubtitleTextView
            android.view.ViewGroup$LayoutParams r7 = r7.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r7 = (android.support.v7.widget.Toolbar.LayoutParams) r7
            int r15 = r7.topMargin
            r16 = r4
            android.widget.TextView r4 = r0.mSubtitleTextView
            int r4 = r4.getMeasuredHeight()
            int r15 = r15 + r4
            int r4 = r7.bottomMargin
            int r15 = r15 + r4
            int r3 = r3 + r15
            goto L11f
        L11d:
            r16 = r4
        L11f:
            if (r13 != 0) goto L12b
            if (r14 == 0) goto L124
            goto L12b
        L124:
            r18 = r6
            r22 = r12
        L128:
            r1 = 0
            goto L290
        L12b:
            if (r13 == 0) goto L130
            android.widget.TextView r4 = r0.mTitleTextView
            goto L132
        L130:
            android.widget.TextView r4 = r0.mSubtitleTextView
        L132:
            if (r14 == 0) goto L137
            android.widget.TextView r7 = r0.mSubtitleTextView
            goto L139
        L137:
            android.widget.TextView r7 = r0.mTitleTextView
        L139:
            android.view.ViewGroup$LayoutParams r4 = r4.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r4 = (android.support.v7.widget.Toolbar.LayoutParams) r4
            android.view.ViewGroup$LayoutParams r7 = r7.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r7 = (android.support.v7.widget.Toolbar.LayoutParams) r7
            if (r13 == 0) goto L14f
            android.widget.TextView r15 = r0.mTitleTextView
            int r15 = r15.getMeasuredWidth()
            if (r15 > 0) goto L159
        L14f:
            if (r14 == 0) goto L15c
            android.widget.TextView r15 = r0.mSubtitleTextView
            int r15 = r15.getMeasuredWidth()
            if (r15 <= 0) goto L15c
        L159:
            r17 = 1
            goto L15e
        L15c:
            r17 = 0
        L15e:
            int r15 = r0.mGravity
            r15 = r15 & 112(0x70, float:1.57E-43)
            r18 = r6
            r6 = 48
            if (r15 == r6) goto L1a7
            r6 = 80
            if (r15 == r6) goto L19b
            int r6 = r5 - r8
            int r6 = r6 - r9
            int r6 = r6 - r3
            int r6 = r6 / 2
            int r15 = r4.topMargin
            r22 = r12
            int r12 = r0.mTitleMarginTop
            int r15 = r15 + r12
            if (r6 >= r15) goto L182
            int r3 = r4.topMargin
            int r4 = r0.mTitleMarginTop
            int r6 = r3 + r4
            goto L199
        L182:
            int r5 = r5 - r9
            int r5 = r5 - r3
            int r5 = r5 - r6
            int r5 = r5 - r8
            int r3 = r4.bottomMargin
            int r4 = r0.mTitleMarginBottom
            int r3 = r3 + r4
            if (r5 >= r3) goto L199
            int r3 = r7.bottomMargin
            int r4 = r0.mTitleMarginBottom
            int r3 = r3 + r4
            int r3 = r3 - r5
            int r6 = r6 - r3
            r3 = 0
            int r6 = java.lang.Math.max(r3, r6)
        L199:
            int r8 = r8 + r6
            goto L1b4
        L19b:
            r22 = r12
            int r5 = r5 - r9
            int r4 = r7.bottomMargin
            int r5 = r5 - r4
            int r4 = r0.mTitleMarginBottom
            int r5 = r5 - r4
            int r8 = r5 - r3
            goto L1b4
        L1a7:
            r22 = r12
            int r3 = r19.getPaddingTop()
            int r4 = r4.topMargin
            int r3 = r3 + r4
            int r4 = r0.mTitleMarginTop
            int r8 = r3 + r4
        L1b4:
            if (r1 == 0) goto L226
            if (r17 == 0) goto L1bb
            int r1 = r0.mTitleMarginStart
            goto L1bc
        L1bb:
            r1 = 0
        L1bc:
            r3 = 1
            r4 = r11[r3]
            int r1 = r1 - r4
            r4 = 0
            int r5 = java.lang.Math.max(r4, r1)
            int r10 = r10 - r5
            int r1 = -r1
            int r1 = java.lang.Math.max(r4, r1)
            r11[r3] = r1
            if (r13 == 0) goto L1f3
            android.widget.TextView r1 = r0.mTitleTextView
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r1 = (android.support.v7.widget.Toolbar.LayoutParams) r1
            android.widget.TextView r3 = r0.mTitleTextView
            int r3 = r3.getMeasuredWidth()
            int r3 = r10 - r3
            android.widget.TextView r4 = r0.mTitleTextView
            int r4 = r4.getMeasuredHeight()
            int r4 = r4 + r8
            android.widget.TextView r5 = r0.mTitleTextView
            r5.layout(r3, r8, r10, r4)
            int r5 = r0.mTitleMarginEnd
            int r3 = r3 - r5
            int r1 = r1.bottomMargin
            int r8 = r4 + r1
            goto L1f4
        L1f3:
            r3 = r10
        L1f4:
            if (r14 == 0) goto L21c
            android.widget.TextView r1 = r0.mSubtitleTextView
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r1 = (android.support.v7.widget.Toolbar.LayoutParams) r1
            int r4 = r1.topMargin
            int r8 = r8 + r4
            android.widget.TextView r4 = r0.mSubtitleTextView
            int r4 = r4.getMeasuredWidth()
            int r4 = r10 - r4
            android.widget.TextView r5 = r0.mSubtitleTextView
            int r5 = r5.getMeasuredHeight()
            int r5 = r5 + r8
            android.widget.TextView r6 = r0.mSubtitleTextView
            r6.layout(r4, r8, r10, r5)
            int r4 = r0.mTitleMarginEnd
            int r4 = r10 - r4
            int r1 = r1.bottomMargin
            goto L21d
        L21c:
            r4 = r10
        L21d:
            if (r17 == 0) goto L128
            int r1 = java.lang.Math.min(r3, r4)
            r10 = r1
            goto L128
        L226:
            if (r17 == 0) goto L22c
            int r7 = r0.mTitleMarginStart
            r1 = 0
            goto L22e
        L22c:
            r1 = 0
            r7 = 0
        L22e:
            r3 = r11[r1]
            int r7 = r7 - r3
            int r3 = java.lang.Math.max(r1, r7)
            int r2 = r2 + r3
            int r3 = -r7
            int r3 = java.lang.Math.max(r1, r3)
            r11[r1] = r3
            if (r13 == 0) goto L262
            android.widget.TextView r3 = r0.mTitleTextView
            android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r3 = (android.support.v7.widget.Toolbar.LayoutParams) r3
            android.widget.TextView r4 = r0.mTitleTextView
            int r4 = r4.getMeasuredWidth()
            int r4 = r4 + r2
            android.widget.TextView r5 = r0.mTitleTextView
            int r5 = r5.getMeasuredHeight()
            int r5 = r5 + r8
            android.widget.TextView r6 = r0.mTitleTextView
            r6.layout(r2, r8, r4, r5)
            int r6 = r0.mTitleMarginEnd
            int r4 = r4 + r6
            int r3 = r3.bottomMargin
            int r8 = r5 + r3
            goto L263
        L262:
            r4 = r2
        L263:
            if (r14 == 0) goto L289
            android.widget.TextView r3 = r0.mSubtitleTextView
            android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r3 = (android.support.v7.widget.Toolbar.LayoutParams) r3
            int r5 = r3.topMargin
            int r8 = r8 + r5
            android.widget.TextView r5 = r0.mSubtitleTextView
            int r5 = r5.getMeasuredWidth()
            int r5 = r5 + r2
            android.widget.TextView r6 = r0.mSubtitleTextView
            int r6 = r6.getMeasuredHeight()
            int r6 = r6 + r8
            android.widget.TextView r7 = r0.mSubtitleTextView
            r7.layout(r2, r8, r5, r6)
            int r6 = r0.mTitleMarginEnd
            int r5 = r5 + r6
            int r3 = r3.bottomMargin
            goto L28a
        L289:
            r5 = r2
        L28a:
            if (r17 == 0) goto L290
            int r2 = java.lang.Math.max(r4, r5)
        L290:
            java.util.ArrayList<android.view.View> r3 = r0.mTempViews
            r4 = 3
            r0.addCustomViewsWithGravity(r3, r4)
            java.util.ArrayList<android.view.View> r3 = r0.mTempViews
            int r3 = r3.size()
            r7 = r1
        L29d:
            if (r7 >= r3) goto L2b0
            java.util.ArrayList<android.view.View> r4 = r0.mTempViews
            java.lang.Object r4 = r4.get(r7)
            android.view.View r4 = (android.view.View) r4
            r12 = r22
            int r2 = r0.layoutChildLeft(r4, r2, r11, r12)
            int r7 = r7 + 1
            goto L29d
        L2b0:
            r12 = r22
            java.util.ArrayList<android.view.View> r3 = r0.mTempViews
            r4 = 5
            r0.addCustomViewsWithGravity(r3, r4)
            java.util.ArrayList<android.view.View> r3 = r0.mTempViews
            int r3 = r3.size()
            r7 = r1
        L2bf:
            if (r7 >= r3) goto L2d0
            java.util.ArrayList<android.view.View> r4 = r0.mTempViews
            java.lang.Object r4 = r4.get(r7)
            android.view.View r4 = (android.view.View) r4
            int r10 = r0.layoutChildRight(r4, r10, r11, r12)
            int r7 = r7 + 1
            goto L2bf
        L2d0:
            java.util.ArrayList<android.view.View> r3 = r0.mTempViews
            r4 = 1
            r0.addCustomViewsWithGravity(r3, r4)
            java.util.ArrayList<android.view.View> r3 = r0.mTempViews
            int r3 = r0.getViewListMeasuredWidth(r3, r11)
            int r4 = r16 - r18
            int r4 = r4 - r23
            int r4 = r4 / 2
            int r6 = r18 + r4
            int r4 = r3 / 2
            int r6 = r6 - r4
            int r3 = r3 + r6
            if (r6 >= r2) goto L2eb
            goto L2f2
        L2eb:
            if (r3 <= r10) goto L2f1
            int r3 = r3 - r10
            int r2 = r6 - r3
            goto L2f2
        L2f1:
            r2 = r6
        L2f2:
            java.util.ArrayList<android.view.View> r3 = r0.mTempViews
            int r3 = r3.size()
        L2f8:
            if (r1 >= r3) goto L309
            java.util.ArrayList<android.view.View> r4 = r0.mTempViews
            java.lang.Object r4 = r4.get(r1)
            android.view.View r4 = (android.view.View) r4
            int r2 = r0.layoutChildLeft(r4, r2, r11, r12)
            int r1 = r1 + 1
            goto L2f8
        L309:
            java.util.ArrayList<android.view.View> r1 = r0.mTempViews
            r1.clear()
            return
    }

    @Override
    protected void onMeasure(int r17, int r18) {
            r16 = this;
            r7 = r16
            int[] r8 = r7.mTempMargins
            boolean r0 = android.support.v7.widget.ViewUtils.isLayoutRtl(r16)
            r1 = 1
            r9 = 0
            if (r0 == 0) goto Lf
            r10 = r1
            r11 = r9
            goto L11
        Lf:
            r11 = r1
            r10 = r9
        L11:
            android.widget.ImageButton r0 = r7.mNavButtonView
            boolean r0 = r7.shouldLayout(r0)
            if (r0 == 0) goto L53
            android.widget.ImageButton r1 = r7.mNavButtonView
            r5 = 0
            int r6 = r7.mMaxButtonHeight
            r3 = 0
            r0 = r16
            r2 = r17
            r4 = r18
            r0.measureChildConstrained(r1, r2, r3, r4, r5, r6)
            android.widget.ImageButton r0 = r7.mNavButtonView
            int r0 = r0.getMeasuredWidth()
            android.widget.ImageButton r1 = r7.mNavButtonView
            int r1 = r7.getHorizontalMargins(r1)
            int r0 = r0 + r1
            android.widget.ImageButton r1 = r7.mNavButtonView
            int r1 = r1.getMeasuredHeight()
            android.widget.ImageButton r2 = r7.mNavButtonView
            int r2 = r7.getVerticalMargins(r2)
            int r1 = r1 + r2
            int r1 = java.lang.Math.max(r9, r1)
            android.widget.ImageButton r2 = r7.mNavButtonView
            int r2 = r2.getMeasuredState()
            int r2 = android.view.View.combineMeasuredStates(r9, r2)
            r12 = r1
            r13 = r2
            goto L56
        L53:
            r0 = r9
            r12 = r0
            r13 = r12
        L56:
            android.widget.ImageButton r1 = r7.mCollapseButtonView
            boolean r1 = r7.shouldLayout(r1)
            if (r1 == 0) goto L95
            android.widget.ImageButton r1 = r7.mCollapseButtonView
            r5 = 0
            int r6 = r7.mMaxButtonHeight
            r3 = 0
            r0 = r16
            r2 = r17
            r4 = r18
            r0.measureChildConstrained(r1, r2, r3, r4, r5, r6)
            android.widget.ImageButton r0 = r7.mCollapseButtonView
            int r0 = r0.getMeasuredWidth()
            android.widget.ImageButton r1 = r7.mCollapseButtonView
            int r1 = r7.getHorizontalMargins(r1)
            int r0 = r0 + r1
            android.widget.ImageButton r1 = r7.mCollapseButtonView
            int r1 = r1.getMeasuredHeight()
            android.widget.ImageButton r2 = r7.mCollapseButtonView
            int r2 = r7.getVerticalMargins(r2)
            int r1 = r1 + r2
            int r12 = java.lang.Math.max(r12, r1)
            android.widget.ImageButton r1 = r7.mCollapseButtonView
            int r1 = r1.getMeasuredState()
            int r13 = android.view.View.combineMeasuredStates(r13, r1)
        L95:
            int r1 = r16.getCurrentContentInsetStart()
            int r2 = java.lang.Math.max(r1, r0)
            int r14 = r9 + r2
            int r1 = r1 - r0
            int r0 = java.lang.Math.max(r9, r1)
            r8[r10] = r0
            android.support.v7.widget.ActionMenuView r0 = r7.mMenuView
            boolean r0 = r7.shouldLayout(r0)
            if (r0 == 0) goto Le6
            android.support.v7.widget.ActionMenuView r1 = r7.mMenuView
            r5 = 0
            int r6 = r7.mMaxButtonHeight
            r0 = r16
            r2 = r17
            r3 = r14
            r4 = r18
            r0.measureChildConstrained(r1, r2, r3, r4, r5, r6)
            android.support.v7.widget.ActionMenuView r0 = r7.mMenuView
            int r0 = r0.getMeasuredWidth()
            android.support.v7.widget.ActionMenuView r1 = r7.mMenuView
            int r1 = r7.getHorizontalMargins(r1)
            int r0 = r0 + r1
            android.support.v7.widget.ActionMenuView r1 = r7.mMenuView
            int r1 = r1.getMeasuredHeight()
            android.support.v7.widget.ActionMenuView r2 = r7.mMenuView
            int r2 = r7.getVerticalMargins(r2)
            int r1 = r1 + r2
            int r12 = java.lang.Math.max(r12, r1)
            android.support.v7.widget.ActionMenuView r1 = r7.mMenuView
            int r1 = r1.getMeasuredState()
            int r13 = android.view.View.combineMeasuredStates(r13, r1)
            goto Le7
        Le6:
            r0 = r9
        Le7:
            int r1 = r16.getCurrentContentInsetEnd()
            int r2 = java.lang.Math.max(r1, r0)
            int r14 = r14 + r2
            int r1 = r1 - r0
            int r0 = java.lang.Math.max(r9, r1)
            r8[r11] = r0
            android.view.View r0 = r7.mExpandedActionView
            boolean r0 = r7.shouldLayout(r0)
            if (r0 == 0) goto L12a
            android.view.View r1 = r7.mExpandedActionView
            r5 = 0
            r0 = r16
            r2 = r17
            r3 = r14
            r4 = r18
            r6 = r8
            int r0 = r0.measureChildCollapseMargins(r1, r2, r3, r4, r5, r6)
            int r14 = r14 + r0
            android.view.View r0 = r7.mExpandedActionView
            int r0 = r0.getMeasuredHeight()
            android.view.View r1 = r7.mExpandedActionView
            int r1 = r7.getVerticalMargins(r1)
            int r0 = r0 + r1
            int r12 = java.lang.Math.max(r12, r0)
            android.view.View r0 = r7.mExpandedActionView
            int r0 = r0.getMeasuredState()
            int r13 = android.view.View.combineMeasuredStates(r13, r0)
        L12a:
            android.widget.ImageView r0 = r7.mLogoView
            boolean r0 = r7.shouldLayout(r0)
            if (r0 == 0) goto L15d
            android.widget.ImageView r1 = r7.mLogoView
            r5 = 0
            r0 = r16
            r2 = r17
            r3 = r14
            r4 = r18
            r6 = r8
            int r0 = r0.measureChildCollapseMargins(r1, r2, r3, r4, r5, r6)
            int r14 = r14 + r0
            android.widget.ImageView r0 = r7.mLogoView
            int r0 = r0.getMeasuredHeight()
            android.widget.ImageView r1 = r7.mLogoView
            int r1 = r7.getVerticalMargins(r1)
            int r0 = r0 + r1
            int r12 = java.lang.Math.max(r12, r0)
            android.widget.ImageView r0 = r7.mLogoView
            int r0 = r0.getMeasuredState()
            int r13 = android.view.View.combineMeasuredStates(r13, r0)
        L15d:
            int r10 = r16.getChildCount()
            r11 = r9
        L162:
            if (r11 >= r10) goto L1a2
            android.view.View r15 = r7.getChildAt(r11)
            android.view.ViewGroup$LayoutParams r0 = r15.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r0 = (android.support.v7.widget.Toolbar.LayoutParams) r0
            int r0 = r0.mViewType
            if (r0 != 0) goto L19f
            boolean r0 = r7.shouldLayout(r15)
            if (r0 != 0) goto L179
            goto L19f
        L179:
            r5 = 0
            r0 = r16
            r1 = r15
            r2 = r17
            r3 = r14
            r4 = r18
            r6 = r8
            int r0 = r0.measureChildCollapseMargins(r1, r2, r3, r4, r5, r6)
            int r14 = r14 + r0
            int r0 = r15.getMeasuredHeight()
            int r1 = r7.getVerticalMargins(r15)
            int r0 = r0 + r1
            int r0 = java.lang.Math.max(r12, r0)
            int r1 = r15.getMeasuredState()
            int r1 = android.view.View.combineMeasuredStates(r13, r1)
            r12 = r0
            r13 = r1
        L19f:
            int r11 = r11 + 1
            goto L162
        L1a2:
            int r0 = r7.mTitleMarginTop
            int r1 = r7.mTitleMarginBottom
            int r10 = r0 + r1
            int r0 = r7.mTitleMarginStart
            int r1 = r7.mTitleMarginEnd
            int r11 = r0 + r1
            android.widget.TextView r0 = r7.mTitleTextView
            boolean r0 = r7.shouldLayout(r0)
            if (r0 == 0) goto L1ed
            android.widget.TextView r1 = r7.mTitleTextView
            int r3 = r14 + r11
            r0 = r16
            r2 = r17
            r4 = r18
            r5 = r10
            r6 = r8
            r0.measureChildCollapseMargins(r1, r2, r3, r4, r5, r6)
            android.widget.TextView r0 = r7.mTitleTextView
            int r0 = r0.getMeasuredWidth()
            android.widget.TextView r1 = r7.mTitleTextView
            int r1 = r7.getHorizontalMargins(r1)
            int r0 = r0 + r1
            android.widget.TextView r1 = r7.mTitleTextView
            int r1 = r1.getMeasuredHeight()
            android.widget.TextView r2 = r7.mTitleTextView
            int r2 = r7.getVerticalMargins(r2)
            int r1 = r1 + r2
            android.widget.TextView r2 = r7.mTitleTextView
            int r2 = r2.getMeasuredState()
            int r13 = android.view.View.combineMeasuredStates(r13, r2)
            r15 = r1
            r6 = r13
            r13 = r0
            goto L1f0
        L1ed:
            r15 = r9
            r6 = r13
            r13 = r15
        L1f0:
            android.widget.TextView r0 = r7.mSubtitleTextView
            boolean r0 = r7.shouldLayout(r0)
            if (r0 == 0) goto L227
            android.widget.TextView r1 = r7.mSubtitleTextView
            int r3 = r14 + r11
            int r5 = r15 + r10
            r0 = r16
            r2 = r17
            r4 = r18
            r10 = r6
            r6 = r8
            int r0 = r0.measureChildCollapseMargins(r1, r2, r3, r4, r5, r6)
            int r13 = java.lang.Math.max(r13, r0)
            android.widget.TextView r0 = r7.mSubtitleTextView
            int r0 = r0.getMeasuredHeight()
            android.widget.TextView r1 = r7.mSubtitleTextView
            int r1 = r7.getVerticalMargins(r1)
            int r0 = r0 + r1
            int r15 = r15 + r0
            android.widget.TextView r0 = r7.mSubtitleTextView
            int r0 = r0.getMeasuredState()
            int r6 = android.view.View.combineMeasuredStates(r10, r0)
            goto L228
        L227:
            r10 = r6
        L228:
            int r14 = r14 + r13
            int r0 = java.lang.Math.max(r12, r15)
            int r1 = r16.getPaddingLeft()
            int r2 = r16.getPaddingRight()
            int r1 = r1 + r2
            int r14 = r14 + r1
            int r1 = r16.getPaddingTop()
            int r2 = r16.getPaddingBottom()
            int r1 = r1 + r2
            int r0 = r0 + r1
            int r1 = r16.getSuggestedMinimumWidth()
            int r1 = java.lang.Math.max(r14, r1)
            r2 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r2 = r2 & r6
            r3 = r17
            int r1 = android.view.View.resolveSizeAndState(r1, r3, r2)
            int r2 = r16.getSuggestedMinimumHeight()
            int r0 = java.lang.Math.max(r0, r2)
            int r2 = r6 << 16
            r3 = r18
            int r0 = android.view.View.resolveSizeAndState(r0, r3, r2)
            boolean r2 = r16.shouldCollapse()
            if (r2 == 0) goto L269
            goto L26a
        L269:
            r9 = r0
        L26a:
            r7.setMeasuredDimension(r1, r9)
            return
    }

    @Override
    protected void onRestoreInstanceState(android.os.Parcelable r3) {
            r2 = this;
            boolean r0 = r3 instanceof android.support.v7.widget.Toolbar.SavedState
            if (r0 != 0) goto L8
            super.onRestoreInstanceState(r3)
            return
        L8:
            android.support.v7.widget.Toolbar$SavedState r3 = (android.support.v7.widget.Toolbar.SavedState) r3
            android.os.Parcelable r0 = r3.getSuperState()
            super.onRestoreInstanceState(r0)
            android.support.v7.widget.ActionMenuView r0 = r2.mMenuView
            if (r0 == 0) goto L1a
            android.support.v7.view.menu.MenuBuilder r0 = r0.peekMenu()
            goto L1b
        L1a:
            r0 = 0
        L1b:
            int r1 = r3.expandedMenuItemId
            if (r1 == 0) goto L30
            android.support.v7.widget.Toolbar$ExpandedActionViewMenuPresenter r1 = r2.mExpandedMenuPresenter
            if (r1 == 0) goto L30
            if (r0 == 0) goto L30
            int r1 = r3.expandedMenuItemId
            android.view.MenuItem r0 = r0.findItem(r1)
            if (r0 == 0) goto L30
            r0.expandActionView()
        L30:
            boolean r3 = r3.isOverflowOpen
            if (r3 == 0) goto L37
            r2.postShowOverflowMenu()
        L37:
            return
    }

    @Override
    public void onRtlPropertiesChanged(int r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L9
            super.onRtlPropertiesChanged(r3)
        L9:
            r2.ensureContentInsets()
            android.support.v7.widget.RtlSpacingHelper r0 = r2.mContentInsets
            r1 = 1
            if (r3 != r1) goto L12
            goto L13
        L12:
            r1 = 0
        L13:
            r0.setDirection(r1)
            return
    }

    @Override
    protected android.os.Parcelable onSaveInstanceState() {
            r2 = this;
            android.support.v7.widget.Toolbar$SavedState r0 = new android.support.v7.widget.Toolbar$SavedState
            android.os.Parcelable r1 = super.onSaveInstanceState()
            r0.<init>(r1)
            android.support.v7.widget.Toolbar$ExpandedActionViewMenuPresenter r1 = r2.mExpandedMenuPresenter
            if (r1 == 0) goto L1b
            android.support.v7.view.menu.MenuItemImpl r1 = r1.mCurrentExpandedItem
            if (r1 == 0) goto L1b
            android.support.v7.widget.Toolbar$ExpandedActionViewMenuPresenter r1 = r2.mExpandedMenuPresenter
            android.support.v7.view.menu.MenuItemImpl r1 = r1.mCurrentExpandedItem
            int r1 = r1.getItemId()
            r0.expandedMenuItemId = r1
        L1b:
            boolean r1 = r2.isOverflowMenuShowing()
            r0.isOverflowOpen = r1
            return r0
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r5) {
            r4 = this;
            int r0 = r5.getActionMasked()
            r1 = 0
            if (r0 != 0) goto L9
            r4.mEatingTouch = r1
        L9:
            boolean r2 = r4.mEatingTouch
            r3 = 1
            if (r2 != 0) goto L18
            boolean r5 = super.onTouchEvent(r5)
            if (r0 != 0) goto L18
            if (r5 != 0) goto L18
            r4.mEatingTouch = r3
        L18:
            if (r0 == r3) goto L1d
            r5 = 3
            if (r0 != r5) goto L1f
        L1d:
            r4.mEatingTouch = r1
        L1f:
            return r3
    }

    void removeChildrenForExpandedActionView() {
            r4 = this;
            int r0 = r4.getChildCount()
            int r0 = r0 + (-1)
        L6:
            if (r0 < 0) goto L26
            android.view.View r1 = r4.getChildAt(r0)
            android.view.ViewGroup$LayoutParams r2 = r1.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r2 = (android.support.v7.widget.Toolbar.LayoutParams) r2
            int r2 = r2.mViewType
            r3 = 2
            if (r2 == r3) goto L23
            android.support.v7.widget.ActionMenuView r2 = r4.mMenuView
            if (r1 == r2) goto L23
            r4.removeViewAt(r0)
            java.util.ArrayList<android.view.View> r2 = r4.mHiddenViews
            r2.add(r1)
        L23:
            int r0 = r0 + (-1)
            goto L6
        L26:
            return
    }

    public void setCollapsible(boolean r1) {
            r0 = this;
            r0.mCollapsible = r1
            r0.requestLayout()
            return
    }

    public void setContentInsetEndWithActions(int r2) {
            r1 = this;
            if (r2 >= 0) goto L4
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
        L4:
            int r0 = r1.mContentInsetEndWithActions
            if (r2 == r0) goto L13
            r1.mContentInsetEndWithActions = r2
            android.graphics.drawable.Drawable r2 = r1.getNavigationIcon()
            if (r2 == 0) goto L13
            r1.requestLayout()
        L13:
            return
    }

    public void setContentInsetStartWithNavigation(int r2) {
            r1 = this;
            if (r2 >= 0) goto L4
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
        L4:
            int r0 = r1.mContentInsetStartWithNavigation
            if (r2 == r0) goto L13
            r1.mContentInsetStartWithNavigation = r2
            android.graphics.drawable.Drawable r2 = r1.getNavigationIcon()
            if (r2 == 0) goto L13
            r1.requestLayout()
        L13:
            return
    }

    public void setContentInsetsAbsolute(int r2, int r3) {
            r1 = this;
            r1.ensureContentInsets()
            android.support.v7.widget.RtlSpacingHelper r0 = r1.mContentInsets
            r0.setAbsolute(r2, r3)
            return
    }

    public void setContentInsetsRelative(int r2, int r3) {
            r1 = this;
            r1.ensureContentInsets()
            android.support.v7.widget.RtlSpacingHelper r0 = r1.mContentInsets
            r0.setRelative(r2, r3)
            return
    }

    public void setLogo(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            android.graphics.drawable.Drawable r2 = android.support.v7.content.res.AppCompatResources.getDrawable(r0, r2)
            r1.setLogo(r2)
            return
    }

    public void setLogo(android.graphics.drawable.Drawable r3) {
            r2 = this;
            if (r3 == 0) goto L14
            r2.ensureLogoView()
            android.widget.ImageView r0 = r2.mLogoView
            boolean r0 = r2.isChildOrHidden(r0)
            if (r0 != 0) goto L2a
            android.widget.ImageView r0 = r2.mLogoView
            r1 = 1
            r2.addSystemView(r0, r1)
            goto L2a
        L14:
            android.widget.ImageView r0 = r2.mLogoView
            if (r0 == 0) goto L2a
            boolean r0 = r2.isChildOrHidden(r0)
            if (r0 == 0) goto L2a
            android.widget.ImageView r0 = r2.mLogoView
            r2.removeView(r0)
            java.util.ArrayList<android.view.View> r0 = r2.mHiddenViews
            android.widget.ImageView r1 = r2.mLogoView
            r0.remove(r1)
        L2a:
            android.widget.ImageView r0 = r2.mLogoView
            if (r0 == 0) goto L31
            r0.setImageDrawable(r3)
        L31:
            return
    }

    public void setLogoDescription(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            java.lang.CharSequence r2 = r0.getText(r2)
            r1.setLogoDescription(r2)
            return
    }

    public void setLogoDescription(java.lang.CharSequence r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L9
            r1.ensureLogoView()
        L9:
            android.widget.ImageView r0 = r1.mLogoView
            if (r0 == 0) goto L10
            r0.setContentDescription(r2)
        L10:
            return
    }

    public void setMenu(android.support.v7.view.menu.MenuBuilder r4, android.support.v7.widget.ActionMenuPresenter r5) {
            r3 = this;
            if (r4 != 0) goto L7
            android.support.v7.widget.ActionMenuView r0 = r3.mMenuView
            if (r0 != 0) goto L7
            return
        L7:
            r3.ensureMenuView()
            android.support.v7.widget.ActionMenuView r0 = r3.mMenuView
            android.support.v7.view.menu.MenuBuilder r0 = r0.peekMenu()
            if (r0 != r4) goto L13
            return
        L13:
            if (r0 == 0) goto L1f
            android.support.v7.widget.ActionMenuPresenter r1 = r3.mOuterActionMenuPresenter
            r0.removeMenuPresenter(r1)
            android.support.v7.widget.Toolbar$ExpandedActionViewMenuPresenter r1 = r3.mExpandedMenuPresenter
            r0.removeMenuPresenter(r1)
        L1f:
            android.support.v7.widget.Toolbar$ExpandedActionViewMenuPresenter r0 = r3.mExpandedMenuPresenter
            if (r0 != 0) goto L2a
            android.support.v7.widget.Toolbar$ExpandedActionViewMenuPresenter r0 = new android.support.v7.widget.Toolbar$ExpandedActionViewMenuPresenter
            r0.<init>(r3)
            r3.mExpandedMenuPresenter = r0
        L2a:
            r0 = 1
            r5.setExpandedActionViewsExclusive(r0)
            if (r4 == 0) goto L3d
            android.content.Context r0 = r3.mPopupContext
            r4.addMenuPresenter(r5, r0)
            android.support.v7.widget.Toolbar$ExpandedActionViewMenuPresenter r0 = r3.mExpandedMenuPresenter
            android.content.Context r1 = r3.mPopupContext
            r4.addMenuPresenter(r0, r1)
            goto L52
        L3d:
            android.content.Context r4 = r3.mPopupContext
            r1 = 0
            r5.initForMenu(r4, r1)
            android.support.v7.widget.Toolbar$ExpandedActionViewMenuPresenter r4 = r3.mExpandedMenuPresenter
            android.content.Context r2 = r3.mPopupContext
            r4.initForMenu(r2, r1)
            r5.updateMenuView(r0)
            android.support.v7.widget.Toolbar$ExpandedActionViewMenuPresenter r4 = r3.mExpandedMenuPresenter
            r4.updateMenuView(r0)
        L52:
            android.support.v7.widget.ActionMenuView r4 = r3.mMenuView
            int r0 = r3.mPopupTheme
            r4.setPopupTheme(r0)
            android.support.v7.widget.ActionMenuView r4 = r3.mMenuView
            r4.setPresenter(r5)
            r3.mOuterActionMenuPresenter = r5
            return
    }

    public void setMenuCallbacks(android.support.v7.view.menu.MenuPresenter.Callback r2, android.support.v7.view.menu.MenuBuilder.Callback r3) {
            r1 = this;
            r1.mActionMenuPresenterCallback = r2
            r1.mMenuBuilderCallback = r3
            android.support.v7.widget.ActionMenuView r0 = r1.mMenuView
            if (r0 == 0) goto Lb
            r0.setMenuCallbacks(r2, r3)
        Lb:
            return
    }

    public void setNavigationContentDescription(int r2) {
            r1 = this;
            if (r2 == 0) goto Lb
            android.content.Context r0 = r1.getContext()
            java.lang.CharSequence r2 = r0.getText(r2)
            goto Lc
        Lb:
            r2 = 0
        Lc:
            r1.setNavigationContentDescription(r2)
            return
    }

    public void setNavigationContentDescription(java.lang.CharSequence r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L9
            r1.ensureNavButtonView()
        L9:
            android.widget.ImageButton r0 = r1.mNavButtonView
            if (r0 == 0) goto L10
            r0.setContentDescription(r2)
        L10:
            return
    }

    public void setNavigationIcon(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            android.graphics.drawable.Drawable r2 = android.support.v7.content.res.AppCompatResources.getDrawable(r0, r2)
            r1.setNavigationIcon(r2)
            return
    }

    public void setNavigationIcon(android.graphics.drawable.Drawable r3) {
            r2 = this;
            if (r3 == 0) goto L14
            r2.ensureNavButtonView()
            android.widget.ImageButton r0 = r2.mNavButtonView
            boolean r0 = r2.isChildOrHidden(r0)
            if (r0 != 0) goto L2a
            android.widget.ImageButton r0 = r2.mNavButtonView
            r1 = 1
            r2.addSystemView(r0, r1)
            goto L2a
        L14:
            android.widget.ImageButton r0 = r2.mNavButtonView
            if (r0 == 0) goto L2a
            boolean r0 = r2.isChildOrHidden(r0)
            if (r0 == 0) goto L2a
            android.widget.ImageButton r0 = r2.mNavButtonView
            r2.removeView(r0)
            java.util.ArrayList<android.view.View> r0 = r2.mHiddenViews
            android.widget.ImageButton r1 = r2.mNavButtonView
            r0.remove(r1)
        L2a:
            android.widget.ImageButton r0 = r2.mNavButtonView
            if (r0 == 0) goto L31
            r0.setImageDrawable(r3)
        L31:
            return
    }

    public void setNavigationOnClickListener(android.view.View.OnClickListener r2) {
            r1 = this;
            r1.ensureNavButtonView()
            android.widget.ImageButton r0 = r1.mNavButtonView
            r0.setOnClickListener(r2)
            return
    }

    public void setOnMenuItemClickListener(android.support.v7.widget.Toolbar.OnMenuItemClickListener r1) {
            r0 = this;
            r0.mOnMenuItemClickListener = r1
            return
    }

    public void setOverflowIcon(android.graphics.drawable.Drawable r2) {
            r1 = this;
            r1.ensureMenu()
            android.support.v7.widget.ActionMenuView r0 = r1.mMenuView
            r0.setOverflowIcon(r2)
            return
    }

    public void setPopupTheme(int r3) {
            r2 = this;
            int r0 = r2.mPopupTheme
            if (r0 == r3) goto L1a
            r2.mPopupTheme = r3
            if (r3 != 0) goto Lf
            android.content.Context r3 = r2.getContext()
            r2.mPopupContext = r3
            goto L1a
        Lf:
            android.view.ContextThemeWrapper r0 = new android.view.ContextThemeWrapper
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1, r3)
            r2.mPopupContext = r0
        L1a:
            return
    }

    public void setSubtitle(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            java.lang.CharSequence r2 = r0.getText(r2)
            r1.setSubtitle(r2)
            return
    }

    public void setSubtitle(java.lang.CharSequence r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L40
            android.widget.TextView r0 = r3.mSubtitleTextView
            if (r0 != 0) goto L31
            android.content.Context r0 = r3.getContext()
            android.support.v7.widget.AppCompatTextView r1 = new android.support.v7.widget.AppCompatTextView
            r1.<init>(r0)
            r3.mSubtitleTextView = r1
            r1.setSingleLine()
            android.widget.TextView r1 = r3.mSubtitleTextView
            android.text.TextUtils$TruncateAt r2 = android.text.TextUtils.TruncateAt.END
            r1.setEllipsize(r2)
            int r1 = r3.mSubtitleTextAppearance
            if (r1 == 0) goto L28
            android.widget.TextView r2 = r3.mSubtitleTextView
            r2.setTextAppearance(r0, r1)
        L28:
            int r0 = r3.mSubtitleTextColor
            if (r0 == 0) goto L31
            android.widget.TextView r1 = r3.mSubtitleTextView
            r1.setTextColor(r0)
        L31:
            android.widget.TextView r0 = r3.mSubtitleTextView
            boolean r0 = r3.isChildOrHidden(r0)
            if (r0 != 0) goto L56
            android.widget.TextView r0 = r3.mSubtitleTextView
            r1 = 1
            r3.addSystemView(r0, r1)
            goto L56
        L40:
            android.widget.TextView r0 = r3.mSubtitleTextView
            if (r0 == 0) goto L56
            boolean r0 = r3.isChildOrHidden(r0)
            if (r0 == 0) goto L56
            android.widget.TextView r0 = r3.mSubtitleTextView
            r3.removeView(r0)
            java.util.ArrayList<android.view.View> r0 = r3.mHiddenViews
            android.widget.TextView r1 = r3.mSubtitleTextView
            r0.remove(r1)
        L56:
            android.widget.TextView r0 = r3.mSubtitleTextView
            if (r0 == 0) goto L5d
            r0.setText(r4)
        L5d:
            r3.mSubtitleText = r4
            return
    }

    public void setSubtitleTextAppearance(android.content.Context r2, int r3) {
            r1 = this;
            r1.mSubtitleTextAppearance = r3
            android.widget.TextView r0 = r1.mSubtitleTextView
            if (r0 == 0) goto L9
            r0.setTextAppearance(r2, r3)
        L9:
            return
    }

    public void setSubtitleTextColor(int r2) {
            r1 = this;
            r1.mSubtitleTextColor = r2
            android.widget.TextView r0 = r1.mSubtitleTextView
            if (r0 == 0) goto L9
            r0.setTextColor(r2)
        L9:
            return
    }

    public void setTitle(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            java.lang.CharSequence r2 = r0.getText(r2)
            r1.setTitle(r2)
            return
    }

    public void setTitle(java.lang.CharSequence r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L40
            android.widget.TextView r0 = r3.mTitleTextView
            if (r0 != 0) goto L31
            android.content.Context r0 = r3.getContext()
            android.support.v7.widget.AppCompatTextView r1 = new android.support.v7.widget.AppCompatTextView
            r1.<init>(r0)
            r3.mTitleTextView = r1
            r1.setSingleLine()
            android.widget.TextView r1 = r3.mTitleTextView
            android.text.TextUtils$TruncateAt r2 = android.text.TextUtils.TruncateAt.END
            r1.setEllipsize(r2)
            int r1 = r3.mTitleTextAppearance
            if (r1 == 0) goto L28
            android.widget.TextView r2 = r3.mTitleTextView
            r2.setTextAppearance(r0, r1)
        L28:
            int r0 = r3.mTitleTextColor
            if (r0 == 0) goto L31
            android.widget.TextView r1 = r3.mTitleTextView
            r1.setTextColor(r0)
        L31:
            android.widget.TextView r0 = r3.mTitleTextView
            boolean r0 = r3.isChildOrHidden(r0)
            if (r0 != 0) goto L56
            android.widget.TextView r0 = r3.mTitleTextView
            r1 = 1
            r3.addSystemView(r0, r1)
            goto L56
        L40:
            android.widget.TextView r0 = r3.mTitleTextView
            if (r0 == 0) goto L56
            boolean r0 = r3.isChildOrHidden(r0)
            if (r0 == 0) goto L56
            android.widget.TextView r0 = r3.mTitleTextView
            r3.removeView(r0)
            java.util.ArrayList<android.view.View> r0 = r3.mHiddenViews
            android.widget.TextView r1 = r3.mTitleTextView
            r0.remove(r1)
        L56:
            android.widget.TextView r0 = r3.mTitleTextView
            if (r0 == 0) goto L5d
            r0.setText(r4)
        L5d:
            r3.mTitleText = r4
            return
    }

    public void setTitleMargin(int r1, int r2, int r3, int r4) {
            r0 = this;
            r0.mTitleMarginStart = r1
            r0.mTitleMarginTop = r2
            r0.mTitleMarginEnd = r3
            r0.mTitleMarginBottom = r4
            r0.requestLayout()
            return
    }

    public void setTitleMarginBottom(int r1) {
            r0 = this;
            r0.mTitleMarginBottom = r1
            r0.requestLayout()
            return
    }

    public void setTitleMarginEnd(int r1) {
            r0 = this;
            r0.mTitleMarginEnd = r1
            r0.requestLayout()
            return
    }

    public void setTitleMarginStart(int r1) {
            r0 = this;
            r0.mTitleMarginStart = r1
            r0.requestLayout()
            return
    }

    public void setTitleMarginTop(int r1) {
            r0 = this;
            r0.mTitleMarginTop = r1
            r0.requestLayout()
            return
    }

    public void setTitleTextAppearance(android.content.Context r2, int r3) {
            r1 = this;
            r1.mTitleTextAppearance = r3
            android.widget.TextView r0 = r1.mTitleTextView
            if (r0 == 0) goto L9
            r0.setTextAppearance(r2, r3)
        L9:
            return
    }

    public void setTitleTextColor(int r2) {
            r1 = this;
            r1.mTitleTextColor = r2
            android.widget.TextView r0 = r1.mTitleTextView
            if (r0 == 0) goto L9
            r0.setTextColor(r2)
        L9:
            return
    }

    public boolean showOverflowMenu() {
            r1 = this;
            android.support.v7.widget.ActionMenuView r0 = r1.mMenuView
            if (r0 == 0) goto Lc
            boolean r0 = r0.showOverflowMenu()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }
}
