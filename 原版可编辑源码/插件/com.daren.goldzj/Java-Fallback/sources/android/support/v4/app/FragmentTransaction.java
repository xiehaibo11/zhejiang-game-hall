package android.support.v4.app;

import android.support.annotation.AnimRes;
import android.support.annotation.AnimatorRes;
import android.support.annotation.IdRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.StringRes;
import android.support.annotation.StyleRes;
import android.view.View;

public abstract class FragmentTransaction {
    public static final int TRANSIT_ENTER_MASK = 4096;
    public static final int TRANSIT_EXIT_MASK = 8192;
    public static final int TRANSIT_FRAGMENT_CLOSE = 8194;
    public static final int TRANSIT_FRAGMENT_FADE = 4099;
    public static final int TRANSIT_FRAGMENT_OPEN = 4097;
    public static final int TRANSIT_NONE = 0;
    public static final int TRANSIT_UNSET = -1;

    @NonNull
    public abstract FragmentTransaction add(@IdRes int r1, @NonNull Fragment r2);

    @NonNull
    public abstract FragmentTransaction add(@IdRes int r1, @NonNull Fragment r2, @Nullable String r3);

    @NonNull
    public abstract FragmentTransaction add(@NonNull Fragment r1, @Nullable String r2);

    @NonNull
    public abstract FragmentTransaction addSharedElement(@NonNull View r1, @NonNull String r2);

    @NonNull
    public abstract FragmentTransaction addToBackStack(@Nullable String r1);

    @NonNull
    public abstract FragmentTransaction attach(@NonNull Fragment r1);

    public abstract int commit();

    public abstract int commitAllowingStateLoss();

    public abstract void commitNow();

    public abstract void commitNowAllowingStateLoss();

    @NonNull
    public abstract FragmentTransaction detach(@NonNull Fragment r1);

    @NonNull
    public abstract FragmentTransaction disallowAddToBackStack();

    @NonNull
    public abstract FragmentTransaction hide(@NonNull Fragment r1);

    public abstract boolean isAddToBackStackAllowed();

    public abstract boolean isEmpty();

    @NonNull
    public abstract FragmentTransaction remove(@NonNull Fragment r1);

    @NonNull
    public abstract FragmentTransaction replace(@IdRes int r1, @NonNull Fragment r2);

    @NonNull
    public abstract FragmentTransaction replace(@IdRes int r1, @NonNull Fragment r2, @Nullable String r3);

    @NonNull
    public abstract FragmentTransaction runOnCommit(@NonNull Runnable r1);

    @Deprecated
    public abstract FragmentTransaction setAllowOptimization(boolean r1);

    @NonNull
    public abstract FragmentTransaction setBreadCrumbShortTitle(@StringRes int r1);

    @NonNull
    public abstract FragmentTransaction setBreadCrumbShortTitle(@Nullable CharSequence r1);

    @NonNull
    public abstract FragmentTransaction setBreadCrumbTitle(@StringRes int r1);

    @NonNull
    public abstract FragmentTransaction setBreadCrumbTitle(@Nullable CharSequence r1);

    @NonNull
    public abstract FragmentTransaction setCustomAnimations(@AnimRes @AnimatorRes int r1, @AnimRes @AnimatorRes int r2);

    @NonNull
    public abstract FragmentTransaction setCustomAnimations(@AnimRes @AnimatorRes int r1, @AnimRes @AnimatorRes int r2, @AnimRes @AnimatorRes int r3, @AnimRes @AnimatorRes int r4);

    @NonNull
    public abstract FragmentTransaction setPrimaryNavigationFragment(@Nullable Fragment r1);

    @NonNull
    public abstract FragmentTransaction setReorderingAllowed(boolean r1);

    @NonNull
    public abstract FragmentTransaction setTransition(int r1);

    @NonNull
    public abstract FragmentTransaction setTransitionStyle(@StyleRes int r1);

    @NonNull
    public abstract FragmentTransaction show(@NonNull Fragment r1);

    public FragmentTransaction() {
    }
}
