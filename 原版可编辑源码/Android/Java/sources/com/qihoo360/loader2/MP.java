package com.qihoo360.loader2;

import android.os.IBinder;
import android.os.RemoteException;
import com.qihoo360.loader.utils.ProcessLocker;
import com.qihoo360.replugin.IHostBinderFetcher;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.RePluginInternal;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.model.PluginInfo;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class MP {
    public static final String ACTION_QUICK_RESTART = "com.qihoo360.loader2.ACTION_QUICK_RESTART";
    public static final String ACTION_REQUEST_RESTART = "com.qihoo360.loader2.ACTION_REQUEST_RESTART";
    static volatile HashMap<String, String> sBinderReasons;

    public static final void installBuiltinPlugin(String str, IHostBinderFetcher iHostBinderFetcher) {
        PMF.sPluginMgr.installBuiltinPlugin(str, iHostBinderFetcher);
    }

    public static final void installBinder(String str, IBinder iBinder) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "installBinder n=" + str + " b=" + iBinder);
        }
        try {
            PluginProcessMain.getPluginHost().installBinder(str, iBinder);
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "mp i.b: " + th.getMessage(), th);
        }
    }

    public static final IBinder fetchBinder(String str) {
        try {
            IBinder iBinderFetchBinder = PluginProcessMain.getPluginHost().fetchBinder(str);
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "fetchBinder n=" + str + " b=" + iBinderFetchBinder);
            }
            return iBinderFetchBinder;
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "mp f.b: " + th.getMessage(), th);
            return null;
        }
    }

    public static final PluginBinder fetchPluginBinder(String str, int i, String str2) {
        IBinder iBinder;
        IPluginClient iPluginClientStartPluginProcess;
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "MP.fetchPluginBinder ... plugin=" + str + " binder.name=" + str2);
        }
        if (RePlugin.getConfig().isPrintDetailLog()) {
            String str3 = "";
            for (StackTraceElement stackTraceElement : Thread.currentThread().getStackTrace()) {
                if (!stackTraceElement.isNativeMethod()) {
                    str3 = str3 + stackTraceElement.getClassName() + "." + stackTraceElement.getMethodName() + "(" + stackTraceElement.getFileName() + Constants.COLON_SEPARATOR + stackTraceElement.getLineNumber() + ")\n";
                }
            }
            if (sBinderReasons == null) {
                sBinderReasons = new HashMap<>();
            }
            sBinderReasons.put(str + Constants.COLON_SEPARATOR + str2, str3);
        }
        PluginBinderInfo pluginBinderInfo = new PluginBinderInfo(4);
        try {
            iPluginClientStartPluginProcess = startPluginProcess(str, i, pluginBinderInfo);
        } catch (Throwable th) {
            th = th;
            iBinder = null;
        }
        if (iPluginClientStartPluginProcess == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "mp.f.p.b: s c fail");
            return null;
        }
        IBinder iBinderQueryBinder = iPluginClientStartPluginProcess.queryBinder(str, str2);
        try {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "MP.fetchPluginBinder binder.object=" + iBinderQueryBinder + " pid=" + pluginBinderInfo.pid);
            }
            if (iBinderQueryBinder != null) {
                PluginProcessMain.getPluginHost().regPluginBinder(pluginBinderInfo, iBinderQueryBinder);
            }
        } catch (Throwable th2) {
            iBinder = iBinderQueryBinder;
            th = th2;
            LogRelease.e(LogDebug.PLUGIN_TAG, "mp.f.p.b: p=" + pluginBinderInfo.pid, th);
            iBinderQueryBinder = iBinder;
        }
        if (iBinderQueryBinder == null) {
            return null;
        }
        return new PluginBinder(str, str2, pluginBinderInfo.pid, iBinderQueryBinder);
    }

    public static final void releasePluginBinder(PluginBinder pluginBinder) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "MP.releasePluginBinder ... pid=" + pluginBinder.pid + " binder=" + pluginBinder.binder);
        }
        if (LogDebug.LOG && sBinderReasons != null) {
            sBinderReasons.remove(pluginBinder.plugin + Constants.COLON_SEPARATOR + pluginBinder.name);
        }
        PluginBinderInfo pluginBinderInfo = new PluginBinderInfo(4);
        pluginBinderInfo.pid = pluginBinder.pid;
        try {
            PluginProcessMain.getPluginHost().unregPluginBinder(pluginBinderInfo, pluginBinder.binder);
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "mp.r.p.b: " + th.getMessage(), th);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0050  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final PluginInfo pluginDownloaded(String str, boolean z) {
        ProcessLocker processLocker;
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "MP.pluginDownloaded ... path=" + str);
        }
        if (str != null) {
            try {
                File file = new File(str);
                String name = file.getName();
                String parent = file.getParent();
                if (name.startsWith("p-n-")) {
                    processLocker = new ProcessLocker(RePluginInternal.getAppContext(), parent, name + ".lock");
                } else {
                    processLocker = null;
                }
                if (processLocker != null) {
                    try {
                        if (!processLocker.tryLock()) {
                            LogDebug.d(LogDebug.PLUGIN_TAG, "MP.pluginDownloaded ... lock file + " + str + " failed! ");
                        }
                    } catch (Throwable th) {
                        th = th;
                    }
                }
                PluginInfo pluginInfoPluginDownloaded = PluginProcessMain.getPluginHost().pluginDownloaded(str, z);
                if (pluginInfoPluginDownloaded != null) {
                    RePlugin.getConfig().getEventCallbacks().onInstallPluginSucceed(pluginInfoPluginDownloaded);
                }
                return pluginInfoPluginDownloaded;
            } catch (Throwable th2) {
                th = th2;
                processLocker = null;
            }
        }
        try {
            LogRelease.e(LogDebug.PLUGIN_TAG, "mp.pded: " + th.getMessage(), th);
            if (processLocker != null) {
                processLocker.unlock();
            }
            return null;
        } finally {
            if (processLocker != null) {
                processLocker.unlock();
            }
        }
    }

    public static final boolean pluginUninstall(String str) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "MP.pluginUninstall ... pluginName=" + str);
        }
        PluginInfo plugin = getPlugin(str, true);
        if (plugin == null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "Not installed. pluginName=" + str);
            }
            return true;
        }
        try {
            return PluginProcessMain.getPluginHost().pluginUninstalled(plugin);
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "uninstall. error: " + th.getMessage(), th);
            return false;
        }
    }

    public static final boolean pluginExtracted(String str) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "MP.pluginExtracted ... path=" + str);
        }
        try {
            return PluginProcessMain.getPluginHost().pluginExtracted(str);
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "mp.peed: " + th.getMessage(), th);
            return false;
        }
    }

    public static final List<PluginInfo> getPlugins(boolean z) {
        ArrayList arrayList = new ArrayList();
        HashSet hashSet = new HashSet();
        synchronized (PluginTable.PLUGINS) {
            for (PluginInfo pluginInfo : PluginTable.PLUGINS.values()) {
                String path = pluginInfo.getPath();
                if (!hashSet.contains(path)) {
                    hashSet.add(path);
                    if (z) {
                        pluginInfo = (PluginInfo) pluginInfo.clone();
                    }
                    arrayList.add(pluginInfo);
                }
            }
        }
        return arrayList;
    }

    public static final PluginInfo getPlugin(String str, boolean z) {
        synchronized (PluginTable.PLUGINS) {
            PluginInfo pluginInfo = PluginTable.PLUGINS.get(str);
            if (!z || pluginInfo == null) {
                return pluginInfo;
            }
            return (PluginInfo) pluginInfo.clone();
        }
    }

    public static final int sumActivities() {
        int iSumActivities = PluginProcessMain.sumActivities();
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.MAIN_TAG, "MP.sumActivities = " + iSumActivities);
        }
        return iSumActivities;
    }

    public static final int sumBinders() {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "MP.sumBinders ... index=" + PluginManager.sPluginProcessIndex);
        }
        try {
            return PluginProcessMain.getPluginHost().sumBinders(PluginManager.sPluginProcessIndex);
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "mp.s.b: " + th.getMessage(), th);
            return -2;
        }
    }

    public static final String[] resolvePluginActivity(String str) {
        return PluginContainers.resolvePluginActivity(str);
    }

    public static final boolean isMsProcessAlive(String str) {
        try {
            return PluginProcessMain.getPluginHost().isProcessAlive(str);
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "mp.i.p.a: " + th.getMessage(), th);
            return false;
        }
    }

    public static final IPluginClient startPluginProcess(String str, int i, PluginBinderInfo pluginBinderInfo) throws RemoteException {
        return PluginProcessMain.getPluginHost().startPluginProcess(str, i, pluginBinderInfo);
    }

    public static int getTaskAffinityGroupIndex(String str) throws RemoteException {
        return PluginProcessMain.getPluginHost().getTaskAffinityGroupIndex(str);
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static final class PluginBinder {
        public final IBinder binder;
        public final String name;
        public final int pid;
        public final String plugin;

        PluginBinder(String str, String str2, int i, IBinder iBinder) {
            this.plugin = str;
            this.name = str2;
            this.binder = iBinder;
            this.pid = i;
        }
    }
}
