package android.support.v7.app;

import android.R;
import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.content.res.Configuration;
import android.content.res.TypedArray;
import android.graphics.drawable.Drawable;
import android.support.annotation.RestrictTo;
import android.support.v4.app.FragmentActivity;
import android.support.v4.app.FragmentTransaction;
import android.support.v4.view.ViewCompat;
import android.support.v4.view.ViewPropertyAnimatorCompat;
import android.support.v4.view.ViewPropertyAnimatorListener;
import android.support.v4.view.ViewPropertyAnimatorUpdateListener;
import android.support.v7.app.ActionBar;
import android.support.v7.content.res.AppCompatResources;
import android.support.v7.view.ActionBarPolicy;
import android.support.v7.view.ActionMode;
import android.support.v7.view.SupportMenuInflater;
import android.support.v7.view.ViewPropertyAnimatorCompatSet;
import android.support.v7.view.menu.MenuBuilder;
import android.support.v7.view.menu.MenuPopupHelper;
import android.support.v7.view.menu.SubMenuBuilder;
import android.support.v7.widget.ActionBarContainer;
import android.support.v7.widget.ActionBarContextView;
import android.support.v7.widget.ActionBarOverlayLayout;
import android.support.v7.widget.DecorToolbar;
import android.support.v7.widget.ScrollingTabContainerView;
import android.support.v7.widget.Toolbar;
import android.util.TypedValue;
import android.view.ContextThemeWrapper;
import android.view.KeyCharacterMap;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.AccelerateInterpolator;
import android.view.animation.DecelerateInterpolator;
import android.view.animation.Interpolator;
import android.widget.SpinnerAdapter;
import java.lang.ref.WeakReference;
import java.util.ArrayList;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class WindowDecorActionBar extends ActionBar implements ActionBarOverlayLayout.ActionBarVisibilityCallback {
    static final boolean $assertionsDisabled = false;
    private static final long FADE_IN_DURATION_MS = 200;
    private static final long FADE_OUT_DURATION_MS = 100;
    private static final int INVALID_POSITION = -1;
    private static final String TAG = "WindowDecorActionBar";
    private static final Interpolator sHideInterpolator = null;
    private static final Interpolator sShowInterpolator = null;
    ActionModeImpl mActionMode;
    private Activity mActivity;
    ActionBarContainer mContainerView;
    boolean mContentAnimations;
    View mContentView;
    Context mContext;
    ActionBarContextView mContextView;
    private int mCurWindowVisibility;
    ViewPropertyAnimatorCompatSet mCurrentShowAnim;
    DecorToolbar mDecorToolbar;
    ActionMode mDeferredDestroyActionMode;
    ActionMode.Callback mDeferredModeDestroyCallback;
    private Dialog mDialog;
    private boolean mDisplayHomeAsUpSet;
    private boolean mHasEmbeddedTabs;
    boolean mHiddenByApp;
    boolean mHiddenBySystem;
    final ViewPropertyAnimatorListener mHideListener;
    boolean mHideOnContentScroll;
    private boolean mLastMenuVisibility;
    private ArrayList<ActionBar.OnMenuVisibilityListener> mMenuVisibilityListeners;
    private boolean mNowShowing;
    ActionBarOverlayLayout mOverlayLayout;
    private int mSavedTabPosition;
    private TabImpl mSelectedTab;
    private boolean mShowHideAnimationEnabled;
    final ViewPropertyAnimatorListener mShowListener;
    private boolean mShowingForMode;
    ScrollingTabContainerView mTabScrollView;
    private ArrayList<TabImpl> mTabs;
    private Context mThemedContext;
    final ViewPropertyAnimatorUpdateListener mUpdateListener;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public class ActionModeImpl extends ActionMode implements MenuBuilder.Callback {
        private final Context mActionModeContext;
        private ActionMode.Callback mCallback;
        private WeakReference<View> mCustomView;
        private final MenuBuilder mMenu;
        final WindowDecorActionBar this$0;

        public void onCloseMenu(MenuBuilder r1, boolean r2) {
        }

        public void onCloseSubMenu(SubMenuBuilder r1) {
        }

        public ActionModeImpl(WindowDecorActionBar r1, Context r2, ActionMode.Callback r3) {
            this.this$0 = r1;
            this.mActionModeContext = r2;
            this.mCallback = r3;
            this.mMenu = new MenuBuilder(r2).setDefaultShowAsAction(1);
            this.mMenu.setCallback(this);
        }

        @Override
        public MenuInflater getMenuInflater() {
            return new SupportMenuInflater(this.mActionModeContext);
        }

        @Override
        public Menu getMenu() {
            return this.mMenu;
        }

        @Override
        public void finish() {
            if (this.this$0.mActionMode == this) goto L6;
            return;
        L6:
            if (WindowDecorActionBar.checkShowingFlags(this.this$0.mHiddenByApp, this.this$0.mHiddenBySystem, false) == true) goto L8;
            WindowDecorActionBar r0 = this.this$0;
            r0.mDeferredDestroyActionMode = this;
            r0.mDeferredModeDestroyCallback = this.mCallback;
        L9:
            this.mCallback = null;
            this.this$0.animateToMode(false);
            this.this$0.mContextView.closeMode();
            this.this$0.mDecorToolbar.getViewGroup().sendAccessibilityEvent(32);
            this.this$0.mOverlayLayout.setHideOnContentScrollEnabled(this.this$0.mHideOnContentScroll);
            this.this$0.mActionMode = null;
            return;
        L8:
            this.mCallback.onDestroyActionMode(this);
            goto L9
        }

        @Override
        public void invalidate() {
            if (this.this$0.mActionMode == this) goto L5;
            return;
        L5:
            this.mMenu.stopDispatchingItemsChanged();
            this.mCallback.onPrepareActionMode(this, this.mMenu);     // Catch: Throwable -> L9
            this.mMenu.startDispatchingItemsChanged();
            return;
        L9:
            th = move-exception;
            this.mMenu.startDispatchingItemsChanged();
            throw th;
        }

        public boolean dispatchOnCreate() {
            this.mMenu.stopDispatchingItemsChanged();
            boolean r0 = this.mCallback.onCreateActionMode(this, this.mMenu);     // Catch: Throwable -> L6
            this.mMenu.startDispatchingItemsChanged();
            return r0;
        L6:
            th = move-exception;
            this.mMenu.startDispatchingItemsChanged();
            throw th;
        }

        @Override
        public void setCustomView(View r2) {
            this.this$0.mContextView.setCustomView(r2);
            this.mCustomView = new WeakReference(r2);
        }

        @Override
        public void setSubtitle(CharSequence r2) {
            this.this$0.mContextView.setSubtitle(r2);
        }

        @Override
        public void setTitle(CharSequence r2) {
            this.this$0.mContextView.setTitle(r2);
        }

        @Override
        public void setTitle(int r2) {
            setTitle(this.this$0.mContext.getResources().getString(r2));
        }

        @Override
        public void setSubtitle(int r2) {
            setSubtitle(this.this$0.mContext.getResources().getString(r2));
        }

        @Override
        public CharSequence getTitle() {
            return this.this$0.mContextView.getTitle();
        }

        @Override
        public CharSequence getSubtitle() {
            return this.this$0.mContextView.getSubtitle();
        }

        @Override
        public void setTitleOptionalHint(boolean r2) {
            super.setTitleOptionalHint(r2);
            this.this$0.mContextView.setTitleOptional(r2);
        }

        @Override
        public boolean isTitleOptional() {
            return this.this$0.mContextView.isTitleOptional();
        }

        @Override
        public View getCustomView() {
            WeakReference<View> r0 = this.mCustomView;
            if (r0 != null) goto L7;
            return null;
        L7:
            return r0.get();
        }

        @Override
        public boolean onMenuItemSelected(MenuBuilder r1, MenuItem r2) {
            ActionMode.Callback r12 = this.mCallback;
            if (r12 != null) goto L5;
            return false;
        L5:
            return r12.onActionItemClicked(this, r2);
        }

        public boolean onSubMenuSelected(SubMenuBuilder r4) {
            if (this.mCallback != null) goto L7;
            return false;
        L7:
            if (r4.hasVisibleItems() == true) goto L9;
            return true;
        L9:
            new MenuPopupHelper(this.this$0.getThemedContext(), r4).show();
            return true;
        }

        @Override
        public void onMenuModeChange(MenuBuilder r1) {
            if (this.mCallback != null) goto L5;
            return;
        L5:
            invalidate();
            this.this$0.mContextView.showOverflowMenu();
        }
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public class TabImpl extends ActionBar.Tab {
        private ActionBar.TabListener mCallback;
        private CharSequence mContentDesc;
        private View mCustomView;
        private Drawable mIcon;
        private int mPosition;
        private Object mTag;
        private CharSequence mText;
        final WindowDecorActionBar this$0;

        public TabImpl(WindowDecorActionBar r1) {
            this.this$0 = r1;
            this.mPosition = -1;
        }

        @Override
        public Object getTag() {
            return this.mTag;
        }

        @Override
        public ActionBar.Tab setTag(Object r1) {
            this.mTag = r1;
            return this;
        }

        public ActionBar.TabListener getCallback() {
            return this.mCallback;
        }

        @Override
        public ActionBar.Tab setTabListener(ActionBar.TabListener r1) {
            this.mCallback = r1;
            return this;
        }

        @Override
        public View getCustomView() {
            return this.mCustomView;
        }

        @Override
        public ActionBar.Tab setCustomView(View r2) {
            this.mCustomView = r2;
            if (this.mPosition < 0) goto L5;
            this.this$0.mTabScrollView.updateTab(this.mPosition);
        L5:
            return this;
        }

        @Override
        public ActionBar.Tab setCustomView(int r3) {
            return setCustomView(LayoutInflater.from(this.this$0.getThemedContext()).inflate(r3, null));
        }

        @Override
        public Drawable getIcon() {
            return this.mIcon;
        }

        @Override
        public int getPosition() {
            return this.mPosition;
        }

        public void setPosition(int r1) {
            this.mPosition = r1;
        }

        @Override
        public CharSequence getText() {
            return this.mText;
        }

        @Override
        public ActionBar.Tab setIcon(Drawable r2) {
            this.mIcon = r2;
            if (this.mPosition < 0) goto L5;
            this.this$0.mTabScrollView.updateTab(this.mPosition);
        L5:
            return this;
        }

        @Override
        public ActionBar.Tab setIcon(int r2) {
            return setIcon(AppCompatResources.getDrawable(this.this$0.mContext, r2));
        }

        @Override
        public ActionBar.Tab setText(CharSequence r2) {
            this.mText = r2;
            if (this.mPosition < 0) goto L5;
            this.this$0.mTabScrollView.updateTab(this.mPosition);
        L5:
            return this;
        }

        @Override
        public ActionBar.Tab setText(int r2) {
            return setText(this.this$0.mContext.getResources().getText(r2));
        }

        @Override
        public void select() {
            this.this$0.selectTab(this);
        }

        @Override
        public ActionBar.Tab setContentDescription(int r2) {
            return setContentDescription(this.this$0.mContext.getResources().getText(r2));
        }

        @Override
        public ActionBar.Tab setContentDescription(CharSequence r2) {
            this.mContentDesc = r2;
            if (this.mPosition < 0) goto L5;
            this.this$0.mTabScrollView.updateTab(this.mPosition);
        L5:
            return this;
        }

        @Override
        public CharSequence getContentDescription() {
            return this.mContentDesc;
        }
    }

    static boolean checkShowingFlags(boolean r1, boolean r2, boolean r3) {
        if (r3 == false) goto L5;
        return true;
    L5:
        if (r1 == true) goto L9;
        if (r2 == true) goto L11;
        return true;
    L11:
        return false;
    L9:
        return false;
    }

    @Override
    public void onContentScrollStopped() {
    }

    @Override
    public void setSplitBackgroundDrawable(Drawable r1) {
    }

    static {
        sHideInterpolator = new AccelerateInterpolator();
        sShowInterpolator = new DecelerateInterpolator();
    }

    public WindowDecorActionBar(Activity r2, boolean r3) {
        this.mTabs = new ArrayList();
        this.mSavedTabPosition = -1;
        this.mMenuVisibilityListeners = new ArrayList();
        this.mCurWindowVisibility = 0;
        this.mContentAnimations = true;
        this.mNowShowing = true;
        this.mHideListener = new 1(this);
        this.mShowListener = new 2(this);
        this.mUpdateListener = new 3(this);
        this.mActivity = r2;
        View r22 = r2.getWindow().getDecorView();
        init(r22);
        if (r3 == true) goto L6;
        this.mContentView = r22.findViewById(R.id.content);
        return;
    }

    public WindowDecorActionBar(Dialog r2) {
        this.mTabs = new ArrayList();
        this.mSavedTabPosition = -1;
        this.mMenuVisibilityListeners = new ArrayList();
        this.mCurWindowVisibility = 0;
        this.mContentAnimations = true;
        this.mNowShowing = true;
        this.mHideListener = new 1(this);
        this.mShowListener = new 2(this);
        this.mUpdateListener = new 3(this);
        this.mDialog = r2;
        init(r2.getWindow().getDecorView());
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public WindowDecorActionBar(View r2) {
        this.mTabs = new ArrayList();
        this.mSavedTabPosition = -1;
        this.mMenuVisibilityListeners = new ArrayList();
        this.mCurWindowVisibility = 0;
        this.mContentAnimations = true;
        this.mNowShowing = true;
        this.mHideListener = new 1(this);
        this.mShowListener = new 2(this);
        this.mUpdateListener = new 3(this);
        init(r2);
    }

    private void init(View r6) {
        this.mOverlayLayout = (ActionBarOverlayLayout) r6.findViewById(android.support.v7.appcompat.R.id.decor_content_parent);
        ActionBarOverlayLayout r0 = this.mOverlayLayout;
        if (r0 == null) goto L5;
        r0.setActionBarVisibilityCallback(this);
    L5:
        this.mDecorToolbar = getDecorToolbar(r6.findViewById(android.support.v7.appcompat.R.id.action_bar));
        this.mContextView = (ActionBarContextView) r6.findViewById(android.support.v7.appcompat.R.id.action_context_bar);
        this.mContainerView = (ActionBarContainer) r6.findViewById(android.support.v7.appcompat.R.id.action_bar_container);
        DecorToolbar r62 = this.mDecorToolbar;
        if (r62 == null) goto L32;
        if (this.mContextView == null) goto L32;
        if (this.mContainerView == null) goto L32;
        this.mContext = r62.getContext();
        if ((this.mDecorToolbar.getDisplayOptions() & 4) == 0) goto L14;
        boolean r63 = true;
    L15:
        if (r63 == false) goto L17;
        this.mDisplayHomeAsUpSet = true;
    L17:
        ActionBarPolicy r2 = ActionBarPolicy.get(this.mContext);
        if (r2.enableHomeButtonByDefault() == true) goto L22;
        if (r63 == true) goto L22;
        boolean r64 = false;
    L23:
        setHomeButtonEnabled(r64);
        setHasEmbeddedTabs(r2.hasEmbeddedTabs());
        TypedArray r65 = this.mContext.obtainStyledAttributes(null, android.support.v7.appcompat.R.styleable.ActionBar, android.support.v7.appcompat.R.attr.actionBarStyle, 0);
        if (r65.getBoolean(android.support.v7.appcompat.R.styleable.ActionBar_hideOnContentScroll, false) == false) goto L26;
        setHideOnContentScrollEnabled(true);
    L26:
        int r02 = r65.getDimensionPixelSize(android.support.v7.appcompat.R.styleable.ActionBar_elevation, 0);
        if (r02 == 0) goto L29;
        setElevation(r02);
    L29:
        r65.recycle();
        return;
    L22:
        r64 = true;
        goto L23
    L14:
        r63 = false;
    L32:
        throw new IllegalStateException(getClass().getSimpleName() + " can only be used with a compatible window decor layout");
    }

    /* JADX WARN: Multi-variable type inference failed */
    private DecorToolbar getDecorToolbar(View r4) {
        if ((r4 instanceof DecorToolbar) == false) goto L7;
        return (DecorToolbar) r4;
    L7:
        if ((r4 instanceof Toolbar) == true) goto L9;
        StringBuilder r1 = new StringBuilder();
        r1.append("Can't make a decor toolbar out of ");
        if (r4 == 0) goto L13;
        String r42 = r4.getClass().getSimpleName();
    L14:
        r1.append(r42);
        throw new IllegalStateException(r1.toString());
    L13:
        r42 = "null";
        goto L14
    L9:
        return ((Toolbar) r4).getWrapper();
    }

    @Override
    public void setElevation(float r2) {
        ViewCompat.setElevation(this.mContainerView, r2);
    }

    @Override
    public float getElevation() {
        return ViewCompat.getElevation(this.mContainerView);
    }

    @Override
    public void onConfigurationChanged(Configuration r1) {
        setHasEmbeddedTabs(ActionBarPolicy.get(this.mContext).hasEmbeddedTabs());
    }

    private void setHasEmbeddedTabs(boolean r5) {
        this.mHasEmbeddedTabs = r5;
        if (this.mHasEmbeddedTabs == true) goto L5;
        this.mDecorToolbar.setEmbeddedTabView(null);
        this.mContainerView.setTabContainer(this.mTabScrollView);
    L6:
        boolean r1 = true;
        if (getNavigationMode() != 2) goto L9;
        boolean r52 = true;
    L10:
        ScrollingTabContainerView r0 = this.mTabScrollView;
        if (r0 == null) goto L17;
        if (r52 == false) goto L16;
        r0.setVisibility(0);
        ActionBarOverlayLayout r02 = this.mOverlayLayout;
        if (r02 == null) goto L17;
        ViewCompat.requestApplyInsets(r02);
        goto L17
    L16:
        r0.setVisibility(8);
    L17:
        DecorToolbar r03 = this.mDecorToolbar;
        if (this.mHasEmbeddedTabs == true) goto L21;
        if (r52 == false) goto L21;
        boolean r3 = true;
    L22:
        r03.setCollapsible(r3);
        ActionBarOverlayLayout r04 = this.mOverlayLayout;
        if (this.mHasEmbeddedTabs == true) goto L26;
        if (r52 == false) goto L26;
    L27:
        r04.setHasNonEmbeddedTabs(r1);
        return;
    L26:
        r1 = false;
    L21:
        r3 = false;
        goto L22
    L9:
        r52 = false;
        goto L10
    L5:
        this.mContainerView.setTabContainer(null);
        this.mDecorToolbar.setEmbeddedTabView(this.mTabScrollView);
        goto L6
    }

    private void ensureTabsExist() {
        if (this.mTabScrollView == null) goto L5;
        return;
    L5:
        ScrollingTabContainerView r0 = new ScrollingTabContainerView(this.mContext);
        if (this.mHasEmbeddedTabs == false) goto L9;
        r0.setVisibility(0);
        this.mDecorToolbar.setEmbeddedTabView(r0);
    L15:
        this.mTabScrollView = r0;
        return;
    L9:
        if (getNavigationMode() != 2) goto L13;
        r0.setVisibility(0);
        ActionBarOverlayLayout r1 = this.mOverlayLayout;
        if (r1 == null) goto L14;
        ViewCompat.requestApplyInsets(r1);
    L14:
        this.mContainerView.setTabContainer(r0);
        goto L15
    L13:
        r0.setVisibility(8);
        goto L14
    }

    void completeDeferredDestroyActionMode() {
        ActionMode.Callback r0 = this.mDeferredModeDestroyCallback;
        if (r0 == null) goto L6;
        r0.onDestroyActionMode(this.mDeferredDestroyActionMode);
        this.mDeferredDestroyActionMode = null;
        this.mDeferredModeDestroyCallback = null;
        return;
    }

    @Override
    public void onWindowVisibilityChanged(int r1) {
        this.mCurWindowVisibility = r1;
    }

    @Override
    public void setShowHideAnimationEnabled(boolean r1) {
        this.mShowHideAnimationEnabled = r1;
        if (r1 == true) goto L8;
        ViewPropertyAnimatorCompatSet r12 = this.mCurrentShowAnim;
        if (r12 == null) goto L9;
        r12.cancel();
        return;
    L9:
        return;
    }

    @Override
    public void addOnMenuVisibilityListener(ActionBar.OnMenuVisibilityListener r2) {
        this.mMenuVisibilityListeners.add(r2);
    }

    @Override
    public void removeOnMenuVisibilityListener(ActionBar.OnMenuVisibilityListener r2) {
        this.mMenuVisibilityListeners.remove(r2);
    }

    @Override
    public void dispatchMenuVisibilityChanged(boolean r4) {
        if (r4 != this.mLastMenuVisibility) goto L5;
        return;
    L5:
        this.mLastMenuVisibility = r4;
        int r0 = this.mMenuVisibilityListeners.size();
        int r1 = 0;
    L6:
        if (r1 >= r0) goto L8;
        this.mMenuVisibilityListeners.get(r1).onMenuVisibilityChanged(r4);
        r1 = r1 + 1;
        goto L6
    }

    @Override
    public void setCustomView(int r4) {
        setCustomView(LayoutInflater.from(getThemedContext()).inflate(r4, this.mDecorToolbar.getViewGroup(), false));
    }

    @Override
    public void setDisplayUseLogoEnabled(boolean r2) {
        setDisplayOptions(r2 ? 1 : 0, 1);
    }

    @Override
    public void setDisplayShowHomeEnabled(boolean r2) {
        if (r2 == false) goto L5;
        int r22 = 2;
    L6:
        setDisplayOptions(r22, 2);
        return;
    L5:
        r22 = 0;
        goto L6
    }

    @Override
    public void setDisplayHomeAsUpEnabled(boolean r2) {
        if (r2 == false) goto L5;
        int r22 = 4;
    L6:
        setDisplayOptions(r22, 4);
        return;
    L5:
        r22 = 0;
        goto L6
    }

    @Override
    public void setDisplayShowTitleEnabled(boolean r2) {
        if (r2 == false) goto L5;
        int r22 = 8;
    L6:
        setDisplayOptions(r22, 8);
        return;
    L5:
        r22 = 0;
        goto L6
    }

    @Override
    public void setDisplayShowCustomEnabled(boolean r2) {
        if (r2 == false) goto L5;
        int r22 = 16;
    L6:
        setDisplayOptions(r22, 16);
        return;
    L5:
        r22 = 0;
        goto L6
    }

    @Override
    public void setHomeButtonEnabled(boolean r2) {
        this.mDecorToolbar.setHomeButtonEnabled(r2);
    }

    @Override
    public void setTitle(int r2) {
        setTitle(this.mContext.getString(r2));
    }

    @Override
    public void setSubtitle(int r2) {
        setSubtitle(this.mContext.getString(r2));
    }

    @Override
    public void setSelectedNavigationItem(int r3) {
        int r0 = this.mDecorToolbar.getNavigationMode();
        if (r0 != 1) goto L5;
        this.mDecorToolbar.setDropdownSelectedPosition(r3);
        return;
    L5:
        if (r0 != 2) goto L8;
        selectTab(this.mTabs.get(r3));
        return;
    L8:
        throw new IllegalStateException("setSelectedNavigationIndex not valid for current navigation mode");
    }

    @Override
    public void removeAllTabs() {
        cleanupTabs();
    }

    private void cleanupTabs() {
        if (this.mSelectedTab == null) goto L5;
        selectTab(null);
    L5:
        this.mTabs.clear();
        ScrollingTabContainerView r0 = this.mTabScrollView;
        if (r0 == null) goto L8;
        r0.removeAllTabs();
    L8:
        this.mSavedTabPosition = -1;
    }

    @Override
    public void setTitle(CharSequence r2) {
        this.mDecorToolbar.setTitle(r2);
    }

    @Override
    public void setWindowTitle(CharSequence r2) {
        this.mDecorToolbar.setWindowTitle(r2);
    }

    @Override
    public boolean requestFocus() {
        ViewGroup r0 = this.mDecorToolbar.getViewGroup();
        if (r0 != null) goto L5;
        return false;
    L5:
        if (r0.hasFocus() == true) goto L10;
        r0.requestFocus();
        return true;
    L10:
        return false;
    }

    @Override
    public void setSubtitle(CharSequence r2) {
        this.mDecorToolbar.setSubtitle(r2);
    }

    @Override
    public void setDisplayOptions(int r2) {
        if ((r2 & 4) == 0) goto L5;
        this.mDisplayHomeAsUpSet = true;
    L5:
        this.mDecorToolbar.setDisplayOptions(r2);
    }

    @Override
    public void setDisplayOptions(int r3, int r4) {
        int r0 = this.mDecorToolbar.getDisplayOptions();
        if ((r4 & 4) == 0) goto L5;
        this.mDisplayHomeAsUpSet = true;
    L5:
        this.mDecorToolbar.setDisplayOptions((r3 & r4) | ((~r4) & r0));
    }

    @Override
    public void setBackgroundDrawable(Drawable r2) {
        this.mContainerView.setPrimaryBackground(r2);
    }

    @Override
    public void setStackedBackgroundDrawable(Drawable r2) {
        this.mContainerView.setStackedBackground(r2);
    }

    @Override
    public View getCustomView() {
        return this.mDecorToolbar.getCustomView();
    }

    @Override
    public CharSequence getTitle() {
        return this.mDecorToolbar.getTitle();
    }

    @Override
    public CharSequence getSubtitle() {
        return this.mDecorToolbar.getSubtitle();
    }

    @Override
    public int getNavigationMode() {
        return this.mDecorToolbar.getNavigationMode();
    }

    @Override
    public int getDisplayOptions() {
        return this.mDecorToolbar.getDisplayOptions();
    }

    @Override
    public ActionMode startActionMode(ActionMode.Callback r3) {
        ActionModeImpl r0 = this.mActionMode;
        if (r0 == null) goto L5;
        r0.finish();
    L5:
        this.mOverlayLayout.setHideOnContentScrollEnabled(false);
        this.mContextView.killMode();
        ActionModeImpl r02 = new ActionModeImpl(this, this.mContextView.getContext(), r3);
        if (r02.dispatchOnCreate() == false) goto L9;
        this.mActionMode = r02;
        r02.invalidate();
        this.mContextView.initForMode(r02);
        animateToMode(true);
        this.mContextView.sendAccessibilityEvent(32);
        return r02;
    L9:
        return null;
    }

    private void configureTab(ActionBar.Tab r2, int r3) {
        TabImpl r22 = (TabImpl) r2;
        if (r22.getCallback() == null) goto L10;
        r22.setPosition(r3);
        this.mTabs.add(r3, r22);
        int r23 = this.mTabs.size();
    L5:
        r3 = r3 + 1;
        if (r3 >= r23) goto L8;
        this.mTabs.get(r3).setPosition(r3);
        goto L5
    L8:
        return;
    L10:
        throw new IllegalStateException("Action Bar Tab must have a Callback");
    }

    @Override
    public void addTab(ActionBar.Tab r2) {
        addTab(r2, this.mTabs.isEmpty());
    }

    @Override
    public void addTab(ActionBar.Tab r2, int r3) {
        addTab(r2, r3, this.mTabs.isEmpty());
    }

    @Override
    public void addTab(ActionBar.Tab r2, boolean r3) {
        ensureTabsExist();
        this.mTabScrollView.addTab(r2, r3);
        configureTab(r2, this.mTabs.size());
        if (r3 == false) goto L6;
        selectTab(r2);
        return;
    }

    @Override
    public void addTab(ActionBar.Tab r2, int r3, boolean r4) {
        ensureTabsExist();
        this.mTabScrollView.addTab(r2, r3, r4);
        configureTab(r2, r3);
        if (r4 == false) goto L6;
        selectTab(r2);
        return;
    }

    @Override
    public ActionBar.Tab newTab() {
        return new TabImpl(this);
    }

    @Override
    public void removeTab(ActionBar.Tab r1) {
        removeTabAt(r1.getPosition());
    }

    @Override
    public void removeTabAt(int r5) {
        if (this.mTabScrollView != null) goto L5;
        return;
    L5:
        TabImpl r0 = this.mSelectedTab;
        if (r0 == null) goto L8;
        int r02 = r0.getPosition();
    L9:
        this.mTabScrollView.removeTabAt(r5);
        TabImpl r1 = this.mTabs.remove(r5);
        if (r1 == null) goto L12;
        r1.setPosition(-1);
    L12:
        int r12 = this.mTabs.size();
        int r2 = r5;
    L13:
        if (r2 >= r12) goto L15;
        this.mTabs.get(r2).setPosition(r2);
        r2 = r2 + 1;
        goto L13
    L15:
        if (r02 == r5) goto L17;
        return;
    L17:
        if (this.mTabs.isEmpty() == false) goto L19;
        TabImpl r52 = null;
    L20:
        selectTab(r52);
        return;
    L19:
        r52 = this.mTabs.get(Math.max(0, r5 - 1));
        goto L20
    L8:
        r02 = this.mSavedTabPosition;
        goto L9
    }

    @Override
    public void selectTab(ActionBar.Tab r4) {
        int r1 = -1;
        if (getNavigationMode() == 2) goto L9;
        if (r4 == null) goto L6;
        r1 = r4.getPosition();
    L6:
        this.mSavedTabPosition = r1;
        return;
    L9:
        if ((this.mActivity instanceof FragmentActivity) == true) goto L11;
    L13:
        FragmentTransaction r0 = null;
    L14:
        TabImpl r2 = this.mSelectedTab;
        if (r2 != r4) goto L18;
        if (r2 == null) goto L27;
        r2.getCallback().onTabReselected(this.mSelectedTab, r0);
        this.mTabScrollView.animateToTab(r4.getPosition());
    L27:
        if (r0 != null) goto L29;
        return;
    L29:
        if (r0.isEmpty() == true) goto L33;
        r0.commit();
        return;
    L33:
        return;
    L18:
        ScrollingTabContainerView r22 = this.mTabScrollView;
        if (r4 == null) goto L21;
        r1 = r4.getPosition();
    L21:
        r22.setTabSelected(r1);
        TabImpl r12 = this.mSelectedTab;
        if (r12 == null) goto L24;
        r12.getCallback().onTabUnselected(this.mSelectedTab, r0);
    L24:
        this.mSelectedTab = (TabImpl) r4;
        TabImpl r42 = this.mSelectedTab;
        if (r42 == null) goto L27;
        r42.getCallback().onTabSelected(this.mSelectedTab, r0);
        goto L27
    L11:
        if (this.mDecorToolbar.getViewGroup().isInEditMode() == true) goto L13;
        r0 = ((FragmentActivity) this.mActivity).getSupportFragmentManager().beginTransaction().disallowAddToBackStack();
        goto L14
    }

    @Override
    public ActionBar.Tab getSelectedTab() {
        return this.mSelectedTab;
    }

    @Override
    public int getHeight() {
        return this.mContainerView.getHeight();
    }

    @Override
    public void enableContentAnimations(boolean r1) {
        this.mContentAnimations = r1;
    }

    @Override
    public void show() {
        if (this.mHiddenByApp == false) goto L6;
        this.mHiddenByApp = false;
        updateVisibility(false);
        return;
    }

    private void showForActionMode() {
        if (this.mShowingForMode == true) goto L9;
        this.mShowingForMode = true;
        ActionBarOverlayLayout r1 = this.mOverlayLayout;
        if (r1 == null) goto L7;
        r1.setShowingForActionMode(true);
    L7:
        updateVisibility(false);
        return;
    }

    @Override
    public void showForSystem() {
        if (this.mHiddenBySystem == false) goto L6;
        this.mHiddenBySystem = false;
        updateVisibility(true);
        return;
    }

    @Override
    public void hide() {
        if (this.mHiddenByApp == true) goto L6;
        this.mHiddenByApp = true;
        updateVisibility(false);
        return;
    }

    private void hideForActionMode() {
        if (this.mShowingForMode == false) goto L9;
        this.mShowingForMode = false;
        ActionBarOverlayLayout r1 = this.mOverlayLayout;
        if (r1 == null) goto L7;
        r1.setShowingForActionMode(false);
    L7:
        updateVisibility(false);
        return;
    }

    @Override
    public void hideForSystem() {
        if (this.mHiddenBySystem == true) goto L6;
        this.mHiddenBySystem = true;
        updateVisibility(true);
        return;
    }

    @Override
    public void setHideOnContentScrollEnabled(boolean r2) {
        if (r2 == true) goto L4;
    L8:
        this.mHideOnContentScroll = r2;
        this.mOverlayLayout.setHideOnContentScrollEnabled(r2);
        return;
    L4:
        if (this.mOverlayLayout.isInOverlayMode() == true) goto L8;
        throw new IllegalStateException("Action bar must be in overlay mode (Window.FEATURE_OVERLAY_ACTION_BAR) to enable hide on content scroll");
    }

    @Override
    public boolean isHideOnContentScrollEnabled() {
        return this.mOverlayLayout.isHideOnContentScrollEnabled();
    }

    @Override
    public int getHideOffset() {
        return this.mOverlayLayout.getActionBarHideOffset();
    }

    @Override
    public void setHideOffset(int r2) {
        if (r2 != 0) goto L4;
    L8:
        this.mOverlayLayout.setActionBarHideOffset(r2);
        return;
    L4:
        if (this.mOverlayLayout.isInOverlayMode() == true) goto L8;
        throw new IllegalStateException("Action bar must be in overlay mode (Window.FEATURE_OVERLAY_ACTION_BAR) to set a non-zero hide offset");
    }

    private void updateVisibility(boolean r4) {
        if (checkShowingFlags(this.mHiddenByApp, this.mHiddenBySystem, this.mShowingForMode) == false) goto L8;
        if (this.mNowShowing == true) goto L11;
        this.mNowShowing = true;
        doShow(r4);
        return;
    L11:
        return;
    L8:
        if (this.mNowShowing == false) goto L13;
        this.mNowShowing = false;
        doHide(r4);
        return;
    }

    public void doShow(boolean r5) {
        ViewPropertyAnimatorCompatSet r0 = this.mCurrentShowAnim;
        if (r0 == null) goto L5;
        r0.cancel();
    L5:
        this.mContainerView.setVisibility(0);
        if (this.mCurWindowVisibility == 0) goto L8;
    L19:
        this.mContainerView.setAlpha(1.0f);
        this.mContainerView.setTranslationY(0.0f);
        if (this.mContentAnimations == false) goto L24;
        View r52 = this.mContentView;
        if (r52 == null) goto L24;
        r52.setTranslationY(0.0f);
    L24:
        this.mShowListener.onAnimationEnd(null);
    L25:
        ActionBarOverlayLayout r53 = this.mOverlayLayout;
        if (r53 == null) goto L29;
        ViewCompat.requestApplyInsets(r53);
        return;
    L29:
        return;
    L8:
        if (this.mShowHideAnimationEnabled == true) goto L10;
        if (r5 == false) goto L19;
    L10:
        this.mContainerView.setTranslationY(0.0f);
        float r02 = -this.mContainerView.getHeight();
        if (r5 == false) goto L13;
        this.mContainerView.getLocationInWindow(new int[]{0, 0});
        r02 = r02 - r5[1];
    L13:
        this.mContainerView.setTranslationY(r02);
        ViewPropertyAnimatorCompatSet r54 = new ViewPropertyAnimatorCompatSet();
        ViewPropertyAnimatorCompat r2 = ViewCompat.animate(this.mContainerView).translationY(0.0f);
        r2.setUpdateListener(this.mUpdateListener);
        r54.play(r2);
        if (this.mContentAnimations == false) goto L18;
        View r22 = this.mContentView;
        if (r22 == null) goto L18;
        r22.setTranslationY(r02);
        r54.play(ViewCompat.animate(this.mContentView).translationY(0.0f));
    L18:
        r54.setInterpolator(sShowInterpolator);
        r54.setDuration(250);
        r54.setListener(this.mShowListener);
        this.mCurrentShowAnim = r54;
        r54.start();
        goto L25
    }

    public void doHide(boolean r5) {
        ViewPropertyAnimatorCompatSet r0 = this.mCurrentShowAnim;
        if (r0 == null) goto L6;
        r0.cancel();
    L6:
        if (this.mCurWindowVisibility == 0) goto L8;
    L19:
        this.mHideListener.onAnimationEnd(null);
        return;
    L8:
        if (this.mShowHideAnimationEnabled == true) goto L10;
        if (r5 == false) goto L19;
    L10:
        this.mContainerView.setAlpha(1.0f);
        this.mContainerView.setTransitioning(true);
        ViewPropertyAnimatorCompatSet r02 = new ViewPropertyAnimatorCompatSet();
        float r2 = -this.mContainerView.getHeight();
        if (r5 == false) goto L13;
        this.mContainerView.getLocationInWindow(new int[]{0, 0});
        r2 = r2 - r5[1];
    L13:
        ViewPropertyAnimatorCompat r52 = ViewCompat.animate(this.mContainerView).translationY(r2);
        r52.setUpdateListener(this.mUpdateListener);
        r02.play(r52);
        if (this.mContentAnimations == false) goto L18;
        View r53 = this.mContentView;
        if (r53 == null) goto L18;
        r02.play(ViewCompat.animate(r53).translationY(r2));
    L18:
        r02.setInterpolator(sHideInterpolator);
        r02.setDuration(250);
        r02.setListener(this.mHideListener);
        this.mCurrentShowAnim = r02;
        r02.start();
    }

    @Override
    public boolean isShowing() {
        int r0 = getHeight();
        if (this.mNowShowing == false) goto L8;
        if (r0 != 0) goto L6;
    L7:
        return true;
    L6:
        if (getHideOffset() < r0) goto L7;
    L8:
        return false;
    }

    public void animateToMode(boolean r9) {
        if (r9 == false) goto L4;
        showForActionMode();
    L6:
        if (shouldAnimateContextView() == true) goto L8;
        if (r9 == false) goto L14;
        this.mDecorToolbar.setVisibility(4);
        this.mContextView.setVisibility(0);
        return;
    L14:
        this.mDecorToolbar.setVisibility(0);
        this.mContextView.setVisibility(8);
        return;
    L8:
        if (r9 == false) goto L10;
        ViewPropertyAnimatorCompat r92 = this.mDecorToolbar.setupAnimatorToVisibility(4, FADE_OUT_DURATION_MS);
        ViewPropertyAnimatorCompat r0 = this.mContextView.setupAnimatorToVisibility(0, FADE_IN_DURATION_MS);
    L11:
        ViewPropertyAnimatorCompatSet r1 = new ViewPropertyAnimatorCompatSet();
        r1.playSequentially(r92, r0);
        r1.start();
        return;
    L10:
        r0 = this.mDecorToolbar.setupAnimatorToVisibility(0, FADE_IN_DURATION_MS);
        r92 = this.mContextView.setupAnimatorToVisibility(8, FADE_OUT_DURATION_MS);
        goto L11
    L4:
        hideForActionMode();
        goto L6
    }

    private boolean shouldAnimateContextView() {
        return ViewCompat.isLaidOut(this.mContainerView);
    }

    @Override
    public Context getThemedContext() {
        if (this.mThemedContext != null) goto L9;
        TypedValue r0 = new TypedValue();
        this.mContext.getTheme().resolveAttribute(android.support.v7.appcompat.R.attr.actionBarWidgetTheme, r0, true);
        int r02 = r0.resourceId;
        if (r02 == 0) goto L7;
        this.mThemedContext = new ContextThemeWrapper(this.mContext, r02);
        goto L9
    L7:
        this.mThemedContext = this.mContext;
    L9:
        return this.mThemedContext;
    }

    @Override
    public boolean isTitleTruncated() {
        DecorToolbar r0 = this.mDecorToolbar;
        if (r0 != null) goto L5;
    L7:
        return false;
    L5:
        if (r0.isTitleTruncated() == false) goto L7;
        return true;
    }

    @Override
    public void setHomeAsUpIndicator(Drawable r2) {
        this.mDecorToolbar.setNavigationIcon(r2);
    }

    @Override
    public void setHomeAsUpIndicator(int r2) {
        this.mDecorToolbar.setNavigationIcon(r2);
    }

    @Override
    public void setHomeActionContentDescription(CharSequence r2) {
        this.mDecorToolbar.setNavigationContentDescription(r2);
    }

    @Override
    public void setHomeActionContentDescription(int r2) {
        this.mDecorToolbar.setNavigationContentDescription(r2);
    }

    @Override
    public void onContentScrollStarted() {
        ViewPropertyAnimatorCompatSet r0 = this.mCurrentShowAnim;
        if (r0 == null) goto L6;
        r0.cancel();
        this.mCurrentShowAnim = null;
        return;
    }

    @Override
    public boolean collapseActionView() {
        DecorToolbar r0 = this.mDecorToolbar;
        if (r0 != null) goto L5;
        return false;
    L5:
        if (r0.hasExpandedActionView() == false) goto L10;
        this.mDecorToolbar.collapseActionView();
        return true;
    L10:
        return false;
    }

    @Override
    public void setCustomView(View r2) {
        this.mDecorToolbar.setCustomView(r2);
    }

    @Override
    public void setCustomView(View r1, ActionBar.LayoutParams r2) {
        r1.setLayoutParams(r2);
        this.mDecorToolbar.setCustomView(r1);
    }

    @Override
    public void setListNavigationCallbacks(SpinnerAdapter r3, ActionBar.OnNavigationListener r4) {
        this.mDecorToolbar.setDropdownParams(r3, new NavItemSelectedListener(r4));
    }

    @Override
    public int getSelectedNavigationIndex() {
        int r0 = this.mDecorToolbar.getNavigationMode();
        if (r0 == 1) goto L12;
        if (r0 == 2) goto L7;
        return -1;
    L7:
        TabImpl r02 = this.mSelectedTab;
        if (r02 != null) goto L10;
        return -1;
    L10:
        return r02.getPosition();
    L12:
        return this.mDecorToolbar.getDropdownSelectedPosition();
    }

    @Override
    public int getNavigationItemCount() {
        int r0 = this.mDecorToolbar.getNavigationMode();
        if (r0 == 1) goto L11;
        if (r0 == 2) goto L9;
        return 0;
    L9:
        return this.mTabs.size();
    L11:
        return this.mDecorToolbar.getDropdownItemCount();
    }

    @Override
    public int getTabCount() {
        return this.mTabs.size();
    }

    @Override
    public void setNavigationMode(int r6) {
        int r0 = this.mDecorToolbar.getNavigationMode();
        if (r0 != 2) goto L6;
        this.mSavedTabPosition = getSelectedNavigationIndex();
        selectTab(null);
        this.mTabScrollView.setVisibility(8);
    L6:
        if (r0 != r6) goto L8;
    L12:
        this.mDecorToolbar.setNavigationMode(r6);
        boolean r02 = false;
        if (r6 != 2) goto L18;
        ensureTabsExist();
        this.mTabScrollView.setVisibility(0);
        int r2 = this.mSavedTabPosition;
        if (r2 == (-1)) goto L18;
        setSelectedNavigationItem(r2);
        this.mSavedTabPosition = -1;
    L18:
        DecorToolbar r22 = this.mDecorToolbar;
        if (r6 == 2) goto L21;
    L23:
        boolean r4 = false;
    L24:
        r22.setCollapsible(r4);
        ActionBarOverlayLayout r23 = this.mOverlayLayout;
        if (r6 == 2) goto L27;
    L29:
        r23.setHasNonEmbeddedTabs(r02);
        return;
    L27:
        if (this.mHasEmbeddedTabs == true) goto L29;
        r02 = true;
        goto L29
    L21:
        if (this.mHasEmbeddedTabs == true) goto L23;
        r4 = true;
        goto L24
    L8:
        if (this.mHasEmbeddedTabs == true) goto L12;
        ActionBarOverlayLayout r03 = this.mOverlayLayout;
        if (r03 == null) goto L12;
        ViewCompat.requestApplyInsets(r03);
        goto L12
    }

    @Override
    public ActionBar.Tab getTabAt(int r2) {
        return this.mTabs.get(r2);
    }

    @Override
    public void setIcon(int r2) {
        this.mDecorToolbar.setIcon(r2);
    }

    @Override
    public void setIcon(Drawable r2) {
        this.mDecorToolbar.setIcon(r2);
    }

    public boolean hasIcon() {
        return this.mDecorToolbar.hasIcon();
    }

    @Override
    public void setLogo(int r2) {
        this.mDecorToolbar.setLogo(r2);
    }

    @Override
    public void setLogo(Drawable r2) {
        this.mDecorToolbar.setLogo(r2);
    }

    public boolean hasLogo() {
        return this.mDecorToolbar.hasLogo();
    }

    @Override
    public void setDefaultDisplayHomeAsUpEnabled(boolean r2) {
        if (this.mDisplayHomeAsUpSet == true) goto L6;
        setDisplayHomeAsUpEnabled(r2);
        return;
    }

    @Override
    public boolean onKeyShortcut(int r5, KeyEvent r6) {
        ActionModeImpl r0 = this.mActionMode;
        if (r0 != null) goto L5;
        return false;
    L5:
        Menu r02 = r0.getMenu();
        if (r02 == null) goto L16;
        if (r6 == null) goto L9;
        int r2 = r6.getDeviceId();
    L10:
        boolean r3 = true;
        if (KeyCharacterMap.load(r2).getKeyboardType() != 1) goto L14;
        r3 = false;
    L14:
        r02.setQwertyMode(r3);
        return r02.performShortcut(r5, r6, 0);
    L9:
        r2 = -1;
        goto L10
    L16:
        return false;
    }
}
