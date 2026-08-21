package com.qihoo360.loader2;

import android.text.TextUtils;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
class PluginTable {
    static final HashMap<String, PluginInfo> PLUGINS = new HashMap<>();

    PluginTable() {
    }

    static final void dump(FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        if (LogDebug.DUMP_ENABLED) {
            printWriter.println("--- PluginTable.size = " + PLUGINS.size() + " ---");
            Iterator<PluginInfo> it = MP.getPlugins(false).iterator();
            while (it.hasNext()) {
                printWriter.println(it.next());
            }
            printWriter.println();
        }
    }

    static final void initPlugins(Map<String, Plugin> map) {
        synchronized (PLUGINS) {
            Iterator<Plugin> it = map.values().iterator();
            while (it.hasNext()) {
                putPluginInfo(it.next().mInfo);
            }
        }
    }

    static final void updatePlugin(PluginInfo pluginInfo) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "update plugin table: info=" + pluginInfo);
        }
        synchronized (PLUGINS) {
            if (RePlugin.getConfig().getCallbacks().isPluginBlocked(pluginInfo)) {
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "update plugin table: plugin is blocked, in=" + pluginInfo);
                }
                return;
            }
            putPluginInfo(pluginInfo);
        }
    }

    static final void replaceInfo(PluginInfo pluginInfo) {
        boolean z;
        synchronized (PLUGINS) {
            PluginInfo pluginInfo2 = PLUGINS.get(pluginInfo.getName());
            if (pluginInfo2 == null || !pluginInfo2.canReplaceForPn(pluginInfo)) {
                z = false;
            } else {
                putPluginInfo(pluginInfo);
                z = true;
            }
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "replace plugin table: info=" + pluginInfo + " rc=" + z);
        }
    }

    static final void removeInfo(PluginInfo pluginInfo) {
        boolean z;
        synchronized (PLUGINS) {
            if (PLUGINS.get(pluginInfo.getName()) != null) {
                removePluginInfo(pluginInfo);
                z = true;
            } else {
                z = false;
            }
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "removeInfo plugin table: info=" + pluginInfo + " rc=" + z);
        }
    }

    static final PluginInfo getPluginInfo(String str) {
        PluginInfo pluginInfo;
        synchronized (PLUGINS) {
            pluginInfo = PLUGINS.get(str);
        }
        return pluginInfo;
    }

    static final List<PluginInfo> buildPlugins() {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "build plugins");
        }
        List<PluginInfo> plugins = MP.getPlugins(false);
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "build " + plugins.size() + " plugins");
        }
        return plugins;
    }

    private static void putPluginInfo(PluginInfo pluginInfo) {
        PLUGINS.put(pluginInfo.getPackageName(), pluginInfo);
        if (TextUtils.isEmpty(pluginInfo.getAlias())) {
            return;
        }
        PLUGINS.put(pluginInfo.getAlias(), pluginInfo);
    }

    private static void removePluginInfo(PluginInfo pluginInfo) {
        PLUGINS.remove(pluginInfo.getPackageName());
        PLUGINS.remove(pluginInfo.getAlias());
    }
}
