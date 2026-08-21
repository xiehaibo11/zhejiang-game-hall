package com.xiaomi.push.service;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import java.util.Iterator;

/* JADX INFO: loaded from: classes4.dex */
class bu implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ServiceClient f8346a;

    bu(ServiceClient serviceClient) {
        this.f8346a = serviceClient;
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        synchronized (this.f8346a) {
            this.f8346a.f850b = new Messenger(iBinder);
            this.f8346a.f851b = false;
            Iterator it = this.f8346a.f848a.iterator();
            while (it.hasNext()) {
                try {
                    this.f8346a.f850b.send((Message) it.next());
                } catch (RemoteException e) {
                    com.xiaomi.channel.commonutils.logger.b.a(e);
                }
            }
            this.f8346a.f848a.clear();
        }
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        this.f8346a.f850b = null;
        this.f8346a.f851b = false;
    }
}
