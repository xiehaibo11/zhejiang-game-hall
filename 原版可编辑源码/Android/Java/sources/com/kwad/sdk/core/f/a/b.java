package com.kwad.sdk.core.f.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.kwad.sdk.core.f.b.b;
import java.util.concurrent.LinkedBlockingQueue;

public final class b {
    private Context mContext;
    private final LinkedBlockingQueue<IBinder> aqn = new LinkedBlockingQueue<>(1);
    private ServiceConnection aql = new ServiceConnection() {
        @Override
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                b.this.aqn.put(iBinder);
            } catch (Exception unused) {
            }
        }

        @Override
        public final void onServiceDisconnected(ComponentName componentName) {
        }
    };

    public b(Context context) {
        this.mContext = context;
    }

    public final String getOAID() {
        Context context;
        String strBM = "";
        try {
            Intent intent = new Intent("com.uodis.opendevice.OPENIDS_SERVICE");
            intent.setPackage("com.huawei.hwid");
            if (this.mContext.bindService(intent, this.aql, 1)) {
                try {
                    b.a aVar = new b.a(this.aqn.take());
                    strBM = aVar.BM();
                    boolean zBN = aVar.BN();
                    StringBuilder sb = new StringBuilder("getOAID oaid:");
                    sb.append(strBM);
                    sb.append("--boos:");
                    sb.append(zBN);
                    context = this.mContext;
                } catch (Exception unused) {
                    context = this.mContext;
                } catch (Throwable th) {
                    this.mContext.unbindService(this.aql);
                    throw th;
                }
                context.unbindService(this.aql);
            }
        } catch (Exception unused2) {
        }
        return strBM;
    }
}
