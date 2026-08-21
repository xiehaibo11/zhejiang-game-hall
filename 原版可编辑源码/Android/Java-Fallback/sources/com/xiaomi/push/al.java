package com.xiaomi.push;

public class al {
    private static volatile com.xiaomi.push.al a;
    private android.content.SharedPreferences a;
    private java.lang.Object a;
    private java.util.Map<java.lang.String, java.util.concurrent.ScheduledFuture> a;
    private java.util.concurrent.ScheduledThreadPoolExecutor a;

    public abstract class a implements java.lang.Runnable {
        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public abstract java.lang.String a();
    }

    class b implements java.lang.Runnable {
        com.xiaomi.push.al.a a;

        public b(com.xiaomi.push.al.a r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        void a() {
                r0 = this;
                return
        }

        void b() {
                r0 = this;
                return
        }

        @Override
        public void run() {
                r1 = this;
                r1.a()
                com.xiaomi.push.al$a r0 = r1.a
                r0.run()
                r1.b()
                return
        }
    }

    private al(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.ScheduledThreadPoolExecutor r0 = new java.util.concurrent.ScheduledThreadPoolExecutor
            r1 = 1
            r0.<init>(r1)
            r2.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.a = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.a = r0
            java.lang.String r0 = "mipush_extra"
            r1 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r0, r1)
            r2.a = r3
            return
    }

    static android.content.SharedPreferences a(com.xiaomi.push.al r0) {
            android.content.SharedPreferences r0 = r0.a
            return r0
    }

    public static com.xiaomi.push.al a(android.content.Context r2) {
            com.xiaomi.push.al r0 = com.xiaomi.push.al.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.push.al> r0 = com.xiaomi.push.al.class
            monitor-enter(r0)
            com.xiaomi.push.al r1 = com.xiaomi.push.al.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.push.al r1 = new com.xiaomi.push.al     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.push.al.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.push.al r2 = com.xiaomi.push.al.a
            return r2
    }

    static java.lang.Object a(com.xiaomi.push.al r0) {
            java.lang.Object r0 = r0.a
            return r0
    }

    private static java.lang.String a(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "last_job_time"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    static java.util.Map a(com.xiaomi.push.al r0) {
            java.util.Map<java.lang.String, java.util.concurrent.ScheduledFuture> r0 = r0.a
            return r0
    }

    private java.util.concurrent.ScheduledFuture a(com.xiaomi.push.al.a r3) {
            r2 = this;
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
            java.util.Map<java.lang.String, java.util.concurrent.ScheduledFuture> r1 = r2.a     // Catch: java.lang.Throwable -> L11
            java.lang.String r3 = r3.a()     // Catch: java.lang.Throwable -> L11
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L11
            java.util.concurrent.ScheduledFuture r3 = (java.util.concurrent.ScheduledFuture) r3     // Catch: java.lang.Throwable -> L11
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            return r3
        L11:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            throw r3
    }

    public void a(java.lang.Runnable r2) {
            r1 = this;
            r0 = 0
            r1.a(r2, r0)
            return
    }

    public void a(java.lang.Runnable r4, int r5) {
            r3 = this;
            java.util.concurrent.ScheduledThreadPoolExecutor r0 = r3.a
            long r1 = (long) r5
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            r0.schedule(r4, r1, r5)
            return
    }

    public boolean a(com.xiaomi.push.al.a r2) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.b(r2, r0)
            return r2
    }

