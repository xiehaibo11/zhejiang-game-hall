package com.qihoo360.replugin.component.service.server;

import com.qihoo360.loader2.mgr.IServiceConnection;
import cz.msebera.android.httpclient.message.TokenParser;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
class ConnectionBindRecord {
    final ProcessBindRecord binding;
    final IServiceConnection conn;
    final int flags;
    boolean serviceDead;
    private String stringName;

    ConnectionBindRecord(ProcessBindRecord processBindRecord, IServiceConnection iServiceConnection, int i) {
        this.binding = processBindRecord;
        this.conn = iServiceConnection;
        this.flags = i;
    }

    public String toString() {
        String str = this.stringName;
        if (str != null) {
            return str;
        }
        StringBuilder sb = new StringBuilder(128);
        sb.append("ConnectionBindRecord{");
        sb.append(Integer.toHexString(System.identityHashCode(this)));
        sb.append(" p");
        sb.append(this.binding.client.pid);
        sb.append(TokenParser.SP);
        if ((this.flags & 1) != 0) {
            sb.append("CR ");
        }
        if ((this.flags & 2) != 0) {
            sb.append("DBG ");
        }
        if ((this.flags & 4) != 0) {
            sb.append("!FG ");
        }
        if ((this.flags & 8) != 0) {
            sb.append("ABCLT ");
        }
        if ((this.flags & 16) != 0) {
            sb.append("OOM ");
        }
        if ((32 & this.flags) != 0) {
            sb.append("WPRI ");
        }
        if ((this.flags & 64) != 0) {
            sb.append("IMP ");
        }
        if ((128 & this.flags) != 0) {
            sb.append("WACT ");
        }
        if (this.serviceDead) {
            sb.append("DEAD ");
        }
        sb.append(this.binding.service.shortName);
        sb.append(":@");
        sb.append(Integer.toHexString(System.identityHashCode(this.conn.asBinder())));
        sb.append('}');
        String string = sb.toString();
        this.stringName = string;
        return string;
    }
}
