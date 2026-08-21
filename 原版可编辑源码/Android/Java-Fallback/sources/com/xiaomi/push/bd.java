package com.xiaomi.push;

class bd implements java.lang.Runnable {
    final android.os.IBinder a;
    final com.xiaomi.push.bb.b a;

    bd(com.xiaomi.push.bb.b r1, android.os.IBinder r2) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r6 = this;
            r0 = 2
            com.xiaomi.push.bb$b r1 = r6.a     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            com.xiaomi.push.bb r1 = r1.a     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            android.content.Context r1 = com.xiaomi.push.bb.a(r1)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            com.xiaomi.push.bb$b r2 = r6.a     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            com.xiaomi.push.bb r2 = r2.a     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            java.lang.String r2 = com.xiaomi.push.bb.a(r2)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            com.xiaomi.push.bb$a r3 = new com.xiaomi.push.bb$a     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            com.xiaomi.push.bb$b r4 = r6.a     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            com.xiaomi.push.bb r4 = r4.a     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            r5 = 0
            r3.<init>(r4, r5)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            android.os.IBinder r4 = r6.a     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            java.lang.String r5 = "GUID"
            java.lang.String r4 = com.xiaomi.push.bb.c.a(r4, r1, r2, r5)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            r3.a = r4     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            android.os.IBinder r4 = r6.a     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            java.lang.String r5 = "OUID"
            java.lang.String r4 = com.xiaomi.push.bb.c.a(r4, r1, r2, r5)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            r3.b = r4     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            android.os.IBinder r4 = r6.a     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            java.lang.String r5 = "DUID"
            java.lang.String r4 = com.xiaomi.push.bb.c.a(r4, r1, r2, r5)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            r3.c = r4     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            android.os.IBinder r4 = r6.a     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            java.lang.String r5 = "AUID"
            java.lang.String r1 = com.xiaomi.push.bb.c.a(r4, r1, r2, r5)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            r3.d = r1     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            com.xiaomi.push.bb$b r1 = r6.a     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            com.xiaomi.push.bb r1 = r1.a     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            com.xiaomi.push.bb.a(r1, r3)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> La1
            com.xiaomi.push.bb$b r1 = r6.a
            com.xiaomi.push.bb r1 = r1.a
            com.xiaomi.push.bb.a(r1)
            com.xiaomi.push.bb$b r1 = r6.a
            com.xiaomi.push.bb r1 = r1.a
            com.xiaomi.push.bb.a(r1, r0)
            com.xiaomi.push.bb$b r0 = r6.a
            com.xiaomi.push.bb r0 = r0.a
            java.lang.Object r1 = com.xiaomi.push.bb.a(r0)
            monitor-enter(r1)
            com.xiaomi.push.bb$b r0 = r6.a     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            com.xiaomi.push.bb r0 = r0.a     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            java.lang.Object r0 = com.xiaomi.push.bb.a(r0)     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            r0.notifyAll()     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
            goto L73
        L71:
            r0 = move-exception
            goto L75
        L73:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L71
            goto Lc7
        L75:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L71
            throw r0
        L77:
            r1 = move-exception
            com.xiaomi.push.bb$b r2 = r6.a
            com.xiaomi.push.bb r2 = r2.a
            com.xiaomi.push.bb.a(r2)
            com.xiaomi.push.bb$b r2 = r6.a
            com.xiaomi.push.bb r2 = r2.a
            com.xiaomi.push.bb.a(r2, r0)
            com.xiaomi.push.bb$b r0 = r6.a
            com.xiaomi.push.bb r0 = r0.a
            java.lang.Object r2 = com.xiaomi.push.bb.a(r0)
            monitor-enter(r2)
            com.xiaomi.push.bb$b r0 = r6.a     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            com.xiaomi.push.bb r0 = r0.a     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            java.lang.Object r0 = com.xiaomi.push.bb.a(r0)     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            r0.notifyAll()     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            goto L9d
        L9b:
            r0 = move-exception
            goto L9f
        L9d:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L9b
            throw r1
        L9f:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L9b
            throw r0
        La1:
            com.xiaomi.push.bb$b r1 = r6.a
            com.xiaomi.push.bb r1 = r1.a
            com.xiaomi.push.bb.a(r1)
            com.xiaomi.push.bb$b r1 = r6.a
            com.xiaomi.push.bb r1 = r1.a
            com.xiaomi.push.bb.a(r1, r0)
            com.xiaomi.push.bb$b r0 = r6.a
            com.xiaomi.push.bb r0 = r0.a
            java.lang.Object r0 = com.xiaomi.push.bb.a(r0)
            monitor-enter(r0)
            com.xiaomi.push.bb$b r1 = r6.a     // Catch: java.lang.Throwable -> Lc4 java.lang.Exception -> Lc6
            com.xiaomi.push.bb r1 = r1.a     // Catch: java.lang.Throwable -> Lc4 java.lang.Exception -> Lc6
            java.lang.Object r1 = com.xiaomi.push.bb.a(r1)     // Catch: java.lang.Throwable -> Lc4 java.lang.Exception -> Lc6
            r1.notifyAll()     // Catch: java.lang.Throwable -> Lc4 java.lang.Exception -> Lc6
            goto Lc6
        Lc4:
            r1 = move-exception
            goto Lc8
        Lc6:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc4
        Lc7:
            return
        Lc8:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc4
            throw r1
    }
}
