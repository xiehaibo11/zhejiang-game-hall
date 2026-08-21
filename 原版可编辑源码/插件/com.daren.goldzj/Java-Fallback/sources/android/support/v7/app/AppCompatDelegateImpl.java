package android.support.v7.app;

import android.app.Activity;
import android.app.Dialog;
import android.app.UiModeManager;
import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.media.AudioManager;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.support.annotation.IdRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.VisibleForTesting;
import android.support.v4.app.NavUtils;
import android.support.v4.view.KeyEventDispatcher;
import android.support.v4.view.LayoutInflaterCompat;
import android.support.v4.view.PointerIconCompat;
import android.support.v4.view.ViewCompat;
import android.support.v4.view.ViewPropertyAnimatorCompat;
import android.support.v4.widget.PopupWindowCompat;
import android.support.v7.app.ActionBarDrawerToggle;
import android.support.v7.appcompat.R;
import android.support.v7.content.res.AppCompatResources;
import android.support.v7.view.ActionMode;
import android.support.v7.view.ContextThemeWrapper;
import android.support.v7.view.StandaloneActionMode;
import android.support.v7.view.SupportActionModeWrapper;
import android.support.v7.view.SupportMenuInflater;
import android.support.v7.view.WindowCallbackWrapper;
import android.support.v7.view.menu.ListMenuPresenter;
import android.support.v7.view.menu.MenuBuilder;
import android.support.v7.view.menu.MenuPresenter;
import android.support.v7.view.menu.MenuView;
import android.support.v7.widget.ActionBarContextView;
import android.support.v7.widget.AppCompatDrawableManager;
import android.support.v7.widget.ContentFrameLayout;
import android.support.v7.widget.DecorContentParent;
import android.support.v7.widget.FitWindowsViewGroup;
import android.support.v7.widget.TintTypedArray;
import android.support.v7.widget.Toolbar;
import android.support.v7.widget.VectorEnabledTintResources;
import android.support.v7.widget.ViewStubCompat;
import android.support.v7.widget.ViewUtils;
import android.text.TextUtils;
import android.util.AndroidRuntimeException;
import android.util.AttributeSet;
import android.util.DisplayMetrics;
import android.util.Log;
import android.util.TypedValue;
import android.view.ActionMode;
import android.view.KeyCharacterMap;
import android.view.KeyEvent;
import android.view.KeyboardShortcutGroup;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.Window;
import android.view.WindowManager;
import android.widget.FrameLayout;
import android.widget.PopupWindow;
import android.widget.TextView;
import java.lang.Thread;
import java.util.List;
import org.xmlpull.v1.XmlPullParser;

class AppCompatDelegateImpl extends AppCompatDelegate implements MenuBuilder.Callback, LayoutInflater.Factory2 {
    private static final boolean DEBUG = false;
    static final String EXCEPTION_HANDLER_MESSAGE_SUFFIX = ". If the resource you are trying to use is a vector resource, you may be referencing it in an unsupported way. See AppCompatDelegate.setCompatVectorFromResourcesEnabled() for more info.";
    private static final boolean IS_PRE_LOLLIPOP = false;
    private static final String KEY_LOCAL_NIGHT_MODE = "appcompat:local_night_mode";
    private static boolean sInstalledExceptionHandler;
    private static final int[] sWindowBackgroundStyleable = null;
    ActionBar mActionBar;
    private ActionMenuPresenterCallback mActionMenuPresenterCallback;
    ActionMode mActionMode;
    PopupWindow mActionModePopup;
    ActionBarContextView mActionModeView;
    final AppCompatCallback mAppCompatCallback;
    private AppCompatViewInflater mAppCompatViewInflater;
    final Window.Callback mAppCompatWindowCallback;
    private boolean mApplyDayNightCalled;
    private AutoNightModeManager mAutoNightModeManager;
    private boolean mClosingActionMenu;
    final Context mContext;
    private DecorContentParent mDecorContentParent;
    private boolean mEnableDefaultActionBarUp;
    ViewPropertyAnimatorCompat mFadeAnim;
    private boolean mFeatureIndeterminateProgress;
    private boolean mFeatureProgress;
    private boolean mHandleNativeActionModes;
    boolean mHasActionBar;
    int mInvalidatePanelMenuFeatures;
    boolean mInvalidatePanelMenuPosted;
    private final Runnable mInvalidatePanelMenuRunnable;
    boolean mIsDestroyed;
    boolean mIsFloating;
    private int mLocalNightMode;
    private boolean mLongPressBackDown;
    MenuInflater mMenuInflater;
    final Window.Callback mOriginalWindowCallback;
    boolean mOverlayActionBar;
    boolean mOverlayActionMode;
    private PanelMenuPresenterCallback mPanelMenuPresenterCallback;
    private PanelFeatureState[] mPanels;
    private PanelFeatureState mPreparedPanel;
    Runnable mShowActionModePopup;
    private View mStatusGuard;
    private ViewGroup mSubDecor;
    private boolean mSubDecorInstalled;
    private Rect mTempRect1;
    private Rect mTempRect2;
    private CharSequence mTitle;
    private TextView mTitleView;
    final Window mWindow;
    boolean mWindowNoTitle;

    private class ActionBarDrawableToggleImpl implements ActionBarDrawerToggle.Delegate {
        final AppCompatDelegateImpl this$0;

        ActionBarDrawableToggleImpl(AppCompatDelegateImpl r1) {
            this.this$0 = r1;
        }

        @Override
        public Drawable getThemeUpIndicator() {
            TintTypedArray r0 = TintTypedArray.obtainStyledAttributes(getActionBarThemedContext(), null, new int[]{R.attr.homeAsUpIndicator});
            Drawable r1 = r0.getDrawable(0);
            r0.recycle();
            return r1;
        }

        @Override
        public Context getActionBarThemedContext() {
            return this.this$0.getActionBarThemedContext();
        }

        @Override
        public boolean isNavigationVisible() {
            ActionBar r0 = this.this$0.getSupportActionBar();
            if (r0 != null) goto L5;
        L7:
            return false;
        L5:
            if ((r0.getDisplayOptions() & 4) == 0) goto L7;
            return true;
        }

        @Override
        public void setActionBarUpIndicator(Drawable r2, int r3) {
            ActionBar r0 = this.this$0.getSupportActionBar();
            if (r0 == null) goto L6;
            r0.setHomeAsUpIndicator(r2);
            r0.setHomeActionContentDescription(r3);
            return;
        }

        @Override
        public void setActionBarDescription(int r2) {
            ActionBar r0 = this.this$0.getSupportActionBar();
            if (r0 == null) goto L6;
            r0.setHomeActionContentDescription(r2);
            return;
        }
    }

    private final class ActionMenuPresenterCallback implements MenuPresenter.Callback {
        final AppCompatDelegateImpl this$0;

        ActionMenuPresenterCallback(AppCompatDelegateImpl r1) {
            this.this$0 = r1;
        }

        @Override
        public boolean onOpenSubMenu(MenuBuilder r3) {
            Window.Callback r0 = this.this$0.getWindowCallback();
            if (r0 == null) goto L7;
            r0.onMenuOpened(108, r3);
            return true;
        L7:
            return true;
        }

        @Override
        public void onCloseMenu(MenuBuilder r1, boolean r2) {
            this.this$0.checkCloseActionMenu(r1);
        }
    }

    class ActionModeCallbackWrapperV9 implements ActionMode.Callback {
        private ActionMode.Callback mWrapped;
        final AppCompatDelegateImpl this$0;

        public ActionModeCallbackWrapperV9(AppCompatDelegateImpl r1, ActionMode.Callback r2) {
            this.this$0 = r1;
            this.mWrapped = r2;
        }

        @Override
        public boolean onCreateActionMode(ActionMode r2, Menu r3) {
            return this.mWrapped.onCreateActionMode(r2, r3);
        }

        @Override
        public boolean onPrepareActionMode(ActionMode r2, Menu r3) {
            return this.mWrapped.onPrepareActionMode(r2, r3);
        }

        @Override
        public boolean onActionItemClicked(ActionMode r2, MenuItem r3) {
            return this.mWrapped.onActionItemClicked(r2, r3);
        }

        @Override
        public void onDestroyActionMode(ActionMode r3) {
            this.mWrapped.onDestroyActionMode(r3);
            if (this.this$0.mActionModePopup == null) goto L6;
            this.this$0.mWindow.getDecorView().removeCallbacks(this.this$0.mShowActionModePopup);
        L6:
            if (this.this$0.mActionModeView == null) goto L9;
            this.this$0.endOnGoingFadeAnimation();
            AppCompatDelegateImpl r32 = this.this$0;
            r32.mFadeAnim = ViewCompat.animate(r32.mActionModeView).alpha(0.0f);
            this.this$0.mFadeAnim.setListener(new 1(this));
        L9:
            if (this.this$0.mAppCompatCallback == null) goto L11;
            this.this$0.mAppCompatCallback.onSupportActionModeFinished(this.this$0.mActionMode);
        L11:
            this.this$0.mActionMode = null;
        }
    }

    class AppCompatWindowCallback extends WindowCallbackWrapper {
        final AppCompatDelegateImpl this$0;

        @Override
        public void onContentChanged() {
        }

        AppCompatWindowCallback(AppCompatDelegateImpl r1, Window.Callback r2) {
            this.this$0 = r1;
            super(r2);
        }

        @Override
        public boolean dispatchKeyEvent(KeyEvent r2) {
            if (this.this$0.dispatchKeyEvent(r2) == false) goto L5;
        L8:
            return true;
        L5:
            if (super.dispatchKeyEvent(r2) == true) goto L8;
            return false;
        }

        @Override
        public boolean dispatchKeyShortcutEvent(KeyEvent r3) {
            if (super.dispatchKeyShortcutEvent(r3) == false) goto L5;
        L8:
            return true;
        L5:
            if (this.this$0.onKeyShortcut(r3.getKeyCode(), r3) == true) goto L8;
            return false;
        }

        @Override
        public boolean onCreatePanelMenu(int r2, Menu r3) {
            if (r2 != 0) goto L8;
            if ((r3 instanceof MenuBuilder) == true) goto L8;
            return false;
        L8:
            return super.onCreatePanelMenu(r2, r3);
        }

