package com.mbridge.msdk.mbdownload;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbdownload.manager.ADownloadManager;

public class DownloadNetWorkChangeReceiver extends BroadcastReceiver {
    boolean a = true;

    @Override
    public void onReceive(Context context, Intent intent) {
        if (this.a) {
            this.a = false;
            return;
        }
        if ("android.net.conn.CONNECTIVITY_CHANGE".equals(intent.getAction())) {
            z.d("DownloadNetWorkChangeReceiver", "=======reConn:" + intent.getBooleanExtra("FAILOVER_CONNECTION", false) + "--noConn:" + intent.getBooleanExtra("EXTRA_NO_CONNECTIVITY", false));
            if (com.mbridge.msdk.foundation.same.a.h) {
                ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
                ADownloadManager aDownloadManager = ADownloadManager.getInstance();
                if (connectivityManager != null) {
                    NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
                    if (activeNetworkInfo != null && activeNetworkInfo.isConnected()) {
                        z.d("DownloadNetWorkChangeReceiver", "=======networkInfo:Connected");
                        aDownloadManager.reStartAllTask();
                        return;
                    } else {
                        z.d("DownloadNetWorkChangeReceiver", "=======networkInfo:not Connected");
                        aDownloadManager.cancelAllTask();
                        return;
                    }
                }
                aDownloadManager.cancelAllTask();
            }
        }
    }
}
