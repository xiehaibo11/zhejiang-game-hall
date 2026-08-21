package com.meizu.cloud.pushsdk.handler.a.e;

public class a extends com.meizu.cloud.pushsdk.handler.a.a<com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus> {
    public a(android.content.Context r1, com.meizu.cloud.pushsdk.handler.a r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public int a() {
            r1 = this;
            r0 = 256(0x100, float:3.59E-43)
            return r0
    }

    protected void a(com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r2, com.meizu.cloud.pushsdk.notification.c r3) {
            r1 = this;
            com.meizu.cloud.pushsdk.handler.a r3 = r1.c()
            if (r3 == 0) goto L13
            if (r2 == 0) goto L13
            com.meizu.cloud.pushsdk.handler.a r3 = r1.c()
            android.content.Context r0 = r1.d()
            r3.a(r0, r2)
        L13:
            return
    }

    @Override
    protected void a(com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r1, com.meizu.cloud.pushsdk.notification.c r2) {
            r0 = this;
            com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r1 = (com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus) r1
            r0.a(r1, r2)
            return
    }

    @Override
    public boolean a(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = "AbstractMessageHandler"
            java.lang.String r1 = "start PushSwitchStatusHandler match"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            java.lang.String r0 = r3.getAction()
            java.lang.String r1 = "com.meizu.flyme.push.intent.MESSAGE"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L21
            java.lang.String r3 = r2.k(r3)
            java.lang.String r0 = "push_status"
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
    protected com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus c(android.content.Intent r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r1 = r0.l(r1)
            return r1
    }

    protected com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus l(android.content.Intent r4) {
            r3 = this;
            java.lang.String r0 = "messageValue"
            java.lang.String r0 = r4.getStringExtra(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L11
            com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r0 = com.meizu.cloud.pushsdk.platform.message.a.c(r0)
            goto L19
        L11:
            java.lang.String r0 = "extra_app_push_switch_status"
            java.io.Serializable r0 = r4.getSerializableExtra(r0)
            com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r0 = (com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus) r0
        L19:
            java.lang.String r1 = r0.getCode()
            java.lang.String r2 = "200"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L5d
            java.lang.String r4 = r3.g(r4)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "PushSwitchStatusHandler update local "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = " switch status "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r1)
            android.content.Context r1 = r3.d()
            boolean r2 = r0.isSwitchNotificationMessage()
            com.meizu.cloud.pushsdk.util.b.a(r1, r4, r2)
            android.content.Context r1 = r3.d()
            boolean r2 = r0.isSwitchThroughMessage()
            com.meizu.cloud.pushsdk.util.b.b(r1, r4, r2)
        L5d:
            return r0
    }
}
