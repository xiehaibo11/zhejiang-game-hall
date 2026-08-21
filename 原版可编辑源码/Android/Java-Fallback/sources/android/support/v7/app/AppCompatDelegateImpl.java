package android.support.v7.app;

class AppCompatDelegateImpl extends android.support.v7.app.AppCompatDelegate implements android.support.v7.view.menu.MenuBuilder.Callback, android.view.LayoutInflater.Factory2 {
    private static final boolean DEBUG = false;
    static final java.lang.String EXCEPTION_HANDLER_MESSAGE_SUFFIX = ". If the resource you are trying to use is a vector resource, you may be referencing it in an unsupported way. See AppCompatDelegate.setCompatVectorFromResourcesEnabled() for more info.";
    private static final boolean IS_PRE_LOLLIPOP = false;
    private static final java.lang.String KEY_LOCAL_NIGHT_MODE = "appcompat:local_night_mode";
    private static boolean sInstalledExceptionHandler;
    private static final int[] sWindowBackgroundStyleable = null;
    android.support.v7.app.ActionBar mActionBar;
    private android.support.v7.app.AppCompatDelegateImpl.ActionMenuPresenterCallback mActionMenuPresenterCallback;
    android.support.v7.view.ActionMode mActionMode;
    android.widget.PopupWindow mActionModePopup;
    android.support.v7.widget.ActionBarContextView mActionModeView;
    final android.support.v7.app.AppCompatCallback mAppCompatCallback;
    private android.support.v7.app.AppCompatViewInflater mAppCompatViewInflater;
    final android.view.Window.Callback mAppCompatWindowCallback;
    private boolean mApplyDayNightCalled;
    private android.support.v7.app.AppCompatDelegateImpl.AutoNightModeManager mAutoNightModeManager;
    private boolean mClosingActionMenu;
    final android.content.Context mContext;
    private android.support.v7.widget.DecorContentParent mDecorContentParent;
    private boolean mEnableDefaultActionBarUp;
    android.support.v4.view.ViewPropertyAnimatorCompat mFadeAnim;
    private boolean mFeatureIndeterminateProgress;
    private boolean mFeatureProgress;
    private boolean mHandleNativeActionModes;
    boolean mHasActionBar;
    int mInvalidatePanelMenuFeatures;
    boolean mInvalidatePanelMenuPosted;
    private final java.lang.Runnable mInvalidatePanelMenuRunnable;
    boolean mIsDestroyed;
    boolean mIsFloating;
    private int mLocalNightMode;
    private boolean mLongPressBackDown;
    android.view.MenuInflater mMenuInflater;
    final android.view.Window.Callback mOriginalWindowCallback;
    boolean mOverlayActionBar;
    boolean mOverlayActionMode;
    private android.support.v7.app.AppCompatDelegateImpl.PanelMenuPresenterCallback mPanelMenuPresenterCallback;
    private android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState[] mPanels;
    private android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState mPreparedPanel;
    java.lang.Runnable mShowActionModePopup;
    private android.view.View mStatusGuard;
    private android.view.ViewGroup mSubDecor;
    private boolean mSubDecorInstalled;
    private android.graphics.Rect mTempRect1;
    private android.graphics.Rect mTempRect2;
    private java.lang.CharSequence mTitle;
    private android.widget.TextView mTitleView;
    final android.view.Window mWindow;
    boolean mWindowNoTitle;








    private class ActionBarDrawableToggleImpl implements android.support.v7.app.ActionBarDrawerToggle.Delegate {
        final android.support.v7.app.AppCompatDelegateImpl this$0;

        ActionBarDrawableToggleImpl(android.support.v7.app.AppCompatDelegateImpl r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public android.content.Context getActionBarThemedContext() {
                r1 = this;
                android.support.v7.app.AppCompatDelegateImpl r0 = r1.this$0
                android.content.Context r0 = r0.getActionBarThemedContext()
                return r0
        }

        @Override
        public android.graphics.drawable.Drawable getThemeUpIndicator() {
                r4 = this;
                android.content.Context r0 = r4.getActionBarThemedContext()
                r1 = 1
                int[] r1 = new int[r1]
                int r2 = android.support.v7.appcompat.R.attr.homeAsUpIndicator
                r3 = 0
                r1[r3] = r2
                r2 = 0
                android.support.v7.widget.TintTypedArray r0 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r0, r2, r1)
                android.graphics.drawable.Drawable r1 = r0.getDrawable(r3)
                r0.recycle()
                return r1
        }

        @Override
        public boolean isNavigationVisible() {
                r1 = this;
                android.support.v7.app.AppCompatDelegateImpl r0 = r1.this$0
                android.support.v7.app.ActionBar r0 = r0.getSupportActionBar()
                if (r0 == 0) goto L12
                int r0 = r0.getDisplayOptions()
                r0 = r0 & 4
                if (r0 == 0) goto L12
                r0 = 1
                goto L13
            L12:
                r0 = 0
            L13:
                return r0
        }

        @Override
        public void setActionBarDescription(int r2) {
                r1 = this;
                android.support.v7.app.AppCompatDelegateImpl r0 = r1.this$0
                android.support.v7.app.ActionBar r0 = r0.getSupportActionBar()
                if (r0 == 0) goto Lb
                r0.setHomeActionContentDescription(r2)
            Lb:
                return
        }

        @Override
        public void setActionBarUpIndicator(android.graphics.drawable.Drawable r2, int r3) {
                r1 = this;
                android.support.v7.app.AppCompatDelegateImpl r0 = r1.this$0
                android.support.v7.app.ActionBar r0 = r0.getSupportActionBar()
                if (r0 == 0) goto Le
                r0.setHomeAsUpIndicator(r2)
                r0.setHomeActionContentDescription(r3)
            Le:
                return
        }
    }

    private final class ActionMenuPresenterCallback implements android.support.v7.view.menu.MenuPresenter.Callback {
        final android.support.v7.app.AppCompatDelegateImpl this$0;

        ActionMenuPresenterCallback(android.support.v7.app.AppCompatDelegateImpl r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void onCloseMenu(android.support.v7.view.menu.MenuBuilder r1, boolean r2) {
                r0 = this;
                android.support.v7.app.AppCompatDelegateImpl r2 = r0.this$0
                r2.checkCloseActionMenu(r1)
                return
        }

        @Override
        public boolean onOpenSubMenu(android.support.v7.view.menu.MenuBuilder r3) {
                r2 = this;
                android.support.v7.app.AppCompatDelegateImpl r0 = r2.this$0
                android.view.Window$Callback r0 = r0.getWindowCallback()
                if (r0 == 0) goto Ld
                r1 = 108(0x6c, float:1.51E-43)
                r0.onMenuOpened(r1, r3)
            Ld:
                r3 = 1
                return r3
        }
    }

    class ActionModeCallbackWrapperV9 implements android.support.v7.view.ActionMode.Callback {
        private android.support.v7.view.ActionMode.Callback mWrapped;
        final android.support.v7.app.AppCompatDelegateImpl this$0;


        public ActionModeCallbackWrapperV9(android.support.v7.app.AppCompatDelegateImpl r1, android.support.v7.view.ActionMode.Callback r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.mWrapped = r2
                return
        }

        @Override
        public boolean onActionItemClicked(android.support.v7.view.ActionMode r2, android.view.MenuItem r3) {
                r1 = this;
                android.support.v7.view.ActionMode$Callback r0 = r1.mWrapped
                boolean r2 = r0.onActionItemClicked(r2, r3)
                return r2
        }

        @Override
        public boolean onCreateActionMode(android.support.v7.view.ActionMode r2, android.view.Menu r3) {
                r1 = this;
                android.support.v7.view.ActionMode$Callback r0 = r1.mWrapped
                boolean r2 = r0.onCreateActionMode(r2, r3)
                return r2
        }

        @Override
        public void onDestroyActionMode(android.support.v7.view.ActionMode r3) {
                r2 = this;
                android.support.v7.view.ActionMode$Callback r0 = r2.mWrapped
                r0.onDestroyActionMode(r3)
                android.support.v7.app.AppCompatDelegateImpl r3 = r2.this$0
                android.widget.PopupWindow r3 = r3.mActionModePopup
                if (r3 == 0) goto L1a
                android.support.v7.app.AppCompatDelegateImpl r3 = r2.this$0
                android.view.Window r3 = r3.mWindow
                android.view.View r3 = r3.getDecorView()
                android.support.v7.app.AppCompatDelegateImpl r0 = r2.this$0
                java.lang.Runnable r0 = r0.mShowActionModePopup
                r3.removeCallbacks(r0)
            L1a:
                android.support.v7.app.AppCompatDelegateImpl r3 = r2.this$0
                android.support.v7.widget.ActionBarContextView r3 = r3.mActionModeView
                if (r3 == 0) goto L40
                android.support.v7.app.AppCompatDelegateImpl r3 = r2.this$0
                r3.endOnGoingFadeAnimation()
                android.support.v7.app.AppCompatDelegateImpl r3 = r2.this$0
                android.support.v7.widget.ActionBarContextView r0 = r3.mActionModeView
                android.support.v4.view.ViewPropertyAnimatorCompat r0 = android.support.v4.view.ViewCompat.animate(r0)
                r1 = 0
                android.support.v4.view.ViewPropertyAnimatorCompat r0 = r0.alpha(r1)
                r3.mFadeAnim = r0
                android.support.v7.app.AppCompatDelegateImpl r3 = r2.this$0
                android.support.v4.view.ViewPropertyAnimatorCompat r3 = r3.mFadeAnim
                android.support.v7.app.AppCompatDelegateImpl$ActionModeCallbackWrapperV9$1 r0 = new android.support.v7.app.AppCompatDelegateImpl$ActionModeCallbackWrapperV9$1
                r0.<init>(r2)
                r3.setListener(r0)
            L40:
                android.support.v7.app.AppCompatDelegateImpl r3 = r2.this$0
                android.support.v7.app.AppCompatCallback r3 = r3.mAppCompatCallback
                if (r3 == 0) goto L51
                android.support.v7.app.AppCompatDelegateImpl r3 = r2.this$0
                android.support.v7.app.AppCompatCallback r3 = r3.mAppCompatCallback
                android.support.v7.app.AppCompatDelegateImpl r0 = r2.this$0
                android.support.v7.view.ActionMode r0 = r0.mActionMode
                r3.onSupportActionModeFinished(r0)
            L51:
                android.support.v7.app.AppCompatDelegateImpl r3 = r2.this$0
                r0 = 0
                r3.mActionMode = r0
                return
        }

        @Override
        public boolean onPrepareActionMode(android.support.v7.view.ActionMode r2, android.view.Menu r3) {
                r1 = this;
                android.support.v7.view.ActionMode$Callback r0 = r1.mWrapped
                boolean r2 = r0.onPrepareActionMode(r2, r3)
                return r2
        }
    }

    class AppCompatWindowCallback extends android.support.v7.view.WindowCallbackWrapper {
        final android.support.v7.app.AppCompatDelegateImpl this$0;

        AppCompatWindowCallback(android.support.v7.app.AppCompatDelegateImpl r1, android.view.Window.Callback r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                return
        }

        @Override
        public boolean dispatchKeyEvent(android.view.KeyEvent r2) {
                r1 = this;
                android.support.v7.app.AppCompatDelegateImpl r0 = r1.this$0
                boolean r0 = r0.dispatchKeyEvent(r2)
                if (r0 != 0) goto L11
                boolean r2 = super.dispatchKeyEvent(r2)
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

        @Override
        public boolean dispatchKeyShortcutEvent(android.view.KeyEvent r3) {
                r2 = this;
                boolean r0 = super.dispatchKeyShortcutEvent(r3)
                if (r0 != 0) goto L15
                android.support.v7.app.AppCompatDelegateImpl r0 = r2.this$0
                int r1 = r3.getKeyCode()
                boolean r3 = r0.onKeyShortcut(r1, r3)
                if (r3 == 0) goto L13
                goto L15
            L13:
                r3 = 0
                goto L16
            L15:
                r3 = 1
            L16:
                return r3
        }

        @Override
        public void onContentChanged() {
                r0 = this;
                return
        }

        @Override
        public boolean onCreatePanelMenu(int r2, android.view.Menu r3) {
                r1 = this;
                if (r2 != 0) goto L8
                boolean r0 = r3 instanceof android.support.v7.view.menu.MenuBuilder
                if (r0 != 0) goto L8
                r2 = 0
                return r2
            L8:
                boolean r2 = super.onCreatePanelMenu(r2, r3)
                return r2
        }

        @Override
        public boolean onMenuOpened(int r1, android.view.Menu r2) {
                r0 = this;
                super.onMenuOpened(r1, r2)
                android.support.v7.app.AppCompatDelegateImpl r2 = r0.this$0
                r2.onMenuOpened(r1)
                r1 = 1
                return r1
        }

        @Override
        public void onPanelClosed(int r1, android.view.Menu r2) {
                r0 = this;
                super.onPanelClosed(r1, r2)
                android.support.v7.app.AppCompatDelegateImpl r2 = r0.this$0
                r2.onPanelClosed(r1)
                return
        }

        @Override
        public boolean onPreparePanel(int r4, android.view.View r5, android.view.Menu r6) {
                r3 = this;
                boolean r0 = r6 instanceof android.support.v7.view.menu.MenuBuilder
                if (r0 == 0) goto L8
                r0 = r6
                android.support.v7.view.menu.MenuBuilder r0 = (android.support.v7.view.menu.MenuBuilder) r0
                goto L9
            L8:
                r0 = 0
            L9:
                r1 = 0
                if (r4 != 0) goto Lf
                if (r0 != 0) goto Lf
                return r1
            Lf:
                if (r0 == 0) goto L15
                r2 = 1
                r0.setOverrideVisibleItems(r2)
            L15:
                boolean r4 = super.onPreparePanel(r4, r5, r6)
                if (r0 == 0) goto L1e
                r0.setOverrideVisibleItems(r1)
            L1e:
                return r4
        }

        @Override
        public void onProvideKeyboardShortcuts(java.util.List<android.view.KeyboardShortcutGroup> r4, android.view.Menu r5, int r6) {
                r3 = this;
                android.support.v7.app.AppCompatDelegateImpl r0 = r3.this$0
                r1 = 0
                r2 = 1
                android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r0 = r0.getPanelState(r1, r2)
                if (r0 == 0) goto L14
                android.support.v7.view.menu.MenuBuilder r1 = r0.menu
                if (r1 == 0) goto L14
                android.support.v7.view.menu.MenuBuilder r5 = r0.menu
                super.onProvideKeyboardShortcuts(r4, r5, r6)
                goto L17
            L14:
                super.onProvideKeyboardShortcuts(r4, r5, r6)
            L17:
                return
        }

        @Override
        public android.view.ActionMode onWindowStartingActionMode(android.view.ActionMode.Callback r3) {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 23
                if (r0 < r1) goto L8
                r3 = 0
                return r3
            L8:
                android.support.v7.app.AppCompatDelegateImpl r0 = r2.this$0
                boolean r0 = r0.isHandleNativeActionModesEnabled()
                if (r0 == 0) goto L15
                android.view.ActionMode r3 = r2.startAsSupportActionMode(r3)
                return r3
            L15:
                android.view.ActionMode r3 = super.onWindowStartingActionMode(r3)
                return r3
        }

        @Override
        public android.view.ActionMode onWindowStartingActionMode(android.view.ActionMode.Callback r2, int r3) {
                r1 = this;
                android.support.v7.app.AppCompatDelegateImpl r0 = r1.this$0
                boolean r0 = r0.isHandleNativeActionModesEnabled()
                if (r0 == 0) goto L10
                if (r3 == 0) goto Lb
                goto L10
            Lb:
                android.view.ActionMode r2 = r1.startAsSupportActionMode(r2)
                return r2
            L10:
                android.view.ActionMode r2 = super.onWindowStartingActionMode(r2, r3)
                return r2
        }

        final android.view.ActionMode startAsSupportActionMode(android.view.ActionMode.Callback r3) {
                r2 = this;
                android.support.v7.view.SupportActionModeWrapper$CallbackWrapper r0 = new android.support.v7.view.SupportActionModeWrapper$CallbackWrapper
                android.support.v7.app.AppCompatDelegateImpl r1 = r2.this$0
                android.content.Context r1 = r1.mContext
                r0.<init>(r1, r3)
                android.support.v7.app.AppCompatDelegateImpl r3 = r2.this$0
                android.support.v7.view.ActionMode r3 = r3.startSupportActionMode(r0)
                if (r3 == 0) goto L16
                android.view.ActionMode r3 = r0.getActionModeWrapper(r3)
                return r3
            L16:
                r3 = 0
                return r3
        }
    }

