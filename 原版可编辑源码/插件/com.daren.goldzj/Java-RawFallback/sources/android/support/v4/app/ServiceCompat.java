package android.support.v4.app;

public final class ServiceCompat {
    public static final int START_STICKY = 1;
    public static final int STOP_FOREGROUND_DETACH = 2;
    public static final int STOP_FOREGROUND_REMOVE = 1;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public @interface StopForegroundFlags {
    }

    private ServiceCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void stopForeground(@android.support.annotation.NonNull android.app.Service r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto La
            r2.stopForeground(r3)
            goto L13
        La:
            r0 = 1
            r3 = r3 & r0
            if (r3 == 0) goto Lf
            goto L10
        Lf:
            r0 = 0
        L10:
            r2.stopForeground(r0)
        L13:
            return
    }
}
