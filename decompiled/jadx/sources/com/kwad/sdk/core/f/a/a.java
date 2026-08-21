package com.kwad.sdk.core.f.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.kwad.sdk.core.f.b.a;
import java.util.concurrent.LinkedBlockingQueue;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private final LinkedBlockingQueue<IBinder> aqk = new LinkedBlockingQueue<>(1);
    private ServiceConnection aql = new ServiceConnection() { // from class: com.kwad.sdk.core.f.a.a.1
        @Override // android.content.ServiceConnection
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                a.this.aqk.put(iBinder);
            } catch (Exception unused) {
            }
        }

        @Override // android.content.ServiceConnection
        public final void onServiceDisconnected(ComponentName componentName) {
        }
    };
    private Context mContext;

    public a(Context context) {
        this.mContext = context;
    }

    public final String getOAID() {
        Context context;
        String id = "";
        try {
            Intent intent = new Intent();
            intent.setAction("com.asus.msa.action.ACCESS_DID");
            intent.setComponent(new ComponentName("com.asus.msa.SupplementaryDID", "com.asus.msa.SupplementaryDID.SupplementaryDIDService"));
            if (this.mContext.bindService(intent, this.aql, 1)) {
                try {
                    id = new a.C0211a(this.aqk.take()).getID();
                    new StringBuilder("getOAID oaid:").append(id);
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
        return id;
    }
}
