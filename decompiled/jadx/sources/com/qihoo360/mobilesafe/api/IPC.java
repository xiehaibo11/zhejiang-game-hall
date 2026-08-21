package com.qihoo360.mobilesafe.api;

import android.app.ActivityManager;
import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.qihoo360.replugin.RePluginInternal;
import com.qihoo360.replugin.base.AMSUtils;
import java.util.Iterator;
import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public final class IPC {
    public static final int getUIProcessPID(Context context) {
        return getRunningProcessPID(context, context.getApplicationInfo().packageName);
    }

    public static final int getRunningProcessPID(Context context, String str) {
        List<ActivityManager.RunningAppProcessInfo> runningAppProcessesNoThrows = AMSUtils.getRunningAppProcessesNoThrows(context);
        if (runningAppProcessesNoThrows == null) {
            return 0;
        }
        for (ActivityManager.RunningAppProcessInfo runningAppProcessInfo : runningAppProcessesNoThrows) {
            if (TextUtils.equals(runningAppProcessInfo.processName, str)) {
                return runningAppProcessInfo.pid;
            }
        }
        return 0;
    }

    public static final boolean isRunningProcess(String str) {
        List<ActivityManager.RunningAppProcessInfo> runningAppProcessesNoThrows = AMSUtils.getRunningAppProcessesNoThrows(RePluginInternal.getAppContext());
        if (runningAppProcessesNoThrows == null) {
            return false;
        }
        Iterator<ActivityManager.RunningAppProcessInfo> it = runningAppProcessesNoThrows.iterator();
        while (it.hasNext()) {
            if (TextUtils.equals(it.next().processName, str)) {
                return true;
            }
        }
        return false;
    }

    public static final String getCurrentProcessName() {
        return com.qihoo360.replugin.base.IPC.getCurrentProcessName();
    }

    public static final boolean isPersistentProcess() {
        return com.qihoo360.replugin.base.IPC.isPersistentProcess();
    }

    public static final boolean isUIProcess() {
        return com.qihoo360.replugin.base.IPC.isUIProcess();
    }

    public static final void sendLocalBroadcast2Process(Context context, String str, Intent intent) {
        com.qihoo360.replugin.base.IPC.sendLocalBroadcast2Process(context, str, intent);
    }

    public static final void sendLocalBroadcast2Plugin(Context context, String str, Intent intent) {
        com.qihoo360.replugin.base.IPC.sendLocalBroadcast2Plugin(context, str, intent);
    }

    public static final void sendLocalBroadcast2All(Context context, Intent intent) {
        com.qihoo360.replugin.base.IPC.sendLocalBroadcast2All(context, intent);
    }
}