    final class AutoNightModeManager {
        private android.content.BroadcastReceiver mAutoTimeChangeReceiver;
        private android.content.IntentFilter mAutoTimeChangeReceiverFilter;
        private boolean mIsNight;
        private android.support.v7.app.TwilightManager mTwilightManager;
        final android.support.v7.app.AppCompatDelegateImpl this$0;


        AutoNightModeManager(android.support.v7.app.AppCompatDelegateImpl r1, android.support.v7.app.TwilightManager r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.mTwilightManager = r2
                boolean r1 = r2.isNight()
                r0.mIsNight = r1
                return
        }

        void cleanup() {
                r2 = this;
                android.content.BroadcastReceiver r0 = r2.mAutoTimeChangeReceiver
                if (r0 == 0) goto L10
                android.support.v7.app.AppCompatDelegateImpl r0 = r2.this$0
                android.content.Context r0 = r0.mContext
                android.content.BroadcastReceiver r1 = r2.mAutoTimeChangeReceiver
                r0.unregisterReceiver(r1)
                r0 = 0
                r2.mAutoTimeChangeReceiver = r0
            L10:
                return
        }

        void dispatchTimeChanged() {
                r2 = this;
                android.support.v7.app.TwilightManager r0 = r2.mTwilightManager
                boolean r0 = r0.isNight()
                boolean r1 = r2.mIsNight
                if (r0 == r1) goto L11
                r2.mIsNight = r0
                android.support.v7.app.AppCompatDelegateImpl r0 = r2.this$0
                r0.applyDayNight()
            L11:
                return
        }

        int getApplyableNightMode() {
                r1 = this;
                android.support.v7.app.TwilightManager r0 = r1.mTwilightManager
                boolean r0 = r0.isNight()
                r1.mIsNight = r0
                if (r0 == 0) goto Lc
                r0 = 2
                goto Ld
            Lc:
                r0 = 1
            Ld:
                return r0
        }

        void setup() {
                r3 = this;
                r3.cleanup()
                android.content.BroadcastReceiver r0 = r3.mAutoTimeChangeReceiver
                if (r0 != 0) goto Le
                android.support.v7.app.AppCompatDelegateImpl$AutoNightModeManager$1 r0 = new android.support.v7.app.AppCompatDelegateImpl$AutoNightModeManager$1
                r0.<init>(r3)
                r3.mAutoTimeChangeReceiver = r0
            Le:
                android.content.IntentFilter r0 = r3.mAutoTimeChangeReceiverFilter
                if (r0 != 0) goto L2c
                android.content.IntentFilter r0 = new android.content.IntentFilter
                r0.<init>()
                r3.mAutoTimeChangeReceiverFilter = r0
                java.lang.String r1 = "android.intent.action.TIME_SET"
                r0.addAction(r1)
                android.content.IntentFilter r0 = r3.mAutoTimeChangeReceiverFilter
                java.lang.String r1 = "android.intent.action.TIMEZONE_CHANGED"
                r0.addAction(r1)
                android.content.IntentFilter r0 = r3.mAutoTimeChangeReceiverFilter
                java.lang.String r1 = "android.intent.action.TIME_TICK"
                r0.addAction(r1)
            L2c:
                android.support.v7.app.AppCompatDelegateImpl r0 = r3.this$0
                android.content.Context r0 = r0.mContext
                android.content.BroadcastReceiver r1 = r3.mAutoTimeChangeReceiver
                android.content.IntentFilter r2 = r3.mAutoTimeChangeReceiverFilter
                r0.registerReceiver(r1, r2)
                return
        }
    }

    private class ListMenuDecorView extends android.support.v7.widget.ContentFrameLayout {
        final android.support.v7.app.AppCompatDelegateImpl this$0;

        public ListMenuDecorView(android.support.v7.app.AppCompatDelegateImpl r1, android.content.Context r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                return
        }

        private boolean isOutOfBounds(int r2, int r3) {
                r1 = this;
                r0 = -5
                if (r2 < r0) goto L18
                if (r3 < r0) goto L18
                int r0 = r1.getWidth()
                int r0 = r0 + 5
                if (r2 > r0) goto L18
                int r2 = r1.getHeight()
                int r2 = r2 + 5
                if (r3 <= r2) goto L16
                goto L18
            L16:
                r2 = 0
                goto L19
            L18:
                r2 = 1
            L19:
                return r2
        }

        @Override
        public boolean dispatchKeyEvent(android.view.KeyEvent r2) {
                r1 = this;
                android.support.v7.app.AppCompatDelegateImpl r0 = r1.this$0
                boolean r0 = r0.dispatchKeyEvent(r2)
                if (r0 != 0) goto L11
                boolean r2 = super.dispatchKeyEvent(r2)
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

        @Override
        public boolean onInterceptTouchEvent(android.view.MotionEvent r3) {
                r2 = this;
                int r0 = r3.getAction()
                if (r0 != 0) goto L1e
                float r0 = r3.getX()
                int r0 = (int) r0
                float r1 = r3.getY()
                int r1 = (int) r1
                boolean r0 = r2.isOutOfBounds(r0, r1)
                if (r0 == 0) goto L1e
                android.support.v7.app.AppCompatDelegateImpl r3 = r2.this$0
                r0 = 0
                r3.closePanel(r0)
                r3 = 1
                return r3
            L1e:
                boolean r3 = super.onInterceptTouchEvent(r3)
                return r3
        }

        @Override
        public void setBackgroundResource(int r2) {
                r1 = this;
                android.content.Context r0 = r1.getContext()
                android.graphics.drawable.Drawable r2 = android.support.v7.content.res.AppCompatResources.getDrawable(r0, r2)
                r1.setBackgroundDrawable(r2)
                return
        }
    }

    protected static final class PanelFeatureState {
        int background;
        android.view.View createdPanelView;
        android.view.ViewGroup decorView;
        int featureId;
        android.os.Bundle frozenActionViewState;
        android.os.Bundle frozenMenuState;
        int gravity;
        boolean isHandled;
        boolean isOpen;
        boolean isPrepared;
        android.support.v7.view.menu.ListMenuPresenter listMenuPresenter;
        android.content.Context listPresenterContext;
        android.support.v7.view.menu.MenuBuilder menu;
        public boolean qwertyMode;
        boolean refreshDecorView;
        boolean refreshMenuContent;
        android.view.View shownPanelView;
        boolean wasLastOpen;
        int windowAnimations;
        int x;
        int y;

        private static class SavedState implements android.os.Parcelable {
            public static final android.os.Parcelable.Creator<android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState.SavedState> CREATOR = null;
            int featureId;
            boolean isOpen;
            android.os.Bundle menuState;


            static {
                    android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState$SavedState$1 r0 = new android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState$SavedState$1
                    r0.<init>()
                    android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState.SavedState.CREATOR = r0
                    return
            }

            SavedState() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            static android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState.SavedState readFromParcel(android.os.Parcel r3, java.lang.ClassLoader r4) {
                    android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState$SavedState r0 = new android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState$SavedState
                    r0.<init>()
                    int r1 = r3.readInt()
                    r0.featureId = r1
                    int r1 = r3.readInt()
                    r2 = 1
                    if (r1 != r2) goto L13
                    goto L14
                L13:
                    r2 = 0
                L14:
                    r0.isOpen = r2
                    if (r2 == 0) goto L1e
                    android.os.Bundle r3 = r3.readBundle(r4)
                    r0.menuState = r3
                L1e:
                    return r0
            }

            @Override
            public int describeContents() {
                    r1 = this;
                    r0 = 0
                    return r0
            }

            @Override
            public void writeToParcel(android.os.Parcel r1, int r2) {
                    r0 = this;
                    int r2 = r0.featureId
                    r1.writeInt(r2)
                    boolean r2 = r0.isOpen
                    r1.writeInt(r2)
                    boolean r2 = r0.isOpen
                    if (r2 == 0) goto L13
                    android.os.Bundle r2 = r0.menuState
                    r1.writeBundle(r2)
                L13:
                    return
            }
        }

        PanelFeatureState(int r1) {
                r0 = this;
                r0.<init>()
                r0.featureId = r1
                r1 = 0
                r0.refreshDecorView = r1
                return
        }

        void applyFrozenState() {
                r2 = this;
                android.support.v7.view.menu.MenuBuilder r0 = r2.menu
                if (r0 == 0) goto Le
                android.os.Bundle r1 = r2.frozenMenuState
                if (r1 == 0) goto Le
                r0.restorePresenterStates(r1)
                r0 = 0
                r2.frozenMenuState = r0
            Le:
                return
        }

        public void clearMenuPresenters() {
                r2 = this;
                android.support.v7.view.menu.MenuBuilder r0 = r2.menu
                if (r0 == 0) goto L9
                android.support.v7.view.menu.ListMenuPresenter r1 = r2.listMenuPresenter
                r0.removeMenuPresenter(r1)
            L9:
                r0 = 0
                r2.listMenuPresenter = r0
                return
        }

        android.support.v7.view.menu.MenuView getListMenuView(android.support.v7.view.menu.MenuPresenter.Callback r4) {
                r3 = this;
                android.support.v7.view.menu.MenuBuilder r0 = r3.menu
                if (r0 != 0) goto L6
                r4 = 0
                return r4
            L6:
                android.support.v7.view.menu.ListMenuPresenter r0 = r3.listMenuPresenter
                if (r0 != 0) goto L1f
                android.support.v7.view.menu.ListMenuPresenter r0 = new android.support.v7.view.menu.ListMenuPresenter
                android.content.Context r1 = r3.listPresenterContext
                int r2 = android.support.v7.appcompat.R.layout.abc_list_menu_item_layout
                r0.<init>(r1, r2)
                r3.listMenuPresenter = r0
                r0.setCallback(r4)
                android.support.v7.view.menu.MenuBuilder r4 = r3.menu
                android.support.v7.view.menu.ListMenuPresenter r0 = r3.listMenuPresenter
                r4.addMenuPresenter(r0)
            L1f:
                android.support.v7.view.menu.ListMenuPresenter r4 = r3.listMenuPresenter
                android.view.ViewGroup r0 = r3.decorView
                android.support.v7.view.menu.MenuView r4 = r4.getMenuView(r0)
                return r4
        }

        public boolean hasPanelItems() {
                r3 = this;
                android.view.View r0 = r3.shownPanelView
                r1 = 0
                if (r0 != 0) goto L6
                return r1
            L6:
                android.view.View r0 = r3.createdPanelView
                r2 = 1
                if (r0 == 0) goto Lc
                return r2
            Lc:
                android.support.v7.view.menu.ListMenuPresenter r0 = r3.listMenuPresenter
                android.widget.ListAdapter r0 = r0.getAdapter()
                int r0 = r0.getCount()
                if (r0 <= 0) goto L19
                r1 = r2
            L19:
                return r1
        }

        void onRestoreInstanceState(android.os.Parcelable r2) {
                r1 = this;
                android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState$SavedState r2 = (android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState.SavedState) r2
                int r0 = r2.featureId
                r1.featureId = r0
                boolean r0 = r2.isOpen
                r1.wasLastOpen = r0
                android.os.Bundle r2 = r2.menuState
                r1.frozenMenuState = r2
                r2 = 0
                r1.shownPanelView = r2
                r1.decorView = r2
                return
        }

        android.os.Parcelable onSaveInstanceState() {
                r3 = this;
                android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState$SavedState r0 = new android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState$SavedState
                r0.<init>()
                int r1 = r3.featureId
                r0.featureId = r1
                boolean r1 = r3.isOpen
                r0.isOpen = r1
                android.support.v7.view.menu.MenuBuilder r1 = r3.menu
                if (r1 == 0) goto L1f
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                r0.menuState = r1
                android.support.v7.view.menu.MenuBuilder r1 = r3.menu
                android.os.Bundle r2 = r0.menuState
                r1.savePresenterStates(r2)
            L1f:
                return r0
        }

        void setMenu(android.support.v7.view.menu.MenuBuilder r3) {
                r2 = this;
                android.support.v7.view.menu.MenuBuilder r0 = r2.menu
                if (r3 != r0) goto L5
                return
            L5:
                if (r0 == 0) goto Lc
                android.support.v7.view.menu.ListMenuPresenter r1 = r2.listMenuPresenter
                r0.removeMenuPresenter(r1)
            Lc:
                r2.menu = r3
                if (r3 == 0) goto L17
                android.support.v7.view.menu.ListMenuPresenter r0 = r2.listMenuPresenter
                if (r0 == 0) goto L17
                r3.addMenuPresenter(r0)
            L17:
                return
        }

        void setStyle(android.content.Context r5) {
                r4 = this;
                android.util.TypedValue r0 = new android.util.TypedValue
                r0.<init>()
                android.content.res.Resources r1 = r5.getResources()
                android.content.res.Resources$Theme r1 = r1.newTheme()
                android.content.res.Resources$Theme r2 = r5.getTheme()
                r1.setTo(r2)
                int r2 = android.support.v7.appcompat.R.attr.actionBarPopupTheme
                r3 = 1
                r1.resolveAttribute(r2, r0, r3)
                int r2 = r0.resourceId
                if (r2 == 0) goto L23
                int r2 = r0.resourceId
                r1.applyStyle(r2, r3)
            L23:
                int r2 = android.support.v7.appcompat.R.attr.panelMenuListTheme
                r1.resolveAttribute(r2, r0, r3)
                int r2 = r0.resourceId
                if (r2 == 0) goto L32
                int r0 = r0.resourceId
                r1.applyStyle(r0, r3)
                goto L37
            L32:
                int r0 = android.support.v7.appcompat.R.style.Theme_AppCompat_CompactMenu
                r1.applyStyle(r0, r3)
            L37:
                android.support.v7.view.ContextThemeWrapper r0 = new android.support.v7.view.ContextThemeWrapper
                r2 = 0
                r0.<init>(r5, r2)
                android.content.res.Resources$Theme r5 = r0.getTheme()
                r5.setTo(r1)
                r4.listPresenterContext = r0
                int[] r5 = android.support.v7.appcompat.R.styleable.AppCompatTheme
                android.content.res.TypedArray r5 = r0.obtainStyledAttributes(r5)
                int r0 = android.support.v7.appcompat.R.styleable.AppCompatTheme_panelBackground
                int r0 = r5.getResourceId(r0, r2)
                r4.background = r0
                int r0 = android.support.v7.appcompat.R.styleable.AppCompatTheme_android_windowAnimationStyle
                int r0 = r5.getResourceId(r0, r2)
                r4.windowAnimations = r0
                r5.recycle()
                return
        }
    }

    private final class PanelMenuPresenterCallback implements android.support.v7.view.menu.MenuPresenter.Callback {
        final android.support.v7.app.AppCompatDelegateImpl this$0;

