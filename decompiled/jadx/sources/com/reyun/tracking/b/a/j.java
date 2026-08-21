package com.reyun.tracking.b.a;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;

/* JADX INFO: loaded from: classes3.dex */
class j implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ i f4715a;

    j(i iVar) {
        this.f4715a = iVar;
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        this.f4715a.b = com.reyun.tracking.b.b.j.a(iBinder);
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        this.f4715a.b = null;
    }
}
