package com.czhj.devicehelper.oaId.helpers;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.util.Log;
import com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper;
import com.czhj.devicehelper.oaId.interfaces.g;
import com.czhj.sdk.logger.SigmobLog;
import java.util.concurrent.LinkedBlockingQueue;

/* JADX INFO: loaded from: classes.dex */
public class k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Context f1738a;
    public final LinkedBlockingQueue<IBinder> b = new LinkedBlockingQueue<>(1);
    ServiceConnection c = new ServiceConnection() { // from class: com.czhj.devicehelper.oaId.helpers.k.1
        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                k.this.b.put(iBinder);
            } catch (Exception e) {
                SigmobLog.e(e.getMessage());
            }
        }

        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName componentName) {
        }
    };

    public k(Context context) {
        this.f1738a = context;
    }

    private void a(String str) {
        try {
            Intent intent = new Intent("com.bun.msa.action.start.service");
            intent.setClassName("com.mdid.msa", "com.mdid.msa.service.MsaKlService");
            intent.putExtra("com.bun.msa.param.pkgname", str);
            intent.putExtra("com.bun.msa.param.runinset", true);
            if (this.f1738a.startService(intent) != null) {
                Log.d("oaid", "oaid startMsaklServer()  success called with: pkgName = [" + str + "]");
            }
        } catch (Exception e) {
            SigmobLog.e(e.getMessage());
        }
    }

    private boolean a() {
        try {
            return this.f1738a.getPackageManager().getPackageInfo("com.mdid.msa", 0) != null;
        } catch (Exception e) {
            SigmobLog.e(e.getMessage());
            return false;
        }
    }

    public void a(DevicesIDsHelper.AppIdsUpdater appIdsUpdater) {
        if (!a()) {
            Log.d("oaid", "oaid  checkService false ");
            return;
        }
        String packageName = this.f1738a.getPackageName();
        a(packageName);
        Intent intent = new Intent();
        intent.setClassName("com.mdid.msa", "com.mdid.msa.service.MsaIdService");
        intent.setAction("com.bun.msa.action.bindto.service");
        intent.putExtra("com.bun.msa.param.pkgname", packageName);
        if (this.f1738a.bindService(intent, this.c, 1)) {
            try {
                try {
                    Log.d("oaid", "oaid getID()  bindService success called with: pkgName = [" + packageName + "]");
                    String strB = new g.a.C0071a(this.b.take()).b();
                    if (appIdsUpdater != null) {
                        appIdsUpdater.OnIdsAvalid(strB);
                    }
                } catch (Exception e) {
                    SigmobLog.e(e.getMessage());
                }
            } finally {
                this.f1738a.unbindService(this.c);
            }
        }
    }
}
