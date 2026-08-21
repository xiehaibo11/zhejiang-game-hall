package com.mbridge.msdk.optimize.a.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.mbridge.msdk.optimize.a.b.a;
import java.util.concurrent.LinkedBlockingQueue;

public final class a {
    public final LinkedBlockingQueue<IBinder> a = new LinkedBlockingQueue<>(1);
    ServiceConnection b = new ServiceConnection() {
        @Override
        public final void onServiceDisconnected(ComponentName componentName) {
        }

        @Override
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                a.this.a.put(iBinder);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    };
    private Context c;

    public a(Context context) {
        this.c = context;
    }

    public final void a(com.mbridge.msdk.optimize.a.b bVar) {
        try {
            this.c.getPackageManager().getPackageInfo("com.asus.msa.SupplementaryDID", 0);
        } catch (Exception e) {
            e.printStackTrace();
        }
        Intent intent = new Intent();
        intent.setAction("com.asus.msa.action.ACCESS_DID");
        intent.setComponent(new ComponentName("com.asus.msa.SupplementaryDID", "com.asus.msa.SupplementaryDID.SupplementaryDIDService"));
        try {
            if (this.c.bindService(intent, this.b, 1)) {
                try {
                    try {
                        String strA = new a.a(this.a.take()).a();
                        if (bVar != null) {
                            bVar.a(strA, false);
                        }
                    } catch (Exception e2) {
                        e2.printStackTrace();
                    }
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        } catch (Throwable th2) {
            th2.printStackTrace();
        }
    }
}
