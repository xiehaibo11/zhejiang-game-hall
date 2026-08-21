package com.qihoo360.replugin.component.service.server;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class IntentBindRecord {
    final com.qihoo360.replugin.utils.basic.ArrayMap<com.qihoo360.replugin.component.service.server.ProcessRecord, com.qihoo360.replugin.component.service.server.ProcessBindRecord> apps;
    android.os.IBinder binder;
    boolean hasBound;
    final android.content.Intent.FilterComparison intent;
    final com.qihoo360.replugin.component.service.server.ServiceRecord service;
    java.lang.String stringName;

    IntentBindRecord(com.qihoo360.replugin.component.service.server.ServiceRecord r2, android.content.Intent.FilterComparison r3) {
            r1 = this;
            r1.<init>()
            com.qihoo360.replugin.utils.basic.ArrayMap r0 = new com.qihoo360.replugin.utils.basic.ArrayMap
            r0.<init>()
            r1.apps = r0
            r1.service = r2
            r1.intent = r3
            return
    }

    int collectFlags() {
            r5 = this;
            com.qihoo360.replugin.utils.basic.ArrayMap<com.qihoo360.replugin.component.service.server.ProcessRecord, com.qihoo360.replugin.component.service.server.ProcessBindRecord> r0 = r5.apps
            int r0 = r0.size()
            int r0 = r0 + (-1)
            r1 = 0
        L9:
            if (r0 < 0) goto L2c
            com.qihoo360.replugin.utils.basic.ArrayMap<com.qihoo360.replugin.component.service.server.ProcessRecord, com.qihoo360.replugin.component.service.server.ProcessBindRecord> r2 = r5.apps
            java.lang.Object r2 = r2.valueAt(r0)
            com.qihoo360.replugin.component.service.server.ProcessBindRecord r2 = (com.qihoo360.replugin.component.service.server.ProcessBindRecord) r2
            com.qihoo360.replugin.utils.basic.ArraySet<com.qihoo360.replugin.component.service.server.ConnectionBindRecord> r2 = r2.connections
            int r3 = r2.size()
            int r3 = r3 + (-1)
        L1b:
            if (r3 < 0) goto L29
            java.lang.Object r4 = r2.valueAt(r3)
            com.qihoo360.replugin.component.service.server.ConnectionBindRecord r4 = (com.qihoo360.replugin.component.service.server.ConnectionBindRecord) r4
            int r4 = r4.flags
            r1 = r1 | r4
            int r3 = r3 + (-1)
            goto L1b
        L29:
            int r0 = r0 + (-1)
            goto L9
        L2c:
            return r1
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.String r0 = r3.stringName
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 128(0x80, float:1.8E-43)
            r0.<init>(r1)
            java.lang.String r1 = "IntentBindRecord{"
            r0.append(r1)
            int r1 = java.lang.System.identityHashCode(r3)
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            r1 = 32
            r0.append(r1)
            int r1 = r3.collectFlags()
            r1 = r1 & 1
            if (r1 == 0) goto L2e
            java.lang.String r1 = "CR "
            r0.append(r1)
        L2e:
            com.qihoo360.replugin.component.service.server.ServiceRecord r1 = r3.service
            java.lang.String r1 = r1.shortName
            r0.append(r1)
            r1 = 58
            r0.append(r1)
            android.content.Intent$FilterComparison r2 = r3.intent
            if (r2 == 0) goto L49
            android.content.Intent r2 = r2.getIntent()
            java.lang.String r2 = r2.toString()
            r0.append(r2)
        L49:
            r0.append(r1)
            com.qihoo360.replugin.utils.basic.ArrayMap<com.qihoo360.replugin.component.service.server.ProcessRecord, com.qihoo360.replugin.component.service.server.ProcessBindRecord> r1 = r3.apps
            int r1 = r1.size()
            if (r1 <= 0) goto L5d
            com.qihoo360.replugin.utils.basic.ArrayMap<com.qihoo360.replugin.component.service.server.ProcessRecord, com.qihoo360.replugin.component.service.server.ProcessBindRecord> r1 = r3.apps
            java.lang.String r1 = r1.toString()
            r0.append(r1)
        L5d:
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.stringName = r0
            return r0
    }
}
