package com.reyun.tracking.b.a;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;

class h implements ServiceConnection {
    final g a;

    h(g gVar) {
        this.a = gVar;
    }

    @Override
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        this.a.b = com.reyun.tracking.b.b.g.a(iBinder);
    }

    @Override
    public void onServiceDisconnected(ComponentName componentName) {
        this.a.b = null;
    }
}
