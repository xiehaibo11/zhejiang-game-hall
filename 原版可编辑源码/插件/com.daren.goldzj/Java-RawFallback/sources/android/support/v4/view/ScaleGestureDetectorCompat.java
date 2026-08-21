package android.support.v4.view;

public final class ScaleGestureDetectorCompat {
    private ScaleGestureDetectorCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isQuickScaleEnabled(android.view.ScaleGestureDetector r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            boolean r2 = r2.isQuickScaleEnabled()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    @java.lang.Deprecated
    public static boolean isQuickScaleEnabled(java.lang.Object r0) {
            android.view.ScaleGestureDetector r0 = (android.view.ScaleGestureDetector) r0
            boolean r0 = isQuickScaleEnabled(r0)
            return r0
    }

    public static void setQuickScaleEnabled(android.view.ScaleGestureDetector r2, boolean r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L9
            r2.setQuickScaleEnabled(r3)
        L9:
            return
    }

    @java.lang.Deprecated
    public static void setQuickScaleEnabled(java.lang.Object r0, boolean r1) {
            android.view.ScaleGestureDetector r0 = (android.view.ScaleGestureDetector) r0
            setQuickScaleEnabled(r0, r1)
            return
    }
}
