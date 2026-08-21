package com.meizu.cloud.pushsdk.handler.a.e;

public class b extends com.meizu.cloud.pushsdk.handler.a.a<java.lang.String> {
    public b(android.content.Context r1, com.meizu.cloud.pushsdk.handler.a r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public int a() {
            r1 = this;
            r0 = 16384(0x4000, float:2.2959E-41)
            return r0
    }

    @Override
    protected void a(java.lang.String r1, com.meizu.cloud.pushsdk.notification.c r2) {
            r0 = this;
            java.lang.String r1 = (java.lang.String) r1
            r0.a(r1, r2)
            return
    }

    protected void a(java.lang.String r2, com.meizu.cloud.pushsdk.notification.c r3) {
            r1 = this;
            com.meizu.cloud.pushsdk.handler.a r3 = r1.c()
            if (r3 == 0) goto L13
            if (r2 == 0) goto L13
            com.meizu.cloud.pushsdk.handler.a r3 = r1.c()
            android.content.Context r0 = r1.d()
            r3.c(r0, r2)
        L13:
            return
    }

    @Override
    public boolean a(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = "AbstractMessageHandler"
            java.lang.String r1 = "start ReceiveNotifyMessageHandler match"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            java.lang.String r0 = r3.getAction()
            java.lang.String r1 = "com.meizu.flyme.push.intent.MESSAGE"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L21
            java.lang.String r3 = r2.k(r3)
            java.lang.String r0 = "response_notification_message"
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
    protected java.lang.String c(android.content.Intent r1) {
            r0 = this;
            java.lang.String r1 = r0.l(r1)
            return r1
    }

    protected java.lang.String l(android.content.Intent r2) {
            r1 = this;
            java.lang.String r0 = "extra_app_push_response_notification_message"
            java.lang.String r2 = r2.getStringExtra(r0)
            return r2
    }
}
