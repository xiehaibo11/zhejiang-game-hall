package com.mbridge.msdk.optimize.a.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.mbridge.msdk.optimize.a.b.b;

/* JADX INFO: compiled from: LenovoDeviceHelper.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    com.mbridge.msdk.optimize.a.b.b f3858a;
    ServiceConnection b = new ServiceConnection() { // from class: com.mbridge.msdk.optimize.a.a.b.1
        @Override // android.content.ServiceConnection
        public final void onServiceDisconnected(ComponentName componentName) {
        }

        @Override // android.content.ServiceConnection
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                b.this.f3858a = new b.a.C0280a(iBinder);
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    };
    private Context c;

    public b(Context context) {
        this.c = context;
    }

    public final void a(com.mbridge.msdk.optimize.a.b bVar) {
        try {
            this.c.getPackageName();
            Intent intent = new Intent();
            intent.setClassName("com.zui.deviceidservice", "com.zui.deviceidservice.DeviceidService");
            if (!this.c.bindService(intent, this.b, 1) || this.f3858a == null) {
                return;
            }
            String strA = this.f3858a.a();
            if (bVar != null) {
                bVar.a(strA, false);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