        @Override
        public boolean onPreparePanel(int r4, View r5, Menu r6) {
            if ((r6 instanceof MenuBuilder) == false) goto L5;
            MenuBuilder r0 = (MenuBuilder) r6;
        L7:
            if (r4 != 0) goto L10;
            if (r0 != null) goto L10;
            return false;
        L10:
            if (r0 == null) goto L12;
            r0.setOverrideVisibleItems(true);
        L12:
            boolean r42 = super.onPreparePanel(r4, r5, r6);
            if (r0 == null) goto L15;
            r0.setOverrideVisibleItems(false);
        L15:
            return r42;
        L5:
            r0 = null;
            goto L7
        }

        @Override
        public boolean onMenuOpened(int r1, Menu r2) {
            super.onMenuOpened(r1, r2);
            this.this$0.onMenuOpened(r1);
            return true;
        }

        @Override
        public void onPanelClosed(int r1, Menu r2) {
            super.onPanelClosed(r1, r2);
            this.this$0.onPanelClosed(r1);
        }

        @Override
        public android.view.ActionMode onWindowStartingActionMode(ActionMode.Callback r3) {
            if (Build.VERSION.SDK_INT < 23) goto L7;
            return null;
        L7:
            if (this.this$0.isHandleNativeActionModesEnabled() == false) goto L11;
            return startAsSupportActionMode(r3);
        L11:
            return super.onWindowStartingActionMode(r3);
        }

        final android.view.ActionMode startAsSupportActionMode(ActionMode.Callback r3) {
            SupportActionModeWrapper.CallbackWrapper r0 = new SupportActionModeWrapper.CallbackWrapper(this.this$0.mContext, r3);
            android.support.v7.view.ActionMode r32 = this.this$0.startSupportActionMode(r0);
            if (r32 != null) goto L5;
            return null;
        L5:
            return r0.getActionModeWrapper(r32);
        }

        @Override
        @RequiresApi(23)
        public android.view.ActionMode onWindowStartingActionMode(ActionMode.Callback r2, int r3) {
            if (this.this$0.isHandleNativeActionModesEnabled() == false) goto L9;
            if (r3 != 0) goto L9;
            return startAsSupportActionMode(r2);
        L9:
            return super.onWindowStartingActionMode(r2, r3);
        }

        @Override
        @RequiresApi(24)
        public void onProvideKeyboardShortcuts(List<KeyboardShortcutGroup> r4, Menu r5, int r6) {
            PanelFeatureState r0 = this.this$0.getPanelState(0, true);
            if (r0 != null) goto L5;
        L7:
            super.onProvideKeyboardShortcuts(r4, r5, r6);
            return;
        L5:
            if (r0.menu == null) goto L7;
            super.onProvideKeyboardShortcuts(r4, r0.menu, r6);
        }
    }

    @VisibleForTesting
    final class AutoNightModeManager {
        private BroadcastReceiver mAutoTimeChangeReceiver;
        private IntentFilter mAutoTimeChangeReceiverFilter;
        private boolean mIsNight;
        private TwilightManager mTwilightManager;
        final AppCompatDelegateImpl this$0;

        AutoNightModeManager(@NonNull AppCompatDelegateImpl r1, TwilightManager r2) {
            this.this$0 = r1;
            this.mTwilightManager = r2;
            this.mIsNight = r2.isNight();
        }

        int getApplyableNightMode() {
            this.mIsNight = this.mTwilightManager.isNight();
            if (this.mIsNight == false) goto L5;
            return 2;
        L5:
            return 1;
        }

        void dispatchTimeChanged() {
            boolean r0 = this.mTwilightManager.isNight();
            if (r0 == this.mIsNight) goto L6;
            this.mIsNight = r0;
            this.this$0.applyDayNight();
            return;
        }

        void setup() {
            cleanup();
            if (this.mAutoTimeChangeReceiver != null) goto L6;
            this.mAutoTimeChangeReceiver = new 1(this);
        L6:
            if (this.mAutoTimeChangeReceiverFilter != null) goto L8;
            this.mAutoTimeChangeReceiverFilter = new IntentFilter();
            this.mAutoTimeChangeReceiverFilter.addAction("android.intent.action.TIME_SET");
            this.mAutoTimeChangeReceiverFilter.addAction("android.intent.action.TIMEZONE_CHANGED");
            this.mAutoTimeChangeReceiverFilter.addAction("android.intent.action.TIME_TICK");
        L8:
            this.this$0.mContext.registerReceiver(this.mAutoTimeChangeReceiver, this.mAutoTimeChangeReceiverFilter);
        }

        void cleanup() {
            if (this.mAutoTimeChangeReceiver == null) goto L6;
            this.this$0.mContext.unregisterReceiver(this.mAutoTimeChangeReceiver);
            this.mAutoTimeChangeReceiver = null;
            return;
        }
    }

    private class ListMenuDecorView extends ContentFrameLayout {
        final AppCompatDelegateImpl this$0;

        public ListMenuDecorView(AppCompatDelegateImpl r1, Context r2) {
            this.this$0 = r1;
            super(r2);
        }

        @Override
        public boolean dispatchKeyEvent(KeyEvent r2) {
            if (this.this$0.dispatchKeyEvent(r2) == false) goto L5;
        L8:
            return true;
        L5:
            if (super.dispatchKeyEvent(r2) == true) goto L8;
            return false;
        }

        @Override
        public boolean onInterceptTouchEvent(MotionEvent r3) {
            if (r3.getAction() != 0) goto L9;
            if (isOutOfBounds((int) r3.getX(), (int) r3.getY()) == false) goto L9;
            this.this$0.closePanel(0);
            return true;
        L9:
            return super.onInterceptTouchEvent(r3);
        }

        @Override
        public void setBackgroundResource(int r2) {
            setBackgroundDrawable(AppCompatResources.getDrawable(getContext(), r2));
        }

        private boolean isOutOfBounds(int r2, int r3) {
            if (r2 < (-5)) goto L11;
            if (r3 < (-5)) goto L11;
            if (r2 > (getWidth() + 5)) goto L11;
            if (r3 > (getHeight() + 5)) goto L11;
            return false;
        L11:
            return true;
        }
    }

    protected static final class PanelFeatureState {
        int background;
        View createdPanelView;
        ViewGroup decorView;
        int featureId;
        Bundle frozenActionViewState;
        Bundle frozenMenuState;
        int gravity;
        boolean isHandled;
        boolean isOpen;
        boolean isPrepared;
        ListMenuPresenter listMenuPresenter;
        Context listPresenterContext;
        MenuBuilder menu;
        public boolean qwertyMode;
        boolean refreshDecorView;
        boolean refreshMenuContent;
        View shownPanelView;
        boolean wasLastOpen;
        int windowAnimations;
        int x;
        int y;

        private static class SavedState implements Parcelable {
            public static final Parcelable.Creator<SavedState> CREATOR = null;
            int featureId;
            boolean isOpen;
            Bundle menuState;

            @Override
            public int describeContents() {
                return 0;
            }

            SavedState() {
            }

            @Override
            public void writeToParcel(Parcel r1, int r2) {
                r1.writeInt(this.featureId);
                r1.writeInt(this.isOpen ? 1 : 0);
                if (this.isOpen == false) goto L6;
                r1.writeBundle(this.menuState);
                return;
            }

            static SavedState readFromParcel(Parcel r3, ClassLoader r4) {
                SavedState r0 = new SavedState();
                r0.featureId = r3.readInt();
                boolean r2 = true;
                if (r3.readInt() == 1) goto L6;
                r2 = false;
            L6:
                r0.isOpen = r2;
                if (r0.isOpen == false) goto L9;
                r0.menuState = r3.readBundle(r4);
            L9:
                return r0;
            }

            static {
                CREATOR = new 1();
            }
        }

        PanelFeatureState(int r1) {
            this.featureId = r1;
            this.refreshDecorView = false;
        }

        public boolean hasPanelItems() {
            if (this.shownPanelView != null) goto L6;
            return false;
        L6:
            if (this.createdPanelView == null) goto L9;
            return true;
        L9:
            if (this.listMenuPresenter.getAdapter().getCount() <= 0) goto L12;
            return true;
        L12:
            return false;
        }

        public void clearMenuPresenters() {
            MenuBuilder r0 = this.menu;
            if (r0 == null) goto L5;
            r0.removeMenuPresenter(this.listMenuPresenter);
        L5:
            this.listMenuPresenter = null;
        }

        void setStyle(Context r5) {
            TypedValue r0 = new TypedValue();
            Resources.Theme r1 = r5.getResources().newTheme();
            r1.setTo(r5.getTheme());
            r1.resolveAttribute(R.attr.actionBarPopupTheme, r0, true);
            if (r0.resourceId == 0) goto L5;
            r1.applyStyle(r0.resourceId, true);
        L5:
            r1.resolveAttribute(R.attr.panelMenuListTheme, r0, true);
            if (r0.resourceId == 0) goto L8;
            r1.applyStyle(r0.resourceId, true);
        L9:
            ContextThemeWrapper r02 = new ContextThemeWrapper(r5, 0);
            r02.getTheme().setTo(r1);
            this.listPresenterContext = r02;
            TypedArray r52 = r02.obtainStyledAttributes(R.styleable.AppCompatTheme);
            this.background = r52.getResourceId(R.styleable.AppCompatTheme_panelBackground, 0);
            this.windowAnimations = r52.getResourceId(R.styleable.AppCompatTheme_android_windowAnimationStyle, 0);
            r52.recycle();
            return;
        L8:
            r1.applyStyle(R.style.Theme_AppCompat_CompactMenu, true);
            goto L9
        }

        void setMenu(MenuBuilder r3) {
            MenuBuilder r0 = this.menu;
            if (r3 != r0) goto L5;
            return;
        L5:
            if (r0 == null) goto L7;
            r0.removeMenuPresenter(this.listMenuPresenter);
        L7:
            this.menu = r3;
            if (r3 == null) goto L13;
            ListMenuPresenter r02 = this.listMenuPresenter;
            if (r02 == null) goto L14;
            r3.addMenuPresenter(r02);
            return;
        L14:
            return;
        }

        MenuView getListMenuView(MenuPresenter.Callback r4) {
            if (this.menu != null) goto L7;
            return null;
        L7:
            if (this.listMenuPresenter != null) goto L10;
            this.listMenuPresenter = new ListMenuPresenter(this.listPresenterContext, R.layout.abc_list_menu_item_layout);
            this.listMenuPresenter.setCallback(r4);
            this.menu.addMenuPresenter(this.listMenuPresenter);
        L10:
            return this.listMenuPresenter.getMenuView(this.decorView);
        }

        Parcelable onSaveInstanceState() {
            SavedState r0 = new SavedState();
            r0.featureId = this.featureId;
            r0.isOpen = this.isOpen;
            if (this.menu == null) goto L5;
            r0.menuState = new Bundle();
            this.menu.savePresenterStates(r0.menuState);
        L5:
            return r0;
        }

