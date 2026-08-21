package com.qihoo360.replugin.component.utils;

import android.content.ComponentName;
import android.content.Context;
import android.content.pm.ComponentInfo;
import android.text.TextUtils;
import com.qihoo360.i.Factory;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.component.process.PluginProcessHost;
import com.qihoo360.replugin.helper.HostConfigHelper;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginClientHelper {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class ShouldCallSystem extends RuntimeException {
        private static final long serialVersionUID = -2987516993124234548L;
    }

    public static ComponentName getComponentNameByContext(Context context, ComponentName componentName) {
        if (componentName == null) {
            return null;
        }
        if (!TextUtils.equals(componentName.getPackageName(), IPC.getPackageName())) {
            return componentName;
        }
        String strFetchPluginName = Factory.fetchPluginName(context.getClassLoader());
        if (TextUtils.isEmpty(strFetchPluginName)) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "pch.iibc: pn is n. n=" + componentName);
        } else if (TextUtils.equals(strFetchPluginName, RePlugin.PLUGIN_NAME_MAIN)) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PluginClientHelper.iibc(): Call Main! n=" + componentName);
            }
        } else {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PluginClientHelper.iibc(): Call Plugin! n=" + componentName);
            }
            return new ComponentName(strFetchPluginName, componentName.getClassName());
        }
        return componentName;
    }

    public static Integer getProcessInt(String str) {
        if (!TextUtils.isEmpty(str)) {
            String lowerCase = str.toLowerCase();
            if (!lowerCase.contains(HostConfigHelper.PERSISTENT_NAME.toLowerCase()) && !TextUtils.equals(lowerCase, IPC.getPersistentProcessName().toLowerCase())) {
                String strProcessTail = PluginProcessHost.processTail(str.toLowerCase());
                if (PluginProcessHost.PROCESS_INT_MAP.containsKey(strProcessTail)) {
                    return PluginProcessHost.PROCESS_INT_MAP.get(strProcessTail);
                }
            }
            return -2;
        }
        return -1;
    }

    public static String getPluginName(ComponentInfo componentInfo) {
        int iLastIndexOf;
        return (componentInfo == null || componentInfo.packageName == null || (iLastIndexOf = componentInfo.packageName.lastIndexOf(".")) <= 0) ? "" : componentInfo.packageName.substring(iLastIndexOf + 1);
    }
}
