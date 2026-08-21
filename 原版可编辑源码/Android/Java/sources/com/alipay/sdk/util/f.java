package com.alipay.sdk.util;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.alipay.android.app.IAlixPay;

class f implements ServiceConnection {
    final e a;

    f(e eVar) {
        this.a = eVar;
    }

    @Override
    public void onServiceDisconnected(ComponentName componentName) {
        this.a.d = null;
    }

    @Override
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        synchronized (this.a.e) {
            this.a.d = IAlixPay.Stub.asInterface(iBinder);
            this.a.e.notify();
        }
    }
}
