package com.reyun.tracking.b;

import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;

public class a {
    private Context a;
    private ServiceConnection b;
    private e c;
    private d d;

    public a(Context context) {
        this.a = context;
    }

    private boolean a() {
        if (this.a == null) {
            return false;
        }
        this.b = new c(this);
        Intent intent = new Intent("com.uodis.opendevice.OPENIDS_SERVICE");
        intent.setPackage("com.huawei.hwid");
        return this.a.bindService(intent, this.b, 1);
    }

    private void b() {
        ServiceConnection serviceConnection;
        Context context = this.a;
        if (context == null || (serviceConnection = this.b) == null) {
            return;
        }
        context.unbindService(serviceConnection);
        this.c = null;
        this.a = null;
        this.d = null;
    }

    public void a(d dVar) {
        if (dVar == null) {
            return;
        }
        try {
            this.d = dVar;
            a();
        } catch (Throwable unused) {
        }
    }
}
