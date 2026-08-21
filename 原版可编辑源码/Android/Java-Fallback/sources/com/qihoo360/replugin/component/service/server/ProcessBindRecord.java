package com.qihoo360.replugin.component.service.server;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class ProcessBindRecord {
    final com.qihoo360.replugin.component.service.server.ProcessRecord client;
    final com.qihoo360.replugin.utils.basic.ArraySet<com.qihoo360.replugin.component.service.server.ConnectionBindRecord> connections;
    final com.qihoo360.replugin.component.service.server.IntentBindRecord intent;
    final com.qihoo360.replugin.component.service.server.ServiceRecord service;

    ProcessBindRecord(com.qihoo360.replugin.component.service.server.ServiceRecord r2, com.qihoo360.replugin.component.service.server.IntentBindRecord r3, com.qihoo360.replugin.component.service.server.ProcessRecord r4) {
            r1 = this;
            r1.<init>()
            com.qihoo360.replugin.utils.basic.ArraySet r0 = new com.qihoo360.replugin.utils.basic.ArraySet
            r0.<init>()
            r1.connections = r0
            r1.service = r2
            r1.intent = r3
            r1.client = r4
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ProcessBindRecord{"
            r0.append(r1)
            int r1 = java.lang.System.identityHashCode(r2)
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            java.lang.String r1 = " "
            r0.append(r1)
            com.qihoo360.replugin.component.service.server.ServiceRecord r1 = r2.service
            java.lang.String r1 = r1.shortName
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            com.qihoo360.replugin.component.service.server.ProcessRecord r1 = r2.client
            int r1 = r1.pid
            r0.append(r1)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
