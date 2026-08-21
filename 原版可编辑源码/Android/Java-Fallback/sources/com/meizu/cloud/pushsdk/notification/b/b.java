package com.meizu.cloud.pushsdk.notification.b;

public class b extends com.meizu.cloud.pushsdk.notification.b.c {
    public b(android.content.Context r1, com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected void a(android.app.Notification r5, com.meizu.cloud.pushsdk.handler.MessageV3 r6, android.app.PendingIntent r7) {
            r4 = this;
            boolean r7 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportNotificationBuild()
            if (r7 == 0) goto L67
            android.widget.RemoteViews r7 = new android.widget.RemoteViews
            android.content.Context r0 = r4.a
            java.lang.String r0 = r0.getPackageName()
            android.content.Context r1 = r4.a
            int r1 = com.meizu.cloud.pushsdk.notification.c.c.b(r1)
            r7.<init>(r0, r1)
            android.content.Context r0 = r4.a
            int r0 = com.meizu.cloud.pushsdk.notification.c.c.d(r0)
            java.lang.String r1 = r6.getTitle()
            r7.setTextViewText(r0, r1)
            android.content.Context r0 = r4.a
            int r0 = com.meizu.cloud.pushsdk.notification.c.c.f(r0)
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.String r3 = "setTime"
            r7.setLong(r0, r3, r1)
            r4.a(r7, r6)
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r0 = r6.getNotificationStyle()
            if (r0 == 0) goto L65
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r0 = r6.getNotificationStyle()
            java.lang.String r0 = r0.getExpandableText()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L65
            android.content.Context r0 = r4.a
            int r0 = com.meizu.cloud.pushsdk.notification.c.c.h(r0)
            r1 = 0
            r7.setViewVisibility(r0, r1)
            android.content.Context r0 = r4.a
            int r0 = com.meizu.cloud.pushsdk.notification.c.c.h(r0)
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r6 = r6.getNotificationStyle()
            java.lang.String r6 = r6.getExpandableText()
            r7.setTextViewText(r0, r6)
        L65:
            r5.bigContentView = r7
        L67:
            return
    }
}
