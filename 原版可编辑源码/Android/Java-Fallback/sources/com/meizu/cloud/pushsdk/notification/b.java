package com.meizu.cloud.pushsdk.notification;

public class b extends com.meizu.cloud.pushsdk.notification.b.c {
    public b(android.content.Context r1, com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected void a(android.app.Notification r7, com.meizu.cloud.pushsdk.handler.MessageV3 r8, android.app.PendingIntent r9) {
            r6 = this;
            boolean r0 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportNotificationBuild()
            if (r0 == 0) goto Lc3
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r0 = r8.getNotificationStyle()
            java.lang.String r0 = r0.getBannerImageUrl()
            android.graphics.Bitmap r0 = r6.a(r0)
            boolean r1 = r6.a()
            if (r1 != 0) goto Lc3
            if (r0 == 0) goto Lc3
            android.widget.RemoteViews r1 = new android.widget.RemoteViews
            android.content.Context r2 = r6.a
            java.lang.String r2 = r2.getPackageName()
            android.content.Context r3 = r6.a
            int r3 = com.meizu.cloud.pushsdk.notification.c.c.c(r3)
            r1.<init>(r2, r3)
            android.content.Context r2 = r6.a
            int r2 = com.meizu.cloud.pushsdk.notification.c.c.i(r2)
            r1.setImageViewBitmap(r2, r0)
            android.content.Context r0 = r6.a
            int r0 = com.meizu.cloud.pushsdk.notification.c.c.j(r0)
            r2 = 8
            r1.setViewVisibility(r0, r2)
            android.content.Context r0 = r6.a
            int r0 = com.meizu.cloud.pushsdk.notification.c.c.i(r0)
            r3 = 0
            r1.setViewVisibility(r0, r3)
            r7.contentView = r1
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r0 = r8.getNotificationStyle()
            int r0 = r0.getInnerStyle()
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r1 = com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.EXPANDABLE_PIC
            int r1 = r1.getCode()
            if (r0 != r1) goto Lc3
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r0 = r8.getNotificationStyle()
            java.lang.String r0 = r0.getExpandableImageUrl()
            android.graphics.Bitmap r0 = r6.a(r0)
            boolean r1 = r6.a()
            if (r1 != 0) goto Lc3
            if (r0 == 0) goto Lc3
            android.widget.RemoteViews r1 = new android.widget.RemoteViews
            android.content.Context r4 = r6.a
            java.lang.String r4 = r4.getPackageName()
            android.content.Context r5 = r6.a
            int r5 = com.meizu.cloud.pushsdk.notification.c.c.c(r5)
            r1.<init>(r4, r5)
            android.content.Context r4 = r6.a
            int r4 = com.meizu.cloud.pushsdk.notification.c.c.j(r4)
            r1.setImageViewBitmap(r4, r0)
            android.content.Context r0 = r6.a
            int r0 = com.meizu.cloud.pushsdk.notification.c.c.j(r0)
            r1.setViewVisibility(r0, r3)
            android.content.Context r0 = r6.a
            int r0 = com.meizu.cloud.pushsdk.notification.c.c.i(r0)
            r1.setViewVisibility(r0, r2)
            r7.bigContentView = r1
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r7 = r8.getAdvertisementOption()
            if (r7 == 0) goto Lc3
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r7 = r8.getAdvertisementOption()
            java.lang.String r7 = r7.getAdInstallPackage()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto Lc3
            android.content.Context r7 = r6.a
            int r7 = com.meizu.cloud.pushsdk.notification.c.c.m(r7)
            r1.setViewVisibility(r7, r3)
            android.content.Context r7 = r6.a
            int r7 = com.meizu.cloud.pushsdk.notification.c.c.m(r7)
            r1.setOnClickPendingIntent(r7, r9)
        Lc3:
            return
    }
}
