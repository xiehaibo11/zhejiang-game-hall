package com.qihoo360.replugin.base;

import android.content.Context;
import android.content.Intent;
import android.os.Process;
import android.os.RemoteException;
import android.text.TextUtils;
import com.qihoo360.loader.utils.SysUtils;
import com.qihoo360.loader2.PluginProcessMain;
import com.qihoo360.replugin.helper.HostConfigHelper;
import com.qihoo360.replugin.helper.LogDebug;
import com.xiaomi.mipush.sdk.Constants;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class IPC {
    private static final String TAG = "IPC";
    private static int sCurrentPid;
    private static String sCurrentProcess;
    private static boolean sIsPersistentProcess;
    private static boolean sIsUIProcess;
    private static String sPackageName;
    private static String sPersistentProcessName;

    public static void init(Context context) {
        sCurrentProcess = SysUtils.getCurrentProcessName();
        sCurrentPid = Process.myPid();
        sPackageName = context.getApplicationInfo().packageName;
        if (HostConfigHelper.PERSISTENT_ENABLE) {
            String str = HostConfigHelper.PERSISTENT_NAME;
            if (!TextUtils.isEmpty(str)) {
                if (str.startsWith(Constants.COLON_SEPARATOR)) {
                    sPersistentProcessName = sPackageName + str;
                } else {
                    sPersistentProcessName = str;
                }
            }
        } else {
            sPersistentProcessName = sPackageName;
        }
        sIsUIProcess = sCurrentProcess.equals(sPackageName);
        sIsPersistentProcess = sCurrentProcess.equals(sPersistentProcessName);
    }

    public static String getCurrentProcessName() {
        return sCurrentProcess;
    }

    public static int getCurrentProcessId() {
        return sCurrentPid;
    }

    public static String getPersistentProcessName() {
        return sPersistentProcessName;
    }

    public static String getPluginHostProcessName() {
        return sPersistentProcessName;
    }

    public static boolean isPluginHostProcess() {
        return TextUtils.equals(getCurrentProcessName(), getPluginHostProcessName());
    }

    public static boolean isUIProcess() {
        return sIsUIProcess;
    }

    public static boolean isPersistentProcess() {
        return sIsPersistentProcess;
    }

    public static boolean isPersistentEnable() {
        return HostConfigHelper.PERSISTENT_ENABLE;
    }

    public static int getPidByProcessName(String str) {
        if (TextUtils.isEmpty(str)) {
            return -1;
        }
        if (TextUtils.equals(str, getCurrentProcessName())) {
            return getCurrentProcessId();
        }
        try {
            return PluginProcessMain.getPluginHost().getPidByProcessName(str);
        } catch (RemoteException e) {
            e.printStackTrace();
            return -1;
        }
    }

    public static String getProcessNameByPid(int i) {
        if (i < 0) {
            return null;
        }
        if (i == getCurrentProcessId()) {
            return getCurrentProcessName();
        }
        try {
            return PluginProcessMain.getPluginHost().getProcessNameByPid(i);
        } catch (RemoteException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String getPackageName() {
        return sPackageName;
    }

    public static boolean sendLocalBroadcast2Plugin(Context context, String str, Intent intent) {
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "sendLocalBroadcast2Plugin: target=" + str + " intent=" + intent);
        }
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            PluginProcessMain.getPluginHost().sendIntent2Plugin(str, intent);
            return true;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    public static boolean sendLocalBroadcast2Process(Context context, String str, Intent intent) {
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "sendLocalBroadcast2Process: target=" + str + " intent=" + intent);
        }
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            PluginProcessMain.getPluginHost().sendIntent2Process(str, intent);
            return true;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    public static boolean sendLocalBroadcast2All(Context context, Intent intent) {
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "sendLocalBroadcast2All: intent=" + intent);
        }
        try {
            PluginProcessMain.getPluginHost().sendIntent2Process(null, intent);
            return true;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    public static boolean sendLocalBroadcast2PluginSync(Context context, String str, Intent intent) {
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "sendLocalBroadcast2PluginSync: target=" + str + " intent=" + intent);
        }
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            PluginProcessMain.getPluginHost().sendIntent2PluginSync(str, intent);
            return true;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    public static boolean sendLocalBroadcast2ProcessSync(Context context, String str, Intent intent) {
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "sendLocalBroadcast2ProcessSync: target=" + str + " intent=" + intent);
        }
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            PluginProcessMain.getPluginHost().sendIntent2ProcessSync(str, intent);
            return true;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    public static boolean sendLocalBroadcast2AllSync(Context context, Intent intent) {
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "sendLocalBroadcast2AllSync: intent=" + intent);
        }
        try {
            PluginProcessMain.getPluginHost().sendIntent2ProcessSync(null, intent);
            return true;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }
}
