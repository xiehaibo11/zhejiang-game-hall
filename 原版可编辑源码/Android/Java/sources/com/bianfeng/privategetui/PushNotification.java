package com.bianfeng.privategetui;

import android.R;
import android.app.AlarmManager;
import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.support.v4.app.NotificationCompat;
import android.util.Log;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

public class PushNotification extends Notification {
    private static final long[] INTERVALS = {3600000, 86400000, -1702967296};
    private static final String TAG = "PushNotification";

    public enum PeriodType {
        HOUR,
        DAY,
        WEEK
    }

    public static void repeating(Context context, String str, String str2, String str3, long j, PeriodType periodType) {
        repeating(context, str, str2, str3, j, INTERVALS[periodType.ordinal()]);
    }

    public static void repeating(Context context, String str, String str2, String str3, long j, long j2) {
        ((AlarmManager) context.getSystemService(NotificationCompat.CATEGORY_ALARM)).setRepeating(0, j + 500, j2, PendingIntent.getBroadcast(context, generateNotifyId(str2), PushReceiver.createLocalAction(context, str, str2, str3), DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25));
    }

    public static void cancelRepeating(Context context, String str) {
        Intent intent = new Intent(context, (Class<?>) PushReceiver.class);
        intent.setAction(PushReceiver.ACTION_LOCAL);
        ((AlarmManager) context.getSystemService(NotificationCompat.CATEGORY_ALARM)).cancel(PendingIntent.getBroadcast(context, generateNotifyId(str), intent, DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25));
    }

    public static void show(Context context, String str, String str2, String str3) {
        showImmediately(context, str, str2, str3);
    }

    public static void show(Context context, String str, String str2, String str3, long j) {
        Log.i(TAG, String.format("try show notification (%s, %s)->%d", str2, str3, Long.valueOf(j)));
        ((AlarmManager) context.getSystemService(NotificationCompat.CATEGORY_ALARM)).set(0, j + 500, PendingIntent.getBroadcast(context, generateNotifyId(str2), PushReceiver.createLocalAction(context, str, str2, str3), DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25));
    }

    public static void showImmediately(Context context, String str, String str2, String str3) {
        Log.i(TAG, String.format("try show notification (%s, %s)", str2, str3));
        int i = Build.VERSION.SDK_INT;
        int iGenerateNotifyId = generateNotifyId(str2);
        NotificationManager notificationManager = (NotificationManager) context.getSystemService(RemoteMessageConst.NOTIFICATION);
        PendingIntent activity = PendingIntent.getActivity(context, 100010, getTargetIntent(context), DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
        Notification.Builder builder = new Notification.Builder(context);
        builder.setSmallIcon(getDefaultIcon(context));
        builder.setTicker(str);
        builder.setContentTitle(str2);
        builder.setContentText(str3);
        builder.setContentIntent(activity);
        builder.setNumber(1);
        Notification notification = i < 16 ? builder.getNotification() : builder.build();
        notification.flags = 16 | notification.flags;
        notificationManager.notify(iGenerateNotifyId, notification);
    }

    private static int getDefaultIcon(Context context) {
        try {
            return context.getPackageManager().getApplicationInfo(context.getPackageName(), 1).icon;
        } catch (Exception e) {
            e.printStackTrace();
            return R.drawable.sym_def_app_icon;
        }
    }

    private static Intent getTargetIntent(Context context) {
        Intent launchIntentForPackage = context.getPackageManager().getLaunchIntentForPackage(context.getPackageName());
        launchIntentForPackage.addFlags(536870912);
        return launchIntentForPackage;
    }

    private static int generateNotifyId(String str) {
        return str.hashCode();
    }

    public static void showLoacl(Context context, String str, String str2, String str3) {
        showLoacl(context, str, str2, str3, "");
    }

    public static void showLoacl(Context context, String str, String str2, String str3, String str4) {
        NotificationManager notificationManager = (NotificationManager) context.getSystemService(RemoteMessageConst.NOTIFICATION);
        if (Build.VERSION.SDK_INT >= 26) {
            NotificationChannel notificationChannel = new NotificationChannel(str, str2, 4);
            if (notificationManager != null) {
                notificationManager.createNotificationChannel(notificationChannel);
            }
        }
        NotificationCompat.Builder builder = new NotificationCompat.Builder(context);
        if (!YmnAppContext.getMetaDataValueString("PUSH_APP_MAIN_ACTIVITY").isEmpty()) {
            try {
                int iCurrentTimeMillis = (int) (System.currentTimeMillis() / 1000);
                Intent intent = new Intent(context, (Class<?>) ToMainActivityBroadcastReceiver.class);
                intent.putExtra("notificationId", iCurrentTimeMillis);
                if (!str4.isEmpty()) {
                    intent.putExtra("click", str4);
                }
                intent.setFlags(603979776);
                builder.setContentTitle(str2).setContentIntent(PendingIntent.getBroadcast(context, iCurrentTimeMillis, intent, DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25)).setContentText(str3).setTicker(str3).setWhen(System.currentTimeMillis()).setSmallIcon(ResourceManger.getId(context, "R.drawable.push_small")).setChannelId(str).setDefaults(-1);
                Notification notificationBuild = builder.build();
                notificationBuild.flags |= 16;
                if (notificationManager != null) {
                    notificationManager.notify(iCurrentTimeMillis, notificationBuild);
                    return;
                }
                return;
            } catch (Exception e) {
                e.printStackTrace();
                return;
            }
        }
        int iCurrentTimeMillis2 = (int) (System.currentTimeMillis() / 1000);
        Intent intent2 = new Intent();
        intent2.setClassName(context, str);
        intent2.setFlags(603979776);
        builder.setContentTitle(str2).setContentIntent(PendingIntent.getActivity(context, 0, intent2, 0)).setContentText(str3).setTicker(str3).setWhen(System.currentTimeMillis()).setSmallIcon(ResourceManger.getId(context, "R.drawable.push_small")).setChannelId(str).setDefaults(-1);
        Notification notificationBuild2 = builder.build();
        notificationBuild2.flags |= 16;
        if (notificationManager != null) {
            notificationManager.notify(iCurrentTimeMillis2, notificationBuild2);
        }
    }
}
