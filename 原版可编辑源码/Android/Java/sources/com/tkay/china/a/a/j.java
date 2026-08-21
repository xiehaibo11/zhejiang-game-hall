package com.tkay.china.a.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.tkay.china.a.a.i;
import java.util.concurrent.LinkedBlockingQueue;

public final class j {
    public final LinkedBlockingQueue<IBinder> a = new LinkedBlockingQueue<>(1);
    ServiceConnection b = new ServiceConnection() {
        @Override
        public final void onServiceDisconnected(ComponentName componentName) {
        }

        @Override
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                j.this.a.put(iBinder);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    };
    private Context c;

    public j(Context context) {
        this.c = context;
    }

    public final void a(com.tkay.china.a.a aVar) {
        try {
            this.c.getPackageManager().getPackageInfo("com.samsung.android.deviceidservice", 0);
        } catch (Throwable th) {
            th.printStackTrace();
        }
        Intent intent = new Intent();
        intent.setClassName("com.samsung.android.deviceidservice", "com.samsung.android.deviceidservice.DeviceIdService");
        if (this.c.bindService(intent, this.b, 1)) {
            try {
                aVar.a(new i.a(this.a.take()).a(), false);
                return;
            } catch (Throwable th2) {
                th2.printStackTrace();
                th2.getMessage();
                aVar.a();
                return;
            }
        }
        aVar.a();
    }
}
