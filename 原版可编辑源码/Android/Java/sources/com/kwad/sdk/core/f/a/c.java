package com.kwad.sdk.core.f.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.kwad.sdk.core.f.b.c;
import java.util.concurrent.LinkedBlockingQueue;

public final class c {
    private Context mContext;
    private final LinkedBlockingQueue<IBinder> aqn = new LinkedBlockingQueue<>(1);
    private ServiceConnection aql = new ServiceConnection() {
        @Override
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                c.this.aqn.put(iBinder);
            } catch (Exception unused) {
            }
        }

        @Override
        public final void onServiceDisconnected(ComponentName componentName) {
        }
    };

    public c(Context context) {
        this.mContext = context;
    }

    public final String getOAID() {
        Context context;
        String oaid = "";
        try {
            Intent intent = new Intent();
            intent.setClassName("com.zui.deviceidservice", "com.zui.deviceidservice.DeviceidService");
            if (this.mContext.bindService(intent, this.aql, 1)) {
                try {
                    try {
                        oaid = new c.a(this.aqn.take()).getOaid();
                        new StringBuilder("getOAID oaid:").append(oaid);
                        context = this.mContext;
                    } catch (Exception unused) {
                        context = this.mContext;
                    }
                    context.unbindService(this.aql);
                } catch (Throwable th) {
                    this.mContext.unbindService(this.aql);
                    throw th;
                }
            }
        } catch (Exception unused2) {
        }
        return oaid;
    }
}
