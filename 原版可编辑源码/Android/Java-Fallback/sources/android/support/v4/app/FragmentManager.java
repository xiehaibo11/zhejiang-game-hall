package android.support.v4.app;

public abstract class FragmentManager {
    public static final int POP_BACK_STACK_INCLUSIVE = 1;

    public interface BackStackEntry {
        java.lang.CharSequence getBreadCrumbShortTitle();

        int getBreadCrumbShortTitleRes();

        java.lang.CharSequence getBreadCrumbTitle();

        int getBreadCrumbTitleRes();

        int getId();

        java.lang.String getName();
    }

    public static abstract class FragmentLifecycleCallbacks {
        public FragmentLifecycleCallbacks() {
                r0 = this;
                r0.<init>()
                return
        }

        public void onFragmentActivityCreated(android.support.v4.app.FragmentManager r1, android.support.v4.app.Fragment r2, android.os.Bundle r3) {
                r0 = this;
                return
        }

        public void onFragmentAttached(android.support.v4.app.FragmentManager r1, android.support.v4.app.Fragment r2, android.content.Context r3) {
                r0 = this;
                return
        }

        public void onFragmentCreated(android.support.v4.app.FragmentManager r1, android.support.v4.app.Fragment r2, android.os.Bundle r3) {
                r0 = this;
                return
        }

        public void onFragmentDestroyed(android.support.v4.app.FragmentManager r1, android.support.v4.app.Fragment r2) {
                r0 = this;
                return
        }

        public void onFragmentDetached(android.support.v4.app.FragmentManager r1, android.support.v4.app.Fragment r2) {
                r0 = this;
                return
        }

        public void onFragmentPaused(android.support.v4.app.FragmentManager r1, android.support.v4.app.Fragment r2) {
                r0 = this;
                return
        }

        public void onFragmentPreAttached(android.support.v4.app.FragmentManager r1, android.support.v4.app.Fragment r2, android.content.Context r3) {
                r0 = this;
                return
        }

        public void onFragmentPreCreated(android.support.v4.app.FragmentManager r1, android.support.v4.app.Fragment r2, android.os.Bundle r3) {
                r0 = this;
                return
        }

        public void onFragmentResumed(android.support.v4.app.FragmentManager r1, android.support.v4.app.Fragment r2) {
                r0 = this;
                return
        }

        public void onFragmentSaveInstanceState(android.support.v4.app.FragmentManager r1, android.support.v4.app.Fragment r2, android.os.Bundle r3) {
                r0 = this;
                return
        }

        public void onFragmentStarted(android.support.v4.app.FragmentManager r1, android.support.v4.app.Fragment r2) {
                r0 = this;
                return
        }

        public void onFragmentStopped(android.support.v4.app.FragmentManager r1, android.support.v4.app.Fragment r2) {
                r0 = this;
                return
        }

        public void onFragmentViewCreated(android.support.v4.app.FragmentManager r1, android.support.v4.app.Fragment r2, android.view.View r3, android.os.Bundle r4) {
                r0 = this;
                return
        }

        public void onFragmentViewDestroyed(android.support.v4.app.FragmentManager r1, android.support.v4.app.Fragment r2) {
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

    public abstract void addOnBackStackChangedListener(android.support.v4.app.FragmentManager.OnBackStackChangedListener r1);

    public abstract android.support.v4.app.FragmentTransaction beginTransaction();

    public abstract void dump(java.lang.String r1, java.io.FileDescriptor r2, java.io.PrintWriter r3, java.lang.String[] r4);

    public abstract boolean executePendingTransactions();

    public abstract android.support.v4.app.Fragment findFragmentById(int r1);

    public abstract android.support.v4.app.Fragment findFragmentByTag(java.lang.String r1);

    public abstract android.support.v4.app.FragmentManager.BackStackEntry getBackStackEntryAt(int r1);

    public abstract int getBackStackEntryCount();

    public abstract android.support.v4.app.Fragment getFragment(android.os.Bundle r1, java.lang.String r2);

    public abstract java.util.List<android.support.v4.app.Fragment> getFragments();

    public abstract android.support.v4.app.Fragment getPrimaryNavigationFragment();

    public abstract boolean isDestroyed();

    public abstract boolean isStateSaved();

    @java.lang.Deprecated
    public android.support.v4.app.FragmentTransaction openTransaction() {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.beginTransaction()
            return r0
    }

    public abstract void popBackStack();

    public abstract void popBackStack(int r1, int r2);

    public abstract void popBackStack(java.lang.String r1, int r2);

    public abstract boolean popBackStackImmediate();

    public abstract boolean popBackStackImmediate(int r1, int r2);

    public abstract boolean popBackStackImmediate(java.lang.String r1, int r2);

    public abstract void putFragment(android.os.Bundle r1, java.lang.String r2, android.support.v4.app.Fragment r3);

    public abstract void registerFragmentLifecycleCallbacks(android.support.v4.app.FragmentManager.FragmentLifecycleCallbacks r1, boolean r2);

    public abstract void removeOnBackStackChangedListener(android.support.v4.app.FragmentManager.OnBackStackChangedListener r1);

    public abstract android.support.v4.app.Fragment.SavedState saveFragmentInstanceState(android.support.v4.app.Fragment r1);

    public abstract void unregisterFragmentLifecycleCallbacks(android.support.v4.app.FragmentManager.FragmentLifecycleCallbacks r1);
}
