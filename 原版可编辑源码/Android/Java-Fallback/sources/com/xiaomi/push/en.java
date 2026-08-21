package com.xiaomi.push;

public class en {
    private static com.xiaomi.push.en.a a;
    private static java.util.Map<java.lang.String, com.xiaomi.push.ht> a;

    public interface a {
        void uploader(android.content.Context r1, com.xiaomi.push.hn r2);
    }

    static {
            return
    }

    public static int a(int r0) {
            if (r0 <= 0) goto L5
            int r0 = r0 + 1000
            goto L6
        L5:
            r0 = -1
        L6:
            return r0
    }

    public static int a(java.lang.Enum r1) {
            if (r1 == 0) goto L23
            boolean r0 = r1 instanceof com.xiaomi.push.hj
            if (r0 == 0) goto Ld
            int r1 = r1.ordinal()
            int r1 = r1 + 1001
            goto L24
        Ld:
            boolean r0 = r1 instanceof com.xiaomi.push.ht
            if (r0 == 0) goto L18
            int r1 = r1.ordinal()
            int r1 = r1 + 2001
            goto L24
        L18:
            boolean r0 = r1 instanceof com.xiaomi.push.ey
            if (r0 == 0) goto L23
            int r1 = r1.ordinal()
            int r1 = r1 + 3001
            goto L24
        L23:
            r1 = -1
        L24:
            return r1
    }

