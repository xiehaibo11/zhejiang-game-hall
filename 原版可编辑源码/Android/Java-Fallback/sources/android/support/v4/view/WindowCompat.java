package android.support.v4.view;

public final class WindowCompat {
    public static final int FEATURE_ACTION_BAR = 8;
    public static final int FEATURE_ACTION_BAR_OVERLAY = 9;
    public static final int FEATURE_ACTION_MODE_OVERLAY = 10;

    private WindowCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T extends android.view.View> T requireViewById(android.view.Window r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lb
            android.view.View r2 = r2.requireViewById(r3)
            return r2
        Lb:
            android.view.View r2 = r2.findViewById(r3)
            if (r2 == 0) goto L12
            return r2
        L12:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "ID does not reference a View inside this Window"
            r2.<init>(r3)
            throw r2
    }
}
