package com.huawei.hms.push;

import android.content.ComponentName;
import android.content.Context;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.IBinder;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import com.huawei.hms.support.log.HMSLog;

public class g implements ServiceConnection {
    public final Bundle a;
    public final Context b;
    public final h c;

    public g(h hVar, Bundle bundle, Context context) {
        this.c = hVar;
        this.a = bundle;
        this.b = context;
    }

    @Override
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        HMSLog.i("RemoteService", "remote service onConnected");
        this.c.b = new Messenger(iBinder);
        Message messageObtain = Message.obtain();
        messageObtain.setData(this.a);
        try {
            this.c.b.send(messageObtain);
        } catch (RemoteException unused) {
            HMSLog.i("RemoteService", "remote service message send failed");
        }
        HMSLog.i("RemoteService", "remote service unbindservice");
        this.b.unbindService(this.c.a);
    }

    @Override
    public void onServiceDisconnected(ComponentName componentName) {
        HMSLog.i("RemoteService", "remote service onDisconnected");
        this.c.b = null;
    }
}
