package com.vivo.push.d;

import android.app.ActivityManager;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
final class v implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f7915a;
    final /* synthetic */ Map b;
    final /* synthetic */ u c;

    v(u uVar, Context context, Map map) {
        this.c = uVar;
        this.f7915a = context;
        this.b = map;
    }

    @Override // java.lang.Runnable
    public final void run() {
        String packageName = this.f7915a.getPackageName();
        try {
            List<ActivityManager.RunningTaskInfo> runningTasks = ((ActivityManager) this.f7915a.getSystemService("activity")).getRunningTasks(100);
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
                        this.f7915a.startActivity(intent);
                        return;
                    }
                }
            }
        } catch (Exception e) {
            com.vivo.push.util.p.a("OnNotificationClickTask", "start recentIntent is error", e);
        }
        Intent launchIntentForPackage = this.f7915a.getPackageManager().getLaunchIntentForPackage(this.f7915a.getPackageName());
        if (launchIntentForPackage == null) {
            com.vivo.push.util.p.a("OnNotificationClickTask", "LaunchIntent is null");
            return;
        }
        launchIntentForPackage.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        u.b(launchIntentForPackage, this.b);
        this.f7915a.startActivity(launchIntentForPackage);
    }
}
