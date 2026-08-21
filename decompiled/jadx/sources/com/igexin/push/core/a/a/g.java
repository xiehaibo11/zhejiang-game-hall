package com.igexin.push.core.a.a;

import android.R;
import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.graphics.BitmapFactory;
import android.media.AudioAttributes;
import android.net.Uri;
import android.os.Build;
import android.os.Parcelable;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import com.bykv.vk.openvk.TTVfConstant;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.igexin.push.core.CoreConsts;
import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import com.igexin.push.core.r;
import com.igexin.push.core.x;
import com.igexin.sdk.GetuiActivity;
import com.igexin.sdk.PushConsts;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.Random;

/* JADX INFO: loaded from: classes2.dex */
public class g implements a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2499a = com.igexin.push.config.i.f2493a;

    private int a(com.igexin.push.core.bean.g gVar, boolean z) {
        int identifier;
        if (z) {
            try {
                identifier = com.igexin.push.core.d.g.getResources().getIdentifier("push_small", com.tkay.expressad.foundation.h.i.c, com.igexin.push.core.d.e);
                if (identifier == 0) {
                    try {
                        identifier = com.igexin.push.core.d.g.getResources().getIdentifier("push_small", "mipmap", com.igexin.push.core.d.e);
                    } catch (Throwable th) {
                        th = th;
                        com.igexin.b.a.c.b.a(f2499a + "|" + th.toString(), new Object[0]);
                    }
                }
            } catch (Throwable th2) {
                th = th2;
                identifier = 0;
            }
            if (identifier != 0) {
                return identifier;
            }
            com.igexin.b.a.c.b.a(f2499a + "|push_small.png is missing", new Object[0]);
        }
        int identifier2 = com.igexin.push.core.d.g.getResources().getIdentifier("push", com.tkay.expressad.foundation.h.i.c, com.igexin.push.core.d.e);
        if (identifier2 == 0) {
            identifier2 = com.igexin.push.core.d.g.getResources().getIdentifier("push", "mipmap", com.igexin.push.core.d.e);
        }
        if (TextUtils.isEmpty(gVar.g())) {
            return identifier2 != 0 ? identifier2 : R.drawable.sym_def_app_icon;
        }
        if ("null".equals(gVar.g())) {
            return R.drawable.sym_def_app_icon;
        }
        if (gVar.g().startsWith("@")) {
            String strG = gVar.g();
            return strG.substring(1, strG.length()).endsWith(NotificationCompat.CATEGORY_EMAIL) ? R.drawable.sym_action_email : R.drawable.sym_def_app_icon;
        }
        int identifier3 = com.igexin.push.core.d.g.getResources().getIdentifier(gVar.g(), com.tkay.expressad.foundation.h.i.c, com.igexin.push.core.d.e);
        if (identifier3 == 0) {
            identifier3 = com.igexin.push.core.d.g.getResources().getIdentifier(gVar.g(), "mipmap", com.igexin.push.core.d.e);
        }
        return identifier3 != 0 ? identifier3 : identifier2 != 0 ? identifier2 : R.drawable.sym_def_app_icon;
    }

    private int a(String str) {
        int iCharAt = 0;
        for (int i = 0; i != str.length(); i++) {
            iCharAt = (iCharAt * TTVfConstant.IMAGE_MODE_SPLASH) + str.charAt(i);
        }
        if (iCharAt == Integer.MIN_VALUE) {
            iCharAt = 1;
        }
        return Math.abs(iCharAt);
    }

    private Notification.Builder a(com.igexin.push.core.bean.g gVar) {
        Notification.Builder builder = new Notification.Builder(com.igexin.push.core.d.g);
        NotificationManager notificationManager = (NotificationManager) com.igexin.push.core.d.g.getSystemService(RemoteMessageConst.NOTIFICATION);
        try {
            Class<?> cls = Class.forName("android.app.NotificationChannel");
            Constructor<?> constructor = cls.getConstructor(String.class, CharSequence.class, Integer.TYPE);
            if (constructor != null) {
                Class<?> cls2 = notificationManager.getClass();
                if (((Parcelable) cls2.getMethod("getNotificationChannel", String.class).invoke(notificationManager, gVar.k())) == null) {
                    Parcelable parcelable = (Parcelable) constructor.newInstance(gVar.k(), gVar.l(), Integer.valueOf(gVar.m()));
                    Method method = cls2.getMethod("createNotificationChannel", Class.forName("android.app.NotificationChannel"));
                    Method method2 = cls.getMethod("enableVibration", Boolean.TYPE);
                    Method method3 = cls.getMethod("setSound", Uri.class, AudioAttributes.class);
                    method2.invoke(parcelable, Boolean.valueOf(gVar.e()));
                    if (!gVar.f()) {
                        method3.invoke(parcelable, null, null);
                    } else if (!TextUtils.isEmpty(gVar.p())) {
                        method3.invoke(parcelable, b(gVar.p()), null);
                    }
                    method.invoke(notificationManager, parcelable);
                }
                builder.getClass().getMethod("setChannelId", String.class).invoke(builder, gVar.k());
            }
        } catch (Throwable unused) {
        }
        return builder;
    }

    private PendingIntent a(Intent intent) {
        return PendingIntent.getService(com.igexin.push.core.d.g, new Random().nextInt(1000), intent, (com.igexin.push.util.j.a(com.igexin.push.core.d.g) < 31 || Build.VERSION.SDK_INT < 30) ? DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25 : DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
    }

    private PendingIntent a(String str, String str2, String str3, int i, com.igexin.push.core.bean.g gVar, boolean z) {
        try {
            Intent intent = new Intent(com.igexin.push.core.d.g, (Class<?>) x.a().c(com.igexin.push.core.d.g));
            intent.putExtra("taskid", str2);
            intent.putExtra("messageid", str3);
            intent.putExtra("appid", com.igexin.push.core.d.f2565a);
            intent.putExtra("appkey", str);
            intent.putExtra("actionid", gVar.getDoActionId());
            intent.putExtra("feedbackid", gVar.getActionId().substring(gVar.getActionId().length() - 1));
            intent.putExtra("action", PushConsts.ACTION_BROADCAST_NOTIFICATION_DELETE);
            return a(intent);
        } catch (Exception e) {
            com.igexin.b.a.c.b.a(f2499a + "|getDelPendingIntent err：" + e.toString(), new Object[0]);
            return null;
        }
    }

    private PendingIntent a(String str, String str2, String str3, int i, String str4, String str5) {
        Intent intent = new Intent(CoreConsts.b);
        intent.putExtra("taskid", str);
        intent.putExtra("messageid", str2);
        if (str4 == null) {
            str4 = "";
        }
        intent.putExtra("title", str4);
        if (str5 == null) {
            str5 = "";
        }
        intent.putExtra("content", str5);
        intent.putExtra("appid", com.igexin.push.core.d.f2565a);
        intent.putExtra("actionid", str3);
        intent.putExtra("accesstoken", com.igexin.push.core.d.ad);
        intent.putExtra("notifID", i);
        if (com.igexin.push.util.j.a(com.igexin.push.core.d.g) < 31 || Build.VERSION.SDK_INT < 30) {
            Intent intent2 = new Intent(com.igexin.push.core.d.g, (Class<?>) x.a().c(com.igexin.push.core.d.g));
            intent2.putExtra("action", PushConsts.ACTION_BROADCAST_NOTIFICATION_CLICK);
            intent2.putExtra("broadcast_intent", intent);
            return a(intent2);
        }
        Intent intent3 = new Intent(com.igexin.push.core.d.g, (Class<?>) GetuiActivity.class);
        intent3.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent3.putExtra("action", PushConsts.ACTION_BROADCAST_NOTIFICATION_CLICK);
        intent3.putExtra("broadcast_intent", intent);
        return PendingIntent.getActivity(com.igexin.push.core.d.g, new Random().nextInt(1000), intent3, DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
    }

    private Uri b(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            return Uri.parse("android.resource://" + com.igexin.push.core.d.g.getPackageName() + "/raw/" + str.toLowerCase());
        } catch (Throwable unused) {
            return null;
        }
    }

    @Override // com.igexin.push.core.a.a.a
    public com.igexin.push.core.a a(PushTaskBean pushTaskBean, BaseAction baseAction) {
        return com.igexin.push.core.a.success;
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x00c3 A[PHI: r1
      0x00c3: PHI (r1v48 java.lang.String) = (r1v47 java.lang.String), (r1v49 java.lang.String) binds: [B:21:0x00ab, B:23:0x00c0] A[DONT_GENERATE, DONT_INLINE]] */
    @Override // com.igexin.push.core.a.a.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public com.igexin.push.core.bean.BaseAction a(org.json.JSONObject r22) {
        /*
            Method dump skipped, instruction units count: 438
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.core.a.a.g.a(org.json.JSONObject):com.igexin.push.core.bean.BaseAction");
    }

    public void a(String str, String str2, String str3, com.igexin.push.core.bean.g gVar) {
        Notification notification;
        int iA = !gVar.a() ? a(str2) : gVar.n();
        com.igexin.push.core.d.aa.put(str2, Integer.valueOf(iA));
        PendingIntent pendingIntentA = a(str2, str3, gVar.getDoActionId(), iA, gVar.b(), gVar.c());
        PendingIntent pendingIntentA2 = a(str, str2, str3, iA, gVar, false);
        NotificationManager notificationManager = (NotificationManager) com.igexin.push.core.d.g.getSystemService(RemoteMessageConst.NOTIFICATION);
        int iA2 = a(gVar, false);
        if (Build.VERSION.SDK_INT < 11) {
            notification = new Notification();
            notification.icon = iA2;
            try {
                Method method = Class.forName("android.app.Notification").getMethod("setLatestEventInfo", Context.class, CharSequence.class, CharSequence.class, PendingIntent.class);
                method.setAccessible(true);
                method.invoke(notification, com.igexin.push.core.d.g, gVar.b(), gVar.c(), pendingIntentA);
            } catch (Exception unused) {
                com.igexin.b.a.c.b.a(f2499a + "reflect invoke setLatestEventInfo failed!", new Object[0]);
                return;
            }
        } else {
            Notification.Builder builderA = Build.VERSION.SDK_INT >= 26 ? a(gVar) : new Notification.Builder(com.igexin.push.core.d.g);
            int iA3 = a(gVar, true);
            if (!TextUtils.isEmpty(gVar.b())) {
                builderA.setContentTitle(gVar.b());
            }
            if (!TextUtils.isEmpty(gVar.c())) {
                builderA.setContentText(gVar.c());
            }
            notification = builderA.setSmallIcon(iA3).setLargeIcon(BitmapFactory.decodeResource(com.igexin.push.core.d.g.getResources(), iA2)).setContentIntent(pendingIntentA).setDeleteIntent(pendingIntentA2).getNotification();
            if (com.igexin.push.util.a.e() && Build.VERSION.SDK_INT >= 21 && Build.VERSION.SDK_INT < 24) {
                try {
                    Field field = Class.forName("com.android.internal.R$id").getField("right_icon");
                    field.setAccessible(true);
                    int i = field.getInt(null);
                    if (notification.contentView != null && i != 0) {
                        notification.contentView.setViewVisibility(i, 8);
                    }
                } catch (Exception unused2) {
                }
            }
        }
        notification.tickerText = gVar.c();
        notification.defaults = 4;
        notification.ledARGB = -16711936;
        notification.ledOnMS = 1000;
        notification.ledOffMS = 3000;
        notification.flags = 1;
        notification.flags = gVar.d() ? notification.flags | 16 : notification.flags | 32;
        if (gVar.f()) {
            if (TextUtils.isEmpty(gVar.p())) {
                notification.defaults |= 1;
            } else {
                notification.sound = b(gVar.p());
            }
        }
        if (gVar.e()) {
            notification.defaults |= 2;
        }
        if (!(gVar.i() == null && gVar.h() == null) && gVar.j()) {
            return;
        }
        if (gVar.o() > 0) {
            com.igexin.push.util.b.a(gVar.o(), false);
            com.igexin.push.util.b.a(gVar.o(), notification);
        }
        notificationManager.notify(iA, notification);
        r.a().a(str2, str3, gVar.b() == null ? "" : gVar.b(), gVar.c() != null ? gVar.c() : "");
    }

    @Override // com.igexin.push.core.a.a.a
    public boolean b(PushTaskBean pushTaskBean, BaseAction baseAction) {
        if (pushTaskBean == null || !(baseAction instanceof com.igexin.push.core.bean.g)) {
            return true;
        }
        try {
            a(pushTaskBean.getAppKey(), pushTaskBean.getTaskId(), pushTaskBean.getMessageId(), (com.igexin.push.core.bean.g) baseAction);
            return true;
        } catch (Throwable unused) {
            return true;
        }
    }
}
