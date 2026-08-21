package com.alipay.sdk.util;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.alipay.android.app.IAlixPay;

/* JADX INFO: loaded from: classes.dex */
class f implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ e f1317a;

    f(e eVar) {
        this.f1317a = eVar;
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        this.f1317a.d = null;
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        synchronized (this.f1317a.e) {
            this.f1317a.d = IAlixPay.Stub.asInterface(iBinder);
            this.f1317a.e.notify();
        }
    }
}
