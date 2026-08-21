package com.tkay.china.common.b;

import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.china.common.NotificationBroadcaseReceiver;
import com.tkay.china.common.a.e;
import com.tkay.core.common.l.h;
import com.tkay.expressad.foundation.h.i;
import java.util.HashMap;
import java.util.Map;

public class a implements b {
    public static final String a = a.class.getSimpleName();
    public static final String b = "tkay_action_notification_click";
    public static final String c = "tkay_action_notification_cannel";
    public static final String d = "tkay_broadcast_receiver_extra_url";
    public static final String e = "tkay_broadcast_receiver_extra_unique_id";
    public static final String f = "tkay_broadcast_receiver_extra_request_status";
    public static final String g = "tkay_broadcast_receiver_extra_notification_id";
    private static volatile a j;
    Map<String, c> h = new HashMap();
    private NotificationManager i;
    private Context k;
    private int l;

    private static int a(long j2, long j3) {
        return (int) (((j2 * 1.0f) / j3) * 100.0f);
    }

    public static a a(Context context) {
        if (j == null) {
            synchronized (a.class) {
                if (j == null) {
                    j = new a(context);
                }
            }
        }
        return j;
    }

    private a(Context context) {
        this.k = context;
        this.i = b(context);
    }

    @Override
    public final NotificationManager b(Context context) {
        if (context == null) {
            return null;
        }
        return (NotificationManager) context.getSystemService(RemoteMessageConst.NOTIFICATION);
    }

