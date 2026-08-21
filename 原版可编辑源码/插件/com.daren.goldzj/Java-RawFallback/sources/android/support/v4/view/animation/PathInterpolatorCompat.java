package android.support.v4.view.animation;

public final class PathInterpolatorCompat {
    private PathInterpolatorCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.view.animation.Interpolator create(float r2, float r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lc
            android.view.animation.PathInterpolator r0 = new android.view.animation.PathInterpolator
            r0.<init>(r2, r3)
            return r0
        Lc:
            android.support.v4.view.animation.PathInterpolatorApi14 r0 = new android.support.v4.view.animation.PathInterpolatorApi14
            r0.<init>(r2, r3)
            return r0
    }

    public static android.view.animation.Interpolator create(float r2, float r3, float r4, float r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lc
            android.view.animation.PathInterpolator r0 = new android.view.animation.PathInterpolator
            r0.<init>(r2, r3, r4, r5)
            return r0
        Lc:
            android.support.v4.view.animation.PathInterpolatorApi14 r0 = new android.support.v4.view.animation.PathInterpolatorApi14
            r0.<init>(r2, r3, r4, r5)
            return r0
    }

    public static android.view.animation.Interpolator create(android.graphics.Path r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lc
            android.view.animation.PathInterpolator r0 = new android.view.animation.PathInterpolator
            r0.<init>(r2)
            return r0
        Lc:
            android.support.v4.view.animation.PathInterpolatorApi14 r0 = new android.support.v4.view.animation.PathInterpolatorApi14
            r0.<init>(r2)
            return r0
    }
}
