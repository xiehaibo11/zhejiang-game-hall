package com.bianfeng.ymnsdk.sysfunc;

import android.app.Activity;
import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Intent;
import android.os.Build;
import android.support.v4.app.NotificationCompat;
import com.bianfeng.ymnsdk.util.Logger;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

/* JADX INFO: loaded from: classes.dex */
public class LocalNotificationUtils {
    private static volatile LocalNotificationUtils utils;
    private int index = 0;

    public void sysMessageBox(Activity activity, String str, String str2, String str3, int i) {
    }

    private LocalNotificationUtils() {
    }

    public static LocalNotificationUtils getInstance() {
        if (utils == null) {
            synchronized (LocalNotificationUtils.class) {
                if (utils == null) {
                    utils = new LocalNotificationUtils();
                }
            }
        }
        return utils;
    }

    public void sendNotification(Activity activity, String str, String str2) {
        this.index++;
        Logger.i("sendNotification----sendNotification");
        NotificationManager notificationManager = (NotificationManager) activity.getSystemService(RemoteMessageConst.NOTIFICATION);
        Intent intent = new Intent(activity, (Class<?>) SysfuncNotificationReceiver.class);
        intent.setAction("com.bianfeng.ymnsdk.sysfunc.click");
        PendingIntent broadcast = PendingIntent.getBroadcast(activity, 1, intent, DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        NotificationCompat.Builder builder = new NotificationCompat.Builder(activity, "1");
        builder.setAutoCancel(true).setSmallIcon(activity.getApplicationInfo().icon).setContentTitle(str).setContentText(str2).setContentIntent(broadcast).setAutoCancel(true).setOnlyAlertOnce(false).setWhen(System.currentTimeMillis()).setTicker(str).setDefaults(2).setPriority(2).setLocalOnly(true).setShowWhen(true).setVisibility(1);
        if (Build.VERSION.SDK_INT >= 26) {
            NotificationChannel notificationChannel = new NotificationChannel("1", "边锋游戏", 4);
            notificationChannel.enableLights(true);
            notificationChannel.enableVibration(true);
            notificationChannel.setDescription("边锋游戏");
            notificationChannel.setName(activity.getApplicationInfo().name);
            notificationChannel.setVibrationPattern(new long[]{200, 200, 1000, 200, 1000, 200});
            notificationManager.createNotificationChannel(notificationChannel);
            builder.setChannelId("1");
        }
        Notification notificationBuild = builder.build();
        builder.setPublicVersion(notificationBuild);
        notificationManager.notify(this.index, notificationBuild);
    }
}
