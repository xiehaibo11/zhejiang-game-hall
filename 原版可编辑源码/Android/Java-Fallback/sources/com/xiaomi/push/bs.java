package com.xiaomi.push;

public class bs implements java.lang.Runnable {
    private android.content.Context a;
    private com.xiaomi.clientreport.processor.c a;

    public bs() {
            r0 = this;
            r0.<init>()
            return
    }

    public void a(android.content.Context r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(com.xiaomi.clientreport.processor.c r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public void run() {
            r5 = this;
            com.xiaomi.clientreport.processor.c r0 = r5.a     // Catch: java.lang.Exception -> L39
            if (r0 == 0) goto L9
            com.xiaomi.clientreport.processor.c r0 = r5.a     // Catch: java.lang.Exception -> L39
            r0.a()     // Catch: java.lang.Exception -> L39
        L9:
            java.lang.String r0 = "begin read and send perf / event"
            com.xiaomi.channel.commonutils.logger.b.c(r0)     // Catch: java.lang.Exception -> L39
            com.xiaomi.clientreport.processor.c r0 = r5.a     // Catch: java.lang.Exception -> L39
            boolean r0 = r0 instanceof com.xiaomi.clientreport.processor.IEventProcessor     // Catch: java.lang.Exception -> L39
            java.lang.String r1 = "sp_client_report_status"
            if (r0 == 0) goto L26
            android.content.Context r0 = r5.a     // Catch: java.lang.Exception -> L39
            com.xiaomi.push.bw r0 = com.xiaomi.push.bw.a(r0)     // Catch: java.lang.Exception -> L39
            java.lang.String r2 = "event_last_upload_time"
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L39
        L22:
            r0.a(r1, r2, r3)     // Catch: java.lang.Exception -> L39
            goto L3d
        L26:
            com.xiaomi.clientreport.processor.c r0 = r5.a     // Catch: java.lang.Exception -> L39
            boolean r0 = r0 instanceof com.xiaomi.clientreport.processor.IPerfProcessor     // Catch: java.lang.Exception -> L39
            if (r0 == 0) goto L3d
            android.content.Context r0 = r5.a     // Catch: java.lang.Exception -> L39
            com.xiaomi.push.bw r0 = com.xiaomi.push.bw.a(r0)     // Catch: java.lang.Exception -> L39
            java.lang.String r2 = "perf_last_upload_time"
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L39
            goto L22
        L39:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L3d:
            return
    }
}
