package android.support.v4.app;

import android.app.AlarmManager;
import android.app.PendingIntent;
import android.os.Build;
import android.support.annotation.NonNull;

public final class AlarmManagerCompat {
    public static void setAlarmClock(@NonNull AlarmManager r2, long r3, @NonNull PendingIntent r5, @NonNull PendingIntent r6) {
        if (Build.VERSION.SDK_INT < 21) goto L5;
        r2.setAlarmClock(new AlarmManager.AlarmClockInfo(r3, r5), r6);
        return;
    L5:
        setExact(r2, 0, r3, r6);
    }

    public static void setAndAllowWhileIdle(@NonNull AlarmManager r2, int r3, long r4, @NonNull PendingIntent r6) {
        if (Build.VERSION.SDK_INT < 23) goto L5;
        r2.setAndAllowWhileIdle(r3, r4, r6);
        return;
    L5:
        r2.set(r3, r4, r6);
    }

    public static void setExact(@NonNull AlarmManager r2, int r3, long r4, @NonNull PendingIntent r6) {
        if (Build.VERSION.SDK_INT < 19) goto L5;
        r2.setExact(r3, r4, r6);
        return;
    L5:
        r2.set(r3, r4, r6);
    }

    public static void setExactAndAllowWhileIdle(@NonNull AlarmManager r2, int r3, long r4, @NonNull PendingIntent r6) {
        if (Build.VERSION.SDK_INT < 23) goto L5;
        r2.setExactAndAllowWhileIdle(r3, r4, r6);
        return;
    L5:
        setExact(r2, r3, r4, r6);
    }

    private AlarmManagerCompat() {
    }
}
