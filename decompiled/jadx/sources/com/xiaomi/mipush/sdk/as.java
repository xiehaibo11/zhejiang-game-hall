package com.xiaomi.mipush.sdk;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import java.util.Iterator;

/* JADX INFO: loaded from: classes4.dex */
class as implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ao f8001a;

    as(ao aoVar) {
        this.f8001a = aoVar;
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        synchronized (this.f8001a) {
            this.f8001a.f73a = new Messenger(iBinder);
            this.f8001a.c = false;
            Iterator it = this.f8001a.f76a.iterator();
            while (it.hasNext()) {
                try {
                    this.f8001a.f73a.send((Message) it.next());
                } catch (RemoteException e) {
                    com.xiaomi.channel.commonutils.logger.b.a(e);
                }
            }
            this.f8001a.f76a.clear();
        }
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        this.f8001a.f73a = null;
        this.f8001a.c = false;
    }
}