        void onRestoreInstanceState(Parcelable r2) {
            SavedState r22 = (SavedState) r2;
            this.featureId = r22.featureId;
            this.wasLastOpen = r22.isOpen;
            this.frozenMenuState = r22.menuState;
            this.shownPanelView = null;
            this.decorView = null;
        }

        void applyFrozenState() {
            MenuBuilder r0 = this.menu;
            if (r0 == null) goto L8;
            Bundle r1 = this.frozenMenuState;
            if (r1 == null) goto L9;
            r0.restorePresenterStates(r1);
            this.frozenMenuState = null;
            return;
        L9:
            return;
        }
    }

    private final class PanelMenuPresenterCallback implements MenuPresenter.Callback {
        final AppCompatDelegateImpl this$0;

        PanelMenuPresenterCallback(AppCompatDelegateImpl r1) {
            this.this$0 = r1;
        }

        @Override
        public void onCloseMenu(MenuBuilder r5, boolean r6) {
            MenuBuilder r0 = r5.getRootMenu();
            if (r0 == r5) goto L5;
            boolean r2 = true;
        L6:
            AppCompatDelegateImpl r3 = this.this$0;
            if (r2 == false) goto L9;
            r5 = r0;
        L9:
            PanelFeatureState r52 = r3.findMenuPanel(r5);
            if (r52 == null) goto L15;
            if (r2 == false) goto L13;
            this.this$0.callOnPanelClosed(r52.featureId, r52, r0);
            this.this$0.closePanel(r52, true);
            return;
        L13:
            this.this$0.closePanel(r52, r6);
            return;
        L15:
            return;
        L5:
            r2 = false;
            goto L6
        }

        @Override
        public boolean onOpenSubMenu(MenuBuilder r3) {
            if (r3 == null) goto L4;
            return true;
        L4:
            if (this.this$0.mHasActionBar == false) goto L13;
            Window.Callback r0 = this.this$0.getWindowCallback();
            if (r0 != null) goto L8;
            return true;
        L8:
            if (this.this$0.mIsDestroyed == true) goto L15;
            r0.onMenuOpened(108, r3);
            return true;
        L15:
            return true;
        L13:
            return true;
        }
    }

    void onSubDecorInstalled(ViewGroup r1) {
    }

    static {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        boolean r0 = true;
    L6:
        IS_PRE_LOLLIPOP = r0;
        sWindowBackgroundStyleable = new int[]{android.R.attr.windowBackground};
        if (IS_PRE_LOLLIPOP == true) goto L9;
        return;
    L9:
        if (sInstalledExceptionHandler == true) goto L13;
        final Thread.UncaughtExceptionHandler r02 = Thread.getDefaultUncaughtExceptionHandler();
        Thread.setDefaultUncaughtExceptionHandler(new 1(r02));
        sInstalledExceptionHandler = true;
        return;
    L13:
        return;
    L5:
        r0 = false;
        goto L6
    }

    AppCompatDelegateImpl(Context r3, Window r4, AppCompatCallback r5) {
        this.mFadeAnim = null;
        this.mHandleNativeActionModes = true;
        this.mLocalNightMode = -100;
        this.mInvalidatePanelMenuRunnable = new 2(this);
        this.mContext = r3;
        this.mWindow = r4;
        this.mAppCompatCallback = r5;
        this.mOriginalWindowCallback = this.mWindow.getCallback();
        Window.Callback r42 = this.mOriginalWindowCallback;
        if ((r42 instanceof AppCompatWindowCallback) == true) goto L10;
        this.mAppCompatWindowCallback = new AppCompatWindowCallback(this, r42);
        this.mWindow.setCallback(this.mAppCompatWindowCallback);
        TintTypedArray r32 = TintTypedArray.obtainStyledAttributes(r3, null, sWindowBackgroundStyleable);
        Drawable r43 = r32.getDrawableIfKnown(0);
        if (r43 == null) goto L7;
        this.mWindow.setBackgroundDrawable(r43);
    L7:
        r32.recycle();
        return;
    L10:
        throw new IllegalStateException("AppCompat has already installed itself into the Window");
    }

    @Override
    public void onCreate(Bundle r3) {
        Window.Callback r0 = this.mOriginalWindowCallback;
        if ((r0 instanceof Activity) == false) goto L11;
        String r1 = null;
        r1 = NavUtils.getParentActivityName((Activity) r0);     // Catch: IllegalArgumentException -> L16
    L6:
        if (r1 == null) goto L11;
        ActionBar r02 = peekSupportActionBar();
        if (r02 != null) goto L10;
        this.mEnableDefaultActionBarUp = true;
        goto L11
    L10:
        r02.setDefaultDisplayHomeAsUpEnabled(true);
    L11:
        if (r3 != null) goto L13;
        return;
    L13:
        if (this.mLocalNightMode != (-100)) goto L20;
        this.mLocalNightMode = r3.getInt(KEY_LOCAL_NIGHT_MODE, -100);
        return;
    }

    @Override
    public void onPostCreate(Bundle r1) {
        ensureSubDecor();
    }

    @Override
    public ActionBar getSupportActionBar() {
        initWindowDecorActionBar();
        return this.mActionBar;
    }

    final ActionBar peekSupportActionBar() {
        return this.mActionBar;
    }

    final Window.Callback getWindowCallback() {
        return this.mWindow.getCallback();
    }

    private void initWindowDecorActionBar() {
        ensureSubDecor();
        if (this.mHasActionBar == true) goto L5;
        return;
    L5:
        if (this.mActionBar != null) goto L19;
        Window.Callback r0 = this.mOriginalWindowCallback;
        if ((r0 instanceof Activity) == false) goto L11;
        this.mActionBar = new WindowDecorActionBar((Activity) r0, this.mOverlayActionBar);
    L13:
        ActionBar r02 = this.mActionBar;
        if (r02 == null) goto L18;
        r02.setDefaultDisplayHomeAsUpEnabled(this.mEnableDefaultActionBarUp);
        return;
    L18:
        return;
    L11:
        if ((r0 instanceof Dialog) == false) goto L13;
        this.mActionBar = new WindowDecorActionBar((Dialog) r0);
        goto L13
    }

    @Override
    public void setSupportActionBar(Toolbar r4) {
        if ((this.mOriginalWindowCallback instanceof Activity) == true) goto L5;
        return;
    L5:
        ActionBar r0 = getSupportActionBar();
        if ((r0 instanceof WindowDecorActionBar) == true) goto L16;
        this.mMenuInflater = null;
        if (r0 == null) goto L10;
        r0.onDestroy();
    L10:
        if (r4 == null) goto L12;
        ToolbarActionBar r02 = new ToolbarActionBar(r4, ((Activity) this.mOriginalWindowCallback).getTitle(), this.mAppCompatWindowCallback);
        this.mActionBar = r02;
        this.mWindow.setCallback(r02.getWrappedWindowCallback());
    L13:
        invalidateOptionsMenu();
        return;
    L12:
        this.mActionBar = null;
        this.mWindow.setCallback(this.mAppCompatWindowCallback);
        goto L13
    L16:
        throw new IllegalStateException("This Activity already has an action bar supplied by the window decor. Do not request Window.FEATURE_SUPPORT_ACTION_BAR and set windowActionBar to false in your theme to use a Toolbar instead.");
    }

    final Context getActionBarThemedContext() {
        ActionBar r0 = getSupportActionBar();
        if (r0 == null) goto L5;
        Context r02 = r0.getThemedContext();
    L6:
        if (r02 == null) goto L8;
        return r02;
    L8:
        return this.mContext;
    L5:
        r02 = null;
        goto L6
    }

    @Override
    public MenuInflater getMenuInflater() {
        if (this.mMenuInflater != null) goto L10;
        initWindowDecorActionBar();
        ActionBar r1 = this.mActionBar;
        if (r1 == null) goto L7;
        Context r12 = r1.getThemedContext();
    L8:
        this.mMenuInflater = new SupportMenuInflater(r12);
        goto L10
    L7:
        r12 = this.mContext;
    L10:
        return this.mMenuInflater;
    }

    @Override
    @Nullable
    public <T extends View> T findViewById(@IdRes int r2) {
        ensureSubDecor();
        return (T) this.mWindow.findViewById(r2);
    }

    @Override
    public void onConfigurationChanged(Configuration r2) {
        if (this.mHasActionBar == true) goto L5;
    L9:
        AppCompatDrawableManager.get().onConfigurationChanged(this.mContext);
        applyDayNight();
        return;
    L5:
        if (this.mSubDecorInstalled == false) goto L9;
        ActionBar r0 = getSupportActionBar();
        if (r0 == null) goto L9;
        r0.onConfigurationChanged(r2);
        goto L9
    }

    @Override
    public void onStart() {
        applyDayNight();
    }

    @Override
    public void onStop() {
        ActionBar r0 = getSupportActionBar();
        if (r0 == null) goto L5;
        r0.setShowHideAnimationEnabled(false);
    L5:
        AutoNightModeManager r02 = this.mAutoNightModeManager;
        if (r02 == null) goto L9;
        r02.cleanup();
        return;
    }

    @Override
    public void onPostResume() {
        ActionBar r0 = getSupportActionBar();
        if (r0 == null) goto L6;
        r0.setShowHideAnimationEnabled(true);
        return;
    }

    @Override
    public void setContentView(View r3) {
        ensureSubDecor();
        ViewGroup r0 = (ViewGroup) this.mSubDecor.findViewById(android.R.id.content);
        r0.removeAllViews();
        r0.addView(r3);
        this.mOriginalWindowCallback.onContentChanged();
    }

    @Override
    public void setContentView(int r3) {
        ensureSubDecor();
        ViewGroup r0 = (ViewGroup) this.mSubDecor.findViewById(android.R.id.content);
        r0.removeAllViews();
        LayoutInflater.from(this.mContext).inflate(r3, r0);
        this.mOriginalWindowCallback.onContentChanged();
    }

    @Override
    public void setContentView(View r3, ViewGroup.LayoutParams r4) {
        ensureSubDecor();
        ViewGroup r0 = (ViewGroup) this.mSubDecor.findViewById(android.R.id.content);
        r0.removeAllViews();
        r0.addView(r3, r4);
        this.mOriginalWindowCallback.onContentChanged();
    }

    @Override
    public void addContentView(View r3, ViewGroup.LayoutParams r4) {
        ensureSubDecor();
        ((ViewGroup) this.mSubDecor.findViewById(android.R.id.content)).addView(r3, r4);
        this.mOriginalWindowCallback.onContentChanged();
    }