        PanelMenuPresenterCallback(android.support.v7.app.AppCompatDelegateImpl r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void onCloseMenu(android.support.v7.view.menu.MenuBuilder r5, boolean r6) {
                r4 = this;
                android.support.v7.view.menu.MenuBuilder r0 = r5.getRootMenu()
                r1 = 1
                if (r0 == r5) goto L9
                r2 = r1
                goto La
            L9:
                r2 = 0
            La:
                android.support.v7.app.AppCompatDelegateImpl r3 = r4.this$0
                if (r2 == 0) goto Lf
                r5 = r0
            Lf:
                android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r5 = r3.findMenuPanel(r5)
                if (r5 == 0) goto L29
                if (r2 == 0) goto L24
                android.support.v7.app.AppCompatDelegateImpl r6 = r4.this$0
                int r2 = r5.featureId
                r6.callOnPanelClosed(r2, r5, r0)
                android.support.v7.app.AppCompatDelegateImpl r6 = r4.this$0
                r6.closePanel(r5, r1)
                goto L29
            L24:
                android.support.v7.app.AppCompatDelegateImpl r0 = r4.this$0
                r0.closePanel(r5, r6)
            L29:
                return
        }

        @Override
        public boolean onOpenSubMenu(android.support.v7.view.menu.MenuBuilder r3) {
                r2 = this;
                if (r3 != 0) goto L1b
                android.support.v7.app.AppCompatDelegateImpl r0 = r2.this$0
                boolean r0 = r0.mHasActionBar
                if (r0 == 0) goto L1b
                android.support.v7.app.AppCompatDelegateImpl r0 = r2.this$0
                android.view.Window$Callback r0 = r0.getWindowCallback()
                if (r0 == 0) goto L1b
                android.support.v7.app.AppCompatDelegateImpl r1 = r2.this$0
                boolean r1 = r1.mIsDestroyed
                if (r1 != 0) goto L1b
                r1 = 108(0x6c, float:1.51E-43)
                r0.onMenuOpened(r1, r3)
            L1b:
                r3 = 1
                return r3
        }
    }

    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 1
            r3 = 21
            if (r0 >= r3) goto La
            r0 = r2
            goto Lb
        La:
            r0 = r1
        Lb:
            android.support.v7.app.AppCompatDelegateImpl.IS_PRE_LOLLIPOP = r0
            int[] r3 = new int[r2]
            r4 = 16842836(0x1010054, float:2.3693793E-38)
            r3[r1] = r4
            android.support.v7.app.AppCompatDelegateImpl.sWindowBackgroundStyleable = r3
            if (r0 == 0) goto L2a
            boolean r0 = android.support.v7.app.AppCompatDelegateImpl.sInstalledExceptionHandler
            if (r0 != 0) goto L2a
            java.lang.Thread$UncaughtExceptionHandler r0 = java.lang.Thread.getDefaultUncaughtExceptionHandler()
            android.support.v7.app.AppCompatDelegateImpl$1 r1 = new android.support.v7.app.AppCompatDelegateImpl$1
            r1.<init>(r0)
            java.lang.Thread.setDefaultUncaughtExceptionHandler(r1)
            android.support.v7.app.AppCompatDelegateImpl.sInstalledExceptionHandler = r2
        L2a:
            return
    }

    AppCompatDelegateImpl(android.content.Context r3, android.view.Window r4, android.support.v7.app.AppCompatCallback r5) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.mFadeAnim = r0
            r1 = 1
            r2.mHandleNativeActionModes = r1
            r1 = -100
            r2.mLocalNightMode = r1
            android.support.v7.app.AppCompatDelegateImpl$2 r1 = new android.support.v7.app.AppCompatDelegateImpl$2
            r1.<init>(r2)
            r2.mInvalidatePanelMenuRunnable = r1
            r2.mContext = r3
            r2.mWindow = r4
            r2.mAppCompatCallback = r5
            android.view.Window$Callback r4 = r4.getCallback()
            r2.mOriginalWindowCallback = r4
            boolean r5 = r4 instanceof android.support.v7.app.AppCompatDelegateImpl.AppCompatWindowCallback
            if (r5 != 0) goto L46
            android.support.v7.app.AppCompatDelegateImpl$AppCompatWindowCallback r5 = new android.support.v7.app.AppCompatDelegateImpl$AppCompatWindowCallback
            r5.<init>(r2, r4)
            r2.mAppCompatWindowCallback = r5
            android.view.Window r4 = r2.mWindow
            r4.setCallback(r5)
            int[] r4 = android.support.v7.app.AppCompatDelegateImpl.sWindowBackgroundStyleable
            android.support.v7.widget.TintTypedArray r3 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r3, r0, r4)
            r4 = 0
            android.graphics.drawable.Drawable r4 = r3.getDrawableIfKnown(r4)
            if (r4 == 0) goto L42
            android.view.Window r5 = r2.mWindow
            r5.setBackgroundDrawable(r4)
        L42:
            r3.recycle()
            return
        L46:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r4 = "AppCompat has already installed itself into the Window"
            r3.<init>(r4)
            throw r3
    }

    private void applyFixedSizeWindow() {
            r5 = this;
            android.view.ViewGroup r0 = r5.mSubDecor
            r1 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r0 = r0.findViewById(r1)
            android.support.v7.widget.ContentFrameLayout r0 = (android.support.v7.widget.ContentFrameLayout) r0
            android.view.Window r1 = r5.mWindow
            android.view.View r1 = r1.getDecorView()
            int r2 = r1.getPaddingLeft()
            int r3 = r1.getPaddingTop()
            int r4 = r1.getPaddingRight()
            int r1 = r1.getPaddingBottom()
            r0.setDecorPadding(r2, r3, r4, r1)
            android.content.Context r1 = r5.mContext
            int[] r2 = android.support.v7.appcompat.R.styleable.AppCompatTheme
            android.content.res.TypedArray r1 = r1.obtainStyledAttributes(r2)
            int r2 = android.support.v7.appcompat.R.styleable.AppCompatTheme_windowMinWidthMajor
            android.util.TypedValue r3 = r0.getMinWidthMajor()
            r1.getValue(r2, r3)
            int r2 = android.support.v7.appcompat.R.styleable.AppCompatTheme_windowMinWidthMinor
            android.util.TypedValue r3 = r0.getMinWidthMinor()
            r1.getValue(r2, r3)
            int r2 = android.support.v7.appcompat.R.styleable.AppCompatTheme_windowFixedWidthMajor
            boolean r2 = r1.hasValue(r2)
            if (r2 == 0) goto L4f
            int r2 = android.support.v7.appcompat.R.styleable.AppCompatTheme_windowFixedWidthMajor
            android.util.TypedValue r3 = r0.getFixedWidthMajor()
            r1.getValue(r2, r3)
        L4f:
            int r2 = android.support.v7.appcompat.R.styleable.AppCompatTheme_windowFixedWidthMinor
            boolean r2 = r1.hasValue(r2)
            if (r2 == 0) goto L60
            int r2 = android.support.v7.appcompat.R.styleable.AppCompatTheme_windowFixedWidthMinor
            android.util.TypedValue r3 = r0.getFixedWidthMinor()
            r1.getValue(r2, r3)
        L60:
            int r2 = android.support.v7.appcompat.R.styleable.AppCompatTheme_windowFixedHeightMajor
            boolean r2 = r1.hasValue(r2)
            if (r2 == 0) goto L71
            int r2 = android.support.v7.appcompat.R.styleable.AppCompatTheme_windowFixedHeightMajor
            android.util.TypedValue r3 = r0.getFixedHeightMajor()
            r1.getValue(r2, r3)
        L71:
            int r2 = android.support.v7.appcompat.R.styleable.AppCompatTheme_windowFixedHeightMinor
            boolean r2 = r1.hasValue(r2)
            if (r2 == 0) goto L82
            int r2 = android.support.v7.appcompat.R.styleable.AppCompatTheme_windowFixedHeightMinor
            android.util.TypedValue r3 = r0.getFixedHeightMinor()
            r1.getValue(r2, r3)
        L82:
            r1.recycle()
            r0.requestLayout()
            return
    }

    private android.view.ViewGroup createSubDecor() {
            r7 = this;
            android.content.Context r0 = r7.mContext
            int[] r1 = android.support.v7.appcompat.R.styleable.AppCompatTheme
            android.content.res.TypedArray r0 = r0.obtainStyledAttributes(r1)
            int r1 = android.support.v7.appcompat.R.styleable.AppCompatTheme_windowActionBar
            boolean r1 = r0.hasValue(r1)
            if (r1 == 0) goto L19f
            int r1 = android.support.v7.appcompat.R.styleable.AppCompatTheme_windowNoTitle
            r2 = 0
            boolean r1 = r0.getBoolean(r1, r2)
            r3 = 1
            if (r1 == 0) goto L1e
            r7.requestWindowFeature(r3)
            goto L2b
        L1e:
            int r1 = android.support.v7.appcompat.R.styleable.AppCompatTheme_windowActionBar
            boolean r1 = r0.getBoolean(r1, r2)
            if (r1 == 0) goto L2b
            r1 = 108(0x6c, float:1.51E-43)
            r7.requestWindowFeature(r1)
        L2b:
            int r1 = android.support.v7.appcompat.R.styleable.AppCompatTheme_windowActionBarOverlay
            boolean r1 = r0.getBoolean(r1, r2)
            r4 = 109(0x6d, float:1.53E-43)
            if (r1 == 0) goto L38
            r7.requestWindowFeature(r4)
        L38:
            int r1 = android.support.v7.appcompat.R.styleable.AppCompatTheme_windowActionModeOverlay
            boolean r1 = r0.getBoolean(r1, r2)
            if (r1 == 0) goto L45
            r1 = 10
            r7.requestWindowFeature(r1)
        L45:
            int r1 = android.support.v7.appcompat.R.styleable.AppCompatTheme_android_windowIsFloating
            boolean r1 = r0.getBoolean(r1, r2)
            r7.mIsFloating = r1
            r0.recycle()
            android.view.Window r0 = r7.mWindow
            r0.getDecorView()
            android.content.Context r0 = r7.mContext
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            boolean r1 = r7.mWindowNoTitle
            r5 = 0
            if (r1 != 0) goto Ld3
            boolean r1 = r7.mIsFloating
            if (r1 == 0) goto L72
            int r1 = android.support.v7.appcompat.R.layout.abc_dialog_title_material
            android.view.View r0 = r0.inflate(r1, r5)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r7.mOverlayActionBar = r2
            r7.mHasActionBar = r2
            goto L102
        L72:
            boolean r0 = r7.mHasActionBar
            if (r0 == 0) goto Ld1
            android.util.TypedValue r0 = new android.util.TypedValue
            r0.<init>()
            android.content.Context r1 = r7.mContext
            android.content.res.Resources$Theme r1 = r1.getTheme()
            int r6 = android.support.v7.appcompat.R.attr.actionBarTheme
            r1.resolveAttribute(r6, r0, r3)
            int r1 = r0.resourceId
            if (r1 == 0) goto L94
            android.support.v7.view.ContextThemeWrapper r1 = new android.support.v7.view.ContextThemeWrapper
            android.content.Context r3 = r7.mContext
            int r0 = r0.resourceId
            r1.<init>(r3, r0)
            goto L96
        L94:
            android.content.Context r1 = r7.mContext
        L96:
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r1)
            int r1 = android.support.v7.appcompat.R.layout.abc_screen_toolbar
            android.view.View r0 = r0.inflate(r1, r5)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            int r1 = android.support.v7.appcompat.R.id.decor_content_parent
            android.view.View r1 = r0.findViewById(r1)
            android.support.v7.widget.DecorContentParent r1 = (android.support.v7.widget.DecorContentParent) r1
            r7.mDecorContentParent = r1
            android.view.Window$Callback r3 = r7.getWindowCallback()
            r1.setWindowCallback(r3)
            boolean r1 = r7.mOverlayActionBar
            if (r1 == 0) goto Lbc
            android.support.v7.widget.DecorContentParent r1 = r7.mDecorContentParent
            r1.initFeature(r4)
        Lbc:
            boolean r1 = r7.mFeatureProgress
            if (r1 == 0) goto Lc6
            android.support.v7.widget.DecorContentParent r1 = r7.mDecorContentParent
            r3 = 2
            r1.initFeature(r3)
        Lc6:
            boolean r1 = r7.mFeatureIndeterminateProgress
            if (r1 == 0) goto L102
            android.support.v7.widget.DecorContentParent r1 = r7.mDecorContentParent
            r3 = 5
            r1.initFeature(r3)
            goto L102
        Ld1:
            r0 = r5
            goto L102
        Ld3:
            boolean r1 = r7.mOverlayActionMode
            if (r1 == 0) goto Le0
            int r1 = android.support.v7.appcompat.R.layout.abc_screen_simple_overlay_action_mode
            android.view.View r0 = r0.inflate(r1, r5)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            goto Le8
        Le0:
            int r1 = android.support.v7.appcompat.R.layout.abc_screen_simple
            android.view.View r0 = r0.inflate(r1, r5)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
        Le8:
            int r1 = android.os.Build.VERSION.SDK_INT
            r3 = 21
            if (r1 < r3) goto Lf7
            android.support.v7.app.AppCompatDelegateImpl$3 r1 = new android.support.v7.app.AppCompatDelegateImpl$3
            r1.<init>(r7)
            android.support.v4.view.ViewCompat.setOnApplyWindowInsetsListener(r0, r1)
            goto L102
        Lf7:
            r1 = r0
            android.support.v7.widget.FitWindowsViewGroup r1 = (android.support.v7.widget.FitWindowsViewGroup) r1
            android.support.v7.app.AppCompatDelegateImpl$4 r3 = new android.support.v7.app.AppCompatDelegateImpl$4
            r3.<init>(r7)
            r1.setOnFitSystemWindowsListener(r3)
        L102:
            if (r0 == 0) goto L159
            android.support.v7.widget.DecorContentParent r1 = r7.mDecorContentParent
            if (r1 != 0) goto L112
            int r1 = android.support.v7.appcompat.R.id.title
            android.view.View r1 = r0.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            r7.mTitleView = r1
        L112:
            android.support.v7.widget.ViewUtils.makeOptionalFitsSystemWindows(r0)
            int r1 = android.support.v7.appcompat.R.id.action_bar_activity_content
            android.view.View r1 = r0.findViewById(r1)
            android.support.v7.widget.ContentFrameLayout r1 = (android.support.v7.widget.ContentFrameLayout) r1
            android.view.Window r3 = r7.mWindow
            r4 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r3 = r3.findViewById(r4)
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            if (r3 == 0) goto L14b
        L12a:
            int r6 = r3.getChildCount()
            if (r6 <= 0) goto L13b
            android.view.View r6 = r3.getChildAt(r2)
            r3.removeViewAt(r2)
            r1.addView(r6)
            goto L12a
        L13b:
            r2 = -1
            r3.setId(r2)
            r1.setId(r4)
            boolean r2 = r3 instanceof android.widget.FrameLayout
            if (r2 == 0) goto L14b
            android.widget.FrameLayout r3 = (android.widget.FrameLayout) r3
            r3.setForeground(r5)
        L14b:
            android.view.Window r2 = r7.mWindow
            r2.setContentView(r0)
            android.support.v7.app.AppCompatDelegateImpl$5 r2 = new android.support.v7.app.AppCompatDelegateImpl$5
            r2.<init>(r7)
            r1.setAttachListener(r2)
            return r0
        L159:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "AppCompat does not support the current theme features: { windowActionBar: "
            r1.append(r2)
            boolean r2 = r7.mHasActionBar
            r1.append(r2)
            java.lang.String r2 = ", windowActionBarOverlay: "
            r1.append(r2)
            boolean r2 = r7.mOverlayActionBar
            r1.append(r2)
            java.lang.String r2 = ", android:windowIsFloating: "
            r1.append(r2)
            boolean r2 = r7.mIsFloating
            r1.append(r2)
            java.lang.String r2 = ", windowActionModeOverlay: "
            r1.append(r2)
            boolean r2 = r7.mOverlayActionMode
            r1.append(r2)
            java.lang.String r2 = ", windowNoTitle: "
            r1.append(r2)
            boolean r2 = r7.mWindowNoTitle
            r1.append(r2)
            java.lang.String r2 = " }"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L19f:
            r0.recycle()
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "You need to use a Theme.AppCompat theme (or descendant) with this activity."
            r0.<init>(r1)
            throw r0
    }

    private void ensureAutoNightModeManager() {
            r2 = this;
            android.support.v7.app.AppCompatDelegateImpl$AutoNightModeManager r0 = r2.mAutoNightModeManager
            if (r0 != 0) goto L11
            android.support.v7.app.AppCompatDelegateImpl$AutoNightModeManager r0 = new android.support.v7.app.AppCompatDelegateImpl$AutoNightModeManager
            android.content.Context r1 = r2.mContext
            android.support.v7.app.TwilightManager r1 = android.support.v7.app.TwilightManager.getInstance(r1)
            r0.<init>(r2, r1)
            r2.mAutoNightModeManager = r0
        L11:
            return
    }

