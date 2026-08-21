package com.tkay.china.a.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import java.util.concurrent.LinkedBlockingQueue;

/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final LinkedBlockingQueue<IBinder> f5867a = new LinkedBlockingQueue<>(1);
    ServiceConnection b = new ServiceConnection() { // from class: com.tkay.china.a.a.b.1
        @Override // android.content.ServiceConnection
        public final void onServiceDisconnected(ComponentName componentName) {
        }

        @Override // android.content.ServiceConnection
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                b.this.f5867a.put(iBinder);
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    };
    private Context c;

    public b(Context context) {
        this.c = context;
    }

    public final void a(com.tkay.china.a.a aVar) {
        try {
            this.c.getPackageManager().getPackageInfo("com.asus.msa.SupplementaryDID", 0);
        } catch (Throwable th) {
            th.printStackTrace();
        }
        Intent intent = new Intent();
        intent.setAction("com.asus.msa.action.ACCESS_DID");
        intent.setComponent(new ComponentName("com.asus.msa.SupplementaryDID", "com.asus.msa.SupplementaryDID.SupplementaryDIDService"));
        if (this.c.bindService(intent, this.b, 1)) {
            try {
                aVar.a(new a(this.f5867a.take()).a(), false);
                return;
            } catch (Exception e) {
                e.getMessage();
                aVar.a();
                return;
            } catch (Throwable th2) {
                th2.getMessage();
                aVar.a();
                return;
            }
        }
        aVar.a();
    }
}
