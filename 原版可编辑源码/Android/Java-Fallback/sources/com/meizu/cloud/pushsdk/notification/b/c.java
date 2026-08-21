package com.meizu.cloud.pushsdk.notification.b;

public class c extends com.meizu.cloud.pushsdk.notification.a {
    public c(android.content.Context r1, com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected void a(android.app.Notification r6, com.meizu.cloud.pushsdk.handler.MessageV3 r7) {
            r5 = this;
            boolean r0 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportNotificationBuild()
            if (r0 == 0) goto L59
            android.widget.RemoteViews r0 = new android.widget.RemoteViews
            android.content.Context r1 = r5.a
            java.lang.String r1 = r1.getPackageName()
            android.content.Context r2 = r5.a
            int r2 = com.meizu.cloud.pushsdk.notification.c.c.a(r2)
            r0.<init>(r1, r2)
            android.content.Context r1 = r5.a
            int r1 = com.meizu.cloud.pushsdk.notification.c.c.d(r1)
            java.lang.String r2 = r7.getTitle()
            r0.setTextViewText(r1, r2)
            android.content.Context r1 = r5.a
            int r1 = com.meizu.cloud.pushsdk.notification.c.c.e(r1)
            java.lang.String r2 = r7.getContent()
            r0.setTextViewText(r1, r2)
            android.content.Context r1 = r5.a
            int r1 = com.meizu.cloud.pushsdk.notification.c.c.f(r1)
            long r2 = java.lang.System.currentTimeMillis()
            java.lang.String r4 = "setTime"
            r0.setLong(r1, r4, r2)
            r5.a(r0, r7)
            android.content.Context r7 = r5.a
            int r7 = com.meizu.cloud.pushsdk.notification.c.c.g(r7)
            r1 = 8
            r0.setViewVisibility(r7, r1)
            android.content.Context r7 = r5.a
            int r7 = com.meizu.cloud.pushsdk.notification.c.c.h(r7)
            r0.setViewVisibility(r7, r1)
            r6.contentView = r0
        L59:
            return
    }

    protected void a(android.widget.RemoteViews r3, com.meizu.cloud.pushsdk.handler.MessageV3 r4) {
            r2 = this;
            com.meizu.cloud.pushsdk.notification.model.AppIconSetting r0 = r4.getAppIconSetting()
            if (r0 == 0) goto L2e
            boolean r0 = r2.a()
            if (r0 != 0) goto L2e
            com.meizu.cloud.pushsdk.notification.model.AppIconSetting r0 = r4.getAppIconSetting()
            boolean r0 = r0.isDefaultLargeIcon()
            if (r0 != 0) goto L2e
            com.meizu.cloud.pushsdk.notification.model.AppIconSetting r0 = r4.getAppIconSetting()
            java.lang.String r0 = r0.getLargeIconUrl()
            android.graphics.Bitmap r0 = r2.a(r0)
            if (r0 == 0) goto L2e
            android.content.Context r4 = r2.a
            int r4 = com.meizu.cloud.pushsdk.notification.c.c.k(r4)
            r3.setImageViewBitmap(r4, r0)
            goto L41
        L2e:
            android.content.Context r0 = r2.a
            int r0 = com.meizu.cloud.pushsdk.notification.c.c.k(r0)
            android.content.Context r1 = r2.a
            java.lang.String r4 = r4.getUploadDataPackageName()
            android.graphics.Bitmap r4 = r2.a(r1, r4)
            r3.setImageViewBitmap(r0, r4)
        L41:
            return
    }
}
