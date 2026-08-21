package com.reyun.tracking.b.a;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;

class o implements ServiceConnection {
    final n a;

    o(n nVar) {
        this.a = nVar;
    }

    @Override
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        try {
            this.a.c.put(iBinder);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public void onServiceDisconnected(ComponentName componentName) {
    }
}
