package com.bianfeng.ymnsdk.sysfunc.helpers;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.util.Log;
import com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper;
import com.bianfeng.ymnsdk.sysfunc.interfaces.ASUSIDInterface;
import java.util.concurrent.LinkedBlockingQueue;

public class ASUSDeviceIDHelper {
    private Context mContext;
    public final LinkedBlockingQueue<IBinder> linkedBlockingQueue = new LinkedBlockingQueue<>(1);
    ServiceConnection serviceConnection = new ServiceConnection() {
        @Override
        public void onServiceDisconnected(ComponentName componentName) {
        }

        @Override
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                ASUSDeviceIDHelper.this.linkedBlockingQueue.put(iBinder);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    };

    public ASUSDeviceIDHelper(Context context) {
        this.mContext = context;
    }

    public void getID(DevicesIDsHelper.AppIdsUpdater appIdsUpdater) {
        try {
            this.mContext.getPackageManager().getPackageInfo("com.asus.msa.SupplementaryDID", 0);
        } catch (Exception e) {
            Log.i("Wooo", "intentForID asus service not found;");
            e.printStackTrace();
        }
        Intent intent = new Intent();
        intent.setAction("com.asus.msa.action.ACCESS_DID");
        intent.setComponent(new ComponentName("com.asus.msa.SupplementaryDID", "com.asus.msa.SupplementaryDID.SupplementaryDIDService"));
        if (!this.mContext.bindService(intent, this.serviceConnection, 1)) {
            if (appIdsUpdater != null) {
                appIdsUpdater.OnIdsAvalid("");
                return;
            }
            return;
        }
        try {
            String id = new ASUSIDInterface.ASUSID(this.linkedBlockingQueue.take()).getID();
            Log.i("Wooo", "intentForID getID ids -> " + id);
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
