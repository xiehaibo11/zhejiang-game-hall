package com.xiaomi.push.service;

public final class bx implements com.xiaomi.push.service.ar {
    private static volatile com.xiaomi.push.service.bx a;
    private long a;
    android.content.Context a;
    private android.content.SharedPreferences a;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.xiaomi.push.service.bx.a> a;
    private volatile boolean a;

    public abstract class a implements java.lang.Runnable {
        long a;
        java.lang.String a;

        a(java.lang.String r1, long r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.a = r2
                return
        }

        abstract void a(com.xiaomi.push.service.bx r1);

        @Override
        public void run() {
                r8 = this;
                com.xiaomi.push.service.bx r0 = com.xiaomi.push.service.bx.a()
                if (r0 == 0) goto L74
                com.xiaomi.push.service.bx r0 = com.xiaomi.push.service.bx.a()
                android.content.Context r0 = r0.a
                boolean r1 = com.xiaomi.push.bj.d(r0)
                if (r1 != 0) goto L13
                return
            L13:
                long r1 = java.lang.System.currentTimeMillis()
                com.xiaomi.push.service.bx r3 = com.xiaomi.push.service.bx.a()
                android.content.SharedPreferences r3 = com.xiaomi.push.service.bx.a(r3)
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r5 = ":ts-"
                r4.append(r5)
                java.lang.String r6 = r8.a
                r4.append(r6)
                java.lang.String r4 = r4.toString()
                r6 = 0
                long r3 = r3.getLong(r4, r6)
                long r1 = r1 - r3
                long r3 = r8.a
                int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r1 > 0) goto L45
                boolean r0 = com.xiaomi.push.ai.a(r0)
                if (r0 == 0) goto L74
            L45:
                com.xiaomi.push.service.bx r0 = com.xiaomi.push.service.bx.a()
                android.content.SharedPreferences r0 = com.xiaomi.push.service.bx.a(r0)
                android.content.SharedPreferences$Editor r0 = r0.edit()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r5)
                java.lang.String r2 = r8.a
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                long r2 = java.lang.System.currentTimeMillis()
                android.content.SharedPreferences$Editor r0 = r0.putLong(r1, r2)
                com.xiaomi.push.t.a(r0)
                com.xiaomi.push.service.bx r0 = com.xiaomi.push.service.bx.a()
                r8.a(r0)
            L74:
                return
        }
    }

    private bx(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r1.<init>()
            r2.a = r1
            android.content.Context r1 = r3.getApplicationContext()
            r2.a = r1
            java.lang.String r1 = "sync"
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r0)
            r2.a = r3
            return
    }

    static android.content.SharedPreferences a(com.xiaomi.push.service.bx r0) {
            android.content.SharedPreferences r0 = r0.a
            return r0
    }

    static com.xiaomi.push.service.bx a() {
            com.xiaomi.push.service.bx r0 = com.xiaomi.push.service.bx.a
            return r0
    }

    public static com.xiaomi.push.service.bx a(android.content.Context r2) {
            com.xiaomi.push.service.bx r0 = com.xiaomi.push.service.bx.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.push.service.bx> r0 = com.xiaomi.push.service.bx.class
            monitor-enter(r0)
            com.xiaomi.push.service.bx r1 = com.xiaomi.push.service.bx.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.push.service.bx r1 = new com.xiaomi.push.service.bx     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.push.service.bx.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.push.service.bx r2 = com.xiaomi.push.service.bx.a
            return r2
    }

    static java.util.concurrent.ConcurrentHashMap a(com.xiaomi.push.service.bx r0) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.xiaomi.push.service.bx$a> r0 = r0.a
            return r0
    }

    static boolean a(com.xiaomi.push.service.bx r0, boolean r1) {
            r0.a = r1
            return r1
    }

    public java.lang.String a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = ":"
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            java.lang.String r4 = ""
            java.lang.String r3 = r0.getString(r3, r4)
            return r3
    }

    @Override
    public void a() {
            r6 = this;
            boolean r0 = r6.a
            if (r0 == 0) goto L5
            return
        L5:
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r6.a
            long r2 = r0 - r2
            r4 = 3600000(0x36ee80, double:1.7786363E-317)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L15
            return
        L15:
            r6.a = r0
            r0 = 1
            r6.a = r0
            double r0 = java.lang.Math.random()
            r2 = 4621819117588971520(0x4024000000000000, double:10.0)
            double r0 = r0 * r2
            int r0 = (int) r0
            android.content.Context r1 = r6.a
            com.xiaomi.push.al r1 = com.xiaomi.push.al.a(r1)
            com.xiaomi.push.service.by r2 = new com.xiaomi.push.service.by
            r2.<init>(r6)
            r1.a(r2, r0)
            return
    }

    public void a(com.xiaomi.push.service.bx.a r5) {
            r4 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.xiaomi.push.service.bx$a> r0 = r4.a
            java.lang.String r1 = r5.a
            java.lang.Object r0 = r0.putIfAbsent(r1, r5)
            if (r0 != 0) goto L1d
            double r0 = java.lang.Math.random()
            r2 = 4629137466983448576(0x403e000000000000, double:30.0)
            double r0 = r0 * r2
            int r0 = (int) r0
            int r0 = r0 + 10
            android.content.Context r1 = r4.a
            com.xiaomi.push.al r1 = com.xiaomi.push.al.a(r1)
            r1.a(r5, r0)
        L1d:
            return
    }

    public void a(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            com.xiaomi.push.service.bx r0 = com.xiaomi.push.service.bx.a
            android.content.SharedPreferences r0 = r0.a
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = ":"
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            android.content.SharedPreferences$Editor r3 = r0.putString(r3, r5)
            com.xiaomi.push.t.a(r3)
            return
    }
}
