package com.meizu.cloud.pushsdk.handler.a.a;

public class a {
    private android.content.Context a;
    private com.meizu.cloud.pushsdk.b.a.a b;
    private int c;
    private android.app.Notification d;


    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    private void a(int r1, android.app.Notification r2) {
            r0 = this;
            r0.c = r1
            r0.d = r2
            return
    }

    private void b() {
            r2 = this;
            r0 = 0
            r2.c = r0
            r0 = 0
            r2.d = r0
            com.meizu.cloud.pushsdk.b.a.a r1 = r2.b
            if (r1 == 0) goto L1a
            r1.b()     // Catch: java.lang.Throwable -> L10 java.lang.Exception -> L12
        Ld:
            r2.b = r0
            goto L1a
        L10:
            r1 = move-exception
            goto L17
        L12:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L10
            goto Ld
        L17:
            r2.b = r0
            throw r1
        L1a:
            return
    }

    private void b(int r6) {
            r5 = this;
            if (r6 > 0) goto L3
            return
        L3:
            com.meizu.cloud.pushsdk.b.a.a r0 = r5.b
            if (r0 == 0) goto L18
            r1 = 0
            r0.b()     // Catch: java.lang.Throwable -> Le java.lang.Exception -> L10
        Lb:
            r5.b = r1
            goto L18
        Le:
            r6 = move-exception
            goto L15
        L10:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> Le
            goto Lb
        L15:
            r5.b = r1
            throw r6
        L18:
            com.meizu.cloud.pushsdk.b.a.a r0 = new com.meizu.cloud.pushsdk.b.a.a
            android.content.Context r1 = r5.a
            com.meizu.cloud.pushsdk.handler.a.a.a$1 r2 = new com.meizu.cloud.pushsdk.handler.a.a.a$1
            r2.<init>(r5)
            int r6 = r6 * 60
            int r6 = r6 * 1000
            long r3 = (long) r6
            r0.<init>(r1, r2, r3)
            r5.b = r0
            r0.a()
            return
    }

    public void a() {
            r4 = this;
            java.lang.String r0 = "AdNotification"
            int r1 = r4.c
            if (r1 <= 0) goto L52
            android.app.Notification r1 = r4.d
            if (r1 != 0) goto Lb
            goto L52
        Lb:
            android.content.Context r1 = r4.a     // Catch: java.lang.Exception -> L33
            java.lang.String r2 = "notification"
            java.lang.Object r1 = r1.getSystemService(r2)     // Catch: java.lang.Exception -> L33
            android.app.NotificationManager r1 = (android.app.NotificationManager) r1     // Catch: java.lang.Exception -> L33
            int r2 = r4.c     // Catch: java.lang.Exception -> L33
            android.app.Notification r3 = r4.d     // Catch: java.lang.Exception -> L33
            r1.notify(r2, r3)     // Catch: java.lang.Exception -> L33
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L33
            r1.<init>()     // Catch: java.lang.Exception -> L33
            java.lang.String r2 = "again show old ad notification, notifyId:"
            r1.append(r2)     // Catch: java.lang.Exception -> L33
            int r2 = r4.c     // Catch: java.lang.Exception -> L33
            r1.append(r2)     // Catch: java.lang.Exception -> L33
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L33
            com.meizu.cloud.pushinternal.DebugLogger.d(r0, r1)     // Catch: java.lang.Exception -> L33
            goto L4f
        L33:
            r1 = move-exception
            r1.printStackTrace()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "again show old ad notification error:"
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r1)
        L4f:
            r4.b()
        L52:
            return
    }

    public void a(int r3) {
            r2 = this;
            if (r3 <= 0) goto L22
            int r0 = r2.c
            if (r0 <= 0) goto L22
            if (r3 == r0) goto L9
            goto L22
        L9:
            r2.b()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "clean ad notification, notifyId:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "AdNotification"
            com.meizu.cloud.pushinternal.DebugLogger.d(r0, r3)
        L22:
            return
    }

    public void a(int r1, android.app.Notification r2, int r3) {
            r0 = this;
            if (r1 <= 0) goto L21
            if (r2 != 0) goto L5
            goto L21
        L5:
            r0.a(r1, r2)
            r0.b(r3)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "save ad notification, notifyId:"
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "AdNotification"
            com.meizu.cloud.pushinternal.DebugLogger.d(r2, r1)
        L21:
            return
    }

    public void a(com.meizu.cloud.pushsdk.handler.MessageV3 r5) {
            r4 = this;
            com.meizu.cloud.pushsdk.notification.model.AdvanceSetting r0 = r5.getAdvanceSetting()
            r1 = 0
            if (r0 == 0) goto L1c
            com.meizu.cloud.pushsdk.notification.model.NotifyType r2 = r0.getNotifyType()
            r2.setSound(r1)
            com.meizu.cloud.pushsdk.notification.model.NotifyType r2 = r0.getNotifyType()
            r2.setLights(r1)
            com.meizu.cloud.pushsdk.notification.model.NotifyType r2 = r0.getNotifyType()
            r2.setVibrate(r1)
        L1c:
            com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx r5 = r5.getAdvanceSettingEx()
            if (r5 == 0) goto L3c
            r2 = 0
            r5.setSoundTitle(r2)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 29
            if (r2 < r3) goto L39
            if (r0 == 0) goto L39
            boolean r0 = r0.isHeadUpNotification()
            if (r0 == 0) goto L39
            r0 = 1
            r5.setPriorityDisplay(r0)
            goto L3c
        L39:
            r5.setPriorityDisplay(r1)
        L3c:
            return
    }
}
