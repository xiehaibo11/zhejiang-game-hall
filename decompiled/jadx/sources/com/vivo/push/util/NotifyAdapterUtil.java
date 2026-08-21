package com.vivo.push.util;

import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.content.Context;
import android.graphics.Bitmap;
import android.os.Build;
import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.vivo.push.d.r;
import com.vivo.push.model.InsideNotificationItem;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
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
        To view partially-correct add '--show-bad-code' argument
    */
    private static void pushNotificationByCustom(android.content.Context r16, java.util.List<android.graphics.Bitmap> r17, com.vivo.push.model.InsideNotificationItem r18, long r19, com.vivo.push.d.r.a r21) {
        /*
            Method dump skipped, instruction units count: 686
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.vivo.push.util.NotifyAdapterUtil.pushNotificationByCustom(android.content.Context, java.util.List, com.vivo.push.model.InsideNotificationItem, long, com.vivo.push.d.r$a):void");
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0080 A[PHI: r13
      0x0080: PHI (r13v3 android.app.Notification$Builder) = (r13v1 android.app.Notification$Builder), (r13v4 android.app.Notification$Builder) binds: [B:22:0x0089, B:19:0x007e] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static void pushNotificationBySystem(android.content.Context r17, java.util.List<android.graphics.Bitmap> r18, com.vivo.push.model.InsideNotificationItem r19, long r20, int r22, com.vivo.push.d.r.a r23) {
        /*
            Method dump skipped, instruction units count: 606
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.vivo.push.util.NotifyAdapterUtil.pushNotificationBySystem(android.content.Context, java.util.List, com.vivo.push.model.InsideNotificationItem, long, int, com.vivo.push.d.r$a):void");
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
