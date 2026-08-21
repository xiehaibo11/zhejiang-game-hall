package com.meizu.cloud.pushsdk.handler.a.d;

public class f extends com.meizu.cloud.pushsdk.handler.a.a<com.meizu.cloud.pushsdk.handler.a.c.h> {
    public f(android.content.Context r1, com.meizu.cloud.pushsdk.handler.a r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public int a() {
            r1 = this;
            r0 = 262144(0x40000, float:3.67342E-40)
            return r0
    }

    protected void a(com.meizu.cloud.pushsdk.handler.a.c.h r7) {
            r6 = this;
            android.content.Context r0 = r6.d()
            java.lang.String r1 = r7.c()
            com.meizu.cloud.pushsdk.handler.a.c.b r2 = r7.a()
            com.meizu.cloud.pushsdk.handler.a.c.f r2 = r2.b()
            java.lang.String r2 = r2.d()
            com.meizu.cloud.pushsdk.handler.a.c.b r3 = r7.a()
            com.meizu.cloud.pushsdk.handler.a.c.f r3 = r3.b()
            java.lang.String r3 = r3.a()
            com.meizu.cloud.pushsdk.handler.a.c.b r4 = r7.a()
            com.meizu.cloud.pushsdk.handler.a.c.f r4 = r4.b()
            java.lang.String r4 = r4.e()
            com.meizu.cloud.pushsdk.handler.a.c.b r7 = r7.a()
            com.meizu.cloud.pushsdk.handler.a.c.f r7 = r7.b()
            java.lang.String r5 = r7.b()
            com.meizu.cloud.pushsdk.util.d.b(r0, r1, r2, r3, r4, r5)
            return
    }

    protected void a(com.meizu.cloud.pushsdk.handler.a.c.h r3, com.meizu.cloud.pushsdk.notification.c r4) {
            r2 = this;
            android.content.Context r4 = r2.d()
            java.lang.String r0 = "notification"
            java.lang.Object r4 = r4.getSystemService(r0)
            android.app.NotificationManager r4 = (android.app.NotificationManager) r4
            if (r4 == 0) goto L44
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "start cancel notification id "
            r0.append(r1)
            int r1 = r3.b()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            int r0 = r3.b()
            r4.cancel(r0)
            android.content.Context r4 = r2.d()
            com.meizu.cloud.pushsdk.b r4 = com.meizu.cloud.pushsdk.b.a(r4)
            com.meizu.cloud.pushsdk.handler.a.a.a r4 = r4.b()
            if (r4 == 0) goto L44
            int r3 = r3.b()
            r4.a(r3)
        L44:
            return
    }

    @Override
    protected void a(com.meizu.cloud.pushsdk.handler.a.c.h r1, com.meizu.cloud.pushsdk.notification.c r2) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.a.c.h r1 = (com.meizu.cloud.pushsdk.handler.a.c.h) r1
            r0.a(r1, r2)
            return
    }

    @Override
    public boolean a(android.content.Intent r4) {
            r3 = this;
            java.lang.String r0 = "AbstractMessageHandler"
            java.lang.String r1 = "start WithDrawMessageHandler match"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            java.lang.String r0 = "mz_push_control_message"
            java.lang.String r0 = r4.getStringExtra(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 != 0) goto L27
            com.meizu.cloud.pushsdk.handler.a.c.b r0 = com.meizu.cloud.pushsdk.handler.a.c.b.a(r0)
            com.meizu.cloud.pushsdk.handler.a.c.a r1 = r0.a()
            if (r1 == 0) goto L27
            com.meizu.cloud.pushsdk.handler.a.c.a r0 = r0.a()
            int r0 = r0.a()
            goto L28
        L27:
            r0 = r2
        L28:
            java.lang.String r4 = r4.getAction()
            java.lang.String r1 = "com.meizu.flyme.push.intent.MESSAGE"
            boolean r4 = r1.equals(r4)
            if (r4 == 0) goto L41
            java.lang.String r4 = java.lang.String.valueOf(r0)
            java.lang.String r0 = "4"
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L41
            r2 = 1
        L41:
            return r2
    }

    @Override
    protected void b(com.meizu.cloud.pushsdk.handler.a.c.h r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.a.c.h r1 = (com.meizu.cloud.pushsdk.handler.a.c.h) r1
            r0.a(r1)
            return
    }

    @Override
    protected com.meizu.cloud.pushsdk.handler.a.c.h c(android.content.Intent r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.a.c.h r1 = r0.l(r1)
            return r1
    }

    protected com.meizu.cloud.pushsdk.handler.a.c.h l(android.content.Intent r8) {
            r7 = this;
            java.lang.String r0 = "mz_push_control_message"
            java.lang.String r4 = r8.getStringExtra(r0)
            java.lang.String r0 = "extra_app_push_seq_Id"
            java.lang.String r6 = r8.getStringExtra(r0)
            java.lang.String r0 = "statistics_imei_key"
            java.lang.String r5 = r8.getStringExtra(r0)
            java.lang.String r0 = "pushMessage"
            java.lang.String r2 = r8.getStringExtra(r0)
            java.lang.String r3 = r7.g(r8)
            com.meizu.cloud.pushsdk.handler.a.c.h r8 = new com.meizu.cloud.pushsdk.handler.a.c.h
            r1 = r8
            r1.<init>(r2, r3, r4, r5, r6)
            return r8
    }
}
