package com.xiaomi.push;

class ev implements com.xiaomi.push.eu.a {
    private volatile long a;
    private android.app.PendingIntent a;
    protected android.content.Context a;

    public ev(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r2.a = r0
            r0 = 0
            r2.a = r0
            r2.a = r3
            return
    }

    private void a(android.app.AlarmManager r9, long r10, android.app.PendingIntent r12) {
            r8 = this;
            java.lang.Class<android.app.AlarmManager> r0 = android.app.AlarmManager.class
            java.lang.String r1 = "setExact"
            r2 = 3
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L2e
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L2e
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L2e
            java.lang.Class r4 = java.lang.Long.TYPE     // Catch: java.lang.Exception -> L2e
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Exception -> L2e
            java.lang.Class<android.app.PendingIntent> r4 = android.app.PendingIntent.class
            r7 = 2
            r3[r7] = r4     // Catch: java.lang.Exception -> L2e
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L2e
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L2e
            java.lang.Integer r2 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> L2e
            r1[r5] = r2     // Catch: java.lang.Exception -> L2e
            java.lang.Long r10 = java.lang.Long.valueOf(r10)     // Catch: java.lang.Exception -> L2e
            r1[r6] = r10     // Catch: java.lang.Exception -> L2e
            r1[r7] = r12     // Catch: java.lang.Exception -> L2e
            r0.invoke(r9, r1)     // Catch: java.lang.Exception -> L2e
            goto L43
        L2e:
            r9 = move-exception
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "[Alarm] invoke setExact method meet error. "
            r10.append(r11)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r9)
        L43:
            return
    }

    @Override
    public void a() {
            r6 = this;
            java.lang.String r0 = "[Alarm] unregister timer"
            android.app.PendingIntent r1 = r6.a
            r2 = 0
            if (r1 == 0) goto L29
            android.content.Context r1 = r6.a
            java.lang.String r4 = "alarm"
            java.lang.Object r1 = r1.getSystemService(r4)
            android.app.AlarmManager r1 = (android.app.AlarmManager) r1
            r4 = 0
            android.app.PendingIntent r5 = r6.a     // Catch: java.lang.Throwable -> L19 java.lang.Exception -> L22
            r1.cancel(r5)     // Catch: java.lang.Throwable -> L19 java.lang.Exception -> L22
            goto L22
        L19:
            r1 = move-exception
            r6.a = r4
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            r6.a = r2
            throw r1
        L22:
            r6.a = r4
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            r6.a = r2
        L29:
            r6.a = r2
            return
    }

    public void a(android.content.Intent r5, long r6) {
            r4 = this;
            android.content.Context r0 = r4.a
            java.lang.String r1 = "alarm"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.app.AlarmManager r0 = (android.app.AlarmManager) r0
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 0
            r3 = 31
            if (r1 < r3) goto L1a
            android.content.Context r1 = r4.a
            r3 = 33554432(0x2000000, float:9.403955E-38)
            android.app.PendingIntent r5 = android.app.PendingIntent.getBroadcast(r1, r2, r5, r3)
            goto L20
        L1a:
            android.content.Context r1 = r4.a
            android.app.PendingIntent r5 = android.app.PendingIntent.getBroadcast(r1, r2, r5, r2)
        L20:
            r4.a = r5
            int r5 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r5 < r1) goto L43
            r5 = 3
            java.lang.Object[] r5 = new java.lang.Object[r5]
            r1 = 2
            java.lang.Integer r3 = java.lang.Integer.valueOf(r1)
            r5[r2] = r3
            r2 = 1
            java.lang.Long r3 = java.lang.Long.valueOf(r6)
            r5[r2] = r3
            android.app.PendingIntent r2 = r4.a
            r5[r1] = r2
            java.lang.String r1 = "setExactAndAllowWhileIdle"
            com.xiaomi.push.bk.a(r0, r1, r5)
            goto L48
        L43:
            android.app.PendingIntent r5 = r4.a
            r4.a(r0, r6, r5)
        L48:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "[Alarm] register timer "
            r5.append(r0)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r5)
            return
    }

    @Override
    public void a(boolean r9) {
            r8 = this;
            android.content.Context r0 = r8.a
            com.xiaomi.push.service.o r0 = com.xiaomi.push.service.o.a(r0)
            long r0 = r0.a()
            r2 = 0
            if (r9 != 0) goto L15
            long r4 = r8.a
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 != 0) goto L15
            return
        L15:
            if (r9 == 0) goto L1a
            r8.a()
        L1a:
            long r4 = android.os.SystemClock.elapsedRealtime()
            if (r9 != 0) goto L39
            long r6 = r8.a
            int r9 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r9 != 0) goto L27
            goto L39
        L27:
            long r2 = r8.a
            int r9 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r9 > 0) goto L3f
            long r2 = r8.a
            long r2 = r2 + r0
            r8.a = r2
            long r2 = r8.a
            int r9 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r9 >= 0) goto L3f
            goto L3c
        L39:
            long r2 = r4 % r0
            long r0 = r0 - r2
        L3c:
            long r4 = r4 + r0
            r8.a = r4
        L3f:
            android.content.Intent r9 = new android.content.Intent
            java.lang.String r0 = com.xiaomi.push.service.bk.p
            r9.<init>(r0)
            android.content.Context r0 = r8.a
            java.lang.String r0 = r0.getPackageName()
            r9.setPackage(r0)
            long r0 = r8.a
            r8.a(r9, r0)
            return
    }

    @Override
    public boolean a() {
            r4 = this;
            long r0 = r4.a
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }
}
