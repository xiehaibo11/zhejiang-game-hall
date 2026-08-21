package com.bianfeng.ymnsdk.sysfunc.helpers;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.util.Log;
import com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper;
import com.bianfeng.ymnsdk.sysfunc.interfaces.LenovoIDInterface;

/* JADX INFO: loaded from: classes.dex */
public class LenovoDeviceIDHelper {
    LenovoIDInterface lenovoIDInterface;
    private Context mContext;
    ServiceConnection serviceConnection = new ServiceConnection() { // from class: com.bianfeng.ymnsdk.sysfunc.helpers.LenovoDeviceIDHelper.1
        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName componentName) {
        }

        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            LenovoDeviceIDHelper.this.lenovoIDInterface = new LenovoIDInterface.len_up.len_down(iBinder);
        }
    };

    public LenovoDeviceIDHelper(Context context) {
        this.mContext = context;
    }

    public void getIdRun(DevicesIDsHelper.AppIdsUpdater appIdsUpdater) {
        Log.e("LenovoDeviceIDHelper", "getIdRun");
        String packageName = this.mContext.getPackageName();
        Intent intent = new Intent();
        intent.setClassName("com.zui.deviceidservice", "com.zui.deviceidservice.DeviceidService");
        if (!this.mContext.bindService(intent, this.serviceConnection, 1)) {
            if (appIdsUpdater != null) {
                appIdsUpdater.OnIdsAvalid("");
                return;
            }
            return;
        }
        LenovoIDInterface lenovoIDInterface = this.lenovoIDInterface;
        if (lenovoIDInterface != null) {
            String strA = lenovoIDInterface.a();
            this.lenovoIDInterface.b();
            this.lenovoIDInterface.b(packageName);
            this.lenovoIDInterface.b(packageName);
            if (appIdsUpdater != null) {
                appIdsUpdater.OnIdsAvalid(strA);
            }
        }
    }
}
