package com.xiaomi.push.service;

class bu implements android.content.ServiceConnection {
    final com.xiaomi.push.service.ServiceClient a;

    bu(com.xiaomi.push.service.ServiceClient r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void onServiceConnected(android.content.ComponentName r3, android.os.IBinder r4) {
            r2 = this;
            com.xiaomi.push.service.ServiceClient r3 = r2.a
            monitor-enter(r3)
            com.xiaomi.push.service.ServiceClient r0 = r2.a     // Catch: java.lang.Throwable -> L43
            android.os.Messenger r1 = new android.os.Messenger     // Catch: java.lang.Throwable -> L43
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L43
            com.xiaomi.push.service.ServiceClient.a(r0, r1)     // Catch: java.lang.Throwable -> L43
            com.xiaomi.push.service.ServiceClient r4 = r2.a     // Catch: java.lang.Throwable -> L43
            r0 = 0
            com.xiaomi.push.service.ServiceClient.a(r4, r0)     // Catch: java.lang.Throwable -> L43
            com.xiaomi.push.service.ServiceClient r4 = r2.a     // Catch: java.lang.Throwable -> L43
            java.util.List r4 = com.xiaomi.push.service.ServiceClient.a(r4)     // Catch: java.lang.Throwable -> L43
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L43
        L1d:
            boolean r0 = r4.hasNext()     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L38
            java.lang.Object r0 = r4.next()     // Catch: java.lang.Throwable -> L43
            android.os.Message r0 = (android.os.Message) r0     // Catch: java.lang.Throwable -> L43
            com.xiaomi.push.service.ServiceClient r1 = r2.a     // Catch: android.os.RemoteException -> L33 java.lang.Throwable -> L43
            android.os.Messenger r1 = com.xiaomi.push.service.ServiceClient.a(r1)     // Catch: android.os.RemoteException -> L33 java.lang.Throwable -> L43
            r1.send(r0)     // Catch: android.os.RemoteException -> L33 java.lang.Throwable -> L43
            goto L1d
        L33:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L43
            goto L1d
        L38:
            com.xiaomi.push.service.ServiceClient r4 = r2.a     // Catch: java.lang.Throwable -> L43
            java.util.List r4 = com.xiaomi.push.service.ServiceClient.a(r4)     // Catch: java.lang.Throwable -> L43
            r4.clear()     // Catch: java.lang.Throwable -> L43
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L43
            return
        L43:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L43
            throw r4
    }

    @Override
    public void onServiceDisconnected(android.content.ComponentName r2) {
            r1 = this;
            com.xiaomi.push.service.ServiceClient r2 = r1.a
            r0 = 0
            com.xiaomi.push.service.ServiceClient.a(r2, r0)
            com.xiaomi.push.service.ServiceClient r2 = r1.a
            r0 = 0
            com.xiaomi.push.service.ServiceClient.a(r2, r0)
            return
    }
}
