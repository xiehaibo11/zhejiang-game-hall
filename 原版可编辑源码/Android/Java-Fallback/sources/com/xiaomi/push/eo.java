package com.xiaomi.push;

public class eo {
    private static volatile com.xiaomi.push.eo a;
    private android.content.Context a;

    private eo(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public static com.xiaomi.push.eo a(android.content.Context r2) {
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.push.eo> r0 = com.xiaomi.push.eo.class
            monitor-enter(r0)
            com.xiaomi.push.eo r1 = com.xiaomi.push.eo.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.push.eo r1 = new com.xiaomi.push.eo     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.push.eo.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.push.eo r2 = com.xiaomi.push.eo.a
            return r2
    }

    private void a(com.xiaomi.clientreport.data.a r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.xiaomi.clientreport.data.PerfClientReport
            if (r0 == 0) goto Lc
            android.content.Context r0 = r1.a
            com.xiaomi.clientreport.data.PerfClientReport r2 = (com.xiaomi.clientreport.data.PerfClientReport) r2
            com.xiaomi.clientreport.manager.ClientReportClient.reportPerf(r0, r2)
            goto L17
        Lc:
            boolean r0 = r2 instanceof com.xiaomi.clientreport.data.EventClientReport
            if (r0 == 0) goto L17
            android.content.Context r0 = r1.a
            com.xiaomi.clientreport.data.EventClientReport r2 = (com.xiaomi.clientreport.data.EventClientReport) r2
            com.xiaomi.clientreport.manager.ClientReportClient.reportEvent(r0, r2)
        L17:
            return
    }

    public void a(java.lang.String r8, int r9, long r10, long r12) {
            r7 = this;
            if (r9 < 0) goto L21
            r0 = 0
            int r2 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r2 < 0) goto L21
            int r0 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r0 > 0) goto Ld
            goto L21
        Ld:
            android.content.Context r1 = r7.a
            r2 = r9
            r3 = r10
            r5 = r12
            com.xiaomi.clientreport.data.PerfClientReport r9 = com.xiaomi.push.en.a(r1, r2, r3, r5)
            r9.setAppPackageName(r8)
            java.lang.String r8 = "4_9_0"
            r9.setSdkVersion(r8)
            r7.a(r9)
        L21:
            return
    }

    public void a(java.lang.String r10, android.content.Intent r11, int r12, java.lang.String r13) {
            r9 = this;
            if (r11 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "messageId"
            java.lang.String r4 = r11.getStringExtra(r0)
            r0 = -1
            java.lang.String r1 = "eventMessageType"
            int r11 = r11.getIntExtra(r1, r0)
            java.lang.String r3 = com.xiaomi.push.en.a(r11)
            long r6 = java.lang.System.currentTimeMillis()
            r1 = r9
            r2 = r10
            r5 = r12
            r8 = r13
            r1.a(r2, r3, r4, r5, r6, r8)
            return
    }

    public void a(java.lang.String r10, android.content.Intent r11, java.lang.String r12) {
            r9 = this;
            if (r11 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "messageId"
            java.lang.String r4 = r11.getStringExtra(r0)
            r0 = -1
            java.lang.String r1 = "eventMessageType"
            int r11 = r11.getIntExtra(r1, r0)
            java.lang.String r3 = com.xiaomi.push.en.a(r11)
            r5 = 5001(0x1389, float:7.008E-42)
            long r6 = java.lang.System.currentTimeMillis()
            r1 = r9
            r2 = r10
            r8 = r12
            r1.a(r2, r3, r4, r5, r6, r8)
            return
    }

    public void a(java.lang.String r9, java.lang.String r10, java.lang.String r11, int r12, long r13, java.lang.String r15) {
            r8 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 != 0) goto L23
            boolean r0 = android.text.TextUtils.isEmpty(r11)
            if (r0 == 0) goto Ld
            goto L23
        Ld:
            android.content.Context r1 = r8.a
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r7 = r15
            com.xiaomi.clientreport.data.EventClientReport r10 = com.xiaomi.push.en.a(r1, r2, r3, r4, r5, r7)
            r10.setAppPackageName(r9)
            java.lang.String r9 = "4_9_0"
            r10.setSdkVersion(r9)
            r8.a(r10)
        L23:
            return
    }

    public void a(java.lang.String r9, java.lang.String r10, java.lang.String r11, int r12, java.lang.String r13) {
            r8 = this;
            long r5 = java.lang.System.currentTimeMillis()
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r7 = r13
            r0.a(r1, r2, r3, r4, r5, r7)
            return
    }

    public void a(java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            r8 = this;
            long r5 = java.lang.System.currentTimeMillis()
            r4 = 5002(0x138a, float:7.009E-42)
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r7 = r12
            r0.a(r1, r2, r3, r4, r5, r7)
            return
    }

    public void b(java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            r8 = this;
            long r5 = java.lang.System.currentTimeMillis()
            r4 = 5001(0x1389, float:7.008E-42)
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r7 = r12
            r0.a(r1, r2, r3, r4, r5, r7)
            return
    }

    public void c(java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            r8 = this;
            long r5 = java.lang.System.currentTimeMillis()
            r4 = 4002(0xfa2, float:5.608E-42)
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r7 = r12
            r0.a(r1, r2, r3, r4, r5, r7)
            return
    }
}
