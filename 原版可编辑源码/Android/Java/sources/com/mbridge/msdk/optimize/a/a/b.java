package com.mbridge.msdk.optimize.a.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.mbridge.msdk.optimize.a.b.b;

public final class b {
    com.mbridge.msdk.optimize.a.b.b a;
    ServiceConnection b = new ServiceConnection() {
        @Override
        public final void onServiceDisconnected(ComponentName componentName) {
        }

        @Override
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                b.this.a = new b.a.a(iBinder);
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
            if (!this.c.bindService(intent, this.b, 1) || this.a == null) {
                return;
            }
            String strA = this.a.a();
            if (bVar != null) {
                bVar.a(strA, false);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
