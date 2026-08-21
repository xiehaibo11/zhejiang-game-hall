package com.qihoo360.loader2;

import android.content.Context;
import com.qihoo360.loader2.Builder;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;
import java.io.File;
import java.util.HashSet;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class Finder {
    static final void search(Context context, Builder.PxAll pxAll) {
        FinderBuiltin.loadPlugins(context, pxAll);
        File dir = context.getDir(Constant.LOCAL_PLUGIN_SUB_DIR, 0);
        V5Finder.search(context, dir, pxAll);
        HashSet<File> hashSet = new HashSet();
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "search plugins: dir=" + dir.getAbsolutePath());
        }
        searchLocalPlugins(dir, pxAll, hashSet);
        for (File file : hashSet) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "search: delete plugin dir invalid file=" + file.getAbsolutePath());
            }
            if (!file.delete() && LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "search: can't delete plugin dir invalid file=" + file.getAbsolutePath());
            }
        }
        hashSet.clear();
    }

    private static final void searchLocalPlugins(File file, Builder.PxAll pxAll, HashSet<File> hashSet) {
        File[] fileArrListFiles = file.listFiles();
        if (fileArrListFiles == null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "search local plugin: nothing");
                return;
            }
            return;
        }
        for (File file2 : fileArrListFiles) {
            if (!file2.isDirectory()) {
                if (file2.length() <= 0) {
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "search local plugin: zero length, file=" + file2.getAbsolutePath());
                    }
                    if (hashSet != null) {
                        hashSet.add(file2);
                    }
                } else {
                    PluginInfo pluginInfoBuild = PluginInfo.build(file2);
                    if (pluginInfoBuild == null) {
                        if (hashSet != null) {
                            hashSet.add(file2);
                        }
                    } else if (!pluginInfoBuild.match()) {
                        if (LogDebug.LOG) {
                            LogDebug.d(LogDebug.PLUGIN_TAG, "search local plugin: mismatch, file=" + file2.getAbsolutePath());
                        }
                        if (hashSet != null) {
                            hashSet.add(file2);
                        }
                    } else {
                        pxAll.addNormal(pluginInfoBuild);
                    }
                }
            }
        }
    }
}
