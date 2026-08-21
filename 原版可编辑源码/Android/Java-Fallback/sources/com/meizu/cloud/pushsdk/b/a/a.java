package com.meizu.cloud.pushsdk.b.a;

public class a {
    private android.app.AlarmManager a;
    private android.content.Context b;
    private java.lang.Runnable c;
    private long d;
    private int e;
    private com.meizu.cloud.pushsdk.b.a.a.a f;
    private android.app.PendingIntent g;
    private java.lang.String h;
    private boolean i;

    class 1 {
    }

    class a extends android.content.BroadcastReceiver {
        final com.meizu.cloud.pushsdk.b.a.a a;

        private a(com.meizu.cloud.pushsdk.b.a.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        a(com.meizu.cloud.pushsdk.b.a.a r1, com.meizu.cloud.pushsdk.b.a.a.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onReceive(android.content.Context r1, android.content.Intent r2) {
                r0 = this;
                if (r2 == 0) goto L3f
                java.lang.String r1 = r2.getAction()
                java.lang.String r2 = "alarm.util"
                boolean r1 = r1.equals(r2)
                if (r1 != 0) goto Lf
                goto L3f
            Lf:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "on receive delayed task, keyword: "
                r1.append(r2)
                com.meizu.cloud.pushsdk.b.a.a r2 = r0.a
                java.lang.String r2 = com.meizu.cloud.pushsdk.b.a.a.a(r2)
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                java.lang.String r2 = "AlarmUtils"
                com.meizu.cloud.pushinternal.DebugLogger.i(r2, r1)
                com.meizu.cloud.pushsdk.b.a.a r1 = r0.a
                r2 = 1
                com.meizu.cloud.pushsdk.b.a.a.a(r1, r2)
                com.meizu.cloud.pushsdk.b.a.a r1 = r0.a
                com.meizu.cloud.pushsdk.b.a.a.b(r1)
                com.meizu.cloud.pushsdk.b.a.a r1 = r0.a
                java.lang.Runnable r1 = com.meizu.cloud.pushsdk.b.a.a.c(r1)
                r1.run()
            L3f:
                return
        }
    }

    public a(android.content.Context r7, java.lang.Runnable r8, long r9) {
            r6 = this;
            r5 = 1
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r5)
            return
    }

    public a(android.content.Context r1, java.lang.Runnable r2, long r3, boolean r5) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.b = r1
            r0.c = r2
            r0.d = r3
            r2 = 1
            r3 = r5 ^ 1
            r0.e = r3
            java.lang.String r3 = "alarm"
            java.lang.Object r1 = r1.getSystemService(r3)
            android.app.AlarmManager r1 = (android.app.AlarmManager) r1
            r0.a = r1
            r0.i = r2
            return
    }

    static java.lang.String a(com.meizu.cloud.pushsdk.b.a.a r0) {
            java.lang.String r0 = r0.h
            return r0
    }

    static boolean a(com.meizu.cloud.pushsdk.b.a.a r0, boolean r1) {
            r0.i = r1
            return r1
    }

    static void b(com.meizu.cloud.pushsdk.b.a.a r0) {
            r0.c()
            return
    }

    static java.lang.Runnable c(com.meizu.cloud.pushsdk.b.a.a r0) {
            java.lang.Runnable r0 = r0.c
            return r0
    }

    private void c() {
            r3 = this;
            com.meizu.cloud.pushsdk.b.a.a$a r0 = r3.f     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto L2a
            android.content.Context r0 = r3.b     // Catch: java.lang.Exception -> Lf
            com.meizu.cloud.pushsdk.b.a.a$a r1 = r3.f     // Catch: java.lang.Exception -> Lf
            r0.unregisterReceiver(r1)     // Catch: java.lang.Exception -> Lf
            r0 = 0
            r3.f = r0     // Catch: java.lang.Exception -> Lf
            goto L2a
        Lf:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "clean error, "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "AlarmUtils"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
        L2a:
            return
    }

    public boolean a() {
            r7 = this;
            boolean r0 = r7.i
            java.lang.String r1 = "AlarmUtils"
            r2 = 0
            if (r0 != 0) goto Ld
            java.lang.String r0 = "last task not completed"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            return r2
        Ld:
            r7.i = r2
            com.meizu.cloud.pushsdk.b.a.a$a r0 = new com.meizu.cloud.pushsdk.b.a.a$a
            r3 = 0
            r0.<init>(r7, r3)
            r7.f = r0
            android.content.Context r3 = r7.b
            android.content.IntentFilter r4 = new android.content.IntentFilter
            java.lang.String r5 = "alarm.util"
            r4.<init>(r5)
            r3.registerReceiver(r0, r4)
            long r3 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = java.lang.String.valueOf(r3)
            r7.h = r0
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r5)
            android.content.Context r3 = r7.b
            r4 = 1073741824(0x40000000, float:2.0)
            android.app.PendingIntent r0 = android.app.PendingIntent.getBroadcast(r3, r2, r0, r4)
            r7.g = r0
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            if (r0 < r2) goto L53
            android.app.AlarmManager r0 = r7.a
            int r2 = r7.e
            long r3 = java.lang.System.currentTimeMillis()
            long r5 = r7.d
            long r3 = r3 + r5
            android.app.PendingIntent r5 = r7.g
            r0.setExactAndAllowWhileIdle(r2, r3, r5)
            goto L7a
        L53:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            if (r0 < r2) goto L6a
            android.app.AlarmManager r0 = r7.a
            int r2 = r7.e
            long r3 = java.lang.System.currentTimeMillis()
            long r5 = r7.d
            long r3 = r3 + r5
            android.app.PendingIntent r5 = r7.g
            r0.setExact(r2, r3, r5)
            goto L7a
        L6a:
            android.app.AlarmManager r0 = r7.a
            int r2 = r7.e
            long r3 = java.lang.System.currentTimeMillis()
            long r5 = r7.d
            long r3 = r3 + r5
            android.app.PendingIntent r5 = r7.g
            r0.set(r2, r3, r5)
        L7a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "start delayed task, keyword: "
            r0.append(r2)
            java.lang.String r2 = r7.h
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)
            r0 = 1
            return r0
    }

    public void b() {
            r2 = this;
            android.app.AlarmManager r0 = r2.a
            if (r0 == 0) goto L2b
            android.app.PendingIntent r0 = r2.g
            if (r0 == 0) goto L2b
            boolean r0 = r2.i
            if (r0 != 0) goto L2b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "cancel  delayed task, keyword: "
            r0.append(r1)
            java.lang.String r1 = r2.h
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AlarmUtils"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)
            android.app.AlarmManager r0 = r2.a
            android.app.PendingIntent r1 = r2.g
            r0.cancel(r1)
        L2b:
            r2.c()
            return
    }
}
