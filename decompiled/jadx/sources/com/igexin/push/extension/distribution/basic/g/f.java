package com.igexin.push.extension.distribution.basic.g;

import android.app.Notification;
import android.app.NotificationManager;

/* JADX INFO: loaded from: classes2.dex */
public class f {
    public static void a(NotificationManager notificationManager, int i, Notification notification, int i2, com.igexin.push.extension.distribution.basic.b.a aVar) {
        try {
            if (notification.icon == 0 || com.igexin.push.core.d.g.getResources().getDrawable(notification.icon) != null) {
                if (aVar.A() > 0) {
                    d.a(aVar.A(), false);
                    d.a(aVar.A(), notification);
                }
                notificationManager.notify(i, notification);
                return;
            }
            com.igexin.b.a.c.b.a("NotificationShow|showNotification smallIconId: " + notification.icon + " couldn't find resource", new Object[0]);
        } catch (Throwable unused) {
        }
    }
}