    private void ensureSubDecor() {
            r2 = this;
            boolean r0 = r2.mSubDecorInstalled
            if (r0 != 0) goto L50
            android.view.ViewGroup r0 = r2.createSubDecor()
            r2.mSubDecor = r0
            java.lang.CharSequence r0 = r2.getTitle()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L31
            android.support.v7.widget.DecorContentParent r1 = r2.mDecorContentParent
            if (r1 == 0) goto L1c
            r1.setWindowTitle(r0)
            goto L31
        L1c:
            android.support.v7.app.ActionBar r1 = r2.peekSupportActionBar()
            if (r1 == 0) goto L2a
            android.support.v7.app.ActionBar r1 = r2.peekSupportActionBar()
            r1.setWindowTitle(r0)
            goto L31
        L2a:
            android.widget.TextView r1 = r2.mTitleView
            if (r1 == 0) goto L31
            r1.setText(r0)
        L31:
            r2.applyFixedSizeWindow()
            android.view.ViewGroup r0 = r2.mSubDecor
            r2.onSubDecorInstalled(r0)
            r0 = 1
            r2.mSubDecorInstalled = r0
            r0 = 0
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r0 = r2.getPanelState(r0, r0)
            boolean r1 = r2.mIsDestroyed
            if (r1 != 0) goto L50
            if (r0 == 0) goto L4b
            android.support.v7.view.menu.MenuBuilder r0 = r0.menu
            if (r0 != 0) goto L50
        L4b:
            r0 = 108(0x6c, float:1.51E-43)
            r2.invalidatePanelMenu(r0)
        L50:
            return
    }

    private int getNightMode() {
            r2 = this;
            int r0 = r2.mLocalNightMode
            r1 = -100
            if (r0 == r1) goto L7
            goto Lb
        L7:
            int r0 = getDefaultNightMode()
        Lb:
            return r0
    }

    private void initWindowDecorActionBar() {
            r3 = this;
            r3.ensureSubDecor()
            boolean r0 = r3.mHasActionBar
            if (r0 == 0) goto L38
            android.support.v7.app.ActionBar r0 = r3.mActionBar
            if (r0 == 0) goto Lc
            goto L38
        Lc:
            android.view.Window$Callback r0 = r3.mOriginalWindowCallback
            boolean r1 = r0 instanceof android.app.Activity
            if (r1 == 0) goto L20
            android.support.v7.app.WindowDecorActionBar r0 = new android.support.v7.app.WindowDecorActionBar
            android.view.Window$Callback r1 = r3.mOriginalWindowCallback
            android.app.Activity r1 = (android.app.Activity) r1
            boolean r2 = r3.mOverlayActionBar
            r0.<init>(r1, r2)
            r3.mActionBar = r0
            goto L2f
        L20:
            boolean r0 = r0 instanceof android.app.Dialog
            if (r0 == 0) goto L2f
            android.support.v7.app.WindowDecorActionBar r0 = new android.support.v7.app.WindowDecorActionBar
            android.view.Window$Callback r1 = r3.mOriginalWindowCallback
            android.app.Dialog r1 = (android.app.Dialog) r1
            r0.<init>(r1)
            r3.mActionBar = r0
        L2f:
            android.support.v7.app.ActionBar r0 = r3.mActionBar
            if (r0 == 0) goto L38
            boolean r1 = r3.mEnableDefaultActionBarUp
            r0.setDefaultDisplayHomeAsUpEnabled(r1)
        L38:
            return
    }

    private boolean initializePanelContent(android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState r4) {
            r3 = this;
            android.view.View r0 = r4.createdPanelView
            r1 = 1
            if (r0 == 0) goto La
            android.view.View r0 = r4.createdPanelView
            r4.shownPanelView = r0
            return r1
        La:
            android.support.v7.view.menu.MenuBuilder r0 = r4.menu
            r2 = 0
            if (r0 != 0) goto L10
            return r2
        L10:
            android.support.v7.app.AppCompatDelegateImpl$PanelMenuPresenterCallback r0 = r3.mPanelMenuPresenterCallback
            if (r0 != 0) goto L1b
            android.support.v7.app.AppCompatDelegateImpl$PanelMenuPresenterCallback r0 = new android.support.v7.app.AppCompatDelegateImpl$PanelMenuPresenterCallback
            r0.<init>(r3)
            r3.mPanelMenuPresenterCallback = r0
        L1b:
            android.support.v7.app.AppCompatDelegateImpl$PanelMenuPresenterCallback r0 = r3.mPanelMenuPresenterCallback
            android.support.v7.view.menu.MenuView r0 = r4.getListMenuView(r0)
            android.view.View r0 = (android.view.View) r0
            r4.shownPanelView = r0
            android.view.View r4 = r4.shownPanelView
            if (r4 == 0) goto L2a
            goto L2b
        L2a:
            r1 = r2
        L2b:
            return r1
    }

    private boolean initializePanelDecor(android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState r3) {
            r2 = this;
            android.content.Context r0 = r2.getActionBarThemedContext()
            r3.setStyle(r0)
            android.support.v7.app.AppCompatDelegateImpl$ListMenuDecorView r0 = new android.support.v7.app.AppCompatDelegateImpl$ListMenuDecorView
            android.content.Context r1 = r3.listPresenterContext
            r0.<init>(r2, r1)
            r3.decorView = r0
            r0 = 81
            r3.gravity = r0
            r3 = 1
            return r3
    }

    private boolean initializePanelMenu(android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState r7) {
            r6 = this;
            android.content.Context r0 = r6.mContext
            int r1 = r7.featureId
            r2 = 1
            if (r1 == 0) goto Ld
            int r1 = r7.featureId
            r3 = 108(0x6c, float:1.51E-43)
            if (r1 != r3) goto L65
        Ld:
            android.support.v7.widget.DecorContentParent r1 = r6.mDecorContentParent
            if (r1 == 0) goto L65
            android.util.TypedValue r1 = new android.util.TypedValue
            r1.<init>()
            android.content.res.Resources$Theme r3 = r0.getTheme()
            int r4 = android.support.v7.appcompat.R.attr.actionBarTheme
            r3.resolveAttribute(r4, r1, r2)
            r4 = 0
            int r5 = r1.resourceId
            if (r5 == 0) goto L3a
            android.content.res.Resources r4 = r0.getResources()
            android.content.res.Resources$Theme r4 = r4.newTheme()
            r4.setTo(r3)
            int r5 = r1.resourceId
            r4.applyStyle(r5, r2)
            int r5 = android.support.v7.appcompat.R.attr.actionBarWidgetTheme
            r4.resolveAttribute(r5, r1, r2)
            goto L3f
        L3a:
            int r5 = android.support.v7.appcompat.R.attr.actionBarWidgetTheme
            r3.resolveAttribute(r5, r1, r2)
        L3f:
            int r5 = r1.resourceId
            if (r5 == 0) goto L55
            if (r4 != 0) goto L50
            android.content.res.Resources r4 = r0.getResources()
            android.content.res.Resources$Theme r4 = r4.newTheme()
            r4.setTo(r3)
        L50:
            int r1 = r1.resourceId
            r4.applyStyle(r1, r2)
        L55:
            if (r4 == 0) goto L65
            android.support.v7.view.ContextThemeWrapper r1 = new android.support.v7.view.ContextThemeWrapper
            r3 = 0
            r1.<init>(r0, r3)
            android.content.res.Resources$Theme r0 = r1.getTheme()
            r0.setTo(r4)
            r0 = r1
        L65:
            android.support.v7.view.menu.MenuBuilder r1 = new android.support.v7.view.menu.MenuBuilder
            r1.<init>(r0)
            r1.setCallback(r6)
            r7.setMenu(r1)
            return r2
    }

    private void invalidatePanelMenu(int r3) {
            r2 = this;
            int r0 = r2.mInvalidatePanelMenuFeatures
            r1 = 1
            int r3 = r1 << r3
            r3 = r3 | r0
            r2.mInvalidatePanelMenuFeatures = r3
            boolean r3 = r2.mInvalidatePanelMenuPosted
            if (r3 != 0) goto L19
            android.view.Window r3 = r2.mWindow
            android.view.View r3 = r3.getDecorView()
            java.lang.Runnable r0 = r2.mInvalidatePanelMenuRunnable
            android.support.v4.view.ViewCompat.postOnAnimation(r3, r0)
            r2.mInvalidatePanelMenuPosted = r1
        L19:
            return
    }

    private boolean onKeyDownPanel(int r2, android.view.KeyEvent r3) {
            r1 = this;
            int r0 = r3.getRepeatCount()
            if (r0 != 0) goto L14
            r0 = 1
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r2 = r1.getPanelState(r2, r0)
            boolean r0 = r2.isOpen
            if (r0 != 0) goto L14
            boolean r2 = r1.preparePanel(r2, r3)
            return r2
        L14:
            r2 = 0
            return r2
    }

    private boolean onKeyUpPanel(int r4, android.view.KeyEvent r5) {
            r3 = this;
            android.support.v7.view.ActionMode r0 = r3.mActionMode
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            r0 = 1
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r2 = r3.getPanelState(r4, r0)
            if (r4 != 0) goto L43
            android.support.v7.widget.DecorContentParent r4 = r3.mDecorContentParent
            if (r4 == 0) goto L43
            boolean r4 = r4.canShowOverflowMenu()
            if (r4 == 0) goto L43
            android.content.Context r4 = r3.mContext
            android.view.ViewConfiguration r4 = android.view.ViewConfiguration.get(r4)
            boolean r4 = r4.hasPermanentMenuKey()
            if (r4 != 0) goto L43
            android.support.v7.widget.DecorContentParent r4 = r3.mDecorContentParent
            boolean r4 = r4.isOverflowMenuShowing()
            if (r4 != 0) goto L3c
            boolean r4 = r3.mIsDestroyed
            if (r4 != 0) goto L62
            boolean r4 = r3.preparePanel(r2, r5)
            if (r4 == 0) goto L62
            android.support.v7.widget.DecorContentParent r4 = r3.mDecorContentParent
            boolean r0 = r4.showOverflowMenu()
            goto L6a
        L3c:
            android.support.v7.widget.DecorContentParent r4 = r3.mDecorContentParent
            boolean r0 = r4.hideOverflowMenu()
            goto L6a
        L43:
            boolean r4 = r2.isOpen
            if (r4 != 0) goto L64
            boolean r4 = r2.isHandled
            if (r4 == 0) goto L4c
            goto L64
        L4c:
            boolean r4 = r2.isPrepared
            if (r4 == 0) goto L62
            boolean r4 = r2.refreshMenuContent
            if (r4 == 0) goto L5b
            r2.isPrepared = r1
            boolean r4 = r3.preparePanel(r2, r5)
            goto L5c
        L5b:
            r4 = r0
        L5c:
            if (r4 == 0) goto L62
            r3.openPanel(r2, r5)
            goto L6a
        L62:
            r0 = r1
            goto L6a
        L64:
            boolean r4 = r2.isOpen
            r3.closePanel(r2, r0)
            r0 = r4
        L6a:
            if (r0 == 0) goto L83
            android.content.Context r4 = r3.mContext
            java.lang.String r5 = "audio"
            java.lang.Object r4 = r4.getSystemService(r5)
            android.media.AudioManager r4 = (android.media.AudioManager) r4
            if (r4 == 0) goto L7c
            r4.playSoundEffect(r1)
            goto L83
        L7c:
            java.lang.String r4 = "AppCompatDelegate"
            java.lang.String r5 = "Couldn't get audio manager"
            android.util.Log.w(r4, r5)
        L83:
            return r0
    }

    private void openPanel(android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState r14, android.view.KeyEvent r15) {
            r13 = this;
            boolean r0 = r14.isOpen
            if (r0 != 0) goto Lf6
            boolean r0 = r13.mIsDestroyed
            if (r0 == 0) goto La
            goto Lf6
        La:
            int r0 = r14.featureId
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L27
            android.content.Context r0 = r13.mContext
            android.content.res.Resources r0 = r0.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            int r0 = r0.screenLayout
            r0 = r0 & 15
            r3 = 4
            if (r0 != r3) goto L23
            r0 = r2
            goto L24
        L23:
            r0 = r1
        L24:
            if (r0 == 0) goto L27
            return
        L27:
            android.view.Window$Callback r0 = r13.getWindowCallback()
            if (r0 == 0) goto L3b
            int r3 = r14.featureId
            android.support.v7.view.menu.MenuBuilder r4 = r14.menu
            boolean r0 = r0.onMenuOpened(r3, r4)
            if (r0 != 0) goto L3b
            r13.closePanel(r14, r2)
            return
        L3b:
            android.content.Context r0 = r13.mContext
            java.lang.String r3 = "window"
            java.lang.Object r0 = r0.getSystemService(r3)
            android.view.WindowManager r0 = (android.view.WindowManager) r0
            if (r0 != 0) goto L48
            return
        L48:
            boolean r15 = r13.preparePanel(r14, r15)
            if (r15 != 0) goto L4f
            return
        L4f:
            android.view.ViewGroup r15 = r14.decorView
            r3 = -1
            r4 = -2
            if (r15 == 0) goto L6c
            boolean r15 = r14.refreshDecorView
            if (r15 == 0) goto L5a
            goto L6c
        L5a:
            android.view.View r15 = r14.createdPanelView
            if (r15 == 0) goto Ld4
            android.view.View r15 = r14.createdPanelView
            android.view.ViewGroup$LayoutParams r15 = r15.getLayoutParams()
            if (r15 == 0) goto Ld4
            int r15 = r15.width
            if (r15 != r3) goto Ld4
            r6 = r3
            goto Ld5
        L6c:
            android.view.ViewGroup r15 = r14.decorView
            if (r15 != 0) goto L7b
            boolean r15 = r13.initializePanelDecor(r14)
            if (r15 == 0) goto L7a
            android.view.ViewGroup r15 = r14.decorView
            if (r15 != 0) goto L8c
        L7a:
            return
        L7b:
            boolean r15 = r14.refreshDecorView
            if (r15 == 0) goto L8c
            android.view.ViewGroup r15 = r14.decorView
            int r15 = r15.getChildCount()
            if (r15 <= 0) goto L8c
            android.view.ViewGroup r15 = r14.decorView
            r15.removeAllViews()
        L8c:
            boolean r15 = r13.initializePanelContent(r14)
            if (r15 == 0) goto Lf6
            boolean r15 = r14.hasPanelItems()
            if (r15 != 0) goto L99
            goto Lf6
        L99:
            android.view.View r15 = r14.shownPanelView
            android.view.ViewGroup$LayoutParams r15 = r15.getLayoutParams()
            if (r15 != 0) goto La6
            android.view.ViewGroup$LayoutParams r15 = new android.view.ViewGroup$LayoutParams
            r15.<init>(r4, r4)
        La6:
            int r3 = r14.background
            android.view.ViewGroup r5 = r14.decorView
            r5.setBackgroundResource(r3)
            android.view.View r3 = r14.shownPanelView
            android.view.ViewParent r3 = r3.getParent()
            if (r3 == 0) goto Lc0
            boolean r5 = r3 instanceof android.view.ViewGroup
            if (r5 == 0) goto Lc0
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            android.view.View r5 = r14.shownPanelView
            r3.removeView(r5)
        Lc0:
            android.view.ViewGroup r3 = r14.decorView
            android.view.View r5 = r14.shownPanelView
            r3.addView(r5, r15)
            android.view.View r15 = r14.shownPanelView
            boolean r15 = r15.hasFocus()
            if (r15 != 0) goto Ld4
            android.view.View r15 = r14.shownPanelView
            r15.requestFocus()
        Ld4:
            r6 = r4
        Ld5:
            r14.isHandled = r1
            android.view.WindowManager$LayoutParams r15 = new android.view.WindowManager$LayoutParams
            r7 = -2
            int r8 = r14.x
            int r9 = r14.y
            r10 = 1002(0x3ea, float:1.404E-42)
            r11 = 8519680(0x820000, float:1.1938615E-38)
            r12 = -3
            r5 = r15
            r5.<init>(r6, r7, r8, r9, r10, r11, r12)
            int r1 = r14.gravity
            r15.gravity = r1
            int r1 = r14.windowAnimations
            r15.windowAnimations = r1
            android.view.ViewGroup r1 = r14.decorView
            r0.addView(r1, r15)
            r14.isOpen = r2
        Lf6:
            return
    }

