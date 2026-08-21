package android.support.v4.net;

public final class ConnectivityManagerCompat {
    public static final int RESTRICT_BACKGROUND_STATUS_DISABLED = 1;
    public static final int RESTRICT_BACKGROUND_STATUS_ENABLED = 3;
    public static final int RESTRICT_BACKGROUND_STATUS_WHITELISTED = 2;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public @interface RestrictBackgroundStatus {
    }

    private ConnectivityManagerCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    @android.support.annotation.Nullable
    @android.support.annotation.RequiresPermission("android.permission.ACCESS_NETWORK_STATE")
    public static android.net.NetworkInfo getNetworkInfoFromBroadcast(@android.support.annotation.NonNull android.net.ConnectivityManager r1, @android.support.annotation.NonNull android.content.Intent r2) {
            java.lang.String r0 = "networkInfo"
            android.os.Parcelable r2 = r2.getParcelableExtra(r0)
            android.net.NetworkInfo r2 = (android.net.NetworkInfo) r2
            if (r2 == 0) goto L13
            int r2 = r2.getType()
            android.net.NetworkInfo r1 = r1.getNetworkInfo(r2)
            return r1
        L13:
            r1 = 0
            return r1
    }

    public static int getRestrictBackgroundStatus(@android.support.annotation.NonNull android.net.ConnectivityManager r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lb
            int r2 = r2.getRestrictBackgroundStatus()
            return r2
        Lb:
            r2 = 3
            return r2
    }

    @android.support.annotation.RequiresPermission("android.permission.ACCESS_NETWORK_STATE")
    public static boolean isActiveNetworkMetered(@android.support.annotation.NonNull android.net.ConnectivityManager r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            boolean r2 = r2.isActiveNetworkMetered()
            return r2
        Lb:
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()
            r0 = 1
            if (r2 != 0) goto L13
            return r0
        L13:
            int r2 = r2.getType()
            switch(r2) {
                case 0: goto L1d;
                case 1: goto L1b;
                case 2: goto L1d;
                case 3: goto L1d;
                case 4: goto L1d;
                case 5: goto L1d;
                case 6: goto L1d;
                case 7: goto L1b;
                case 8: goto L1a;
                case 9: goto L1b;
                default: goto L1a;
            }
        L1a:
            return r0
        L1b:
            r2 = 0
            return r2
        L1d:
            return r0
    }
}
