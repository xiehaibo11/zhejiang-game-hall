package com.qihoo360.mobilesafe.svcmanager;

import android.os.IBinder;
import android.os.RemoteException;
import android.util.Log;
import com.qihoo360.loader2.MP;
import com.qihoo360.mobilesafe.core.BuildConfig;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.xiaomi.mipush.sdk.Constants;
import java.util.HashMap;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
class PluginServiceManager {
    private static final boolean DEBUG;
    private static final String TAG;
    private static Map<String, PluginServiceRecord> sRecordMap;

    PluginServiceManager() {
    }

    static {
        boolean z = BuildConfig.DEBUG;
        DEBUG = z;
        TAG = z ? "PluginServiceManager" : PluginServiceManager.class.getSimpleName();
        sRecordMap = new HashMap();
    }

    static IBinder getPluginService(String str, String str2, int i, IBinder iBinder) throws RemoteException {
        PluginServiceRecord pluginServiceRecord;
        synchronized (sRecordMap) {
            String strGenerateMapKey = generateMapKey(str, str2);
            pluginServiceRecord = sRecordMap.get(strGenerateMapKey);
            if (pluginServiceRecord != null && !pluginServiceRecord.isServiceAlive()) {
                pluginServiceRecord = null;
            }
            if (pluginServiceRecord == null) {
                pluginServiceRecord = new PluginServiceRecord(str, str2);
                sRecordMap.put(strGenerateMapKey, pluginServiceRecord);
            }
        }
        return pluginServiceRecord.getService(i, iBinder);
    }

    static void onRefReleased(String str, String str2, int i) {
        synchronized (sRecordMap) {
            PluginServiceRecord pluginServiceRecord = sRecordMap.get(generateMapKey(str, str2));
            if (pluginServiceRecord != null) {
                int iDecrementProcessRef = pluginServiceRecord.decrementProcessRef(i);
                if (DEBUG) {
                    Log.d(TAG, "[onRefReleased] remaining ref count: " + iDecrementProcessRef);
                }
                if (iDecrementProcessRef <= 0) {
                    removePluginServiceRecord(pluginServiceRecord);
                }
            }
        }
    }

    static void onRefProcessDied(String str, String str2, int i) {
        synchronized (sRecordMap) {
            PluginServiceRecord pluginServiceRecord = sRecordMap.get(generateMapKey(str, str2));
            if (pluginServiceRecord != null) {
                int iRefProcessDied = pluginServiceRecord.refProcessDied(i);
                if (DEBUG) {
                    Log.d(TAG, "[onRefProcessDied] remaining ref count: " + iRefProcessDied);
                }
                if (iRefProcessDied <= 0) {
                    removePluginServiceRecord(pluginServiceRecord);
                }
            }
        }
    }

    private static void removePluginServiceRecord(PluginServiceRecord pluginServiceRecord) {
        if (DEBUG) {
            Log.d(TAG, "[removePluginServiceRecord]: " + pluginServiceRecord.mPluginName + ", " + pluginServiceRecord.mServiceName);
        }
        synchronized (sRecordMap) {
            String strGenerateMapKey = generateMapKey(pluginServiceRecord.mPluginName, pluginServiceRecord.mServiceName);
            if (pluginServiceRecord.mPluginBinder == null) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "psm.rpsr: mpb nil");
            } else {
                MP.releasePluginBinder(pluginServiceRecord.mPluginBinder);
                sRecordMap.remove(strGenerateMapKey);
            }
        }
    }

    private static String generateMapKey(String str, String str2) {
        return str + Constants.ACCEPT_TIME_SEPARATOR_SERVER + str2;
    }
}