    private boolean performPanelShortcut(android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState r3, int r4, android.view.KeyEvent r5, int r6) {
            r2 = this;
            boolean r0 = r5.isSystem()
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            boolean r0 = r3.isPrepared
            if (r0 != 0) goto L12
            boolean r0 = r2.preparePanel(r3, r5)
            if (r0 == 0) goto L1c
        L12:
            android.support.v7.view.menu.MenuBuilder r0 = r3.menu
            if (r0 == 0) goto L1c
            android.support.v7.view.menu.MenuBuilder r0 = r3.menu
            boolean r1 = r0.performShortcut(r4, r5, r6)
        L1c:
            if (r1 == 0) goto L2a
            r4 = 1
            r5 = r6 & 1
            if (r5 != 0) goto L2a
            android.support.v7.widget.DecorContentParent r5 = r2.mDecorContentParent
            if (r5 != 0) goto L2a
            r2.closePanel(r3, r4)
        L2a:
            return r1
    }

    private boolean preparePanel(android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState r9, android.view.KeyEvent r10) {
            r8 = this;
            boolean r0 = r8.mIsDestroyed
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            boolean r0 = r9.isPrepared
            r2 = 1
            if (r0 == 0) goto Lc
            return r2
        Lc:
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r0 = r8.mPreparedPanel
            if (r0 == 0) goto L15
            if (r0 == r9) goto L15
            r8.closePanel(r0, r1)
        L15:
            android.view.Window$Callback r0 = r8.getWindowCallback()
            if (r0 == 0) goto L23
            int r3 = r9.featureId
            android.view.View r3 = r0.onCreatePanelView(r3)
            r9.createdPanelView = r3
        L23:
            int r3 = r9.featureId
            if (r3 == 0) goto L30
            int r3 = r9.featureId
            r4 = 108(0x6c, float:1.51E-43)
            if (r3 != r4) goto L2e
            goto L30
        L2e:
            r3 = r1
            goto L31
        L30:
            r3 = r2
        L31:
            if (r3 == 0) goto L3a
            android.support.v7.widget.DecorContentParent r4 = r8.mDecorContentParent
            if (r4 == 0) goto L3a
            r4.setMenuPrepared()
        L3a:
            android.view.View r4 = r9.createdPanelView
            if (r4 != 0) goto Lea
            if (r3 == 0) goto L48
            android.support.v7.app.ActionBar r4 = r8.peekSupportActionBar()
            boolean r4 = r4 instanceof android.support.v7.app.ToolbarActionBar
            if (r4 != 0) goto Lea
        L48:
            android.support.v7.view.menu.MenuBuilder r4 = r9.menu
            r5 = 0
            if (r4 == 0) goto L51
            boolean r4 = r9.refreshMenuContent
            if (r4 == 0) goto L9a
        L51:
            android.support.v7.view.menu.MenuBuilder r4 = r9.menu
            if (r4 != 0) goto L60
            boolean r4 = r8.initializePanelMenu(r9)
            if (r4 == 0) goto L5f
            android.support.v7.view.menu.MenuBuilder r4 = r9.menu
            if (r4 != 0) goto L60
        L5f:
            return r1
        L60:
            if (r3 == 0) goto L7a
            android.support.v7.widget.DecorContentParent r4 = r8.mDecorContentParent
            if (r4 == 0) goto L7a
            android.support.v7.app.AppCompatDelegateImpl$ActionMenuPresenterCallback r4 = r8.mActionMenuPresenterCallback
            if (r4 != 0) goto L71
            android.support.v7.app.AppCompatDelegateImpl$ActionMenuPresenterCallback r4 = new android.support.v7.app.AppCompatDelegateImpl$ActionMenuPresenterCallback
            r4.<init>(r8)
            r8.mActionMenuPresenterCallback = r4
        L71:
            android.support.v7.widget.DecorContentParent r4 = r8.mDecorContentParent
            android.support.v7.view.menu.MenuBuilder r6 = r9.menu
            android.support.v7.app.AppCompatDelegateImpl$ActionMenuPresenterCallback r7 = r8.mActionMenuPresenterCallback
            r4.setMenu(r6, r7)
        L7a:
            android.support.v7.view.menu.MenuBuilder r4 = r9.menu
            r4.stopDispatchingItemsChanged()
            int r4 = r9.featureId
            android.support.v7.view.menu.MenuBuilder r6 = r9.menu
            boolean r4 = r0.onCreatePanelMenu(r4, r6)
            if (r4 != 0) goto L98
            r9.setMenu(r5)
            if (r3 == 0) goto L97
            android.support.v7.widget.DecorContentParent r9 = r8.mDecorContentParent
            if (r9 == 0) goto L97
            android.support.v7.app.AppCompatDelegateImpl$ActionMenuPresenterCallback r10 = r8.mActionMenuPresenterCallback
            r9.setMenu(r5, r10)
        L97:
            return r1
        L98:
            r9.refreshMenuContent = r1
        L9a:
            android.support.v7.view.menu.MenuBuilder r4 = r9.menu
            r4.stopDispatchingItemsChanged()
            android.os.Bundle r4 = r9.frozenActionViewState
            if (r4 == 0) goto Lac
            android.support.v7.view.menu.MenuBuilder r4 = r9.menu
            android.os.Bundle r6 = r9.frozenActionViewState
            r4.restoreActionViewStates(r6)
            r9.frozenActionViewState = r5
        Lac:
            android.view.View r4 = r9.createdPanelView
            android.support.v7.view.menu.MenuBuilder r6 = r9.menu
            boolean r0 = r0.onPreparePanel(r1, r4, r6)
            if (r0 != 0) goto Lc7
            if (r3 == 0) goto Lc1
            android.support.v7.widget.DecorContentParent r10 = r8.mDecorContentParent
            if (r10 == 0) goto Lc1
            android.support.v7.app.AppCompatDelegateImpl$ActionMenuPresenterCallback r0 = r8.mActionMenuPresenterCallback
            r10.setMenu(r5, r0)
        Lc1:
            android.support.v7.view.menu.MenuBuilder r9 = r9.menu
            r9.startDispatchingItemsChanged()
            return r1
        Lc7:
            if (r10 == 0) goto Lce
            int r10 = r10.getDeviceId()
            goto Lcf
        Lce:
            r10 = -1
        Lcf:
            android.view.KeyCharacterMap r10 = android.view.KeyCharacterMap.load(r10)
            int r10 = r10.getKeyboardType()
            if (r10 == r2) goto Ldb
            r10 = r2
            goto Ldc
        Ldb:
            r10 = r1
        Ldc:
            r9.qwertyMode = r10
            android.support.v7.view.menu.MenuBuilder r10 = r9.menu
            boolean r0 = r9.qwertyMode
            r10.setQwertyMode(r0)
            android.support.v7.view.menu.MenuBuilder r10 = r9.menu
            r10.startDispatchingItemsChanged()
        Lea:
            r9.isPrepared = r2
            r9.isHandled = r1
            r8.mPreparedPanel = r9
            return r2
    }

    private void reopenMenu(android.support.v7.view.menu.MenuBuilder r5, boolean r6) {
            r4 = this;
            android.support.v7.widget.DecorContentParent r5 = r4.mDecorContentParent
            r0 = 1
            r1 = 0
            if (r5 == 0) goto L84
            boolean r5 = r5.canShowOverflowMenu()
            if (r5 == 0) goto L84
            android.content.Context r5 = r4.mContext
            android.view.ViewConfiguration r5 = android.view.ViewConfiguration.get(r5)
            boolean r5 = r5.hasPermanentMenuKey()
            if (r5 == 0) goto L20
            android.support.v7.widget.DecorContentParent r5 = r4.mDecorContentParent
            boolean r5 = r5.isOverflowMenuShowPending()
            if (r5 == 0) goto L84
        L20:
            android.view.Window$Callback r5 = r4.getWindowCallback()
            android.support.v7.widget.DecorContentParent r2 = r4.mDecorContentParent
            boolean r2 = r2.isOverflowMenuShowing()
            r3 = 108(0x6c, float:1.51E-43)
            if (r2 == 0) goto L44
            if (r6 != 0) goto L31
            goto L44
        L31:
            android.support.v7.widget.DecorContentParent r6 = r4.mDecorContentParent
            r6.hideOverflowMenu()
            boolean r6 = r4.mIsDestroyed
            if (r6 != 0) goto L83
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r6 = r4.getPanelState(r1, r0)
            android.support.v7.view.menu.MenuBuilder r6 = r6.menu
            r5.onPanelClosed(r3, r6)
            goto L83
        L44:
            if (r5 == 0) goto L83
            boolean r6 = r4.mIsDestroyed
            if (r6 != 0) goto L83
            boolean r6 = r4.mInvalidatePanelMenuPosted
            if (r6 == 0) goto L63
            int r6 = r4.mInvalidatePanelMenuFeatures
            r6 = r6 & r0
            if (r6 == 0) goto L63
            android.view.Window r6 = r4.mWindow
            android.view.View r6 = r6.getDecorView()
            java.lang.Runnable r2 = r4.mInvalidatePanelMenuRunnable
            r6.removeCallbacks(r2)
            java.lang.Runnable r6 = r4.mInvalidatePanelMenuRunnable
            r6.run()
        L63:
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r6 = r4.getPanelState(r1, r0)
            android.support.v7.view.menu.MenuBuilder r0 = r6.menu
            if (r0 == 0) goto L83
            boolean r0 = r6.refreshMenuContent
            if (r0 != 0) goto L83
            android.view.View r0 = r6.createdPanelView
            android.support.v7.view.menu.MenuBuilder r2 = r6.menu
            boolean r0 = r5.onPreparePanel(r1, r0, r2)
            if (r0 == 0) goto L83
            android.support.v7.view.menu.MenuBuilder r6 = r6.menu
            r5.onMenuOpened(r3, r6)
            android.support.v7.widget.DecorContentParent r5 = r4.mDecorContentParent
            r5.showOverflowMenu()
        L83:
            return
        L84:
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r5 = r4.getPanelState(r1, r0)
            r5.refreshDecorView = r0
            r4.closePanel(r5, r1)
            r6 = 0
            r4.openPanel(r5, r6)
            return
    }

    private int sanitizeWindowFeatureId(int r3) {
            r2 = this;
            java.lang.String r0 = "AppCompatDelegate"
            r1 = 8
            if (r3 != r1) goto Le
            java.lang.String r3 = "You should now use the AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR id when requesting this feature."
            android.util.Log.i(r0, r3)
            r3 = 108(0x6c, float:1.51E-43)
            return r3
        Le:
            r1 = 9
            if (r3 != r1) goto L19
            java.lang.String r3 = "You should now use the AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR_OVERLAY id when requesting this feature."
            android.util.Log.i(r0, r3)
            r3 = 109(0x6d, float:1.53E-43)
        L19:
            return r3
    }

    private boolean shouldInheritContext(android.view.ViewParent r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            android.view.Window r1 = r3.mWindow
            android.view.View r1 = r1.getDecorView()
        La:
            if (r4 != 0) goto Le
            r4 = 1
            return r4
        Le:
            if (r4 == r1) goto L23
            boolean r2 = r4 instanceof android.view.View
            if (r2 == 0) goto L23
            r2 = r4
            android.view.View r2 = (android.view.View) r2
            boolean r2 = android.support.v4.view.ViewCompat.isAttachedToWindow(r2)
            if (r2 == 0) goto L1e
            goto L23
        L1e:
            android.view.ViewParent r4 = r4.getParent()
            goto La
        L23:
            return r0
    }

