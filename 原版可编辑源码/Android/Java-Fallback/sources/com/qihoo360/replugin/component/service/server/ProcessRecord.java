package com.qihoo360.replugin.component.service.server;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class ProcessRecord {
    final android.os.Messenger client;
    final java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord> connections;
    final int pid;
    private java.lang.String stringName;

    ProcessRecord(int r2, android.os.Messenger r3) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.connections = r0
            r1.pid = r2
            r1.client = r3
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.String r0 = r2.stringName
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 128(0x80, float:1.8E-43)
            r0.<init>(r1)
            java.lang.String r1 = "ProcessRecord{"
            r0.append(r1)
            int r1 = java.lang.System.identityHashCode(r2)
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            java.lang.String r1 = " p"
            r0.append(r1)
            int r1 = r2.pid
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.stringName = r0
            return r0
    }
}
