package com.mbridge.msdk.mbdownload;

public class h {
    protected android.content.Context e;
    protected android.app.Notification f;
    protected android.app.Notification.Builder g;
    protected android.support.v4.app.NotificationCompat.Builder h;
    protected android.app.PendingIntent i;
    protected android.widget.RemoteViews j;

    public h(android.content.Context r6) {
            r5 = this;
            r5.<init>()
            android.content.Context r0 = r6.getApplicationContext()
            r5.e = r0
            android.widget.RemoteViews r0 = new android.widget.RemoteViews
            android.content.Context r1 = r5.e
            java.lang.String r1 = r1.getPackageName()
            android.content.Context r2 = r5.e
            java.lang.String r3 = "mbridge_download_notify_layout"
            java.lang.String r4 = "layout"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r4)
            r0.<init>(r1, r2)
            r5.j = r0
            if (r6 == 0) goto L2b
            android.content.Context r0 = r5.e
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            goto L2c
        L2b:
            r0 = 0
        L2c:
            r1 = 26
            if (r0 < r1) goto L45
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L45
            android.support.v4.app.NotificationCompat$Builder r6 = new android.support.v4.app.NotificationCompat$Builder
            android.content.Context r0 = r5.e
            java.lang.String r1 = "download"
            r6.<init>(r0, r1)
            r5.h = r6
            android.widget.RemoteViews r0 = r5.j
            r6.setCustomContentView(r0)
            goto L5f
        L45:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L58
            android.app.Notification$Builder r0 = new android.app.Notification$Builder
            r0.<init>(r6)
            r5.g = r0
            android.widget.RemoteViews r6 = r5.j
            r0.setContent(r6)
            goto L5f
        L58:
            android.app.Notification r6 = new android.app.Notification
            r6.<init>()
            r5.f = r6
        L5f:
            return
    }

    public final com.mbridge.msdk.mbdownload.h a(int r3) {
            r2 = this;
            android.content.Context r0 = r2.e
            if (r0 == 0) goto Lb
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            goto Lc
        Lb:
            r0 = 0
        Lc:
            r1 = 26
            if (r0 < r1) goto L1a
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L1a
            android.support.v4.app.NotificationCompat$Builder r0 = r2.h
            r0.setSmallIcon(r3)
            goto L2a
        L1a:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L26
            android.app.Notification$Builder r0 = r2.g
            r0.setSmallIcon(r3)
            goto L2a
        L26:
            android.app.Notification r0 = r2.f
            r0.icon = r3
        L2a:
            return r2
    }

    public final com.mbridge.msdk.mbdownload.h a(long r3) {
            r2 = this;
            android.content.Context r0 = r2.e
            if (r0 == 0) goto Lb
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            goto Lc
        Lb:
            r0 = 0
        Lc:
            r1 = 26
            if (r0 < r1) goto L1a
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L1a
            android.support.v4.app.NotificationCompat$Builder r0 = r2.h
            r0.setWhen(r3)
            goto L2a
        L1a:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L26
            android.app.Notification$Builder r0 = r2.g
            r0.setWhen(r3)
            goto L2a
        L26:
            android.app.Notification r0 = r2.f
            r0.when = r3
        L2a:
            return r2
    }

    public final com.mbridge.msdk.mbdownload.h a(boolean r3) {
            r2 = this;
            android.content.Context r0 = r2.e
            if (r0 == 0) goto Lb
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            goto Lc
        Lb:
            r0 = 0
        Lc:
            r1 = 26
            if (r0 < r1) goto L1a
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L1a
            android.support.v4.app.NotificationCompat$Builder r0 = r2.h
            r0.setOngoing(r3)
            goto L39
        L1a:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L26
            android.app.Notification$Builder r0 = r2.g
            r0.setOngoing(r3)
            goto L39
        L26:
            if (r3 == 0) goto L31
            android.app.Notification r3 = r2.f
            int r0 = r3.flags
            r0 = r0 | 2
            r3.flags = r0
            goto L39
        L31:
            android.app.Notification r3 = r2.f
            int r0 = r3.flags
            r0 = r0 & (-3)
            r3.flags = r0
        L39:
            return r2
    }

    public final com.mbridge.msdk.mbdownload.h b(boolean r3) {
            r2 = this;
            android.content.Context r0 = r2.e
            if (r0 == 0) goto Lb
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            goto Lc
        Lb:
            r0 = 0
        Lc:
            r1 = 26
            if (r0 < r1) goto L1a
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L1a
            android.support.v4.app.NotificationCompat$Builder r0 = r2.h
            r0.setAutoCancel(r3)
            goto L38
        L1a:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L26
            android.app.Notification$Builder r0 = r2.g
            r0.setAutoCancel(r3)
            goto L38
        L26:
            if (r3 == 0) goto L30
            android.app.Notification r3 = r2.f
            int r0 = r3.flags
            r0 = r0 | r1
            r3.flags = r0
            goto L38
        L30:
            android.app.Notification r3 = r2.f
            int r0 = r3.flags
            r0 = r0 & (-17)
            r3.flags = r0
        L38:
            return r2
    }

    public final void e() {
            r4 = this;
            android.content.Context r0 = r4.e
            if (r0 == 0) goto Lb
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            goto Lc
        Lb:
            r0 = 0
        Lc:
            r1 = 1
            java.lang.String r2 = "mActions"
            r3 = 26
            if (r0 < r3) goto L34
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r3) goto L34
            java.lang.Class<android.support.v4.app.NotificationCompat$Builder> r0 = android.support.v4.app.NotificationCompat.Builder.class
            java.lang.reflect.Field r0 = r0.getDeclaredField(r2)     // Catch: java.lang.Exception -> L56
            r0.setAccessible(r1)     // Catch: java.lang.Exception -> L56
            android.support.v4.app.NotificationCompat$Builder r1 = r4.h     // Catch: java.lang.Exception -> L56
            android.support.v4.app.NotificationCompat$Builder r2 = r4.h     // Catch: java.lang.Exception -> L56
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Exception -> L56
            java.lang.Class r2 = r2.getClass()     // Catch: java.lang.Exception -> L56
            java.lang.Object r2 = r2.newInstance()     // Catch: java.lang.Exception -> L56
            r0.set(r1, r2)     // Catch: java.lang.Exception -> L56
            goto L56
        L34:
            int r0 = android.os.Build.VERSION.SDK_INT
            r3 = 16
            if (r0 < r3) goto L56
            java.lang.Class<android.app.Notification$Builder> r0 = android.app.Notification.Builder.class
            java.lang.reflect.Field r0 = r0.getDeclaredField(r2)     // Catch: java.lang.Exception -> L56
            r0.setAccessible(r1)     // Catch: java.lang.Exception -> L56
            android.app.Notification$Builder r1 = r4.g     // Catch: java.lang.Exception -> L56
            android.app.Notification$Builder r2 = r4.g     // Catch: java.lang.Exception -> L56
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Exception -> L56
            java.lang.Class r2 = r2.getClass()     // Catch: java.lang.Exception -> L56
            java.lang.Object r2 = r2.newInstance()     // Catch: java.lang.Exception -> L56
            r0.set(r1, r2)     // Catch: java.lang.Exception -> L56
        L56:
            return
    }
}
