package com.ymnsdk.replugin;

import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.os.Build;
import android.text.TextUtils;
import android.util.Log;
import android.webkit.WebView;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.RePluginApplication;
import com.qihoo360.replugin.RePluginCallbacks;
import com.qihoo360.replugin.RePluginConfig;
import com.qihoo360.replugin.RePluginEventCallbacks;
import com.qihoo360.replugin.model.PluginInfo;
import com.ymnsdk.replugin.trace.PluginTraceManager;
import com.ymnsdk.replugin.util.RomUtil;
import java.io.File;
import java.io.RandomAccessFile;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.nio.channels.FileLock;
import java.util.HashSet;
import java.util.Iterator;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class YmnRepluginApplication extends RePluginApplication {
    @Override
    public void onCreate() {
        super.onCreate();
        PluginTraceManager.getInstance().initLogFilePatch(getBaseContext());
    }

    @Override
    public Context getBaseContext() {
        return super.getBaseContext();
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
    }

    @Override
    public void onTerminate() {
        super.onTerminate();
    }

    @Override
    public void onTrimMemory(int i) {
        super.onTrimMemory(i);
    }

    @Override
    public String getPackageName() {
        return super.getPackageName();
    }

    @Override
    public ClassLoader getClassLoader() {
        return super.getClassLoader();
    }

    @Override
    public Resources getResources() {
        return super.getResources();
    }

    @Override
    protected void attachBaseContext(Context context) {
        super.attachBaseContext(context);
        handleWebviewDir(this);
        if (Build.VERSION.SDK_INT == 28) {
            closeAndroidPDialog();
        }
        RePlugin.enableDebugger(context, false);
    }

    @Override
    protected RePluginConfig createConfig() {
        RePluginConfig rePluginConfig = new RePluginConfig();
        rePluginConfig.setUseHostClassIfNotFound(true);
        rePluginConfig.setVerifySign(false);
        rePluginConfig.setEventCallbacks(new HostEventCallbacks(this));
        rePluginConfig.setMoveFileWhenInstalling(false);
        return rePluginConfig;
    }

    @Override
    protected RePluginCallbacks createCallbacks() {
        return new HostCallbacks(this);
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    private class HostCallbacks extends RePluginCallbacks {
        private static final String TAG = "HostCallbacks";

        private HostCallbacks(Context context) {
            super(context);
        }

        @Override
        public boolean onPluginNotExistsForActivity(Context context, String str, Intent intent, int i) {
            Log.d(TAG, "onPluginNotExistsForActivity: Start download... p=" + str + "; i=" + intent);
            return super.onPluginNotExistsForActivity(context, str, intent, i);
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    private class HostEventCallbacks extends RePluginEventCallbacks {
        private static final String TAG = "HostEventCallbacks";

        public HostEventCallbacks(Context context) {
            super(context);
        }

        @Override
        public void onInstallPluginFailed(String str, RePluginEventCallbacks.InstallResult installResult) {
            super.onInstallPluginFailed(str, installResult);
        }

        @Override
        public void onStartActivityCompleted(String str, String str2, boolean z) {
            super.onStartActivityCompleted(str, str2, z);
        }

        @Override
        public void onInstallPluginStepInfo(String str, boolean z) {
            PluginTraceManager.getInstance().summitInstallPluginLog(str, z);
        }

        @Override
        public void onInstallPluginSucceed(PluginInfo pluginInfo) {
            super.onInstallPluginSucceed(pluginInfo);
            PluginTraceManager.getInstance().deleteInstallPluginLog();
        }
    }

    @Override
    public void onLowMemory() {
        super.onLowMemory();
    }

    private static void handleWebviewDir(Context context) {
        if (Build.VERSION.SDK_INT < 28) {
            return;
        }
        try {
            HashSet hashSet = new HashSet();
            String absolutePath = context.getDataDir().getAbsolutePath();
            String processName = getProcessName();
            if (!TextUtils.equals(context.getPackageName(), processName)) {
                if (TextUtils.isEmpty(processName)) {
                    processName = context.getPackageName();
                }
                WebView.setDataDirectorySuffix(processName);
                String str = "_" + processName;
                hashSet.add(absolutePath + "/app_webview" + str + "/webview_data.lock");
                if (RomUtil.isEmui()) {
                    hashSet.add(absolutePath + "/app_hws_webview" + str + "/webview_data.lock");
                }
            } else {
                String str2 = "_" + processName;
                hashSet.add(absolutePath + "/app_webview/webview_data.lock");
                hashSet.add(absolutePath + "/app_webview" + str2 + "/webview_data.lock");
                if (RomUtil.isEmui()) {
                    hashSet.add(absolutePath + "/app_hws_webview/webview_data.lock");
                    hashSet.add(absolutePath + "/app_hws_webview" + str2 + "/webview_data.lock");
                }
            }
            Iterator it = hashSet.iterator();
            while (it.hasNext()) {
                File file = new File((String) it.next());
                if (file.exists()) {
                    tryLockOrRecreateFile(file);
                    return;
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static void tryLockOrRecreateFile(File file) {
        try {
            FileLock fileLockTryLock = new RandomAccessFile(file, "rw").getChannel().tryLock();
            if (fileLockTryLock != null) {
                fileLockTryLock.close();
            } else {
                createFile(file, file.delete());
            }
        } catch (Exception e) {
            e.printStackTrace();
            createFile(file, file.exists() ? file.delete() : false);
        }
    }

    private static void createFile(File file, boolean z) {
        if (z) {
            try {
                if (file.exists()) {
                    return;
                }
                file.createNewFile();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    private void closeAndroidPDialog() {
        try {
            Class.forName("android.content.pm.PackageParser$Package").getDeclaredConstructor(String.class).setAccessible(true);
        } catch (Exception e) {
            e.printStackTrace();
        }
        try {
            Class<?> cls = Class.forName("android.app.ActivityThread");
            Method declaredMethod = cls.getDeclaredMethod("currentActivityThread", new Class[0]);
            declaredMethod.setAccessible(true);
            Object objInvoke = declaredMethod.invoke(null, new Object[0]);
            Field declaredField = cls.getDeclaredField("mHiddenApiWarningShown");
            declaredField.setAccessible(true);
            declaredField.setBoolean(objInvoke, true);
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }
}
