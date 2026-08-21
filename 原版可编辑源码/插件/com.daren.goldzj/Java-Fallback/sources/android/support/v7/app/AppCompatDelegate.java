package android.support.v7.app;

import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.content.res.Configuration;
import android.os.Bundle;
import android.support.annotation.IdRes;
import android.support.annotation.LayoutRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v7.app.ActionBarDrawerToggle;
import android.support.v7.view.ActionMode;
import android.support.v7.widget.Toolbar;
import android.support.v7.widget.VectorEnabledTintResources;
import android.util.AttributeSet;
import android.util.Log;
import android.view.MenuInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public abstract class AppCompatDelegate {
    public static final int FEATURE_ACTION_MODE_OVERLAY = 10;
    public static final int FEATURE_SUPPORT_ACTION_BAR = 108;
    public static final int FEATURE_SUPPORT_ACTION_BAR_OVERLAY = 109;
    public static final int MODE_NIGHT_AUTO = 0;
    public static final int MODE_NIGHT_FOLLOW_SYSTEM = -1;
    public static final int MODE_NIGHT_NO = 1;
    static final int MODE_NIGHT_UNSPECIFIED = -100;
    public static final int MODE_NIGHT_YES = 2;
    static final String TAG = "AppCompatDelegate";
    private static int sDefaultNightMode = -1;

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface NightMode {
    }

    static {
    }

    public abstract void addContentView(View r1, ViewGroup.LayoutParams r2);

    public abstract boolean applyDayNight();

    public abstract View createView(@Nullable View r1, String r2, @NonNull Context r3, @NonNull AttributeSet r4);

    @Nullable
    public abstract <T extends View> T findViewById(@IdRes int r1);

    @Nullable
    public abstract ActionBarDrawerToggle.Delegate getDrawerToggleDelegate();

    public abstract MenuInflater getMenuInflater();

    @Nullable
    public abstract ActionBar getSupportActionBar();

    public abstract boolean hasWindowFeature(int r1);

    public abstract void installViewFactory();

    public abstract void invalidateOptionsMenu();

    public abstract boolean isHandleNativeActionModesEnabled();

    public abstract void onConfigurationChanged(Configuration r1);

    public abstract void onCreate(Bundle r1);

    public abstract void onDestroy();

    public abstract void onPostCreate(Bundle r1);

    public abstract void onPostResume();

    public abstract void onSaveInstanceState(Bundle r1);

    public abstract void onStart();

    public abstract void onStop();

    public abstract boolean requestWindowFeature(int r1);

    public abstract void setContentView(@LayoutRes int r1);

    public abstract void setContentView(View r1);

    public abstract void setContentView(View r1, ViewGroup.LayoutParams r2);

    public abstract void setHandleNativeActionModesEnabled(boolean r1);

    public abstract void setLocalNightMode(int r1);

    public abstract void setSupportActionBar(@Nullable Toolbar r1);

    public abstract void setTitle(@Nullable CharSequence r1);

    @Nullable
    public abstract ActionMode startSupportActionMode(@NonNull ActionMode.Callback r1);

    public static AppCompatDelegate create(Activity r2, AppCompatCallback r3) {
        return new AppCompatDelegateImpl(r2, r2.getWindow(), r3);
    }

    public static AppCompatDelegate create(Dialog r2, AppCompatCallback r3) {
        return new AppCompatDelegateImpl(r2.getContext(), r2.getWindow(), r3);
    }

    public static AppCompatDelegate create(Context r1, Window r2, AppCompatCallback r3) {
        return new AppCompatDelegateImpl(r1, r2, r3);
    }

    AppCompatDelegate() {
    }

    public static void setDefaultNightMode(int r1) {
        if (r1 == (-1)) goto L10;
        if (r1 == 0) goto L10;
        if (r1 == 1) goto L10;
        if (r1 == 2) goto L10;
        Log.d(TAG, "setDefaultNightMode() called with an unknown mode");
        return;
    L10:
        sDefaultNightMode = r1;
    }

    public static int getDefaultNightMode() {
        return sDefaultNightMode;
    }

    public static void setCompatVectorFromResourcesEnabled(boolean r0) {
        VectorEnabledTintResources.setCompatVectorFromResourcesEnabled(r0);
    }

    public static boolean isCompatVectorFromResourcesEnabled() {
        return VectorEnabledTintResources.isCompatVectorFromResourcesEnabled();
    }
}
