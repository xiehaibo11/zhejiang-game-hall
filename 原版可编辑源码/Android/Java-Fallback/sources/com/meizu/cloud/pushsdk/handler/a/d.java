package com.meizu.cloud.pushsdk.handler.a;

public class d extends com.meizu.cloud.pushsdk.handler.a.a<java.lang.String> {
    public d(android.content.Context r1, com.meizu.cloud.pushsdk.handler.a r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public int a() {
            r1 = this;
            r0 = 16
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
            if (r3 == 0) goto L11
            com.meizu.cloud.pushsdk.handler.a r3 = r1.c()
            android.content.Context r0 = r1.d()
            r3.a(r0, r2)
        L11:
            return
    }

    @Override
    public boolean a(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = "AbstractMessageHandler"
            java.lang.String r1 = "start RegisterMessageHandler match"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            java.lang.String r0 = r3.getAction()
            java.lang.String r1 = "com.meizu.flyme.push.intent.REGISTER.FEEDBACK"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L2e
            java.lang.String r0 = r3.getAction()
            java.lang.String r1 = "com.meizu.c2dm.intent.REGISTRATION"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L2c
            java.lang.String r0 = "registration_id"
            java.lang.String r3 = r3.getStringExtra(r0)
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L2c
            goto L2e
        L2c:
            r3 = 0
            goto L2f
        L2e:
            r3 = 1
        L2f:
            return r3
    }

    @Override
    protected java.lang.String c(android.content.Intent r1) {
            r0 = this;
            java.lang.String r1 = r0.l(r1)
            return r1
    }

    protected java.lang.String l(android.content.Intent r4) {
            r3 = this;
            java.lang.String r0 = "registration_id"
            java.lang.String r4 = r4.getStringExtra(r0)
            android.content.Context r0 = r3.d()
            android.content.Context r1 = r3.d()
            java.lang.String r1 = r1.getPackageName()
            com.meizu.cloud.pushsdk.util.b.g(r0, r4, r1)
            android.content.Context r0 = r3.d()
            android.content.Context r1 = r3.d()
            java.lang.String r1 = r1.getPackageName()
            r2 = 0
            com.meizu.cloud.pushsdk.util.b.a(r0, r2, r1)
            return r4
    }
}
