package com.reyun.tracking.b;

import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f4705a;
    private ServiceConnection b;
    private e c;
    private d d;

    public a(Context context) {
        this.f4705a = context;
    }

    private boolean a() {
        if (this.f4705a == null) {
            return false;
        }
        this.b = new c(this);
        Intent intent = new Intent("com.uodis.opendevice.OPENIDS_SERVICE");
        intent.setPackage("com.huawei.hwid");
        return this.f4705a.bindService(intent, this.b, 1);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        ServiceConnection serviceConnection;
        Context context = this.f4705a;
        if (context == null || (serviceConnection = this.b) == null) {
            return;
        }
        context.unbindService(serviceConnection);
        this.c = null;
        this.f4705a = null;
        this.d = null;
    }

    public void a(d dVar) {
        if (dVar == null) {
            return;
        }
        try {
            this.d = dVar;
            a();
        } catch (Throwable unused) {
        }
    }
}
