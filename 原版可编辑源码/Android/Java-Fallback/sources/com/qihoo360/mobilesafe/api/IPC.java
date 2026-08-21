package com.qihoo360.mobilesafe.api;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class IPC {
    public IPC() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final java.lang.String getCurrentProcessName() {
            java.lang.String r0 = com.qihoo360.replugin.base.IPC.getCurrentProcessName()
            return r0
    }

    public static final int getRunningProcessPID(android.content.Context r2, java.lang.String r3) {
            java.util.List r2 = com.qihoo360.replugin.base.AMSUtils.getRunningAppProcessesNoThrows(r2)
            if (r2 == 0) goto L21
            java.util.Iterator r2 = r2.iterator()
        La:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L21
            java.lang.Object r0 = r2.next()
            android.app.ActivityManager$RunningAppProcessInfo r0 = (android.app.ActivityManager.RunningAppProcessInfo) r0
            java.lang.String r1 = r0.processName
            boolean r1 = android.text.TextUtils.equals(r1, r3)
            if (r1 == 0) goto La
            int r2 = r0.pid
            return r2
        L21:
            r2 = 0
            return r2
    }

    public static final int getUIProcessPID(android.content.Context r1) {
            android.content.pm.ApplicationInfo r0 = r1.getApplicationInfo()
            java.lang.String r0 = r0.packageName
            int r1 = getRunningProcessPID(r1, r0)
            return r1
    }

    public static final boolean isPersistentProcess() {
            boolean r0 = com.qihoo360.replugin.base.IPC.isPersistentProcess()
            return r0
    }

    public static final boolean isRunningProcess(java.lang.String r2) {
            android.content.Context r0 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            java.util.List r0 = com.qihoo360.replugin.base.AMSUtils.getRunningAppProcessesNoThrows(r0)
            if (r0 == 0) goto L24
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L24
            java.lang.Object r1 = r0.next()
            android.app.ActivityManager$RunningAppProcessInfo r1 = (android.app.ActivityManager.RunningAppProcessInfo) r1
            java.lang.String r1 = r1.processName
            boolean r1 = android.text.TextUtils.equals(r1, r2)
            if (r1 == 0) goto Le
            r2 = 1
            return r2
        L24:
            r2 = 0
            return r2
    }

    public static final boolean isUIProcess() {
            boolean r0 = com.qihoo360.replugin.base.IPC.isUIProcess()
            return r0
    }

    public static final void sendLocalBroadcast2All(android.content.Context r0, android.content.Intent r1) {
            com.qihoo360.replugin.base.IPC.sendLocalBroadcast2All(r0, r1)
            return
    }

    public static final void sendLocalBroadcast2Plugin(android.content.Context r0, java.lang.String r1, android.content.Intent r2) {
            com.qihoo360.replugin.base.IPC.sendLocalBroadcast2Plugin(r0, r1, r2)
            return
    }

    public static final void sendLocalBroadcast2Process(android.content.Context r0, java.lang.String r1, android.content.Intent r2) {
            com.qihoo360.replugin.base.IPC.sendLocalBroadcast2Process(r0, r1, r2)
            return
    }
}
