package com.reyun.tracking.b.a;

import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.reyun.tracking.b.b.p;
import java.util.concurrent.LinkedBlockingQueue;

/* JADX INFO: loaded from: classes3.dex */
public class n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Context f4719a;
    String b = "com.mdid.msa";
    public final LinkedBlockingQueue c = new LinkedBlockingQueue(1);
    ServiceConnection d = new o(this);

    public n(Context context) {
        this.f4719a = context;
    }

    private int a() {
        try {
            this.f4719a.getPackageManager().getPackageInfo(this.b, 0);
            return 1;
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    private void a(String str) {
        a();
        Intent intent = new Intent();
        intent.setClassName(this.b, "com.mdid.msa.service.MsaKlService");
        intent.setAction("com.bun.msa.action.start.service");
        intent.putExtra("com.bun.msa.param.pkgname", str);
        try {
            intent.putExtra("com.bun.msa.param.runinset", true);
            if (this.f4719a.startService(intent) != null) {
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void a(com.reyun.tracking.b.d dVar) {
        try {
            this.f4719a.getPackageManager().getPackageInfo(this.b, 0);
        } catch (Exception e) {
            e.printStackTrace();
        }
        String packageName = this.f4719a.getPackageName();
        a(packageName);
        Intent intent = new Intent();
        intent.setClassName("com.mdid.msa", "com.mdid.msa.service.MsaIdService");
        intent.setAction("com.bun.msa.action.bindto.service");
        intent.putExtra("com.bun.msa.param.pkgname", packageName);
        try {
            if (this.f4719a.bindService(intent, this.d, 1)) {
                try {
                    String strA = new p((IBinder) this.c.take()).a();
                    if (dVar != null) {
                        dVar.a(strA, false);
                    }
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
        } finally {
            this.f4719a.unbindService(this.d);
        }
    }
}
