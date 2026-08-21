package com.meizu.cloud.pushsdk.handler.a;

public class e extends com.meizu.cloud.pushsdk.handler.a.a<com.meizu.cloud.pushsdk.handler.MessageV3> {
    public e(android.content.Context r1, com.meizu.cloud.pushsdk.handler.a r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public int a() {
            r1 = this;
            r0 = 8
            return r0
    }

    protected void a(com.meizu.cloud.pushsdk.handler.MessageV3 r5, com.meizu.cloud.pushsdk.notification.c r6) {
            r4 = this;
            com.meizu.cloud.pushsdk.handler.a r6 = r4.c()
            if (r6 == 0) goto L5c
            if (r5 == 0) goto L5c
            java.lang.String r6 = r5.getThroughMessage()
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L5c
            com.meizu.cloud.pushsdk.handler.a r6 = r4.c()
            android.content.Context r0 = r4.d()
            java.lang.String r1 = r5.getThroughMessage()
            r6.b(r0, r1)
            com.meizu.cloud.pushsdk.handler.a r6 = r4.c()
            android.content.Context r0 = r4.d()
            java.lang.String r1 = r5.getThroughMessage()
            com.meizu.cloud.pushsdk.handler.a.c.d$a r2 = com.meizu.cloud.pushsdk.handler.a.c.d.a()
            java.lang.String r3 = r5.getTaskId()
            com.meizu.cloud.pushsdk.handler.a.c.d$a r2 = r2.a(r3)
            java.lang.String r3 = r5.getSeqId()
            com.meizu.cloud.pushsdk.handler.a.c.d$a r2 = r2.b(r3)
            java.lang.String r3 = r5.getPushTimestamp()
            com.meizu.cloud.pushsdk.handler.a.c.d$a r2 = r2.c(r3)
            java.lang.String r5 = r5.getDeviceId()
            com.meizu.cloud.pushsdk.handler.a.c.d$a r5 = r2.d(r5)
            com.meizu.cloud.pushsdk.handler.a.c.d r5 = r5.a()
            java.lang.String r5 = r5.b()
            r6.a(r0, r1, r5)
        L5c:
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
    public boolean a(android.content.Intent r4) {
            r3 = this;
            java.lang.String r0 = "AbstractMessageHandler"
            java.lang.String r1 = "start ThroughMessageHandler match"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            java.lang.String r0 = r3.g(r4)
            r1 = 1
            boolean r0 = r3.a(r1, r0)
            if (r0 != 0) goto L14
            r4 = 0
            return r4
        L14:
            java.lang.String r0 = r4.getAction()
            java.lang.String r2 = "com.meizu.flyme.push.intent.MESSAGE"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L48
            java.lang.String r0 = r3.k(r4)
            java.lang.String r2 = "message"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L2d
            return r1
        L2d:
            java.lang.String r0 = r3.k(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L48
            java.lang.String r0 = r4.getStringExtra(r2)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L48
            boolean r0 = r3.a(r0)
            if (r0 != 0) goto L48
            return r1
        L48:
            java.lang.String r4 = r4.getAction()
            java.lang.String r0 = "com.meizu.c2dm.intent.RECEIVE"
            boolean r4 = r0.equals(r4)
            return r4
    }

    @Override
    protected void b(com.meizu.cloud.pushsdk.handler.MessageV3 r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            r0.d(r1)
            return
    }

    @Override
    protected com.meizu.cloud.pushsdk.handler.MessageV3 c(android.content.Intent r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = r0.l(r1)
            return r1
    }

    protected void d(com.meizu.cloud.pushsdk.handler.MessageV3 r14) {
            r13 = this;
            if (r14 == 0) goto L57
            java.lang.String r0 = r14.getDeviceId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L57
            java.lang.String r0 = r14.getTaskId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L57
            java.lang.String r0 = r14.getThroughMessage()
            java.lang.String r2 = r13.b(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L3c
            android.content.Context r1 = r13.d()
            java.lang.String r3 = r14.getDeviceId()
            java.lang.String r4 = r14.getTaskId()
            java.lang.String r5 = r14.getSeqId()
            java.lang.String r6 = r14.getPushTimestamp()
            com.meizu.cloud.pushsdk.util.d.c(r1, r2, r3, r4, r5, r6)
            goto L57
        L3c:
            android.content.Context r7 = r13.d()
            java.lang.String r8 = r14.getUploadDataPackageName()
            java.lang.String r9 = r14.getDeviceId()
            java.lang.String r10 = r14.getTaskId()
            java.lang.String r11 = r14.getSeqId()
            java.lang.String r12 = r14.getPushTimestamp()
            com.meizu.cloud.pushsdk.util.d.c(r7, r8, r9, r10, r11, r12)
        L57:
            return
    }

    protected com.meizu.cloud.pushsdk.handler.MessageV3 l(android.content.Intent r4) {
            r3 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = new com.meizu.cloud.pushsdk.handler.MessageV3
            r0.<init>()
            java.lang.String r1 = r4.getAction()
            java.lang.String r2 = "com.meizu.c2dm.intent.RECEIVE"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L1e
            com.meizu.cloud.pushsdk.handler.a r0 = r3.c()
            android.content.Context r1 = r3.d()
            r0.a(r1, r4)
            r4 = 0
            return r4
        L1e:
            java.lang.String r1 = "message"
            java.lang.String r1 = r4.getStringExtra(r1)
            r0.setThroughMessage(r1)
            java.lang.String r1 = r3.e(r4)
            r0.setTaskId(r1)
            java.lang.String r1 = r3.d(r4)
            r0.setDeviceId(r1)
            java.lang.String r1 = r3.f(r4)
            r0.setSeqId(r1)
            java.lang.String r1 = r3.h(r4)
            r0.setPushTimestamp(r1)
            java.lang.String r4 = r3.g(r4)
            r0.setUploadDataPackageName(r4)
            return r0
    }
}
