package com.reyun.tracking.b.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import java.util.concurrent.LinkedBlockingQueue;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final LinkedBlockingQueue f4706a = new LinkedBlockingQueue(1);
    ServiceConnection b = new b(this);
    private Context c;

    public a(Context context) {
        this.c = context;
    }

    public void a(com.reyun.tracking.b.d dVar) {
        try {
            this.c.getPackageManager().getPackageInfo("com.asus.msa.SupplementaryDID", 0);
        } catch (Exception e) {
            e.printStackTrace();
        }
        Intent intent = new Intent();
        intent.setAction("com.asus.msa.action.ACCESS_DID");
        intent.setComponent(new ComponentName("com.asus.msa.SupplementaryDID", "com.asus.msa.SupplementaryDID.SupplementaryDIDService"));
        if (this.c.bindService(intent, this.b, 1)) {
            try {
                String strA = new com.reyun.tracking.b.b.b((IBinder) this.f4706a.take()).a();
                if (dVar != null) {
                    dVar.a(strA, false);
                }
            } catch (Exception e2) {
                e2.printStackTrace();
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }
}
