package com.xiaomi.push.service;

import android.app.Notification;
import android.content.Context;
import android.os.Build;
import android.os.SystemClock;
import android.service.notification.StatusBarNotification;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

public class d {
    private static List<a> a = new CopyOnWriteArrayList();

    class a {
        public final int a;
        public final long a;
        public final String a;
        public final Notification.Action[] a;

        a(String str, long j, int i, Notification.Action[] actionArr) {
            this.a = str;
            this.a = j;
            this.a = i;
            this.a = actionArr;
        }
    }

    private static void a() {
        for (int size = a.size() - 1; size >= 0; size--) {
            a aVar = a.get(size);
            if (SystemClock.elapsedRealtime() - aVar.a > 5000) {
                a.remove(aVar);
            }
        }
        if (a.size() > 10) {
            a.remove(0);
        }
    }

    protected static void a(Context context, StatusBarNotification statusBarNotification, int i) {
        if (!com.xiaomi.push.m.a(context) || i <= 0 || statusBarNotification == null || Build.VERSION.SDK_INT < 20) {
            return;
        }
        a(new a(statusBarNotification.getKey(), SystemClock.elapsedRealtime(), i, ay.a(statusBarNotification.getNotification())));
    }

    private static void a(a aVar) {
        a.add(aVar);
        a();
    }
}
