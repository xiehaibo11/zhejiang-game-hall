package com.qihoo360.replugin.component.receiver;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.qihoo360.i.Factory;
import com.qihoo360.mobilesafe.api.Tasks;
import com.qihoo360.replugin.helper.LogDebug;
import java.util.HashMap;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginReceiverHelper {
    public static void onPluginReceiverReceived(String str, final String str2, HashMap<String, BroadcastReceiver> map, final Intent intent) {
        final BroadcastReceiver broadcastReceiver;
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            if (LogDebug.LOG) {
                LogDebug.d(PluginReceiverProxy.TAG, "plugin or receiver or intent is null, return.");
                return;
            }
            return;
        }
        final Context contextQueryPluginContext = Factory.queryPluginContext(str);
        if (contextQueryPluginContext == null) {
            return;
        }
        String str3 = String.format("%s-%s", str, str2);
        BroadcastReceiver broadcastReceiver2 = null;
        if (map == null || !map.containsKey(str3)) {
            try {
                Class clsLoadClassSafety = PluginReceiverProxy.loadClassSafety(contextQueryPluginContext.getClassLoader(), str2);
                if (clsLoadClassSafety != null) {
                    BroadcastReceiver broadcastReceiver3 = (BroadcastReceiver) clsLoadClassSafety.newInstance();
                    if (map != null) {
                        try {
                            map.put(str3, broadcastReceiver3);
                        } catch (Throwable th) {
                            th = th;
                            broadcastReceiver2 = broadcastReceiver3;
                            if (LogDebug.LOG) {
                                LogDebug.d(PluginReceiverProxy.TAG, th.toString());
                            }
                        }
                    }
                    if (LogDebug.LOG) {
                        LogDebug.d(PluginReceiverProxy.TAG, String.format("反射创建 Receiver 实例 %s", str2));
                    }
                    broadcastReceiver2 = broadcastReceiver3;
                }
            } catch (Throwable th2) {
                th = th2;
            }
            broadcastReceiver = broadcastReceiver2;
        } else {
            broadcastReceiver = map.get(str3);
        }
        if (broadcastReceiver != null) {
            Tasks.post2UI(new Runnable() { // from class: com.qihoo360.replugin.component.receiver.PluginReceiverHelper.1
                @Override // java.lang.Runnable
                public void run() {
                    if (LogDebug.LOG) {
                        LogDebug.d(PluginReceiverProxy.TAG, String.format("调用 %s.onReceive()", str2));
                    }
                    broadcastReceiver.onReceive(contextQueryPluginContext, intent);
                }
            });
        }
    }
}
