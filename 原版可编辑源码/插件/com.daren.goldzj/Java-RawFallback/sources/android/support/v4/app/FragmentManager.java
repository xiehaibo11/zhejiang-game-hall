package android.support.v4.app;

public abstract class FragmentManager {
    public static final int POP_BACK_STACK_INCLUSIVE = 1;

    public interface BackStackEntry {
        @android.support.annotation.Nullable
        java.lang.CharSequence getBreadCrumbShortTitle();

        @android.support.annotation.StringRes
        int getBreadCrumbShortTitleRes();

        @android.support.annotation.Nullable
        java.lang.CharSequence getBreadCrumbTitle();

        @android.support.annotation.StringRes
        int getBreadCrumbTitleRes();

        int getId();

        @android.support.annotation.Nullable
        java.lang.String getName();
    }

    public static abstract class FragmentLifecycleCallbacks {
        public FragmentLifecycleCallbacks() {
                r0 = this;
                r0.<init>()
                return
        }

        public void onFragmentActivityCreated(@android.support.annotation.NonNull android.support.v4.app.FragmentManager r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2, @android.support.annotation.Nullable android.os.Bundle r3) {
                r0 = this;
                return
        }

        public void onFragmentAttached(@android.support.annotation.NonNull android.support.v4.app.FragmentManager r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2, @android.support.annotation.NonNull android.content.Context r3) {
                r0 = this;
                return
        }

        public void onFragmentCreated(@android.support.annotation.NonNull android.support.v4.app.FragmentManager r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2, @android.support.annotation.Nullable android.os.Bundle r3) {
                r0 = this;
                return
        }

        public void onFragmentDestroyed(@android.support.annotation.NonNull android.support.v4.app.FragmentManager r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2) {
                r0 = this;
                return
        }

        public void onFragmentDetached(@android.support.annotation.NonNull android.support.v4.app.FragmentManager r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2) {
                r0 = this;
                return
        }

        public void onFragmentPaused(@android.support.annotation.NonNull android.support.v4.app.FragmentManager r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2) {
                r0 = this;
                return
        }

        public void onFragmentPreAttached(@android.support.annotation.NonNull android.support.v4.app.FragmentManager r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2, @android.support.annotation.NonNull android.content.Context r3) {
                r0 = this;
                return
        }

        public void onFragmentPreCreated(@android.support.annotation.NonNull android.support.v4.app.FragmentManager r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2, @android.support.annotation.Nullable android.os.Bundle r3) {
                r0 = this;
                return
        }

        public void onFragmentResumed(@android.support.annotation.NonNull android.support.v4.app.FragmentManager r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2) {
                r0 = this;
                return
        }

        public void onFragmentSaveInstanceState(@android.support.annotation.NonNull android.support.v4.app.FragmentManager r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2, @android.support.annotation.NonNull android.os.Bundle r3) {
                r0 = this;
                return
        }

        public void onFragmentStarted(@android.support.annotation.NonNull android.support.v4.app.FragmentManager r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2) {
                r0 = this;
                return
        }

        public void onFragmentStopped(@android.support.annotation.NonNull android.support.v4.app.FragmentManager r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2) {
                r0 = this;
                return
        }

        public void onFragmentViewCreated(@android.support.annotation.NonNull android.support.v4.app.FragmentManager r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2, @android.support.annotation.NonNull android.view.View r3, @android.support.annotation.Nullable android.os.Bundle r4) {
                r0 = this;
                return
        }

        public void onFragmentViewDestroyed(@android.support.annotation.NonNull android.support.v4.app.FragmentManager r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2) {
                r0 = this;
                return
        }
    }

    public interface OnBackStackChangedListener {
        void onBackStackChanged();
    }

    public FragmentManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void enableDebugLogging(boolean r0) {
            android.support.v4.app.FragmentManagerImpl.DEBUG = r0
            return
    }

    public abstract void addOnBackStackChangedListener(@android.support.annotation.NonNull android.support.v4.app.FragmentManager.OnBackStackChangedListener r1);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction beginTransaction();

    public abstract void dump(java.lang.String r1, java.io.FileDescriptor r2, java.io.PrintWriter r3, java.lang.String[] r4);

    public abstract boolean executePendingTransactions();

    @android.support.annotation.Nullable
    public abstract android.support.v4.app.Fragment findFragmentById(@android.support.annotation.IdRes int r1);

    @android.support.annotation.Nullable
    public abstract android.support.v4.app.Fragment findFragmentByTag(@android.support.annotation.Nullable java.lang.String r1);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentManager.BackStackEntry getBackStackEntryAt(int r1);

    public abstract int getBackStackEntryCount();

    @android.support.annotation.Nullable
    public abstract android.support.v4.app.Fragment getFragment(@android.support.annotation.NonNull android.os.Bundle r1, @android.support.annotation.NonNull java.lang.String r2);

    @android.support.annotation.NonNull
    public abstract java.util.List<android.support.v4.app.Fragment> getFragments();

    @android.support.annotation.Nullable
    public abstract android.support.v4.app.Fragment getPrimaryNavigationFragment();

    public abstract boolean isDestroyed();

    public abstract boolean isStateSaved();

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    @java.lang.Deprecated
    public android.support.v4.app.FragmentTransaction openTransaction() {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.beginTransaction()
            return r0
    }

    public abstract void popBackStack();

    public abstract void popBackStack(int r1, int r2);

    public abstract void popBackStack(@android.support.annotation.Nullable java.lang.String r1, int r2);

    public abstract boolean popBackStackImmediate();

    public abstract boolean popBackStackImmediate(int r1, int r2);

    public abstract boolean popBackStackImmediate(@android.support.annotation.Nullable java.lang.String r1, int r2);

    public abstract void putFragment(@android.support.annotation.NonNull android.os.Bundle r1, @android.support.annotation.NonNull java.lang.String r2, @android.support.annotation.NonNull android.support.v4.app.Fragment r3);

    public abstract void registerFragmentLifecycleCallbacks(@android.support.annotation.NonNull android.support.v4.app.FragmentManager.FragmentLifecycleCallbacks r1, boolean r2);

    public abstract void removeOnBackStackChangedListener(@android.support.annotation.NonNull android.support.v4.app.FragmentManager.OnBackStackChangedListener r1);

    @android.support.annotation.Nullable
    public abstract android.support.v4.app.Fragment.SavedState saveFragmentInstanceState(android.support.v4.app.Fragment r1);

    public abstract void unregisterFragmentLifecycleCallbacks(@android.support.annotation.NonNull android.support.v4.app.FragmentManager.FragmentLifecycleCallbacks r1);
}
