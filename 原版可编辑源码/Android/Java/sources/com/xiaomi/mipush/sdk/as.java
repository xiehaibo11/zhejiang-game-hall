package com.xiaomi.mipush.sdk;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import java.util.Iterator;

class as implements ServiceConnection {
    final ao a;

    as(ao aoVar) {
        this.a = aoVar;
    }

    @Override
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        synchronized (this.a) {
            this.a.a = new Messenger(iBinder);
            this.a.c = false;
            Iterator it = this.a.a.iterator();
            while (it.hasNext()) {
                try {
                    this.a.a.send((Message) it.next());
                } catch (RemoteException e) {
                    com.xiaomi.channel.commonutils.logger.b.a(e);
                }
            }
            this.a.a.clear();
        }
    }

    @Override
    public void onServiceDisconnected(ComponentName componentName) {
        this.a.a = null;
        this.a.c = false;
    }
}
