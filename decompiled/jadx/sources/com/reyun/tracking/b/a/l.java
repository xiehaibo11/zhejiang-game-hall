package com.reyun.tracking.b.a;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;

/* JADX INFO: loaded from: classes3.dex */
class l implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ k f4717a;

    l(k kVar) {
        this.f4717a = kVar;
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        try {
            this.f4717a.f4716a.put(iBinder);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
    }
}
