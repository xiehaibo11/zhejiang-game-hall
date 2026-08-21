package com.qihoo360.replugin.helper;

import android.os.Build;
import android.os.Debug;
import android.util.Log;
import com.qihoo360.replugin.RePluginInternal;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.model.PluginInfo;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class LogDebug {
    public static final boolean DUMP_ENABLED;
    public static final String LOADER_TAG = "createClassLoader";
    public static final boolean LOG;
    public static final String MAIN_TAG = "ws000";
    public static final String MISC_TAG = "ws002";
    public static final String PLUGIN_TAG = "ws001";
    public static final String TAG = "RePlugin";
    private static final String TAG_PREFIX = "RePlugin.";

    static {
        boolean z = RePluginInternal.FOR_DEV;
        LOG = z;
        DUMP_ENABLED = z;
    }

    public static int v(String str, String str2) {
        if (!RePluginInternal.FOR_DEV) {
            return -1;
        }
        return RepluginLog.v(TAG_PREFIX + str, str2);
    }

    public static int v(String str, String str2, Throwable th) {
        if (!RePluginInternal.FOR_DEV) {
            return -1;
        }
        return RepluginLog.v(TAG_PREFIX + str, str2, th);
    }

    public static int d(String str, String str2) {
        if (!RePluginInternal.FOR_DEV) {
            return -1;
        }
        return RepluginLog.d(TAG_PREFIX + str, str2);
    }

    public static int d(String str, String str2, Throwable th) {
        if (!RePluginInternal.FOR_DEV) {
            return -1;
        }
        return RepluginLog.d(TAG_PREFIX + str, str2, th);
    }

    public static int i(String str, String str2) {
        if (!RePluginInternal.FOR_DEV) {
            return -1;
        }
        return RepluginLog.i(TAG_PREFIX + str, str2);
    }

    public static int i(String str, String str2, Throwable th) {
        if (!RePluginInternal.FOR_DEV) {
            return -1;
        }
        return RepluginLog.i(TAG_PREFIX + str, str2, th);
    }

    public static int w(String str, String str2) {
        if (!RePluginInternal.FOR_DEV) {
            return -1;
        }
        return RepluginLog.w(TAG_PREFIX + str, str2);
    }

    public static int w(String str, String str2, Throwable th) {
        if (!RePluginInternal.FOR_DEV) {
            return -1;
        }
        return RepluginLog.w(TAG_PREFIX + str, str2, th);
    }

    public static int w(String str, Throwable th) {
        if (!RePluginInternal.FOR_DEV) {
            return -1;
        }
        return RepluginLog.w(TAG_PREFIX + str, th);
    }

    public static int e(String str, String str2) {
        if (!RePluginInternal.FOR_DEV) {
            return -1;
        }
        return RepluginLog.e(TAG_PREFIX + str, str2);
    }

    public static int e(String str, String str2, Throwable th) {
        if (!RePluginInternal.FOR_DEV) {
            return -1;
        }
        return RepluginLog.e(TAG_PREFIX + str, str2, th);
    }

    public static int printMemoryStatus(String str, String str2) {
        if (!RePluginInternal.FOR_DEV) {
            return -1;
        }
        Debug.MemoryInfo memoryInfo = new Debug.MemoryInfo();
        Debug.getMemoryInfo(memoryInfo);
        return Log.i(str + "-MEMORY", ("desc=, memory_v_0_0_1, process=, " + IPC.getCurrentProcessName() + ", totalPss=, " + memoryInfo.getTotalPss() + ", dalvikPss=, " + memoryInfo.dalvikPss + ", nativeSize=, " + memoryInfo.nativePss + ", otherPss=, " + memoryInfo.otherPss + ", ") + str2);
    }

    public static int printPluginInfo(PluginInfo pluginInfo, int i) {
        return printMemoryStatus(TAG, "act=, loadLocked, flag=, Start, pn=, " + pluginInfo.getName() + ", type=, " + i + ", apk=, " + pluginInfo.getApkFile().length() + ", odex=, " + pluginInfo.getDexFile().length() + ", sys_api=, " + Build.VERSION.SDK_INT);
    }
}