    public boolean a(com.xiaomi.push.al.a r2, int r3) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.a(r2, r3, r0)
            return r2
    }

    public boolean a(com.xiaomi.push.al.a r2, int r3, int r4) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.a(r2, r3, r4, r0)
            return r2
    }

    public boolean a(com.xiaomi.push.al.a r9, int r10, int r11, boolean r12) {
            r8 = this;
            if (r9 == 0) goto L57
            java.util.concurrent.ScheduledFuture r0 = r8.a(r9)
            if (r0 == 0) goto L9
            goto L57
        L9:
            java.lang.String r0 = r9.a()
            java.lang.String r0 = a(r0)
            com.xiaomi.push.am r2 = new com.xiaomi.push.am
            r2.<init>(r8, r9, r12, r0)
            if (r12 != 0) goto L36
            android.content.SharedPreferences r12 = r8.a
            r3 = 0
            long r0 = r12.getLong(r0, r3)
            long r3 = java.lang.System.currentTimeMillis()
            long r3 = r3 - r0
            long r0 = java.lang.Math.abs(r3)
            r3 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r3
            int r12 = r10 - r11
            long r3 = (long) r12
            int r12 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r12 >= 0) goto L36
            long r11 = (long) r10
            long r11 = r11 - r0
            int r11 = (int) r11
        L36:
            java.util.concurrent.ScheduledThreadPoolExecutor r1 = r8.a     // Catch: java.lang.Exception -> L51
            long r3 = (long) r11     // Catch: java.lang.Exception -> L51
            long r5 = (long) r10     // Catch: java.lang.Exception -> L51
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Exception -> L51
            java.util.concurrent.ScheduledFuture r10 = r1.scheduleAtFixedRate(r2, r3, r5, r7)     // Catch: java.lang.Exception -> L51
            java.lang.Object r11 = r8.a     // Catch: java.lang.Exception -> L51
            monitor-enter(r11)     // Catch: java.lang.Exception -> L51
            java.util.Map<java.lang.String, java.util.concurrent.ScheduledFuture> r12 = r8.a     // Catch: java.lang.Throwable -> L4e
            java.lang.String r9 = r9.a()     // Catch: java.lang.Throwable -> L4e
            r12.put(r9, r10)     // Catch: java.lang.Throwable -> L4e
            monitor-exit(r11)     // Catch: java.lang.Throwable -> L4e
            goto L55
        L4e:
            r9 = move-exception
            monitor-exit(r11)     // Catch: java.lang.Throwable -> L4e
            throw r9     // Catch: java.lang.Exception -> L51
        L51:
            r9 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r9)
        L55:
            r9 = 1
            return r9
        L57:
            r9 = 0
            return r9
    }

    public boolean a(java.lang.String r5) {
            r4 = this;
            java.lang.Object r0 = r4.a
            monitor-enter(r0)
            java.util.Map<java.lang.String, java.util.concurrent.ScheduledFuture> r1 = r4.a     // Catch: java.lang.Throwable -> L1b
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> L1b
            java.util.concurrent.ScheduledFuture r1 = (java.util.concurrent.ScheduledFuture) r1     // Catch: java.lang.Throwable -> L1b
            r2 = 0
            if (r1 != 0) goto L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            return r2
        L10:
            java.util.Map<java.lang.String, java.util.concurrent.ScheduledFuture> r3 = r4.a     // Catch: java.lang.Throwable -> L1b
            r3.remove(r5)     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            boolean r5 = r1.cancel(r2)
            return r5
        L1b:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            throw r5
    }

    public boolean b(com.xiaomi.push.al.a r5, int r6) {
            r4 = this;
            if (r5 == 0) goto L29
            java.util.concurrent.ScheduledFuture r0 = r4.a(r5)
            if (r0 == 0) goto L9
            goto L29
        L9:
            com.xiaomi.push.an r0 = new com.xiaomi.push.an
            r0.<init>(r4, r5)
            java.util.concurrent.ScheduledThreadPoolExecutor r1 = r4.a
            long r2 = (long) r6
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.ScheduledFuture r6 = r1.schedule(r0, r2, r6)
            java.lang.Object r0 = r4.a
            monitor-enter(r0)
            java.util.Map<java.lang.String, java.util.concurrent.ScheduledFuture> r1 = r4.a     // Catch: java.lang.Throwable -> L26
            java.lang.String r5 = r5.a()     // Catch: java.lang.Throwable -> L26
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> L26
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            r5 = 1
            return r5
        L26:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            throw r5
        L29:
            r5 = 0
            return r5
    }
}
