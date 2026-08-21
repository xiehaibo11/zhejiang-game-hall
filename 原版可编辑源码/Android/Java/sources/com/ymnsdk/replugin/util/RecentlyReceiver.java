package com.ymnsdk.replugin.util;

import android.app.Activity;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.tkay.expressad.foundation.d.r;
import com.ymnsdk.replugin.datafun.PostdataLib;
import com.ymnsdk.replugin.event.other.PullUpTaskListEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RecentlyReceiver extends BroadcastReceiver {
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override
    public void onReceive(Context context, Intent intent) {
        String stringExtra = intent.getStringExtra(r.ac);
        if (stringExtra != null) {
            byte b = -1;
            switch (stringExtra.hashCode()) {
                case -1408204183:
                    if (stringExtra.equals("assist")) {
                        b = 2;
                    }
                    break;
                case 350448461:
                    if (stringExtra.equals("recentapps")) {
                        b = 1;
                    }
                    break;
                case 1092716832:
                    if (stringExtra.equals("homekey")) {
                        b = 0;
                    }
                    break;
                case 2014770135:
                    if (stringExtra.equals("fs_gesture")) {
                        b = 3;
                    }
                    break;
            }
            if (b == 0 || b == 1 || b == 2 || b == 3) {
                Log.i(HostConstant.ymn, "获取最近应用列表" + stringExtra);
                PostdataLib.getInstance().postToSeperllita(new PullUpTaskListEvent((Activity) context, stringExtra));
            }
        }
    }
}
