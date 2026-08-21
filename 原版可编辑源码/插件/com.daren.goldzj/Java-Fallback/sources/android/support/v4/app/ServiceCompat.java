package android.support.v4.app;

import android.app.Service;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.RestrictTo;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public final class ServiceCompat {
    public static final int START_STICKY = 1;
    public static final int STOP_FOREGROUND_DETACH = 2;
    public static final int STOP_FOREGROUND_REMOVE = 1;

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface StopForegroundFlags {
    }

    private ServiceCompat() {
    }

    public static void stopForeground(@NonNull Service r2, int r3) {
        if (Build.VERSION.SDK_INT < 24) goto L5;
        r2.stopForeground(r3);
        return;
    L5:
        boolean r0 = true;
        if ((r3 & 1) != 0) goto L9;
        r0 = false;
    L9:
        r2.stopForeground(r0);
    }
}
