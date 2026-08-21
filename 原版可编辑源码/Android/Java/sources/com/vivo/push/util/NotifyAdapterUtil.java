package com.vivo.push.util;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.media.AudioManager;
import android.os.Build;
import android.os.Bundle;
import android.os.SystemClock;
import android.text.TextUtils;
import android.widget.RemoteViews;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.vivo.push.d.r;
import com.vivo.push.model.InsideNotificationItem;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.List;
import java.util.Locale;

public class NotifyAdapterUtil {
    private static final int HIDE_TITLE = 1;
    public static final int NOTIFY_MULTITERM_STYLE = 1;
    public static final int NOTIFY_SINGLE_STYLE = 0;
    public static final String PRIMARY_CHANNEL = "vivo_push_channel";
    private static final String PUSH_EN = "PUSH";
    private static final String PUSH_ID = "pushId";
    private static final String PUSH_ZH = "推送通知";
    private static final String TAG = "NotifyManager";
    private static NotificationManager sNotificationManager = null;
    private static int sNotifyId = 20000000;

    public static void cancelNotify(Context context) {
        cancelNotify(context, sNotifyId);
    }

    private static boolean cancelNotify(Context context, int i) {
        initAdapter(context);
        NotificationManager notificationManager = sNotificationManager;
        if (notificationManager == null) {
            return false;
        }
        notificationManager.cancel(i);
        return true;
    }

    private static synchronized void initAdapter(Context context) {
        if (sNotificationManager == null) {
            sNotificationManager = (NotificationManager) context.getSystemService(RemoteMessageConst.NOTIFICATION);
        }
        if (Build.VERSION.SDK_INT >= 26 && sNotificationManager != null) {
            NotificationChannel notificationChannel = sNotificationManager.getNotificationChannel("default");
            if (notificationChannel != null) {
                CharSequence name = notificationChannel.getName();
                if (PUSH_ZH.equals(name) || PUSH_EN.equals(name)) {
                    sNotificationManager.deleteNotificationChannel("default");
                }
            }
            NotificationChannel notificationChannel2 = new NotificationChannel(PRIMARY_CHANNEL, isZh(context) ? PUSH_ZH : PUSH_EN, 4);
            notificationChannel2.setLightColor(-16711936);
            notificationChannel2.enableVibration(true);
            notificationChannel2.setLockscreenVisibility(1);
            sNotificationManager.createNotificationChannel(notificationChannel2);
        }
    }

    private static boolean isZh(Context context) {
        return context.getResources().getConfiguration().locale.getLanguage().endsWith(com.tkay.expressad.video.dynview.a.a.Q);
    }

    public static void pushNotification(Context context, List<Bitmap> list, InsideNotificationItem insideNotificationItem, long j, int i, r.a aVar) {
        p.d(TAG, "pushNotification");
        initAdapter(context);
        int notifyMode = NotifyUtil.getNotifyDataAdapter(context).getNotifyMode(insideNotificationItem);
        if (!TextUtils.isEmpty(insideNotificationItem.getPurePicUrl()) && list != null && list.size() > 1 && list.get(1) != null) {
            notifyMode = 1;
        }
        if (notifyMode == 2) {
            pushNotificationBySystem(context, list, insideNotificationItem, j, i, aVar);
        } else if (notifyMode == 1) {
            pushNotificationByCustom(context, list, insideNotificationItem, j, aVar);
        }
    }

