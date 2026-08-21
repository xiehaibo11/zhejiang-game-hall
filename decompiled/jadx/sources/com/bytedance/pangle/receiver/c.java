package com.bytedance.pangle.receiver;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import com.bytedance.pangle.log.ZeusLogger;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArraySet;

/* JADX INFO: loaded from: classes.dex */
public final class c {
    private static c d;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Map<String, a> f1576a = new ConcurrentHashMap();
    public final Map<PluginBroadcastReceiver, BroadcastReceiver> b = new ConcurrentHashMap();
    public final Set<Integer> c = new CopyOnWriteArraySet();

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f1577a;
        public final Set<PluginBroadcastReceiver> b = new CopyOnWriteArraySet();

        public final void a(PluginBroadcastReceiver pluginBroadcastReceiver) {
            if (pluginBroadcastReceiver != null) {
                ZeusLogger.i(ZeusLogger.TAG_RECEIVER, "plugin-receiver:" + pluginBroadcastReceiver.getClass().getSimpleName() + ",action=" + this.f1577a + "[注册完成]");
                this.b.add(pluginBroadcastReceiver);
            }
        }

        public final void a(Context context, Intent intent) {
            Set<PluginBroadcastReceiver> set = this.b;
            if (set == null || set.size() <= 0) {
                return;
            }
            for (PluginBroadcastReceiver pluginBroadcastReceiver : this.b) {
                if (pluginBroadcastReceiver != null) {
                    try {
                        pluginBroadcastReceiver.onReceive(context, intent);
                    } catch (Throwable th) {
                        ZeusLogger.w(ZeusLogger.TAG_RECEIVER, "plugin-receiver->action:" + (intent != null ? intent.getAction() : "") + "[exception]:", th);
                    }
                }
            }
        }
    }

    private c() {
    }

    public static c a() {
        if (d == null) {
            synchronized (com.bytedance.pangle.service.a.a.class) {
                if (d == null) {
                    d = new c();
                }
            }
        }
        return d;
    }

    public final void a(IntentFilter intentFilter, PluginBroadcastReceiver pluginBroadcastReceiver) {
        if (intentFilter == null || intentFilter.actionsIterator() == null) {
            return;
        }
        Iterator<String> itActionsIterator = intentFilter.actionsIterator();
        while (itActionsIterator.hasNext()) {
            String next = itActionsIterator.next();
            if (next != null) {
                a aVar = this.f1576a.get(next);
                if (aVar != null) {
                    aVar.a(pluginBroadcastReceiver);
                } else {
                    a aVar2 = new a();
                    aVar2.f1577a = next;
                    aVar2.a(pluginBroadcastReceiver);
                    this.f1576a.put(next, aVar2);
                }
            }
        }
    }

    public final void a(Context context, Intent intent) {
        a value;
        if (intent == null || intent.getAction() == null) {
            return;
        }
        String action = intent.getAction();
        Map<String, a> map = this.f1576a;
        if (map == null || map.size() <= 0) {
            return;
        }
        for (Map.Entry<String, a> entry : this.f1576a.entrySet()) {
            if (action.equals(entry.getKey()) && (value = entry.getValue()) != null) {
                ZeusLogger.d(ZeusLogger.TAG_RECEIVER, "action[" + action + "] match success ！ invoke onReceiver");
                value.a(context, intent);
            }
        }
    }
}
