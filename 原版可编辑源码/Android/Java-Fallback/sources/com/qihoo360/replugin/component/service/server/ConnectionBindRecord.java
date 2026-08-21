package com.qihoo360.replugin.component.service.server;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class ConnectionBindRecord {
    final com.qihoo360.replugin.component.service.server.ProcessBindRecord binding;
    final com.qihoo360.loader2.mgr.IServiceConnection conn;
    final int flags;
    boolean serviceDead;
    private java.lang.String stringName;

    ConnectionBindRecord(com.qihoo360.replugin.component.service.server.ProcessBindRecord r1, com.qihoo360.loader2.mgr.IServiceConnection r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.binding = r1
            r0.conn = r2
            r0.flags = r3
            return
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.String r0 = r4.stringName
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 128(0x80, float:1.8E-43)
            r0.<init>(r1)
            java.lang.String r2 = "ConnectionBindRecord{"
            r0.append(r2)
            int r2 = java.lang.System.identityHashCode(r4)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            r0.append(r2)
            java.lang.String r2 = " p"
            r0.append(r2)
            com.qihoo360.replugin.component.service.server.ProcessBindRecord r2 = r4.binding
            com.qihoo360.replugin.component.service.server.ProcessRecord r2 = r2.client
            int r2 = r2.pid
            r0.append(r2)
            r2 = 32
            r0.append(r2)
            int r3 = r4.flags
            r3 = r3 & 1
            if (r3 == 0) goto L3a
            java.lang.String r3 = "CR "
            r0.append(r3)
        L3a:
            int r3 = r4.flags
            r3 = r3 & 2
            if (r3 == 0) goto L45
            java.lang.String r3 = "DBG "
            r0.append(r3)
        L45:
            int r3 = r4.flags
            r3 = r3 & 4
            if (r3 == 0) goto L50
            java.lang.String r3 = "!FG "
            r0.append(r3)
        L50:
            int r3 = r4.flags
            r3 = r3 & 8
            if (r3 == 0) goto L5b
            java.lang.String r3 = "ABCLT "
            r0.append(r3)
        L5b:
            int r3 = r4.flags
            r3 = r3 & 16
            if (r3 == 0) goto L66
            java.lang.String r3 = "OOM "
            r0.append(r3)
        L66:
            int r3 = r4.flags
            r2 = r2 & r3
            if (r2 == 0) goto L70
            java.lang.String r2 = "WPRI "
            r0.append(r2)
        L70:
            int r2 = r4.flags
            r2 = r2 & 64
            if (r2 == 0) goto L7b
            java.lang.String r2 = "IMP "
            r0.append(r2)
        L7b:
            int r2 = r4.flags
            r1 = r1 & r2
            if (r1 == 0) goto L85
            java.lang.String r1 = "WACT "
            r0.append(r1)
        L85:
            boolean r1 = r4.serviceDead
            if (r1 == 0) goto L8e
            java.lang.String r1 = "DEAD "
            r0.append(r1)
        L8e:
            com.qihoo360.replugin.component.service.server.ProcessBindRecord r1 = r4.binding
            com.qihoo360.replugin.component.service.server.ServiceRecord r1 = r1.service
            java.lang.String r1 = r1.shortName
            r0.append(r1)
            java.lang.String r1 = ":@"
            r0.append(r1)
            com.qihoo360.loader2.mgr.IServiceConnection r1 = r4.conn
            android.os.IBinder r1 = r1.asBinder()
            int r1 = java.lang.System.identityHashCode(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r4.stringName = r0
            return r0
    }
}
