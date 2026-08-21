package com.qihoo360.replugin.packages;

import android.os.RemoteException;
import android.text.TextUtils;
import com.qihoo360.loader2.IPluginHost;
import com.qihoo360.loader2.MP;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.model.PluginInfo;
import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginManagerProxy {
    private static final String TAG = "PluginManagerClient";
    private static IPluginManagerServer sRemote;
    private static PluginRunningList sRunningList;
    private static boolean sRunningSynced;

    static {
        PluginRunningList pluginRunningList = new PluginRunningList();
        sRunningList = pluginRunningList;
        pluginRunningList.setProcessInfo(IPC.getCurrentProcessName(), IPC.getCurrentProcessId());
    }

    public static void connectToServer(IPluginHost iPluginHost) throws RemoteException {
        if (sRemote != null) {
            if (LogDebug.LOG) {
                LogDebug.e(TAG, "connectToServer: Already connected! host=" + sRemote);
                return;
            }
            return;
        }
        sRemote = iPluginHost.fetchManagerServer();
    }

    public static void disconnect() {
        sRemote = null;
        sRunningSynced = false;
    }

    public static List<PluginInfo> load() throws RemoteException {
        return sRemote.load();
    }

    public static List<PluginInfo> updateAllPlugins() throws RemoteException {
        return sRemote.load();
    }

    public static void updateUsedIfNeeded(String str, boolean z) throws RemoteException {
        PluginInfo plugin = MP.getPlugin(str, false);
        if (plugin == null) {
            return;
        }
        if (plugin.isUsed() == z) {
            if (LogDebug.LOG) {
                LogDebug.i(TAG, "updateUsedIfNeeded: pi.isUsed == used, ignore. used=" + z + "; pn=" + str);
                return;
            }
            return;
        }
        if (plugin.isPnPlugin()) {
            return;
        }
        IPluginManagerServer iPluginManagerServer = sRemote;
        if (iPluginManagerServer == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "pmc.uuin: s=null");
        } else {
            iPluginManagerServer.updateUsed(plugin.getName(), z);
        }
    }

    public static boolean isPluginRunning(String str) throws RemoteException {
        if (sRunningList.isRunning(str)) {
            return true;
        }
        IPluginManagerServer iPluginManagerServer = sRemote;
        if (iPluginManagerServer == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "pmp.ipr: s=null");
            return false;
        }
        return iPluginManagerServer.isPluginRunning(str, null);
    }

    public static boolean isPluginRunningInProcess(String str, String str2) throws RemoteException {
        if (TextUtils.equals(str2, IPC.getCurrentProcessName())) {
            return sRunningList.isRunning(str);
        }
        IPluginManagerServer iPluginManagerServer = sRemote;
        if (iPluginManagerServer == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "pmp.iprip: s=null");
            return false;
        }
        return iPluginManagerServer.isPluginRunning(str, str2);
    }

    public static void syncRunningPlugins() throws RemoteException {
        if (!sRunningSynced && sRunningList.hasRunning()) {
            sRemote.syncRunningPlugins(sRunningList);
            sRunningSynced = true;
        }
    }

    public static void addToRunningPluginsNoThrows(String str) {
        sRunningList.add(str);
        IPluginManagerServer iPluginManagerServer = sRemote;
        if (iPluginManagerServer != null) {
            try {
                iPluginManagerServer.addToRunningPlugins(sRunningList.mProcessName, sRunningList.mPid, str);
            } catch (RemoteException e) {
                e.printStackTrace();
            }
        }
    }

    public static PluginRunningList getRunningPluginsNoThrows() {
        PluginRunningList pluginRunningList;
        if (sRemote != null) {
            try {
                pluginRunningList = new PluginRunningList(sRemote.getRunningPlugins());
            } catch (RemoteException e) {
                e.printStackTrace();
                pluginRunningList = null;
            }
        } else {
            pluginRunningList = null;
        }
        return pluginRunningList == null ? new PluginRunningList(sRunningList) : pluginRunningList;
    }

    public static String[] getRunningProcessesByPluginNoThrows(String str) {
        IPluginManagerServer iPluginManagerServer = sRemote;
        if (iPluginManagerServer != null) {
            try {
                return iPluginManagerServer.getRunningProcessesByPlugin(str);
            } catch (RemoteException e) {
                e.printStackTrace();
            }
        }
        return sRunningList.isRunning(str) ? new String[]{sRunningList.mProcessName} : new String[0];
    }
}
