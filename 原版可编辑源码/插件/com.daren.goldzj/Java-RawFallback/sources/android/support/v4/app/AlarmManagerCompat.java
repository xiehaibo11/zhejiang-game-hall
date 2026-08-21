package android.support.v4.app;

public final class AlarmManagerCompat {
    private AlarmManagerCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void setAlarmClock(@android.support.annotation.NonNull android.app.AlarmManager r2, long r3, @android.support.annotation.NonNull android.app.PendingIntent r5, @android.support.annotation.NonNull android.app.PendingIntent r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            android.app.AlarmManager$AlarmClockInfo r0 = new android.app.AlarmManager$AlarmClockInfo
            r0.<init>(r3, r5)
            r2.setAlarmClock(r0, r6)
            goto L13
        Lf:
            r5 = 0
            setExact(r2, r5, r3, r6)
        L13:
            return
    }

    public static void setAndAllowWhileIdle(@android.support.annotation.NonNull android.app.AlarmManager r2, int r3, long r4, @android.support.annotation.NonNull android.app.PendingIntent r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto La
            r2.setAndAllowWhileIdle(r3, r4, r6)
            goto Ld
        La:
            r2.set(r3, r4, r6)
        Ld:
            return
    }

    public static void setExact(@android.support.annotation.NonNull android.app.AlarmManager r2, int r3, long r4, @android.support.annotation.NonNull android.app.PendingIntent r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto La
            r2.setExact(r3, r4, r6)
            goto Ld
        La:
            r2.set(r3, r4, r6)
        Ld:
            return
    }

    public static void setExactAndAllowWhileIdle(@android.support.annotation.NonNull android.app.AlarmManager r2, int r3, long r4, @android.support.annotation.NonNull android.app.PendingIntent r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto La
            r2.setExactAndAllowWhileIdle(r3, r4, r6)
            goto Ld
        La:
            setExact(r2, r3, r4, r6)
        Ld:
            return
    }
}
