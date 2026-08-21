package com.xiaomi.push;

import android.app.AlarmManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.SystemClock;
import android.support.v4.app.NotificationCompat;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.xiaomi.push.eu;

class ev implements eu.a {
    protected Context a;
    private PendingIntent a = null;
    private volatile long a = 0;

    public ev(Context context) {
        this.a = null;
        this.a = context;
    }

    private void a(AlarmManager alarmManager, long j, PendingIntent pendingIntent) {
        try {
            AlarmManager.class.getMethod("setExact", Integer.TYPE, Long.TYPE, PendingIntent.class).invoke(alarmManager, 2, Long.valueOf(j), pendingIntent);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.d("[Alarm] invoke setExact method meet error. " + e);
        }
    }

    @Override
    public void a() {
        if (this.a != null) {
            try {
                ((AlarmManager) this.a.getSystemService(NotificationCompat.CATEGORY_ALARM)).cancel(this.a);
            } catch (Exception unused) {
            } catch (Throwable th) {
                this.a = null;
                com.xiaomi.channel.commonutils.logger.b.c("[Alarm] unregister timer");
                this.a = 0L;
                throw th;
            }
            this.a = null;
            com.xiaomi.channel.commonutils.logger.b.c("[Alarm] unregister timer");
            this.a = 0L;
        }
        this.a = 0L;
    }

    public void a(Intent intent, long j) {
        AlarmManager alarmManager = (AlarmManager) this.a.getSystemService(NotificationCompat.CATEGORY_ALARM);
        this.a = Build.VERSION.SDK_INT >= 31 ? PendingIntent.getBroadcast(this.a, 0, intent, DownloadExpSwitchCode.BACK_CLEAR_DATA) : PendingIntent.getBroadcast(this.a, 0, intent, 0);
        if (Build.VERSION.SDK_INT >= 23) {
            bk.a((Object) alarmManager, "setExactAndAllowWhileIdle", 2, Long.valueOf(j), this.a);
        } else {
            a(alarmManager, j, this.a);
        }
        com.xiaomi.channel.commonutils.logger.b.c("[Alarm] register timer " + j);
    }

    @Override
    public void a(boolean z) {
        long jA = com.xiaomi.push.service.o.a(this.a).a();
        if (z || this.a != 0) {
            if (z) {
                a();
            }
            long jElapsedRealtime = SystemClock.elapsedRealtime();
            if (!z && this.a != 0) {
                if (this.a <= jElapsedRealtime) {
                    this.a += jA;
                    if (this.a < jElapsedRealtime) {
                    }
                }
                Intent intent = new Intent(com.xiaomi.push.service.bk.p);
                intent.setPackage(this.a.getPackageName());
                a(intent, this.a);
            }
            jA -= jElapsedRealtime % jA;
            this.a = jElapsedRealtime + jA;
            Intent intent2 = new Intent(com.xiaomi.push.service.bk.p);
            intent2.setPackage(this.a.getPackageName());
            a(intent2, this.a);
        }
    }

    @Override
    public boolean a() {
        return this.a != 0;
    }
}
