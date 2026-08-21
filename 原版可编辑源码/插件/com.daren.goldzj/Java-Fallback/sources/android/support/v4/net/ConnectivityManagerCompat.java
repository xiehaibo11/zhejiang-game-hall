package android.support.v4.net;

import android.content.Intent;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresPermission;
import android.support.annotation.RestrictTo;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public final class ConnectivityManagerCompat {
    public static final int RESTRICT_BACKGROUND_STATUS_DISABLED = 1;
    public static final int RESTRICT_BACKGROUND_STATUS_ENABLED = 3;
    public static final int RESTRICT_BACKGROUND_STATUS_WHITELISTED = 2;

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface RestrictBackgroundStatus {
    }

    @RequiresPermission("android.permission.ACCESS_NETWORK_STATE")
    public static boolean isActiveNetworkMetered(@NonNull ConnectivityManager r2) {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        NetworkInfo r22 = r2.getActiveNetworkInfo();
        if (r22 != null) goto L10;
        return true;
    L10:
        switch(r22.getType()) {
            case 0: goto L14;
            case 1: goto L12;
            case 2: goto L14;
            case 3: goto L14;
            case 4: goto L14;
            case 5: goto L14;
            case 6: goto L14;
            case 7: goto L12;
            case 8: goto L11;
            case 9: goto L12;
            default: goto L11;
        };
    L11:
        return true;
    L12:
        return false;
    L14:
        return true;
    L5:
        return r2.isActiveNetworkMetered();
    }

    @Nullable
    @RequiresPermission("android.permission.ACCESS_NETWORK_STATE")
    public static NetworkInfo getNetworkInfoFromBroadcast(@NonNull ConnectivityManager r1, @NonNull Intent r2) {
        NetworkInfo r22 = (NetworkInfo) r2.getParcelableExtra("networkInfo");
        if (r22 != null) goto L5;
        return null;
    L5:
        return r1.getNetworkInfo(r22.getType());
    }

    public static int getRestrictBackgroundStatus(@NonNull ConnectivityManager r2) {
        if (Build.VERSION.SDK_INT >= 24) goto L5;
        return 3;
    L5:
        return r2.getRestrictBackgroundStatus();
    }

    private ConnectivityManagerCompat() {
    }
}
