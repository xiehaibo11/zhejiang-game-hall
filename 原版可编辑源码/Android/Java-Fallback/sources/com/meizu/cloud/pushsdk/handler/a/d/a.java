package com.meizu.cloud.pushsdk.handler.a.d;

public class a extends com.meizu.cloud.pushsdk.handler.a.a<com.meizu.cloud.pushsdk.handler.MessageV3> {
    public a(android.content.Context r1, com.meizu.cloud.pushsdk.handler.a r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public int a() {
            r1 = this;
            r0 = 131072(0x20000, float:1.83671E-40)
            return r0
    }

    protected void a(com.meizu.cloud.pushsdk.handler.MessageV3 r2, com.meizu.cloud.pushsdk.notification.c r3) {
            r1 = this;
            com.meizu.cloud.pushsdk.handler.a r3 = r1.c()
            if (r3 == 0) goto L17
            if (r2 == 0) goto L17
            com.meizu.cloud.pushsdk.handler.a r3 = r1.c()
            android.content.Context r0 = r1.d()
            com.meizu.cloud.pushsdk.handler.MzPushMessage r2 = com.meizu.cloud.pushsdk.handler.MzPushMessage.fromMessageV3(r2)
            r3.b(r0, r2)
        L17:
            return
    }

    @Override
    protected void a(com.meizu.cloud.pushsdk.handler.MessageV3 r1, com.meizu.cloud.pushsdk.notification.c r2) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            r0.a(r1, r2)
            return
    }

    @Override
    public boolean a(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = "AbstractMessageHandler"
            java.lang.String r1 = "start NotificationArrivedHandler match"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            java.lang.String r0 = r3.getAction()
            java.lang.String r1 = "com.meizu.flyme.push.intent.MESSAGE"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L21
            java.lang.String r3 = r2.k(r3)
            java.lang.String r0 = "notification_arrived"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L21
            r3 = 1
            goto L22
        L21:
            r3 = 0
        L22:
            return r3
    }

    @Override
    protected com.meizu.cloud.pushsdk.handler.MessageV3 c(android.content.Intent r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = r0.l(r1)
            return r1
    }

    protected com.meizu.cloud.pushsdk.handler.MessageV3 l(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = "messageValue"
            java.lang.String r0 = r3.getStringExtra(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L11
            com.meizu.cloud.pushsdk.handler.MessageV3 r3 = com.meizu.cloud.pushsdk.handler.d.a(r0)
            return r3
        L11:
            java.lang.String r0 = "pushMessage"
            android.os.Parcelable r3 = r3.getParcelableExtra(r0)
            com.meizu.cloud.pushsdk.handler.MessageV3 r3 = (com.meizu.cloud.pushsdk.handler.MessageV3) r3
            return r3
    }
}
