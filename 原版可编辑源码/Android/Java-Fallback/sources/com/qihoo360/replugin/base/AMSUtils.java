package com.qihoo360.replugin.base;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class AMSUtils {
    public AMSUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.List<android.app.ActivityManager.RunningAppProcessInfo> getRunningAppProcessesNoThrows(android.content.Context r1) {
            java.lang.String r0 = "activity"
            java.lang.Object r1 = r1.getSystemService(r0)     // Catch: java.lang.Throwable -> Ld
            android.app.ActivityManager r1 = (android.app.ActivityManager) r1     // Catch: java.lang.Throwable -> Ld
            java.util.List r1 = r1.getRunningAppProcesses()     // Catch: java.lang.Throwable -> Ld
            return r1
        Ld:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }
}
