package com.meizu.cloud.pushsdk.notification;

public class d extends com.meizu.cloud.pushsdk.notification.a {
    public d(android.content.Context r1, com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected void a(android.app.Notification.Builder r3, com.meizu.cloud.pushsdk.handler.MessageV3 r4) {
            r2 = this;
            boolean r0 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportNotificationBuild()
            if (r0 == 0) goto L1c
            android.app.Notification$BigTextStyle r0 = new android.app.Notification$BigTextStyle
            r0.<init>()
            java.lang.String r1 = r4.getTitle()
            r0.setBigContentTitle(r1)
            java.lang.String r4 = r4.getContent()
            r0.bigText(r4)
            r3.setStyle(r0)
        L1c:
            return
    }
}