    /* JADX WARN: Removed duplicated region for block: B:54:0x0144 A[Catch: all -> 0x0176, TryCatch #0 {all -> 0x0176, blocks: (B:8:0x000f, B:10:0x0013, B:11:0x001b, B:13:0x0025, B:16:0x00ac, B:20:0x00b8, B:52:0x013e, B:54:0x0144, B:55:0x0148, B:57:0x015a, B:59:0x0169, B:58:0x0162, B:24:0x00c8, B:27:0x00d3, B:36:0x00f0, B:38:0x00f8, B:43:0x0103, B:46:0x010c, B:48:0x0112, B:50:0x0116, B:51:0x012a, B:15:0x002d), top: B:71:0x000f, outer: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:57:0x015a A[Catch: all -> 0x0176, TryCatch #0 {all -> 0x0176, blocks: (B:8:0x000f, B:10:0x0013, B:11:0x001b, B:13:0x0025, B:16:0x00ac, B:20:0x00b8, B:52:0x013e, B:54:0x0144, B:55:0x0148, B:57:0x015a, B:59:0x0169, B:58:0x0162, B:24:0x00c8, B:27:0x00d3, B:36:0x00f0, B:38:0x00f8, B:43:0x0103, B:46:0x010c, B:48:0x0112, B:50:0x0116, B:51:0x012a, B:15:0x002d), top: B:71:0x000f, outer: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0162 A[Catch: all -> 0x0176, TryCatch #0 {all -> 0x0176, blocks: (B:8:0x000f, B:10:0x0013, B:11:0x001b, B:13:0x0025, B:16:0x00ac, B:20:0x00b8, B:52:0x013e, B:54:0x0144, B:55:0x0148, B:57:0x015a, B:59:0x0169, B:58:0x0162, B:24:0x00c8, B:27:0x00d3, B:36:0x00f0, B:38:0x00f8, B:43:0x0103, B:46:0x010c, B:48:0x0112, B:50:0x0116, B:51:0x012a, B:15:0x002d), top: B:71:0x000f, outer: #1 }] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized void a(e eVar, long j2, long j3, boolean z) {
        int i;
        if (eVar != null) {
            if (!TextUtils.isEmpty(eVar.b)) {
                try {
                    if (this.i == null) {
                        this.i = b(this.k);
                    }
                    c cVarF = f(eVar);
                    NotificationCompat.Builder progress = cVarF.b;
                    if (cVarF.d == null || cVarF.d != eVar.a()) {
                        cVarF.d = eVar.a();
                        Intent intent = new Intent(b);
                        intent.putExtra(e, eVar.n);
                        intent.putExtra(d, eVar.b);
                        intent.putExtra(f, eVar.a().toString());
                        intent.putExtra(g, cVarF.a);
                        intent.setClass(this.k, NotificationBroadcaseReceiver.class);
                        PendingIntent broadcast = PendingIntent.getBroadcast(this.k, cVarF.a, intent, DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
                        Intent intent2 = new Intent(c);
                        intent2.putExtra(e, eVar.n);
                        intent2.putExtra(d, eVar.b);
                        intent2.putExtra(f, eVar.a().toString());
                        intent2.putExtra(g, cVarF.a);
                        intent2.setClass(this.k, NotificationBroadcaseReceiver.class);
                        progress.setContentIntent(broadcast).setDeleteIntent(PendingIntent.getBroadcast(this.k, cVarF.a, intent2, DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25));
                    }
                    int i2 = cVarF.c;
                    boolean z2 = eVar.p == 2;
                    String str = "default";
                    if (!eVar.f()) {
                        if (eVar.g()) {
                            str = "点击安装";
                            i = 100;
                        } else if (eVar.h()) {
                            str = "下载失败，可点击重试";
                        } else {
                            i = (int) (((j2 * 1.0f) / j3) * 100.0f);
                            if (!z && i2 == i) {
                                return;
                            }
                            cVarF.c = i;
                            if (eVar.b()) {
                                str = eVar.q == 2 ? "等待下载中" : "等待下载中（点击可暂停）";
                            } else if (eVar.c()) {
                                str = "点击继续下载";
                            } else if (eVar.d()) {
                                if (eVar.q == 2) {
                                    str = "（下载中：" + i + "%)";
                                } else {
                                    str = "点击暂停下载（下载中：" + i + "%)";
                                }
                            }
                            z2 = false;
                        }
                        if (eVar.d()) {
                            progress = progress.setProgress(100, i, false);
                        }
                        progress.setContentText(str).setStyle(new NotificationCompat.BigTextStyle().bigText(str));
                        if (!z2) {
                            progress.setOngoing(false).setAutoCancel(true);
                        } else {
                            progress.setOngoing(true).setAutoCancel(false);
                        }
                        this.i.notify(cVarF.a, progress.build());
                    }
                    str = "点击打开";
                    z2 = true;
                    i = 0;
                    if (eVar.d()) {
                    }
                    progress.setContentText(str).setStyle(new NotificationCompat.BigTextStyle().bigText(str));
                    if (!z2) {
                    }
                    this.i.notify(cVarF.a, progress.build());
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        }
    }

    public final void a(e eVar, long j2, long j3) {
        a(eVar, j2, j3, false);
    }

    public final void a(e eVar) {
        a(eVar, 100L, 100L, true);
    }

    private void d(e eVar) {
        a(eVar, 0L, 100L, true);
    }

    private void e(e eVar) {
        a(eVar, 0L, 100L, true);
    }

    private void a(e eVar, NotificationCompat.Builder builder, c cVar) {
        if (cVar.d == null || cVar.d != eVar.a()) {
            cVar.d = eVar.a();
            Intent intent = new Intent(b);
            intent.putExtra(e, eVar.n);
            intent.putExtra(d, eVar.b);
            intent.putExtra(f, eVar.a().toString());
            intent.putExtra(g, cVar.a);
            intent.setClass(this.k, NotificationBroadcaseReceiver.class);
            PendingIntent broadcast = PendingIntent.getBroadcast(this.k, cVar.a, intent, DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
            Intent intent2 = new Intent(c);
            intent2.putExtra(e, eVar.n);
            intent2.putExtra(d, eVar.b);
            intent2.putExtra(f, eVar.a().toString());
            intent2.putExtra(g, cVar.a);
            intent2.setClass(this.k, NotificationBroadcaseReceiver.class);
            builder.setContentIntent(broadcast).setDeleteIntent(PendingIntent.getBroadcast(this.k, cVar.a, intent2, DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25));
        }
    }

    @Override
    public final String b(e eVar) {
        return eVar.n;
    }

    public final void c(e eVar) {
        if (eVar == null || TextUtils.isEmpty(eVar.b) || this.i == null) {
            return;
        }
        this.i.cancel(f(eVar).a);
        this.h.remove(eVar.n);
    }

    public final void a(int i) {
        if (i < 0) {
            return;
        }
        try {
            this.i.cancel(i);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public final void a() {
        NotificationManager notificationManager = this.i;
        if (notificationManager != null) {
            notificationManager.cancelAll();
        }
    }

    private c f(e eVar) {
        String str = eVar.n;
        c cVar = this.h.get(str);
        if (cVar != null) {
            return cVar;
        }
        NotificationCompat.Builder builder = new NotificationCompat.Builder(this.k, str);
        if (Build.VERSION.SDK_INT >= 24 && Build.VERSION.SDK_INT >= 26) {
            NotificationChannel notificationChannel = new NotificationChannel(str, str, 3);
            notificationChannel.setSound(null, null);
            this.i.createNotificationChannel(notificationChannel);
        }
        this.l++;
        builder.setOngoing(true).setSound(null).setPriority(0).setOnlyAlertOnce(true).setAutoCancel(false);
        try {
            builder.setSmallIcon(this.k.getPackageManager().getApplicationInfo(this.k.getPackageName(), 128).icon);
        } catch (Throwable th) {
            th.printStackTrace();
            builder.setSmallIcon(h.a(this.k, "core_icon_close", i.c));
        }
        builder.setContentTitle(eVar.c).setLargeIcon(eVar.d);
        c cVar2 = new c();
        cVar2.a = this.l;
        cVar2.b = builder;
        cVar2.c = -1;
        this.h.put(str, cVar2);
        return cVar2;
    }
}
