package com.bianfeng.ymnsdk.sysfunc.helpers;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.util.Log;
import com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper;
import com.bianfeng.ymnsdk.sysfunc.interfaces.HWIDInterface;
import java.util.concurrent.LinkedBlockingQueue;

/* JADX INFO: loaded from: classes.dex */
public class HWDeviceIDHelper {
    private Context mContext;
    public final LinkedBlockingQueue<IBinder> linkedBlockingQueue = new LinkedBlockingQueue<>(1);
    ServiceConnection serviceConnection = new ServiceConnection() { // from class: com.bianfeng.ymnsdk.sysfunc.helpers.HWDeviceIDHelper.1
        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName componentName) {
        }

        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                HWDeviceIDHelper.this.linkedBlockingQueue.put(iBinder);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    };

    public HWDeviceIDHelper(Context context) {
        this.mContext = context;
    }

    public void getHWID(DevicesIDsHelper.AppIdsUpdater appIdsUpdater) {
        Log.i("Wooo", "getHWID IN ");
        try {
            this.mContext.getPackageManager().getPackageInfo("com.huawei.hwid", 0);
        } catch (Exception e) {
            Log.i("Wooo", "getHWID hw service not found;");
            e.printStackTrace();
        }
        Intent intent = new Intent("com.uodis.opendevice.OPENIDS_SERVICE");
        intent.setPackage("com.huawei.hwid");
        boolean zBindService = this.mContext.bindService(intent, this.serviceConnection, 1);
        Log.i("Wooo", "intentForID bindService. isBin -> " + zBindService);
        try {
            if (zBindService) {
                try {
                    IBinder iBinderTake = this.linkedBlockingQueue.take();
                    Log.i("Wooo", "getHWID bindService. binder -> " + iBinderTake);
                    HWIDInterface.HWID hwid = new HWIDInterface.HWID(iBinderTake);
                    String iDs = hwid.getIDs();
                    Log.i("Wooo", "getHWID OUT ids -> " + iDs + " , boos -> " + hwid.getBoos());
                    if (appIdsUpdater != null) {
                        appIdsUpdater.OnIdsAvalid(iDs);
                    }
                } catch (Exception e2) {
                    if (appIdsUpdater != null) {
                        appIdsUpdater.OnIdsAvalid("");
                    }
                    e2.printStackTrace();
                }
            } else if (appIdsUpdater != null) {
                appIdsUpdater.OnIdsAvalid("");
            }
            Log.i("Wooo", "getHWID OUT isBin -> " + zBindService);
        } finally {
            this.mContext.unbindService(this.serviceConnection);
        }
    }
}
