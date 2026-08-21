package android.support.v4.app;

public final class ActivityManagerCompat {
    private ActivityManagerCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isLowRamDevice(android.app.ActivityManager r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            boolean r2 = r2.isLowRamDevice()
            return r2
        Lb:
            r2 = 0
            return r2
    }
}
