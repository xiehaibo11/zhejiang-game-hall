package com.tkay.expressad.videocommon.b;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;

public final class i extends BroadcastReceiver {
    @Override
    public final void onReceive(Context context, Intent intent) {
        try {
            if ("android.net.conn.CONNECTIVITY_CHANGE".equals(intent.getAction())) {
                NetworkInfo activeNetworkInfo = ((ConnectivityManager) context.getSystemService("connectivity")).getActiveNetworkInfo();
                if (activeNetworkInfo != null && activeNetworkInfo.isAvailable()) {
                    if (activeNetworkInfo.getType() == 1) {
                        c.a().a(true);
                        return;
                    } else {
                        if (activeNetworkInfo.getType() == 0) {
                            c.a().c();
                            return;
                        }
                        return;
                    }
                }
                c.a().b();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
