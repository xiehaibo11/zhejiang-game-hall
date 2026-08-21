package android.support.v7.app;

public abstract class AppCompatDelegate {
    public static final int FEATURE_ACTION_MODE_OVERLAY = 10;
    public static final int FEATURE_SUPPORT_ACTION_BAR = 108;
    public static final int FEATURE_SUPPORT_ACTION_BAR_OVERLAY = 109;
    public static final int MODE_NIGHT_AUTO = 0;
    public static final int MODE_NIGHT_FOLLOW_SYSTEM = -1;
    public static final int MODE_NIGHT_NO = 1;
    static final int MODE_NIGHT_UNSPECIFIED = -100;
    public static final int MODE_NIGHT_YES = 2;
    static final java.lang.String TAG = "AppCompatDelegate";
    private static int sDefaultNightMode = -1;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public @interface NightMode {
    }

    static {
            return
    }

    AppCompatDelegate() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.support.v7.app.AppCompatDelegate create(android.app.Activity r2, android.support.v7.app.AppCompatCallback r3) {
            android.support.v7.app.AppCompatDelegateImpl r0 = new android.support.v7.app.AppCompatDelegateImpl
            android.view.Window r1 = r2.getWindow()
            r0.<init>(r2, r1, r3)
            return r0
    }

    public static android.support.v7.app.AppCompatDelegate create(android.app.Dialog r2, android.support.v7.app.AppCompatCallback r3) {
            android.support.v7.app.AppCompatDelegateImpl r0 = new android.support.v7.app.AppCompatDelegateImpl
            android.content.Context r1 = r2.getContext()
            android.view.Window r2 = r2.getWindow()
            r0.<init>(r1, r2, r3)
            return r0
    }

    public static android.support.v7.app.AppCompatDelegate create(android.content.Context r1, android.view.Window r2, android.support.v7.app.AppCompatCallback r3) {
            android.support.v7.app.AppCompatDelegateImpl r0 = new android.support.v7.app.AppCompatDelegateImpl
            r0.<init>(r1, r2, r3)
            return r0
    }

    public static int getDefaultNightMode() {
            int r0 = android.support.v7.app.AppCompatDelegate.sDefaultNightMode
            return r0
    }

    public static boolean isCompatVectorFromResourcesEnabled() {
            boolean r0 = android.support.v7.widget.VectorEnabledTintResources.isCompatVectorFromResourcesEnabled()
            return r0
    }

    public static void setCompatVectorFromResourcesEnabled(boolean r0) {
            android.support.v7.widget.VectorEnabledTintResources.setCompatVectorFromResourcesEnabled(r0)
            return
    }

    public static void setDefaultNightMode(int r1) {
            r0 = -1
            if (r1 == r0) goto L13
            if (r1 == 0) goto L13
            r0 = 1
            if (r1 == r0) goto L13
            r0 = 2
            if (r1 == r0) goto L13
            java.lang.String r1 = "AppCompatDelegate"
            java.lang.String r0 = "setDefaultNightMode() called with an unknown mode"
            android.util.Log.d(r1, r0)
            goto L15
        L13:
            android.support.v7.app.AppCompatDelegate.sDefaultNightMode = r1
        L15:
            return
    }

    public abstract void addContentView(android.view.View r1, android.view.ViewGroup.LayoutParams r2);

    public abstract boolean applyDayNight();

    public abstract android.view.View createView(@android.support.annotation.Nullable android.view.View r1, java.lang.String r2, @android.support.annotation.NonNull android.content.Context r3, @android.support.annotation.NonNull android.util.AttributeSet r4);

    @android.support.annotation.Nullable
    public abstract <T extends android.view.View> T findViewById(@android.support.annotation.IdRes int r1);

    @android.support.annotation.Nullable
    public abstract android.support.v7.app.ActionBarDrawerToggle.Delegate getDrawerToggleDelegate();

    public abstract android.view.MenuInflater getMenuInflater();

    @android.support.annotation.Nullable
    public abstract android.support.v7.app.ActionBar getSupportActionBar();

    public abstract boolean hasWindowFeature(int r1);

    public abstract void installViewFactory();

    public abstract void invalidateOptionsMenu();

    public abstract boolean isHandleNativeActionModesEnabled();

    public abstract void onConfigurationChanged(android.content.res.Configuration r1);

    public abstract void onCreate(android.os.Bundle r1);

    public abstract void onDestroy();

    public abstract void onPostCreate(android.os.Bundle r1);

    public abstract void onPostResume();

    public abstract void onSaveInstanceState(android.os.Bundle r1);

    public abstract void onStart();

    public abstract void onStop();

    public abstract boolean requestWindowFeature(int r1);

    public abstract void setContentView(@android.support.annotation.LayoutRes int r1);

    public abstract void setContentView(android.view.View r1);

    public abstract void setContentView(android.view.View r1, android.view.ViewGroup.LayoutParams r2);

    public abstract void setHandleNativeActionModesEnabled(boolean r1);

    public abstract void setLocalNightMode(int r1);

    public abstract void setSupportActionBar(@android.support.annotation.Nullable android.support.v7.widget.Toolbar r1);

    public abstract void setTitle(@android.support.annotation.Nullable java.lang.CharSequence r1);

    @android.support.annotation.Nullable
    public abstract android.support.v7.view.ActionMode startSupportActionMode(@android.support.annotation.NonNull android.support.v7.view.ActionMode.Callback r1);
}
