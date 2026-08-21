package com.xiaomi.clientreport.manager;

public class a {
    private static final int a = 0;
    private static volatile com.xiaomi.clientreport.manager.a a;
    private android.content.Context a;
    private com.xiaomi.clientreport.data.Config a;
    private com.xiaomi.clientreport.processor.IEventProcessor a;
    private com.xiaomi.clientreport.processor.IPerfProcessor a;
    private java.lang.String a;
    private java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.clientreport.data.a>> a;
    private java.util.concurrent.ExecutorService a;
    private java.util.HashMap<java.lang.String, java.util.ArrayList<com.xiaomi.clientreport.data.a>> b;

    static {
            boolean r0 = com.xiaomi.push.m.a()
            if (r0 == 0) goto L9
            r0 = 30
            goto Lb
        L9:
            r0 = 10
        Lb:
            com.xiaomi.clientreport.manager.a.a = r0
            return
    }

    private a(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            r1.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
            r1.a = r2
            return
    }

    private int a() {
            r5 = this;
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.xiaomi.clientreport.data.a>> r0 = r5.b
            r1 = 0
            if (r0 == 0) goto L2d
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
            r2 = r1
        Le:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L2c
            java.lang.Object r3 = r0.next()
            java.lang.String r3 = (java.lang.String) r3
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.xiaomi.clientreport.data.a>> r4 = r5.b
            java.lang.Object r3 = r4.get(r3)
            java.util.ArrayList r3 = (java.util.ArrayList) r3
            if (r3 == 0) goto L29
            int r3 = r3.size()
            goto L2a
        L29:
            r3 = r1
        L2a:
            int r2 = r2 + r3
            goto Le
        L2c:
            r1 = r2
        L2d:
            return r1
    }

    static int a(com.xiaomi.clientreport.manager.a r0) {
            int r0 = r0.a()
            return r0
    }

    public static com.xiaomi.clientreport.manager.a a(android.content.Context r2) {
            com.xiaomi.clientreport.manager.a r0 = com.xiaomi.clientreport.manager.a.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.clientreport.manager.a> r0 = com.xiaomi.clientreport.manager.a.class
            monitor-enter(r0)
            com.xiaomi.clientreport.manager.a r1 = com.xiaomi.clientreport.manager.a.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.clientreport.manager.a r1 = new com.xiaomi.clientreport.manager.a     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.clientreport.manager.a.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.clientreport.manager.a r2 = com.xiaomi.clientreport.manager.a.a
            return r2
    }

    static java.util.concurrent.ExecutorService a(com.xiaomi.clientreport.manager.a r0) {
            java.util.concurrent.ExecutorService r0 = r0.a
            return r0
    }

    static void a(com.xiaomi.clientreport.manager.a r0) {
            r0.d()
            return
    }

    static void a(com.xiaomi.clientreport.manager.a r0, com.xiaomi.clientreport.data.EventClientReport r1) {
            r0.b(r1)
            return
    }

    static void a(com.xiaomi.clientreport.manager.a r0, com.xiaomi.clientreport.data.PerfClientReport r1) {
            r0.b(r1)
            return
    }

    private void a(com.xiaomi.push.al.a r2, int r3) {
            r1 = this;
            android.content.Context r0 = r1.a
            com.xiaomi.push.al r0 = com.xiaomi.push.al.a(r0)
            r0.b(r2, r3)
            return
    }

    private int b() {
            r9 = this;
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.clientreport.data.a>> r0 = r9.a
            r1 = 0
            if (r0 == 0) goto L49
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        Ld:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L49
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.clientreport.data.a>> r3 = r9.a
            java.lang.Object r2 = r3.get(r2)
            java.util.HashMap r2 = (java.util.HashMap) r2
            if (r2 == 0) goto Ld
            java.util.Set r3 = r2.keySet()
            java.util.Iterator r3 = r3.iterator()
        L2b:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto Ld
            java.lang.Object r4 = r3.next()
            java.lang.String r4 = (java.lang.String) r4
            java.lang.Object r4 = r2.get(r4)
            com.xiaomi.clientreport.data.a r4 = (com.xiaomi.clientreport.data.a) r4
            boolean r5 = r4 instanceof com.xiaomi.clientreport.data.PerfClientReport
            if (r5 == 0) goto L2b
            com.xiaomi.clientreport.data.PerfClientReport r4 = (com.xiaomi.clientreport.data.PerfClientReport) r4
            long r5 = (long) r1
            long r7 = r4.perfCounts
            long r5 = r5 + r7
            int r1 = (int) r5
            goto L2b
        L49:
            return r1
    }

