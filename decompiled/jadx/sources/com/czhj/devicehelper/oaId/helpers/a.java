package com.czhj.devicehelper.oaId.helpers;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper;
import com.czhj.devicehelper.oaId.interfaces.a;
import com.czhj.sdk.logger.SigmobLog;
import java.util.concurrent.LinkedBlockingQueue;

/* JADX INFO: loaded from: classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final LinkedBlockingQueue<IBinder> f1721a = new LinkedBlockingQueue<>(1);
    ServiceConnection b = new ServiceConnection() { // from class: com.czhj.devicehelper.oaId.helpers.a.1
        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                a.this.f1721a.put(iBinder);
            } catch (Exception e) {
                SigmobLog.e(e.getMessage());
            }
        }

        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName componentName) {
        }
    };
    private Context c;

    public a(Context context) {
        this.c = context;
    }

    public void a(DevicesIDsHelper.AppIdsUpdater appIdsUpdater) {
        if (a()) {
            Intent intent = new Intent();
            intent.setAction("com.asus.msa.action.ACCESS_DID");
            intent.setComponent(new ComponentName("com.asus.msa.SupplementaryDID", "com.asus.msa.SupplementaryDID.SupplementaryDIDService"));
            if (this.c.bindService(intent, this.b, 1)) {
                try {
                    try {
                        String strA = new a.C0067a(this.f1721a.take()).a();
                        if (appIdsUpdater != null) {
                            appIdsUpdater.OnIdsAvalid(strA);
                        }
                    } catch (Exception e) {
                        SigmobLog.e(e.getMessage());
                    }
                } finally {
                    this.c.unbindService(this.b);
                }
            }
        }
    }

    public boolean a() {
        try {
            return this.c.getPackageManager().getPackageInfo("com.asus.msa.SupplementaryDID", 0) != null;
        } catch (Throwable unused) {
            return false;
        }
    }
}
