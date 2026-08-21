package com.xiaomi.clientreport.manager;

public class ClientReportClient {
    public ClientReportClient() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void init(android.content.Context r3) {
            com.xiaomi.clientreport.data.Config r0 = com.xiaomi.clientreport.data.Config.defaultConfig(r3)
            com.xiaomi.clientreport.processor.a r1 = new com.xiaomi.clientreport.processor.a
            r1.<init>(r3)
            com.xiaomi.clientreport.processor.b r2 = new com.xiaomi.clientreport.processor.b
            r2.<init>(r3)
            init(r3, r0, r1, r2)
            return
    }

    public static void init(android.content.Context r2, com.xiaomi.clientreport.data.Config r3) {
            com.xiaomi.clientreport.processor.a r0 = new com.xiaomi.clientreport.processor.a
            r0.<init>(r2)
            com.xiaomi.clientreport.processor.b r1 = new com.xiaomi.clientreport.processor.b
            r1.<init>(r2)
            init(r2, r3, r0, r1)
            return
    }

    public static void init(android.content.Context r3, com.xiaomi.clientreport.data.Config r4, com.xiaomi.clientreport.processor.IEventProcessor r5, com.xiaomi.clientreport.processor.IPerfProcessor r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "init in  pid :"
            r0.append(r1)
            int r1 = android.os.Process.myPid()
            r0.append(r1)
            java.lang.String r1 = " threadId: "
            r0.append(r1)
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            long r1 = r1.getId()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            com.xiaomi.clientreport.manager.a r0 = com.xiaomi.clientreport.manager.a.a(r3)
            r0.a(r4, r5, r6)
            boolean r4 = com.xiaomi.push.h.a(r3)
            if (r4 == 0) goto L41
            java.lang.String r4 = "init in process\u3000start scheduleJob"
            com.xiaomi.channel.commonutils.logger.b.c(r4)
            com.xiaomi.clientreport.manager.a r3 = com.xiaomi.clientreport.manager.a.a(r3)
            r3.a()
        L41:
            return
    }

    public static void reportEvent(android.content.Context r0, com.xiaomi.clientreport.data.EventClientReport r1) {
            if (r1 == 0) goto L9
            com.xiaomi.clientreport.manager.a r0 = com.xiaomi.clientreport.manager.a.a(r0)
            r0.a(r1)
        L9:
            return
    }

    public static void reportPerf(android.content.Context r0, com.xiaomi.clientreport.data.PerfClientReport r1) {
            if (r1 == 0) goto L9
            com.xiaomi.clientreport.manager.a r0 = com.xiaomi.clientreport.manager.a.a(r0)
            r0.a(r1)
        L9:
            return
    }

    public static void updateConfig(android.content.Context r7, com.xiaomi.clientreport.data.Config r8) {
            if (r8 != 0) goto L3
            return
        L3:
            com.xiaomi.clientreport.manager.a r0 = com.xiaomi.clientreport.manager.a.a(r7)
            boolean r1 = r8.isEventUploadSwitchOpen()
            boolean r2 = r8.isPerfUploadSwitchOpen()
            long r3 = r8.getEventUploadFrequency()
            long r5 = r8.getPerfUploadFrequency()
            r0.a(r1, r2, r3, r5)
            return
    }
}
