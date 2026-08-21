package com.xiaomi.push;

class cl implements java.lang.Runnable {
    final android.content.Context a;
    final com.xiaomi.push.cj.a a;

    cl(com.xiaomi.push.cj.a r1, android.content.Context r2) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r3 = this;
            r0 = 0
            com.xiaomi.push.cj$a r1 = r3.a     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            android.database.sqlite.SQLiteDatabase r0 = r1.a()     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            if (r0 == 0) goto L1c
            boolean r1 = r0.isOpen()     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            if (r1 == 0) goto L1c
            r0.beginTransaction()     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            com.xiaomi.push.cj$a r1 = r3.a     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            android.content.Context r2 = r3.a     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            r1.a(r2, r0)     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            r0.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
        L1c:
            if (r0 == 0) goto L21
            r0.endTransaction()     // Catch: java.lang.Exception -> L2f
        L21:
            com.xiaomi.push.cj$a r0 = r3.a     // Catch: java.lang.Exception -> L2f
            com.xiaomi.push.ch r0 = r0.a     // Catch: java.lang.Exception -> L2f
            if (r0 == 0) goto L4e
            com.xiaomi.push.cj$a r0 = r3.a     // Catch: java.lang.Exception -> L2f
            com.xiaomi.push.ch r0 = r0.a     // Catch: java.lang.Exception -> L2f
            r0.close()     // Catch: java.lang.Exception -> L2f
            goto L4e
        L2f:
            r0 = move-exception
            goto L4b
        L31:
            r1 = move-exception
            goto L56
        L33:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Throwable -> L31
            if (r0 == 0) goto L3c
            r0.endTransaction()     // Catch: java.lang.Exception -> L4a
        L3c:
            com.xiaomi.push.cj$a r0 = r3.a     // Catch: java.lang.Exception -> L4a
            com.xiaomi.push.ch r0 = r0.a     // Catch: java.lang.Exception -> L4a
            if (r0 == 0) goto L4e
            com.xiaomi.push.cj$a r0 = r3.a     // Catch: java.lang.Exception -> L4a
            com.xiaomi.push.ch r0 = r0.a     // Catch: java.lang.Exception -> L4a
            r0.close()     // Catch: java.lang.Exception -> L4a
            goto L4e
        L4a:
            r0 = move-exception
        L4b:
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L4e:
            com.xiaomi.push.cj$a r0 = r3.a
            android.content.Context r1 = r3.a
            r0.a(r1)
            return
        L56:
            if (r0 == 0) goto L5b
            r0.endTransaction()     // Catch: java.lang.Exception -> L69
        L5b:
            com.xiaomi.push.cj$a r0 = r3.a     // Catch: java.lang.Exception -> L69
            com.xiaomi.push.ch r0 = r0.a     // Catch: java.lang.Exception -> L69
            if (r0 == 0) goto L6d
            com.xiaomi.push.cj$a r0 = r3.a     // Catch: java.lang.Exception -> L69
            com.xiaomi.push.ch r0 = r0.a     // Catch: java.lang.Exception -> L69
            r0.close()     // Catch: java.lang.Exception -> L69
            goto L6d
        L69:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L6d:
            com.xiaomi.push.cj$a r0 = r3.a
            android.content.Context r2 = r3.a
            r0.a(r2)
            throw r1
    }
}
