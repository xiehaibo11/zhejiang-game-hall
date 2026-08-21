package com.kwad.sdk.core.f.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.kwad.sdk.core.f.b.f;
import java.util.concurrent.LinkedBlockingQueue;

/* JADX INFO: loaded from: classes2.dex */
public final class j {
    public Context mContext;
    private final LinkedBlockingQueue<IBinder> aqn = new LinkedBlockingQueue<>(1);
    private ServiceConnection aql = new ServiceConnection() { // from class: com.kwad.sdk.core.f.a.j.1
        @Override // android.content.ServiceConnection
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                j.this.aqn.put(iBinder);
            } catch (Exception unused) {
            }
        }

        @Override // android.content.ServiceConnection
        public final void onServiceDisconnected(ComponentName componentName) {
        }
    };

    public j(Context context) {
        this.mContext = context;
    }

    public final String getOAID() {
        Context context;
        String oaid = "";
        try {
            Intent intent = new Intent();
            intent.setClassName("com.mdid.msa", "com.mdid.msa.service.MsaIdService");
            intent.setAction("com.bun.msa.action.bindto.service");
            intent.putExtra("com.bun.msa.param.pkgname", this.mContext.getPackageName());
            boolean zBindService = this.mContext.bindService(intent, this.aql, 1);
            new StringBuilder("getOAID isBind=").append(zBindService);
            if (zBindService) {
                try {
                    oaid = new f.a(this.aqn.take()).getOAID();
                    new StringBuilder("getOAID oaid:").append(oaid);
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
        return oaid;
    }
}
