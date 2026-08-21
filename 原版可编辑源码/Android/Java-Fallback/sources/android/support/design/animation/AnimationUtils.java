package android.support.design.animation;

public class AnimationUtils {
    public static final android.animation.TimeInterpolator DECELERATE_INTERPOLATOR = null;
    public static final android.animation.TimeInterpolator FAST_OUT_LINEAR_IN_INTERPOLATOR = null;
    public static final android.animation.TimeInterpolator FAST_OUT_SLOW_IN_INTERPOLATOR = null;
    public static final android.animation.TimeInterpolator LINEAR_INTERPOLATOR = null;
    public static final android.animation.TimeInterpolator LINEAR_OUT_SLOW_IN_INTERPOLATOR = null;

    static {
            android.view.animation.LinearInterpolator r0 = new android.view.animation.LinearInterpolator
            r0.<init>()
            android.support.design.animation.AnimationUtils.LINEAR_INTERPOLATOR = r0
            android.support.v4.view.animation.FastOutSlowInInterpolator r0 = new android.support.v4.view.animation.FastOutSlowInInterpolator
            r0.<init>()
            android.support.design.animation.AnimationUtils.FAST_OUT_SLOW_IN_INTERPOLATOR = r0
            android.support.v4.view.animation.FastOutLinearInInterpolator r0 = new android.support.v4.view.animation.FastOutLinearInInterpolator
            r0.<init>()
            android.support.design.animation.AnimationUtils.FAST_OUT_LINEAR_IN_INTERPOLATOR = r0
            android.support.v4.view.animation.LinearOutSlowInInterpolator r0 = new android.support.v4.view.animation.LinearOutSlowInInterpolator
            r0.<init>()
            android.support.design.animation.AnimationUtils.LINEAR_OUT_SLOW_IN_INTERPOLATOR = r0
            android.view.animation.DecelerateInterpolator r0 = new android.view.animation.DecelerateInterpolator
            r0.<init>()
            android.support.design.animation.AnimationUtils.DECELERATE_INTERPOLATOR = r0
            return
    }

    public AnimationUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static float lerp(float r0, float r1, float r2) {
            float r1 = r1 - r0
            float r2 = r2 * r1
            float r0 = r0 + r2
            return r0
    }

    public static int lerp(int r0, int r1, float r2) {
            int r1 = r1 - r0
            float r1 = (float) r1
            float r2 = r2 * r1
            int r1 = java.lang.Math.round(r2)
            int r0 = r0 + r1
            return r0
    }
}
