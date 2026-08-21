package com.reyun.tracking.b.a;

class d implements android.content.ServiceConnection {
    final com.reyun.tracking.b.a.c a;

    d(com.reyun.tracking.b.a.c r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void onServiceConnected(android.content.ComponentName r2, android.os.IBinder r3) {
            r1 = this;
            com.reyun.tracking.b.a.c r2 = r1.a
            com.reyun.tracking.b.b.e r0 = new com.reyun.tracking.b.b.e
            r0.<init>(r3)
            r2.a = r0
            return
    }

    @Override
    public void onServiceDisconnected(android.content.ComponentName r1) {
            r0 = this;
            return
    }
}
