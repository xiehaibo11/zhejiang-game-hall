package com.qihoo360.loader2;

import android.content.Context;
import com.qihoo360.loader.utils.ProcessLocker;
import com.qihoo360.loader2.Builder;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.RePluginInternal;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;
import java.io.File;
import java.util.ArrayList;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class V5Finder {
    static final void search(Context context, File file, Builder.PxAll pxAll) {
        ArrayList<V5FileInfo> arrayList = new ArrayList();
        File pnInstallDir = RePlugin.getConfig().getPnInstallDir();
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "search v5 files: dir=" + pnInstallDir.getAbsolutePath());
        }
        searchV5Plugins(pnInstallDir, arrayList);
        for (V5FileInfo v5FileInfo : arrayList) {
            if (!new ProcessLocker(RePluginInternal.getAppContext(), v5FileInfo.mFile.getParent(), v5FileInfo.mFile.getName() + ".lock").isLocked()) {
                PluginInfo pluginInfoUpdateV5FileTo = v5FileInfo.updateV5FileTo(context, file, false, true);
                if (pluginInfoUpdateV5FileTo == null) {
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "search: fail to update v5 plugin");
                    }
                } else {
                    pxAll.addV5(pluginInfoUpdateV5FileTo);
                }
            }
        }
    }

    private static final void searchV5Plugins(File file, ArrayList<V5FileInfo> arrayList) {
        File[] fileArrListFiles = file.listFiles();
        if (fileArrListFiles == null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "search v5 plugin: nothing");
                return;
            }
            return;
        }
        for (File file2 : fileArrListFiles) {
            if (!file2.isDirectory() && file2.length() > 0) {
                V5FileInfo v5FileInfoBuild = V5FileInfo.build(file2, 1);
                if (v5FileInfoBuild != null) {
                    arrayList.add(v5FileInfoBuild);
                } else {
                    V5FileInfo v5FileInfoBuild2 = V5FileInfo.build(file2, 3);
                    if (v5FileInfoBuild2 != null) {
                        arrayList.add(v5FileInfoBuild2);
                    }
                }
            }
        }
    }
}
