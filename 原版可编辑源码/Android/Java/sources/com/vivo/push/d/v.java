package com.vivo.push.d;

import android.app.ActivityManager;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

final class v implements Runnable {
    final Context a;
    final Map b;
    final u c;

    v(u uVar, Context context, Map map) {
        this.c = uVar;
        this.a = context;
        this.b = map;
    }

    @Override
    public final void run() {
        String packageName = this.a.getPackageName();
        try {
            List<ActivityManager.RunningTaskInfo> runningTasks = ((ActivityManager) this.a.getSystemService("activity")).getRunningTasks(100);
            if (runningTasks != null) {
                Iterator<ActivityManager.RunningTaskInfo> it = runningTasks.iterator();
                while (it.hasNext()) {
                    ComponentName componentName = it.next().topActivity;
                    if (componentName.getPackageName().equals(packageName)) {
                        com.vivo.push.util.p.d("OnNotificationClickTask", "topClassName=" + componentName.getClassName());
                        Intent intent = new Intent();
                        intent.setComponent(componentName);
                        intent.setFlags(335544320);
                        u.b(intent, this.b);
                        this.a.startActivity(intent);
                        return;
                    }
                }
            }
        } catch (Exception e) {
            com.vivo.push.util.p.a("OnNotificationClickTask", "start recentIntent is error", e);
        }
        Intent launchIntentForPackage = this.a.getPackageManager().getLaunchIntentForPackage(this.a.getPackageName());
        if (launchIntentForPackage == null) {
            com.vivo.push.util.p.a("OnNotificationClickTask", "LaunchIntent is null");
            return;
        }
        launchIntentForPackage.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        u.b(launchIntentForPackage, this.b);
        this.a.startActivity(launchIntentForPackage);
    }
}
