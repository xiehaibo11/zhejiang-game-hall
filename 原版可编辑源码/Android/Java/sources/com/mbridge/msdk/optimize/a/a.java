package com.mbridge.msdk.optimize.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.RemoteException;
import com.mbridge.msdk.optimize.a.c;

public final class a {
    private Context a;
    private ServiceConnection b;
    private c c;
    private b d;

    public a(Context context) {
        this.a = context;
    }

    public final void a(b bVar) {
        if (bVar == null) {
            return;
        }
        try {
            this.d = bVar;
            if (this.a == null) {
                return;
            }
            this.b = new a();
            Intent intent = new Intent("com.uodis.opendevice.OPENIDS_SERVICE");
            intent.setPackage("com.huawei.hwid");
            this.a.bindService(intent, this.b, 1);
        } catch (Throwable unused) {
        }
    }

    private final class a implements ServiceConnection {
        private a() {
        }

        @Override
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            a.this.c = c.a.a(iBinder);
            try {
                if (a.this.c != null) {
                    try {
                        if (a.this.d != null) {
                            a.this.d.a(a.this.c.a(), a.this.c.b());
                        }
                    } catch (RemoteException e) {
                        if (a.this.d != null) {
                            a.this.d.a(e.getMessage());
                        }
                    } catch (Exception e2) {
                        if (a.this.d != null) {
                            a.this.d.a(e2.getMessage());
                        }
                    }
                }
            } finally {
                a.c(a.this);
            }
        }

        @Override
        public final void onServiceDisconnected(ComponentName componentName) {
            a.this.c = null;
        }
    }

    static void c(a aVar) {
        ServiceConnection serviceConnection;
        Context context = aVar.a;
        if (context == null || (serviceConnection = aVar.b) == null) {
            return;
        }
        context.unbindService(serviceConnection);
        aVar.c = null;
        aVar.a = null;
        aVar.d = null;
    }
}
