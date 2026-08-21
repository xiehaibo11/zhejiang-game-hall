package android.support.v4.app;

import android.app.ActivityManager;
import android.os.Build;
import android.support.annotation.NonNull;

public final class ActivityManagerCompat {
    private ActivityManagerCompat() {
    }

    public static boolean isLowRamDevice(@NonNull ActivityManager r2) {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return false;
    L5:
        return r2.isLowRamDevice();
    }
}
