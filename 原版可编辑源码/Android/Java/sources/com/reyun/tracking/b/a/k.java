package com.reyun.tracking.b.a;

import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import java.util.concurrent.LinkedBlockingQueue;

public class k {
    public final LinkedBlockingQueue a = new LinkedBlockingQueue(1);
    ServiceConnection b = new l(this);
    private Context c;

    public k(Context context) {
        this.c = context;
    }

    public void a(com.reyun.tracking.b.d dVar) {
        try {
            this.c.getPackageManager().getPackageInfo("com.samsung.android.deviceidservice", 0);
        } catch (Exception e) {
            e.printStackTrace();
        }
        Intent intent = new Intent();
        intent.setClassName("com.samsung.android.deviceidservice", "com.samsung.android.deviceidservice.DeviceIdService");
        if (this.c.bindService(intent, this.b, 1)) {
            try {
                String strA = new com.reyun.tracking.b.b.m((IBinder) this.a.take()).a();
                if (dVar != null) {
                    dVar.a(strA, false);
                }
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
    }
}
