package com.tkay.expressad.exoplayer.k;

public final class q {
    public static final int a = -1000;
    public static final int b = 0;
    public static final int c = 1;
    public static final int d = 2;
    public static final int e = 3;
    public static final int f = 4;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface a {
    }

    private q() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(android.content.Context r1, int r2, android.app.Notification r3) {
            java.lang.String r0 = "notification"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.app.NotificationManager r1 = (android.app.NotificationManager) r1
            if (r3 == 0) goto Le
            r1.notify(r2, r3)
            return
        Le:
            r1.cancel(r2)
            return
    }

    private static void a(android.content.Context r2, java.lang.String r3, int r4, int r5) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 26
            if (r0 < r1) goto L1a
            java.lang.String r0 = "notification"
            java.lang.Object r0 = r2.getSystemService(r0)
            android.app.NotificationManager r0 = (android.app.NotificationManager) r0
            android.app.NotificationChannel r1 = new android.app.NotificationChannel
            java.lang.String r2 = r2.getString(r4)
            r1.<init>(r3, r2, r5)
            r0.createNotificationChannel(r1)
        L1a:
            return
    }
}