    @Override
    public void onSaveInstanceState(Bundle r3) {
        int r0 = this.mLocalNightMode;
        if (r0 == (-100)) goto L6;
        r3.putInt(KEY_LOCAL_NIGHT_MODE, r0);
        return;
    }

    @Override
    public void onDestroy() {
        if (this.mInvalidatePanelMenuPosted == false) goto L5;
        this.mWindow.getDecorView().removeCallbacks(this.mInvalidatePanelMenuRunnable);
    L5:
        this.mIsDestroyed = true;
        ActionBar r0 = this.mActionBar;
        if (r0 == null) goto L8;
        r0.onDestroy();
    L8:
        AutoNightModeManager r02 = this.mAutoNightModeManager;
        if (r02 == null) goto L12;
        r02.cleanup();
        return;
    }

    private void ensureSubDecor() {
        if (this.mSubDecorInstalled == true) goto L22;
        this.mSubDecor = createSubDecor();
        CharSequence r0 = getTitle();
        if (TextUtils.isEmpty(r0) == true) goto L15;
        DecorContentParent r1 = this.mDecorContentParent;
        if (r1 == null) goto L10;
        r1.setWindowTitle(r0);
        goto L15
    L10:
        if (peekSupportActionBar() == null) goto L12;
        peekSupportActionBar().setWindowTitle(r0);
        goto L15
    L12:
        TextView r12 = this.mTitleView;
        if (r12 == null) goto L15;
        r12.setText(r0);
    L15:
        applyFixedSizeWindow();
        onSubDecorInstalled(this.mSubDecor);
        this.mSubDecorInstalled = true;
        PanelFeatureState r02 = getPanelState(0, false);
        if (this.mIsDestroyed == true) goto L23;
        if (r02 != null) goto L19;
    L20:
        invalidatePanelMenu(108);
        return;
    L19:
        if (r02.menu == null) goto L20;
        return;
    L23:
        return;
    }

    private ViewGroup createSubDecor() {
        TypedArray r0 = this.mContext.obtainStyledAttributes(R.styleable.AppCompatTheme);
        if (r0.hasValue(R.styleable.AppCompatTheme_windowActionBar) == true) goto L5;
        r0.recycle();
        throw new IllegalStateException("You need to use a Theme.AppCompat theme (or descendant) with this activity.");
    L5:
        if (r0.getBoolean(R.styleable.AppCompatTheme_windowNoTitle, false) == false) goto L8;
        requestWindowFeature(1);
    L11:
        if (r0.getBoolean(R.styleable.AppCompatTheme_windowActionBarOverlay, false) == false) goto L14;
        requestWindowFeature(109);
    L14:
        if (r0.getBoolean(R.styleable.AppCompatTheme_windowActionModeOverlay, false) == false) goto L16;
        requestWindowFeature(10);
    L16:
        this.mIsFloating = r0.getBoolean(R.styleable.AppCompatTheme_android_windowIsFloating, false);
        r0.recycle();
        this.mWindow.getDecorView();
        LayoutInflater r02 = LayoutInflater.from(this.mContext);
        if (this.mWindowNoTitle == true) goto L38;
        if (this.mIsFloating == false) goto L22;
        ViewGroup r03 = (ViewGroup) r02.inflate(R.layout.abc_dialog_title_material, null);
        this.mOverlayActionBar = false;
        this.mHasActionBar = false;
    L45:
        if (r03 == null) goto L60;
        if (this.mDecorContentParent != null) goto L49;
        this.mTitleView = (TextView) r03.findViewById(R.id.title);
    L49:
        ViewUtils.makeOptionalFitsSystemWindows(r03);
        ContentFrameLayout r1 = (ContentFrameLayout) r03.findViewById(R.id.action_bar_activity_content);
        ViewGroup r3 = (ViewGroup) this.mWindow.findViewById(android.R.id.content);
        if (r3 != null) goto L52;
    L57:
        this.mWindow.setContentView(r03);
        r1.setAttachListener(new 5(this));
        return r03;
    L52:
        if (r3.getChildCount() <= 0) goto L54;
        View r6 = r3.getChildAt(0);
        r3.removeViewAt(0);
        r1.addView(r6);
        goto L52
    L54:
        r3.setId(-1);
        r1.setId(android.R.id.content);
        if ((r3 instanceof FrameLayout) == false) goto L57;
        ((FrameLayout) r3).setForeground(null);
        goto L57
    L60:
        throw new IllegalArgumentException("AppCompat does not support the current theme features: { windowActionBar: " + this.mHasActionBar + ", windowActionBarOverlay: " + this.mOverlayActionBar + ", android:windowIsFloating: " + this.mIsFloating + ", windowActionModeOverlay: " + this.mOverlayActionMode + ", windowNoTitle: " + this.mWindowNoTitle + " }");
    L22:
        if (this.mHasActionBar == false) goto L36;
        TypedValue r04 = new TypedValue();
        this.mContext.getTheme().resolveAttribute(R.attr.actionBarTheme, r04, true);
        if (r04.resourceId == 0) goto L26;
        Context r12 = new ContextThemeWrapper(this.mContext, r04.resourceId);
    L27:
        r03 = (ViewGroup) LayoutInflater.from(r12).inflate(R.layout.abc_screen_toolbar, null);
        this.mDecorContentParent = (DecorContentParent) r03.findViewById(R.id.decor_content_parent);
        this.mDecorContentParent.setWindowCallback(getWindowCallback());
        if (this.mOverlayActionBar == false) goto L31;
        this.mDecorContentParent.initFeature(109);
    L31:
        if (this.mFeatureProgress == false) goto L34;
        this.mDecorContentParent.initFeature(2);
    L34:
        if (this.mFeatureIndeterminateProgress == false) goto L45;
        this.mDecorContentParent.initFeature(5);
        goto L45
    L26:
        r12 = this.mContext;
        goto L27
    L36:
        r03 = null;
        goto L45
    L38:
        if (this.mOverlayActionMode == false) goto L40;
        r03 = (ViewGroup) r02.inflate(R.layout.abc_screen_simple_overlay_action_mode, null);
    L42:
        if (Build.VERSION.SDK_INT < 21) goto L44;
        ViewCompat.setOnApplyWindowInsetsListener(r03, new 3(this));
        goto L45
    L44:
        ((FitWindowsViewGroup) r03).setOnFitSystemWindowsListener(new 4(this));
        goto L45
    L40:
        r03 = (ViewGroup) r02.inflate(R.layout.abc_screen_simple, null);
        goto L42
    L8:
        if (r0.getBoolean(R.styleable.AppCompatTheme_windowActionBar, false) == false) goto L11;
        requestWindowFeature(108);
        goto L11
    }

    private void applyFixedSizeWindow() {
        ContentFrameLayout r0 = (ContentFrameLayout) this.mSubDecor.findViewById(android.R.id.content);
        View r1 = this.mWindow.getDecorView();
        r0.setDecorPadding(r1.getPaddingLeft(), r1.getPaddingTop(), r1.getPaddingRight(), r1.getPaddingBottom());
        TypedArray r12 = this.mContext.obtainStyledAttributes(R.styleable.AppCompatTheme);
        r12.getValue(R.styleable.AppCompatTheme_windowMinWidthMajor, r0.getMinWidthMajor());
        r12.getValue(R.styleable.AppCompatTheme_windowMinWidthMinor, r0.getMinWidthMinor());
        if (r12.hasValue(R.styleable.AppCompatTheme_windowFixedWidthMajor) == false) goto L6;
        r12.getValue(R.styleable.AppCompatTheme_windowFixedWidthMajor, r0.getFixedWidthMajor());
    L6:
        if (r12.hasValue(R.styleable.AppCompatTheme_windowFixedWidthMinor) == false) goto L9;
        r12.getValue(R.styleable.AppCompatTheme_windowFixedWidthMinor, r0.getFixedWidthMinor());
    L9:
        if (r12.hasValue(R.styleable.AppCompatTheme_windowFixedHeightMajor) == false) goto L12;
        r12.getValue(R.styleable.AppCompatTheme_windowFixedHeightMajor, r0.getFixedHeightMajor());
    L12:
        if (r12.hasValue(R.styleable.AppCompatTheme_windowFixedHeightMinor) == false) goto L14;
        r12.getValue(R.styleable.AppCompatTheme_windowFixedHeightMinor, r0.getFixedHeightMinor());
    L14:
        r12.recycle();
        r0.requestLayout();
    }

    @Override
    public boolean requestWindowFeature(int r5) {
        int r52 = sanitizeWindowFeatureId(r5);
        if (this.mWindowNoTitle == false) goto L7;
        if (r52 != 108) goto L7;
        return false;
    L7:
        if (this.mHasActionBar == false) goto L10;
        if (r52 != 1) goto L10;
        this.mHasActionBar = false;
    L10:
        if (r52 != 1) goto L12;
        throwFeatureRequestIfSubDecorInstalled();
        this.mWindowNoTitle = true;
        return true;
    L12:
        if (r52 != 2) goto L14;
        throwFeatureRequestIfSubDecorInstalled();
        this.mFeatureProgress = true;
        return true;
    L14:
        if (r52 != 5) goto L16;
        throwFeatureRequestIfSubDecorInstalled();
        this.mFeatureIndeterminateProgress = true;
        return true;
    L16:
        if (r52 == 10) goto L26;
        if (r52 != 108) goto L19;
        throwFeatureRequestIfSubDecorInstalled();
        this.mHasActionBar = true;
        return true;
    L19:
        if (r52 != 109) goto L21;
        throwFeatureRequestIfSubDecorInstalled();
        this.mOverlayActionBar = true;
        return true;
    L21:
        return this.mWindow.requestFeature(r52);
    L26:
        throwFeatureRequestIfSubDecorInstalled();
        this.mOverlayActionMode = true;
        return true;
    }

    @Override
    public boolean hasWindowFeature(int r5) {
        int r0 = sanitizeWindowFeatureId(r5);
        if (r0 != 1) goto L5;
        boolean r02 = this.mWindowNoTitle;
    L21:
        if (r02 == false) goto L23;
        return true;
    L23:
        if (this.mWindow.hasFeature(r5) == true) goto L28;
        return false;
    L28:
        return true;
    L5:
        if (r0 != 2) goto L7;
        r02 = this.mFeatureProgress;
        goto L21
    L7:
        if (r0 != 5) goto L9;
        r02 = this.mFeatureIndeterminateProgress;
        goto L21
    L9:
        if (r0 != 10) goto L11;
        r02 = this.mOverlayActionMode;
        goto L21
    L11:
        if (r0 != 108) goto L13;
        r02 = this.mHasActionBar;
        goto L21
    L13:
        if (r0 == 109) goto L15;
        r02 = false;
        goto L21
    L15:
        r02 = this.mOverlayActionBar;
        goto L21
    }

