package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class StubProcessManager {
    private static final java.lang.Runnable CHECK = null;
    static final int CHECK_STAGE1_DELAY = 17000;
    private static final int CHECK_STAGE2_DELAY = 11000;
    private static final int CHECK_STAGE3_DELAY = 3000;
    static final com.qihoo360.loader2.StubProcessManager.ProcessRecord[] STUB_PROCESSES = null;


    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static final class ProcessRecord {
        int activities;
        android.os.IBinder binder;
        int binders;
        com.qihoo360.loader2.IPluginClient client;
        final int index;
        long mobified;
        int pid;
        java.lang.String plugin;
        int services;
        int state;

        ProcessRecord(int r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.index = r1
                r0.state = r2
                return
        }

        private void killProcess(java.util.List<android.app.ActivityManager.RunningAppProcessInfo> r3) {
                r2 = this;
                int r0 = r2.index
                int r3 = com.qihoo360.loader2.StubProcessManager.access$100(r3, r0)
                if (r3 <= 0) goto L24
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "ppr k i: "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "ws001"
                com.qihoo360.replugin.helper.LogRelease.i(r1, r0)
                android.os.Process.killProcess(r3)
                com.qihoo360.loader2.StubProcessManager.access$200(r3)
            L24:
                return
        }

        void allocate(java.lang.String r3) {
                r2 = this;
                r0 = 1
                r2.state = r0
                long r0 = java.lang.System.currentTimeMillis()
                r2.mobified = r0
                r2.plugin = r3
                r3 = 0
                r2.pid = r3
                r0 = 0
                r2.binder = r0
                r2.client = r0
                r2.activities = r3
                r2.services = r3
                r2.binders = r3
                return
        }

        int calculateMatchPriority(java.lang.String r5) {
                r4 = this;
                java.lang.String r0 = r4.plugin
                boolean r5 = android.text.TextUtils.equals(r5, r0)
                if (r5 == 0) goto Lc
                r5 = 2147483647(0x7fffffff, float:NaN)
                return r5
            Lc:
                int r5 = r4.state
                if (r5 != 0) goto L14
                r5 = 2147483646(0x7ffffffe, float:NaN)
                return r5
            L14:
                r0 = 4
                if (r5 != r0) goto L1b
                r5 = 2147483645(0x7ffffffd, float:NaN)
                return r5
            L1b:
                long r0 = java.lang.System.currentTimeMillis()
                long r2 = r4.mobified
                long r0 = r0 - r2
                r2 = 10000(0x2710, double:4.9407E-320)
                int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r5 <= 0) goto L2c
                r5 = 2147483644(0x7ffffffc, float:NaN)
                return r5
            L2c:
                int r5 = r4.activities
                if (r5 > 0) goto L3c
                int r5 = r4.services
                if (r5 > 0) goto L3c
                int r5 = r4.binders
                if (r5 > 0) goto L3c
                r5 = 2147483643(0x7ffffffb, float:NaN)
                return r5
            L3c:
                r5 = 0
                return r5
        }

        void resetAllocate(java.lang.String r1, java.util.List<android.app.ActivityManager.RunningAppProcessInfo> r2) {
                r0 = this;
                r0.killProcess(r2)
                r0.allocate(r1)
                return
        }

        void setClient(android.os.IBinder r1, com.qihoo360.loader2.IPluginClient r2) {
                r0 = this;
                r0.binder = r1
                r0.client = r2
                return
        }

        void setRunning(int r2) {
                r1 = this;
                r0 = 2
                r1.state = r0
                r1.pid = r2
                return
        }

        void setStoped() {
                r1 = this;
                r0 = 4
                r1.state = r0
                r0 = 0
                r1.pid = r0
                r0 = 0
                r1.binder = r0
                r1.client = r0
                return
        }

        public java.lang.String toString() {
                r3 = this;
                boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r0 == 0) goto L7e
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = super.toString()
                r0.append(r1)
                java.lang.String r1 = " {index="
                r0.append(r1)
                int r1 = r3.index
                r0.append(r1)
                java.lang.String r1 = " state="
                r0.append(r1)
                int r1 = r3.state
                r0.append(r1)
                java.lang.String r1 = " mobified="
                r0.append(r1)
                long r1 = r3.mobified
                r0.append(r1)
                java.lang.String r1 = " plugin="
                r0.append(r1)
                java.lang.String r1 = r3.plugin
                r0.append(r1)
                java.lang.String r1 = " pid="
                r0.append(r1)
                int r1 = r3.pid
                r0.append(r1)
                java.lang.String r1 = " binder="
                r0.append(r1)
                android.os.IBinder r1 = r3.binder
                r0.append(r1)
                java.lang.String r1 = " client="
                r0.append(r1)
                com.qihoo360.loader2.IPluginClient r1 = r3.client
                r0.append(r1)
                java.lang.String r1 = " activities="
                r0.append(r1)
                int r1 = r3.activities
                r0.append(r1)
                java.lang.String r1 = " services="
                r0.append(r1)
                int r1 = r3.services
                r0.append(r1)
                java.lang.String r1 = " binders="
                r0.append(r1)
                int r1 = r3.binders
                r0.append(r1)
                java.lang.String r1 = "}"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
            L7e:
                java.lang.String r0 = super.toString()
                return r0
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public class StubProcessState {
        public static final int STATE_ALLOCATED = 1;
        public static final int STATE_RUNNING = 2;
        public static final int STATE_STOPED = 4;
        public static final int STATE_UNUSED = 0;
        final com.qihoo360.loader2.StubProcessManager this$0;

        public StubProcessState(com.qihoo360.loader2.StubProcessManager r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }
    }

    static {
            r0 = 2
            com.qihoo360.loader2.StubProcessManager$ProcessRecord[] r1 = new com.qihoo360.loader2.StubProcessManager.ProcessRecord[r0]
            com.qihoo360.loader2.StubProcessManager.STUB_PROCESSES = r1
            com.qihoo360.loader2.StubProcessManager$1 r1 = new com.qihoo360.loader2.StubProcessManager$1
            r1.<init>()
            com.qihoo360.loader2.StubProcessManager.CHECK = r1
            r1 = 0
            r2 = r1
        Le:
            if (r2 >= r0) goto L1c
            com.qihoo360.loader2.StubProcessManager$ProcessRecord r3 = new com.qihoo360.loader2.StubProcessManager$ProcessRecord
            r3.<init>(r2, r1)
            com.qihoo360.loader2.StubProcessManager$ProcessRecord[] r4 = com.qihoo360.loader2.StubProcessManager.STUB_PROCESSES
            r4[r2] = r3
            int r2 = r2 + 1
            goto Le
        L1c:
            return
    }

    public StubProcessManager() {
            r0 = this;
            r0.<init>()
            return
    }

    static void access$000() {
            doPluginProcessLoop()
            return
    }

    static int access$100(java.util.List r0, int r1) {
            int r0 = lookupPluginProcess(r0, r1)
            return r0
    }

    static void access$200(int r0) {
            waitKilled(r0)
            return
    }

    static final int allocProcess(java.lang.String r12) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "alloc plugin process: plugin="
            r0.append(r1)
            r0.append(r12)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1a:
            android.content.Context r0 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            java.util.List r0 = com.qihoo360.replugin.base.AMSUtils.getRunningAppProcessesNoThrows(r0)
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r0 == 0) goto L7f
            boolean r2 = r0.isEmpty()
            if (r2 == 0) goto L2d
            goto L7f
        L2d:
            r2 = -1
            r3 = 0
            com.qihoo360.loader2.StubProcessManager$ProcessRecord[] r4 = com.qihoo360.loader2.StubProcessManager.STUB_PROCESSES
            int r5 = r4.length
            r6 = 0
        L33:
            if (r6 >= r5) goto L5a
            r7 = r4[r6]
            monitor-enter(r7)
            int r8 = r7.calculateMatchPriority(r12)     // Catch: java.lang.Throwable -> L57
            if (r8 <= r2) goto L44
            int r2 = r7.calculateMatchPriority(r12)     // Catch: java.lang.Throwable -> L57
        L42:
            r3 = r7
            goto L53
        L44:
            int r8 = r7.calculateMatchPriority(r12)     // Catch: java.lang.Throwable -> L57
            if (r8 != r2) goto L53
            long r8 = r7.mobified     // Catch: java.lang.Throwable -> L57
            long r10 = r3.mobified     // Catch: java.lang.Throwable -> L57
            int r8 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r8 >= 0) goto L53
            goto L42
        L53:
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L57
            int r6 = r6 + 1
            goto L33
        L57:
            r12 = move-exception
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L57
            throw r12
        L5a:
            if (r3 != 0) goto L5d
            return r1
        L5d:
            monitor-enter(r3)
            int r1 = r3.calculateMatchPriority(r12)     // Catch: java.lang.Throwable -> L7c
            r2 = 2147483647(0x7fffffff, float:NaN)
            if (r1 != r2) goto L75
            int r1 = r3.state     // Catch: java.lang.Throwable -> L7c
            r2 = 1
            if (r1 == r2) goto L71
            int r1 = r3.state     // Catch: java.lang.Throwable -> L7c
            r2 = 2
            if (r1 != r2) goto L75
        L71:
            int r12 = r3.index     // Catch: java.lang.Throwable -> L7c
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L7c
            return r12
        L75:
            r3.resetAllocate(r12, r0)     // Catch: java.lang.Throwable -> L7c
            int r12 = r3.index     // Catch: java.lang.Throwable -> L7c
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L7c
            return r12
        L7c:
            r12 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L7c
            throw r12
        L7f:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto La0
            java.lang.String r0 = "ws001"
            java.lang.String r2 = "alloc plugin process: get running processes is empty"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "get list exception p="
            r0.append(r2)
            r0.append(r12)
            java.lang.String r12 = r0.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.i(r0, r12)
        La0:
            return r1
    }

    static final boolean attachActivity(int r2, int r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "reg activity: pid="
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = " index="
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = " plugin="
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = " activity="
            r0.append(r2)
            r0.append(r5)
            java.lang.String r2 = " container="
            r0.append(r2)
            r0.append(r6)
            java.lang.String r2 = r0.toString()
            java.lang.String r4 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r4, r2)
        L3a:
            if (r3 < 0) goto L89
            com.qihoo360.loader2.StubProcessManager$ProcessRecord[] r2 = com.qihoo360.loader2.StubProcessManager.STUB_PROCESSES
            int r4 = r2.length
            if (r3 < r4) goto L42
            goto L89
        L42:
            r2 = r2[r3]
            monitor-enter(r2)
            int r3 = r2.activities     // Catch: java.lang.Throwable -> L86
            r4 = 1
            int r3 = r3 + r4
            r2.activities = r3     // Catch: java.lang.Throwable -> L86
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L86
            r2.mobified = r5     // Catch: java.lang.Throwable -> L86
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L86
            if (r3 == 0) goto L81
            java.lang.String r3 = "ws001"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L86
            r5.<init>()     // Catch: java.lang.Throwable -> L86
            java.lang.String r6 = "activities="
            r5.append(r6)     // Catch: java.lang.Throwable -> L86
            int r6 = r2.activities     // Catch: java.lang.Throwable -> L86
            r5.append(r6)     // Catch: java.lang.Throwable -> L86
            java.lang.String r6 = " services="
            r5.append(r6)     // Catch: java.lang.Throwable -> L86
            int r6 = r2.services     // Catch: java.lang.Throwable -> L86
            r5.append(r6)     // Catch: java.lang.Throwable -> L86
            java.lang.String r6 = " binders="
            r5.append(r6)     // Catch: java.lang.Throwable -> L86
            int r6 = r2.binders     // Catch: java.lang.Throwable -> L86
            r5.append(r6)     // Catch: java.lang.Throwable -> L86
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L86
            com.qihoo360.replugin.helper.LogDebug.d(r3, r5)     // Catch: java.lang.Throwable -> L86
        L81:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L86
            cancelPluginProcessLoop()
            return r4
        L86:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L86
            throw r3
        L89:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto La3
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "reg activity: invalid index="
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r3, r2)
        La3:
            r2 = 0
            return r2
    }

    static final void attachBinder(int r4, android.os.IBinder r5) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L22
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "reg binder: pid="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = " binder="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r5)
        L22:
            com.qihoo360.loader2.StubProcessManager$ProcessRecord[] r5 = com.qihoo360.loader2.StubProcessManager.STUB_PROCESSES
            int r0 = r5.length
            r1 = 0
        L26:
            if (r1 >= r0) goto L73
            r2 = r5[r1]
            int r3 = r2.pid
            if (r3 != r4) goto L70
            monitor-enter(r2)
            int r4 = r2.binders     // Catch: java.lang.Throwable -> L6d
            int r4 = r4 + 1
            r2.binders = r4     // Catch: java.lang.Throwable -> L6d
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L6d
            r2.mobified = r4     // Catch: java.lang.Throwable -> L6d
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L6d
            if (r4 == 0) goto L6b
            java.lang.String r4 = "ws001"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6d
            r5.<init>()     // Catch: java.lang.Throwable -> L6d
            java.lang.String r0 = "activities="
            r5.append(r0)     // Catch: java.lang.Throwable -> L6d
            int r0 = r2.activities     // Catch: java.lang.Throwable -> L6d
            r5.append(r0)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r0 = " services="
            r5.append(r0)     // Catch: java.lang.Throwable -> L6d
            int r0 = r2.services     // Catch: java.lang.Throwable -> L6d
            r5.append(r0)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r0 = " binders="
            r5.append(r0)     // Catch: java.lang.Throwable -> L6d
            int r0 = r2.binders     // Catch: java.lang.Throwable -> L6d
            r5.append(r0)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L6d
            com.qihoo360.replugin.helper.LogDebug.d(r4, r5)     // Catch: java.lang.Throwable -> L6d
        L6b:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L6d
            goto L73
        L6d:
            r4 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L6d
            throw r4
        L70:
            int r1 = r1 + 1
            goto L26
        L73:
            cancelPluginProcessLoop()
            return
    }

    static final boolean attachService(int r2, int r3, java.lang.String r4, java.lang.String r5) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L32
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "reg service: pid="
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = " index="
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = " plugin="
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = " service="
            r0.append(r2)
            r0.append(r5)
            java.lang.String r2 = r0.toString()
            java.lang.String r4 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r4, r2)
        L32:
            if (r3 < 0) goto L81
            com.qihoo360.loader2.StubProcessManager$ProcessRecord[] r2 = com.qihoo360.loader2.StubProcessManager.STUB_PROCESSES
            int r4 = r2.length
            if (r3 < r4) goto L3a
            goto L81
        L3a:
            r2 = r2[r3]
            monitor-enter(r2)
            int r3 = r2.services     // Catch: java.lang.Throwable -> L7e
            r4 = 1
            int r3 = r3 + r4
            r2.services = r3     // Catch: java.lang.Throwable -> L7e
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L7e
            r2.mobified = r0     // Catch: java.lang.Throwable -> L7e
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L7e
            if (r3 == 0) goto L79
            java.lang.String r3 = "ws001"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7e
            r5.<init>()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r0 = "activities="
            r5.append(r0)     // Catch: java.lang.Throwable -> L7e
            int r0 = r2.activities     // Catch: java.lang.Throwable -> L7e
            r5.append(r0)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r0 = " services="
            r5.append(r0)     // Catch: java.lang.Throwable -> L7e
            int r0 = r2.services     // Catch: java.lang.Throwable -> L7e
            r5.append(r0)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r0 = " binders="
            r5.append(r0)     // Catch: java.lang.Throwable -> L7e
            int r0 = r2.binders     // Catch: java.lang.Throwable -> L7e
            r5.append(r0)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L7e
            com.qihoo360.replugin.helper.LogDebug.d(r3, r5)     // Catch: java.lang.Throwable -> L7e
        L79:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L7e
            cancelPluginProcessLoop()
            return r4
        L7e:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L7e
            throw r3
        L81:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L9b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "reg service: invalid index="
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r3, r2)
        L9b:
            r2 = 0
            return r2
    }

    static final java.lang.String attachStubProcess(int r2, int r3, android.os.IBinder r4, com.qihoo360.loader2.IPluginClient r5, java.lang.String r6) {
            com.qihoo360.loader2.StubProcessManager$ProcessRecord[] r0 = com.qihoo360.loader2.StubProcessManager.STUB_PROCESSES
            r3 = r0[r3]
            monitor-enter(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L47
            if (r0 != 0) goto L19
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L47
            if (r0 == 0) goto L16
            java.lang.String r0 = "ws001"
            java.lang.String r1 = "attach process: allocate now"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r1)     // Catch: java.lang.Throwable -> L47
        L16:
            r3.allocate(r6)     // Catch: java.lang.Throwable -> L47
        L19:
            int r6 = r3.state     // Catch: java.lang.Throwable -> L47
            r0 = 1
            if (r6 == r0) goto L3d
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L47
            if (r2 == 0) goto L3a
            java.lang.String r2 = "ws001"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L47
            r4.<init>()     // Catch: java.lang.Throwable -> L47
            java.lang.String r5 = "attach process: state not allocated: state="
            r4.append(r5)     // Catch: java.lang.Throwable -> L47
            int r5 = r3.state     // Catch: java.lang.Throwable -> L47
            r4.append(r5)     // Catch: java.lang.Throwable -> L47
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L47
            com.qihoo360.replugin.helper.LogDebug.d(r2, r4)     // Catch: java.lang.Throwable -> L47
        L3a:
            r2 = 0
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L47
            return r2
        L3d:
            r3.setRunning(r2)     // Catch: java.lang.Throwable -> L47
            r3.setClient(r4, r5)     // Catch: java.lang.Throwable -> L47
            java.lang.String r2 = r3.plugin     // Catch: java.lang.Throwable -> L47
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L47
            return r2
        L47:
            r2 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L47
            throw r2
    }

    static final void cancelPluginProcessLoop() {
            return
    }

    static final boolean detachActivity(int r2, int r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "unreg activity: pid="
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = " index="
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = " plugin="
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = " activity="
            r0.append(r2)
            r0.append(r5)
            java.lang.String r2 = " container="
            r0.append(r2)
            r0.append(r6)
            java.lang.String r2 = r0.toString()
            java.lang.String r4 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r4, r2)
        L3a:
            if (r3 < 0) goto L8b
            com.qihoo360.loader2.StubProcessManager$ProcessRecord[] r2 = com.qihoo360.loader2.StubProcessManager.STUB_PROCESSES
            int r4 = r2.length
            if (r3 < r4) goto L42
            goto L8b
        L42:
            r2 = r2[r3]
            monitor-enter(r2)
            int r3 = r2.activities     // Catch: java.lang.Throwable -> L88
            r4 = 1
            int r3 = r3 - r4
            r2.activities = r3     // Catch: java.lang.Throwable -> L88
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L88
            r2.mobified = r5     // Catch: java.lang.Throwable -> L88
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L88
            if (r3 == 0) goto L81
            java.lang.String r3 = "ws001"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L88
            r5.<init>()     // Catch: java.lang.Throwable -> L88
            java.lang.String r6 = "activities="
            r5.append(r6)     // Catch: java.lang.Throwable -> L88
            int r6 = r2.activities     // Catch: java.lang.Throwable -> L88
            r5.append(r6)     // Catch: java.lang.Throwable -> L88
            java.lang.String r6 = " services="
            r5.append(r6)     // Catch: java.lang.Throwable -> L88
            int r6 = r2.services     // Catch: java.lang.Throwable -> L88
            r5.append(r6)     // Catch: java.lang.Throwable -> L88
            java.lang.String r6 = " binders="
            r5.append(r6)     // Catch: java.lang.Throwable -> L88
            int r6 = r2.binders     // Catch: java.lang.Throwable -> L88
            r5.append(r6)     // Catch: java.lang.Throwable -> L88
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L88
            com.qihoo360.replugin.helper.LogDebug.d(r3, r5)     // Catch: java.lang.Throwable -> L88
        L81:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L88
            r2 = 11000(0x2af8, double:5.4347E-320)
            schedulePluginProcessLoop(r2)
            return r4
        L88:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L88
            throw r3
        L8b:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto La5
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "unreg activity: invalid index="
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r3, r2)
        La5:
            r2 = 0
            return r2
    }

    static final void detachBinder(int r4, android.os.IBinder r5) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L22
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "unreg binder: pid="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = " binder="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r5)
        L22:
            com.qihoo360.loader2.StubProcessManager$ProcessRecord[] r5 = com.qihoo360.loader2.StubProcessManager.STUB_PROCESSES
            int r0 = r5.length
            r1 = 0
        L26:
            if (r1 >= r0) goto L73
            r2 = r5[r1]
            int r3 = r2.pid
            if (r3 != r4) goto L70
            monitor-enter(r2)
            int r4 = r2.binders     // Catch: java.lang.Throwable -> L6d
            int r4 = r4 + (-1)
            r2.binders = r4     // Catch: java.lang.Throwable -> L6d
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L6d
            r2.mobified = r4     // Catch: java.lang.Throwable -> L6d
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L6d
            if (r4 == 0) goto L6b
            java.lang.String r4 = "ws001"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6d
            r5.<init>()     // Catch: java.lang.Throwable -> L6d
            java.lang.String r0 = "activities="
            r5.append(r0)     // Catch: java.lang.Throwable -> L6d
            int r0 = r2.activities     // Catch: java.lang.Throwable -> L6d
            r5.append(r0)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r0 = " services="
            r5.append(r0)     // Catch: java.lang.Throwable -> L6d
            int r0 = r2.services     // Catch: java.lang.Throwable -> L6d
            r5.append(r0)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r0 = " binders="
            r5.append(r0)     // Catch: java.lang.Throwable -> L6d
            int r0 = r2.binders     // Catch: java.lang.Throwable -> L6d
            r5.append(r0)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L6d
            com.qihoo360.replugin.helper.LogDebug.d(r4, r5)     // Catch: java.lang.Throwable -> L6d
        L6b:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L6d
            goto L73
        L6d:
            r4 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L6d
            throw r4
        L70:
            int r1 = r1 + 1
            goto L26
        L73:
            r4 = 11000(0x2af8, double:5.4347E-320)
            schedulePluginProcessLoop(r4)
            return
    }

    static final boolean detachService(int r2, int r3, java.lang.String r4, java.lang.String r5) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L32
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "unreg service: pid="
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = " index="
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = " plugin="
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = " service="
            r0.append(r2)
            r0.append(r5)
            java.lang.String r2 = r0.toString()
            java.lang.String r4 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r4, r2)
        L32:
            if (r3 < 0) goto L83
            com.qihoo360.loader2.StubProcessManager$ProcessRecord[] r2 = com.qihoo360.loader2.StubProcessManager.STUB_PROCESSES
            int r4 = r2.length
            if (r3 < r4) goto L3a
            goto L83
        L3a:
            r2 = r2[r3]
            monitor-enter(r2)
            int r3 = r2.services     // Catch: java.lang.Throwable -> L80
            r4 = 1
            int r3 = r3 - r4
            r2.services = r3     // Catch: java.lang.Throwable -> L80
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L80
            r2.mobified = r0     // Catch: java.lang.Throwable -> L80
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L80
            if (r3 == 0) goto L79
            java.lang.String r3 = "ws001"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L80
            r5.<init>()     // Catch: java.lang.Throwable -> L80
            java.lang.String r0 = "activities="
            r5.append(r0)     // Catch: java.lang.Throwable -> L80
            int r0 = r2.activities     // Catch: java.lang.Throwable -> L80
            r5.append(r0)     // Catch: java.lang.Throwable -> L80
            java.lang.String r0 = " services="
            r5.append(r0)     // Catch: java.lang.Throwable -> L80
            int r0 = r2.services     // Catch: java.lang.Throwable -> L80
            r5.append(r0)     // Catch: java.lang.Throwable -> L80
            java.lang.String r0 = " binders="
            r5.append(r0)     // Catch: java.lang.Throwable -> L80
            int r0 = r2.binders     // Catch: java.lang.Throwable -> L80
            r5.append(r0)     // Catch: java.lang.Throwable -> L80
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L80
            com.qihoo360.replugin.helper.LogDebug.d(r3, r5)     // Catch: java.lang.Throwable -> L80
        L79:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L80
            r2 = 11000(0x2af8, double:5.4347E-320)
            schedulePluginProcessLoop(r2)
            return r4
        L80:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L80
            throw r3
        L83:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L9d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "unreg service: invalid index="
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r3, r2)
        L9d:
            r2 = 0
            return r2
    }

    private static final void doPluginProcessLoop() {
            return
    }

    static final void dump(java.io.PrintWriter r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "--- STUB_PROCESSES.length = "
            r0.append(r1)
            com.qihoo360.loader2.StubProcessManager$ProcessRecord[] r1 = com.qihoo360.loader2.StubProcessManager.STUB_PROCESSES
            int r1 = r1.length
            r0.append(r1)
            java.lang.String r1 = " ---"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r4.println(r0)
            com.qihoo360.loader2.StubProcessManager$ProcessRecord[] r0 = com.qihoo360.loader2.StubProcessManager.STUB_PROCESSES
            int r1 = r0.length
            r2 = 0
        L20:
            if (r2 >= r1) goto L2f
            r3 = r0[r2]
            monitor-enter(r3)
            r4.println(r3)     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L2c
            int r2 = r2 + 1
            goto L20
        L2c:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L2c
            throw r4
        L2f:
            return
    }

    private static final int lookupPluginProcess(java.util.List<android.app.ActivityManager.RunningAppProcessInfo> r3, int r4) {
            java.util.Iterator r3 = r3.iterator()
        L4:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L22
            java.lang.Object r0 = r3.next()
            android.app.ActivityManager$RunningAppProcessInfo r0 = (android.app.ActivityManager.RunningAppProcessInfo) r0
            int r1 = r0.uid
            int r2 = com.qihoo360.loader2.PluginManager.sUid
            if (r1 == r2) goto L17
            goto L4
        L17:
            java.lang.String r1 = r0.processName
            int r1 = com.qihoo360.loader2.PluginManager.evalPluginProcess(r1)
            if (r1 != r4) goto L4
            int r3 = r0.pid
            return r3
        L22:
            r3 = -1
            return r3
    }

    static final void schedulePluginProcessLoop(long r0) {
            return
    }

    static final void setProcessStop(android.os.IBinder r5) {
            com.qihoo360.loader2.StubProcessManager$ProcessRecord[] r0 = com.qihoo360.loader2.StubProcessManager.STUB_PROCESSES
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto L19
            r3 = r0[r2]
            monitor-enter(r3)
            android.os.IBinder r4 = r3.binder     // Catch: java.lang.Throwable -> L16
            if (r4 != r5) goto L12
            r3.setStoped()     // Catch: java.lang.Throwable -> L16
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L16
            goto L19
        L12:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L16
            int r2 = r2 + 1
            goto L4
        L16:
            r5 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L16
            throw r5
        L19:
            return
    }

    static final int sumBinders(int r2) {
            if (r2 < 0) goto L15
            com.qihoo360.loader2.StubProcessManager$ProcessRecord[] r0 = com.qihoo360.loader2.StubProcessManager.STUB_PROCESSES
            int r1 = r0.length
            if (r2 >= r1) goto L15
            r0 = r0[r2]
            monitor-enter(r0)
            com.qihoo360.loader2.StubProcessManager$ProcessRecord[] r1 = com.qihoo360.loader2.StubProcessManager.STUB_PROCESSES     // Catch: java.lang.Throwable -> L12
            r2 = r1[r2]     // Catch: java.lang.Throwable -> L12
            int r2 = r2.binders     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return r2
        L12:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r2
        L15:
            r2 = -1
            return r2
    }

    private static final void waitKilled(int r5) {
            r0 = 0
            r1 = r0
        L2:
            r2 = 10
            if (r1 >= r2) goto L39
            r2 = 100
            java.lang.Thread.sleep(r2, r0)     // Catch: java.lang.Throwable -> Lb
        Lb:
            android.content.Context r2 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            java.util.List r2 = com.qihoo360.replugin.base.AMSUtils.getRunningAppProcessesNoThrows(r2)
            if (r2 == 0) goto L36
            boolean r3 = r2.isEmpty()
            if (r3 == 0) goto L1c
            goto L36
        L1c:
            java.util.Iterator r2 = r2.iterator()
            r3 = r0
        L21:
            boolean r4 = r2.hasNext()
            if (r4 == 0) goto L33
            java.lang.Object r4 = r2.next()
            android.app.ActivityManager$RunningAppProcessInfo r4 = (android.app.ActivityManager.RunningAppProcessInfo) r4
            int r4 = r4.pid
            if (r4 != r5) goto L21
            r3 = 1
            goto L21
        L33:
            if (r3 != 0) goto L36
            return
        L36:
            int r1 = r1 + 1
            goto L2
        L39:
            return
    }
}
