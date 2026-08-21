package com.czhj.devicehelper.oaId.helpers;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper;
import com.czhj.devicehelper.oaId.interfaces.c;
import java.util.concurrent.LinkedBlockingQueue;

/* JADX INFO: loaded from: classes.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    com.czhj.devicehelper.oaId.interfaces.c f1725a;
    public final LinkedBlockingQueue<IBinder> b = new LinkedBlockingQueue<>(1);
    ServiceConnection c = new ServiceConnection() { // from class: com.czhj.devicehelper.oaId.helpers.c.1
        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                c.this.b.put(iBinder);
            } catch (Throwable unused) {
            }
        }

        @Override // android.content.ServiceConnection
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
                    c.a.C0068a c0068a = new c.a.C0068a(this.b.take());
                    this.f1725a = c0068a;
                    if (c0068a != null) {
                        String strA = c0068a.a();
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
