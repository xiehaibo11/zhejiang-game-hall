package android.support.v4.net;

public final class ConnectivityManagerCompat {
    public static final int RESTRICT_BACKGROUND_STATUS_DISABLED = 1;
    public static final int RESTRICT_BACKGROUND_STATUS_ENABLED = 3;
    public static final int RESTRICT_BACKGROUND_STATUS_WHITELISTED = 2;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface RestrictBackgroundStatus {
    }

    private ConnectivityManagerCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.net.NetworkInfo getNetworkInfoFromBroadcast(android.net.ConnectivityManager r1, android.content.Intent r2) {
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

    public static int getRestrictBackgroundStatus(android.net.ConnectivityManager r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lb
            int r2 = r2.getRestrictBackgroundStatus()
            return r2
        Lb:
            r2 = 3
            return r2
    }

    public static boolean isActiveNetworkMetered(android.net.ConnectivityManager r2) {
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
            if (r2 == r0) goto L21
            r1 = 7
            if (r2 == r1) goto L21
            r1 = 9
            if (r2 == r1) goto L21
            return r0
        L21:
            r2 = 0
            return r2
    }
}
