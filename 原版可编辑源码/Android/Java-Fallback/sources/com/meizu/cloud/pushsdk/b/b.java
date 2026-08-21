package com.meizu.cloud.pushsdk.b;

class b implements com.meizu.cloud.pushsdk.b.f {
    private final java.text.SimpleDateFormat a;
    private final java.util.List<com.meizu.cloud.pushsdk.b.b.a> b;
    private final android.os.Handler c;
    private long d;
    private int e;
    private final com.meizu.cloud.pushsdk.b.e f;
    private java.lang.String g;
    private final java.lang.String h;
    private boolean i;
    private java.util.concurrent.ThreadPoolExecutor j;



    class a {
        final java.lang.String a;
        final java.lang.String b;
        final java.lang.String c;
        final com.meizu.cloud.pushsdk.b.b d;

        public a(com.meizu.cloud.pushsdk.b.b r5, java.lang.String r6, java.lang.String r7, java.lang.String r8) {
                r4 = this;
                r4.d = r5
                r4.<init>()
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.text.SimpleDateFormat r1 = com.meizu.cloud.pushsdk.b.b.e(r5)
                java.util.Date r2 = new java.util.Date
                r2.<init>()
                java.lang.String r1 = r1.format(r2)
                r0.append(r1)
                java.lang.String r1 = " "
                r0.append(r1)
                java.lang.String r5 = com.meizu.cloud.pushsdk.b.b.f(r5)
                r0.append(r5)
                java.lang.String r5 = "-"
                r0.append(r5)
                java.lang.Thread r5 = java.lang.Thread.currentThread()
                long r2 = r5.getId()
                r0.append(r2)
                r0.append(r1)
                r0.append(r6)
                java.lang.String r5 = "/"
                r0.append(r5)
                java.lang.String r5 = r0.toString()
                r4.a = r5
                r4.b = r7
                r4.c = r8
                return
        }
    }

