package com.meizu.cloud.pushsdk.handler.a;

public class b extends com.meizu.cloud.pushsdk.handler.a.c {
    public b(android.content.Context r1, com.meizu.cloud.pushsdk.handler.a r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public int a() {
            r1 = this;
            r0 = 2
            return r0
    }

    @Override
    protected void a(com.meizu.cloud.pushsdk.handler.MessageV3 r2, com.meizu.cloud.pushsdk.notification.c r3) {
            r1 = this;
            if (r3 == 0) goto L14
            r3.b(r2)
            com.meizu.cloud.pushsdk.handler.a r3 = r1.c()
            android.content.Context r0 = r1.d()
            com.meizu.cloud.pushsdk.handler.MzPushMessage r2 = com.meizu.cloud.pushsdk.handler.MzPushMessage.fromMessageV3(r2)
            r3.b(r0, r2)
        L14:
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
            java.lang.String r1 = "start MessageV2Handler match"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            java.lang.String r0 = r3.g(r4)
            r1 = 0
            boolean r0 = r3.a(r1, r0)
            if (r0 != 0) goto L13
            return r1
        L13:
            java.lang.String r0 = r4.getAction()
            java.lang.String r2 = "com.meizu.flyme.push.intent.MESSAGE"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L2c
            java.lang.String r4 = r3.k(r4)
            java.lang.String r0 = "notification_show"
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L2c
            r1 = 1
        L2c:
            return r1
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

    @Override
    protected void c(com.meizu.cloud.pushsdk.handler.MessageV3 r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            r0.e(r1)
            return
    }

    @Override
    protected void d(com.meizu.cloud.pushsdk.handler.MessageV3 r9) {
            r8 = this;
            android.content.Context r0 = r8.d()
            java.lang.String r1 = r9.getUploadDataPackageName()
            java.lang.String r2 = r9.getDeviceId()
            java.lang.String r3 = r9.getTaskId()
            java.lang.String r4 = r9.getSeqId()
            java.lang.String r5 = r9.getPushTimestamp()
            long r6 = r9.getDelayedReportMillis()
            com.meizu.cloud.pushsdk.util.d.b(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    @Override
    protected void e(com.meizu.cloud.pushsdk.handler.MessageV3 r9) {
            r8 = this;
            android.content.Context r0 = r8.d()
            java.lang.String r1 = r9.getUploadDataPackageName()
            java.lang.String r2 = r9.getDeviceId()
            java.lang.String r3 = r9.getTaskId()
            java.lang.String r4 = r9.getSeqId()
            java.lang.String r5 = r9.getPushTimestamp()
            long r6 = r9.getDelayedReportMillis()
            com.meizu.cloud.pushsdk.util.d.a(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    @Override
    protected com.meizu.cloud.pushsdk.handler.MessageV3 l(android.content.Intent r4) {
            r3 = this;
            java.lang.String r0 = "pushMessage"
            java.io.Serializable r0 = r4.getSerializableExtra(r0)
            com.meizu.cloud.pushsdk.notification.MPushMessage r0 = (com.meizu.cloud.pushsdk.notification.MPushMessage) r0
            java.lang.String r1 = r3.g(r4)
            java.lang.String r4 = r3.d(r4)
            java.lang.String r2 = r0.getTaskId()
            com.meizu.cloud.pushsdk.handler.MessageV3 r4 = com.meizu.cloud.pushsdk.handler.MessageV3.parse(r1, r4, r2, r0)
            return r4
    }
}
