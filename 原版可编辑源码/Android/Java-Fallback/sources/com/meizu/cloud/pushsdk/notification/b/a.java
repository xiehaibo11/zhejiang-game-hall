package com.meizu.cloud.pushsdk.notification.b;

public class a extends com.meizu.cloud.pushsdk.notification.b.c {
    public a(android.content.Context r1, com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private void b(android.widget.RemoteViews r3, com.meizu.cloud.pushsdk.handler.MessageV3 r4) {
            r2 = this;
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r0 = r4.getNotificationStyle()
            if (r0 == 0) goto L47
            boolean r0 = r2.a()
            if (r0 != 0) goto L47
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r0 = r4.getNotificationStyle()
            java.lang.String r0 = r0.getExpandableImageUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 8
            if (r0 != 0) goto L3e
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r4 = r4.getNotificationStyle()
            java.lang.String r4 = r4.getExpandableImageUrl()
            android.graphics.Bitmap r4 = r2.a(r4)
            if (r4 == 0) goto L3e
            android.content.Context r0 = r2.a
            int r0 = com.meizu.cloud.pushsdk.notification.c.c.g(r0)
            r1 = 0
            r3.setViewVisibility(r0, r1)
            android.content.Context r0 = r2.a
            int r0 = com.meizu.cloud.pushsdk.notification.c.c.g(r0)
            r3.setImageViewBitmap(r0, r4)
            goto L47
        L3e:
            android.content.Context r4 = r2.a
            int r4 = com.meizu.cloud.pushsdk.notification.c.c.g(r4)
            r3.setViewVisibility(r4, r1)
        L47:
            return
    }

    @Override
    protected void a(android.app.Notification r5, com.meizu.cloud.pushsdk.handler.MessageV3 r6, android.app.PendingIntent r7) {
            r4 = this;
            boolean r7 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportNotificationBuild()
            if (r7 == 0) goto L48
            android.widget.RemoteViews r7 = new android.widget.RemoteViews
            android.content.Context r0 = r4.a
            java.lang.String r0 = r0.getPackageName()
            android.content.Context r1 = r4.a
            int r1 = com.meizu.cloud.pushsdk.notification.c.c.a(r1)
            r7.<init>(r0, r1)
            android.content.Context r0 = r4.a
            int r0 = com.meizu.cloud.pushsdk.notification.c.c.d(r0)
            java.lang.String r1 = r6.getTitle()
            r7.setTextViewText(r0, r1)
            android.content.Context r0 = r4.a
            int r0 = com.meizu.cloud.pushsdk.notification.c.c.e(r0)
            java.lang.String r1 = r6.getContent()
            r7.setTextViewText(r0, r1)
            android.content.Context r0 = r4.a
            int r0 = com.meizu.cloud.pushsdk.notification.c.c.f(r0)
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.String r3 = "setTime"
            r7.setLong(r0, r3, r1)
            r4.a(r7, r6)
            r4.b(r7, r6)
            r5.bigContentView = r7
        L48:
            return
    }
}
