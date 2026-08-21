package com.huawei.hms.utils;

public class UIUtil {
    public UIUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.app.Activity getActiveActivity(android.app.Activity r2, android.content.Context r3) {
            boolean r0 = isBackground(r3)
            java.lang.String r1 = "UIUtil"
            if (r0 == 0) goto L22
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "isBackground"
            r2.append(r0)
            boolean r3 = isBackground(r3)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.huawei.hms.support.log.HMSLog.i(r1, r2)
            r2 = 0
            return r2
        L22:
            if (r2 != 0) goto L3f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "activity is "
            r3.append(r0)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.huawei.hms.support.log.HMSLog.i(r1, r2)
            com.huawei.hms.support.common.ActivityMgr r2 = com.huawei.hms.support.common.ActivityMgr.INST
            android.app.Activity r2 = r2.getCurrentActivity()
            return r2
        L3f:
            boolean r3 = r2.isFinishing()
            if (r3 == 0) goto L63
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "activity isFinishing is "
            r3.append(r0)
            boolean r2 = r2.isFinishing()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.huawei.hms.support.log.HMSLog.i(r1, r2)
            com.huawei.hms.support.common.ActivityMgr r2 = com.huawei.hms.support.common.ActivityMgr.INST
            android.app.Activity r2 = r2.getCurrentActivity()
        L63:
            return r2
    }

    public static java.lang.String getProcessName(android.content.Context r3, int r4) {
            java.lang.String r0 = ""
            if (r3 != 0) goto L5
            return r0
        L5:
            java.lang.String r1 = "activity"
            java.lang.Object r3 = r3.getSystemService(r1)
            android.app.ActivityManager r3 = (android.app.ActivityManager) r3
            if (r3 == 0) goto L2c
            java.util.List r3 = r3.getRunningAppProcesses()
            if (r3 == 0) goto L2c
            java.util.Iterator r3 = r3.iterator()
        L19:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r3.next()
            android.app.ActivityManager$RunningAppProcessInfo r1 = (android.app.ActivityManager.RunningAppProcessInfo) r1
            int r2 = r1.pid
            if (r2 != r4) goto L19
            java.lang.String r3 = r1.processName
            return r3
        L2c:
            return r0
    }

    public static boolean isActivityFullscreen(android.app.Activity r1) {
            android.view.Window r1 = r1.getWindow()
            android.view.WindowManager$LayoutParams r1 = r1.getAttributes()
            int r1 = r1.flags
            r0 = 1024(0x400, float:1.435E-42)
            r1 = r1 & r0
            if (r1 != r0) goto L11
            r1 = 1
            goto L12
        L11:
            r1 = 0
        L12:
            return r1
    }

    public static boolean isBackground(android.content.Context r6) {
            r0 = 1
            if (r6 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "activity"
            java.lang.Object r1 = r6.getSystemService(r1)
            android.app.ActivityManager r1 = (android.app.ActivityManager) r1
            java.lang.String r2 = "keyguard"
            java.lang.Object r2 = r6.getSystemService(r2)
            android.app.KeyguardManager r2 = (android.app.KeyguardManager) r2
            if (r1 == 0) goto L89
            if (r2 != 0) goto L1a
            goto L89
        L1a:
            java.util.List r1 = r1.getRunningAppProcesses()
            if (r1 != 0) goto L21
            return r0
        L21:
            int r3 = android.os.Process.myPid()
            java.lang.String r6 = getProcessName(r6, r3)
            java.util.Iterator r1 = r1.iterator()
        L2d:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L89
            java.lang.Object r3 = r1.next()
            android.app.ActivityManager$RunningAppProcessInfo r3 = (android.app.ActivityManager.RunningAppProcessInfo) r3
            java.lang.String r4 = r3.processName
            boolean r4 = android.text.TextUtils.equals(r4, r6)
            if (r4 == 0) goto L2d
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = "appProcess.importance is "
            r6.append(r1)
            int r1 = r3.importance
            r6.append(r1)
            java.lang.String r6 = r6.toString()
            java.lang.String r1 = "UIUtil"
            com.huawei.hms.support.log.HMSLog.i(r1, r6)
            int r6 = r3.importance
            r3 = 100
            r4 = 0
            if (r6 != r3) goto L62
            r6 = r0
            goto L63
        L62:
            r6 = r4
        L63:
            boolean r2 = r2.isKeyguardLocked()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "isForground is "
            r3.append(r5)
            r3.append(r6)
            java.lang.String r5 = "***  isLockedState is "
            r3.append(r5)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            com.huawei.hms.support.log.HMSLog.i(r1, r3)
            if (r6 == 0) goto L89
            if (r2 == 0) goto L88
            goto L89
        L88:
            r0 = r4
        L89:
            return r0
    }
}
