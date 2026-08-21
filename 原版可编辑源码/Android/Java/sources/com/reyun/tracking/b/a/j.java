package com.reyun.tracking.b.a;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;

class j implements ServiceConnection {
    final i a;

    j(i iVar) {
        this.a = iVar;
    }

    @Override
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        this.a.b = com.reyun.tracking.b.b.j.a(iBinder);
    }

    @Override
    public void onServiceDisconnected(ComponentName componentName) {
        this.a.b = null;
    }
}
