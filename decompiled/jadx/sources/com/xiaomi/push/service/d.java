package com.xiaomi.push.service;

import android.app.Notification;
import android.content.Context;
import android.os.Build;
import android.os.SystemClock;
import android.service.notification.StatusBarNotification;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes4.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static List<a> f8373a = new CopyOnWriteArrayList();

    class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f8374a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public final long f990a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public final String f991a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public final Notification.Action[] f992a;

        a(String str, long j, int i, Notification.Action[] actionArr) {
            this.f991a = str;
            this.f990a = j;
            this.f8374a = i;
            this.f992a = actionArr;
        }
    }

    private static void a() {
        for (int size = f8373a.size() - 1; size >= 0; size--) {
            a aVar = f8373a.get(size);
            if (SystemClock.elapsedRealtime() - aVar.f990a > 5000) {
                f8373a.remove(aVar);
            }
        }
        if (f8373a.size() > 10) {
            f8373a.remove(0);
        }
    }

    protected static void a(Context context, StatusBarNotification statusBarNotification, int i) {
        if (!com.xiaomi.push.m.m575a(context) || i <= 0 || statusBarNotification == null || Build.VERSION.SDK_INT < 20) {
            return;
        }
        a(new a(statusBarNotification.getKey(), SystemClock.elapsedRealtime(), i, ay.m648a(statusBarNotification.getNotification())));
    }

    private static void a(a aVar) {
        f8373a.add(aVar);
        a();
    }
}
