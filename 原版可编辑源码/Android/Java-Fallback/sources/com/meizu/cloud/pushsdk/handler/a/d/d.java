package com.meizu.cloud.pushsdk.handler.a.d;

public class d extends com.meizu.cloud.pushsdk.handler.a.a<com.meizu.cloud.pushsdk.handler.MessageV3> {
    private android.content.Context a;

    public d(android.content.Context r1, com.meizu.cloud.pushsdk.handler.a r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r1
            return
    }

    @Override
    public int a() {
            r1 = this;
            r0 = 128(0x80, float:1.8E-43)
            return r0
    }

    protected void a(com.meizu.cloud.pushsdk.handler.MessageV3 r3, com.meizu.cloud.pushsdk.notification.c r4) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            com.meizu.cloud.pushsdk.handler.a r4 = r2.c()
            if (r4 != 0) goto L18
            com.meizu.cloud.pushsdk.handler.a r4 = r2.c()
            android.content.Context r0 = r2.d()
            com.meizu.cloud.pushsdk.handler.MzPushMessage r1 = com.meizu.cloud.pushsdk.handler.MzPushMessage.fromMessageV3(r3)
            r4.c(r0, r1)
        L18:
            r2.c(r3)
            android.content.Context r4 = r2.a
            r2.a(r4, r3)
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
            java.lang.String r1 = "start NotificationDeleteMessageHandler match"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            java.lang.String r0 = r3.getAction()
            java.lang.String r1 = "com.meizu.flyme.push.intent.MESSAGE"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L21
            java.lang.String r3 = r2.k(r3)
            java.lang.String r0 = "notification_delete"
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

    protected void d(com.meizu.cloud.pushsdk.handler.MessageV3 r7) {
            r6 = this;
            android.content.Context r0 = r6.d()
            java.lang.String r1 = r7.getUploadDataPackageName()
            java.lang.String r2 = r7.getDeviceId()
            java.lang.String r3 = r7.getTaskId()
            java.lang.String r4 = r7.getSeqId()
            java.lang.String r5 = r7.getPushTimestamp()
            com.meizu.cloud.pushsdk.util.d.a(r0, r1, r2, r3, r4, r5)
            return
    }

    protected com.meizu.cloud.pushsdk.handler.MessageV3 l(android.content.Intent r2) {
            r1 = this;
            java.lang.String r0 = "pushMessage"
            android.os.Parcelable r2 = r2.getParcelableExtra(r0)
            com.meizu.cloud.pushsdk.handler.MessageV3 r2 = (com.meizu.cloud.pushsdk.handler.MessageV3) r2
            return r2
    }
}
