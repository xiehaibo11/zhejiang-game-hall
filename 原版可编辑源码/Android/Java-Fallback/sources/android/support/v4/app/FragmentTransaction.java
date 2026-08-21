package android.support.v4.app;

public abstract class FragmentTransaction {
    public static final int TRANSIT_ENTER_MASK = 4096;
    public static final int TRANSIT_EXIT_MASK = 8192;
    public static final int TRANSIT_FRAGMENT_CLOSE = 8194;
    public static final int TRANSIT_FRAGMENT_FADE = 4099;
    public static final int TRANSIT_FRAGMENT_OPEN = 4097;
    public static final int TRANSIT_NONE = 0;
    public static final int TRANSIT_UNSET = -1;

    public FragmentTransaction() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract android.support.v4.app.FragmentTransaction add(int r1, android.support.v4.app.Fragment r2);

    public abstract android.support.v4.app.FragmentTransaction add(int r1, android.support.v4.app.Fragment r2, java.lang.String r3);

    public abstract android.support.v4.app.FragmentTransaction add(android.support.v4.app.Fragment r1, java.lang.String r2);

    public abstract android.support.v4.app.FragmentTransaction addSharedElement(android.view.View r1, java.lang.String r2);

    public abstract android.support.v4.app.FragmentTransaction addToBackStack(java.lang.String r1);

    public abstract android.support.v4.app.FragmentTransaction attach(android.support.v4.app.Fragment r1);

    public abstract int commit();

    public abstract int commitAllowingStateLoss();

    public abstract void commitNow();

    public abstract void commitNowAllowingStateLoss();

    public abstract android.support.v4.app.FragmentTransaction detach(android.support.v4.app.Fragment r1);

    public abstract android.support.v4.app.FragmentTransaction disallowAddToBackStack();

    public abstract android.support.v4.app.FragmentTransaction hide(android.support.v4.app.Fragment r1);

    public abstract boolean isAddToBackStackAllowed();

    public abstract boolean isEmpty();

    public abstract android.support.v4.app.FragmentTransaction remove(android.support.v4.app.Fragment r1);

    public abstract android.support.v4.app.FragmentTransaction replace(int r1, android.support.v4.app.Fragment r2);

    public abstract android.support.v4.app.FragmentTransaction replace(int r1, android.support.v4.app.Fragment r2, java.lang.String r3);

    public abstract android.support.v4.app.FragmentTransaction runOnCommit(java.lang.Runnable r1);

    @java.lang.Deprecated
    public abstract android.support.v4.app.FragmentTransaction setAllowOptimization(boolean r1);

    public abstract android.support.v4.app.FragmentTransaction setBreadCrumbShortTitle(int r1);

    public abstract android.support.v4.app.FragmentTransaction setBreadCrumbShortTitle(java.lang.CharSequence r1);

    public abstract android.support.v4.app.FragmentTransaction setBreadCrumbTitle(int r1);

    public abstract android.support.v4.app.FragmentTransaction setBreadCrumbTitle(java.lang.CharSequence r1);

    public abstract android.support.v4.app.FragmentTransaction setCustomAnimations(int r1, int r2);

    public abstract android.support.v4.app.FragmentTransaction setCustomAnimations(int r1, int r2, int r3, int r4);

    public abstract android.support.v4.app.FragmentTransaction setPrimaryNavigationFragment(android.support.v4.app.Fragment r1);

    public abstract android.support.v4.app.FragmentTransaction setReorderingAllowed(boolean r1);

    public abstract android.support.v4.app.FragmentTransaction setTransition(int r1);

    public abstract android.support.v4.app.FragmentTransaction setTransitionStyle(int r1);

    public abstract android.support.v4.app.FragmentTransaction show(android.support.v4.app.Fragment r1);
}
