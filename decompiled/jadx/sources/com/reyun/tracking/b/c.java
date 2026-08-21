package com.reyun.tracking.b;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes3.dex */
final class c implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f4727a;

    private c(a aVar) {
        this.f4727a = aVar;
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        d dVar;
        String message;
        this.f4727a.c = f.a(iBinder);
        try {
            if (this.f4727a.c != null) {
                try {
                    if (this.f4727a.d != null) {
                        this.f4727a.d.a(this.f4727a.c.a(), this.f4727a.c.b());
                    }
                } catch (RemoteException e) {
                    if (this.f4727a.d != null) {
                        dVar = this.f4727a.d;
                        message = e.getMessage();
                        dVar.a(message);
                    }
                } catch (Exception e2) {
                    if (this.f4727a.d != null) {
                        dVar = this.f4727a.d;
                        message = e2.getMessage();
                        dVar.a(message);
                    }
                }
            }
        } finally {
            this.f4727a.b();
        }
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        this.f4727a.c = null;
    }
}
