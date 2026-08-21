package android.support.v4.app;

import android.app.AppOpsManager;
import android.content.Context;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;

public final class AppOpsManagerCompat {
    public static final int MODE_ALLOWED = 0;
    public static final int MODE_DEFAULT = 3;
    public static final int MODE_ERRORED = 2;
    public static final int MODE_IGNORED = 1;

    private AppOpsManagerCompat() {
    }

    @Nullable
    public static String permissionToOp(@NonNull String r2) {
        if (Build.VERSION.SDK_INT >= 23) goto L5;
        return null;
    L5:
        return AppOpsManager.permissionToOp(r2);
    }

    public static int noteOp(@NonNull Context r2, @NonNull String r3, int r4, @NonNull String r5) {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return 1;
    L5:
        return ((AppOpsManager) r2.getSystemService("appops")).noteOp(r3, r4, r5);
    }

    public static int noteOpNoThrow(@NonNull Context r2, @NonNull String r3, int r4, @NonNull String r5) {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return 1;
    L5:
        return ((AppOpsManager) r2.getSystemService("appops")).noteOpNoThrow(r3, r4, r5);
    }

    public static int noteProxyOp(@NonNull Context r2, @NonNull String r3, @NonNull String r4) {
        if (Build.VERSION.SDK_INT >= 23) goto L5;
        return 1;
    L5:
        return ((AppOpsManager) r2.getSystemService(AppOpsManager.class)).noteProxyOp(r3, r4);
    }

    public static int noteProxyOpNoThrow(@NonNull Context r2, @NonNull String r3, @NonNull String r4) {
        if (Build.VERSION.SDK_INT >= 23) goto L5;
        return 1;
    L5:
        return ((AppOpsManager) r2.getSystemService(AppOpsManager.class)).noteProxyOpNoThrow(r3, r4);
    }
}
