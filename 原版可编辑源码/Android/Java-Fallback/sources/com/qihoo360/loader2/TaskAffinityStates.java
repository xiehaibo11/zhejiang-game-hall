package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class TaskAffinityStates {
    private static final int GROUP_COUNT = 0;
    public static final java.lang.String TAG = "task-affinity";
    private com.qihoo360.loader2.LaunchModeStates[] mLaunchModeStates;

    static {
            int r0 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TASK
            com.qihoo360.loader2.TaskAffinityStates.GROUP_COUNT = r0
            return
    }

    TaskAffinityStates() {
            r1 = this;
            r1.<init>()
            int r0 = com.qihoo360.loader2.TaskAffinityStates.GROUP_COUNT
            com.qihoo360.loader2.LaunchModeStates[] r0 = new com.qihoo360.loader2.LaunchModeStates[r0]
            r1.mLaunchModeStates = r0
            return
    }

    java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers.ActivityState> getStates(android.content.pm.ActivityInfo r3) {
            r2 = this;
            if (r3 == 0) goto L1d
            r0 = 0
            java.lang.String r1 = r3.taskAffinity     // Catch: android.os.RemoteException -> La
            int r0 = com.qihoo360.loader2.MP.getTaskAffinityGroupIndex(r1)     // Catch: android.os.RemoteException -> La
            goto Le
        La:
            r1 = move-exception
            r1.printStackTrace()
        Le:
            com.qihoo360.loader2.LaunchModeStates[] r1 = r2.mLaunchModeStates
            r0 = r1[r0]
            if (r0 == 0) goto L1d
            int r1 = r3.launchMode
            int r3 = r3.theme
            java.util.HashMap r3 = r0.getStates(r1, r3)
            return r3
        L1d:
            r3 = 0
            return r3
    }

    public void init(java.lang.String r11, java.lang.String r12, java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers.ActivityState> r13, java.util.HashSet<java.lang.String> r14) {
            r10 = this;
            r0 = 0
        L1:
            int r1 = com.qihoo360.loader2.TaskAffinityStates.GROUP_COUNT
            if (r0 >= r1) goto L102
            com.qihoo360.loader2.LaunchModeStates[] r1 = r10.mLaunchModeStates
            r2 = r1[r0]
            if (r2 != 0) goto L12
            com.qihoo360.loader2.LaunchModeStates r2 = new com.qihoo360.loader2.LaunchModeStates
            r2.<init>()
            r1[r0] = r2
        L12:
            com.qihoo360.loader2.LaunchModeStates[] r1 = r10.mLaunchModeStates
            r1 = r1[r0]
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            r2.append(r12)
            java.lang.String r9 = "TA"
            r2.append(r9)
            r2.append(r0)
            java.lang.String r5 = r2.toString()
            r6 = 0
            r7 = 1
            int r8 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TS_STANDARD
            r2 = r1
            r3 = r13
            r4 = r14
            r2.addStates(r3, r4, r5, r6, r7, r8)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            r2.append(r12)
            r2.append(r9)
            r2.append(r0)
            java.lang.String r5 = r2.toString()
            r7 = 0
            int r8 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_STANDARD
            r2 = r1
            r2.addStates(r3, r4, r5, r6, r7, r8)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            r2.append(r12)
            r2.append(r9)
            r2.append(r0)
            java.lang.String r5 = r2.toString()
            r6 = 1
            r7 = 1
            int r8 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_TOP
            r2 = r1
            r2.addStates(r3, r4, r5, r6, r7, r8)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            r2.append(r12)
            r2.append(r9)
            r2.append(r0)
            java.lang.String r5 = r2.toString()
            r7 = 0
            int r8 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_TOP
            r2 = r1
            r2.addStates(r3, r4, r5, r6, r7, r8)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            r2.append(r12)
            r2.append(r9)
            r2.append(r0)
            java.lang.String r5 = r2.toString()
            r6 = 2
            r7 = 1
            int r8 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_TASK
            r2 = r1
            r2.addStates(r3, r4, r5, r6, r7, r8)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            r2.append(r12)
            r2.append(r9)
            r2.append(r0)
            java.lang.String r5 = r2.toString()
            r7 = 0
            int r8 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_TASK
            r2 = r1
            r2.addStates(r3, r4, r5, r6, r7, r8)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            r2.append(r12)
            r2.append(r9)
            r2.append(r0)
            java.lang.String r5 = r2.toString()
            r6 = 3
            r7 = 1
            int r8 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_INSTANCE
            r2 = r1
            r2.addStates(r3, r4, r5, r6, r7, r8)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            r2.append(r12)
            r2.append(r9)
            r2.append(r0)
            java.lang.String r5 = r2.toString()
            r7 = 0
            int r8 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_INSTANCE
            r2 = r1
            r2.addStates(r3, r4, r5, r6, r7, r8)
            int r0 = r0 + 1
            goto L1
        L102:
            return
    }
}
