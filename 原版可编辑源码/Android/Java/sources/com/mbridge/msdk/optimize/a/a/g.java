package com.mbridge.msdk.optimize.a.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.mbridge.msdk.optimize.a.b.e;
import java.util.concurrent.LinkedBlockingQueue;

public final class g {
    public final LinkedBlockingQueue<IBinder> a = new LinkedBlockingQueue<>(1);
    ServiceConnection b = new ServiceConnection() {
        @Override
        public final void onServiceDisconnected(ComponentName componentName) {
        }

        @Override
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                g.this.a.put(iBinder);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    };
    private Context c;

    public g(Context context) {
        this.c = context;
    }

    public final void a(com.mbridge.msdk.optimize.a.b bVar) {
        try {
            this.c.getPackageManager().getPackageInfo("com.samsung.android.deviceidservice", 0);
        } catch (Exception e) {
            e.printStackTrace();
        }
        Intent intent = new Intent();
        intent.setClassName("com.samsung.android.deviceidservice", "com.samsung.android.deviceidservice.DeviceIdService");
        if (this.c.bindService(intent, this.b, 1)) {
            try {
                String strA = new e.a(this.a.take()).a();
                if (bVar != null) {
                    bVar.a(strA, false);
                }
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
    }
}
