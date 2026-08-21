package com.qihoo360.loader2;

import android.content.Context;
import android.os.Build;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.utils.FileUtils;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class Builder {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    static final class PxAll {
        private final ArrayList<PluginInfo> builtins = new ArrayList<>();
        private final ArrayList<PluginInfo> v5 = new ArrayList<>();
        private final ArrayList<PluginInfo> normals = new ArrayList<>();
        private final HashSet<PluginInfo> others = new HashSet<>();
        private final ArrayList<PluginInfo> all = new ArrayList<>();

        PxAll() {
        }

        private final boolean insert(ArrayList<PluginInfo> arrayList, PluginInfo pluginInfo, boolean z) {
            for (int i = 0; i < arrayList.size(); i++) {
                PluginInfo pluginInfo2 = arrayList.get(i);
                if (pluginInfo2.getName().equals(pluginInfo.getName())) {
                    if (z) {
                        if (PluginInfo.VERSION_COMPARATOR.compare(pluginInfo2, pluginInfo) > 0) {
                            return false;
                        }
                    } else if (PluginInfo.VERSION_COMPARATOR.compare(pluginInfo2, pluginInfo) >= 0) {
                        return false;
                    }
                    this.others.add(arrayList.get(i));
                    arrayList.set(i, pluginInfo);
                    return true;
                }
            }
            arrayList.add(pluginInfo);
            return true;
        }

        private final boolean hasOlder(ArrayList<PluginInfo> arrayList, PluginInfo pluginInfo) {
            for (PluginInfo pluginInfo2 : arrayList) {
                if (pluginInfo2.getName().equals(pluginInfo.getName()) && PluginInfo.VERSION_COMPARATOR.compare(pluginInfo2, pluginInfo) < 0) {
                    return true;
                }
            }
            return false;
        }

        private final PluginInfo getBuiltin(String str) {
            for (PluginInfo pluginInfo : this.builtins) {
                if (pluginInfo.getName().equals(str)) {
                    return pluginInfo;
                }
            }
            return null;
        }

        private final PluginInfo getV5(String str) {
            for (PluginInfo pluginInfo : this.v5) {
                if (pluginInfo.getName().equals(str)) {
                    return pluginInfo;
                }
            }
            return null;
        }

        final HashSet<PluginInfo> getOthers() {
            return this.others;
        }

        final ArrayList<PluginInfo> getPlugins() {
            return this.all;
        }

        final void addBuiltin(PluginInfo pluginInfo) {
            insert(this.builtins, pluginInfo, false);
            insert(this.all, pluginInfo, false);
        }

        final void addV5(PluginInfo pluginInfo) {
            if (insert(this.all, pluginInfo, false)) {
                insert(this.v5, pluginInfo, false);
            }
        }

        final void addNormal(PluginInfo pluginInfo) {
            PluginInfo builtin = getBuiltin(pluginInfo.getName());
            if (builtin != null && builtin.getVersionValue() == pluginInfo.getVersionValue()) {
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "builtin plugin: normal=" + pluginInfo);
                }
            } else {
                PluginInfo v5 = getV5(pluginInfo.getName());
                if (v5 != null && v5.getVersionValue() == pluginInfo.getVersionValue()) {
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "v5 plugin: normal=" + pluginInfo);
                    }
                } else {
                    this.others.add(pluginInfo);
                    return;
                }
            }
            insert(this.normals, pluginInfo, false);
        }
    }

    static final void builder(Context context, PxAll pxAll) {
        Finder.search(context, pxAll);
        for (PluginInfo pluginInfo : pxAll.getOthers()) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "delete obsolote plugin=" + pluginInfo);
            }
            if (!pluginInfo.deleteObsolote(context) && LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "can't delete obsolote plugin=" + pluginInfo);
            }
        }
        deleteUnknownDexs(context, pxAll);
        deleteUnknownLibs(context, pxAll);
    }

    private static File getDexDir(Context context) {
        if (Build.VERSION.SDK_INT > 25) {
            return new File(context.getDir(Constant.LOCAL_PLUGIN_SUB_DIR, 0) + File.separator + "oat" + File.separator + VMRuntimeCompat.getArtOatCpuType());
        }
        return context.getDir(Constant.LOCAL_PLUGIN_ODEX_SUB_DIR, 0);
    }

    private static void deleteUnknownDexs(Context context, PxAll pxAll) {
        HashSet hashSet = new HashSet();
        for (PluginInfo pluginInfo : pxAll.getPlugins()) {
            hashSet.add(pluginInfo.getDexFile().getName());
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "dexFile:" + pluginInfo.getDexFile().getName());
            }
            if (Build.VERSION.SDK_INT > 25) {
                String fileNameWithoutExt = FileUtils.getFileNameWithoutExt(pluginInfo.getDexFile().getAbsolutePath());
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "vdexFile:" + fileNameWithoutExt + ".vdex");
                }
                hashSet.add(fileNameWithoutExt + ".vdex");
            }
        }
        File dexDir = getDexDir(context);
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "to delete dex dir:" + dexDir);
        }
        File[] fileArrListFiles = dexDir.listFiles();
        if (fileArrListFiles != null) {
            for (File file : fileArrListFiles) {
                if (hashSet.contains(file.getName())) {
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "no need delete " + file.getAbsolutePath());
                    }
                } else {
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "delete unknown dex=" + file.getAbsolutePath());
                    }
                    try {
                        FileUtils.forceDelete(file);
                    } catch (IOException e) {
                        if (LogDebug.LOG) {
                            LogDebug.d(LogDebug.PLUGIN_TAG, "can't delete unknown dex=" + file.getAbsolutePath(), e);
                        }
                    } catch (IllegalArgumentException e2) {
                        if (LogDebug.LOG) {
                            e2.printStackTrace();
                        }
                    }
                }
            }
        }
    }

    private static void deleteUnknownLibs(Context context, PxAll pxAll) {
        HashSet hashSet = new HashSet();
        Iterator<PluginInfo> it = pxAll.getPlugins().iterator();
        while (it.hasNext()) {
            hashSet.add(it.next().getNativeLibsDir().getName());
        }
        File[] fileArrListFiles = context.getDir(Constant.LOCAL_PLUGIN_DATA_LIB_DIR, 0).listFiles();
        if (fileArrListFiles != null) {
            for (File file : fileArrListFiles) {
                if (!hashSet.contains(file.getName())) {
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "delete unknown libs=" + file.getAbsolutePath());
                    }
                    try {
                        FileUtils.forceDelete(file);
                    } catch (IOException e) {
                        if (LogDebug.LOG) {
                            LogDebug.d(LogDebug.PLUGIN_TAG, "can't delete unknown libs=" + file.getAbsolutePath(), e);
                        }
                    } catch (IllegalArgumentException e2) {
                        if (LogDebug.LOG) {
                            e2.printStackTrace();
                        }
                    }
                }
            }
        }
    }
}
