package com.reyun.tracking.b.a;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;

class d implements ServiceConnection {
    final c a;

    d(c cVar) {
        this.a = cVar;
    }

    @Override
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        this.a.a = new com.reyun.tracking.b.b.e(iBinder);
    }

    @Override
    public void onServiceDisconnected(ComponentName componentName) {
    }
}
