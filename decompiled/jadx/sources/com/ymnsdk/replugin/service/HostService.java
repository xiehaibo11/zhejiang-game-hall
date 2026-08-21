package com.ymnsdk.replugin.service;

import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.Service;
import android.content.Intent;
import android.os.Build;
import android.os.IBinder;
import android.support.v4.app.NotificationCompat;
import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.ymnsdk.replugin.RepluginSdkJavaBridging;
import com.ymnsdk.replugin.service.IHostAidlInterface;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class HostService extends Service {
    public static int HOSTServiceID = 1005;

    @Override // android.app.Service
    public void onCreate() {
        if (Build.VERSION.SDK_INT >= 26) {
            ((NotificationManager) getSystemService(RemoteMessageConst.NOTIFICATION)).createNotificationChannel(new NotificationChannel("replugin_host_channel", "Channel human readable title", 3));
            startForeground(HOSTServiceID, new NotificationCompat.Builder(this, "replugin_host_channel").setContentTitle("").setContentText("").build());
        }
        super.onCreate();
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return new HostStub();
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        return super.onStartCommand(intent, i, i2);
    }

    @Override // android.app.Service
    public void onDestroy() {
        stopForeground(true);
        super.onDestroy();
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    class HostStub extends IHostAidlInterface.Stub {
        HostStub() {
        }

        @Override // com.ymnsdk.replugin.service.IHostAidlInterface
        public void postToSepperllita(String str) {
            Log.e(HostConstant.ymn, "触发了aidl");
            RepluginSdkJavaBridging.postToSepperllita(str);
        }
    }
}
