package com.reyun.tracking.b.a;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;

/* JADX INFO: loaded from: classes3.dex */
class d implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ c f4709a;

    d(c cVar) {
        this.f4709a = cVar;
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        this.f4709a.f4708a = new com.reyun.tracking.b.b.e(iBinder);
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
    }
}
