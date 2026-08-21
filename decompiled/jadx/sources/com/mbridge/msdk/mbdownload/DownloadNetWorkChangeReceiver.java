package com.mbridge.msdk.mbdownload;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbdownload.manager.ADownloadManager;

/* JADX INFO: loaded from: classes2.dex */
public class DownloadNetWorkChangeReceiver extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    boolean f3659a = true;

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        if (this.f3659a) {
            this.f3659a = false;
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
