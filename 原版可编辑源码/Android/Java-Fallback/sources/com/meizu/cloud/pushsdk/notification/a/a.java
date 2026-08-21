package com.meizu.cloud.pushsdk.notification.a;

public class a extends com.meizu.cloud.pushsdk.notification.a.c {
    public a(android.content.Context r1, com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected void a(android.app.Notification.Builder r3, com.meizu.cloud.pushsdk.handler.MessageV3 r4) {
            r2 = this;
            boolean r0 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportNotificationBuild()
            if (r0 == 0) goto L40
            android.app.Notification$BigPictureStyle r0 = new android.app.Notification$BigPictureStyle
            r0.<init>()
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r1 = r4.getNotificationStyle()
            if (r1 == 0) goto L40
            boolean r1 = r2.a()
            if (r1 != 0) goto L40
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r1 = r4.getNotificationStyle()
            java.lang.String r1 = r1.getExpandableImageUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L40
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r1 = r4.getNotificationStyle()
            java.lang.String r1 = r1.getExpandableImageUrl()
            android.graphics.Bitmap r1 = r2.a(r1)
            if (r1 == 0) goto L40
            java.lang.String r4 = r4.getTitle()
            r0.setBigContentTitle(r4)
            r0.bigPicture(r1)
            r3.setStyle(r0)
        L40:
            return
    }
}
