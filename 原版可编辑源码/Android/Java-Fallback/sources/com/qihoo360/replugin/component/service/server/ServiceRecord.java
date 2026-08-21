package com.qihoo360.replugin.component.service.server;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class ServiceRecord {
    final com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Intent.FilterComparison, com.qihoo360.replugin.component.service.server.IntentBindRecord> bindings;
    final java.lang.String className;
    final com.qihoo360.replugin.utils.basic.ArrayMap<android.os.IBinder, java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord>> connections;
    final android.content.Intent.FilterComparison intent;
    final android.content.ComponentName name;
    android.content.ComponentName pitComponentName;
    final java.lang.String plugin;
    android.app.Service service;
    final android.content.pm.ServiceInfo serviceInfo;
    final java.lang.String shortName;
    boolean startRequested;

    ServiceRecord(android.content.ComponentName r2, android.content.Intent.FilterComparison r3, android.content.pm.ServiceInfo r4) {
            r1 = this;
            r1.<init>()
            com.qihoo360.replugin.utils.basic.ArrayMap r0 = new com.qihoo360.replugin.utils.basic.ArrayMap
            r0.<init>()
            r1.bindings = r0
            com.qihoo360.replugin.utils.basic.ArrayMap r0 = new com.qihoo360.replugin.utils.basic.ArrayMap
            r0.<init>()
            r1.connections = r0
            r1.name = r2
            java.lang.String r0 = r2.getPackageName()
            r1.plugin = r0
            java.lang.String r2 = r2.getClassName()
            r1.className = r2
            android.content.ComponentName r2 = r1.name
            java.lang.String r2 = r2.flattenToShortString()
            r1.shortName = r2
            r1.intent = r3
            r1.serviceInfo = r4
            return
    }

    public android.content.ComponentName getPitComponentName() {
            r1 = this;
            android.content.ComponentName r0 = r1.pitComponentName
            return r0
    }

    public java.lang.String getPlugin() {
            r1 = this;
            java.lang.String r0 = r1.plugin
            return r0
    }

    public android.content.pm.ServiceInfo getServiceInfo() {
            r1 = this;
            android.content.pm.ServiceInfo r0 = r1.serviceInfo
            return r0
    }

    public boolean hasAutoCreateConnections() {
            r5 = this;
            com.qihoo360.replugin.utils.basic.ArrayMap<android.os.IBinder, java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord>> r0 = r5.connections
            int r0 = r0.size()
            r1 = 1
            int r0 = r0 - r1
        L8:
            r2 = 0
            if (r0 < 0) goto L2b
            com.qihoo360.replugin.utils.basic.ArrayMap<android.os.IBinder, java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord>> r3 = r5.connections
            java.lang.Object r3 = r3.valueAt(r0)
            java.util.ArrayList r3 = (java.util.ArrayList) r3
        L13:
            int r4 = r3.size()
            if (r2 >= r4) goto L28
            java.lang.Object r4 = r3.get(r2)
            com.qihoo360.replugin.component.service.server.ConnectionBindRecord r4 = (com.qihoo360.replugin.component.service.server.ConnectionBindRecord) r4
            int r4 = r4.flags
            r4 = r4 & r1
            if (r4 == 0) goto L25
            return r1
        L25:
            int r2 = r2 + 1
            goto L13
        L28:
            int r0 = r0 + (-1)
            goto L8
        L2b:
            return r2
    }

    public com.qihoo360.replugin.component.service.server.ProcessBindRecord retrieveAppBindingLocked(android.content.Intent r3, com.qihoo360.replugin.component.service.server.ProcessRecord r4) {
            r2 = this;
            android.content.Intent$FilterComparison r0 = new android.content.Intent$FilterComparison
            r0.<init>(r3)
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Intent$FilterComparison, com.qihoo360.replugin.component.service.server.IntentBindRecord> r3 = r2.bindings
            java.lang.Object r3 = r3.get(r0)
            com.qihoo360.replugin.component.service.server.IntentBindRecord r3 = (com.qihoo360.replugin.component.service.server.IntentBindRecord) r3
            if (r3 != 0) goto L19
            com.qihoo360.replugin.component.service.server.IntentBindRecord r3 = new com.qihoo360.replugin.component.service.server.IntentBindRecord
            r3.<init>(r2, r0)
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Intent$FilterComparison, com.qihoo360.replugin.component.service.server.IntentBindRecord> r1 = r2.bindings
            r1.put(r0, r3)
        L19:
            com.qihoo360.replugin.utils.basic.ArrayMap<com.qihoo360.replugin.component.service.server.ProcessRecord, com.qihoo360.replugin.component.service.server.ProcessBindRecord> r0 = r3.apps
            java.lang.Object r0 = r0.get(r4)
            com.qihoo360.replugin.component.service.server.ProcessBindRecord r0 = (com.qihoo360.replugin.component.service.server.ProcessBindRecord) r0
            if (r0 == 0) goto L24
            return r0
        L24:
            com.qihoo360.replugin.component.service.server.ProcessBindRecord r0 = new com.qihoo360.replugin.component.service.server.ProcessBindRecord
            r0.<init>(r2, r3, r4)
            com.qihoo360.replugin.utils.basic.ArrayMap<com.qihoo360.replugin.component.service.server.ProcessRecord, com.qihoo360.replugin.component.service.server.ProcessBindRecord> r3 = r3.apps
            r3.put(r4, r0)
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[srv="
            r0.append(r1)
            android.app.Service r1 = r2.service
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            if (r0 != 0) goto L18
            java.lang.String r0 = "null"
            goto L55
        L18:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.app.Service r1 = r2.service
            java.lang.Class r1 = r1.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = "; startRequested="
            r0.append(r1)
            boolean r1 = r2.startRequested
            r0.append(r1)
            java.lang.String r1 = "; bindings=("
            r0.append(r1)
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Intent$FilterComparison, com.qihoo360.replugin.component.service.server.IntentBindRecord> r1 = r2.bindings
            int r1 = r1.size()
            r0.append(r1)
            java.lang.String r1 = ") "
            r0.append(r1)
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Intent$FilterComparison, com.qihoo360.replugin.component.service.server.IntentBindRecord> r1 = r2.bindings
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
        L55:
            return r0
    }
}
