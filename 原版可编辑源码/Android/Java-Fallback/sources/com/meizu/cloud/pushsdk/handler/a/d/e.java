package com.meizu.cloud.pushsdk.handler.a.d;

public class e extends com.meizu.cloud.pushsdk.handler.a.a<com.meizu.cloud.pushsdk.handler.a.c.c> {
    public e(android.content.Context r1, com.meizu.cloud.pushsdk.handler.a r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public int a() {
            r1 = this;
            r0 = 32768(0x8000, float:4.5918E-41)
            return r0
    }

    protected void a(com.meizu.cloud.pushsdk.handler.a.c.c r12) {
            r11 = this;
            int r0 = r12.c()
            r1 = -2
            java.lang.String r2 = "AbstractMessageHandler"
            if (r0 == r1) goto Lcb
            r1 = -1
            if (r0 == r1) goto L8e
            if (r0 == 0) goto L51
            r1 = 1
            if (r0 == r1) goto L13
            goto L107
        L13:
            java.lang.String r0 = "notification STATE_NOTIFICATION_SHOW_FLOAT"
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r0)
            android.content.Context r3 = r11.d()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r4 = r0.getUploadDataPackageName()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r5 = r0.getDeviceId()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r6 = r0.getTaskId()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r7 = r0.getSeqId()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r8 = r0.getPushTimestamp()
            com.meizu.cloud.pushsdk.handler.MessageV3 r12 = r12.a()
            long r9 = r12.getDelayedReportMillis()
            com.meizu.cloud.pushsdk.util.d.e(r3, r4, r5, r6, r7, r8, r9)
            goto L107
        L51:
            java.lang.String r0 = "notification STATE_NOTIFICATION_SHOW_NORMAL"
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r0)
            android.content.Context r3 = r11.d()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r4 = r0.getUploadDataPackageName()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r5 = r0.getDeviceId()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r6 = r0.getTaskId()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r7 = r0.getSeqId()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r8 = r0.getPushTimestamp()
            com.meizu.cloud.pushsdk.handler.MessageV3 r12 = r12.a()
            long r9 = r12.getDelayedReportMillis()
            com.meizu.cloud.pushsdk.util.d.d(r3, r4, r5, r6, r7, r8, r9)
            goto L107
        L8e:
            java.lang.String r0 = "notification STATE_NOTIFICATION_SHOW_INBOX"
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r0)
            android.content.Context r3 = r11.d()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r4 = r0.getUploadDataPackageName()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r5 = r0.getDeviceId()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r6 = r0.getTaskId()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r7 = r0.getSeqId()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r8 = r0.getPushTimestamp()
            com.meizu.cloud.pushsdk.handler.MessageV3 r12 = r12.a()
            long r9 = r12.getDelayedReportMillis()
            com.meizu.cloud.pushsdk.util.d.c(r3, r4, r5, r6, r7, r8, r9)
            goto L107
        Lcb:
            java.lang.String r0 = "notification STATE_NOTIFICATION_SHOW_ACCESS_DENY"
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r0)
            android.content.Context r3 = r11.d()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r4 = r0.getUploadDataPackageName()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r5 = r0.getDeviceId()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r6 = r0.getTaskId()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r7 = r0.getSeqId()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r12.a()
            java.lang.String r8 = r0.getPushTimestamp()
            com.meizu.cloud.pushsdk.handler.MessageV3 r12 = r12.a()
            long r9 = r12.getDelayedReportMillis()
            com.meizu.cloud.pushsdk.util.d.f(r3, r4, r5, r6, r7, r8, r9)
        L107:
            return
    }

    protected void a(com.meizu.cloud.pushsdk.handler.a.c.c r2, com.meizu.cloud.pushsdk.notification.c r3) {
            r1 = this;
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "store notification id "
            r3.append(r0)
            int r0 = r2.b()
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r3)
            android.content.Context r3 = r1.d()
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r2.a()
            java.lang.String r0 = r0.getUploadDataPackageName()
            int r2 = r2.b()
            com.meizu.cloud.pushsdk.notification.c.b.b(r3, r0, r2)
            return
    }

    @Override
    protected void a(com.meizu.cloud.pushsdk.handler.a.c.c r1, com.meizu.cloud.pushsdk.notification.c r2) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.a.c.c r1 = (com.meizu.cloud.pushsdk.handler.a.c.c) r1
            r0.a(r1, r2)
            return
    }

    @Override
    public boolean a(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = "AbstractMessageHandler"
            java.lang.String r1 = "start NotificationStateMessageHandler match"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            java.lang.String r0 = r3.getAction()
            java.lang.String r1 = "com.meizu.flyme.push.intent.MESSAGE"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L21
            java.lang.String r3 = r2.k(r3)
            java.lang.String r0 = "notification_state"
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
    protected void b(com.meizu.cloud.pushsdk.handler.a.c.c r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.a.c.c r1 = (com.meizu.cloud.pushsdk.handler.a.c.c) r1
            r0.a(r1)
            return
    }

    @Override
    protected com.meizu.cloud.pushsdk.handler.a.c.c c(android.content.Intent r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.a.c.c r1 = r0.l(r1)
            return r1
    }

    protected com.meizu.cloud.pushsdk.handler.a.c.c l(android.content.Intent r13) {
            r12 = this;
            java.lang.String r0 = "notification_extra_show_package_name"
            java.lang.String r2 = r13.getStringExtra(r0)
            java.lang.String r0 = "notification_extra_task_id"
            java.lang.String r5 = r13.getStringExtra(r0)
            java.lang.String r0 = "notification_extra_seq_id"
            java.lang.String r6 = r13.getStringExtra(r0)
            java.lang.String r0 = "notification_extra_device_id"
            java.lang.String r4 = r13.getStringExtra(r0)
            java.lang.String r0 = "notification_extra_push_timestamp"
            java.lang.String r3 = r13.getStringExtra(r0)
            java.lang.String r0 = "notification_state_message"
            java.lang.String r7 = r13.getStringExtra(r0)
            r0 = 0
            java.lang.String r1 = "mz_push_white_list"
            boolean r8 = r13.getBooleanExtra(r1, r0)
            java.lang.String r1 = "mz_push_delayed_report_millis"
            r9 = 0
            long r9 = r13.getLongExtra(r1, r9)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r11 = "current taskId "
            r1.append(r11)
            r1.append(r5)
            java.lang.String r11 = " seqId "
            r1.append(r11)
            r1.append(r6)
            java.lang.String r11 = " deviceId "
            r1.append(r11)
            r1.append(r4)
            java.lang.String r11 = " packageName "
            r1.append(r11)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r11 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.i(r11, r1)
            android.content.Context r1 = r12.d()
            java.lang.String r1 = r1.getPackageName()
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = com.meizu.cloud.pushsdk.handler.MessageV3.parse(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            com.meizu.cloud.pushsdk.handler.a.c.c r2 = new com.meizu.cloud.pushsdk.handler.a.c.c
            r2.<init>(r1)
            java.lang.String r1 = "flyme:notification_pkg"
            java.lang.String r1 = r13.getStringExtra(r1)
            java.lang.String r3 = "flyme:notification_id"
            int r3 = r13.getIntExtra(r3, r0)
            java.lang.String r4 = "flyme:notification_state"
            int r13 = r13.getIntExtra(r4, r0)
            r2.a(r3)
            r2.a(r1)
            r2.b(r13)
            return r2
    }
}