    private boolean shouldRecreateOnNightModeChange() {
            r6 = this;
            boolean r0 = r6.mApplyDayNightCalled
            r1 = 0
            if (r0 == 0) goto L32
            android.content.Context r0 = r6.mContext
            boolean r2 = r0 instanceof android.app.Activity
            if (r2 == 0) goto L32
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            r2 = 1
            android.content.ComponentName r3 = new android.content.ComponentName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L29
            android.content.Context r4 = r6.mContext     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L29
            android.content.Context r5 = r6.mContext     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L29
            java.lang.Class r5 = r5.getClass()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L29
            r3.<init>(r4, r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L29
            android.content.pm.ActivityInfo r0 = r0.getActivityInfo(r3, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L29
            int r0 = r0.configChanges     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L29
            r0 = r0 & 512(0x200, float:7.17E-43)
            if (r0 != 0) goto L28
            r1 = r2
        L28:
            return r1
        L29:
            r0 = move-exception
            java.lang.String r1 = "AppCompatDelegate"
            java.lang.String r3 = "Exception while getting ActivityInfo"
            android.util.Log.d(r1, r3, r0)
            return r2
        L32:
            return r1
    }

    private void throwFeatureRequestIfSubDecorInstalled() {
            r2 = this;
            boolean r0 = r2.mSubDecorInstalled
            if (r0 != 0) goto L5
            return
        L5:
            android.util.AndroidRuntimeException r0 = new android.util.AndroidRuntimeException
            java.lang.String r1 = "Window feature must be requested before adding content"
            r0.<init>(r1)
            throw r0
    }

    private boolean updateForNightMode(int r5) {
            r4 = this;
            android.content.Context r0 = r4.mContext
            android.content.res.Resources r0 = r0.getResources()
            android.content.res.Configuration r1 = r0.getConfiguration()
            int r2 = r1.uiMode
            r2 = r2 & 48
            r3 = 2
            if (r5 != r3) goto L14
            r5 = 32
            goto L16
        L14:
            r5 = 16
        L16:
            if (r2 == r5) goto L44
            boolean r2 = r4.shouldRecreateOnNightModeChange()
            if (r2 == 0) goto L26
            android.content.Context r5 = r4.mContext
            android.app.Activity r5 = (android.app.Activity) r5
            r5.recreate()
            goto L42
        L26:
            android.content.res.Configuration r2 = new android.content.res.Configuration
            r2.<init>(r1)
            android.util.DisplayMetrics r1 = r0.getDisplayMetrics()
            int r3 = r2.uiMode
            r3 = r3 & (-49)
            r5 = r5 | r3
            r2.uiMode = r5
            r0.updateConfiguration(r2, r1)
            int r5 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r5 >= r1) goto L42
            android.support.v7.app.ResourcesFlusher.flush(r0)
        L42:
            r5 = 1
            return r5
        L44:
            r5 = 0
            return r5
    }

    @Override
    public void addContentView(android.view.View r3, android.view.ViewGroup.LayoutParams r4) {
            r2 = this;
            r2.ensureSubDecor()
            android.view.ViewGroup r0 = r2.mSubDecor
            r1 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r0 = r0.findViewById(r1)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r0.addView(r3, r4)
            android.view.Window$Callback r3 = r2.mOriginalWindowCallback
            r3.onContentChanged()
            return
    }

    @Override
    public boolean applyDayNight() {
            r3 = this;
            int r0 = r3.getNightMode()
            int r1 = r3.mapNightMode(r0)
            r2 = -1
            if (r1 == r2) goto L10
            boolean r1 = r3.updateForNightMode(r1)
            goto L11
        L10:
            r1 = 0
        L11:
            if (r0 != 0) goto L1b
            r3.ensureAutoNightModeManager()
            android.support.v7.app.AppCompatDelegateImpl$AutoNightModeManager r0 = r3.mAutoNightModeManager
            r0.setup()
        L1b:
            r0 = 1
            r3.mApplyDayNightCalled = r0
            return r1
    }

    void callOnPanelClosed(int r3, android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState r4, android.view.Menu r5) {
            r2 = this;
            if (r5 != 0) goto L11
            if (r4 != 0) goto Ld
            if (r3 < 0) goto Ld
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState[] r0 = r2.mPanels
            int r1 = r0.length
            if (r3 >= r1) goto Ld
            r4 = r0[r3]
        Ld:
            if (r4 == 0) goto L11
            android.support.v7.view.menu.MenuBuilder r5 = r4.menu
        L11:
            if (r4 == 0) goto L18
            boolean r4 = r4.isOpen
            if (r4 != 0) goto L18
            return
        L18:
            boolean r4 = r2.mIsDestroyed
            if (r4 != 0) goto L21
            android.view.Window$Callback r4 = r2.mOriginalWindowCallback
            r4.onPanelClosed(r3, r5)
        L21:
            return
    }

    void checkCloseActionMenu(android.support.v7.view.menu.MenuBuilder r3) {
            r2 = this;
            boolean r0 = r2.mClosingActionMenu
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r2.mClosingActionMenu = r0
            android.support.v7.widget.DecorContentParent r0 = r2.mDecorContentParent
            r0.dismissPopups()
            android.view.Window$Callback r0 = r2.getWindowCallback()
            if (r0 == 0) goto L1c
            boolean r1 = r2.mIsDestroyed
            if (r1 != 0) goto L1c
            r1 = 108(0x6c, float:1.51E-43)
            r0.onPanelClosed(r1, r3)
        L1c:
            r3 = 0
            r2.mClosingActionMenu = r3
            return
    }

    void closePanel(int r2) {
            r1 = this;
            r0 = 1
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r2 = r1.getPanelState(r2, r0)
            r1.closePanel(r2, r0)
            return
    }

    void closePanel(android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState r4, boolean r5) {
            r3 = this;
            if (r5 == 0) goto L16
            int r0 = r4.featureId
            if (r0 != 0) goto L16
            android.support.v7.widget.DecorContentParent r0 = r3.mDecorContentParent
            if (r0 == 0) goto L16
            boolean r0 = r0.isOverflowMenuShowing()
            if (r0 == 0) goto L16
            android.support.v7.view.menu.MenuBuilder r4 = r4.menu
            r3.checkCloseActionMenu(r4)
            return
        L16:
            android.content.Context r0 = r3.mContext
            java.lang.String r1 = "window"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.view.WindowManager r0 = (android.view.WindowManager) r0
            r1 = 0
            if (r0 == 0) goto L37
            boolean r2 = r4.isOpen
            if (r2 == 0) goto L37
            android.view.ViewGroup r2 = r4.decorView
            if (r2 == 0) goto L37
            android.view.ViewGroup r2 = r4.decorView
            r0.removeView(r2)
            if (r5 == 0) goto L37
            int r5 = r4.featureId
            r3.callOnPanelClosed(r5, r4, r1)
        L37:
            r5 = 0
            r4.isPrepared = r5
            r4.isHandled = r5
            r4.isOpen = r5
            r4.shownPanelView = r1
            r5 = 1
            r4.refreshDecorView = r5
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r5 = r3.mPreparedPanel
            if (r5 != r4) goto L49
            r3.mPreparedPanel = r1
        L49:
            return
    }

    @Override
    public android.view.View createView(android.view.View r12, java.lang.String r13, android.content.Context r14, android.util.AttributeSet r15) {
            r11 = this;
            android.support.v7.app.AppCompatViewInflater r0 = r11.mAppCompatViewInflater
            r1 = 0
            if (r0 != 0) goto L62
            android.content.Context r0 = r11.mContext
            int[] r2 = android.support.v7.appcompat.R.styleable.AppCompatTheme
            android.content.res.TypedArray r0 = r0.obtainStyledAttributes(r2)
            int r2 = android.support.v7.appcompat.R.styleable.AppCompatTheme_viewInflaterClass
            java.lang.String r0 = r0.getString(r2)
            if (r0 == 0) goto L5b
            java.lang.Class<android.support.v7.app.AppCompatViewInflater> r2 = android.support.v7.app.AppCompatViewInflater.class
            java.lang.String r2 = r2.getName()
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L22
            goto L5b
        L22:
            java.lang.Class r2 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L37
            java.lang.Class[] r3 = new java.lang.Class[r1]     // Catch: java.lang.Throwable -> L37
            java.lang.reflect.Constructor r2 = r2.getDeclaredConstructor(r3)     // Catch: java.lang.Throwable -> L37
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L37
            java.lang.Object r2 = r2.newInstance(r3)     // Catch: java.lang.Throwable -> L37
            android.support.v7.app.AppCompatViewInflater r2 = (android.support.v7.app.AppCompatViewInflater) r2     // Catch: java.lang.Throwable -> L37
            r11.mAppCompatViewInflater = r2     // Catch: java.lang.Throwable -> L37
            goto L62
        L37:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Failed to instantiate custom view inflater "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = ". Falling back to default."
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            java.lang.String r3 = "AppCompatDelegate"
            android.util.Log.i(r3, r0, r2)
            android.support.v7.app.AppCompatViewInflater r0 = new android.support.v7.app.AppCompatViewInflater
            r0.<init>()
            r11.mAppCompatViewInflater = r0
            goto L62
        L5b:
            android.support.v7.app.AppCompatViewInflater r0 = new android.support.v7.app.AppCompatViewInflater
            r0.<init>()
            r11.mAppCompatViewInflater = r0
        L62:
            boolean r0 = android.support.v7.app.AppCompatDelegateImpl.IS_PRE_LOLLIPOP
            if (r0 == 0) goto L7e
            boolean r0 = r15 instanceof org.xmlpull.v1.XmlPullParser
            r2 = 1
            if (r0 == 0) goto L76
            r0 = r15
            org.xmlpull.v1.XmlPullParser r0 = (org.xmlpull.v1.XmlPullParser) r0
            int r0 = r0.getDepth()
            if (r0 <= r2) goto L7e
            r1 = r2
            goto L7e
        L76:
            r0 = r12
            android.view.ViewParent r0 = (android.view.ViewParent) r0
            boolean r0 = r11.shouldInheritContext(r0)
            r1 = r0
        L7e:
            r7 = r1
            android.support.v7.app.AppCompatViewInflater r2 = r11.mAppCompatViewInflater
            boolean r8 = android.support.v7.app.AppCompatDelegateImpl.IS_PRE_LOLLIPOP
            r9 = 1
            boolean r10 = android.support.v7.widget.VectorEnabledTintResources.shouldBeUsed()
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r15
            android.view.View r12 = r2.createView(r3, r4, r5, r6, r7, r8, r9, r10)
            return r12
    }

    void dismissPopups() {
            r2 = this;
            android.support.v7.widget.DecorContentParent r0 = r2.mDecorContentParent
            if (r0 == 0) goto L7
            r0.dismissPopups()
        L7:
            android.widget.PopupWindow r0 = r2.mActionModePopup
            if (r0 == 0) goto L26
            android.view.Window r0 = r2.mWindow
            android.view.View r0 = r0.getDecorView()
            java.lang.Runnable r1 = r2.mShowActionModePopup
            r0.removeCallbacks(r1)
            android.widget.PopupWindow r0 = r2.mActionModePopup
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto L23
            android.widget.PopupWindow r0 = r2.mActionModePopup     // Catch: java.lang.IllegalArgumentException -> L23
            r0.dismiss()     // Catch: java.lang.IllegalArgumentException -> L23
        L23:
            r0 = 0
            r2.mActionModePopup = r0
        L26:
            r2.endOnGoingFadeAnimation()
            r0 = 0
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r0 = r2.getPanelState(r0, r0)
            if (r0 == 0) goto L39
            android.support.v7.view.menu.MenuBuilder r1 = r0.menu
            if (r1 == 0) goto L39
            android.support.v7.view.menu.MenuBuilder r0 = r0.menu
            r0.close()
        L39:
            return
    }

    boolean dispatchKeyEvent(android.view.KeyEvent r4) {
            r3 = this;
            android.view.Window$Callback r0 = r3.mOriginalWindowCallback
            boolean r1 = r0 instanceof android.support.v4.view.KeyEventDispatcher.Component
            r2 = 1
            if (r1 != 0) goto Lb
            boolean r0 = r0 instanceof android.support.v7.app.AppCompatDialog
            if (r0 == 0) goto L1a
        Lb:
            android.view.Window r0 = r3.mWindow
            android.view.View r0 = r0.getDecorView()
            if (r0 == 0) goto L1a
            boolean r0 = android.support.v4.view.KeyEventDispatcher.dispatchBeforeHierarchy(r0, r4)
            if (r0 == 0) goto L1a
            return r2
        L1a:
            int r0 = r4.getKeyCode()
            r1 = 82
            if (r0 != r1) goto L2b
            android.view.Window$Callback r0 = r3.mOriginalWindowCallback
            boolean r0 = r0.dispatchKeyEvent(r4)
            if (r0 == 0) goto L2b
            return r2
        L2b:
            int r0 = r4.getKeyCode()
            int r1 = r4.getAction()
            if (r1 != 0) goto L36
            goto L37
        L36:
            r2 = 0
        L37:
            if (r2 == 0) goto L3e
            boolean r4 = r3.onKeyDown(r0, r4)
            goto L42
        L3e:
            boolean r4 = r3.onKeyUp(r0, r4)
        L42:
            return r4
    }

    void doInvalidatePanelMenu(int r5) {
            r4 = this;
            r0 = 1
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r1 = r4.getPanelState(r5, r0)
            android.support.v7.view.menu.MenuBuilder r2 = r1.menu
            if (r2 == 0) goto L25
            android.os.Bundle r2 = new android.os.Bundle
            r2.<init>()
            android.support.v7.view.menu.MenuBuilder r3 = r1.menu
            r3.saveActionViewStates(r2)
            int r3 = r2.size()
            if (r3 <= 0) goto L1b
            r1.frozenActionViewState = r2
        L1b:
            android.support.v7.view.menu.MenuBuilder r2 = r1.menu
            r2.stopDispatchingItemsChanged()
            android.support.v7.view.menu.MenuBuilder r2 = r1.menu
            r2.clear()
        L25:
            r1.refreshMenuContent = r0
            r1.refreshDecorView = r0
            r0 = 108(0x6c, float:1.51E-43)
            if (r5 == r0) goto L2f
            if (r5 != 0) goto L40
        L2f:
            android.support.v7.widget.DecorContentParent r5 = r4.mDecorContentParent
            if (r5 == 0) goto L40
            r5 = 0
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r0 = r4.getPanelState(r5, r5)
            if (r0 == 0) goto L40
            r0.isPrepared = r5
            r5 = 0
            r4.preparePanel(r0, r5)
        L40:
            return
    }

    void endOnGoingFadeAnimation() {
            r1 = this;
            android.support.v4.view.ViewPropertyAnimatorCompat r0 = r1.mFadeAnim
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            return
    }

    android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState findMenuPanel(android.view.Menu r6) {
            r5 = this;
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState[] r0 = r5.mPanels
            r1 = 0
            if (r0 == 0) goto L7
            int r2 = r0.length
            goto L8
        L7:
            r2 = r1
        L8:
            if (r1 >= r2) goto L16
            r3 = r0[r1]
            if (r3 == 0) goto L13
            android.support.v7.view.menu.MenuBuilder r4 = r3.menu
            if (r4 != r6) goto L13
            return r3
        L13:
            int r1 = r1 + 1
            goto L8
        L16:
            r6 = 0
            return r6
    }

    @Override
    public <T extends android.view.View> T findViewById(int r2) {
            r1 = this;
            r1.ensureSubDecor()
            android.view.Window r0 = r1.mWindow
            android.view.View r2 = r0.findViewById(r2)
            return r2
    }

    final android.content.Context getActionBarThemedContext() {
            r1 = this;
            android.support.v7.app.ActionBar r0 = r1.getSupportActionBar()
            if (r0 == 0) goto Lb
            android.content.Context r0 = r0.getThemedContext()
            goto Lc
        Lb:
            r0 = 0
        Lc:
            if (r0 != 0) goto L10
            android.content.Context r0 = r1.mContext
        L10:
            return r0
    }

    final android.support.v7.app.AppCompatDelegateImpl.AutoNightModeManager getAutoNightModeManager() {
            r1 = this;
            r1.ensureAutoNightModeManager()
            android.support.v7.app.AppCompatDelegateImpl$AutoNightModeManager r0 = r1.mAutoNightModeManager
            return r0
    }

    @Override
    public final android.support.v7.app.ActionBarDrawerToggle.Delegate getDrawerToggleDelegate() {
            r1 = this;
            android.support.v7.app.AppCompatDelegateImpl$ActionBarDrawableToggleImpl r0 = new android.support.v7.app.AppCompatDelegateImpl$ActionBarDrawableToggleImpl
            r0.<init>(r1)
            return r0
    }

    @Override
    public android.view.MenuInflater getMenuInflater() {
            r2 = this;
            android.view.MenuInflater r0 = r2.mMenuInflater
            if (r0 != 0) goto L19
            r2.initWindowDecorActionBar()
            android.support.v7.view.SupportMenuInflater r0 = new android.support.v7.view.SupportMenuInflater
            android.support.v7.app.ActionBar r1 = r2.mActionBar
            if (r1 == 0) goto L12
            android.content.Context r1 = r1.getThemedContext()
            goto L14
        L12:
            android.content.Context r1 = r2.mContext
        L14:
            r0.<init>(r1)
            r2.mMenuInflater = r0
        L19:
            android.view.MenuInflater r0 = r2.mMenuInflater
            return r0
    }

    protected android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState getPanelState(int r4, boolean r5) {
            r3 = this;
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState[] r5 = r3.mPanels
            if (r5 == 0) goto L7
            int r0 = r5.length
            if (r0 > r4) goto L15
        L7:
            int r0 = r4 + 1
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState[] r0 = new android.support.v7.app.AppCompatDelegateImpl.PanelFeatureState[r0]
            if (r5 == 0) goto L12
            int r1 = r5.length
            r2 = 0
            java.lang.System.arraycopy(r5, r2, r0, r2, r1)
        L12:
            r3.mPanels = r0
            r5 = r0
        L15:
            r0 = r5[r4]
            if (r0 != 0) goto L20
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r0 = new android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState
            r0.<init>(r4)
            r5[r4] = r0
        L20:
            return r0
    }

    android.view.ViewGroup getSubDecor() {
            r1 = this;
            android.view.ViewGroup r0 = r1.mSubDecor
            return r0
    }

    @Override
    public android.support.v7.app.ActionBar getSupportActionBar() {
            r1 = this;
            r1.initWindowDecorActionBar()
            android.support.v7.app.ActionBar r0 = r1.mActionBar
            return r0
    }

    final java.lang.CharSequence getTitle() {
            r2 = this;
            android.view.Window$Callback r0 = r2.mOriginalWindowCallback
            boolean r1 = r0 instanceof android.app.Activity
            if (r1 == 0) goto Ld
            android.app.Activity r0 = (android.app.Activity) r0
            java.lang.CharSequence r0 = r0.getTitle()
            return r0
        Ld:
            java.lang.CharSequence r0 = r2.mTitle
            return r0
    }

    final android.view.Window.Callback getWindowCallback() {
            r1 = this;
            android.view.Window r0 = r1.mWindow
            android.view.Window$Callback r0 = r0.getCallback()
            return r0
    }

    @Override
    public boolean hasWindowFeature(int r5) {
            r4 = this;
            int r0 = r4.sanitizeWindowFeatureId(r5)
            r1 = 1
            r2 = 0
            if (r0 == r1) goto L2b
            r3 = 2
            if (r0 == r3) goto L28
            r3 = 5
            if (r0 == r3) goto L25
            r3 = 10
            if (r0 == r3) goto L22
            r3 = 108(0x6c, float:1.51E-43)
            if (r0 == r3) goto L1f
            r3 = 109(0x6d, float:1.53E-43)
            if (r0 == r3) goto L1c
            r0 = r2
            goto L2d
        L1c:
            boolean r0 = r4.mOverlayActionBar
            goto L2d
        L1f:
            boolean r0 = r4.mHasActionBar
            goto L2d
        L22:
            boolean r0 = r4.mOverlayActionMode
            goto L2d
        L25:
            boolean r0 = r4.mFeatureIndeterminateProgress
            goto L2d
        L28:
            boolean r0 = r4.mFeatureProgress
            goto L2d
        L2b:
            boolean r0 = r4.mWindowNoTitle
        L2d:
            if (r0 != 0) goto L39
            android.view.Window r0 = r4.mWindow
            boolean r5 = r0.hasFeature(r5)
            if (r5 == 0) goto L38
            goto L39
        L38:
            r1 = r2
        L39:
            return r1
    }

    @Override
    public void installViewFactory() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.view.LayoutInflater$Factory r1 = r0.getFactory()
            if (r1 != 0) goto L10
            android.support.v4.view.LayoutInflaterCompat.setFactory2(r0, r2)
            goto L1f
        L10:
            android.view.LayoutInflater$Factory2 r0 = r0.getFactory2()
            boolean r0 = r0 instanceof android.support.v7.app.AppCompatDelegateImpl
            if (r0 != 0) goto L1f
            java.lang.String r0 = "AppCompatDelegate"
            java.lang.String r1 = "The Activity's LayoutInflater already has a Factory installed so we can not install AppCompat's"
            android.util.Log.i(r0, r1)
        L1f:
            return
    }

