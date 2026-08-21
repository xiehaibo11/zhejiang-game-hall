package com.czhj.devicehelper.oaId.helpers;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper;
import com.czhj.devicehelper.oaId.interfaces.c;
import java.util.concurrent.LinkedBlockingQueue;

public class c {
    com.czhj.devicehelper.oaId.interfaces.c a;
    public final LinkedBlockingQueue<IBinder> b = new LinkedBlockingQueue<>(1);
    ServiceConnection c = new ServiceConnection() {
        @Override
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                c.this.b.put(iBinder);
            } catch (Throwable unused) {
            }
        }

        @Override
        public void onServiceDisconnected(ComponentName componentName) {
        }
    };
    private Context d;

    public c(Context context) {
        this.d = context;
    }

    private boolean a() {
        try {
            return this.d.getPackageManager().getPackageInfo("com.zui.deviceidservice", 0) != null;
        } catch (Throwable unused) {
            return false;
        }
    }

    public void a(DevicesIDsHelper.AppIdsUpdater appIdsUpdater) {
        if (a()) {
            Intent intent = new Intent();
            intent.setClassName("com.zui.deviceidservice", "com.zui.deviceidservice.DeviceidService");
            if (this.d.bindService(intent, this.c, 1)) {
                try {
                    c.a.a aVar = new c.a.a(this.b.take());
                    this.a = aVar;
                    if (aVar != null) {
                        String strA = aVar.a();
                        if (appIdsUpdater != null) {
                            appIdsUpdater.OnIdsAvalid(strA);
                        }
                    }
                } finally {
                    try {
                    } finally {
                    }
                }
            }
        }
    }
}
