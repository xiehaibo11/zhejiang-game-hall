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

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction add(@android.support.annotation.IdRes int r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction add(@android.support.annotation.IdRes int r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2, @android.support.annotation.Nullable java.lang.String r3);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction add(@android.support.annotation.NonNull android.support.v4.app.Fragment r1, @android.support.annotation.Nullable java.lang.String r2);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction addSharedElement(@android.support.annotation.NonNull android.view.View r1, @android.support.annotation.NonNull java.lang.String r2);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction addToBackStack(@android.support.annotation.Nullable java.lang.String r1);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction attach(@android.support.annotation.NonNull android.support.v4.app.Fragment r1);

    public abstract int commit();

    public abstract int commitAllowingStateLoss();

    public abstract void commitNow();

    public abstract void commitNowAllowingStateLoss();

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction detach(@android.support.annotation.NonNull android.support.v4.app.Fragment r1);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction disallowAddToBackStack();

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction hide(@android.support.annotation.NonNull android.support.v4.app.Fragment r1);

    public abstract boolean isAddToBackStackAllowed();

    public abstract boolean isEmpty();

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction remove(@android.support.annotation.NonNull android.support.v4.app.Fragment r1);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction replace(@android.support.annotation.IdRes int r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction replace(@android.support.annotation.IdRes int r1, @android.support.annotation.NonNull android.support.v4.app.Fragment r2, @android.support.annotation.Nullable java.lang.String r3);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction runOnCommit(@android.support.annotation.NonNull java.lang.Runnable r1);

    @java.lang.Deprecated
    public abstract android.support.v4.app.FragmentTransaction setAllowOptimization(boolean r1);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction setBreadCrumbShortTitle(@android.support.annotation.StringRes int r1);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction setBreadCrumbShortTitle(@android.support.annotation.Nullable java.lang.CharSequence r1);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction setBreadCrumbTitle(@android.support.annotation.StringRes int r1);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction setBreadCrumbTitle(@android.support.annotation.Nullable java.lang.CharSequence r1);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction setCustomAnimations(@android.support.annotation.AnimRes @android.support.annotation.AnimatorRes int r1, @android.support.annotation.AnimRes @android.support.annotation.AnimatorRes int r2);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction setCustomAnimations(@android.support.annotation.AnimRes @android.support.annotation.AnimatorRes int r1, @android.support.annotation.AnimRes @android.support.annotation.AnimatorRes int r2, @android.support.annotation.AnimRes @android.support.annotation.AnimatorRes int r3, @android.support.annotation.AnimRes @android.support.annotation.AnimatorRes int r4);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction setPrimaryNavigationFragment(@android.support.annotation.Nullable android.support.v4.app.Fragment r1);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction setReorderingAllowed(boolean r1);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction setTransition(int r1);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction setTransitionStyle(@android.support.annotation.StyleRes int r1);

    @android.support.annotation.NonNull
    public abstract android.support.v4.app.FragmentTransaction show(@android.support.annotation.NonNull android.support.v4.app.Fragment r1);
}
