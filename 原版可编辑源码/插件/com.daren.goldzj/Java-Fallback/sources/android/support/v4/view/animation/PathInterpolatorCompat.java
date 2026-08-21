package android.support.v4.view.animation;

import android.graphics.Path;
import android.os.Build;
import android.view.animation.Interpolator;
import android.view.animation.PathInterpolator;

public final class PathInterpolatorCompat {
    private PathInterpolatorCompat() {
    }

    public static Interpolator create(Path r2) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return new PathInterpolator(r2);
    L7:
        return new PathInterpolatorApi14(r2);
    }

    public static Interpolator create(float r2, float r3) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return new PathInterpolator(r2, r3);
    L7:
        return new PathInterpolatorApi14(r2, r3);
    }

    public static Interpolator create(float r2, float r3, float r4, float r5) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return new PathInterpolator(r2, r3, r4, r5);
    L7:
        return new PathInterpolatorApi14(r2, r3, r4, r5);
    }
}
