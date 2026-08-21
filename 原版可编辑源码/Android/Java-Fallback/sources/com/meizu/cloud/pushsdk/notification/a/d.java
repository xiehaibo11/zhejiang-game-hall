package com.meizu.cloud.pushsdk.notification.a;

public class d extends com.meizu.cloud.pushsdk.notification.a.c {


    public d(android.content.Context r1, com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected void a(android.app.Notification.Builder r3, com.meizu.cloud.pushsdk.handler.MessageV3 r4) {
            r2 = this;
            boolean r0 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportNotificationBuild()
            if (r0 == 0) goto L20
            android.app.Notification$BigTextStyle r0 = new android.app.Notification$BigTextStyle
            r0.<init>()
            java.lang.String r1 = r4.getTitle()
            r0.setBigContentTitle(r1)
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r4 = r4.getNotificationStyle()
            java.lang.String r4 = r4.getExpandableText()
            r0.bigText(r4)
            r3.setStyle(r0)
        L20:
            return
    }

    @Override
    protected void a(android.app.Notification r6, com.meizu.cloud.pushsdk.handler.MessageV3 r7) {
            r5 = this;
            super.a(r6, r7)
            com.meizu.cloud.pushsdk.handler.MessageV4 r0 = com.meizu.cloud.pushsdk.handler.MessageV4.parse(r7)
            com.meizu.cloud.pushsdk.notification.model.ActVideoSetting r1 = r0.getActVideoSetting()
            java.lang.String r2 = "only wifi can download act"
            java.lang.String r3 = "AbstractPushNotification"
            if (r1 != 0) goto L15
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r2)
            return
        L15:
            com.meizu.cloud.pushsdk.notification.model.ActVideoSetting r1 = r0.getActVideoSetting()
            boolean r1 = r1.isWifiDisplay()
            if (r1 == 0) goto L2b
            android.content.Context r1 = r5.a
            boolean r1 = com.meizu.cloud.pushsdk.util.a.b(r1)
            if (r1 != 0) goto L2b
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r2)
            return
        L2b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.io.File r2 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r2 = r2.getAbsolutePath()
            r1.append(r2)
            java.lang.String r2 = "/Android/data/pushSdkAct/"
            r1.append(r2)
            java.lang.String r7 = r7.getUploadDataPackageName()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            com.meizu.cloud.pushsdk.notification.model.ActVideoSetting r0 = r0.getActVideoSetting()
            java.lang.String r0 = r0.getActUrl()
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto Lf9
            com.meizu.cloud.pushsdk.c.a.b$a r2 = com.meizu.cloud.pushsdk.c.a.a(r0, r7, r1)
            com.meizu.cloud.pushsdk.c.a.b r2 = r2.a()
            com.meizu.cloud.pushsdk.c.a.c r2 = r2.c()
            boolean r2 = r2.b()
            if (r2 == 0) goto Lf9
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "down load "
            r2.append(r4)
            r2.append(r0)
            java.lang.String r0 = " success"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r7)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = "ACT-"
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            java.lang.String r4 = java.io.File.separator
            r2.append(r4)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.meizu.cloud.pushsdk.notification.c.e r2 = new com.meizu.cloud.pushsdk.notification.c.e
            r2.<init>(r1, r0)
            boolean r1 = r2.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "zip file "
            r2.append(r4)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r2)
            if (r1 == 0) goto Lf9
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            java.lang.String r2 = "path"
            r1.putString(r2, r0)
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r2 = "big"
            r0.putBundle(r2, r1)
            boolean r1 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportVideoNotification()
            if (r1 == 0) goto Lf9
            android.os.Bundle r6 = r6.extras
            java.lang.String r1 = "flyme.active"
            r6.putBundle(r1, r0)
        Lf9:
            com.meizu.cloud.pushsdk.notification.a.d$1 r6 = new com.meizu.cloud.pushsdk.notification.a.d$1
            r6.<init>(r5, r7)
            com.meizu.cloud.pushsdk.d.b.a.b.a(r6)
            return
    }
}
