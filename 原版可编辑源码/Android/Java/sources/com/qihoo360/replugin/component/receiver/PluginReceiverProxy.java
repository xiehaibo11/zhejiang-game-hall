package com.qihoo360.replugin.component.receiver;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.text.TextUtils;
import android.util.Log;
import com.qihoo360.i.Factory;
import com.qihoo360.loader2.MP;
import com.qihoo360.loader2.PluginBinderInfo;
import com.qihoo360.loader2.PluginProcessMain;
import com.qihoo360.replugin.component.ComponentList;
import com.qihoo360.replugin.component.utils.PluginClientHelper;
import com.qihoo360.replugin.helper.LogDebug;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginReceiverProxy extends BroadcastReceiver {
    public static final String TAG = "ms-receiver";
    private HashMap<String, HashMap<String, List<String>>> mActionPluginComponents;
    private final HashMap<String, Integer> mReceiverProcess = new HashMap<>();

    @Override
    public void onReceive(Context context, Intent intent) {
        if (intent == null || this.mActionPluginComponents == null) {
            return;
        }
        String action = intent.getAction();
        if (TextUtils.isEmpty(action)) {
            return;
        }
        if (LogDebug.LOG) {
            LogDebug.d(TAG, String.format("代理 Receiver 收到 action: %s ", action));
        }
        HashMap<String, List<String>> map = this.mActionPluginComponents.get(action);
        if (map != null) {
            for (Map.Entry<String, List<String>> entry : map.entrySet()) {
                String key = entry.getKey();
                if (entry.getValue() != null) {
                    for (String str : new ArrayList(entry.getValue())) {
                        try {
                            int processOfReceiver = getProcessOfReceiver(key, str);
                            if (processOfReceiver == -2) {
                                PluginProcessMain.getPluginHost().onReceive(key, str, intent);
                            } else {
                                MP.startPluginProcess(key, processOfReceiver, new PluginBinderInfo(0)).onReceive(key, str, intent);
                            }
                        } catch (Throwable th) {
                            if (LogDebug.LOG) {
                                Log.d(TAG, th.toString());
                            }
                        }
                    }
                }
            }
        }
    }

    public static Class loadClassSafety(ClassLoader classLoader, String str) throws ClassNotFoundException {
        return classLoader.loadClass(str);
    }

    private int getProcessOfReceiver(String str, String str2) {
        ComponentList componentListQueryPluginComponentList;
        HashMap<String, ActivityInfo> receiverMap;
        ActivityInfo activityInfo;
        String str3 = str + Constants.ACCEPT_TIME_SEPARATOR_SERVER + str2;
        if (!this.mReceiverProcess.containsKey(str3) && (componentListQueryPluginComponentList = Factory.queryPluginComponentList(str)) != null && (receiverMap = componentListQueryPluginComponentList.getReceiverMap()) != null && (activityInfo = receiverMap.get(str2)) != null) {
            this.mReceiverProcess.put(str3, PluginClientHelper.getProcessInt(activityInfo.processName));
        }
        if (this.mReceiverProcess.containsKey(str3)) {
            return this.mReceiverProcess.get(str3).intValue();
        }
        return -1;
    }

    public void setActionPluginMap(HashMap<String, HashMap<String, List<String>>> map) {
        this.mActionPluginComponents = map;
    }
}
