package com.qihoo360.loader2;

import android.app.ActivityManager;
import android.os.IBinder;
import android.os.Process;
import android.text.TextUtils;
import com.heytap.mcssdk.constant.a;
import com.qihoo360.replugin.RePluginInternal;
import com.qihoo360.replugin.base.AMSUtils;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import java.io.PrintWriter;
import java.util.Iterator;
import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class StubProcessManager {
    static final int CHECK_STAGE1_DELAY = 17000;
    private static final int CHECK_STAGE2_DELAY = 11000;
    private static final int CHECK_STAGE3_DELAY = 3000;
    static final ProcessRecord[] STUB_PROCESSES = new ProcessRecord[2];
    private static final Runnable CHECK = new Runnable() { // from class: com.qihoo360.loader2.StubProcessManager.1
        @Override // java.lang.Runnable
        public void run() {
            StubProcessManager.doPluginProcessLoop();
        }
    };

    static final void cancelPluginProcessLoop() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void doPluginProcessLoop() {
    }

    static final void schedulePluginProcessLoop(long j) {
    }

    static {
        for (int i = 0; i < 2; i++) {
            STUB_PROCESSES[i] = new ProcessRecord(i, 0);
        }
    }

    static final int allocProcess(String str) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "alloc plugin process: plugin=" + str);
        }
        List<ActivityManager.RunningAppProcessInfo> runningAppProcessesNoThrows = AMSUtils.getRunningAppProcessesNoThrows(RePluginInternal.getAppContext());
        if (runningAppProcessesNoThrows == null || runningAppProcessesNoThrows.isEmpty()) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "alloc plugin process: get running processes is empty");
                LogDebug.i(LogDebug.PLUGIN_TAG, "get list exception p=" + str);
            }
            return Integer.MIN_VALUE;
        }
        int iCalculateMatchPriority = -1;
        ProcessRecord processRecord = null;
        for (ProcessRecord processRecord2 : STUB_PROCESSES) {
            synchronized (processRecord2) {
                if (processRecord2.calculateMatchPriority(str) > iCalculateMatchPriority) {
                    iCalculateMatchPriority = processRecord2.calculateMatchPriority(str);
                } else if (processRecord2.calculateMatchPriority(str) == iCalculateMatchPriority && processRecord2.mobified < processRecord.mobified) {
                }
                processRecord = processRecord2;
            }
        }
        if (processRecord == null) {
            return Integer.MIN_VALUE;
        }
        synchronized (processRecord) {
            if (processRecord.calculateMatchPriority(str) == Integer.MAX_VALUE && (processRecord.state == 1 || processRecord.state == 2)) {
                return processRecord.index;
            }
            processRecord.resetAllocate(str, runningAppProcessesNoThrows);
            return processRecord.index;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final int lookupPluginProcess(List<ActivityManager.RunningAppProcessInfo> list, int i) {
        for (ActivityManager.RunningAppProcessInfo runningAppProcessInfo : list) {
            if (runningAppProcessInfo.uid == PluginManager.sUid && PluginManager.evalPluginProcess(runningAppProcessInfo.processName) == i) {
                return runningAppProcessInfo.pid;
            }
        }
        return -1;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void waitKilled(int i) {
        for (int i2 = 0; i2 < 10; i2++) {
            try {
                Thread.sleep(100L, 0);
            } catch (Throwable unused) {
            }
            List<ActivityManager.RunningAppProcessInfo> runningAppProcessesNoThrows = AMSUtils.getRunningAppProcessesNoThrows(RePluginInternal.getAppContext());
            if (runningAppProcessesNoThrows != null && !runningAppProcessesNoThrows.isEmpty()) {
                Iterator<ActivityManager.RunningAppProcessInfo> it = runningAppProcessesNoThrows.iterator();
                boolean z = false;
                while (it.hasNext()) {
                    if (it.next().pid == i) {
                        z = true;
                    }
                }
                if (!z) {
                    return;
                }
            }
        }
    }

    static final boolean attachActivity(int i, int i2, String str, String str2, String str3) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "reg activity: pid=" + i + " index=" + i2 + " plugin=" + str + " activity=" + str2 + " container=" + str3);
        }
        if (i2 >= 0) {
            ProcessRecord[] processRecordArr = STUB_PROCESSES;
            if (i2 < processRecordArr.length) {
                ProcessRecord processRecord = processRecordArr[i2];
                synchronized (processRecord) {
                    processRecord.activities++;
                    processRecord.mobified = System.currentTimeMillis();
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "activities=" + processRecord.activities + " services=" + processRecord.services + " binders=" + processRecord.binders);
                    }
                }
                cancelPluginProcessLoop();
                return true;
            }
        }
        if (!LogDebug.LOG) {
            return false;
        }
        LogDebug.d(LogDebug.PLUGIN_TAG, "reg activity: invalid index=" + i2);
        return false;
    }

    static final boolean detachActivity(int i, int i2, String str, String str2, String str3) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "unreg activity: pid=" + i + " index=" + i2 + " plugin=" + str + " activity=" + str2 + " container=" + str3);
        }
        if (i2 >= 0) {
            ProcessRecord[] processRecordArr = STUB_PROCESSES;
            if (i2 < processRecordArr.length) {
                ProcessRecord processRecord = processRecordArr[i2];
                synchronized (processRecord) {
                    processRecord.activities--;
                    processRecord.mobified = System.currentTimeMillis();
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "activities=" + processRecord.activities + " services=" + processRecord.services + " binders=" + processRecord.binders);
                    }
                }
                schedulePluginProcessLoop(11000L);
                return true;
            }
        }
        if (!LogDebug.LOG) {
            return false;
        }
        LogDebug.d(LogDebug.PLUGIN_TAG, "unreg activity: invalid index=" + i2);
        return false;
    }

    static final boolean attachService(int i, int i2, String str, String str2) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "reg service: pid=" + i + " index=" + i2 + " plugin=" + str + " service=" + str2);
        }
        if (i2 >= 0) {
            ProcessRecord[] processRecordArr = STUB_PROCESSES;
            if (i2 < processRecordArr.length) {
                ProcessRecord processRecord = processRecordArr[i2];
                synchronized (processRecord) {
                    processRecord.services++;
                    processRecord.mobified = System.currentTimeMillis();
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "activities=" + processRecord.activities + " services=" + processRecord.services + " binders=" + processRecord.binders);
                    }
                }
                cancelPluginProcessLoop();
                return true;
            }
        }
        if (!LogDebug.LOG) {
            return false;
        }
        LogDebug.d(LogDebug.PLUGIN_TAG, "reg service: invalid index=" + i2);
        return false;
    }

    static final boolean detachService(int i, int i2, String str, String str2) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "unreg service: pid=" + i + " index=" + i2 + " plugin=" + str + " service=" + str2);
        }
        if (i2 >= 0) {
            ProcessRecord[] processRecordArr = STUB_PROCESSES;
            if (i2 < processRecordArr.length) {
                ProcessRecord processRecord = processRecordArr[i2];
                synchronized (processRecord) {
                    processRecord.services--;
                    processRecord.mobified = System.currentTimeMillis();
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "activities=" + processRecord.activities + " services=" + processRecord.services + " binders=" + processRecord.binders);
                    }
                }
                schedulePluginProcessLoop(11000L);
                return true;
            }
        }
        if (!LogDebug.LOG) {
            return false;
        }
        LogDebug.d(LogDebug.PLUGIN_TAG, "unreg service: invalid index=" + i2);
        return false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:19:0x0073, code lost:
    
        cancelPluginProcessLoop();
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x0076, code lost:
    
        return;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    static final void attachBinder(int r4, android.os.IBinder r5) {
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: com.qihoo360.loader2.StubProcessManager.attachBinder(int, android.os.IBinder):void");
    }

    /* JADX WARN: Code restructure failed: missing block: B:19:0x0073, code lost:
    
        schedulePluginProcessLoop(11000);
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x0078, code lost:
    
        return;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    static final void detachBinder(int r4, android.os.IBinder r5) {
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: com.qihoo360.loader2.StubProcessManager.detachBinder(int, android.os.IBinder):void");
    }

    static final int sumBinders(int i) {
        int i2;
        if (i < 0) {
            return -1;
        }
        ProcessRecord[] processRecordArr = STUB_PROCESSES;
        if (i >= processRecordArr.length) {
            return -1;
        }
        synchronized (processRecordArr[i]) {
            i2 = STUB_PROCESSES[i].binders;
        }
        return i2;
    }

    static final String attachStubProcess(int i, int i2, IBinder iBinder, IPluginClient iPluginClient, String str) {
        ProcessRecord processRecord = STUB_PROCESSES[i2];
        synchronized (processRecord) {
            if (!TextUtils.isEmpty(str)) {
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "attach process: allocate now");
                }
                processRecord.allocate(str);
            }
            if (processRecord.state != 1) {
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "attach process: state not allocated: state=" + processRecord.state);
                }
                return null;
            }
            processRecord.setRunning(i);
            processRecord.setClient(iBinder, iPluginClient);
            return processRecord.plugin;
        }
    }

    static final void setProcessStop(IBinder iBinder) {
        for (ProcessRecord processRecord : STUB_PROCESSES) {
            synchronized (processRecord) {
                if (processRecord.binder == iBinder) {
                    processRecord.setStoped();
                    return;
                }
            }
        }
    }

    static final void dump(PrintWriter printWriter) {
        printWriter.println("--- STUB_PROCESSES.length = " + STUB_PROCESSES.length + " ---");
        for (ProcessRecord processRecord : STUB_PROCESSES) {
            synchronized (processRecord) {
                printWriter.println(processRecord);
            }
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

        public StubProcessState() {
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static final class ProcessRecord {
        int activities;
        IBinder binder;
        int binders;
        IPluginClient client;
        final int index;
        long mobified;
        int pid;
        String plugin;
        int services;
        int state;

        ProcessRecord(int i, int i2) {
            this.index = i;
            this.state = i2;
        }

        void allocate(String str) {
            this.state = 1;
            this.mobified = System.currentTimeMillis();
            this.plugin = str;
            this.pid = 0;
            this.binder = null;
            this.client = null;
            this.activities = 0;
            this.services = 0;
            this.binders = 0;
        }

        void setRunning(int i) {
            this.state = 2;
            this.pid = i;
        }

        void setClient(IBinder iBinder, IPluginClient iPluginClient) {
            this.binder = iBinder;
            this.client = iPluginClient;
        }

        void setStoped() {
            this.state = 4;
            this.pid = 0;
            this.binder = null;
            this.client = null;
        }

        int calculateMatchPriority(String str) {
            if (TextUtils.equals(str, this.plugin)) {
                return Integer.MAX_VALUE;
            }
            int i = this.state;
            if (i == 0) {
                return 2147483646;
            }
            if (i == 4) {
                return 2147483645;
            }
            if (System.currentTimeMillis() - this.mobified > a.q) {
                return 2147483644;
            }
            return (this.activities > 0 || this.services > 0 || this.binders > 0) ? 0 : 2147483643;
        }

        void resetAllocate(String str, List<ActivityManager.RunningAppProcessInfo> list) {
            killProcess(list);
            allocate(str);
        }

        private void killProcess(List<ActivityManager.RunningAppProcessInfo> list) {
            int iLookupPluginProcess = StubProcessManager.lookupPluginProcess(list, this.index);
            if (iLookupPluginProcess > 0) {
                LogRelease.i(LogDebug.PLUGIN_TAG, "ppr k i: " + iLookupPluginProcess);
                Process.killProcess(iLookupPluginProcess);
                StubProcessManager.waitKilled(iLookupPluginProcess);
            }
        }

        public String toString() {
            if (LogDebug.LOG) {
                return super.toString() + " {index=" + this.index + " state=" + this.state + " mobified=" + this.mobified + " plugin=" + this.plugin + " pid=" + this.pid + " binder=" + this.binder + " client=" + this.client + " activities=" + this.activities + " services=" + this.services + " binders=" + this.binders + "}";
            }
            return super.toString();
        }
    }
}
