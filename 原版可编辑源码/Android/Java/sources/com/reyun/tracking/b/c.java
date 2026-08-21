package com.reyun.tracking.b;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.RemoteException;

final class c implements ServiceConnection {
    final a a;

    private c(a aVar) {
        this.a = aVar;
    }

    @Override
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        d dVar;
        String message;
        this.a.c = f.a(iBinder);
        try {
            if (this.a.c != null) {
                try {
                    if (this.a.d != null) {
                        this.a.d.a(this.a.c.a(), this.a.c.b());
                    }
                } catch (RemoteException e) {
                    if (this.a.d != null) {
                        dVar = this.a.d;
                        message = e.getMessage();
                        dVar.a(message);
                    }
                } catch (Exception e2) {
                    if (this.a.d != null) {
                        dVar = this.a.d;
                        message = e2.getMessage();
                        dVar.a(message);
                    }
                }
            }
        } finally {
            this.a.b();
        }
    }

    @Override
    public void onServiceDisconnected(ComponentName componentName) {
        this.a.c = null;
    }
}
