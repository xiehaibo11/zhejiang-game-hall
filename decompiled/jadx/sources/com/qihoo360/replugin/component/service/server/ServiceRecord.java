package com.qihoo360.replugin.component.service.server;

import android.app.Service;
import android.content.ComponentName;
import android.content.Intent;
import android.content.pm.ServiceInfo;
import android.os.IBinder;
import com.qihoo360.replugin.utils.basic.ArrayMap;
import java.util.ArrayList;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
class ServiceRecord {
    final String className;
    final Intent.FilterComparison intent;
    final ComponentName name;
    ComponentName pitComponentName;
    final String plugin;
    Service service;
    final ServiceInfo serviceInfo;
    final String shortName;
    boolean startRequested;
    final ArrayMap<Intent.FilterComparison, IntentBindRecord> bindings = new ArrayMap<>();
    final ArrayMap<IBinder, ArrayList<ConnectionBindRecord>> connections = new ArrayMap<>();

    ServiceRecord(ComponentName componentName, Intent.FilterComparison filterComparison, ServiceInfo serviceInfo) {
        this.name = componentName;
        this.plugin = componentName.getPackageName();
        this.className = componentName.getClassName();
        this.shortName = this.name.flattenToShortString();
        this.intent = filterComparison;
        this.serviceInfo = serviceInfo;
    }

    public ProcessBindRecord retrieveAppBindingLocked(Intent intent, ProcessRecord processRecord) {
        Intent.FilterComparison filterComparison = new Intent.FilterComparison(intent);
        IntentBindRecord intentBindRecord = this.bindings.get(filterComparison);
        if (intentBindRecord == null) {
            intentBindRecord = new IntentBindRecord(this, filterComparison);
            this.bindings.put(filterComparison, intentBindRecord);
        }
        ProcessBindRecord processBindRecord = intentBindRecord.apps.get(processRecord);
        if (processBindRecord != null) {
            return processBindRecord;
        }
        ProcessBindRecord processBindRecord2 = new ProcessBindRecord(this, intentBindRecord, processRecord);
        intentBindRecord.apps.put(processRecord, processBindRecord2);
        return processBindRecord2;
    }

    public boolean hasAutoCreateConnections() {
        int size = this.connections.size() - 1;
        while (true) {
            if (size < 0) {
                return false;
            }
            ArrayList<ConnectionBindRecord> arrayListValueAt = this.connections.valueAt(size);
            for (int i = 0; i < arrayListValueAt.size(); i++) {
                if ((arrayListValueAt.get(i).flags & 1) != 0) {
                    return true;
                }
            }
            size--;
        }
    }

    public String toString() {
        if (("[srv=" + this.service) == null) {
            return "null";
        }
        return this.service.getClass().getName() + "; startRequested=" + this.startRequested + "; bindings=(" + this.bindings.size() + ") " + this.bindings + "]";
    }

    public String getPlugin() {
        return this.plugin;
    }

    public ComponentName getPitComponentName() {
        return this.pitComponentName;
    }

    public ServiceInfo getServiceInfo() {
        return this.serviceInfo;
    }
}
