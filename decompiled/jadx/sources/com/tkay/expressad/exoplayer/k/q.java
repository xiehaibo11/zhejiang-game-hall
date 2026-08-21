package com.tkay.expressad.exoplayer.k;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.content.Context;
import com.huawei.hms.push.constant.RemoteMessageConst;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

/* JADX INFO: loaded from: classes3.dex */
public final class q {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6772a = -1000;
    public static final int b = 0;
    public static final int c = 1;
    public static final int d = 2;
    public static final int e = 3;
    public static final int f = 4;

    @Retention(RetentionPolicy.SOURCE)
    public @interface a {
    }

    private static void a(Context context, String str, int i, int i2) {
        if (af.f6754a >= 26) {
            ((NotificationManager) context.getSystemService(RemoteMessageConst.NOTIFICATION)).createNotificationChannel(new NotificationChannel(str, context.getString(i), i2));
        }
    }

    private static void a(Context context, int i, Notification notification) {
        NotificationManager notificationManager = (NotificationManager) context.getSystemService(RemoteMessageConst.NOTIFICATION);
        if (notification != null) {
            notificationManager.notify(i, notification);
        } else {
            notificationManager.cancel(i);
        }
    }

    private q() {
    }
}
