package com.reyun.tracking.b.a;

class j implements android.content.ServiceConnection {
    final com.reyun.tracking.b.a.i a;

    j(com.reyun.tracking.b.a.i r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void onServiceConnected(android.content.ComponentName r1, android.os.IBinder r2) {
            r0 = this;
            com.reyun.tracking.b.a.i r1 = r0.a
            com.reyun.tracking.b.b.i r2 = com.reyun.tracking.b.b.j.a(r2)
            r1.b = r2
            return
    }

    @Override
    public void onServiceDisconnected(android.content.ComponentName r2) {
            r1 = this;
            com.reyun.tracking.b.a.i r2 = r1.a
            r0 = 0
            r2.b = r0
            return
    }
}