    @Override
    public final void setTitle(CharSequence r2) {
        this.mTitle = r2;
        DecorContentParent r0 = this.mDecorContentParent;
        if (r0 == null) goto L6;
        r0.setWindowTitle(r2);
        return;
    L6:
        if (peekSupportActionBar() == null) goto L8;
        peekSupportActionBar().setWindowTitle(r2);
        return;
    L8:
        TextView r02 = this.mTitleView;
        if (r02 == null) goto L14;
        r02.setText(r2);
        return;
    }

    final CharSequence getTitle() {
        Window.Callback r0 = this.mOriginalWindowCallback;
        if ((r0 instanceof Activity) == false) goto L7;
        return ((Activity) r0).getTitle();
    L7:
        return this.mTitle;
    }

    void onPanelClosed(int r3) {
        if (r3 != 108) goto L7;
        ActionBar r32 = getSupportActionBar();
        if (r32 == null) goto L12;
        r32.dispatchMenuVisibilityChanged(false);
        return;
    L12:
        return;
    L7:
        if (r3 != 0) goto L14;
        PanelFeatureState r33 = getPanelState(r3, true);
        if (r33.isOpen == false) goto L15;
        closePanel(r33, false);
        return;
    L15:
        return;
    }

    void onMenuOpened(int r2) {
        if (r2 != 108) goto L8;
        ActionBar r22 = getSupportActionBar();
        if (r22 == null) goto L9;
        r22.dispatchMenuVisibilityChanged(true);
        return;
    L9:
        return;
    }

    @Override
    public boolean onMenuItemSelected(MenuBuilder r3, MenuItem r4) {
        Window.Callback r0 = getWindowCallback();
        if (r0 != null) goto L5;
        return false;
    L5:
        if (this.mIsDestroyed == true) goto L12;
        PanelFeatureState r32 = findMenuPanel(r3.getRootMenu());
        if (r32 != null) goto L9;
        return false;
    L9:
        return r0.onMenuItemSelected(r32.featureId, r4);
    L12:
        return false;
    }

    @Override
    public void onMenuModeChange(MenuBuilder r2) {
        reopenMenu(r2, true);
    }

    @Override
    public android.support.v7.view.ActionMode startSupportActionMode(@NonNull ActionMode.Callback r3) {
        if (r3 == null) goto L19;
        android.support.v7.view.ActionMode r0 = this.mActionMode;
        if (r0 == null) goto L6;
        r0.finish();
    L6:
        ActionModeCallbackWrapperV9 r02 = new ActionModeCallbackWrapperV9(this, r3);
        ActionBar r32 = getSupportActionBar();
        if (r32 == null) goto L14;
        this.mActionMode = r32.startActionMode(r02);
        android.support.v7.view.ActionMode r33 = this.mActionMode;
        if (r33 == null) goto L14;
        AppCompatCallback r1 = this.mAppCompatCallback;
        if (r1 == null) goto L14;
        r1.onSupportActionModeStarted(r33);
    L14:
        if (this.mActionMode != null) goto L17;
        this.mActionMode = startSupportActionModeFromWindow(r02);
    L17:
        return this.mActionMode;
    L19:
        throw new IllegalArgumentException("ActionMode callback can not be null.");
    }

    @Override
    public void invalidateOptionsMenu() {
        ActionBar r0 = getSupportActionBar();
        if (r0 != null) goto L5;
    L7:
        invalidatePanelMenu(0);
        return;
    L5:
        if (r0.invalidateOptionsMenu() == false) goto L7;
    }

    android.support.v7.view.ActionMode startSupportActionModeFromWindow(@NonNull ActionMode.Callback r8) {
        endOnGoingFadeAnimation();
        android.support.v7.view.ActionMode r0 = this.mActionMode;
        if (r0 == null) goto L6;
        r0.finish();
    L6:
        if ((r8 instanceof ActionModeCallbackWrapperV9) == true) goto L8;
        r8 = new ActionModeCallbackWrapperV9(this, r8);
    L8:
        AppCompatCallback r02 = this.mAppCompatCallback;
        if (r02 != null) goto L11;
    L14:
        android.support.v7.view.ActionMode r03 = null;
    L15:
        if (r03 == null) goto L17;
        this.mActionMode = r03;
    L47:
        android.support.v7.view.ActionMode r82 = this.mActionMode;
        if (r82 == null) goto L53;
        AppCompatCallback r04 = this.mAppCompatCallback;
        if (r04 == null) goto L53;
        r04.onSupportActionModeStarted(r82);
    L53:
        return this.mActionMode;
    L17:
        boolean r3 = true;
        if (this.mActionModeView != null) goto L30;
        if (this.mIsFloating == false) goto L26;
        TypedValue r05 = new TypedValue();
        Resources.Theme r4 = this.mContext.getTheme();
        r4.resolveAttribute(R.attr.actionBarTheme, r05, true);
        if (r05.resourceId == 0) goto L24;
        Resources.Theme r5 = this.mContext.getResources().newTheme();
        r5.setTo(r4);
        r5.applyStyle(r05.resourceId, true);
        Context r42 = new ContextThemeWrapper(this.mContext, 0);
        r42.getTheme().setTo(r5);
    L25:
        this.mActionModeView = new ActionBarContextView(r42);
        this.mActionModePopup = new PopupWindow(r42, null, R.attr.actionModePopupWindowStyle);
        PopupWindowCompat.setWindowLayoutType(this.mActionModePopup, 2);
        this.mActionModePopup.setContentView(this.mActionModeView);
        this.mActionModePopup.setWidth(-1);
        r42.getTheme().resolveAttribute(R.attr.actionBarSize, r05, true);
        this.mActionModeView.setContentHeight(TypedValue.complexToDimensionPixelSize(r05.data, r42.getResources().getDisplayMetrics()));
        this.mActionModePopup.setHeight(-2);
        this.mShowActionModePopup = new 6(this);
        goto L30
    L24:
        r42 = this.mContext;
        goto L25
    L26:
        ViewStubCompat r06 = (ViewStubCompat) this.mSubDecor.findViewById(R.id.action_mode_bar_stub);
        if (r06 == null) goto L30;
        r06.setLayoutInflater(LayoutInflater.from(getActionBarThemedContext()));
        this.mActionModeView = (ActionBarContextView) r06.inflate();
    L30:
        if (this.mActionModeView == null) goto L47;
        endOnGoingFadeAnimation();
        this.mActionModeView.killMode();
        Context r43 = this.mActionModeView.getContext();
        ActionBarContextView r52 = this.mActionModeView;
        if (this.mActionModePopup == null) goto L35;
        r3 = false;
    L35:
        StandaloneActionMode r07 = new StandaloneActionMode(r43, r52, r8, r3);
        if (r8.onCreateActionMode(r07, r07.getMenu()) == false) goto L46;
        r07.invalidate();
        this.mActionModeView.initForMode(r07);
        this.mActionMode = r07;
        if (shouldAnimateActionModeView() == false) goto L40;
        this.mActionModeView.setAlpha(0.0f);
        this.mFadeAnim = ViewCompat.animate(this.mActionModeView).alpha(1.0f);
        this.mFadeAnim.setListener(new 7(this));
    L44:
        if (this.mActionModePopup == null) goto L47;
        this.mWindow.getDecorView().post(this.mShowActionModePopup);
        goto L47
    L40:
        this.mActionModeView.setAlpha(1.0f);
        this.mActionModeView.setVisibility(0);
        this.mActionModeView.sendAccessibilityEvent(32);
        if ((this.mActionModeView.getParent() instanceof View) == false) goto L44;
        ViewCompat.requestApplyInsets((View) this.mActionModeView.getParent());
        goto L44
    L46:
        this.mActionMode = null;
        goto L47
    L11:
        if (this.mIsDestroyed == true) goto L14;
        r03 = r02.onWindowStartingSupportActionMode(r8);     // Catch: AbstractMethodError -> L54
        goto L15
    }

    final boolean shouldAnimateActionModeView() {
        if (this.mSubDecorInstalled == false) goto L9;
        ViewGroup r0 = this.mSubDecor;
        if (r0 == null) goto L9;
        if (ViewCompat.isLaidOut(r0) == false) goto L9;
        return true;
    L9:
        return false;
    }

    @Override
    public void setHandleNativeActionModesEnabled(boolean r1) {
        this.mHandleNativeActionModes = r1;
    }

    @Override
    public boolean isHandleNativeActionModesEnabled() {
        return this.mHandleNativeActionModes;
    }

    void endOnGoingFadeAnimation() {
        ViewPropertyAnimatorCompat r0 = this.mFadeAnim;
        if (r0 == null) goto L6;
        r0.cancel();
        return;
    }

    boolean onBackPressed() {
        android.support.v7.view.ActionMode r0 = this.mActionMode;
        if (r0 == null) goto L6;
        r0.finish();
        return true;
    L6:
        ActionBar r02 = getSupportActionBar();
        if (r02 != null) goto L9;
        return false;
    L9:
        if (r02.collapseActionView() == false) goto L13;
        return true;
    L13:
        return false;
    }

    boolean onKeyShortcut(int r4, KeyEvent r5) {
        ActionBar r0 = getSupportActionBar();
        if (r0 != null) goto L5;
    L7:
        PanelFeatureState r42 = this.mPreparedPanel;
        if (r42 == null) goto L16;
        if (performPanelShortcut(r42, r5.getKeyCode(), r5, 1) == false) goto L16;
        PanelFeatureState r43 = this.mPreparedPanel;
        if (r43 == null) goto L14;
        r43.isHandled = true;
    L14:
        return true;
    L16:
        if (this.mPreparedPanel != null) goto L20;
        PanelFeatureState r44 = getPanelState(0, true);
        preparePanel(r44, r5);
        boolean r52 = performPanelShortcut(r44, r5.getKeyCode(), r5, 1);
        r44.isPrepared = false;
        if (r52 == false) goto L20;
        return true;
    L20:
        return false;
    L5:
        if (r0.onKeyShortcut(r4, r5) == false) goto L7;
        return true;
    }

