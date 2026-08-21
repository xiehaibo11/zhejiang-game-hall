package com.meizu.cloud.pushsdk.handler.a.f;

public class a {
    private android.content.Context a;
    private java.util.List<android.content.Intent> b;
    private android.content.BroadcastReceiver c;



    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.a = r1
            r0.b()
            return
    }

    static android.content.Context a(com.meizu.cloud.pushsdk.handler.a.f.a r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    private void a() {
            r5 = this;
            java.util.List<android.content.Intent> r0 = r5.b
            if (r0 == 0) goto L34
            int r0 = r0.size()
            if (r0 != 0) goto Lb
            goto L34
        Lb:
            java.util.List<android.content.Intent> r0 = r5.b
            int r0 = r0.size()
            r1 = 0
            java.util.List<android.content.Intent> r2 = r5.b
            java.util.Iterator r2 = r2.iterator()
        L18:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L34
            java.lang.Object r3 = r2.next()
            android.content.Intent r3 = (android.content.Intent) r3
            int r4 = r0 + (-1)
            if (r1 == r4) goto L2b
            r5.b(r3)
        L2b:
            r5.a(r3)
            r2.remove()
            int r1 = r1 + 1
            goto L18
        L34:
            return
    }

    private void a(android.content.Intent r3) {
            r2 = this;
            com.meizu.cloud.pushsdk.b.c.c r0 = com.meizu.cloud.pushsdk.b.c.c.a()
            com.meizu.cloud.pushsdk.handler.a.f.a$1 r1 = new com.meizu.cloud.pushsdk.handler.a.f.a$1
            r1.<init>(r2, r3)
            r0.execute(r1)
            return
    }

    private void b() {
            r3 = this;
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            java.lang.String r1 = "android.intent.action.USER_PRESENT"
            r0.addAction(r1)
            android.content.BroadcastReceiver r1 = r3.c
            if (r1 != 0) goto L15
            com.meizu.cloud.pushsdk.handler.a.f.a$2 r1 = new com.meizu.cloud.pushsdk.handler.a.f.a$2
            r1.<init>(r3)
            r3.c = r1
        L15:
            android.content.Context r1 = r3.a
            android.content.BroadcastReceiver r2 = r3.c
            r1.registerReceiver(r2, r0)
            return
    }

    private void b(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = "extra_app_push_bright_notification_message"
            android.os.Parcelable r3 = r3.getParcelableExtra(r0)
            com.meizu.cloud.pushsdk.handler.MessageV3 r3 = (com.meizu.cloud.pushsdk.handler.MessageV3) r3
            if (r3 != 0) goto Lb
            return
        Lb:
            com.meizu.cloud.pushsdk.notification.model.AdvanceSetting r0 = r3.getAdvanceSetting()
            com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx r3 = r3.getAdvanceSettingEx()
            if (r0 == 0) goto L32
            if (r3 != 0) goto L18
            goto L32
        L18:
            r1 = 0
            r3.setSoundTitle(r1)
            com.meizu.cloud.pushsdk.notification.model.NotifyType r3 = r0.getNotifyType()
            r1 = 0
            r3.setSound(r1)
            com.meizu.cloud.pushsdk.notification.model.NotifyType r3 = r0.getNotifyType()
            r3.setLights(r1)
            com.meizu.cloud.pushsdk.notification.model.NotifyType r3 = r0.getNotifyType()
            r3.setVibrate(r1)
        L32:
            return
    }

    static void b(com.meizu.cloud.pushsdk.handler.a.f.a r0) {
            r0.a()
            return
    }

    public void a(android.content.Intent r5, java.lang.String r6) {
            r4 = this;
            if (r5 == 0) goto L62
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L9
            goto L62
        L9:
            java.util.List<android.content.Intent> r0 = r4.b
            if (r0 != 0) goto L15
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            r4.b = r6
            goto L45
        L15:
            java.util.Iterator r0 = r0.iterator()
        L19:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L45
            java.lang.Object r1 = r0.next()
            android.content.Intent r1 = (android.content.Intent) r1
            java.lang.String r2 = "extra_app_push_bright_notification_message"
            android.os.Parcelable r2 = r1.getParcelableExtra(r2)
            com.meizu.cloud.pushsdk.handler.MessageV3 r2 = (com.meizu.cloud.pushsdk.handler.MessageV3) r2
            if (r2 == 0) goto L19
            java.lang.String r3 = r2.getUploadDataPackageName()
            if (r3 != 0) goto L36
            goto L19
        L36:
            java.lang.String r2 = r2.getUploadDataPackageName()
            boolean r2 = r6.equalsIgnoreCase(r2)
            if (r2 == 0) goto L19
            java.util.List<android.content.Intent> r6 = r4.b
            r6.remove(r1)
        L45:
            java.util.List<android.content.Intent> r6 = r4.b
            r6.add(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "add bright notification intent, intent list: "
            r5.append(r6)
            java.util.List<android.content.Intent> r6 = r4.b
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "BrightNotification"
            com.meizu.cloud.pushinternal.DebugLogger.d(r6, r5)
        L62:
            return
    }
}
