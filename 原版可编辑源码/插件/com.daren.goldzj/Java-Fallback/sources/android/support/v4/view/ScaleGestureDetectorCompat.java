package android.support.v4.view;

import android.os.Build;
import android.view.ScaleGestureDetector;

public final class ScaleGestureDetectorCompat {
    private ScaleGestureDetectorCompat() {
    }

    @Deprecated
    public static void setQuickScaleEnabled(Object r0, boolean r1) {
        setQuickScaleEnabled((ScaleGestureDetector) r0, r1);
    }

    public static void setQuickScaleEnabled(ScaleGestureDetector r2, boolean r3) {
        if (Build.VERSION.SDK_INT < 19) goto L6;
        r2.setQuickScaleEnabled(r3);
        return;
    }

    @Deprecated
    public static boolean isQuickScaleEnabled(Object r0) {
        return isQuickScaleEnabled((ScaleGestureDetector) r0);
    }

    public static boolean isQuickScaleEnabled(ScaleGestureDetector r2) {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return false;
    L5:
        return r2.isQuickScaleEnabled();
    }
}
