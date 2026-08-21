package com.huawei.hms.push;

import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.Messenger;
import com.huawei.hms.support.log.HMSLog;

/* JADX INFO: compiled from: RemoteService.java */
/* JADX INFO: loaded from: classes.dex */
public class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public ServiceConnection f2154a;
    public Messenger b = null;

    public boolean a(Context context, Bundle bundle, Intent intent) {
        Context applicationContext = context.getApplicationContext();
        this.f2154a = new g(this, bundle, applicationContext);
        HMSLog.i("RemoteService", "remote service bind service start");
        return applicationContext.bindService(intent, this.f2154a, 1);
    }
}
