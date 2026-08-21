package com.igexin.push.extension.distribution.basic.g;

public class f {
    public static void a(android.app.NotificationManager r2, int r3, android.app.Notification r4, int r5, com.igexin.push.extension.distribution.basic.b.a r6) {
            int r5 = r4.icon     // Catch: java.lang.Throwable -> L48
            r0 = 0
            if (r5 == 0) goto L31
            android.content.Context r5 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L48
            android.content.res.Resources r5 = r5.getResources()     // Catch: java.lang.Throwable -> L48
            int r1 = r4.icon     // Catch: java.lang.Throwable -> L48
            android.graphics.drawable.Drawable r5 = r5.getDrawable(r1)     // Catch: java.lang.Throwable -> L48
            if (r5 != 0) goto L31
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L48
            r2.<init>()     // Catch: java.lang.Throwable -> L48
            java.lang.String r3 = "NotificationShow|showNotification smallIconId: "
            r2.append(r3)     // Catch: java.lang.Throwable -> L48
            int r3 = r4.icon     // Catch: java.lang.Throwable -> L48
            r2.append(r3)     // Catch: java.lang.Throwable -> L48
            java.lang.String r3 = " couldn't find resource"
            r2.append(r3)     // Catch: java.lang.Throwable -> L48
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L48
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L48
            com.igexin.b.a.c.b.a(r2, r3)     // Catch: java.lang.Throwable -> L48
            return
        L31:
            int r5 = r6.A()     // Catch: java.lang.Throwable -> L48
            if (r5 <= 0) goto L45
            int r5 = r6.A()     // Catch: java.lang.Throwable -> L48
            com.igexin.push.extension.distribution.basic.g.d.a(r5, r0)     // Catch: java.lang.Throwable -> L48
            int r5 = r6.A()     // Catch: java.lang.Throwable -> L48
            com.igexin.push.extension.distribution.basic.g.d.a(r5, r4)     // Catch: java.lang.Throwable -> L48
        L45:
            r2.notify(r3, r4)     // Catch: java.lang.Throwable -> L48
        L48:
            return
    }
}