    public static com.xiaomi.clientreport.data.Config a(android.content.Context r6) {
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r6)
            com.xiaomi.push.ho r1 = com.xiaomi.push.ho.aA
            int r1 = r1.a()
            r2 = 0
            boolean r0 = r0.a(r1, r2)
            com.xiaomi.push.service.ba r1 = com.xiaomi.push.service.ba.a(r6)
            com.xiaomi.push.ho r3 = com.xiaomi.push.ho.aU
            int r3 = r3.a()
            boolean r1 = r1.a(r3, r2)
            com.xiaomi.push.service.ba r2 = com.xiaomi.push.service.ba.a(r6)
            com.xiaomi.push.ho r3 = com.xiaomi.push.ho.aC
            int r3 = r3.a()
            r4 = 86400(0x15180, float:1.21072E-40)
            int r2 = r2.a(r3, r4)
            com.xiaomi.push.service.ba r3 = com.xiaomi.push.service.ba.a(r6)
            com.xiaomi.push.ho r5 = com.xiaomi.push.ho.aB
            int r5 = r5.a()
            int r3 = r3.a(r5, r4)
            com.xiaomi.clientreport.data.Config$Builder r4 = com.xiaomi.clientreport.data.Config.getBuilder()
            com.xiaomi.clientreport.data.Config$Builder r1 = r4.setEventUploadSwitchOpen(r1)
            long r3 = (long) r3
            com.xiaomi.clientreport.data.Config$Builder r1 = r1.setEventUploadFrequency(r3)
            com.xiaomi.clientreport.data.Config$Builder r0 = r1.setPerfUploadSwitchOpen(r0)
            long r1 = (long) r2
            com.xiaomi.clientreport.data.Config$Builder r0 = r0.setPerfUploadFrequency(r1)
            com.xiaomi.clientreport.data.Config r6 = r0.build(r6)
            return r6
    }

    public static com.xiaomi.clientreport.data.EventClientReport a(android.content.Context r0, java.lang.String r1, java.lang.String r2, int r3, long r4, java.lang.String r6) {
            com.xiaomi.clientreport.data.EventClientReport r0 = a(r1)
            r0.eventId = r2
            r0.eventType = r3
            r0.eventTime = r4
            r0.eventContent = r6
            return r0
    }

    public static com.xiaomi.clientreport.data.EventClientReport a(java.lang.String r2) {
            com.xiaomi.clientreport.data.EventClientReport r0 = new com.xiaomi.clientreport.data.EventClientReport
            r0.<init>()
            r1 = 1000(0x3e8, float:1.401E-42)
            r0.production = r1
            r1 = 1001(0x3e9, float:1.403E-42)
            r0.reportType = r1
            r0.clientInterfaceId = r2
            return r0
    }

    public static com.xiaomi.clientreport.data.PerfClientReport a() {
            com.xiaomi.clientreport.data.PerfClientReport r0 = new com.xiaomi.clientreport.data.PerfClientReport
            r0.<init>()
            r1 = 1000(0x3e8, float:1.401E-42)
            r0.production = r1
            r0.reportType = r1
            java.lang.String r1 = "P100000"
            r0.clientInterfaceId = r1
            return r0
    }

    public static com.xiaomi.clientreport.data.PerfClientReport a(android.content.Context r0, int r1, long r2, long r4) {
            com.xiaomi.clientreport.data.PerfClientReport r0 = a()
            r0.code = r1
            r0.perfCounts = r2
            r0.perfLatencies = r4
            return r0
    }

    public static com.xiaomi.push.hn a(android.content.Context r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L8
            r3 = 0
            return r3
        L8:
            com.xiaomi.push.hn r0 = new com.xiaomi.push.hn
            r0.<init>()
            java.lang.String r1 = "category_client_report_data"
            r0.d(r1)
            java.lang.String r1 = "push_sdk_channel"
            r0.a(r1)
            r1 = 1
            r0.a(r1)
            r0.b(r4)
            r4 = 1
            r0.a(r4)
            long r1 = java.lang.System.currentTimeMillis()
            r0.b(r1)
            java.lang.String r3 = r3.getPackageName()
            r0.g(r3)
            java.lang.String r3 = "com.xiaomi.xmsf"
            r0.e(r3)
            java.lang.String r3 = com.xiaomi.push.service.bz.a()
            r0.f(r3)
            java.lang.String r3 = "quality_support"
            r0.c(r3)
            return r0
    }

    public static com.xiaomi.push.ht a(java.lang.String r7) {
            java.util.Map<java.lang.String, com.xiaomi.push.ht> r0 = com.xiaomi.push.en.a
            if (r0 != 0) goto L2f
            java.lang.Class<com.xiaomi.push.ht> r0 = com.xiaomi.push.ht.class
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.xiaomi.push.ht> r1 = com.xiaomi.push.en.a     // Catch: java.lang.Throwable -> L2c
            if (r1 != 0) goto L2a
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L2c
            r1.<init>()     // Catch: java.lang.Throwable -> L2c
            com.xiaomi.push.en.a = r1     // Catch: java.lang.Throwable -> L2c
            com.xiaomi.push.ht[] r1 = com.xiaomi.push.ht.values()     // Catch: java.lang.Throwable -> L2c
            int r2 = r1.length     // Catch: java.lang.Throwable -> L2c
            r3 = 0
        L18:
            if (r3 >= r2) goto L2a
            r4 = r1[r3]     // Catch: java.lang.Throwable -> L2c
            java.util.Map<java.lang.String, com.xiaomi.push.ht> r5 = com.xiaomi.push.en.a     // Catch: java.lang.Throwable -> L2c
            java.lang.String r6 = r4.a     // Catch: java.lang.Throwable -> L2c
            java.lang.String r6 = r6.toLowerCase()     // Catch: java.lang.Throwable -> L2c
            r5.put(r6, r4)     // Catch: java.lang.Throwable -> L2c
            int r3 = r3 + 1
            goto L18
        L2a:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            goto L2f
        L2c:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            throw r7
        L2f:
            java.util.Map<java.lang.String, com.xiaomi.push.ht> r0 = com.xiaomi.push.en.a
            java.lang.String r7 = r7.toLowerCase()
            java.lang.Object r7 = r0.get(r7)
            com.xiaomi.push.ht r7 = (com.xiaomi.push.ht) r7
            if (r7 == 0) goto L3e
            goto L40
        L3e:
            com.xiaomi.push.ht r7 = com.xiaomi.push.ht.a
        L40:
            return r7
    }

    public static java.lang.String a(int r1) {
            r0 = 1000(0x3e8, float:1.401E-42)
            if (r1 != r0) goto L7
            java.lang.String r1 = "E100000"
            return r1
        L7:
            r0 = 3000(0xbb8, float:4.204E-42)
            if (r1 != r0) goto Le
            java.lang.String r1 = "E100002"
            return r1
        Le:
            r0 = 2000(0x7d0, float:2.803E-42)
            if (r1 != r0) goto L15
            java.lang.String r1 = "E100001"
            return r1
        L15:
            r0 = 6000(0x1770, float:8.408E-42)
            if (r1 != r0) goto L1c
            java.lang.String r1 = "E100003"
            return r1
        L1c:
            java.lang.String r1 = ""
            return r1
    }

    public static void a(android.content.Context r1) {
            com.xiaomi.clientreport.data.Config r0 = a(r1)
            com.xiaomi.clientreport.manager.ClientReportClient.updateConfig(r1, r0)
            return
    }

    public static void a(android.content.Context r2, com.xiaomi.clientreport.data.Config r3) {
            com.xiaomi.push.el r0 = new com.xiaomi.push.el
            r0.<init>(r2)
            com.xiaomi.push.em r1 = new com.xiaomi.push.em
            r1.<init>(r2)
            com.xiaomi.clientreport.manager.ClientReportClient.init(r2, r3, r0, r1)
            return
    }

    private static void a(android.content.Context r1, com.xiaomi.push.hn r2) {
            android.content.Context r0 = r1.getApplicationContext()
            boolean r0 = a(r0)
            if (r0 == 0) goto L12
            android.content.Context r1 = r1.getApplicationContext()
            com.xiaomi.push.service.ca.a(r1, r2)
            goto L19
        L12:
            com.xiaomi.push.en$a r0 = com.xiaomi.push.en.a
            if (r0 == 0) goto L19
            r0.uploader(r1, r2)
        L19:
            return
    }

    public static void a(android.content.Context r2, java.util.List<java.lang.String> r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L23
        L7:
            boolean r0 = r3.hasNext()     // Catch: java.lang.Throwable -> L23
            if (r0 == 0) goto L2b
            java.lang.Object r0 = r3.next()     // Catch: java.lang.Throwable -> L23
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L23
            com.xiaomi.push.hn r0 = a(r2, r0)     // Catch: java.lang.Throwable -> L23
            r1 = 0
            boolean r1 = com.xiaomi.push.service.bz.a(r0, r1)     // Catch: java.lang.Throwable -> L23
            if (r1 == 0) goto L1f
            goto L7
        L1f:
            a(r2, r0)     // Catch: java.lang.Throwable -> L23
            goto L7
        L23:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.xiaomi.channel.commonutils.logger.b.d(r2)
        L2b:
            return
    }

    public static void a(com.xiaomi.push.en.a r0) {
            com.xiaomi.push.en.a = r0
            return
    }

    public static boolean a(android.content.Context r1) {
            if (r1 == 0) goto L1a
            java.lang.String r0 = r1.getPackageName()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r0 = "com.xiaomi.xmsf"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L1a
            r1 = 1
            goto L1b
        L1a:
            r1 = 0
        L1b:
            return r1
    }
}