    boolean dispatchKeyEvent(KeyEvent r4) {
        Window.Callback r0 = this.mOriginalWindowCallback;
        boolean r2 = true;
        if ((r0 instanceof KeyEventDispatcher.Component) == false) goto L5;
    L6:
        View r02 = this.mWindow.getDecorView();
        if (r02 != null) goto L9;
    L12:
        if (r4.getKeyCode() == 82) goto L14;
    L16:
        int r03 = r4.getKeyCode();
        if (r4.getAction() == 0) goto L20;
        r2 = false;
    L20:
        if (r2 == false) goto L23;
        return onKeyDown(r03, r4);
    L23:
        return onKeyUp(r03, r4);
    L14:
        if (this.mOriginalWindowCallback.dispatchKeyEvent(r4) == false) goto L16;
        return true;
    L9:
        if (KeyEventDispatcher.dispatchBeforeHierarchy(r02, r4) == false) goto L12;
        return true;
    L5:
        if ((r0 instanceof AppCompatDialog) == false) goto L12;
        goto L6
    }

    boolean onKeyUp(int r4, KeyEvent r5) {
        if (r4 != 4) goto L5;
        boolean r42 = this.mLongPressBackDown;
        this.mLongPressBackDown = false;
        PanelFeatureState r52 = getPanelState(0, false);
        if (r52 == null) goto L17;
        if (r52.isOpen == false) goto L17;
        if (r42 == true) goto L15;
        closePanel(r52, true);
    L15:
        return true;
    L17:
        if (onBackPressed() == false) goto L19;
        return true;
    L19:
        return false;
    L5:
        if (r4 != 82) goto L19;
        onKeyUpPanel(0, r5);
        return true;
    }

