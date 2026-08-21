package com.meizu.cloud.pushsdk.notification.a;

public class c extends com.meizu.cloud.pushsdk.notification.a {
    public c(android.content.Context r1, com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected void b(android.app.Notification.Builder r5, com.meizu.cloud.pushsdk.handler.MessageV3 r6) {
            r4 = this;
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isInternational()
            if (r0 == 0) goto Ld
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isMeizuAndFlyme()
            if (r0 != 0) goto Ld
            return
        Ld:
            com.meizu.cloud.pushsdk.notification.model.AppIconSetting r0 = r6.getAppIconSetting()
            if (r0 == 0) goto L8f
            boolean r1 = r0.isDefaultLargeIcon()
            java.lang.String r2 = "AbstractPushNotification"
            if (r1 == 0) goto L5f
            com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r0 = r4.b
            if (r0 == 0) goto L3a
            com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r0 = r4.b
            int r0 = r0.getLargeIcon()
            if (r0 == 0) goto L3a
            android.content.Context r6 = r4.a
            android.content.res.Resources r6 = r6.getResources()
            com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r0 = r4.b
            int r0 = r0.getLargeIcon()
            android.graphics.Bitmap r6 = android.graphics.BitmapFactory.decodeResource(r6, r0)
            java.lang.String r0 = "set largeIcon by resource id"
            goto L5b
        L3a:
            com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r0 = r4.b
            if (r0 == 0) goto L4f
            com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r0 = r4.b
            android.graphics.Bitmap r0 = r0.getAppLargeIcon()
            if (r0 == 0) goto L4f
            com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r6 = r4.b
            android.graphics.Bitmap r6 = r6.getAppLargeIcon()
            java.lang.String r0 = "set largeIcon by bitmap provided by user setting"
            goto L5b
        L4f:
            android.content.Context r0 = r4.a
            java.lang.String r6 = r6.getUploadDataPackageName()
            android.graphics.Bitmap r6 = r4.a(r0, r6)
            java.lang.String r0 = "set largeIcon by package default large icon"
        L5b:
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r0)
            goto L8c
        L5f:
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            android.content.Context r3 = r4.a
            android.os.Looper r3 = r3.getMainLooper()
            java.lang.Thread r3 = r3.getThread()
            if (r1 == r3) goto L8f
            java.lang.String r0 = r0.getLargeIconUrl()
            android.graphics.Bitmap r0 = r4.a(r0)
            if (r0 == 0) goto L82
            java.lang.String r6 = "On other Thread down load largeIcon image success"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r6)
            r5.setLargeIcon(r0)
            goto L8f
        L82:
            android.content.Context r0 = r4.a
            java.lang.String r6 = r6.getUploadDataPackageName()
            android.graphics.Bitmap r6 = r4.a(r0, r6)
        L8c:
            r5.setLargeIcon(r6)
        L8f:
            return
    }
}
