package com.reyun.tracking.b.a;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;

/* JADX INFO: loaded from: classes3.dex */
class o implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ n f4720a;

    o(n nVar) {
        this.f4720a = nVar;
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        try {
            this.f4720a.c.put(iBinder);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
    }
}
