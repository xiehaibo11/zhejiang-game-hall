package com.tkay.china.a.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.tkay.china.a.a.l;

public final class m {
    l a;
    ServiceConnection b = new ServiceConnection() {
        @Override
        public final void onServiceDisconnected(ComponentName componentName) {
        }

        @Override
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            m.this.a = new l.a(iBinder);
        }
    };
    private Context c;

    public m(Context context) {
        this.c = context;
    }

    public final void a(com.tkay.china.a.a aVar) {
        try {
            Intent intent = new Intent();
            intent.setClassName("com.zui.deviceidservice", "com.zui.deviceidservice.DeviceidService");
            if (this.c.bindService(intent, this.b, 1) && this.a != null) {
                aVar.a(this.a.a(), false);
            } else {
                aVar.a();
            }
        } catch (Throwable th) {
            th.getMessage();
            aVar.a();
        }
    }
}
