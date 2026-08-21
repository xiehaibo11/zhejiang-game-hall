package com.mbridge.msdk.optimize.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.RemoteException;
import com.mbridge.msdk.optimize.a.c;

/* JADX INFO: compiled from: OaidAidlUtil.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f3854a;
    private ServiceConnection b;
    private c c;
    private b d;

    public a(Context context) {
        this.f3854a = context;
    }

    public final void a(b bVar) {
        if (bVar == null) {
            return;
        }
        try {
            this.d = bVar;
            if (this.f3854a == null) {
                return;
            }
            this.b = new ServiceConnectionC0278a();
            Intent intent = new Intent("com.uodis.opendevice.OPENIDS_SERVICE");
            intent.setPackage("com.huawei.hwid");
            this.f3854a.bindService(intent, this.b, 1);
        } catch (Throwable unused) {
        }
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.optimize.a.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: OaidAidlUtil.java */
    private final class ServiceConnectionC0278a implements ServiceConnection {
        private ServiceConnectionC0278a() {
        }

        @Override // android.content.ServiceConnection
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

        @Override // android.content.ServiceConnection
        public final void onServiceDisconnected(ComponentName componentName) {
            a.this.c = null;
        }
    }

    static /* synthetic */ void c(a aVar) {
        ServiceConnection serviceConnection;
        Context context = aVar.f3854a;
        if (context == null || (serviceConnection = aVar.b) == null) {
            return;
        }
        context.unbindService(serviceConnection);
        aVar.c = null;
        aVar.f3854a = null;
        aVar.d = null;
    }
}
