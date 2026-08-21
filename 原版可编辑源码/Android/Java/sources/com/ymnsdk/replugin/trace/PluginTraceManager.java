package com.ymnsdk.replugin.trace;

import android.content.Context;
import android.text.TextUtils;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.utils.Charsets;
import com.qihoo360.replugin.utils.FileUtils;
import java.io.File;
import java.io.IOException;
import java.util.concurrent.Executors;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginTraceManager {
    private static final String TAG = "PluginTraceManager: ";
    private String mergeApkStepLogPath;
    private String pluginStepLogPath;
    private final ThreadPoolExecutor threadPoolExecutor;
    private String useLogPath;

    private PluginTraceManager() {
        this.useLogPath = "";
        this.pluginStepLogPath = "";
        this.mergeApkStepLogPath = "";
        this.threadPoolExecutor = new ThreadPoolExecutor(1, 2, 12L, TimeUnit.SECONDS, new LinkedBlockingQueue(), Executors.defaultThreadFactory(), new ThreadPoolExecutor.DiscardPolicy());
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    private static final class PluginTraceManagerHolder {
        static final PluginTraceManager PLUGIN_TRACE_MANAGER = new PluginTraceManager();

        private PluginTraceManagerHolder() {
        }
    }

    public static PluginTraceManager getInstance() {
        return PluginTraceManagerHolder.PLUGIN_TRACE_MANAGER;
    }

    public void initLogFilePatch(Context context) {
        if (context == null) {
            return;
        }
        String str = context.getFilesDir().getAbsolutePath() + File.separator + "handle_plugin_log" + File.separator;
        this.pluginStepLogPath = str + "install_plugin_step_log.txt";
        this.mergeApkStepLogPath = str + "merge_apk_step_log.txt";
        LogDebug.i(TAG, "initLogFilePatch: pluginStepLogPath   : " + this.pluginStepLogPath);
        LogDebug.i(TAG, "initLogFilePatch: mergeApkStepLogPath : " + this.mergeApkStepLogPath);
    }

    public void summitInstallPluginLog(String str, boolean z) {
        if (z) {
            this.useLogPath = this.pluginStepLogPath;
            LogDebug.i(TAG, "summitInstallPluginLog:  start write log by a async thread.");
            this.threadPoolExecutor.execute(new WriteLogThread(str));
            return;
        }
        LogDebug.w(TAG, "summitInstallPluginLog:  install plugin log is switch off.");
    }

    public void summitMergeApkLog(String str) {
        LogDebug.w(TAG, "summitMergeApkLog: start invoke summit merge apk log");
        LogDebug.w(TAG, "summitMergeApkLog: merge log : " + str);
        this.useLogPath = this.mergeApkStepLogPath;
        this.threadPoolExecutor.execute(new WriteLogThread(str));
    }

    public void deleteInstallPluginLog() {
        if (TextUtils.isEmpty(this.pluginStepLogPath)) {
            LogDebug.e(TAG, "deleteInstallPluginLog:  the pluginStepLogPath length is ZERO");
            return;
        }
        try {
            deleteLogFile(this.pluginStepLogPath);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void deleteMergeApkLog() {
        if (TextUtils.isEmpty(this.mergeApkStepLogPath)) {
            LogDebug.e(TAG, "deleteInstallPluginLog:  the mergeApkStepLogPath length is ZERO");
            return;
        }
        try {
            deleteLogFile(this.mergeApkStepLogPath);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void deleteLogFile(String str) throws IOException {
        new File(str).deleteOnExit();
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    class WriteLogThread extends Thread {
        String logContent;

        public WriteLogThread(String str) {
            super("write-trace-log-thread");
            this.logContent = str;
        }

        @Override
        public void run() throws Throwable {
            super.run();
            try {
                writePluginLogToFile();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

        private void writePluginLogToFile() throws Throwable {
            LogDebug.d(PluginTraceManager.TAG, " start write Plugin Log To File :logContent " + this.logContent);
            FileUtils.writeStringToFile(new File(PluginTraceManager.this.useLogPath), this.logContent, Charsets.UTF_8, false);
        }
    }
}
