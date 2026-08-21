package com.igexin.push.extension.distribution.basic.a;

import android.R;
import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Color;
import android.media.AudioAttributes;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcelable;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import com.bykv.vk.openvk.TTVfConstant;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import com.igexin.sdk.PushBuildConfig;
import com.igexin.sdk.PushConsts;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.io.Serializable;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.Random;

/* JADX INFO: loaded from: classes2.dex */
public class a implements com.igexin.push.core.a.a.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2613a = "EXT-" + a.class.getName();

    private int a() {
        try {
            Field field = Class.forName("com.android.internal.R$id").getField("icon");
            field.setAccessible(true);
            return field.getInt(null);
        } catch (Exception unused) {
            return 0;
        }
    }

    private int a(com.igexin.push.extension.distribution.basic.b.a aVar, boolean z) {
        if (z) {
            int identifier = com.igexin.push.core.d.g.getResources().getIdentifier("push_small", com.tkay.expressad.foundation.h.i.c, com.igexin.push.core.d.e);
            if (identifier == 0) {
                identifier = com.igexin.push.core.d.g.getResources().getIdentifier("push_small", "mipmap", com.igexin.push.core.d.e);
            }
            if (identifier != 0) {
                com.igexin.b.a.c.b.a(f2613a + "|push_small.png is set, use default push_small", new Object[0]);
                return identifier;
            }
            com.igexin.b.a.c.b.a(f2613a + "|push_small.png is missing", new Object[0]);
        }
        int identifier2 = com.igexin.push.core.d.g.getResources().getIdentifier("push", com.tkay.expressad.foundation.h.i.c, com.igexin.push.core.d.e);
        if (identifier2 == 0) {
            identifier2 = com.igexin.push.core.d.g.getResources().getIdentifier("push", "mipmap", com.igexin.push.core.d.e);
        }
        if (TextUtils.isEmpty(aVar.p())) {
            return identifier2 != 0 ? identifier2 : R.drawable.sym_def_app_icon;
        }
        if ("null".equals(aVar.p())) {
            return R.drawable.sym_def_app_icon;
        }
        if (aVar.p().startsWith("@")) {
            String strP = aVar.p();
            return strP.substring(1, strP.length()).endsWith(NotificationCompat.CATEGORY_EMAIL) ? R.drawable.sym_action_email : R.drawable.sym_def_app_icon;
        }
        int identifier3 = com.igexin.push.core.d.g.getResources().getIdentifier(aVar.p(), com.tkay.expressad.foundation.h.i.c, com.igexin.push.core.d.e);
        if (identifier3 == 0) {
            identifier3 = com.igexin.push.core.d.g.getResources().getIdentifier(aVar.p(), "mipmap", com.igexin.push.core.d.e);
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

    private Notification.Builder a(com.igexin.push.extension.distribution.basic.b.a aVar) {
        Notification.Builder builder = new Notification.Builder(com.igexin.push.core.d.g);
        NotificationManager notificationManager = (NotificationManager) com.igexin.push.core.d.g.getSystemService(RemoteMessageConst.NOTIFICATION);
        try {
            Class<?> cls = Class.forName("android.app.NotificationChannel");
            Constructor<?> constructor = cls.getConstructor(String.class, CharSequence.class, Integer.TYPE);
            int iD = aVar.g() ? 4 : aVar.d();
            Class<?> cls2 = notificationManager.getClass();
            if (((Parcelable) cls2.getMethod("getNotificationChannel", String.class).invoke(notificationManager, aVar.b())) == null) {
                Parcelable parcelable = (Parcelable) constructor.newInstance(aVar.b(), aVar.c(), Integer.valueOf(iD));
                Method method = cls2.getMethod("createNotificationChannel", Class.forName("android.app.NotificationChannel"));
                Method method2 = cls.getMethod("enableVibration", Boolean.TYPE);
                Method method3 = cls.getMethod("setSound", Uri.class, AudioAttributes.class);
                method2.invoke(parcelable, Boolean.valueOf(aVar.x()));
                if (!aVar.y()) {
                    method3.invoke(parcelable, null, null);
                } else if (!TextUtils.isEmpty(aVar.z())) {
                    method3.invoke(parcelable, b(aVar.z()), null);
                }
                method.invoke(notificationManager, parcelable);
            }
            builder.getClass().getMethod("setChannelId", String.class).invoke(builder, aVar.b());
        } catch (Exception unused) {
        }
        return builder;
    }

    private Notification a(Notification notification, com.igexin.push.extension.distribution.basic.b.a aVar) {
        notification.defaults = 4;
        notification.ledARGB = -16711936;
        notification.ledOnMS = 1000;
        notification.ledOffMS = 3000;
        notification.flags = 1;
        if (aVar.y()) {
            if (TextUtils.isEmpty(aVar.z())) {
                notification.defaults |= 1;
            } else {
                notification.sound = b(aVar.z());
            }
        }
        notification.flags = aVar.B() ? notification.flags | 16 : notification.flags | 32;
        if (aVar.x()) {
            notification.defaults |= 2;
        }
        notification.icon = a(aVar, true);
        return notification;
    }

    private PendingIntent a(Intent intent) {
        return PendingIntent.getService(com.igexin.push.core.d.g, new Random().nextInt(1000), intent, (com.igexin.push.extension.distribution.basic.g.d.a(com.igexin.push.core.d.g) < 31 || Build.VERSION.SDK_INT < 30) ? DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25 : DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
    }

    private PendingIntent a(String str, String str2, int i, com.igexin.push.extension.distribution.basic.b.a aVar, boolean z) {
        Intent intent = new Intent(com.igexin.push.extension.distribution.basic.c.b.f2626a);
        intent.putExtra("taskid", str);
        intent.putExtra("messageid", str2);
        intent.putExtra("appid", com.igexin.push.core.d.f2565a);
        intent.putExtra("actionid", aVar.getDoActionId());
        intent.putExtra("accesstoken", com.igexin.push.extension.distribution.basic.c.e.d);
        intent.putExtra("notifID", i);
        intent.putExtra("notifyStyle", aVar.u() + "");
        intent.putExtra("id", aVar.f() + "");
        intent.putExtra("bigStyle", aVar.i() + "");
        intent.putExtra("isFloat", z);
        intent.putExtra("checkpackage", com.igexin.push.core.d.g.getPackageName());
        intent.putExtra("feedbackid", aVar.getActionId().substring(aVar.getActionId().length() + (-1)));
        String strN = aVar.n();
        if (strN == null) {
            strN = "";
        }
        intent.putExtra("title", strN);
        String strO = aVar.o();
        intent.putExtra("content", strO != null ? strO : "");
        if (com.igexin.push.extension.distribution.basic.g.c.a(PushBuildConfig.sdk_conf_version, "2.11.0.0") < 0) {
            return PendingIntent.getBroadcast(com.igexin.push.core.d.g, new Random().nextInt(1000), intent, DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
        }
        if (com.igexin.push.extension.distribution.basic.g.d.a(com.igexin.push.core.d.g) < 31 || Build.VERSION.SDK_INT < 30) {
            try {
                Intent intent2 = new Intent(com.igexin.push.core.d.g, Class.forName(com.igexin.push.extension.distribution.basic.g.e.a(com.igexin.push.extension.distribution.basic.c.e.f2629a)));
                intent2.putExtra("action", PushConsts.ACTION_BROADCAST_NOTIFICATION_CLICK);
                intent2.putExtra("broadcast_intent", intent);
                return a(intent2);
            } catch (Throwable unused) {
                return PendingIntent.getBroadcast(com.igexin.push.core.d.g, new Random().nextInt(1000), intent, DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
            }
        }
        try {
            Intent intent3 = new Intent(com.igexin.push.core.d.g, Class.forName("com.igexin.sdk.GetuiActivity"));
            intent3.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            intent3.putExtra("action", PushConsts.ACTION_BROADCAST_NOTIFICATION_CLICK);
            intent3.putExtra("broadcast_intent", intent);
            return PendingIntent.getActivity(com.igexin.push.core.d.g, new Random().nextInt(1000), intent3, DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
        } catch (ClassNotFoundException unused2) {
            return PendingIntent.getBroadcast(com.igexin.push.core.d.g, new Random().nextInt(1000), intent, DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
        }
    }

    private PendingIntent a(String str, String str2, String str3, int i, com.igexin.push.extension.distribution.basic.b.a aVar, boolean z) {
        try {
            Intent intent = new Intent(com.igexin.push.core.d.g, Class.forName(com.igexin.push.extension.distribution.basic.g.e.a(com.igexin.push.extension.distribution.basic.c.e.f2629a)));
            intent.putExtra("taskid", str2);
            intent.putExtra("messageid", str3);
            intent.putExtra("appid", com.igexin.push.core.d.f2565a);
            intent.putExtra("appkey", str);
            intent.putExtra("actionid", aVar.getDoActionId());
            intent.putExtra("notifyStyle", aVar.u() + "");
            intent.putExtra("id", aVar.f() + "");
            intent.putExtra("feedbackid", aVar.getActionId().substring(aVar.getActionId().length() + (-1)));
            intent.putExtra("action", PushConsts.ACTION_BROADCAST_NOTIFICATION_DELETE);
            return a(intent);
        } catch (Exception e) {
            com.igexin.b.a.c.b.a(f2613a + "|getDelPendingIntent err：" + e.toString(), new Object[0]);
            return null;
        }
    }

    private void a(String str, String str2, String str3, String str4) {
        if (com.igexin.push.core.d.g == null) {
            return;
        }
        Intent intent = null;
        try {
            Class clsB = b(com.igexin.push.core.d.g);
            if (clsB == null || com.igexin.push.core.d.f2565a == null) {
                return;
            }
            Intent intent2 = new Intent(com.igexin.push.core.d.g, (Class<?>) clsB);
            try {
                Bundle bundle = new Bundle();
                bundle.putInt("action", 10011);
                Class<?> cls = Class.forName("com.igexin.sdk.message.GTNotificationMessage");
                if (com.igexin.push.extension.distribution.basic.g.c.a(PushBuildConfig.sdk_conf_version, "2.12.0.0") == 0) {
                    bundle.putSerializable("notification_arrive", (Serializable) cls.getConstructor(String.class, String.class).newInstance(str, str2));
                } else {
                    bundle.putSerializable("notification_arrived", (Serializable) cls.getConstructor(String.class, String.class, String.class, String.class).newInstance(str, str2, str3, str4));
                }
                intent2.putExtras(bundle);
                if (a(com.igexin.push.core.d.g)) {
                    com.igexin.push.extension.distribution.basic.c.a.a().a(com.igexin.push.core.d.g, intent2, 1902131808);
                    return;
                } else {
                    com.igexin.push.core.d.g.startService(intent2);
                    return;
                }
            } catch (Throwable th) {
                th = th;
                intent = intent2;
            }
        } catch (Throwable th2) {
            th = th2;
        }
        com.igexin.b.a.c.b.a(f2613a + "|" + th.toString(), new Object[0]);
        if (!(th instanceof IllegalStateException) || com.igexin.push.extension.distribution.basic.g.c.a(PushBuildConfig.sdk_conf_version, "2.13.1.0") < 0) {
            return;
        }
        com.igexin.push.extension.distribution.basic.c.a.a().a(com.igexin.push.core.d.g, intent, 1902131808);
    }

    private boolean a(Context context) {
        return com.igexin.push.extension.distribution.basic.g.c.a(PushBuildConfig.sdk_conf_version, "2.13.1.0") >= 0 && com.igexin.push.extension.distribution.basic.g.b.b();
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

    private Class b(Context context) {
        try {
            com.igexin.push.extension.distribution.basic.d.a.a();
            String strC = com.igexin.push.extension.distribution.basic.d.a.c();
            if (TextUtils.isEmpty(strC)) {
                return null;
            }
            return Class.forName(strC);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a(f2613a + "|" + th.toString(), new Object[0]);
            return null;
        }
    }

    private Bitmap c(String str) {
        if (str != null) {
            try {
                Bitmap bitmapDecodeFile = BitmapFactory.decodeFile(str);
                if (bitmapDecodeFile != null) {
                    return bitmapDecodeFile;
                }
            } catch (Exception unused) {
            }
        }
        return null;
    }

    @Override // com.igexin.push.core.a.a.a
    public com.igexin.push.core.a a(PushTaskBean pushTaskBean, BaseAction baseAction) {
        boolean z;
        if (!(baseAction instanceof com.igexin.push.extension.distribution.basic.b.a)) {
            return com.igexin.push.core.a.stop;
        }
        com.igexin.push.extension.distribution.basic.b.a aVar = (com.igexin.push.extension.distribution.basic.b.a) baseAction;
        String strQ = aVar.q();
        String strM = aVar.m();
        String taskId = pushTaskBean.getTaskId();
        String messageId = pushTaskBean.getMessageId();
        boolean z2 = true;
        if (strM != null) {
            String strA = com.igexin.push.extension.distribution.basic.c.c.a().a(strM);
            if (strA.equals("")) {
                aVar.c(false);
                z = true;
            } else {
                aVar.e(strA);
                z = false;
            }
        } else {
            z = false;
        }
        if (strQ != null) {
            String strA2 = com.igexin.push.extension.distribution.basic.c.c.a().a(strQ);
            if (strA2.equals("")) {
                aVar.d(false);
            } else {
                aVar.k(strA2);
                z2 = false;
            }
        } else {
            z2 = false;
        }
        if (!z2 && !z) {
            return com.igexin.push.core.a.success;
        }
        if (z2) {
            a(strQ, taskId, messageId, baseAction, 2);
        }
        if (z) {
            a(strM, taskId, messageId, baseAction, 8);
        }
        return com.igexin.push.core.a.wait;
    }

    /* JADX WARN: Removed duplicated region for block: B:36:0x00de  */
    @Override // com.igexin.push.core.a.a.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public com.igexin.push.core.bean.BaseAction a(org.json.JSONObject r19) {
        /*
            Method dump skipped, instruction units count: 711
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.extension.distribution.basic.a.a.a(org.json.JSONObject):com.igexin.push.core.bean.BaseAction");
    }

    public void a(String str, String str2, String str3, BaseAction baseAction, int i) {
        String str4;
        String str5;
        String str6 = "width=" + com.igexin.push.extension.distribution.basic.c.e.c + "&height=" + com.igexin.push.extension.distribution.basic.c.e.b;
        if (str.contains(str6)) {
            str4 = str;
        } else {
            if (str.indexOf("?") > 0) {
                str5 = str + "&" + str6;
            } else {
                str5 = str + "?" + str6;
            }
            str4 = str5;
        }
        com.igexin.push.extension.distribution.basic.f.c cVar = new com.igexin.push.extension.distribution.basic.f.c(str4, str, str2, baseAction, i, new b(this, baseAction, str2, str3, str, i));
        if (i == 2) {
            com.igexin.push.extension.distribution.basic.b.a aVar = (com.igexin.push.extension.distribution.basic.b.a) baseAction;
            aVar.e(aVar.t() + 1);
        } else if (i == 8) {
            com.igexin.push.extension.distribution.basic.b.a aVar2 = (com.igexin.push.extension.distribution.basic.b.a) baseAction;
            aVar2.d(aVar2.l() + 1);
        }
        com.igexin.b.a.b.c.b().a(new com.igexin.push.extension.distribution.basic.f.a(cVar), false, true);
    }

    public void a(String str, String str2, String str3, com.igexin.push.extension.distribution.basic.b.a aVar, int i) {
        Bitmap bitmapDecodeResource;
        int iA;
        Notification.Style styleBigText;
        Bitmap bitmapC;
        com.igexin.push.core.d.aa.put(str2, Integer.valueOf(i));
        PendingIntent pendingIntentA = a(str2, str3, i, aVar, false);
        PendingIntent pendingIntentA2 = a(str, str2, str3, i, aVar, false);
        NotificationManager notificationManager = (NotificationManager) com.igexin.push.core.d.g.getSystemService(RemoteMessageConst.NOTIFICATION);
        String strR = aVar.r();
        String strN = aVar.n();
        String strO = aVar.o();
        if (strR == null || "".equals(strR)) {
            bitmapDecodeResource = null;
        } else {
            bitmapDecodeResource = c(strR);
            StringBuilder sb = new StringBuilder();
            sb.append(f2613a);
            sb.append("|use net logo bitmap is null = ");
            sb.append(bitmapDecodeResource == null);
            com.igexin.b.a.c.b.a(sb.toString(), new Object[0]);
        }
        if (bitmapDecodeResource == null) {
            bitmapDecodeResource = BitmapFactory.decodeResource(com.igexin.push.extension.distribution.basic.c.e.f2629a.getResources(), a(aVar, false));
        }
        Notification notification = new Notification();
        if (Build.VERSION.SDK_INT >= 11) {
            Notification.Builder builder = new Notification.Builder(com.igexin.push.core.d.g);
            if (Build.VERSION.SDK_INT >= 26) {
                builder = a(aVar);
            }
            int iA2 = a(aVar, true);
            if (iA2 != 0 && com.igexin.push.core.d.g.getResources().getDrawable(iA2) == null) {
                com.igexin.b.a.c.b.a(f2613a + "|showNotification smallIconId: " + iA2 + " couldn't find resource", new Object[0]);
                return;
            }
            if (!TextUtils.isEmpty(strN)) {
                builder.setContentTitle(strN);
            }
            if (!TextUtils.isEmpty(strO)) {
                builder.setContentText(strO);
            }
            builder.setSmallIcon(iA2).setTicker(aVar.o()).setWhen(System.currentTimeMillis()).setLargeIcon(bitmapDecodeResource).setContentIntent(pendingIntentA).setDeleteIntent(pendingIntentA2);
            if (Build.VERSION.SDK_INT >= 24 && !TextUtils.isEmpty(aVar.v())) {
                try {
                    builder.setColor(Color.parseColor(aVar.v()));
                } catch (Throwable unused) {
                }
            }
            if (Build.VERSION.SDK_INT >= 16) {
                if (aVar.i() == c.BIG_IMAGE.a()) {
                    String strJ = aVar.j();
                    if (!TextUtils.isEmpty(strJ) && (bitmapC = c(strJ)) != null) {
                        builder.setPriority(aVar.e());
                        styleBigText = new Notification.BigPictureStyle().bigPicture(bitmapC);
                        builder.setStyle(styleBigText);
                    }
                } else if (aVar.i() == c.LONG_TEXT.a()) {
                    String strH = aVar.h();
                    if (!TextUtils.isEmpty(strH)) {
                        builder.setPriority(aVar.e());
                        styleBigText = new Notification.BigTextStyle().bigText(strH);
                        builder.setStyle(styleBigText);
                    }
                }
            }
            if (aVar.g() && Build.VERSION.SDK_INT >= 21 && (aVar.x() || aVar.y())) {
                builder.setPriority(2);
            }
            notification = builder.getNotification();
            a(notification, aVar);
        } else {
            try {
                if (notification.contentView != null && bitmapDecodeResource != null && (iA = a()) > 0) {
                    notification.contentView.setImageViewBitmap(iA, bitmapDecodeResource);
                }
                notification.deleteIntent = pendingIntentA2;
                Method method = Class.forName("android.app.Notification").getMethod("setLatestEventInfo", Context.class, CharSequence.class, CharSequence.class, PendingIntent.class);
                method.setAccessible(true);
                method.invoke(notification, com.igexin.push.core.d.g, strN, strO, pendingIntentA);
            } catch (Exception unused2) {
                com.igexin.b.a.c.b.a(f2613a + "reflect invoke setLatestEventInfo failed!", new Object[0]);
                return;
            }
        }
        com.igexin.push.extension.distribution.basic.g.f.a(notificationManager, i, notification, 0, aVar);
        if (com.igexin.push.extension.distribution.basic.g.c.a(PushBuildConfig.sdk_conf_version, "2.12.0.0") >= 0) {
            a(str2, str3, strN, strO);
        }
    }

    @Override // com.igexin.push.core.a.a.a
    public boolean b(PushTaskBean pushTaskBean, BaseAction baseAction) {
        if (pushTaskBean != null && (baseAction instanceof com.igexin.push.extension.distribution.basic.b.a)) {
            com.igexin.push.extension.distribution.basic.b.a aVar = (com.igexin.push.extension.distribution.basic.b.a) baseAction;
            int iA = !aVar.a() ? a(pushTaskBean.getTaskId()) : aVar.w();
            int i = 0;
            try {
                i = Integer.parseInt(aVar.getActionId().substring(aVar.getActionId().length() - 1)) + 30000;
            } catch (Exception unused) {
            }
            a(pushTaskBean.getAppKey(), pushTaskBean.getTaskId(), pushTaskBean.getMessageId(), aVar, iA);
            if (i != 0) {
                com.igexin.push.core.a.e.a().a(pushTaskBean, i + "", "notifyStyle:" + aVar.u());
            }
            pushTaskBean.setPerActionid(Integer.parseInt(aVar.getActionId()));
            pushTaskBean.setCurrentActionid(Integer.parseInt(aVar.getDoActionId()));
        }
        return true;
    }
}
