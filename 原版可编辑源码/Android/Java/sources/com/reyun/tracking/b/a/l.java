package com.reyun.tracking.b.a;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;

class l implements ServiceConnection {
    final k a;

    l(k kVar) {
        this.a = kVar;
    }

    @Override
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        try {
            this.a.a.put(iBinder);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public void onServiceDisconnected(ComponentName componentName) {
    }
}
