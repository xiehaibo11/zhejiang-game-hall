package com.tkay.china.a.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.tkay.china.a.a.l;

/* JADX INFO: loaded from: classes3.dex */
public final class m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    l f5883a;
    ServiceConnection b = new ServiceConnection() { // from class: com.tkay.china.a.a.m.1
        @Override // android.content.ServiceConnection
        public final void onServiceDisconnected(ComponentName componentName) {
        }

        @Override // android.content.ServiceConnection
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            m.this.f5883a = new l.a(iBinder);
        }
    };
    private Context c;

    public m(Context context) {
        this.c = context;
    }

    public final void a(com.tkay.china.a.a aVar) {
        try {
            Intent intent = new Intent();
            intent.setClassName("com.zui.deviceidservice", "com.zui.deviceidservice.DeviceidService");
            if (this.c.bindService(intent, this.b, 1) && this.f5883a != null) {
                aVar.a(this.f5883a.a(), false);
            } else {
                aVar.a();
            }
        } catch (Throwable th) {
            th.getMessage();
            aVar.a();
        }
    }
}
