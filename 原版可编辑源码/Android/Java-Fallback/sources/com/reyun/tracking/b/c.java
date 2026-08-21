package com.reyun.tracking.b;

final class c implements android.content.ServiceConnection {
    final com.reyun.tracking.b.a a;

    private c(com.reyun.tracking.b.a r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    c(com.reyun.tracking.b.a r1, com.reyun.tracking.b.b r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public void onServiceConnected(android.content.ComponentName r2, android.os.IBinder r3) {
            r1 = this;
            com.reyun.tracking.b.a r2 = r1.a
            com.reyun.tracking.b.e r3 = com.reyun.tracking.b.f.a(r3)
            com.reyun.tracking.b.a.a(r2, r3)
            com.reyun.tracking.b.a r2 = r1.a
            com.reyun.tracking.b.e r2 = com.reyun.tracking.b.a.a(r2)
            if (r2 == 0) goto L6f
            com.reyun.tracking.b.a r2 = r1.a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
            com.reyun.tracking.b.d r2 = com.reyun.tracking.b.a.b(r2)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
            if (r2 == 0) goto L36
            com.reyun.tracking.b.a r2 = r1.a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
            com.reyun.tracking.b.d r2 = com.reyun.tracking.b.a.b(r2)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
            com.reyun.tracking.b.a r3 = r1.a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
            com.reyun.tracking.b.e r3 = com.reyun.tracking.b.a.a(r3)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
            java.lang.String r3 = r3.a()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
            com.reyun.tracking.b.a r0 = r1.a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
            com.reyun.tracking.b.e r0 = com.reyun.tracking.b.a.a(r0)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
            boolean r0 = r0.b()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
            r2.a(r3, r0)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
        L36:
            com.reyun.tracking.b.a r2 = r1.a
            com.reyun.tracking.b.a.c(r2)
            goto L6f
        L3c:
            r2 = move-exception
            goto L69
        L3e:
            r2 = move-exception
            com.reyun.tracking.b.a r3 = r1.a     // Catch: java.lang.Throwable -> L3c
            com.reyun.tracking.b.d r3 = com.reyun.tracking.b.a.b(r3)     // Catch: java.lang.Throwable -> L3c
            if (r3 == 0) goto L36
            com.reyun.tracking.b.a r3 = r1.a     // Catch: java.lang.Throwable -> L3c
            com.reyun.tracking.b.d r3 = com.reyun.tracking.b.a.b(r3)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L3c
        L51:
            r3.a(r2)     // Catch: java.lang.Throwable -> L3c
            goto L36
        L55:
            r2 = move-exception
            com.reyun.tracking.b.a r3 = r1.a     // Catch: java.lang.Throwable -> L3c
            com.reyun.tracking.b.d r3 = com.reyun.tracking.b.a.b(r3)     // Catch: java.lang.Throwable -> L3c
            if (r3 == 0) goto L36
            com.reyun.tracking.b.a r3 = r1.a     // Catch: java.lang.Throwable -> L3c
            com.reyun.tracking.b.d r3 = com.reyun.tracking.b.a.b(r3)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L3c
            goto L51
        L69:
            com.reyun.tracking.b.a r3 = r1.a
            com.reyun.tracking.b.a.c(r3)
            throw r2
        L6f:
            return
    }

    @Override
    public void onServiceDisconnected(android.content.ComponentName r2) {
            r1 = this;
            com.reyun.tracking.b.a r2 = r1.a
            r0 = 0
            com.reyun.tracking.b.a.a(r2, r0)
            return
    }
}
