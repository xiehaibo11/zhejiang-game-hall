package com.igexin.push.core;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;

class z implements ServiceConnection {
    final x a;

    z(x xVar) {
        this.a = xVar;
    }

    @Override
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
    }

    @Override
    public void onServiceDisconnected(ComponentName componentName) {
    }
}
