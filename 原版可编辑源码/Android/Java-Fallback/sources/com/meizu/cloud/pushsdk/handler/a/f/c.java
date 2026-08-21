package com.meizu.cloud.pushsdk.handler.a.f;

public class c extends com.meizu.cloud.pushsdk.handler.a.c {
    public c(android.content.Context r1, com.meizu.cloud.pushsdk.handler.a r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public int a() {
            r1 = this;
            r0 = 8192(0x2000, float:1.148E-41)
            return r0
    }

    @Override
    protected void a(com.meizu.cloud.pushsdk.handler.MessageV3 r1, com.meizu.cloud.pushsdk.notification.c r2) {
            r0 = this;
            if (r2 == 0) goto L8
            r2.b(r1)
            r0.a(r1)
        L8:
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
            java.lang.String r1 = "start ScheduleNotificationHandler match"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            java.lang.String r0 = r3.getAction()
            java.lang.String r1 = "com.meizu.flyme.push.intent.MESSAGE"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L21
            java.lang.String r3 = r2.k(r3)
            java.lang.String r0 = "schedule_notification"
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

    @Override
    protected void c(com.meizu.cloud.pushsdk.handler.MessageV3 r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            r0.e(r1)
            return
    }

    @Override
    protected int d(com.meizu.cloud.pushsdk.handler.MessageV3 r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            int r1 = r0.h(r1)
            return r1
    }

    @Override
    protected void d(com.meizu.cloud.pushsdk.handler.MessageV3 r2) {
            r1 = this;
            java.lang.String r2 = "AbstractMessageHandler"
            java.lang.String r0 = "ScheduleNotificationHandler don't repeat upload receiver push event"
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r0)
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
    protected int h(com.meizu.cloud.pushsdk.handler.MessageV3 r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    protected com.meizu.cloud.pushsdk.handler.MessageV3 l(android.content.Intent r2) {
            r1 = this;
            java.lang.String r0 = "extra_app_push_schedule_notification_message"
            android.os.Parcelable r2 = r2.getParcelableExtra(r0)
            com.meizu.cloud.pushsdk.handler.MessageV3 r2 = (com.meizu.cloud.pushsdk.handler.MessageV3) r2
            return r2
    }
}
