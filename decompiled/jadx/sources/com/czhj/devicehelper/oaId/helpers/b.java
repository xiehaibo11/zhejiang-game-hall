package com.czhj.devicehelper.oaId.helpers;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper;
import com.czhj.devicehelper.oaId.interfaces.b;
import com.czhj.sdk.logger.SigmobLog;
import java.util.concurrent.LinkedBlockingQueue;

/* JADX INFO: loaded from: classes.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final LinkedBlockingQueue<IBinder> f1723a = new LinkedBlockingQueue<>(1);
    ServiceConnection b = new ServiceConnection() { // from class: com.czhj.devicehelper.oaId.helpers.b.1
        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                b.this.f1723a.put(iBinder);
            } catch (Exception e) {
                SigmobLog.e(e.getMessage());
            }
        }

        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName componentName) {
        }
    };
    private Context c;

    public b(Context context) {
        this.c = context;
    }

    public void a(DevicesIDsHelper.AppIdsUpdater appIdsUpdater) {
        if (a()) {
            Intent intent = new Intent("com.uodis.opendevice.OPENIDS_SERVICE");
            intent.setPackage("com.huawei.hwid");
            if (this.c.bindService(intent, this.b, 1)) {
                try {
                    try {
                        b.a aVar = new b.a(this.f1723a.take(), this.c);
                        String strA = aVar.a();
                        aVar.b();
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
            return this.c.getPackageManager().getPackageInfo("com.huawei.hwid", 0) != null;
        } catch (Throwable unused) {
            return false;
        }
    }
}
