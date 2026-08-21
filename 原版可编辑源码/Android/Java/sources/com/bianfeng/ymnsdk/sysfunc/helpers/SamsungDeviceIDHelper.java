package com.bianfeng.ymnsdk.sysfunc.helpers;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.util.Log;
import com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper;
import com.bianfeng.ymnsdk.sysfunc.interfaces.SamsungIDInterface;
import java.util.concurrent.LinkedBlockingQueue;

public class SamsungDeviceIDHelper {
    private Context mContext;
    public final LinkedBlockingQueue<IBinder> linkedBlockingQueue = new LinkedBlockingQueue<>(1);
    ServiceConnection serviceConnection = new ServiceConnection() {
        @Override
        public void onServiceDisconnected(ComponentName componentName) {
        }

        @Override
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                SamsungDeviceIDHelper.this.linkedBlockingQueue.put(iBinder);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    };

    public SamsungDeviceIDHelper(Context context) {
        this.mContext = context;
    }

    public void getSumsungID(DevicesIDsHelper.AppIdsUpdater appIdsUpdater) {
        try {
            this.mContext.getPackageManager().getPackageInfo("com.samsung.android.deviceidservice", 0);
        } catch (Exception e) {
            Log.i("Wooo", "intentForID getSumsungID service not found;");
            e.printStackTrace();
        }
        Intent intent = new Intent();
        intent.setClassName("com.samsung.android.deviceidservice", "com.samsung.android.deviceidservice.DeviceIdService");
        if (!this.mContext.bindService(intent, this.serviceConnection, 1)) {
            if (appIdsUpdater != null) {
                appIdsUpdater.OnIdsAvalid("");
                return;
            }
            return;
        }
        try {
            String id = new SamsungIDInterface.Proxy(this.linkedBlockingQueue.take()).getID();
            Log.i("Wooo", "intentForID getSumsungID oaid -> " + id);
            if (appIdsUpdater != null) {
                appIdsUpdater.OnIdsAvalid(id);
            }
        } catch (Exception e2) {
            if (appIdsUpdater != null) {
                appIdsUpdater.OnIdsAvalid("");
            }
            e2.printStackTrace();
        }
    }
}
