package com.czhj.devicehelper.oaId.helpers;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.util.Log;
import com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper;
import com.czhj.devicehelper.oaId.interfaces.f;
import com.czhj.sdk.logger.SigmobLog;
import java.util.concurrent.LinkedBlockingQueue;

/* JADX INFO: loaded from: classes.dex */
public class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final LinkedBlockingQueue<IBinder> f1733a = new LinkedBlockingQueue<>(1);
    ServiceConnection b = new ServiceConnection() { // from class: com.czhj.devicehelper.oaId.helpers.h.1
        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            Log.d("oaid", "oaid onServiceConnected() called with: name = [" + componentName + "], service = [" + iBinder + "]");
            try {
                h.this.f1733a.put(iBinder);
            } catch (Exception e) {
                SigmobLog.e(e.getMessage());
            }
        }

        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName componentName) {
        }
    };
    private Context c;

    public h(Context context) {
        this.c = context;
    }

    public void a(DevicesIDsHelper.AppIdsUpdater appIdsUpdater) {
        if (a()) {
            Intent intent = new Intent();
            intent.setClassName("com.samsung.android.deviceidservice", "com.samsung.android.deviceidservice.DeviceIdService");
            try {
                if (this.c.bindService(intent, this.b, 1)) {
                    try {
                        String strA = new f.a(this.f1733a.take()).a();
                        if (appIdsUpdater != null) {
                            appIdsUpdater.OnIdsAvalid(strA);
                        }
                    } catch (Exception e) {
                        SigmobLog.e(e.getMessage());
                    }
                }
            } finally {
                this.c.unbindService(this.b);
            }
        }
    }

    public boolean a() {
        try {
            return this.c.getPackageManager().getPackageInfo("com.samsung.android.deviceidservice", 0) != null;
        } catch (Throwable unused) {
            return false;
        }
    }
}
