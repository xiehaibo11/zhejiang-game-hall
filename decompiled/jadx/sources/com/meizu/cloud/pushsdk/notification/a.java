package com.meizu.cloud.pushsdk.notification;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.drawable.AdaptiveIconDrawable;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.Icon;
import android.net.Uri;
import android.os.Build;
import android.os.Handler;
import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import com.meizu.cloud.pushsdk.handler.MessageV3;
import com.meizu.cloud.pushsdk.notification.model.AdvanceSetting;
import com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx;
import com.meizu.cloud.pushsdk.util.MinSdkChecker;
import com.meizu.cloud.pushsdk.util.MzSystemUtils;
import com.tkay.expressad.foundation.h.i;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public abstract class a implements c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected final Context f4619a;
    protected final PushNotificationBuilder b;
    private final NotificationManager c;
    private final Handler d;

    protected a(Context context, PushNotificationBuilder pushNotificationBuilder) {
        this.b = pushNotificationBuilder;
        this.f4619a = context;
        this.d = new Handler(context.getMainLooper());
        this.c = (NotificationManager) context.getSystemService(RemoteMessageConst.NOTIFICATION);
    }

    private Notification a(MessageV3 messageV3, PendingIntent pendingIntent, PendingIntent pendingIntent2, PendingIntent pendingIntent3) {
        Notification.Builder builder = new Notification.Builder(this.f4619a);
        a(builder, messageV3, pendingIntent, pendingIntent2);
        c(builder, messageV3);
        b(builder, messageV3);
        a(builder, messageV3);
        d(builder, messageV3);
        Notification notificationBuild = MinSdkChecker.isSupportNotificationBuild() ? builder.build() : builder.getNotification();
        b(notificationBuild, messageV3);
        a(notificationBuild, messageV3);
        a(notificationBuild, messageV3, pendingIntent3);
        return notificationBuild;
    }

    private PendingIntent a(MessageV3 messageV3, String str, boolean z) {
        Intent intent = new Intent();
        intent.setData(Uri.parse("custom://" + System.currentTimeMillis()));
        if (z && MinSdkChecker.isSupportTransmitMessageValue(this.f4619a, str)) {
            intent.putExtra(PushConstants.MZ_MESSAGE_VALUE, com.meizu.cloud.pushsdk.handler.d.a(messageV3));
        } else {
            intent.putExtra(PushConstants.MZ_PUSH_PRIVATE_MESSAGE, messageV3);
        }
        intent.putExtra("method", "private");
        intent.setClassName(str, MzSystemUtils.findReceiver(this.f4619a, PushConstants.MZ_PUSH_ON_MESSAGE_ACTION, str));
        intent.setAction(PushConstants.MZ_PUSH_ON_MESSAGE_ACTION);
        intent.setFlags(32);
        return PendingIntent.getBroadcast(this.f4619a, 0, intent, 1073741824);
    }

    private void a(int i, String str, MessageV3 messageV3) {
        if (messageV3 == null || messageV3.getAdvertisementOption() == null || TextUtils.isEmpty(messageV3.getAdvertisementOption().getAdPackage())) {
            return;
        }
        DebugLogger.e("AbstractPushNotification", "save ad and recovery package, uploadDataPackageName:" + str);
        com.meizu.cloud.pushsdk.handler.a.a.a aVarB = com.meizu.cloud.pushsdk.b.a(this.f4619a).b();
        if (aVarB != null) {
            int priorityValidTime = messageV3.getAdvertisementOption().getPriorityValidTime();
            aVarB.a(messageV3);
            aVarB.a(i, a(messageV3, c(messageV3), e(messageV3), f(messageV3)), priorityValidTime);
        }
        messageV3.setUploadDataPackageName(str);
    }

    private void a(Notification.Builder builder, MessageV3 messageV3, PendingIntent pendingIntent, PendingIntent pendingIntent2) {
        int statusBarIcon;
        builder.setContentTitle(messageV3.getTitle());
        builder.setContentText(messageV3.getContent());
        builder.setTicker(messageV3.getTitle());
        builder.setAutoCancel(true);
        if (MinSdkChecker.isSupportSendNotification()) {
            builder.setVisibility(1);
        }
        if (!MinSdkChecker.isSupportSetDrawableSmallIcon()) {
            PushNotificationBuilder pushNotificationBuilder = this.b;
            if (pushNotificationBuilder != null && pushNotificationBuilder.getStatusBarIcon() != 0) {
                statusBarIcon = this.b.getStatusBarIcon();
            }
            builder.setSmallIcon(statusBarIcon);
            builder.setContentIntent(pendingIntent);
            builder.setDeleteIntent(pendingIntent2);
        }
        Icon iconB = b(messageV3.getUploadDataPackageName());
        if (iconB != null) {
            builder.setSmallIcon(iconB);
            builder.setContentIntent(pendingIntent);
            builder.setDeleteIntent(pendingIntent2);
        } else {
            DebugLogger.e("AbstractPushNotification", "cannot get " + messageV3.getUploadDataPackageName() + " smallIcon");
        }
        statusBarIcon = com.meizu.cloud.pushsdk.notification.c.c.l(this.f4619a);
        builder.setSmallIcon(statusBarIcon);
        builder.setContentIntent(pendingIntent);
        builder.setDeleteIntent(pendingIntent2);
    }

    private Icon b(String str) {
        try {
            int identifier = this.f4619a.getPackageManager().getResourcesForApplication(str).getIdentifier("mz_push_notification_small_icon", i.c, str);
            if (identifier == 0) {
                return null;
            }
            DebugLogger.i("AbstractPushNotification", "get " + str + " smallIcon success resId " + identifier);
            return Icon.createWithResource(str, identifier);
        } catch (Exception e) {
            DebugLogger.e("AbstractPushNotification", "cannot load smallIcon form package " + str + " Error message " + e.getMessage());
            return null;
        }
    }

    private String b(Context context, String str) {
        CharSequence applicationLabel;
        try {
            PackageManager packageManager = context.getPackageManager();
            ApplicationInfo applicationInfo = packageManager.getApplicationInfo(str, 0);
            if (applicationInfo == null || (applicationLabel = packageManager.getApplicationLabel(applicationInfo)) == null) {
                return null;
            }
            return (String) applicationLabel;
        } catch (PackageManager.NameNotFoundException unused) {
            DebugLogger.e("AbstractPushNotification", "can not find " + str + " application info");
            return null;
        }
    }

    private void b(Notification notification, MessageV3 messageV3) {
        com.meizu.cloud.pushsdk.notification.c.b.a(notification, true);
        com.meizu.cloud.pushsdk.notification.c.b.a(notification, g(messageV3));
        notification.extras.putString(PushConstants.EXTRA_ORIGINAL_NOTIFICATION_PACKAGE_NAME, messageV3.getUploadDataPackageName());
        notification.extras.putString(PushConstants.EXTRA_FLYME_GREEN_NOTIFICATION_SETTING, a(messageV3));
        notification.extras.putString(PushConstants.NOTIFICATION_EXTRA_TASK_ID, messageV3.getTaskId());
        notification.extras.putString(PushConstants.NOTIFICATION_EXTRA_SEQ_ID, messageV3.getSeqId());
        notification.extras.putString(PushConstants.NOTIFICATION_EXTRA_DEVICE_ID, messageV3.getDeviceId());
        notification.extras.putString(PushConstants.NOTIFICATION_EXTRA_PUSH_TIMESTAMP, messageV3.getPushTimestamp());
        if (!TextUtils.isEmpty(this.b.getAppLabel())) {
            DebugLogger.e("AbstractPushNotification", "set app label " + this.b.getAppLabel());
            notification.extras.putString(PushConstants.EXTRA_SUBSTITUTE_APP_NAME, this.b.getAppLabel());
            return;
        }
        String strB = b(this.f4619a, messageV3.getUploadDataPackageName());
        DebugLogger.e("AbstractPushNotification", "current package " + messageV3.getUploadDataPackageName() + " label is " + strB);
        if (TextUtils.isEmpty(strB)) {
            return;
        }
        notification.extras.putString(PushConstants.EXTRA_SUBSTITUTE_APP_NAME, strB);
    }

    private PendingIntent c(MessageV3 messageV3) {
        String uploadDataPackageName;
        boolean z;
        if (d(messageV3)) {
            uploadDataPackageName = messageV3.getPackageName();
            z = false;
        } else {
            uploadDataPackageName = messageV3.getUploadDataPackageName();
            z = true;
        }
        return a(messageV3, uploadDataPackageName, z);
    }

    private void c(Notification.Builder builder, MessageV3 messageV3) {
        boolean zIsSound;
        AdvanceSetting advanceSetting = messageV3.getAdvanceSetting();
        AdvanceSettingEx advanceSettingEx = messageV3.getAdvanceSettingEx();
        if (advanceSetting == null) {
            return;
        }
        if (advanceSettingEx == null || TextUtils.isEmpty(advanceSettingEx.getSoundTitle())) {
            zIsSound = advanceSetting.getNotifyType().isSound();
        } else {
            Uri uriB = com.meizu.cloud.pushsdk.notification.c.b.b(this.f4619a, advanceSettingEx.getSoundTitle());
            if (uriB != null) {
                DebugLogger.e("AbstractPushNotification", "advance setting builder, sound:" + uriB);
                builder.setSound(uriB);
                zIsSound = false;
            } else {
                zIsSound = true;
            }
        }
        if (advanceSetting.getNotifyType() != null) {
            boolean zIsVibrate = advanceSetting.getNotifyType().isVibrate();
            boolean zIsLights = advanceSetting.getNotifyType().isLights();
            if (zIsVibrate || zIsLights || zIsSound) {
                int i = zIsVibrate ? 2 : 0;
                if (zIsLights) {
                    i |= 4;
                }
                if (zIsSound) {
                    i |= 1;
                }
                DebugLogger.e("AbstractPushNotification", "advance setting builder, defaults:" + i);
                builder.setDefaults(i);
            }
        }
        StringBuilder sb = new StringBuilder();
        sb.append("advance setting builder, ongoing:");
        sb.append(!advanceSetting.isClearNotification());
        DebugLogger.e("AbstractPushNotification", sb.toString());
        builder.setOngoing(!advanceSetting.isClearNotification());
        if (advanceSettingEx == null || !MinSdkChecker.isSupportNotificationBuild()) {
            return;
        }
        DebugLogger.e("AbstractPushNotification", "advance setting builder, priority:" + advanceSettingEx.getPriorityDisplay());
        builder.setPriority(advanceSettingEx.getPriorityDisplay());
    }

    private void d(Notification.Builder builder, MessageV3 messageV3) {
        String str;
        String str2;
        if (MinSdkChecker.isSupportNotificationChannel()) {
            AdvanceSetting advanceSetting = messageV3.getAdvanceSetting();
            AdvanceSettingEx advanceSettingEx = messageV3.getAdvanceSettingEx();
            int priorityDisplay = advanceSettingEx != null ? advanceSettingEx.getPriorityDisplay() : 0;
            if (Build.VERSION.SDK_INT >= 29 && advanceSetting.isHeadUpNotification() && advanceSettingEx.getPriorityDisplay() < 1) {
                priorityDisplay = 1;
            }
            int i = 2;
            if (priorityDisplay == -2) {
                str = "mz_push_notification_channel_min";
                str2 = "MEIZUPUSHMIN";
                i = 1;
            } else if (priorityDisplay == -1) {
                str = "mz_push_notification_channel_low";
                str2 = "MEIZUPUSHLOW";
            } else if (priorityDisplay == 1) {
                i = 4;
                str = "mz_push_notification_channel_high";
                str2 = "MEIZUPUSHHIGH";
            } else if (priorityDisplay != 2) {
                i = 3;
                str = "mz_push_notification_channel";
                str2 = "MEIZUPUSH";
            } else {
                i = 5;
                str = "mz_push_notification_channel_max";
                str2 = "MEIZUPUSHMAX";
            }
            Uri uriB = advanceSettingEx.getSoundTitle() != null ? com.meizu.cloud.pushsdk.notification.c.b.b(this.f4619a, advanceSettingEx.getSoundTitle()) : null;
            if (!advanceSetting.getNotifyType().isSound() && advanceSettingEx.getSoundTitle() == null) {
                str = str + "_mute";
                str2 = str2 + "_MUTE";
            } else if (uriB != null) {
                String str3 = str + "_" + advanceSettingEx.getSoundTitle().toLowerCase();
                str2 = str2 + "_" + advanceSettingEx.getSoundTitle().toUpperCase();
                str = str3;
            }
            DebugLogger.e("AbstractPushNotification", "notification channel builder, channelId: " + str + ", channelName: " + str2 + ", importance:" + i + ", sound: " + uriB);
            NotificationChannel notificationChannel = new NotificationChannel(str, str2, i);
            notificationChannel.enableLights(true);
            notificationChannel.setLightColor(-16711936);
            notificationChannel.setShowBadge(true);
            notificationChannel.enableVibration(true);
            if (!advanceSetting.getNotifyType().isSound() && advanceSettingEx.getSoundTitle() == null) {
                notificationChannel.setSound(null, Notification.AUDIO_ATTRIBUTES_DEFAULT);
            } else if (uriB != null) {
                notificationChannel.setSound(uriB, Notification.AUDIO_ATTRIBUTES_DEFAULT);
            }
            this.c.createNotificationChannel(notificationChannel);
            builder.setChannelId(str);
        }
    }

    private boolean d(MessageV3 messageV3) {
        if (messageV3.getAdvertisementOption() == null || TextUtils.isEmpty(messageV3.getAdvertisementOption().getAdPackage())) {
            return messageV3.getWhiteList() && !MzSystemUtils.isExistReceiver(this.f4619a, messageV3.getUploadDataPackageName(), PushConstants.MZ_PUSH_ON_MESSAGE_ACTION);
        }
        return true;
    }

    private PendingIntent e(MessageV3 messageV3) {
        Intent intent = new Intent();
        intent.setData(Uri.parse("custom://" + System.currentTimeMillis()));
        intent.putExtra(PushConstants.MZ_PUSH_PRIVATE_MESSAGE, messageV3);
        intent.putExtra("method", PushConstants.MZ_PUSH_MESSAGE_METHOD_ACTION_NOTIFICATION_DELETE);
        intent.setClassName(messageV3.getPackageName(), MzSystemUtils.findReceiver(this.f4619a, PushConstants.MZ_PUSH_ON_MESSAGE_ACTION, messageV3.getPackageName()));
        intent.setAction(PushConstants.MZ_PUSH_ON_MESSAGE_ACTION);
        return PendingIntent.getBroadcast(this.f4619a, 0, intent, 1073741824);
    }

    private PendingIntent f(MessageV3 messageV3) {
        Intent intent = new Intent();
        intent.setData(Uri.parse("custom://" + System.currentTimeMillis()));
        intent.putExtra(PushConstants.MZ_PUSH_PRIVATE_MESSAGE, messageV3);
        intent.putExtra("method", PushConstants.MZ_PUSH_MESSAGE_METHOD_ACTION_NOTIFICATION_CLOSE);
        intent.setClassName(messageV3.getPackageName(), MzSystemUtils.findReceiver(this.f4619a, PushConstants.MZ_PUSH_ON_MESSAGE_ACTION, messageV3.getPackageName()));
        intent.setAction(PushConstants.MZ_PUSH_ON_MESSAGE_ACTION);
        return PendingIntent.getBroadcast(this.f4619a, 0, intent, 1073741824);
    }

    private PendingIntent g(MessageV3 messageV3) {
        Intent intent = new Intent();
        intent.setData(Uri.parse("custom://" + System.currentTimeMillis()));
        intent.putExtra(PushConstants.MZ_PUSH_NOTIFICATION_STATE_MESSAGE, messageV3.getNotificationMessage());
        intent.putExtra(PushConstants.NOTIFICATION_EXTRA_TASK_ID, messageV3.getTaskId());
        intent.putExtra(PushConstants.NOTIFICATION_EXTRA_SEQ_ID, messageV3.getSeqId());
        intent.putExtra(PushConstants.NOTIFICATION_EXTRA_DEVICE_ID, messageV3.getDeviceId());
        intent.putExtra(PushConstants.NOTIFICATION_EXTRA_PUSH_TIMESTAMP, messageV3.getPushTimestamp());
        intent.putExtra(PushConstants.NOTIFICATION_EXTRA_SHOW_PACKAGE_NAME, messageV3.getUploadDataPackageName());
        intent.putExtra(PushConstants.MZ_PUSH_WHITE_LIST, messageV3.getWhiteList());
        intent.putExtra(PushConstants.MZ_PUSH_DELAYED_REPORT_MILLIS, messageV3.getDelayedReportMillis());
        intent.putExtra("method", PushConstants.MZ_PUSH_MESSAGE_METHOD_ACTION_NOTIFICATION_STATE);
        intent.setClassName(messageV3.getPackageName(), MzSystemUtils.findReceiver(this.f4619a, PushConstants.MZ_PUSH_ON_MESSAGE_ACTION, messageV3.getPackageName()));
        intent.setAction(PushConstants.MZ_PUSH_ON_MESSAGE_ACTION);
        return PendingIntent.getBroadcast(this.f4619a, 0, intent, 1073741824);
    }

    private String h(MessageV3 messageV3) {
        if (messageV3 == null || messageV3.getAdvertisementOption() == null || TextUtils.isEmpty(messageV3.getAdvertisementOption().getAdPackage())) {
            return null;
        }
        String uploadDataPackageName = messageV3.getUploadDataPackageName();
        String adPackage = messageV3.getAdvertisementOption().getAdPackage();
        DebugLogger.e("AbstractPushNotification", "again show old ad and replace package, uploadDataPackageName:" + uploadDataPackageName + ", adPackageName:" + adPackage);
        com.meizu.cloud.pushsdk.handler.a.a.a aVarB = com.meizu.cloud.pushsdk.b.a(this.f4619a).b();
        if (aVarB != null) {
            aVarB.a();
        }
        messageV3.setUploadDataPackageName(adPackage);
        return uploadDataPackageName;
    }

    protected Bitmap a(Context context, String str) {
        BitmapDrawable bitmapDrawable;
        try {
            Drawable applicationIcon = context.getPackageManager().getApplicationIcon(str);
            Bitmap bitmap = null;
            if (Build.VERSION.SDK_INT < 26 || (applicationIcon instanceof BitmapDrawable)) {
                bitmapDrawable = (BitmapDrawable) applicationIcon;
            } else if (applicationIcon instanceof AdaptiveIconDrawable) {
                Bitmap bitmapCreateBitmap = Bitmap.createBitmap(applicationIcon.getIntrinsicWidth(), applicationIcon.getIntrinsicHeight(), Bitmap.Config.ARGB_8888);
                Canvas canvas = new Canvas(bitmapCreateBitmap);
                applicationIcon.setBounds(0, 0, canvas.getWidth(), canvas.getHeight());
                applicationIcon.draw(canvas);
                bitmapDrawable = null;
                bitmap = bitmapCreateBitmap;
            } else {
                bitmapDrawable = null;
            }
            return bitmap == null ? bitmapDrawable.getBitmap() : bitmap;
        } catch (Exception e) {
            DebugLogger.i("AbstractPushNotification", "get app icon error " + e.getMessage());
            return ((BitmapDrawable) context.getApplicationInfo().loadIcon(context.getPackageManager())).getBitmap();
        }
    }

    protected Bitmap a(String str) {
        com.meizu.cloud.pushsdk.c.a.c cVarB = com.meizu.cloud.pushsdk.c.a.a(str).a().b();
        if (!cVarB.b() || cVarB.a() == null) {
            DebugLogger.i("AbstractPushNotification", "ANRequest On other Thread down load largeIcon " + str + "image fail");
            return null;
        }
        StringBuilder sb = new StringBuilder();
        sb.append("ANRequest On other Thread down load largeIcon ");
        sb.append(str);
        sb.append("image ");
        sb.append(cVarB.a() != null ? "success" : "fail");
        DebugLogger.i("AbstractPushNotification", sb.toString());
        return (Bitmap) cVarB.a();
    }

    protected String a(MessageV3 messageV3) {
        String string = null;
        try {
            if (!TextUtils.isEmpty(messageV3.getNotificationMessage())) {
                string = new JSONObject(messageV3.getNotificationMessage()).getJSONObject("data").getJSONObject("extra").getString("fns");
            }
        } catch (Exception e) {
            DebugLogger.e("AbstractPushNotification", "parse flyme notification setting error " + e.getMessage());
        }
        DebugLogger.i("AbstractPushNotification", "current FlymeGreen notification setting is " + string);
        return string;
    }

    protected void a(Notification.Builder builder, MessageV3 messageV3) {
    }

    protected void a(Notification notification, MessageV3 messageV3) {
    }

    protected void a(Notification notification, MessageV3 messageV3, PendingIntent pendingIntent) {
    }

    protected boolean a() {
        return Thread.currentThread() == this.f4619a.getMainLooper().getThread();
    }

    protected void b(Notification.Builder builder, MessageV3 messageV3) {
    }

    @Override // com.meizu.cloud.pushsdk.notification.c
    public void b(MessageV3 messageV3) {
        String strH = (messageV3.getAdvertisementOption() == null || TextUtils.isEmpty(messageV3.getAdvertisementOption().getAdPackage())) ? null : h(messageV3);
        Notification notificationA = a(messageV3, c(messageV3), e(messageV3), f(messageV3));
        int iAbs = Math.abs((int) System.currentTimeMillis());
        com.meizu.cloud.pushsdk.notification.model.a aVarA = com.meizu.cloud.pushsdk.notification.model.a.a(messageV3);
        if (aVarA != null && aVarA.a() != 0) {
            iAbs = aVarA.a();
            DebugLogger.e("AbstractPushNotification", "server notify id " + iAbs);
            if (!TextUtils.isEmpty(aVarA.b())) {
                int i = com.meizu.cloud.pushsdk.util.b.i(this.f4619a, messageV3.getUploadDataPackageName(), aVarA.b());
                DebugLogger.e("AbstractPushNotification", "notifyKey " + aVarA.b() + " preference notifyId is " + i);
                if (i != 0) {
                    DebugLogger.e("AbstractPushNotification", "use preference notifyId " + i + " and cancel it");
                    this.c.cancel(i);
                }
                DebugLogger.e("AbstractPushNotification", "store new notifyId " + iAbs + " by notifyKey " + aVarA.b());
                com.meizu.cloud.pushsdk.util.b.b(this.f4619a, messageV3.getUploadDataPackageName(), aVarA.b(), iAbs);
            }
        }
        DebugLogger.e("AbstractPushNotification", "current notify id " + iAbs);
        if (messageV3.isDiscard()) {
            if (com.meizu.cloud.pushsdk.util.b.c(this.f4619a, messageV3.getPackageName()) == 0) {
                com.meizu.cloud.pushsdk.util.b.a(this.f4619a, messageV3.getPackageName(), iAbs);
                DebugLogger.i("AbstractPushNotification", "no notification show so put notification id " + iAbs);
            }
            if (!TextUtils.isEmpty(messageV3.getTaskId())) {
                if (com.meizu.cloud.pushsdk.util.b.d(this.f4619a, messageV3.getPackageName()) == 0) {
                    com.meizu.cloud.pushsdk.util.b.b(this.f4619a, messageV3.getPackageName(), Integer.valueOf(messageV3.getTaskId()).intValue());
                } else {
                    if (Integer.valueOf(messageV3.getTaskId()).intValue() < com.meizu.cloud.pushsdk.util.b.d(this.f4619a, messageV3.getPackageName())) {
                        DebugLogger.i("AbstractPushNotification", "current package " + messageV3.getPackageName() + " task id " + messageV3.getTaskId() + " don't show notification");
                        return;
                    }
                    com.meizu.cloud.pushsdk.util.b.b(this.f4619a, messageV3.getPackageName(), Integer.valueOf(messageV3.getTaskId()).intValue());
                    iAbs = com.meizu.cloud.pushsdk.util.b.c(this.f4619a, messageV3.getPackageName());
                }
            }
            DebugLogger.i("AbstractPushNotification", "current package " + messageV3.getPackageName() + " notificationId=" + iAbs + " taskId=" + messageV3.getTaskId());
        }
        if (messageV3.getAdvertisementOption() != null && !TextUtils.isEmpty(messageV3.getAdvertisementOption().getAdPackage())) {
            a(iAbs, strH, messageV3);
        }
        this.c.notify(iAbs, notificationA);
    }
}
