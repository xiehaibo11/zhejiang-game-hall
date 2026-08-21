package com.qihoo360.replugin.component.service.server;

import android.os.Messenger;
import java.util.ArrayList;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class ProcessRecord {
    final Messenger client;
    final ArrayList<ConnectionBindRecord> connections = new ArrayList<>();
    final int pid;
    private String stringName;

    ProcessRecord(int i, Messenger messenger) {
        this.pid = i;
        this.client = messenger;
    }

    public String toString() {
        String str = this.stringName;
        if (str != null) {
            return str;
        }
        StringBuilder sb = new StringBuilder(128);
        sb.append("ProcessRecord{");
        sb.append(Integer.toHexString(System.identityHashCode(this)));
        sb.append(" p");
        sb.append(this.pid);
        sb.append('}');
        String string = sb.toString();
        this.stringName = string;
        return string;
    }
}
