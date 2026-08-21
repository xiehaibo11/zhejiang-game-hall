package com.meizu.cloud.pushsdk.handler.a.e;

public class c extends com.meizu.cloud.pushsdk.handler.a.a<com.meizu.cloud.pushsdk.platform.message.RegisterStatus> {


    public c(android.content.Context r1, com.meizu.cloud.pushsdk.handler.a r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    static void a(com.meizu.cloud.pushsdk.handler.a.e.c r0) {
            r0.e()
            return
    }

    private void e() {
            r3 = this;
            android.content.Context r0 = r3.d()
            java.lang.String r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getMzPushServicePackageName(r0)
            android.content.Context r1 = r3.d()
            boolean r1 = com.meizu.cloud.pushsdk.util.b.l(r1, r0)
            if (r1 == 0) goto L3a
            android.content.Context r1 = r3.d()
            r2 = 0
            com.meizu.cloud.pushsdk.util.b.c(r1, r0, r2)
            android.content.Context r1 = r3.d()
            java.lang.String r1 = com.meizu.cloud.pushsdk.util.b.k(r1, r0)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L29
            return
        L29:
            java.lang.String r1 = r3.b()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L3a
            android.content.Context r2 = r3.d()
            com.meizu.cloud.pushsdk.util.b.k(r2, r0, r1)
        L3a:
            return
    }

    @Override
    public int a() {
            r1 = this;
            r0 = 512(0x200, float:7.17E-43)
            return r0
    }

    protected void a(com.meizu.cloud.pushsdk.platform.message.RegisterStatus r2) {
            r1 = this;
            com.meizu.cloud.pushsdk.b.c.a r2 = com.meizu.cloud.pushsdk.b.c.a.a()
            com.meizu.cloud.pushsdk.handler.a.e.c$1 r0 = new com.meizu.cloud.pushsdk.handler.a.e.c$1
            r0.<init>(r1)
            r2.execute(r0)
            return
    }

    protected void a(com.meizu.cloud.pushsdk.platform.message.RegisterStatus r2, com.meizu.cloud.pushsdk.notification.c r3) {
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
    protected void a(com.meizu.cloud.pushsdk.platform.message.RegisterStatus r1, com.meizu.cloud.pushsdk.notification.c r2) {
            r0 = this;
            com.meizu.cloud.pushsdk.platform.message.RegisterStatus r1 = (com.meizu.cloud.pushsdk.platform.message.RegisterStatus) r1
            r0.a(r1, r2)
            return
    }

    @Override
    public boolean a(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = "AbstractMessageHandler"
            java.lang.String r1 = "start RegisterStatusHandler match"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            java.lang.String r0 = r3.getAction()
            java.lang.String r1 = "com.meizu.flyme.push.intent.MESSAGE"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L21
            java.lang.String r3 = r2.k(r3)
            java.lang.String r0 = "register_status"
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
    protected com.meizu.cloud.pushsdk.platform.message.RegisterStatus c(android.content.Intent r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.platform.message.RegisterStatus r1 = r0.l(r1)
            return r1
    }

    @Override
    protected void c(com.meizu.cloud.pushsdk.platform.message.RegisterStatus r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.platform.message.RegisterStatus r1 = (com.meizu.cloud.pushsdk.platform.message.RegisterStatus) r1
            r0.a(r1)
            return
    }

    protected com.meizu.cloud.pushsdk.platform.message.RegisterStatus l(android.content.Intent r6) {
            r5 = this;
            java.lang.String r0 = "messageValue"
            java.lang.String r0 = r6.getStringExtra(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L11
            com.meizu.cloud.pushsdk.platform.message.RegisterStatus r6 = com.meizu.cloud.pushsdk.platform.message.a.a(r0)
            goto L19
        L11:
            java.lang.String r0 = "extra_app_push_register_status"
            java.io.Serializable r6 = r6.getSerializableExtra(r0)
            com.meizu.cloud.pushsdk.platform.message.RegisterStatus r6 = (com.meizu.cloud.pushsdk.platform.message.RegisterStatus) r6
        L19:
            java.lang.String r0 = r6.getPushId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L53
            android.content.Context r0 = r5.d()
            java.lang.String r1 = r6.getPushId()
            android.content.Context r2 = r5.d()
            java.lang.String r2 = r2.getPackageName()
            com.meizu.cloud.pushsdk.util.b.g(r0, r1, r2)
            android.content.Context r0 = r5.d()
            long r1 = java.lang.System.currentTimeMillis()
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            int r3 = r6.getExpireTime()
            long r3 = (long) r3
            long r1 = r1 + r3
            int r1 = (int) r1
            android.content.Context r2 = r5.d()
            java.lang.String r2 = r2.getPackageName()
            com.meizu.cloud.pushsdk.util.b.a(r0, r1, r2)
        L53:
            return r6
    }
}
