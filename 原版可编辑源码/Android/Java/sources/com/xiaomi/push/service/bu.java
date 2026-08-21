package com.xiaomi.push.service;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import java.util.Iterator;

class bu implements ServiceConnection {
    final ServiceClient a;

    bu(ServiceClient serviceClient) {
        this.a = serviceClient;
    }

    @Override
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        synchronized (this.a) {
            this.a.b = new Messenger(iBinder);
            this.a.b = false;
            Iterator it = this.a.a.iterator();
            while (it.hasNext()) {
                try {
                    this.a.b.send((Message) it.next());
                } catch (RemoteException e) {
                    com.xiaomi.channel.commonutils.logger.b.a(e);
                }
            }
            this.a.a.clear();
        }
    }

    @Override
    public void onServiceDisconnected(ComponentName componentName) {
        this.a.b = null;
        this.a.b = false;
    }
}
