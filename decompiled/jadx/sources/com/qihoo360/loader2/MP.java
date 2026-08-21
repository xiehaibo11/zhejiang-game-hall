package com.qihoo360.loader2;

import android.os.IBinder;
import android.os.RemoteException;
import com.qihoo360.replugin.IHostBinderFetcher;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.model.PluginInfo;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
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
        To view partially-correct add '--show-bad-code' argument
    */
    public static final com.qihoo360.replugin.model.PluginInfo pluginDownloaded(java.lang.String r7, boolean r8) {
        /*
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "MP.pluginDownloaded ... path="
            r0.append(r2)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1a:
            r0 = 0
            if (r7 == 0) goto L50
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L4d
            r2.<init>(r7)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = r2.getName()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = r2.getParent()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r4 = "p-n-"
            boolean r4 = r3.startsWith(r4)     // Catch: java.lang.Throwable -> L4d
            if (r4 == 0) goto L50
            com.qihoo360.loader.utils.ProcessLocker r4 = new com.qihoo360.loader.utils.ProcessLocker     // Catch: java.lang.Throwable -> L4d
            android.content.Context r5 = com.qihoo360.replugin.RePluginInternal.getAppContext()     // Catch: java.lang.Throwable -> L4d
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4d
            r6.<init>()     // Catch: java.lang.Throwable -> L4d
            r6.append(r3)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = ".lock"
            r6.append(r3)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = r6.toString()     // Catch: java.lang.Throwable -> L4d
            r4.<init>(r5, r2, r3)     // Catch: java.lang.Throwable -> L4d
            goto L51
        L4d:
            r7 = move-exception
            r4 = r0
            goto L8e
        L50:
            r4 = r0
        L51:
            if (r4 == 0) goto L72
            boolean r2 = r4.tryLock()     // Catch: java.lang.Throwable -> L8d
            if (r2 != 0) goto L72
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8d
            r2.<init>()     // Catch: java.lang.Throwable -> L8d
            java.lang.String r3 = "MP.pluginDownloaded ... lock file + "
            r2.append(r3)     // Catch: java.lang.Throwable -> L8d
            r2.append(r7)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r3 = " failed! "
            r2.append(r3)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L8d
            com.qihoo360.replugin.helper.LogDebug.d(r1, r2)     // Catch: java.lang.Throwable -> L8d
        L72:
            com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L8d
            com.qihoo360.replugin.model.PluginInfo r7 = r2.pluginDownloaded(r7, r8)     // Catch: java.lang.Throwable -> L8d
            if (r7 == 0) goto L87
            com.qihoo360.replugin.RePluginConfig r8 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.lang.Throwable -> L8d
            com.qihoo360.replugin.RePluginEventCallbacks r8 = r8.getEventCallbacks()     // Catch: java.lang.Throwable -> L8d
            r8.onInstallPluginSucceed(r7)     // Catch: java.lang.Throwable -> L8d
        L87:
            if (r4 == 0) goto L8c
            r4.unlock()
        L8c:
            return r7
        L8d:
            r7 = move-exception
        L8e:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            r8.<init>()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r2 = "mp.pded: "
            r8.append(r2)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r2 = r7.getMessage()     // Catch: java.lang.Throwable -> Lac
            r8.append(r2)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lac
            com.qihoo360.replugin.helper.LogRelease.e(r1, r8, r7)     // Catch: java.lang.Throwable -> Lac
            if (r4 == 0) goto Lab
            r4.unlock()
        Lab:
            return r0
        Lac:
            r7 = move-exception
            if (r4 == 0) goto Lb2
            r4.unlock()
        Lb2:
            throw r7
        */
        throw new UnsupportedOperationException("Method not decompiled: com.qihoo360.loader2.MP.pluginDownloaded(java.lang.String, boolean):com.qihoo360.replugin.model.PluginInfo");
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