    /* JADX WARN: Can't wrap try/catch for region: R(24:0|2|(2:4|(1:6))(2:7|(1:9)(21:11|12|(1:14)|15|(1:17)(1:18)|19|(2:(1:27)|28)(1:25)|29|(1:33)|34|(3:36|(1:38)(1:39)|40)(1:41)|42|(1:46)|47|(2:49|(1:(2:(1:54)|(1:56)))(1:(1:58)))(1:(1:60))|61|90|62|(1:64)|68|(3:70|89|(2:72|(2:74|75)(1:92))(1:(2:79|(2:81|82)(1:93))(2:83|84)))(1:94)))|10|12|(0)|15|(0)(0)|19|(3:21|(0)|28)(0)|29|(2:31|33)|34|(0)(0)|42|(2:44|46)|47|(0)(0)|61|90|62|(0)|68|(0)(0)) */
    /* JADX WARN: Code restructure failed: missing block: B:66:0x0217, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:67:0x0218, code lost:
    
        com.vivo.push.util.p.a(com.vivo.push.util.NotifyAdapterUtil.TAG, "pushNotificationByCustom encrypt ：" + r0.getMessage());
     */
    /* JADX WARN: Removed duplicated region for block: B:14:0x006c  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x00ab  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x00cd  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x00f6  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x00f8  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0111  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x0145  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x0195  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x01bb  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x01f0 A[Catch: Exception -> 0x0217, TRY_LEAVE, TryCatch #1 {Exception -> 0x0217, blocks: (B:62:0x01dd, B:64:0x01f0), top: B:90:0x01dd }] */
    /* JADX WARN: Removed duplicated region for block: B:70:0x0248  */
    /* JADX WARN: Removed duplicated region for block: B:94:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static void pushNotificationByCustom(Context context, List<Bitmap> list, InsideNotificationItem insideNotificationItem, long j, r.a aVar) {
        Notification notification;
        Notification.Builder builder;
        int defaultSmallIconId;
        RemoteViews remoteViews;
        int i;
        int suitIconId;
        Bitmap bitmap;
        int notifyType;
        int i2;
        int identifier;
        Bitmap bitmap2;
        Resources resources = context.getResources();
        String packageName = context.getPackageName();
        String title = insideNotificationItem.getTitle();
        int defaultNotifyIcon = NotifyUtil.getNotifyDataAdapter(context).getDefaultNotifyIcon();
        int i3 = context.getApplicationInfo().icon;
        Bundle bundle = new Bundle();
        bundle.putLong("pushId", j);
        if (Build.VERSION.SDK_INT >= 26) {
            builder = new Notification.Builder(context, PRIMARY_CHANNEL);
            if (defaultNotifyIcon > 0) {
                bundle.putInt("vivo.summaryIconRes", defaultNotifyIcon);
            }
        } else {
            if (Build.VERSION.SDK_INT < 19) {
                notification = new Notification();
                notification.priority = 2;
                notification.flags = 16;
                notification.tickerText = title;
                defaultSmallIconId = NotifyUtil.getNotifyDataAdapter(context).getDefaultSmallIconId();
                if (defaultSmallIconId <= 0) {
                    defaultSmallIconId = i3;
                }
                notification.icon = defaultSmallIconId;
                remoteViews = new RemoteViews(packageName, NotifyUtil.getNotifyLayoutAdapter(context).getNotificationLayout());
                remoteViews.setTextViewText(resources.getIdentifier("notify_title", "id", packageName), title);
                remoteViews.setTextColor(resources.getIdentifier("notify_title", "id", packageName), NotifyUtil.getNotifyLayoutAdapter(context).getTitleColor());
                remoteViews.setTextViewText(resources.getIdentifier("notify_msg", "id", packageName), insideNotificationItem.getContent());
                if (insideNotificationItem.isShowTime()) {
                    i = 0;
                    remoteViews.setViewVisibility(resources.getIdentifier("notify_when", "id", packageName), 8);
                } else {
                    remoteViews.setTextViewText(resources.getIdentifier("notify_when", "id", packageName), new SimpleDateFormat("HH:mm", Locale.CHINA).format(new Date()));
                    i = 0;
                    remoteViews.setViewVisibility(resources.getIdentifier("notify_when", "id", packageName), 0);
                }
                suitIconId = NotifyUtil.getNotifyLayoutAdapter(context).getSuitIconId();
                remoteViews.setViewVisibility(suitIconId, i);
                if (list != null || list.isEmpty() || (bitmap2 = list.get(i)) == null) {
                    if (defaultNotifyIcon <= 0) {
                        defaultNotifyIcon = i3;
                    }
                    remoteViews.setImageViewResource(suitIconId, defaultNotifyIcon);
                } else {
                    remoteViews.setImageViewBitmap(suitIconId, bitmap2);
                }
                bitmap = null;
                if (list != null && list.size() > 1) {
                    bitmap = list.get(1);
                }
                String str = "notify_cover";
                if (bitmap == null) {
                    if (TextUtils.isEmpty(insideNotificationItem.getPurePicUrl())) {
                        i2 = 0;
                        identifier = resources.getIdentifier("notify_cover", "id", packageName);
                    } else {
                        remoteViews.setViewVisibility(resources.getIdentifier("notify_content", "id", packageName), 8);
                        remoteViews.setViewVisibility(resources.getIdentifier("notify_cover", "id", packageName), 8);
                        str = "notify_pure_cover";
                        identifier = resources.getIdentifier("notify_pure_cover", "id", packageName);
                        i2 = 0;
                    }
                    remoteViews.setViewVisibility(identifier, i2);
                    remoteViews.setImageViewBitmap(resources.getIdentifier(str, "id", packageName), bitmap);
                } else {
                    remoteViews.setViewVisibility(resources.getIdentifier("notify_cover", "id", packageName), 8);
                }
                notification.contentView = remoteViews;
                if (Build.VERSION.SDK_INT >= 16 && TextUtils.isEmpty(insideNotificationItem.getPurePicUrl())) {
                    notification.bigContentView = remoteViews;
                }
                AudioManager audioManager = (AudioManager) context.getSystemService("audio");
                int ringerMode = audioManager.getRingerMode();
                int vibrateSetting = audioManager.getVibrateSetting(0);
                p.d(TAG, "ringMode=" + ringerMode + " callVibrateSetting=" + vibrateSetting);
                notifyType = insideNotificationItem.getNotifyType();
                if (notifyType == 2) {
                    if (notifyType != 3) {
                        if (notifyType == 4) {
                            if (ringerMode == 2) {
                                notification.defaults = 1;
                            }
                            if (vibrateSetting == 1) {
                                notification.defaults |= 2;
                                notification.vibrate = new long[]{0, 100, 200, 300};
                            }
                        }
                    } else if (vibrateSetting == 1) {
                        notification.defaults = 2;
                        notification.vibrate = new long[]{0, 100, 200, 300};
                    }
                } else if (ringerMode == 2) {
                    notification.defaults = 1;
                }
                Intent intent = new Intent("com.vivo.pushservice.action.RECEIVE");
                intent.setPackage(context.getPackageName());
                intent.setClassName(context.getPackageName(), "com.vivo.push.sdk.service.CommandService");
                intent.putExtra("command_type", "reflect_receiver");
                intent.putExtra("security_avoid_pull", a.a(context).a("com.vivo.pushservice"));
                if (Build.VERSION.SDK_INT >= 18) {
                    intent.putExtra("security_avoid_pull_rsa", com.vivo.push.c.d.a(context).a().a("com.vivo.pushservice"));
                    intent.putExtra("security_avoid_rsa_public_key", u.a(com.vivo.push.c.d.a(context).a().a()));
                }
                new com.vivo.push.b.p(packageName, j, insideNotificationItem).b(intent);
                notification.contentIntent = PendingIntent.getService(context, (int) SystemClock.uptimeMillis(), intent, DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                if (sNotificationManager == null) {
                    int iK = com.vivo.push.e.a().k();
                    try {
                        if (iK == 0) {
                            sNotificationManager.notify(sNotifyId, notification);
                            if (aVar != null) {
                                aVar.a();
                                return;
                            }
                            return;
                        }
                        if (iK != 1) {
                            p.a(TAG, "unknow notify style ".concat(String.valueOf(iK)));
                            return;
                        }
                        sNotificationManager.notify((int) j, notification);
                        if (aVar != null) {
                            aVar.a();
                            return;
                        }
                        return;
                    } catch (Exception e) {
                        p.a(TAG, e);
                        if (aVar != null) {
                            aVar.b();
                            return;
                        }
                        return;
                    }
                }
                return;
            }
            builder = new Notification.Builder(context);
        }
        builder.setExtras(bundle);
        notification = builder.build();
        notification.priority = 2;
        notification.flags = 16;
        notification.tickerText = title;
        defaultSmallIconId = NotifyUtil.getNotifyDataAdapter(context).getDefaultSmallIconId();
        if (defaultSmallIconId <= 0) {
        }
        notification.icon = defaultSmallIconId;
        remoteViews = new RemoteViews(packageName, NotifyUtil.getNotifyLayoutAdapter(context).getNotificationLayout());
        remoteViews.setTextViewText(resources.getIdentifier("notify_title", "id", packageName), title);
        remoteViews.setTextColor(resources.getIdentifier("notify_title", "id", packageName), NotifyUtil.getNotifyLayoutAdapter(context).getTitleColor());
        remoteViews.setTextViewText(resources.getIdentifier("notify_msg", "id", packageName), insideNotificationItem.getContent());
        if (insideNotificationItem.isShowTime()) {
        }
        suitIconId = NotifyUtil.getNotifyLayoutAdapter(context).getSuitIconId();
        remoteViews.setViewVisibility(suitIconId, i);
        if (list != null) {
            if (defaultNotifyIcon <= 0) {
            }
            remoteViews.setImageViewResource(suitIconId, defaultNotifyIcon);
        }
        bitmap = null;
        if (list != null) {
            bitmap = list.get(1);
        }
        String str2 = "notify_cover";
        if (bitmap == null) {
        }
        notification.contentView = remoteViews;
        if (Build.VERSION.SDK_INT >= 16) {
            notification.bigContentView = remoteViews;
        }
        AudioManager audioManager2 = (AudioManager) context.getSystemService("audio");
        int ringerMode2 = audioManager2.getRingerMode();
        int vibrateSetting2 = audioManager2.getVibrateSetting(0);
        p.d(TAG, "ringMode=" + ringerMode2 + " callVibrateSetting=" + vibrateSetting2);
        notifyType = insideNotificationItem.getNotifyType();
        if (notifyType == 2) {
        }
        Intent intent2 = new Intent("com.vivo.pushservice.action.RECEIVE");
        intent2.setPackage(context.getPackageName());
        intent2.setClassName(context.getPackageName(), "com.vivo.push.sdk.service.CommandService");
        intent2.putExtra("command_type", "reflect_receiver");
        intent2.putExtra("security_avoid_pull", a.a(context).a("com.vivo.pushservice"));
        if (Build.VERSION.SDK_INT >= 18) {
        }
        new com.vivo.push.b.p(packageName, j, insideNotificationItem).b(intent2);
        notification.contentIntent = PendingIntent.getService(context, (int) SystemClock.uptimeMillis(), intent2, DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        if (sNotificationManager == null) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0080 A[PHI: r13
      0x0080: PHI (r13v3 android.app.Notification$Builder) = (r13v1 android.app.Notification$Builder), (r13v4 android.app.Notification$Builder) binds: [B:22:0x0089, B:19:0x007e] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static void pushNotificationBySystem(Context context, List<Bitmap> list, InsideNotificationItem insideNotificationItem, long j, int i, r.a aVar) {
        String str;
        Bitmap bitmapA;
        Notification.Builder builder;
        int i2;
        Bitmap bitmap;
        Bitmap bitmapDecodeResource;
        String packageName = context.getPackageName();
        String title = insideNotificationItem.getTitle();
        String content = insideNotificationItem.getContent();
        int i3 = context.getApplicationInfo().icon;
        boolean zIsShowTime = insideNotificationItem.isShowTime();
        AudioManager audioManager = (AudioManager) context.getSystemService("audio");
        int defaultNotifyIcon = NotifyUtil.getNotifyDataAdapter(context).getDefaultNotifyIcon();
        if (list == null || list.isEmpty()) {
            str = packageName;
            bitmapA = null;
        } else {
            bitmapA = list.get(0);
            if (bitmapA == null || defaultNotifyIcon <= 0 || (bitmapDecodeResource = BitmapFactory.decodeResource(context.getResources(), defaultNotifyIcon)) == null) {
                str = packageName;
            } else {
                int width = bitmapDecodeResource.getWidth();
                str = packageName;
                int height = bitmapDecodeResource.getHeight();
                bitmapDecodeResource.recycle();
                bitmapA = c.a(bitmapA, width, height);
            }
        }
        Bundle bundle = new Bundle();
        if (Build.VERSION.SDK_INT >= 26) {
            builder = new Notification.Builder(context, PRIMARY_CHANNEL);
            if (defaultNotifyIcon > 0) {
                bundle.putInt("vivo.summaryIconRes", defaultNotifyIcon);
            }
            if (bitmapA != null) {
                builder.setLargeIcon(bitmapA);
            }
        } else {
            builder = new Notification.Builder(context);
            if (bitmapA == null) {
                if (Build.VERSION.SDK_INT <= 22) {
                    builder.setLargeIcon(BitmapFactory.decodeResource(context.getResources(), i3));
                }
            }
        }
        if (Build.VERSION.SDK_INT >= 19) {
            bundle.putLong("pushId", j);
            builder.setExtras(bundle);
        }
        int defaultSmallIconId = NotifyUtil.getNotifyDataAdapter(context).getDefaultSmallIconId();
        if (defaultSmallIconId > 0) {
            i3 = defaultSmallIconId;
        }
        builder.setSmallIcon(i3);
        if (insideNotificationItem.getCompatibleType() != 1) {
            builder.setContentTitle(title);
        }
        builder.setPriority(2);
        builder.setContentText(content);
        builder.setWhen(zIsShowTime ? System.currentTimeMillis() : 0L);
        builder.setShowWhen(zIsShowTime);
        builder.setTicker(title);
        int ringerMode = audioManager.getRingerMode();
        int notifyType = insideNotificationItem.getNotifyType();
        if (notifyType != 2) {
            if (notifyType != 3) {
                if (notifyType == 4) {
                    if (ringerMode == 2) {
                        builder.setDefaults(3);
                        builder.setVibrate(new long[]{0, 100, 200, 300});
                    } else if (ringerMode == 1) {
                        builder.setDefaults(2);
                        builder.setVibrate(new long[]{0, 100, 200, 300});
                    }
                }
            } else if (ringerMode == 2) {
                builder.setDefaults(2);
                builder.setVibrate(new long[]{0, 100, 200, 300});
            }
        } else if (ringerMode == 2) {
            builder.setDefaults(1);
        }
        if (list == null || list.size() <= 1) {
            i2 = i;
            bitmap = null;
        } else {
            bitmap = list.get(1);
            i2 = i;
        }
        if (i2 != 1) {
            Notification.BigTextStyle bigTextStyle = new Notification.BigTextStyle();
            bigTextStyle.setBigContentTitle(title);
            bigTextStyle.bigText(content);
            builder.setStyle(bigTextStyle);
        }
        if (bitmap != null) {
            Notification.BigPictureStyle bigPictureStyle = new Notification.BigPictureStyle();
            bigPictureStyle.setBigContentTitle(title);
            bigPictureStyle.setSummaryText(content);
            bigPictureStyle.bigPicture(bitmap);
            builder.setStyle(bigPictureStyle);
        }
        builder.setAutoCancel(true);
        Intent intent = new Intent("com.vivo.pushservice.action.RECEIVE");
        intent.setPackage(context.getPackageName());
        intent.setClassName(context.getPackageName(), "com.vivo.push.sdk.service.CommandService");
        intent.putExtra("command_type", "reflect_receiver");
        try {
            intent.putExtra("security_avoid_pull", a.a(context).a("com.vivo.pushservice"));
            if (Build.VERSION.SDK_INT >= 18) {
                intent.putExtra("security_avoid_pull_rsa", com.vivo.push.c.d.a(context).a().a("com.vivo.pushservice"));
                intent.putExtra("security_avoid_rsa_public_key", u.a(com.vivo.push.c.d.a(context).a().a()));
            }
        } catch (Exception e) {
            p.a(TAG, "pushNotificationBySystem encrypt ：" + e.getMessage());
        }
        new com.vivo.push.b.p(str, j, insideNotificationItem).b(intent);
        builder.setContentIntent(PendingIntent.getService(context, (int) SystemClock.uptimeMillis(), intent, DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP));
        Notification notificationBuild = builder.build();
        int iK = com.vivo.push.e.a().k();
        NotificationManager notificationManager = sNotificationManager;
        if (notificationManager != null) {
            try {
                if (iK == 0) {
                    notificationManager.notify(sNotifyId, notificationBuild);
                    if (aVar != null) {
                        aVar.a();
                        return;
                    }
                    return;
                }
                if (iK != 1) {
                    p.a(TAG, "unknow notify style ".concat(String.valueOf(iK)));
                    return;
                }
                notificationManager.notify((int) j, notificationBuild);
                if (aVar != null) {
                    aVar.a();
                }
            } catch (Exception e2) {
                p.a(TAG, e2);
                if (aVar != null) {
                    aVar.b();
                }
            }
        }
    }

    public static boolean repealNotifyById(Context context, long j) {
        int i;
        int iK = com.vivo.push.e.a().k();
        if (iK == 0) {
            long jB = w.b().b("com.vivo.push.notify_key", -1L);
            if (jB != j) {
                p.d(TAG, "current showing message id " + jB + " not match " + j);
                p.a(context, "与已展示的通知" + jB + "与待回收的通知" + j + "不匹配");
                return false;
            }
            p.d(TAG, "undo showed message ".concat(String.valueOf(j)));
            p.a(context, "回收已展示的通知： ".concat(String.valueOf(j)));
            i = sNotifyId;
        } else {
            if (iK != 1) {
                p.a(TAG, "unknow cancle notify style ".concat(String.valueOf(iK)));
                return false;
            }
            i = (int) j;
        }
        return cancelNotify(context, i);
    }

    public static void setNotifyId(int i) {
        sNotifyId = i;
    }
}
