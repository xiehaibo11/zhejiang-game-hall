package com.huawei.hms.opendevice;

import android.content.ComponentName;
import android.content.Context;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.IBinder;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import com.huawei.hms.support.log.HMSLog;

/* JADX INFO: compiled from: RemoteService.java */
/* JADX INFO: loaded from: classes.dex */
public class g implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Bundle f2135a;
    public final /* synthetic */ Context b;
    public final /* synthetic */ h c;

    public g(h hVar, Bundle bundle, Context context) {
        this.c = hVar;
        this.f2135a = bundle;
        this.b = context;
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        HMSLog.i("RemoteService", "remote service onConnected");
        this.c.b = new Messenger(iBinder);
        Message messageObtain = Message.obtain();
        messageObtain.setData(this.f2135a);
        try {
            this.c.b.send(messageObtain);
        } catch (RemoteException unused) {
            HMSLog.i("RemoteService", "remote service message send failed");
        }
        HMSLog.i("RemoteService", "remote service unbindservice");
        this.b.unbindService(this.c.f2136a);
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        HMSLog.i("RemoteService", "remote service onDisconnected");
        this.c.b = null;
    }
}