    @Override
    public void invalidateOptionsMenu() {
            r1 = this;
            android.support.v7.app.ActionBar r0 = r1.getSupportActionBar()
            if (r0 == 0) goto Ld
            boolean r0 = r0.invalidateOptionsMenu()
            if (r0 == 0) goto Ld
            return
        Ld:
            r0 = 0
            r1.invalidatePanelMenu(r0)
            return
    }

    @Override
    public boolean isHandleNativeActionModesEnabled() {
            r1 = this;
            boolean r0 = r1.mHandleNativeActionModes
            return r0
    }

    int mapNightMode(int r3) {
            r2 = this;
            r0 = -100
            r1 = -1
            if (r3 == r0) goto L29
            if (r3 == 0) goto L8
            return r3
        L8:
            int r3 = android.os.Build.VERSION.SDK_INT
            r0 = 23
            if (r3 < r0) goto L1f
            android.content.Context r3 = r2.mContext
            java.lang.Class<android.app.UiModeManager> r0 = android.app.UiModeManager.class
            java.lang.Object r3 = r3.getSystemService(r0)
            android.app.UiModeManager r3 = (android.app.UiModeManager) r3
            int r3 = r3.getNightMode()
            if (r3 != 0) goto L1f
            return r1
        L1f:
            r2.ensureAutoNightModeManager()
            android.support.v7.app.AppCompatDelegateImpl$AutoNightModeManager r3 = r2.mAutoNightModeManager
            int r3 = r3.getApplyableNightMode()
            return r3
        L29:
            return r1
    }

    boolean onBackPressed() {
            r2 = this;
            android.support.v7.view.ActionMode r0 = r2.mActionMode
            r1 = 1
            if (r0 == 0) goto L9
            r0.finish()
            return r1
        L9:
            android.support.v7.app.ActionBar r0 = r2.getSupportActionBar()
            if (r0 == 0) goto L16
            boolean r0 = r0.collapseActionView()
            if (r0 == 0) goto L16
            return r1
        L16:
            r0 = 0
            return r0
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            boolean r0 = r1.mHasActionBar
            if (r0 == 0) goto L11
            boolean r0 = r1.mSubDecorInstalled
            if (r0 == 0) goto L11
            android.support.v7.app.ActionBar r0 = r1.getSupportActionBar()
            if (r0 == 0) goto L11
            r0.onConfigurationChanged(r2)
        L11:
            android.support.v7.widget.AppCompatDrawableManager r2 = android.support.v7.widget.AppCompatDrawableManager.get()
            android.content.Context r0 = r1.mContext
            r2.onConfigurationChanged(r0)
            r1.applyDayNight()
            return
    }

    @Override
    public void onCreate(android.os.Bundle r3) {
            r2 = this;
            android.view.Window$Callback r0 = r2.mOriginalWindowCallback
            boolean r1 = r0 instanceof android.app.Activity
            if (r1 == 0) goto L1c
            r1 = 0
            android.app.Activity r0 = (android.app.Activity) r0     // Catch: java.lang.IllegalArgumentException -> Ld
            java.lang.String r1 = android.support.v4.app.NavUtils.getParentActivityName(r0)     // Catch: java.lang.IllegalArgumentException -> Ld
        Ld:
            if (r1 == 0) goto L1c
            android.support.v7.app.ActionBar r0 = r2.peekSupportActionBar()
            r1 = 1
            if (r0 != 0) goto L19
            r2.mEnableDefaultActionBarUp = r1
            goto L1c
        L19:
            r0.setDefaultDisplayHomeAsUpEnabled(r1)
        L1c:
            if (r3 == 0) goto L2c
            int r0 = r2.mLocalNightMode
            r1 = -100
            if (r0 != r1) goto L2c
            java.lang.String r0 = "appcompat:local_night_mode"
            int r3 = r3.getInt(r0, r1)
            r2.mLocalNightMode = r3
        L2c:
            return
    }

    @Override
    public final android.view.View onCreateView(android.view.View r1, java.lang.String r2, android.content.Context r3, android.util.AttributeSet r4) {
            r0 = this;
            android.view.View r1 = r0.createView(r1, r2, r3, r4)
            return r1
    }

    @Override
    public android.view.View onCreateView(java.lang.String r2, android.content.Context r3, android.util.AttributeSet r4) {
            r1 = this;
            r0 = 0
            android.view.View r2 = r1.onCreateView(r0, r2, r3, r4)
            return r2
    }

    @Override
    public void onDestroy() {
            r2 = this;
            boolean r0 = r2.mInvalidatePanelMenuPosted
            if (r0 == 0) goto Lf
            android.view.Window r0 = r2.mWindow
            android.view.View r0 = r0.getDecorView()
            java.lang.Runnable r1 = r2.mInvalidatePanelMenuRunnable
            r0.removeCallbacks(r1)
        Lf:
            r0 = 1
            r2.mIsDestroyed = r0
            android.support.v7.app.ActionBar r0 = r2.mActionBar
            if (r0 == 0) goto L19
            r0.onDestroy()
        L19:
            android.support.v7.app.AppCompatDelegateImpl$AutoNightModeManager r0 = r2.mAutoNightModeManager
            if (r0 == 0) goto L20
            r0.cleanup()
        L20:
            return
    }

    boolean onKeyDown(int r4, android.view.KeyEvent r5) {
            r3 = this;
            r0 = 4
            r1 = 1
            r2 = 0
            if (r4 == r0) goto Le
            r0 = 82
            if (r4 == r0) goto La
            goto L1a
        La:
            r3.onKeyDownPanel(r2, r5)
            return r1
        Le:
            int r4 = r5.getFlags()
            r4 = r4 & 128(0x80, float:1.8E-43)
            if (r4 == 0) goto L17
            goto L18
        L17:
            r1 = r2
        L18:
            r3.mLongPressBackDown = r1
        L1a:
            return r2
    }

    boolean onKeyShortcut(int r4, android.view.KeyEvent r5) {
            r3 = this;
            android.support.v7.app.ActionBar r0 = r3.getSupportActionBar()
            r1 = 1
            if (r0 == 0) goto Le
            boolean r4 = r0.onKeyShortcut(r4, r5)
            if (r4 == 0) goto Le
            return r1
        Le:
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r4 = r3.mPreparedPanel
            if (r4 == 0) goto L23
            int r0 = r5.getKeyCode()
            boolean r4 = r3.performPanelShortcut(r4, r0, r5, r1)
            if (r4 == 0) goto L23
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r4 = r3.mPreparedPanel
            if (r4 == 0) goto L22
            r4.isHandled = r1
        L22:
            return r1
        L23:
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r4 = r3.mPreparedPanel
            r0 = 0
            if (r4 != 0) goto L3c
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r4 = r3.getPanelState(r0, r1)
            r3.preparePanel(r4, r5)
            int r2 = r5.getKeyCode()
            boolean r5 = r3.performPanelShortcut(r4, r2, r5, r1)
            r4.isPrepared = r0
            if (r5 == 0) goto L3c
            return r1
        L3c:
            return r0
    }

    boolean onKeyUp(int r4, android.view.KeyEvent r5) {
            r3 = this;
            r0 = 4
            r1 = 1
            r2 = 0
            if (r4 == r0) goto Le
            r0 = 82
            if (r4 == r0) goto La
            goto L29
        La:
            r3.onKeyUpPanel(r2, r5)
            return r1
        Le:
            boolean r4 = r3.mLongPressBackDown
            r3.mLongPressBackDown = r2
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r5 = r3.getPanelState(r2, r2)
            if (r5 == 0) goto L22
            boolean r0 = r5.isOpen
            if (r0 == 0) goto L22
            if (r4 != 0) goto L21
            r3.closePanel(r5, r1)
        L21:
            return r1
        L22:
            boolean r4 = r3.onBackPressed()
            if (r4 == 0) goto L29
            return r1
        L29:
            return r2
    }

    @Override
    public boolean onMenuItemSelected(android.support.v7.view.menu.MenuBuilder r3, android.view.MenuItem r4) {
            r2 = this;
            android.view.Window$Callback r0 = r2.getWindowCallback()
            if (r0 == 0) goto L1b
            boolean r1 = r2.mIsDestroyed
            if (r1 != 0) goto L1b
            android.support.v7.view.menu.MenuBuilder r3 = r3.getRootMenu()
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r3 = r2.findMenuPanel(r3)
            if (r3 == 0) goto L1b
            int r3 = r3.featureId
            boolean r3 = r0.onMenuItemSelected(r3, r4)
            return r3
        L1b:
            r3 = 0
            return r3
    }

    @Override
    public void onMenuModeChange(android.support.v7.view.menu.MenuBuilder r2) {
            r1 = this;
            r0 = 1
            r1.reopenMenu(r2, r0)
            return
    }

    void onMenuOpened(int r2) {
            r1 = this;
            r0 = 108(0x6c, float:1.51E-43)
            if (r2 != r0) goto Le
            android.support.v7.app.ActionBar r2 = r1.getSupportActionBar()
            if (r2 == 0) goto Le
            r0 = 1
            r2.dispatchMenuVisibilityChanged(r0)
        Le:
            return
    }

    void onPanelClosed(int r3) {
            r2 = this;
            r0 = 0
            r1 = 108(0x6c, float:1.51E-43)
            if (r3 != r1) goto Lf
            android.support.v7.app.ActionBar r3 = r2.getSupportActionBar()
            if (r3 == 0) goto L1d
            r3.dispatchMenuVisibilityChanged(r0)
            goto L1d
        Lf:
            if (r3 != 0) goto L1d
            r1 = 1
            android.support.v7.app.AppCompatDelegateImpl$PanelFeatureState r3 = r2.getPanelState(r3, r1)
            boolean r1 = r3.isOpen
            if (r1 == 0) goto L1d
            r2.closePanel(r3, r0)
        L1d:
            return
    }

    @Override
    public void onPostCreate(android.os.Bundle r1) {
            r0 = this;
            r0.ensureSubDecor()
            return
    }

    @Override
    public void onPostResume() {
            r2 = this;
            android.support.v7.app.ActionBar r0 = r2.getSupportActionBar()
            if (r0 == 0) goto La
            r1 = 1
            r0.setShowHideAnimationEnabled(r1)
        La:
            return
    }

    @Override
    public void onSaveInstanceState(android.os.Bundle r3) {
            r2 = this;
            int r0 = r2.mLocalNightMode
            r1 = -100
            if (r0 == r1) goto Lb
            java.lang.String r1 = "appcompat:local_night_mode"
            r3.putInt(r1, r0)
        Lb:
            return
    }

    @Override
    public void onStart() {
            r0 = this;
            r0.applyDayNight()
            return
    }

    @Override
    public void onStop() {
            r2 = this;
            android.support.v7.app.ActionBar r0 = r2.getSupportActionBar()
            if (r0 == 0) goto La
            r1 = 0
            r0.setShowHideAnimationEnabled(r1)
        La:
            android.support.v7.app.AppCompatDelegateImpl$AutoNightModeManager r0 = r2.mAutoNightModeManager
            if (r0 == 0) goto L11
            r0.cleanup()
        L11:
            return
    }

    void onSubDecorInstalled(android.view.ViewGroup r1) {
            r0 = this;
            return
    }

    final android.support.v7.app.ActionBar peekSupportActionBar() {
            r1 = this;
            android.support.v7.app.ActionBar r0 = r1.mActionBar
            return r0
    }

    @Override
    public boolean requestWindowFeature(int r5) {
            r4 = this;
            int r5 = r4.sanitizeWindowFeatureId(r5)
            boolean r0 = r4.mWindowNoTitle
            r1 = 0
            r2 = 108(0x6c, float:1.51E-43)
            if (r0 == 0) goto Le
            if (r5 != r2) goto Le
            return r1
        Le:
            boolean r0 = r4.mHasActionBar
            r3 = 1
            if (r0 == 0) goto L17
            if (r5 != r3) goto L17
            r4.mHasActionBar = r1
        L17:
            if (r5 == r3) goto L4e
            r0 = 2
            if (r5 == r0) goto L48
            r0 = 5
            if (r5 == r0) goto L42
            r0 = 10
            if (r5 == r0) goto L3c
            if (r5 == r2) goto L36
            r0 = 109(0x6d, float:1.53E-43)
            if (r5 == r0) goto L30
            android.view.Window r0 = r4.mWindow
            boolean r5 = r0.requestFeature(r5)
            return r5
        L30:
            r4.throwFeatureRequestIfSubDecorInstalled()
            r4.mOverlayActionBar = r3
            return r3
        L36:
            r4.throwFeatureRequestIfSubDecorInstalled()
            r4.mHasActionBar = r3
            return r3
        L3c:
            r4.throwFeatureRequestIfSubDecorInstalled()
            r4.mOverlayActionMode = r3
            return r3
        L42:
            r4.throwFeatureRequestIfSubDecorInstalled()
            r4.mFeatureIndeterminateProgress = r3
            return r3
        L48:
            r4.throwFeatureRequestIfSubDecorInstalled()
            r4.mFeatureProgress = r3
            return r3
        L4e:
            r4.throwFeatureRequestIfSubDecorInstalled()
            r4.mWindowNoTitle = r3
            return r3
    }

    @Override
    public void setContentView(int r3) {
            r2 = this;
            r2.ensureSubDecor()
            android.view.ViewGroup r0 = r2.mSubDecor
            r1 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r0 = r0.findViewById(r1)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r0.removeAllViews()
            android.content.Context r1 = r2.mContext
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            r1.inflate(r3, r0)
            android.view.Window$Callback r3 = r2.mOriginalWindowCallback
            r3.onContentChanged()
            return
    }

    @Override
    public void setContentView(android.view.View r3) {
            r2 = this;
            r2.ensureSubDecor()
            android.view.ViewGroup r0 = r2.mSubDecor
            r1 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r0 = r0.findViewById(r1)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r0.removeAllViews()
            r0.addView(r3)
            android.view.Window$Callback r3 = r2.mOriginalWindowCallback
            r3.onContentChanged()
            return
    }

    @Override
    public void setContentView(android.view.View r3, android.view.ViewGroup.LayoutParams r4) {
            r2 = this;
            r2.ensureSubDecor()
            android.view.ViewGroup r0 = r2.mSubDecor
            r1 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r0 = r0.findViewById(r1)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r0.removeAllViews()
            r0.addView(r3, r4)
            android.view.Window$Callback r3 = r2.mOriginalWindowCallback
            r3.onContentChanged()
            return
    }

    @Override
    public void setHandleNativeActionModesEnabled(boolean r1) {
            r0 = this;
            r0.mHandleNativeActionModes = r1
            return
    }

    @Override
    public void setLocalNightMode(int r2) {
            r1 = this;
            r0 = -1
            if (r2 == r0) goto L13
            if (r2 == 0) goto L13
            r0 = 1
            if (r2 == r0) goto L13
            r0 = 2
            if (r2 == r0) goto L13
            java.lang.String r2 = "AppCompatDelegate"
            java.lang.String r0 = "setLocalNightMode() called with an unknown mode"
            android.util.Log.i(r2, r0)
            goto L20
        L13:
            int r0 = r1.mLocalNightMode
            if (r0 == r2) goto L20
            r1.mLocalNightMode = r2
            boolean r2 = r1.mApplyDayNightCalled
            if (r2 == 0) goto L20
            r1.applyDayNight()
        L20:
            return
    }

