package com.ymnsdk.replugin.trace;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginTraceManager {
    private static final java.lang.String TAG = "PluginTraceManager: ";
    private java.lang.String mergeApkStepLogPath;
    private java.lang.String pluginStepLogPath;
    private final java.util.concurrent.ThreadPoolExecutor threadPoolExecutor;
    private java.lang.String useLogPath;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    static class 1 {
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    private static final class PluginTraceManagerHolder {
        static final com.ymnsdk.replugin.trace.PluginTraceManager PLUGIN_TRACE_MANAGER = null;

        static {
                com.ymnsdk.replugin.trace.PluginTraceManager r0 = new com.ymnsdk.replugin.trace.PluginTraceManager
                r1 = 0
                r0.<init>(r1)
                com.ymnsdk.replugin.trace.PluginTraceManager.PluginTraceManagerHolder.PLUGIN_TRACE_MANAGER = r0
                return
        }

        private PluginTraceManagerHolder() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    class WriteLogThread extends java.lang.Thread {
        java.lang.String logContent;
        final com.ymnsdk.replugin.trace.PluginTraceManager this$0;

        public WriteLogThread(com.ymnsdk.replugin.trace.PluginTraceManager r1, java.lang.String r2) {
                r0 = this;
                r0.this$0 = r1
                java.lang.String r1 = "write-trace-log-thread"
                r0.<init>(r1)
                r0.logContent = r2
                return
        }

        private void writePluginLogToFile() throws java.io.IOException {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = " start write Plugin Log To File :logContent "
                r0.append(r1)
                java.lang.String r1 = r4.logContent
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "PluginTraceManager: "
                com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
                java.io.File r0 = new java.io.File
                com.ymnsdk.replugin.trace.PluginTraceManager r1 = r4.this$0
                java.lang.String r1 = com.ymnsdk.replugin.trace.PluginTraceManager.access$100(r1)
                r0.<init>(r1)
                java.lang.String r1 = r4.logContent
                java.nio.charset.Charset r2 = com.qihoo360.replugin.utils.Charsets.UTF_8
                r3 = 0
                com.qihoo360.replugin.utils.FileUtils.writeStringToFile(r0, r1, r2, r3)
                return
        }

        @Override
        public void run() {
                r1 = this;
                super.run()
                r1.writePluginLogToFile()     // Catch: java.io.IOException -> L7
                goto Lb
            L7:
                r0 = move-exception
                r0.printStackTrace()
            Lb:
                return
        }
    }

    private PluginTraceManager() {
            r10 = this;
            r10.<init>()
            java.lang.String r0 = ""
            r10.useLogPath = r0
            r10.pluginStepLogPath = r0
            r10.mergeApkStepLogPath = r0
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r7.<init>()
            java.util.concurrent.ThreadFactory r8 = java.util.concurrent.Executors.defaultThreadFactory()
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r9 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r9.<init>()
            r2 = 1
            r3 = 2
            r4 = 12
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7, r8, r9)
            r10.threadPoolExecutor = r0
            return
    }

    PluginTraceManager(com.ymnsdk.replugin.trace.PluginTraceManager.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String access$100(com.ymnsdk.replugin.trace.PluginTraceManager r0) {
            java.lang.String r0 = r0.useLogPath
            return r0
    }

    private void deleteLogFile(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            r0.deleteOnExit()
            return
    }

    public static com.ymnsdk.replugin.trace.PluginTraceManager getInstance() {
            com.ymnsdk.replugin.trace.PluginTraceManager r0 = com.ymnsdk.replugin.trace.PluginTraceManager.PluginTraceManagerHolder.PLUGIN_TRACE_MANAGER
            return r0
    }

    public void deleteInstallPluginLog() {
            r2 = this;
            java.lang.String r0 = r2.pluginStepLogPath
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L10
            java.lang.String r0 = "PluginTraceManager: "
            java.lang.String r1 = "deleteInstallPluginLog:  the pluginStepLogPath length is ZERO"
            com.qihoo360.replugin.helper.LogDebug.e(r0, r1)
            return
        L10:
            java.lang.String r0 = r2.pluginStepLogPath     // Catch: java.lang.Exception -> L16
            r2.deleteLogFile(r0)     // Catch: java.lang.Exception -> L16
            goto L1a
        L16:
            r0 = move-exception
            r0.printStackTrace()
        L1a:
            return
    }

    public void deleteMergeApkLog() {
            r2 = this;
            java.lang.String r0 = r2.mergeApkStepLogPath
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L10
            java.lang.String r0 = "PluginTraceManager: "
            java.lang.String r1 = "deleteInstallPluginLog:  the mergeApkStepLogPath length is ZERO"
            com.qihoo360.replugin.helper.LogDebug.e(r0, r1)
            return
        L10:
            java.lang.String r0 = r2.mergeApkStepLogPath     // Catch: java.lang.Exception -> L16
            r2.deleteLogFile(r0)     // Catch: java.lang.Exception -> L16
            goto L1a
        L16:
            r0 = move-exception
            r0.printStackTrace()
        L1a:
            return
    }

    public void initLogFilePatch(android.content.Context r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r3 = r3.getFilesDir()
            java.lang.String r3 = r3.getAbsolutePath()
            r0.append(r3)
            java.lang.String r3 = java.io.File.separator
            r0.append(r3)
            java.lang.String r3 = "handle_plugin_log"
            r0.append(r3)
            java.lang.String r3 = java.io.File.separator
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r1 = "install_plugin_step_log.txt"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.pluginStepLogPath = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "merge_apk_step_log.txt"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.mergeApkStepLogPath = r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "initLogFilePatch: pluginStepLogPath   : "
            r3.append(r0)
            java.lang.String r0 = r2.pluginStepLogPath
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "PluginTraceManager: "
            com.qihoo360.replugin.helper.LogDebug.i(r0, r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "initLogFilePatch: mergeApkStepLogPath : "
            r3.append(r1)
            java.lang.String r1 = r2.mergeApkStepLogPath
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r0, r3)
            return
    }

    public void summitInstallPluginLog(java.lang.String r2, boolean r3) {
            r1 = this;
            java.lang.String r0 = "PluginTraceManager: "
            if (r3 == 0) goto L18
            java.lang.String r3 = r1.pluginStepLogPath
            r1.useLogPath = r3
            java.lang.String r3 = "summitInstallPluginLog:  start write log by a async thread."
            com.qihoo360.replugin.helper.LogDebug.i(r0, r3)
            java.util.concurrent.ThreadPoolExecutor r3 = r1.threadPoolExecutor
            com.ymnsdk.replugin.trace.PluginTraceManager$WriteLogThread r0 = new com.ymnsdk.replugin.trace.PluginTraceManager$WriteLogThread
            r0.<init>(r1, r2)
            r3.execute(r0)
            return
        L18:
            java.lang.String r2 = "summitInstallPluginLog:  install plugin log is switch off."
            com.qihoo360.replugin.helper.LogDebug.w(r0, r2)
            return
    }

    public void summitMergeApkLog(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "PluginTraceManager: "
            java.lang.String r1 = "summitMergeApkLog: start invoke summit merge apk log"
            com.qihoo360.replugin.helper.LogDebug.w(r0, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "summitMergeApkLog: merge log : "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.w(r0, r1)
            java.lang.String r0 = r3.mergeApkStepLogPath
            r3.useLogPath = r0
            java.util.concurrent.ThreadPoolExecutor r0 = r3.threadPoolExecutor
            com.ymnsdk.replugin.trace.PluginTraceManager$WriteLogThread r1 = new com.ymnsdk.replugin.trace.PluginTraceManager$WriteLogThread
            r1.<init>(r3, r4)
            r0.execute(r1)
            return
    }
}
