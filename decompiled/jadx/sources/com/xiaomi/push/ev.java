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

/* JADX INFO: loaded from: classes4.dex */
class ev implements eu.a {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected Context f343a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private PendingIntent f342a = null;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private volatile long f8141a = 0;

    public ev(Context context) {
        this.f343a = null;
        this.f343a = context;
    }

    private void a(AlarmManager alarmManager, long j, PendingIntent pendingIntent) {
        try {
            AlarmManager.class.getMethod("setExact", Integer.TYPE, Long.TYPE, PendingIntent.class).invoke(alarmManager, 2, Long.valueOf(j), pendingIntent);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.d("[Alarm] invoke setExact method meet error. " + e);
        }
    }

    @Override // com.xiaomi.push.eu.a
    public void a() {
        if (this.f342a != null) {
            try {
                ((AlarmManager) this.f343a.getSystemService(NotificationCompat.CATEGORY_ALARM)).cancel(this.f342a);
            } catch (Exception unused) {
            } catch (Throwable th) {
                this.f342a = null;
                com.xiaomi.channel.commonutils.logger.b.c("[Alarm] unregister timer");
                this.f8141a = 0L;
                throw th;
            }
            this.f342a = null;
            com.xiaomi.channel.commonutils.logger.b.c("[Alarm] unregister timer");
            this.f8141a = 0L;
        }
        this.f8141a = 0L;
    }

    public void a(Intent intent, long j) {
        AlarmManager alarmManager = (AlarmManager) this.f343a.getSystemService(NotificationCompat.CATEGORY_ALARM);
        this.f342a = Build.VERSION.SDK_INT >= 31 ? PendingIntent.getBroadcast(this.f343a, 0, intent, DownloadExpSwitchCode.BACK_CLEAR_DATA) : PendingIntent.getBroadcast(this.f343a, 0, intent, 0);
        if (Build.VERSION.SDK_INT >= 23) {
            bk.a((Object) alarmManager, "setExactAndAllowWhileIdle", 2, Long.valueOf(j), this.f342a);
        } else {
            a(alarmManager, j, this.f342a);
        }
        com.xiaomi.channel.commonutils.logger.b.c("[Alarm] register timer " + j);
    }

    @Override // com.xiaomi.push.eu.a
    public void a(boolean z) {
        long jM677a = com.xiaomi.push.service.o.a(this.f343a).m677a();
        if (z || this.f8141a != 0) {
            if (z) {
                a();
            }
            long jElapsedRealtime = SystemClock.elapsedRealtime();
            if (!z && this.f8141a != 0) {
                if (this.f8141a <= jElapsedRealtime) {
                    this.f8141a += jM677a;
                    if (this.f8141a < jElapsedRealtime) {
                    }
                }
                Intent intent = new Intent(com.xiaomi.push.service.bk.p);
                intent.setPackage(this.f343a.getPackageName());
                a(intent, this.f8141a);
            }
            jM677a -= jElapsedRealtime % jM677a;
            this.f8141a = jElapsedRealtime + jM677a;
            Intent intent2 = new Intent(com.xiaomi.push.service.bk.p);
            intent2.setPackage(this.f343a.getPackageName());
            a(intent2, this.f8141a);
        }
    }

    @Override // com.xiaomi.push.eu.a
    /* JADX INFO: renamed from: a */
    public boolean mo329a() {
        return this.f8141a != 0;
    }
}