    @Override
    public void setSupportActionBar(android.support.v7.widget.Toolbar r4) {
            r3 = this;
            android.view.Window$Callback r0 = r3.mOriginalWindowCallback
            boolean r0 = r0 instanceof android.app.Activity
            if (r0 != 0) goto L7
            return
        L7:
            android.support.v7.app.ActionBar r0 = r3.getSupportActionBar()
            boolean r1 = r0 instanceof android.support.v7.app.WindowDecorActionBar
            if (r1 != 0) goto L41
            r1 = 0
            r3.mMenuInflater = r1
            if (r0 == 0) goto L17
            r0.onDestroy()
        L17:
            if (r4 == 0) goto L34
            android.support.v7.app.ToolbarActionBar r0 = new android.support.v7.app.ToolbarActionBar
            android.view.Window$Callback r1 = r3.mOriginalWindowCallback
            android.app.Activity r1 = (android.app.Activity) r1
            java.lang.CharSequence r1 = r1.getTitle()
            android.view.Window$Callback r2 = r3.mAppCompatWindowCallback
            r0.<init>(r4, r1, r2)
            r3.mActionBar = r0
            android.view.Window r4 = r3.mWindow
            android.view.Window$Callback r0 = r0.getWrappedWindowCallback()
            r4.setCallback(r0)
            goto L3d
        L34:
            r3.mActionBar = r1
            android.view.Window r4 = r3.mWindow
            android.view.Window$Callback r0 = r3.mAppCompatWindowCallback
            r4.setCallback(r0)
        L3d:
            r3.invalidateOptionsMenu()
            return
        L41:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r0 = "This Activity already has an action bar supplied by the window decor. Do not request Window.FEATURE_SUPPORT_ACTION_BAR and set windowActionBar to false in your theme to use a Toolbar instead."
            r4.<init>(r0)
            throw r4
    }

    @Override
    public final void setTitle(java.lang.CharSequence r2) {
            r1 = this;
            r1.mTitle = r2
            android.support.v7.widget.DecorContentParent r0 = r1.mDecorContentParent
            if (r0 == 0) goto La
            r0.setWindowTitle(r2)
            goto L1f
        La:
            android.support.v7.app.ActionBar r0 = r1.peekSupportActionBar()
            if (r0 == 0) goto L18
            android.support.v7.app.ActionBar r0 = r1.peekSupportActionBar()
            r0.setWindowTitle(r2)
            goto L1f
        L18:
            android.widget.TextView r0 = r1.mTitleView
            if (r0 == 0) goto L1f
            r0.setText(r2)
        L1f:
            return
    }

    final boolean shouldAnimateActionModeView() {
            r1 = this;
            boolean r0 = r1.mSubDecorInstalled
            if (r0 == 0) goto L10
            android.view.ViewGroup r0 = r1.mSubDecor
            if (r0 == 0) goto L10
            boolean r0 = android.support.v4.view.ViewCompat.isLaidOut(r0)
            if (r0 == 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    @Override
    public android.support.v7.view.ActionMode startSupportActionMode(android.support.v7.view.ActionMode.Callback r3) {
            r2 = this;
            if (r3 == 0) goto L30
            android.support.v7.view.ActionMode r0 = r2.mActionMode
            if (r0 == 0) goto L9
            r0.finish()
        L9:
            android.support.v7.app.AppCompatDelegateImpl$ActionModeCallbackWrapperV9 r0 = new android.support.v7.app.AppCompatDelegateImpl$ActionModeCallbackWrapperV9
            r0.<init>(r2, r3)
            android.support.v7.app.ActionBar r3 = r2.getSupportActionBar()
            if (r3 == 0) goto L23
            android.support.v7.view.ActionMode r3 = r3.startActionMode(r0)
            r2.mActionMode = r3
            if (r3 == 0) goto L23
            android.support.v7.app.AppCompatCallback r1 = r2.mAppCompatCallback
            if (r1 == 0) goto L23
            r1.onSupportActionModeStarted(r3)
        L23:
            android.support.v7.view.ActionMode r3 = r2.mActionMode
            if (r3 != 0) goto L2d
            android.support.v7.view.ActionMode r3 = r2.startSupportActionModeFromWindow(r0)
            r2.mActionMode = r3
        L2d:
            android.support.v7.view.ActionMode r3 = r2.mActionMode
            return r3
        L30:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "ActionMode callback can not be null."
            r3.<init>(r0)
            throw r3
    }

    android.support.v7.view.ActionMode startSupportActionModeFromWindow(android.support.v7.view.ActionMode.Callback r8) {
            r7 = this;
            r7.endOnGoingFadeAnimation()
            android.support.v7.view.ActionMode r0 = r7.mActionMode
            if (r0 == 0) goto La
            r0.finish()
        La:
            boolean r0 = r8 instanceof android.support.v7.app.AppCompatDelegateImpl.ActionModeCallbackWrapperV9
            if (r0 != 0) goto L14
            android.support.v7.app.AppCompatDelegateImpl$ActionModeCallbackWrapperV9 r0 = new android.support.v7.app.AppCompatDelegateImpl$ActionModeCallbackWrapperV9
            r0.<init>(r7, r8)
            r8 = r0
        L14:
            android.support.v7.app.AppCompatCallback r0 = r7.mAppCompatCallback
            r1 = 0
            if (r0 == 0) goto L22
            boolean r2 = r7.mIsDestroyed
            if (r2 != 0) goto L22
            android.support.v7.view.ActionMode r0 = r0.onWindowStartingSupportActionMode(r8)     // Catch: java.lang.AbstractMethodError -> L22
            goto L23
        L22:
            r0 = r1
        L23:
            if (r0 == 0) goto L29
            r7.mActionMode = r0
            goto L162
        L29:
            android.support.v7.widget.ActionBarContextView r0 = r7.mActionModeView
            r2 = 0
            r3 = 1
            if (r0 != 0) goto Ld4
            boolean r0 = r7.mIsFloating
            if (r0 == 0) goto Lb5
            android.util.TypedValue r0 = new android.util.TypedValue
            r0.<init>()
            android.content.Context r4 = r7.mContext
            android.content.res.Resources$Theme r4 = r4.getTheme()
            int r5 = android.support.v7.appcompat.R.attr.actionBarTheme
            r4.resolveAttribute(r5, r0, r3)
            int r5 = r0.resourceId
            if (r5 == 0) goto L68
            android.content.Context r5 = r7.mContext
            android.content.res.Resources r5 = r5.getResources()
            android.content.res.Resources$Theme r5 = r5.newTheme()
            r5.setTo(r4)
            int r4 = r0.resourceId
            r5.applyStyle(r4, r3)
            android.support.v7.view.ContextThemeWrapper r4 = new android.support.v7.view.ContextThemeWrapper
            android.content.Context r6 = r7.mContext
            r4.<init>(r6, r2)
            android.content.res.Resources$Theme r6 = r4.getTheme()
            r6.setTo(r5)
            goto L6a
        L68:
            android.content.Context r4 = r7.mContext
        L6a:
            android.support.v7.widget.ActionBarContextView r5 = new android.support.v7.widget.ActionBarContextView
            r5.<init>(r4)
            r7.mActionModeView = r5
            android.widget.PopupWindow r5 = new android.widget.PopupWindow
            int r6 = android.support.v7.appcompat.R.attr.actionModePopupWindowStyle
            r5.<init>(r4, r1, r6)
            r7.mActionModePopup = r5
            r6 = 2
            android.support.v4.widget.PopupWindowCompat.setWindowLayoutType(r5, r6)
            android.widget.PopupWindow r5 = r7.mActionModePopup
            android.support.v7.widget.ActionBarContextView r6 = r7.mActionModeView
            r5.setContentView(r6)
            android.widget.PopupWindow r5 = r7.mActionModePopup
            r6 = -1
            r5.setWidth(r6)
            android.content.res.Resources$Theme r5 = r4.getTheme()
            int r6 = android.support.v7.appcompat.R.attr.actionBarSize
            r5.resolveAttribute(r6, r0, r3)
            int r0 = r0.data
            android.content.res.Resources r4 = r4.getResources()
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()
            int r0 = android.util.TypedValue.complexToDimensionPixelSize(r0, r4)
            android.support.v7.widget.ActionBarContextView r4 = r7.mActionModeView
            r4.setContentHeight(r0)
            android.widget.PopupWindow r0 = r7.mActionModePopup
            r4 = -2
            r0.setHeight(r4)
            android.support.v7.app.AppCompatDelegateImpl$6 r0 = new android.support.v7.app.AppCompatDelegateImpl$6
            r0.<init>(r7)
            r7.mShowActionModePopup = r0
            goto Ld4
        Lb5:
            android.view.ViewGroup r0 = r7.mSubDecor
            int r4 = android.support.v7.appcompat.R.id.action_mode_bar_stub
            android.view.View r0 = r0.findViewById(r4)
            android.support.v7.widget.ViewStubCompat r0 = (android.support.v7.widget.ViewStubCompat) r0
            if (r0 == 0) goto Ld4
            android.content.Context r4 = r7.getActionBarThemedContext()
            android.view.LayoutInflater r4 = android.view.LayoutInflater.from(r4)
            r0.setLayoutInflater(r4)
            android.view.View r0 = r0.inflate()
            android.support.v7.widget.ActionBarContextView r0 = (android.support.v7.widget.ActionBarContextView) r0
            r7.mActionModeView = r0
        Ld4:
            android.support.v7.widget.ActionBarContextView r0 = r7.mActionModeView
            if (r0 == 0) goto L162
            r7.endOnGoingFadeAnimation()
            android.support.v7.widget.ActionBarContextView r0 = r7.mActionModeView
            r0.killMode()
            android.support.v7.view.StandaloneActionMode r0 = new android.support.v7.view.StandaloneActionMode
            android.support.v7.widget.ActionBarContextView r4 = r7.mActionModeView
            android.content.Context r4 = r4.getContext()
            android.support.v7.widget.ActionBarContextView r5 = r7.mActionModeView
            android.widget.PopupWindow r6 = r7.mActionModePopup
            if (r6 != 0) goto Lef
            goto Lf0
        Lef:
            r3 = r2
        Lf0:
            r0.<init>(r4, r5, r8, r3)
            android.view.Menu r3 = r0.getMenu()
            boolean r8 = r8.onCreateActionMode(r0, r3)
            if (r8 == 0) goto L160
            r0.invalidate()
            android.support.v7.widget.ActionBarContextView r8 = r7.mActionModeView
            r8.initForMode(r0)
            r7.mActionMode = r0
            boolean r8 = r7.shouldAnimateActionModeView()
            r0 = 1065353216(0x3f800000, float:1.0)
            if (r8 == 0) goto L12a
            android.support.v7.widget.ActionBarContextView r8 = r7.mActionModeView
            r1 = 0
            r8.setAlpha(r1)
            android.support.v7.widget.ActionBarContextView r8 = r7.mActionModeView
            android.support.v4.view.ViewPropertyAnimatorCompat r8 = android.support.v4.view.ViewCompat.animate(r8)
            android.support.v4.view.ViewPropertyAnimatorCompat r8 = r8.alpha(r0)
            r7.mFadeAnim = r8
            android.support.v7.app.AppCompatDelegateImpl$7 r0 = new android.support.v7.app.AppCompatDelegateImpl$7
            r0.<init>(r7)
            r8.setListener(r0)
            goto L150
        L12a:
            android.support.v7.widget.ActionBarContextView r8 = r7.mActionModeView
            r8.setAlpha(r0)
            android.support.v7.widget.ActionBarContextView r8 = r7.mActionModeView
            r8.setVisibility(r2)
            android.support.v7.widget.ActionBarContextView r8 = r7.mActionModeView
            r0 = 32
            r8.sendAccessibilityEvent(r0)
            android.support.v7.widget.ActionBarContextView r8 = r7.mActionModeView
            android.view.ViewParent r8 = r8.getParent()
            boolean r8 = r8 instanceof android.view.View
            if (r8 == 0) goto L150
            android.support.v7.widget.ActionBarContextView r8 = r7.mActionModeView
            android.view.ViewParent r8 = r8.getParent()
            android.view.View r8 = (android.view.View) r8
            android.support.v4.view.ViewCompat.requestApplyInsets(r8)
        L150:
            android.widget.PopupWindow r8 = r7.mActionModePopup
            if (r8 == 0) goto L162
            android.view.Window r8 = r7.mWindow
            android.view.View r8 = r8.getDecorView()
            java.lang.Runnable r0 = r7.mShowActionModePopup
            r8.post(r0)
            goto L162
        L160:
            r7.mActionMode = r1
        L162:
            android.support.v7.view.ActionMode r8 = r7.mActionMode
            if (r8 == 0) goto L16d
            android.support.v7.app.AppCompatCallback r0 = r7.mAppCompatCallback
            if (r0 == 0) goto L16d
            r0.onSupportActionModeStarted(r8)
        L16d:
            android.support.v7.view.ActionMode r8 = r7.mActionMode
            return r8
    }

    int updateStatusGuard(int r9) {
            r8 = this;
            android.support.v7.widget.ActionBarContextView r0 = r8.mActionModeView
            r1 = 0
            if (r0 == 0) goto La8
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            boolean r0 = r0 instanceof android.view.ViewGroup.MarginLayoutParams
            if (r0 == 0) goto La8
            android.support.v7.widget.ActionBarContextView r0 = r8.mActionModeView
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r0 = (android.view.ViewGroup.MarginLayoutParams) r0
            android.support.v7.widget.ActionBarContextView r2 = r8.mActionModeView
            boolean r2 = r2.isShown()
            r3 = 1
            if (r2 == 0) goto L96
            android.graphics.Rect r2 = r8.mTempRect1
            if (r2 != 0) goto L30
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r8.mTempRect1 = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r8.mTempRect2 = r2
        L30:
            android.graphics.Rect r2 = r8.mTempRect1
            android.graphics.Rect r4 = r8.mTempRect2
            r2.set(r1, r9, r1, r1)
            android.view.ViewGroup r5 = r8.mSubDecor
            android.support.v7.widget.ViewUtils.computeFitSystemWindows(r5, r2, r4)
            int r2 = r4.top
            if (r2 != 0) goto L42
            r2 = r9
            goto L43
        L42:
            r2 = r1
        L43:
            int r4 = r0.topMargin
            if (r4 == r2) goto L84
            r0.topMargin = r9
            android.view.View r2 = r8.mStatusGuard
            if (r2 != 0) goto L73
            android.view.View r2 = new android.view.View
            android.content.Context r4 = r8.mContext
            r2.<init>(r4)
            r8.mStatusGuard = r2
            android.content.Context r4 = r8.mContext
            android.content.res.Resources r4 = r4.getResources()
            int r5 = android.support.v7.appcompat.R.color.abc_input_method_navigation_guard
            int r4 = r4.getColor(r5)
            r2.setBackgroundColor(r4)
            android.view.ViewGroup r2 = r8.mSubDecor
            android.view.View r4 = r8.mStatusGuard
            android.view.ViewGroup$LayoutParams r5 = new android.view.ViewGroup$LayoutParams
            r6 = -1
            r5.<init>(r6, r9)
            r2.addView(r4, r6, r5)
            goto L82
        L73:
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            int r4 = r2.height
            if (r4 == r9) goto L82
            r2.height = r9
            android.view.View r4 = r8.mStatusGuard
            r4.setLayoutParams(r2)
        L82:
            r2 = r3
            goto L85
        L84:
            r2 = r1
        L85:
            android.view.View r4 = r8.mStatusGuard
            if (r4 == 0) goto L8a
            goto L8b
        L8a:
            r3 = r1
        L8b:
            boolean r4 = r8.mOverlayActionMode
            if (r4 != 0) goto L92
            if (r3 == 0) goto L92
            r9 = r1
        L92:
            r7 = r3
            r3 = r2
            r2 = r7
            goto La0
        L96:
            int r2 = r0.topMargin
            if (r2 == 0) goto L9e
            r0.topMargin = r1
            r2 = r1
            goto La0
        L9e:
            r2 = r1
            r3 = r2
        La0:
            if (r3 == 0) goto La9
            android.support.v7.widget.ActionBarContextView r3 = r8.mActionModeView
            r3.setLayoutParams(r0)
            goto La9
        La8:
            r2 = r1
        La9:
            android.view.View r0 = r8.mStatusGuard
            if (r0 == 0) goto Lb5
            if (r2 == 0) goto Lb0
            goto Lb2
        Lb0:
            r1 = 8
        Lb2:
            r0.setVisibility(r1)
        Lb5:
            return r9
    }
}