    static int b(com.xiaomi.clientreport.manager.a r0) {
            int r0 = r0.b()
            return r0
    }

    private void b(com.xiaomi.clientreport.data.EventClientReport r2) {
            r1 = this;
            com.xiaomi.clientreport.processor.IEventProcessor r0 = r1.a
            if (r0 == 0) goto L28
            r0.a(r2)
            int r2 = r1.a()
            r0 = 10
            if (r2 < r0) goto L1e
            r1.d()
            android.content.Context r2 = r1.a
            com.xiaomi.push.al r2 = com.xiaomi.push.al.a(r2)
            java.lang.String r0 = "100888"
            r2.a(r0)
            goto L28
        L1e:
            com.xiaomi.clientreport.manager.d r2 = new com.xiaomi.clientreport.manager.d
            r2.<init>(r1)
            int r0 = com.xiaomi.clientreport.manager.a.a
            r1.a(r2, r0)
        L28:
            return
    }

    private void b(com.xiaomi.clientreport.data.PerfClientReport r2) {
            r1 = this;
            com.xiaomi.clientreport.processor.IPerfProcessor r0 = r1.a
            if (r0 == 0) goto L28
            r0.a(r2)
            int r2 = r1.b()
            r0 = 10
            if (r2 < r0) goto L1e
            r1.e()
            android.content.Context r2 = r1.a
            com.xiaomi.push.al r2 = com.xiaomi.push.al.a(r2)
            java.lang.String r0 = "100889"
            r2.a(r0)
            goto L28
        L1e:
            com.xiaomi.clientreport.manager.f r2 = new com.xiaomi.clientreport.manager.f
            r2.<init>(r1)
            int r0 = com.xiaomi.clientreport.manager.a.a
            r1.a(r2, r0)
        L28:
            return
    }

    static void b(com.xiaomi.clientreport.manager.a r0) {
            r0.e()
            return
    }

