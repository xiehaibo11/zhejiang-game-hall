package com.reyun.tracking.b.a;

class o implements android.content.ServiceConnection {
    final com.reyun.tracking.b.a.n a;

    o(com.reyun.tracking.b.a.n r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void onServiceConnected(android.content.ComponentName r1, android.os.IBinder r2) {
            r0 = this;
            com.reyun.tracking.b.a.n r1 = r0.a     // Catch: java.lang.Exception -> L8
            java.util.concurrent.LinkedBlockingQueue r1 = r1.c     // Catch: java.lang.Exception -> L8
            r1.put(r2)     // Catch: java.lang.Exception -> L8
            goto Lc
        L8:
            r1 = move-exception
            r1.printStackTrace()
        Lc:
            return
    }

    @Override
    public void onServiceDisconnected(android.content.ComponentName r1) {
            r0 = this;
            return
    }
}
