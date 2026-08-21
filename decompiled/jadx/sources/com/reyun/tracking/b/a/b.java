package com.reyun.tracking.b.a;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;

/* JADX INFO: loaded from: classes3.dex */
class b implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f4707a;

    b(a aVar) {
        this.f4707a = aVar;
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        try {
            this.f4707a.f4706a.put(iBinder);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
    }
}
