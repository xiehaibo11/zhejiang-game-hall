package android.support.v4.app;

import android.content.Context;
import android.os.Bundle;
import android.support.annotation.IdRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.annotation.StringRes;
import android.support.v4.app.Fragment;
import android.view.View;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.List;

public abstract class FragmentManager {
    public static final int POP_BACK_STACK_INCLUSIVE = 1;

    public interface BackStackEntry {
        @Nullable
        CharSequence getBreadCrumbShortTitle();

        @StringRes
        int getBreadCrumbShortTitleRes();

        @Nullable
        CharSequence getBreadCrumbTitle();

        @StringRes
        int getBreadCrumbTitleRes();

        int getId();

        @Nullable
        String getName();
    }

    public static abstract class FragmentLifecycleCallbacks {
        public void onFragmentActivityCreated(@NonNull FragmentManager r1, @NonNull Fragment r2, @Nullable Bundle r3) {
        }

        public void onFragmentAttached(@NonNull FragmentManager r1, @NonNull Fragment r2, @NonNull Context r3) {
        }

        public void onFragmentCreated(@NonNull FragmentManager r1, @NonNull Fragment r2, @Nullable Bundle r3) {
        }

        public void onFragmentDestroyed(@NonNull FragmentManager r1, @NonNull Fragment r2) {
        }

        public void onFragmentDetached(@NonNull FragmentManager r1, @NonNull Fragment r2) {
        }

        public void onFragmentPaused(@NonNull FragmentManager r1, @NonNull Fragment r2) {
        }

        public void onFragmentPreAttached(@NonNull FragmentManager r1, @NonNull Fragment r2, @NonNull Context r3) {
        }

        public void onFragmentPreCreated(@NonNull FragmentManager r1, @NonNull Fragment r2, @Nullable Bundle r3) {
        }

        public void onFragmentResumed(@NonNull FragmentManager r1, @NonNull Fragment r2) {
        }

        public void onFragmentSaveInstanceState(@NonNull FragmentManager r1, @NonNull Fragment r2, @NonNull Bundle r3) {
        }

        public void onFragmentStarted(@NonNull FragmentManager r1, @NonNull Fragment r2) {
        }

        public void onFragmentStopped(@NonNull FragmentManager r1, @NonNull Fragment r2) {
        }

        public void onFragmentViewCreated(@NonNull FragmentManager r1, @NonNull Fragment r2, @NonNull View r3, @Nullable Bundle r4) {
        }

        public void onFragmentViewDestroyed(@NonNull FragmentManager r1, @NonNull Fragment r2) {
        }

        public FragmentLifecycleCallbacks() {
        }
    }

    public interface OnBackStackChangedListener {
        void onBackStackChanged();
    }

    public abstract void addOnBackStackChangedListener(@NonNull OnBackStackChangedListener r1);

    @NonNull
    public abstract FragmentTransaction beginTransaction();

    public abstract void dump(String r1, FileDescriptor r2, PrintWriter r3, String[] r4);

    public abstract boolean executePendingTransactions();

    @Nullable
    public abstract Fragment findFragmentById(@IdRes int r1);

    @Nullable
    public abstract Fragment findFragmentByTag(@Nullable String r1);

    @NonNull
    public abstract BackStackEntry getBackStackEntryAt(int r1);

    public abstract int getBackStackEntryCount();

    @Nullable
    public abstract Fragment getFragment(@NonNull Bundle r1, @NonNull String r2);

    @NonNull
    public abstract List<Fragment> getFragments();

    @Nullable
    public abstract Fragment getPrimaryNavigationFragment();

    public abstract boolean isDestroyed();

    public abstract boolean isStateSaved();

    public abstract void popBackStack();

    public abstract void popBackStack(int r1, int r2);

    public abstract void popBackStack(@Nullable String r1, int r2);

    public abstract boolean popBackStackImmediate();

    public abstract boolean popBackStackImmediate(int r1, int r2);

    public abstract boolean popBackStackImmediate(@Nullable String r1, int r2);

    public abstract void putFragment(@NonNull Bundle r1, @NonNull String r2, @NonNull Fragment r3);

    public abstract void registerFragmentLifecycleCallbacks(@NonNull FragmentLifecycleCallbacks r1, boolean r2);

    public abstract void removeOnBackStackChangedListener(@NonNull OnBackStackChangedListener r1);

    @Nullable
    public abstract Fragment.SavedState saveFragmentInstanceState(Fragment r1);

    public abstract void unregisterFragmentLifecycleCallbacks(@NonNull FragmentLifecycleCallbacks r1);

    public FragmentManager() {
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    @Deprecated
    public FragmentTransaction openTransaction() {
        return beginTransaction();
    }

    public static void enableDebugLogging(boolean r0) {
        FragmentManagerImpl.DEBUG = r0;
    }
}
