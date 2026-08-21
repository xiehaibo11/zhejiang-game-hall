package com.kuaishou.weapon.p0;

import android.app.AlarmManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.support.v4.app.NotificationCompat;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

public class de {
    public static void a(Context context, int i, String str, String str2) {
        try {
            if (h.a(context, "re_po_rt").b(df.j, 0) <= 0) {
                return;
            }
            AlarmManager alarmManager = (AlarmManager) context.getSystemService(NotificationCompat.CATEGORY_ALARM);
            Intent intent = new Intent(str);
            intent.setData(Uri.parse(str2));
            intent.setPackage(context.getPackageName());
            int i2 = DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25;
            if (context.getApplicationInfo().targetSdkVersion >= 31) {
                i2 = 201326592;
            }
            alarmManager.cancel(PendingIntent.getBroadcast(context, i, intent, i2));
        } catch (Throwable unused) {
        }
    }

    public static void a(Context context, String str, int i, long j, String str2) {
        try {
            if (h.a(context, "re_po_rt").b(df.j, 0) <= 0) {
                return;
            }
            AlarmManager alarmManager = (AlarmManager) context.getSystemService(NotificationCompat.CATEGORY_ALARM);
            Intent intent = new Intent(str);
            intent.setData(Uri.parse(str2));
            intent.setPackage(context.getPackageName());
            int i2 = DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25;
            if (context.getApplicationInfo().targetSdkVersion >= 31) {
                i2 = 201326592;
            }
            PendingIntent broadcast = PendingIntent.getBroadcast(context, i, intent, i2);
            try {
                alarmManager.cancel(broadcast);
            } catch (Throwable unused) {
            }
            alarmManager.set(1, System.currentTimeMillis() + j, broadcast);
        } catch (Throwable unused2) {
        }
    }
}
