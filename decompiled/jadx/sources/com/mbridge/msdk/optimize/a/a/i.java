package com.mbridge.msdk.optimize.a.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.mbridge.msdk.optimize.a.b.f;
import java.util.concurrent.LinkedBlockingQueue;

/* JADX INFO: compiled from: ZTEDeviceHelper.java */
/* JADX INFO: loaded from: classes2.dex */
public final class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Context f3869a;
    String b = "com.mdid.msa";
    public final LinkedBlockingQueue<IBinder> c = new LinkedBlockingQueue<>(1);
    ServiceConnection d = new ServiceConnection() { // from class: com.mbridge.msdk.optimize.a.a.i.1
        @Override // android.content.ServiceConnection
        public final void onServiceDisconnected(ComponentName componentName) {
        }

        @Override // android.content.ServiceConnection
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                i.this.c.put(iBinder);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    };

    public i(Context context) {
        this.f3869a = context;
    }

    private int a() {
        try {
            this.f3869a.getPackageManager().getPackageInfo(this.b, 0);
            return 1;
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public final void a(com.mbridge.msdk.optimize.a.b bVar) {
        try {
            this.f3869a.getPackageManager().getPackageInfo(this.b, 0);
        } catch (Exception e) {
            e.printStackTrace();
        }
        String packageName = this.f3869a.getPackageName();
        a();
        Intent intent = new Intent();
        intent.setClassName(this.b, "com.mdid.msa.service.MsaKlService");
        intent.setAction("com.bun.msa.action.start.service");
        intent.putExtra("com.bun.msa.param.pkgname", packageName);
        try {
            intent.putExtra("com.bun.msa.param.runinset", true);
            this.f3869a.startService(intent);
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        Intent intent2 = new Intent();
        intent2.setClassName("com.mdid.msa", "com.mdid.msa.service.MsaIdService");
        intent2.setAction("com.bun.msa.action.bindto.service");
        intent2.putExtra("com.bun.msa.param.pkgname", packageName);
        try {
            if (this.f3869a.bindService(intent2, this.d, 1)) {
                try {
                    String strA = new f.a.C0283a(this.c.take()).a();
                    if (bVar != null) {
                        bVar.a(strA, false);
                    }
                } catch (Exception e3) {
                    e3.printStackTrace();
                }
            }
        } finally {
            this.f3869a.unbindService(this.d);
        }
    }
}
