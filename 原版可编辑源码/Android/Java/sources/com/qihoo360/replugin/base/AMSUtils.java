package com.qihoo360.replugin.base;

import android.app.ActivityManager;
import android.content.Context;
import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class AMSUtils {
    public static List<ActivityManager.RunningAppProcessInfo> getRunningAppProcessesNoThrows(Context context) {
        try {
            return ((ActivityManager) context.getSystemService("activity")).getRunningAppProcesses();
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }
}