    private void d() {
            r3 = this;
            com.xiaomi.clientreport.processor.IEventProcessor r0 = r3.a     // Catch: java.lang.Exception -> L6
            r0.b()     // Catch: java.lang.Exception -> L6
            goto L1f
        L6:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "we: "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r0)
        L1f:
            return
    }

    private void e() {
            r3 = this;
            com.xiaomi.clientreport.processor.IPerfProcessor r0 = r3.a     // Catch: java.lang.Exception -> L6
            r0.b()     // Catch: java.lang.Exception -> L6
            goto L1f
        L6:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "wp: "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r0)
        L1f:
            return
    }

    private void f() {
            r7 = this;
            android.content.Context r0 = r7.a
            com.xiaomi.clientreport.manager.a r0 = a(r0)
            com.xiaomi.clientreport.data.Config r0 = r0.a()
            boolean r0 = r0.isEventUploadSwitchOpen()
            if (r0 != 0) goto L11
            return
        L11:
            com.xiaomi.push.bq r0 = new com.xiaomi.push.bq
            android.content.Context r1 = r7.a
            r0.<init>(r1)
            android.content.Context r1 = r7.a
            com.xiaomi.clientreport.manager.a r1 = a(r1)
            com.xiaomi.clientreport.data.Config r1 = r1.a()
            long r1 = r1.getEventUploadFrequency()
            int r1 = (int) r1
            r2 = 1800(0x708, float:2.522E-42)
            if (r1 >= r2) goto L2c
            r1 = r2
        L2c:
            android.content.Context r2 = r7.a
            com.xiaomi.push.bw r2 = com.xiaomi.push.bw.a(r2)
            r3 = 0
            java.lang.String r5 = "sp_client_report_status"
            java.lang.String r6 = "event_last_upload_time"
            long r2 = r2.a(r5, r6, r3)
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r2
            int r2 = r1 * 1000
            long r2 = (long) r2
            int r2 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r2 <= 0) goto L58
            android.content.Context r2 = r7.a
            com.xiaomi.push.al r2 = com.xiaomi.push.al.a(r2)
            com.xiaomi.clientreport.manager.h r3 = new com.xiaomi.clientreport.manager.h
            r3.<init>(r7, r0)
            r4 = 10
            r2.a(r3, r4)
        L58:
            java.lang.Class<com.xiaomi.clientreport.manager.a> r2 = com.xiaomi.clientreport.manager.a.class
            monitor-enter(r2)
            android.content.Context r3 = r7.a     // Catch: java.lang.Throwable -> L7d
            com.xiaomi.push.al r3 = com.xiaomi.push.al.a(r3)     // Catch: java.lang.Throwable -> L7d
            boolean r3 = r3.a(r0, r1)     // Catch: java.lang.Throwable -> L7d
            if (r3 != 0) goto L7b
            android.content.Context r3 = r7.a     // Catch: java.lang.Throwable -> L7d
            com.xiaomi.push.al r3 = com.xiaomi.push.al.a(r3)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r4 = "100886"
            r3.a(r4)     // Catch: java.lang.Throwable -> L7d
            android.content.Context r3 = r7.a     // Catch: java.lang.Throwable -> L7d
            com.xiaomi.push.al r3 = com.xiaomi.push.al.a(r3)     // Catch: java.lang.Throwable -> L7d
            r3.a(r0, r1)     // Catch: java.lang.Throwable -> L7d
        L7b:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L7d
            return
        L7d:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L7d
            throw r0
    }

    private void g() {
            r7 = this;
            android.content.Context r0 = r7.a
            com.xiaomi.clientreport.manager.a r0 = a(r0)
            com.xiaomi.clientreport.data.Config r0 = r0.a()
            boolean r0 = r0.isPerfUploadSwitchOpen()
            if (r0 != 0) goto L11
            return
        L11:
            com.xiaomi.push.br r0 = new com.xiaomi.push.br
            android.content.Context r1 = r7.a
            r0.<init>(r1)
            android.content.Context r1 = r7.a
            com.xiaomi.clientreport.manager.a r1 = a(r1)
            com.xiaomi.clientreport.data.Config r1 = r1.a()
            long r1 = r1.getPerfUploadFrequency()
            int r1 = (int) r1
            r2 = 1800(0x708, float:2.522E-42)
            if (r1 >= r2) goto L2c
            r1 = r2
        L2c:
            android.content.Context r2 = r7.a
            com.xiaomi.push.bw r2 = com.xiaomi.push.bw.a(r2)
            r3 = 0
            java.lang.String r5 = "sp_client_report_status"
            java.lang.String r6 = "perf_last_upload_time"
            long r2 = r2.a(r5, r6, r3)
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r2
            int r2 = r1 * 1000
            long r2 = (long) r2
            int r2 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r2 <= 0) goto L58
            android.content.Context r2 = r7.a
            com.xiaomi.push.al r2 = com.xiaomi.push.al.a(r2)
            com.xiaomi.clientreport.manager.i r3 = new com.xiaomi.clientreport.manager.i
            r3.<init>(r7, r0)
            r4 = 15
            r2.a(r3, r4)
        L58:
            java.lang.Class<com.xiaomi.clientreport.manager.a> r2 = com.xiaomi.clientreport.manager.a.class
            monitor-enter(r2)
            android.content.Context r3 = r7.a     // Catch: java.lang.Throwable -> L7d
            com.xiaomi.push.al r3 = com.xiaomi.push.al.a(r3)     // Catch: java.lang.Throwable -> L7d
            boolean r3 = r3.a(r0, r1)     // Catch: java.lang.Throwable -> L7d
            if (r3 != 0) goto L7b
            android.content.Context r3 = r7.a     // Catch: java.lang.Throwable -> L7d
            com.xiaomi.push.al r3 = com.xiaomi.push.al.a(r3)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r4 = "100887"
            r3.a(r4)     // Catch: java.lang.Throwable -> L7d
            android.content.Context r3 = r7.a     // Catch: java.lang.Throwable -> L7d
            com.xiaomi.push.al r3 = com.xiaomi.push.al.a(r3)     // Catch: java.lang.Throwable -> L7d
            r3.a(r0, r1)     // Catch: java.lang.Throwable -> L7d
        L7b:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L7d
            return
        L7d:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L7d
            throw r0
    }

    public synchronized com.xiaomi.clientreport.data.Config a() {
            r1 = this;
            monitor-enter(r1)
            com.xiaomi.clientreport.data.Config r0 = r1.a     // Catch: java.lang.Throwable -> L11
            if (r0 != 0) goto Ld
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> L11
            com.xiaomi.clientreport.data.Config r0 = com.xiaomi.clientreport.data.Config.defaultConfig(r0)     // Catch: java.lang.Throwable -> L11
            r1.a = r0     // Catch: java.lang.Throwable -> L11
        Ld:
            com.xiaomi.clientreport.data.Config r0 = r1.a     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)
            return r0
        L11:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public com.xiaomi.clientreport.data.EventClientReport a(int r4, java.lang.String r5) {
            r3 = this;
            com.xiaomi.clientreport.data.EventClientReport r0 = new com.xiaomi.clientreport.data.EventClientReport
            r0.<init>()
            r0.eventContent = r5
            long r1 = java.lang.System.currentTimeMillis()
            r0.eventTime = r1
            r0.eventType = r4
            r4 = 6
            java.lang.String r4 = com.xiaomi.push.bp.a(r4)
            r0.eventId = r4
            r4 = 1000(0x3e8, float:1.401E-42)
            r0.production = r4
            r4 = 1001(0x3e9, float:1.403E-42)
            r0.reportType = r4
            java.lang.String r4 = "E100004"
            r0.clientInterfaceId = r4
            android.content.Context r4 = r3.a
            java.lang.String r4 = r4.getPackageName()
            r0.setAppPackageName(r4)
            java.lang.String r4 = r3.a
            r0.setSdkVersion(r4)
            return r0
    }

    public void a() {
            r1 = this;
            android.content.Context r0 = r1.a
            com.xiaomi.clientreport.manager.a r0 = a(r0)
            r0.f()
            android.content.Context r0 = r1.a
            com.xiaomi.clientreport.manager.a r0 = a(r0)
            r0.g()
            return
    }

    public void a(com.xiaomi.clientreport.data.Config r1, com.xiaomi.clientreport.processor.IEventProcessor r2, com.xiaomi.clientreport.processor.IPerfProcessor r3) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            r0.a = r3
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.xiaomi.clientreport.data.a>> r1 = r0.b
            r2.setEventMap(r1)
            com.xiaomi.clientreport.processor.IPerfProcessor r1 = r0.a
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.clientreport.data.a>> r2 = r0.a
            r1.setPerfMap(r2)
            return
    }

    public void a(com.xiaomi.clientreport.data.EventClientReport r3) {
            r2 = this;
            com.xiaomi.clientreport.data.Config r0 = r2.a()
            boolean r0 = r0.isEventUploadSwitchOpen()
            if (r0 == 0) goto L14
            java.util.concurrent.ExecutorService r0 = r2.a
            com.xiaomi.clientreport.manager.b r1 = new com.xiaomi.clientreport.manager.b
            r1.<init>(r2, r3)
            r0.execute(r1)
        L14:
            return
    }

    public void a(com.xiaomi.clientreport.data.PerfClientReport r3) {
            r2 = this;
            com.xiaomi.clientreport.data.Config r0 = r2.a()
            boolean r0 = r0.isPerfUploadSwitchOpen()
            if (r0 == 0) goto L14
            java.util.concurrent.ExecutorService r0 = r2.a
            com.xiaomi.clientreport.manager.c r1 = new com.xiaomi.clientreport.manager.c
            r1.<init>(r2, r3)
            r0.execute(r1)
        L14:
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(boolean r7, boolean r8, long r9, long r11) {
            r6 = this;
            com.xiaomi.clientreport.data.Config r0 = r6.a
            if (r0 == 0) goto Le0
            boolean r0 = r0.isEventUploadSwitchOpen()
            if (r7 != r0) goto L26
            com.xiaomi.clientreport.data.Config r0 = r6.a
            boolean r0 = r0.isPerfUploadSwitchOpen()
            if (r8 != r0) goto L26
            com.xiaomi.clientreport.data.Config r0 = r6.a
            long r0 = r0.getEventUploadFrequency()
            int r0 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            if (r0 != 0) goto L26
            com.xiaomi.clientreport.data.Config r0 = r6.a
            long r0 = r0.getPerfUploadFrequency()
            int r0 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
            if (r0 == 0) goto Le0
        L26:
            com.xiaomi.clientreport.data.Config r0 = r6.a
            long r0 = r0.getEventUploadFrequency()
            com.xiaomi.clientreport.data.Config r2 = r6.a
            long r2 = r2.getPerfUploadFrequency()
            com.xiaomi.clientreport.data.Config$Builder r4 = com.xiaomi.clientreport.data.Config.getBuilder()
            android.content.Context r5 = r6.a
            java.lang.String r5 = com.xiaomi.push.bt.a(r5)
            com.xiaomi.clientreport.data.Config$Builder r4 = r4.setAESKey(r5)
            com.xiaomi.clientreport.data.Config r5 = r6.a
            boolean r5 = r5.isEventEncrypted()
            com.xiaomi.clientreport.data.Config$Builder r4 = r4.setEventEncrypted(r5)
            com.xiaomi.clientreport.data.Config$Builder r7 = r4.setEventUploadSwitchOpen(r7)
            com.xiaomi.clientreport.data.Config$Builder r7 = r7.setEventUploadFrequency(r9)
            com.xiaomi.clientreport.data.Config$Builder r7 = r7.setPerfUploadSwitchOpen(r8)
            com.xiaomi.clientreport.data.Config$Builder r7 = r7.setPerfUploadFrequency(r11)
            android.content.Context r8 = r6.a
            com.xiaomi.clientreport.data.Config r7 = r7.build(r8)
            r6.a = r7
            boolean r8 = r7.isEventUploadSwitchOpen()
            if (r8 != 0) goto L74
            android.content.Context r8 = r6.a
            com.xiaomi.push.al r8 = com.xiaomi.push.al.a(r8)
            java.lang.String r9 = "100886"
            r8.a(r9)
            goto La0
        L74:
            long r8 = r7.getEventUploadFrequency()
            int r8 = (r0 > r8 ? 1 : (r0 == r8 ? 0 : -1))
            if (r8 == 0) goto La0
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            android.content.Context r9 = r6.a
            java.lang.String r9 = r9.getPackageName()
            r8.append(r9)
            java.lang.String r9 = "reset event job "
            r8.append(r9)
            long r9 = r7.getEventUploadFrequency()
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r8)
            r6.f()
        La0:
            com.xiaomi.clientreport.data.Config r8 = r6.a
            boolean r8 = r8.isPerfUploadSwitchOpen()
            if (r8 != 0) goto Lb4
            android.content.Context r7 = r6.a
            com.xiaomi.push.al r7 = com.xiaomi.push.al.a(r7)
            java.lang.String r8 = "100887"
            r7.a(r8)
            goto Le0
        Lb4:
            long r8 = r7.getPerfUploadFrequency()
            int r8 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r8 == 0) goto Le0
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            android.content.Context r9 = r6.a
            java.lang.String r9 = r9.getPackageName()
            r8.append(r9)
            java.lang.String r9 = " reset perf job "
            r8.append(r9)
            long r9 = r7.getPerfUploadFrequency()
            r8.append(r9)
            java.lang.String r7 = r8.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r7)
            r6.g()
        Le0:
            return
    }

    public void b() {
            r2 = this;
            com.xiaomi.clientreport.data.Config r0 = r2.a()
            boolean r0 = r0.isEventUploadSwitchOpen()
            if (r0 == 0) goto L1e
            com.xiaomi.push.bs r0 = new com.xiaomi.push.bs
            r0.<init>()
            android.content.Context r1 = r2.a
            r0.a(r1)
            com.xiaomi.clientreport.processor.IEventProcessor r1 = r2.a
            r0.a(r1)
            java.util.concurrent.ExecutorService r1 = r2.a
            r1.execute(r0)
        L1e:
            return
    }

    public void c() {
            r2 = this;
            com.xiaomi.clientreport.data.Config r0 = r2.a()
            boolean r0 = r0.isPerfUploadSwitchOpen()
            if (r0 == 0) goto L1e
            com.xiaomi.push.bs r0 = new com.xiaomi.push.bs
            r0.<init>()
            com.xiaomi.clientreport.processor.IPerfProcessor r1 = r2.a
            r0.a(r1)
            android.content.Context r1 = r2.a
            r0.a(r1)
            java.util.concurrent.ExecutorService r1 = r2.a
            r1.execute(r0)
        L1e:
            return
    }
}