    boolean onKeyDown(int r4, KeyEvent r5) {
        boolean r1 = true;
        if (r4 == 4) goto L10;
        if (r4 != 82) goto L14;
        onKeyDownPanel(0, r5);
        return true;
    L14:
        return false;
    L10:
        if ((r5.getFlags() & 128) != 0) goto L13;
        r1 = false;
    L13:
        this.mLongPressBackDown = r1;
        goto L14
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override
    public View createView(View r12, String r13, @NonNull Context r14, @NonNull AttributeSet r15) {
        boolean r1 = false;
        if (this.mAppCompatViewInflater != null) goto L15;
        String r0 = this.mContext.obtainStyledAttributes(R.styleable.AppCompatTheme).getString(R.styleable.AppCompatTheme_viewInflaterClass);
        if (r0 != null) goto L7;
    L13:
        this.mAppCompatViewInflater = new AppCompatViewInflater();
        goto L15
    L7:
        if (AppCompatViewInflater.class.getName().equals(r0) == true) goto L13;
        this.mAppCompatViewInflater = (AppCompatViewInflater) Class.forName(r0).getDeclaredConstructor(new Class[0]).newInstance(new Object[0]);     // Catch: Throwable -> L11
    L11:
        th = move-exception;
        Log.i("AppCompatDelegate", "Failed to instantiate custom view inflater " + r0 + ". Falling back to default.", th);
        this.mAppCompatViewInflater = new AppCompatViewInflater();
    L15:
        if (IS_PRE_LOLLIPOP == true) goto L17;
        boolean r7 = false;
    L25:
        return this.mAppCompatViewInflater.createView(r12, r13, r14, r15, r7, IS_PRE_LOLLIPOP, true, VectorEnabledTintResources.shouldBeUsed());
    L17:
        if ((r15 instanceof XmlPullParser) == true) goto L19;
        r1 = shouldInheritContext((ViewParent) r12);
    L22:
        r7 = r1;
        goto L25
    L19:
        if (((XmlPullParser) r15).getDepth() <= 1) goto L22;
        r1 = true;
        goto L22
    }

    private boolean shouldInheritContext(ViewParent r4) {
        if (r4 != null) goto L5;
        return false;
    L5:
        View r1 = this.mWindow.getDecorView();
    L6:
        if (r4 == null) goto L7;
        if (r4 == r1) goto L16;
        if ((r4 instanceof View) == false) goto L16;
        if (ViewCompat.isAttachedToWindow((View) r4) == true) goto L16;
        r4 = r4.getParent();
    L16:
        return false;
    L7:
        return true;
    }

    @Override
    public void installViewFactory() {
        LayoutInflater r0 = LayoutInflater.from(this.mContext);
        if (r0.getFactory() != null) goto L6;
        LayoutInflaterCompat.setFactory2(r0, this);
        return;
    L6:
        if ((r0.getFactory2() instanceof AppCompatDelegateImpl) == true) goto L10;
        Log.i("AppCompatDelegate", "The Activity's LayoutInflater already has a Factory installed so we can not install AppCompat's");
        return;
    }

    @Override
    public final View onCreateView(View r1, String r2, Context r3, AttributeSet r4) {
        return createView(r1, r2, r3, r4);
    }

    @Override
    public View onCreateView(String r2, Context r3, AttributeSet r4) {
        return onCreateView(null, r2, r3, r4);
    }

    private void openPanel(PanelFeatureState r14, KeyEvent r15) {
        if (r14.isOpen == false) goto L5;
        return;
    L5:
        if (this.mIsDestroyed == false) goto L8;
        return;
    L8:
        if (r14.featureId == 0) goto L10;
    L15:
        Window.Callback r0 = getWindowCallback();
        if (r0 != null) goto L18;
    L21:
        WindowManager r02 = (WindowManager) this.mContext.getSystemService("window");
        if (r02 != null) goto L25;
        return;
    L25:
        if (preparePanel(r14, r15) == true) goto L28;
        return;
    L28:
        if (r14.decorView == null) goto L40;
        if (r14.refreshDecorView == true) goto L40;
        if (r14.createdPanelView == null) goto L67;
        ViewGroup.LayoutParams r152 = r14.createdPanelView.getLayoutParams();
        if (r152 == null) goto L67;
        if (r152.width != (-1)) goto L67;
        int r6 = -1;
    L68:
        r14.isHandled = false;
        WindowManager.LayoutParams r153 = new WindowManager.LayoutParams(r6, -2, r14.x, r14.y, PointerIconCompat.TYPE_HAND, 8519680, -3);
        r153.gravity = r14.gravity;
        r153.windowAnimations = r14.windowAnimations;
        r02.addView(r14.decorView, r153);
        r14.isOpen = true;
        return;
    L67:
        r6 = -2;
    L40:
        if (r14.decorView != null) goto L47;
        if (initializePanelDecor(r14) == true) goto L44;
        return;
    L44:
        if (r14.decorView != null) goto L52;
        return;
    L52:
        if (initializePanelContent(r14) == true) goto L54;
        return;
    L54:
        if (r14.hasPanelItems() == false) goto L74;
        ViewGroup.LayoutParams r154 = r14.shownPanelView.getLayoutParams();
        if (r154 != null) goto L59;
        r154 = new ViewGroup.LayoutParams(-2, -2);
    L59:
        int r3 = r14.background;
        r14.decorView.setBackgroundResource(r3);
        ViewParent r32 = r14.shownPanelView.getParent();
        if (r32 != null) goto L62;
    L64:
        r14.decorView.addView(r14.shownPanelView, r154);
        if (r14.shownPanelView.hasFocus() == true) goto L67;
        r14.shownPanelView.requestFocus();
        goto L67
    L62:
        if ((r32 instanceof ViewGroup) == false) goto L64;
        ((ViewGroup) r32).removeView(r14.shownPanelView);
        goto L64
    L74:
        return;
    L47:
        if (r14.refreshDecorView == false) goto L52;
        if (r14.decorView.getChildCount() <= 0) goto L52;
        r14.decorView.removeAllViews();
        goto L52
    L18:
        if (r0.onMenuOpened(r14.featureId, r14.menu) == true) goto L21;
        closePanel(r14, true);
        return;
    L10:
        if ((this.mContext.getResources().getConfiguration().screenLayout & 15) != 4) goto L12;
        boolean r03 = true;
    L13:
        if (r03 == false) goto L15;
        return;
    L12:
        r03 = false;
        goto L13
    }

    private boolean initializePanelDecor(PanelFeatureState r3) {
        r3.setStyle(getActionBarThemedContext());
        r3.decorView = new ListMenuDecorView(this, r3.listPresenterContext);
        r3.gravity = 81;
        return true;
    }

    private void reopenMenu(MenuBuilder r5, boolean r6) {
        DecorContentParent r52 = this.mDecorContentParent;
        if (r52 != null) goto L5;
    L33:
        PanelFeatureState r53 = getPanelState(0, true);
        r53.refreshDecorView = true;
        closePanel(r53, false);
        openPanel(r53, null);
        return;
    L5:
        if (r52.canShowOverflowMenu() == false) goto L33;
        if (ViewConfiguration.get(this.mContext).hasPermanentMenuKey() == true) goto L9;
    L10:
        Window.Callback r54 = getWindowCallback();
        if (this.mDecorContentParent.isOverflowMenuShowing() == false) goto L17;
        if (r6 == false) goto L17;
        this.mDecorContentParent.hideOverflowMenu();
        if (this.mIsDestroyed == true) goto L35;
        r54.onPanelClosed(108, getPanelState(0, true).menu);
        return;
    L35:
        return;
    L17:
        if (r54 != null) goto L19;
        return;
    L19:
        if (this.mIsDestroyed == false) goto L21;
        return;
    L21:
        if (this.mInvalidatePanelMenuPosted == true) goto L23;
    L25:
        PanelFeatureState r62 = getPanelState(0, true);
        if (r62.menu != null) goto L28;
        return;
    L28:
        if (r62.refreshMenuContent == false) goto L30;
        return;
    L30:
        if (r54.onPreparePanel(0, r62.createdPanelView, r62.menu) == false) goto L41;
        r54.onMenuOpened(108, r62.menu);
        this.mDecorContentParent.showOverflowMenu();
        return;
    L41:
        return;
    L23:
        if ((this.mInvalidatePanelMenuFeatures & 1) == 0) goto L25;
        this.mWindow.getDecorView().removeCallbacks(this.mInvalidatePanelMenuRunnable);
        this.mInvalidatePanelMenuRunnable.run();
        goto L25
    L9:
        if (this.mDecorContentParent.isOverflowMenuShowPending() == false) goto L33;
        goto L10
    }

    private boolean initializePanelMenu(PanelFeatureState r7) {
        Context r0 = this.mContext;
        if (r7.featureId == 0) goto L7;
        if (r7.featureId == 108) goto L7;
    L19:
        MenuBuilder r1 = new MenuBuilder(r0);
        r1.setCallback(this);
        r7.setMenu(r1);
        return true;
    L7:
        if (this.mDecorContentParent == null) goto L19;
        TypedValue r12 = new TypedValue();
        Resources.Theme r3 = r0.getTheme();
        r3.resolveAttribute(R.attr.actionBarTheme, r12, true);
        Resources.Theme r4 = null;
        if (r12.resourceId == 0) goto L11;
        r4 = r0.getResources().newTheme();
        r4.setTo(r3);
        r4.applyStyle(r12.resourceId, true);
        r4.resolveAttribute(R.attr.actionBarWidgetTheme, r12, true);
    L13:
        if (r12.resourceId == 0) goto L17;
        if (r4 != null) goto L16;
        r4 = r0.getResources().newTheme();
        r4.setTo(r3);
    L16:
        r4.applyStyle(r12.resourceId, true);
    L17:
        if (r4 == null) goto L19;
        ContextThemeWrapper r13 = new ContextThemeWrapper(r0, 0);
        r13.getTheme().setTo(r4);
        r0 = r13;
        goto L19
    L11:
        r3.resolveAttribute(R.attr.actionBarWidgetTheme, r12, true);
        goto L13
    }

    private boolean initializePanelContent(PanelFeatureState r4) {
        if (r4.createdPanelView == null) goto L7;
        r4.shownPanelView = r4.createdPanelView;
        return true;
    L7:
        if (r4.menu != null) goto L10;
        return false;
    L10:
        if (this.mPanelMenuPresenterCallback != null) goto L12;
        this.mPanelMenuPresenterCallback = new PanelMenuPresenterCallback(this);
    L12:
        r4.shownPanelView = (View) r4.getListMenuView(this.mPanelMenuPresenterCallback);
        if (r4.shownPanelView != null) goto L17;
        return false;
    L17:
        return true;
    }

    private boolean preparePanel(PanelFeatureState r9, KeyEvent r10) {
        if (this.mIsDestroyed == false) goto L6;
        return false;
    L6:
        if (r9.isPrepared == false) goto L8;
        return true;
    L8:
        PanelFeatureState r0 = this.mPreparedPanel;
        if (r0 == null) goto L12;
        if (r0 == r9) goto L12;
        closePanel(r0, false);
    L12:
        Window.Callback r02 = getWindowCallback();
        if (r02 == null) goto L16;
        r9.createdPanelView = r02.onCreatePanelView(r9.featureId);
    L16:
        if (r9.featureId != 0) goto L18;
    L21:
        boolean r3 = true;
    L22:
        if (r3 == false) goto L27;
        DecorContentParent r4 = this.mDecorContentParent;
        if (r4 == null) goto L27;
        r4.setMenuPrepared();
    L27:
        if (r9.createdPanelView != null) goto L77;
        if (r3 == false) goto L32;
        if ((peekSupportActionBar() instanceof ToolbarActionBar) == true) goto L77;
    L32:
        if (r9.menu == null) goto L36;
        if (r9.refreshMenuContent == true) goto L36;
    L58:
        r9.menu.stopDispatchingItemsChanged();
        if (r9.frozenActionViewState == null) goto L62;
        r9.menu.restoreActionViewStates(r9.frozenActionViewState);
        r9.frozenActionViewState = null;
    L62:
        if (r02.onPreparePanel(0, r9.createdPanelView, r9.menu) == true) goto L69;
        if (r3 == false) goto L67;
        DecorContentParent r102 = this.mDecorContentParent;
        if (r102 == null) goto L67;
        r102.setMenu(null, this.mActionMenuPresenterCallback);
    L67:
        r9.menu.startDispatchingItemsChanged();
        return false;
    L69:
        if (r10 == null) goto L71;
        int r103 = r10.getDeviceId();
    L73:
        if (KeyCharacterMap.load(r103).getKeyboardType() == 1) goto L75;
        boolean r104 = true;
    L76:
        r9.qwertyMode = r104;
        r9.menu.setQwertyMode(r9.qwertyMode);
        r9.menu.startDispatchingItemsChanged();
        goto L77
    L75:
        r104 = false;
        goto L76
    L71:
        r103 = -1;
    L36:
        if (r9.menu == null) goto L38;
    L42:
        if (r3 == true) goto L44;
    L49:
        r9.menu.stopDispatchingItemsChanged();
        if (r02.onCreatePanelMenu(r9.featureId, r9.menu) == true) goto L57;
        r9.setMenu(null);
        if (r3 == false) goto L56;
        DecorContentParent r92 = this.mDecorContentParent;
        if (r92 == null) goto L56;
        r92.setMenu(null, this.mActionMenuPresenterCallback);
    L56:
        return false;
    L57:
        r9.refreshMenuContent = false;
        goto L58
    L44:
        if (this.mDecorContentParent == null) goto L49;
        if (this.mActionMenuPresenterCallback != null) goto L48;
        this.mActionMenuPresenterCallback = new ActionMenuPresenterCallback(this);
    L48:
        this.mDecorContentParent.setMenu(r9.menu, this.mActionMenuPresenterCallback);
        goto L49
    L38:
        if (initializePanelMenu(r9) == true) goto L40;
    L41:
        return false;
    L40:
        if (r9.menu != null) goto L42;
    L77:
        r9.isPrepared = true;
        r9.isHandled = false;
        this.mPreparedPanel = r9;
        return true;
    L18:
        if (r9.featureId == 108) goto L21;
        r3 = false;
        goto L22
    }

    void checkCloseActionMenu(MenuBuilder r3) {
        if (this.mClosingActionMenu == false) goto L5;
        return;
    L5:
        this.mClosingActionMenu = true;
        this.mDecorContentParent.dismissPopups();
        Window.Callback r0 = getWindowCallback();
        if (r0 != null) goto L8;
    L10:
        this.mClosingActionMenu = false;
        return;
    L8:
        if (this.mIsDestroyed == true) goto L10;
        r0.onPanelClosed(108, r3);
        goto L10
    }

    void closePanel(int r2) {
        closePanel(getPanelState(r2, true), true);
    }

    void closePanel(PanelFeatureState r4, boolean r5) {
        if (r5 == true) goto L4;
    L11:
        WindowManager r0 = (WindowManager) this.mContext.getSystemService("window");
        if (r0 != null) goto L14;
    L20:
        r4.isPrepared = false;
        r4.isHandled = false;
        r4.isOpen = false;
        r4.shownPanelView = null;
        r4.refreshDecorView = true;
        if (this.mPreparedPanel != r4) goto L24;
        this.mPreparedPanel = null;
        return;
    L24:
        return;
    L14:
        if (r4.isOpen == false) goto L20;
        if (r4.decorView == null) goto L20;
        r0.removeView(r4.decorView);
        if (r5 == false) goto L20;
        callOnPanelClosed(r4.featureId, r4, null);
        goto L20
    L4:
        if (r4.featureId != 0) goto L11;
        DecorContentParent r02 = this.mDecorContentParent;
        if (r02 == null) goto L11;
        if (r02.isOverflowMenuShowing() == false) goto L11;
        checkCloseActionMenu(r4.menu);
    }

    private boolean onKeyDownPanel(int r2, KeyEvent r3) {
        if (r3.getRepeatCount() != 0) goto L8;
        PanelFeatureState r22 = getPanelState(r2, true);
        if (r22.isOpen == false) goto L7;
        return false;
    L7:
        return preparePanel(r22, r3);
    L8:
        return false;
    }

    private boolean onKeyUpPanel(int r4, KeyEvent r5) {
        if (this.mActionMode == null) goto L5;
        return false;
    L5:
        PanelFeatureState r2 = getPanelState(r4, true);
        if (r4 != 0) goto L22;
        DecorContentParent r42 = this.mDecorContentParent;
        if (r42 == null) goto L22;
        if (r42.canShowOverflowMenu() == false) goto L22;
        if (ViewConfiguration.get(this.mContext).hasPermanentMenuKey() == true) goto L22;
        if (this.mDecorContentParent.isOverflowMenuShowing() == false) goto L16;
        boolean r43 = this.mDecorContentParent.hideOverflowMenu();
    L36:
        if (r43 == false) goto L41;
        AudioManager r52 = (AudioManager) this.mContext.getSystemService("audio");
        if (r52 == null) goto L40;
        r52.playSoundEffect(0);
        goto L41
    L40:
        Log.w("AppCompatDelegate", "Couldn't get audio manager");
    L41:
        return r43;
    L16:
        if (this.mIsDestroyed == false) goto L18;
    L34:
        r43 = false;
        goto L36
    L18:
        if (preparePanel(r2, r5) == false) goto L34;
        r43 = this.mDecorContentParent.showOverflowMenu();
    L22:
        if (r2.isOpen == false) goto L24;
    L35:
        r43 = r2.isOpen;
        closePanel(r2, true);
        goto L36
    L24:
        if (r2.isHandled == true) goto L35;
        if (r2.isPrepared == false) goto L34;
        if (r2.refreshMenuContent == false) goto L31;
        r2.isPrepared = false;
        boolean r44 = preparePanel(r2, r5);
    L32:
        if (r44 == false) goto L34;
        openPanel(r2, r5);
        r43 = true;
        goto L36
    L31:
        r44 = true;
        goto L32
    }

    void callOnPanelClosed(int r3, PanelFeatureState r4, Menu r5) {
        if (r5 != null) goto L10;
        if (r4 != null) goto L8;
        if (r3 < 0) goto L8;
        PanelFeatureState[] r0 = this.mPanels;
        if (r3 >= r0.length) goto L8;
        r4 = r0[r3];
    L8:
        if (r4 == null) goto L10;
        r5 = r4.menu;
    L10:
        if (r4 == null) goto L15;
        if (r4.isOpen == true) goto L15;
        return;
    L15:
        if (this.mIsDestroyed == true) goto L18;
        this.mOriginalWindowCallback.onPanelClosed(r3, r5);
        return;
    }

    PanelFeatureState findMenuPanel(Menu r6) {
        PanelFeatureState[] r0 = this.mPanels;
        int r1 = 0;
        if (r0 == null) goto L5;
        int r2 = r0.length;
    L6:
        if (r1 >= r2) goto L13;
        PanelFeatureState r3 = r0[r1];
        if (r3 == null) goto L12;
        if (r3.menu != r6) goto L12;
        return r3;
    L12:
        r1 = r1 + 1;
        goto L6
    L13:
        return null;
    L5:
        r2 = 0;
        goto L6
    }

    protected PanelFeatureState getPanelState(int r4, boolean r5) {
        PanelFeatureState[] r52 = this.mPanels;
        if (r52 != null) goto L5;
    L6:
        PanelFeatureState[] r0 = new PanelFeatureState[r4 + 1];
        if (r52 == null) goto L9;
        System.arraycopy(r52, 0, r0, 0, r52.length);
    L9:
        this.mPanels = r0;
        r52 = r0;
    L10:
        PanelFeatureState r02 = r52[r4];
        if (r02 != null) goto L14;
        PanelFeatureState r03 = new PanelFeatureState(r4);
        r52[r4] = r03;
        return r03;
    L14:
        return r02;
    L5:
        if (r52.length > r4) goto L10;
        goto L6
    }

    private boolean performPanelShortcut(PanelFeatureState r3, int r4, KeyEvent r5, int r6) {
        boolean r1 = false;
        if (r5.isSystem() == false) goto L6;
        return false;
    L6:
        if (r3.isPrepared == true) goto L10;
        if (preparePanel(r3, r5) == true) goto L10;
    L12:
        if (r1 == true) goto L14;
    L18:
        return r1;
    L14:
        if ((r6 & 1) != 0) goto L18;
        if (this.mDecorContentParent != null) goto L18;
        closePanel(r3, true);
    L10:
        if (r3.menu == null) goto L12;
        r1 = r3.menu.performShortcut(r4, r5, r6);
        goto L12
    }

    private void invalidatePanelMenu(int r3) {
        int r32 = 1 << r3;
        this.mInvalidatePanelMenuFeatures = r32 | this.mInvalidatePanelMenuFeatures;
        if (this.mInvalidatePanelMenuPosted == true) goto L6;
        ViewCompat.postOnAnimation(this.mWindow.getDecorView(), this.mInvalidatePanelMenuRunnable);
        this.mInvalidatePanelMenuPosted = true;
        return;
    }

    void doInvalidatePanelMenu(int r5) {
        PanelFeatureState r1 = getPanelState(r5, true);
        if (r1.menu == null) goto L8;
        Bundle r2 = new Bundle();
        r1.menu.saveActionViewStates(r2);
        if (r2.size() <= 0) goto L7;
        r1.frozenActionViewState = r2;
    L7:
        r1.menu.stopDispatchingItemsChanged();
        r1.menu.clear();
    L8:
        r1.refreshMenuContent = true;
        r1.refreshDecorView = true;
        if (r5 == 108) goto L12;
        if (r5 == 0) goto L12;
        return;
    L12:
        if (this.mDecorContentParent == null) goto L18;
        PanelFeatureState r0 = getPanelState(0, false);
        if (r0 == null) goto L19;
        r0.isPrepared = false;
        preparePanel(r0, null);
        return;
    L19:
        return;
    }

    int updateStatusGuard(int r8) {
        ActionBarContextView r0 = this.mActionModeView;
        int r1 = 0;
        if (r0 != null) goto L5;
    L40:
        boolean r3 = false;
    L41:
        View r02 = this.mStatusGuard;
        if (r02 == null) goto L47;
        if (r3 == true) goto L46;
        r1 = 8;
    L46:
        r02.setVisibility(r1);
    L47:
        return r8;
    L5:
        if ((r0.getLayoutParams() instanceof ViewGroup.MarginLayoutParams) == false) goto L40;
        ViewGroup.MarginLayoutParams r03 = (ViewGroup.MarginLayoutParams) this.mActionModeView.getLayoutParams();
        r3 = true;
        if (this.mActionModeView.isShown() == false) goto L34;
        if (this.mTempRect1 != null) goto L11;
        this.mTempRect1 = new Rect();
        this.mTempRect2 = new Rect();
    L11:
        Rect r2 = this.mTempRect1;
        Rect r4 = this.mTempRect2;
        r2.set(0, r8, 0, 0);
        ViewUtils.computeFitSystemWindows(this.mSubDecor, r2, r4);
        if (r4.top != 0) goto L14;
        int r22 = r8;
    L16:
        if (r03.topMargin == r22) goto L24;
        r03.topMargin = r8;
        View r23 = this.mStatusGuard;
        if (r23 != null) goto L20;
        this.mStatusGuard = new View(this.mContext);
        this.mStatusGuard.setBackgroundColor(this.mContext.getResources().getColor(R.color.abc_input_method_navigation_guard));
        this.mSubDecor.addView(this.mStatusGuard, -1, new ViewGroup.LayoutParams(-1, r8));
    L23:
        boolean r24 = true;
    L26:
        if (this.mStatusGuard != null) goto L30;
        r3 = false;
    L30:
        if (this.mOverlayActionMode == true) goto L38;
        if (r3 == false) goto L38;
        r8 = 0;
    L38:
        if (r24 == false) goto L41;
        this.mActionModeView.setLayoutParams(r03);
        goto L41
    L20:
        ViewGroup.LayoutParams r25 = r23.getLayoutParams();
        if (r25.height == r8) goto L23;
        r25.height = r8;
        this.mStatusGuard.setLayoutParams(r25);
        goto L23
    L24:
        r24 = false;
        goto L26
    L14:
        r22 = 0;
        goto L16
    L34:
        if (r03.topMargin == 0) goto L36;
        r03.topMargin = 0;
        r24 = true;
    L37:
        r3 = false;
        goto L38
    L36:
        r24 = false;
        goto L37
    }

    private void throwFeatureRequestIfSubDecorInstalled() {
        if (this.mSubDecorInstalled == true) goto L6;
        return;
    L6:
        throw new AndroidRuntimeException("Window feature must be requested before adding content");
    }

    private int sanitizeWindowFeatureId(int r3) {
        if (r3 != 8) goto L7;
        Log.i("AppCompatDelegate", "You should now use the AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR id when requesting this feature.");
        return 108;
    L7:
        if (r3 != 9) goto L10;
        Log.i("AppCompatDelegate", "You should now use the AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR_OVERLAY id when requesting this feature.");
        return 109;
    L10:
        return r3;
    }

    ViewGroup getSubDecor() {
        return this.mSubDecor;
    }

    void dismissPopups() {
        DecorContentParent r0 = this.mDecorContentParent;
        if (r0 == null) goto L6;
        r0.dismissPopups();
    L6:
        if (this.mActionModePopup == null) goto L11;
        this.mWindow.getDecorView().removeCallbacks(this.mShowActionModePopup);
        if (this.mActionModePopup.isShowing() == true) goto L18;
    L10:
        this.mActionModePopup = null;
        goto L11
    L18:
        this.mActionModePopup.dismiss();     // Catch: IllegalArgumentException -> L17
    L11:
        endOnGoingFadeAnimation();
        PanelFeatureState r02 = getPanelState(0, false);
        if (r02 != null) goto L14;
        return;
    L14:
        if (r02.menu == null) goto L21;
        r02.menu.close();
        return;
    }

    @Override
    public boolean applyDayNight() {
        int r0 = getNightMode();
        int r1 = mapNightMode(r0);
        if (r1 == (-1)) goto L5;
        boolean r12 = updateForNightMode(r1);
    L6:
        if (r0 != 0) goto L8;
        ensureAutoNightModeManager();
        this.mAutoNightModeManager.setup();
    L8:
        this.mApplyDayNightCalled = true;
        return r12;
    L5:
        r12 = false;
        goto L6
    }

    @Override
    public void setLocalNightMode(int r2) {
        if (r2 == (-1)) goto L11;
        if (r2 == 0) goto L11;
        if (r2 == 1) goto L11;
        if (r2 == 2) goto L11;
        Log.i("AppCompatDelegate", "setLocalNightMode() called with an unknown mode");
        return;
    L11:
        if (this.mLocalNightMode == r2) goto L17;
        this.mLocalNightMode = r2;
        if (this.mApplyDayNightCalled == false) goto L18;
        applyDayNight();
        return;
    L18:
        return;
    }

    int mapNightMode(int r3) {
        if (r3 == (-100)) goto L13;
        if (r3 == 0) goto L7;
        return r3;
    L7:
        if (Build.VERSION.SDK_INT >= 23) goto L9;
    L11:
        ensureAutoNightModeManager();
        return this.mAutoNightModeManager.getApplyableNightMode();
    L9:
        if (((UiModeManager) this.mContext.getSystemService(UiModeManager.class)).getNightMode() != 0) goto L11;
        return -1;
    L13:
        return -1;
    }

    private int getNightMode() {
        int r0 = this.mLocalNightMode;
        if (r0 == (-100)) goto L6;
        return r0;
    L6:
        return getDefaultNightMode();
    }

    private boolean updateForNightMode(int r5) {
        Resources r0 = this.mContext.getResources();
        Configuration r1 = r0.getConfiguration();
        int r2 = r1.uiMode & 48;
        if (r5 != 2) goto L5;
        int r52 = 32;
    L6:
        if (r2 != r52) goto L8;
        return false;
    L8:
        if (shouldRecreateOnNightModeChange() == false) goto L10;
        ((Activity) this.mContext).recreate();
        return true;
    L10:
        Configuration r22 = new Configuration(r1);
        DisplayMetrics r12 = r0.getDisplayMetrics();
        r22.uiMode = r52 | (r22.uiMode & (-49));
        r0.updateConfiguration(r22, r12);
        if (Build.VERSION.SDK_INT >= 26) goto L18;
        ResourcesFlusher.flush(r0);
        return true;
    L18:
        return true;
    L5:
        r52 = 16;
        goto L6
    }

    private void ensureAutoNightModeManager() {
        if (this.mAutoNightModeManager != null) goto L6;
        this.mAutoNightModeManager = new AutoNightModeManager(this, TwilightManager.getInstance(this.mContext));
        return;
    }

    @VisibleForTesting
    final AutoNightModeManager getAutoNightModeManager() {
        ensureAutoNightModeManager();
        return this.mAutoNightModeManager;
    }

    private boolean shouldRecreateOnNightModeChange() {
        if (this.mApplyDayNightCalled == false) goto L15;
        Context r0 = this.mContext;
        if ((r0 instanceof Activity) == false) goto L15;
        PackageManager r02 = r0.getPackageManager();
        if ((r02.getActivityInfo(new ComponentName(this.mContext, this.mContext.getClass()), 0).configChanges & 512) != 0) goto L18;
        return true;
    L18:
        return false;
    L12:
        e = move-exception;
        Log.d("AppCompatDelegate", "Exception while getting ActivityInfo", e);
        return true;
    L15:
        return false;
    }

    @Override
    public final ActionBarDrawerToggle.Delegate getDrawerToggleDelegate() {
        return new ActionBarDrawableToggleImpl(this);
    }
}