    public b() {
            r9 = this;
            r9.<init>()
            r0 = 60
            r9.d = r0
            r0 = 10
            r9.e = r0
            r0 = 0
            r9.i = r0
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "MM-dd HH:mm:ss"
            r0.<init>(r1)
            r9.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            r9.b = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r9.c = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r1 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r1 = r1.getAbsolutePath()
            r0.append(r1)
            java.lang.String r1 = "/Android/data/pushSdk/defaultLog"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r9.g = r0
            com.meizu.cloud.pushsdk.b.e r0 = new com.meizu.cloud.pushsdk.b.e
            r0.<init>()
            r9.f = r0
            int r0 = android.os.Process.myPid()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r9.h = r0
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r7.<init>()
            com.meizu.cloud.pushsdk.b.j r1 = new com.meizu.cloud.pushsdk.b.j
            r1.<init>()
            java.lang.String r2 = "log-pool-%d"
            com.meizu.cloud.pushsdk.b.j r1 = r1.a(r2)
            java.util.concurrent.ThreadFactory r8 = r1.a()
            r2 = 1
            r3 = 1
            r4 = 30
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7, r8)
            r9.j = r0
            r1 = 1
            r0.allowCoreThreadTimeOut(r1)
            return
    }

    static java.util.List a(com.meizu.cloud.pushsdk.b.b r0) {
            java.util.List<com.meizu.cloud.pushsdk.b.b$a> r0 = r0.b
            return r0
    }

    private void a(com.meizu.cloud.pushsdk.b.b.a r3) {
            r2 = this;
            java.util.List<com.meizu.cloud.pushsdk.b.b$a> r0 = r2.b     // Catch: java.lang.Exception -> L6
            r0.add(r3)     // Catch: java.lang.Exception -> L6
            goto L21
        L6:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "add logInfo error "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "Logger"
            android.util.Log.e(r0, r3)
        L21:
            return
    }

    static android.os.Handler b(com.meizu.cloud.pushsdk.b.b r0) {
            android.os.Handler r0 = r0.c
            return r0
    }

    private void b() {
            r6 = this;
            java.util.List<com.meizu.cloud.pushsdk.b.b$a> r0 = r6.b
            int r0 = r0.size()
            if (r0 != 0) goto L17
            android.os.Handler r0 = r6.c
            com.meizu.cloud.pushsdk.b.b$1 r1 = new com.meizu.cloud.pushsdk.b.b$1
            r1.<init>(r6)
            long r2 = r6.d
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 * r4
            r0.postDelayed(r1, r2)
        L17:
            return
    }

    static java.lang.String c(com.meizu.cloud.pushsdk.b.b r0) {
            java.lang.String r0 = r0.g
            return r0
    }

    private void c() {
            r2 = this;
            java.util.List<com.meizu.cloud.pushsdk.b.b$a> r0 = r2.b
            int r0 = r0.size()
            int r1 = r2.e
            if (r0 != r1) goto Le
            r0 = 1
            r2.a(r0)
        Le:
            return
    }

    static com.meizu.cloud.pushsdk.b.e d(com.meizu.cloud.pushsdk.b.b r0) {
            com.meizu.cloud.pushsdk.b.e r0 = r0.f
            return r0
    }

    static java.text.SimpleDateFormat e(com.meizu.cloud.pushsdk.b.b r0) {
            java.text.SimpleDateFormat r0 = r0.a
            return r0
    }

    static java.lang.String f(com.meizu.cloud.pushsdk.b.b r0) {
            java.lang.String r0 = r0.h
            return r0
    }

    @Override
    public void a(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }

    @Override
    public void a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = r3.i
            if (r0 == 0) goto L7
            android.util.Log.d(r4, r5)
        L7:
            java.util.List<com.meizu.cloud.pushsdk.b.b$a> r0 = r3.b
            monitor-enter(r0)
            r3.b()     // Catch: java.lang.Throwable -> L1c
            com.meizu.cloud.pushsdk.b.b$a r1 = new com.meizu.cloud.pushsdk.b.b$a     // Catch: java.lang.Throwable -> L1c
            java.lang.String r2 = "D"
            r1.<init>(r3, r2, r4, r5)     // Catch: java.lang.Throwable -> L1c
            r3.a(r1)     // Catch: java.lang.Throwable -> L1c
            r3.c()     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            return
        L1c:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            throw r4
    }

    @Override
    public void a(java.lang.String r5, java.lang.String r6, java.lang.Throwable r7) {
            r4 = this;
            boolean r0 = r4.i
            if (r0 == 0) goto L7
            android.util.Log.e(r5, r6, r7)
        L7:
            java.util.List<com.meizu.cloud.pushsdk.b.b$a> r0 = r4.b
            monitor-enter(r0)
            r4.b()     // Catch: java.lang.Throwable -> L34
            com.meizu.cloud.pushsdk.b.b$a r1 = new com.meizu.cloud.pushsdk.b.b$a     // Catch: java.lang.Throwable -> L34
            java.lang.String r2 = "E"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L34
            r3.<init>()     // Catch: java.lang.Throwable -> L34
            r3.append(r6)     // Catch: java.lang.Throwable -> L34
            java.lang.String r6 = "\n"
            r3.append(r6)     // Catch: java.lang.Throwable -> L34
            java.lang.String r6 = android.util.Log.getStackTraceString(r7)     // Catch: java.lang.Throwable -> L34
            r3.append(r6)     // Catch: java.lang.Throwable -> L34
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> L34
            r1.<init>(r4, r2, r5, r6)     // Catch: java.lang.Throwable -> L34
            r4.a(r1)     // Catch: java.lang.Throwable -> L34
            r4.c()     // Catch: java.lang.Throwable -> L34
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L34
            return
        L34:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L34
            throw r5
    }

    @Override
    public void a(boolean r2) {
            r1 = this;
            com.meizu.cloud.pushsdk.b.b$2 r0 = new com.meizu.cloud.pushsdk.b.b$2
            r0.<init>(r1)
            if (r2 == 0) goto Lf
            java.util.concurrent.ThreadPoolExecutor r2 = r1.j
            if (r2 == 0) goto Lf
            r2.execute(r0)
            goto L12
        Lf:
            r0.run()
        L12:
            return
    }

    @Override
    public boolean a() {
            r1 = this;
            boolean r0 = r1.i
            return r0
    }

    @Override
    public void b(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = r3.i
            if (r0 == 0) goto L7
            android.util.Log.i(r4, r5)
        L7:
            java.util.List<com.meizu.cloud.pushsdk.b.b$a> r0 = r3.b
            monitor-enter(r0)
            r3.b()     // Catch: java.lang.Throwable -> L1c
            com.meizu.cloud.pushsdk.b.b$a r1 = new com.meizu.cloud.pushsdk.b.b$a     // Catch: java.lang.Throwable -> L1c
            java.lang.String r2 = "I"
            r1.<init>(r3, r2, r4, r5)     // Catch: java.lang.Throwable -> L1c
            r3.a(r1)     // Catch: java.lang.Throwable -> L1c
            r3.c()     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            return
        L1c:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            throw r4
    }

    @Override
    public void b(boolean r1) {
            r0 = this;
            r0.i = r1
            return
    }

    @Override
    public void c(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = r3.i
            if (r0 == 0) goto L7
            android.util.Log.w(r4, r5)
        L7:
            java.util.List<com.meizu.cloud.pushsdk.b.b$a> r0 = r3.b
            monitor-enter(r0)
            r3.b()     // Catch: java.lang.Throwable -> L1c
            com.meizu.cloud.pushsdk.b.b$a r1 = new com.meizu.cloud.pushsdk.b.b$a     // Catch: java.lang.Throwable -> L1c
            java.lang.String r2 = "W"
            r1.<init>(r3, r2, r4, r5)     // Catch: java.lang.Throwable -> L1c
            r3.a(r1)     // Catch: java.lang.Throwable -> L1c
            r3.c()     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            return
        L1c:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            throw r4
    }

    @Override
    public void d(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = r3.i
            if (r0 == 0) goto L7
            android.util.Log.e(r4, r5)
        L7:
            java.util.List<com.meizu.cloud.pushsdk.b.b$a> r0 = r3.b
            monitor-enter(r0)
            r3.b()     // Catch: java.lang.Throwable -> L1c
            com.meizu.cloud.pushsdk.b.b$a r1 = new com.meizu.cloud.pushsdk.b.b$a     // Catch: java.lang.Throwable -> L1c
            java.lang.String r2 = "E"
            r1.<init>(r3, r2, r4, r5)     // Catch: java.lang.Throwable -> L1c
            r3.a(r1)     // Catch: java.lang.Throwable -> L1c
            r3.c()     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            return
        L1c:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            throw r4
    }
}
