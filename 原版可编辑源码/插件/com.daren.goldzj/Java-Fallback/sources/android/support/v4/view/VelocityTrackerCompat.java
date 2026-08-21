package android.support.v4.view;

import android.view.VelocityTracker;

@Deprecated
public final class VelocityTrackerCompat {
    @Deprecated
    public static float getXVelocity(VelocityTracker r0, int r1) {
        return r0.getXVelocity(r1);
    }

    @Deprecated
    public static float getYVelocity(VelocityTracker r0, int r1) {
        return r0.getYVelocity(r1);
    }

    private VelocityTrackerCompat() {
    }
}
