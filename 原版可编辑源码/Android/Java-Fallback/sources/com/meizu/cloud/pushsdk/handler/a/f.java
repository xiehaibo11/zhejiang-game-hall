package com.meizu.cloud.pushsdk.handler.a;

public class f extends com.meizu.cloud.pushsdk.handler.a.a<java.lang.Boolean> {
    public f(android.content.Context r1, com.meizu.cloud.pushsdk.handler.a r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public int a() {
            r1 = this;
            r0 = 32
            return r0
    }

    protected void a(java.lang.Boolean r2, com.meizu.cloud.pushsdk.notification.c r3) {
            r1 = this;
            com.meizu.cloud.pushsdk.handler.a r3 = r1.c()
            if (r3 == 0) goto L15
            com.meizu.cloud.pushsdk.handler.a r3 = r1.c()
            android.content.Context r0 = r1.d()
            boolean r2 = r2.booleanValue()
            r3.a(r0, r2)
        L15:
            return
    }

    @Override
    protected void a(java.lang.Boolean r1, com.meizu.cloud.pushsdk.notification.c r2) {
            r0 = this;
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            r0.a(r1, r2)
            return
    }

    @Override
    public boolean a(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = "AbstractMessageHandler"
            java.lang.String r1 = "start UnRegisterMessageHandler match"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            java.lang.String r0 = r3.getAction()
            java.lang.String r1 = "com.meizu.flyme.push.intent.UNREGISTER.FEEDBACK"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L2e
            java.lang.String r0 = r3.getAction()
            java.lang.String r1 = "com.meizu.c2dm.intent.UNREGISTER"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L2c
            java.lang.String r0 = "unregistered"
            java.lang.String r3 = r3.getStringExtra(r0)
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L2c
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
    protected java.lang.Boolean c(android.content.Intent r1) {
            r0 = this;
            java.lang.Boolean r1 = r0.l(r1)
            return r1
    }

    protected java.lang.Boolean l(android.content.Intent r6) {
            r5 = this;
            r0 = 0
            java.lang.String r1 = "extra_app_is_unregister_success"
            boolean r1 = r6.getBooleanExtra(r1, r0)
            java.lang.String r2 = "registration_error"
            java.lang.String r2 = r6.getStringExtra(r2)
            java.lang.String r3 = "unregistered"
            java.lang.String r6 = r6.getStringExtra(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "processUnRegisterCallback 5.0:"
            r3.append(r4)
            r3.append(r1)
            java.lang.String r4 = " 4.0:"
            r3.append(r4)
            r3.append(r2)
            java.lang.String r4 = " 3.0:"
            r3.append(r4)
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.i(r4, r3)
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L4d
            if (r1 != 0) goto L4d
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L48
            goto L4d
        L48:
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r0)
            return r6
        L4d:
            android.content.Context r6 = r5.d()
            android.content.Context r0 = r5.d()
            java.lang.String r0 = r0.getPackageName()
            java.lang.String r1 = ""
            com.meizu.cloud.pushsdk.util.b.g(r6, r1, r0)
            r6 = 1
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r6)
            return r6
    }
}
