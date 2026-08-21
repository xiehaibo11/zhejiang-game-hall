package com.qihoo360.replugin.component.service.server;

import android.content.Intent;
import android.os.IBinder;
import com.qihoo360.replugin.utils.basic.ArrayMap;
import com.qihoo360.replugin.utils.basic.ArraySet;
import cz.msebera.android.httpclient.message.TokenParser;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class IntentBindRecord {
    final ArrayMap<ProcessRecord, ProcessBindRecord> apps = new ArrayMap<>();
    IBinder binder;
    boolean hasBound;
    final Intent.FilterComparison intent;
    final ServiceRecord service;
    String stringName;

    IntentBindRecord(ServiceRecord serviceRecord, Intent.FilterComparison filterComparison) {
        this.service = serviceRecord;
        this.intent = filterComparison;
    }

    int collectFlags() {
        int i = 0;
        for (int size = this.apps.size() - 1; size >= 0; size--) {
            ArraySet<ConnectionBindRecord> arraySet = this.apps.valueAt(size).connections;
            for (int size2 = arraySet.size() - 1; size2 >= 0; size2--) {
                i |= arraySet.valueAt(size2).flags;
            }
        }
        return i;
    }

    public String toString() {
        String str = this.stringName;
        if (str != null) {
            return str;
        }
        StringBuilder sb = new StringBuilder(128);
        sb.append("IntentBindRecord{");
        sb.append(Integer.toHexString(System.identityHashCode(this)));
        sb.append(TokenParser.SP);
        if ((collectFlags() & 1) != 0) {
            sb.append("CR ");
        }
        sb.append(this.service.shortName);
        sb.append(':');
        Intent.FilterComparison filterComparison = this.intent;
        if (filterComparison != null) {
            sb.append(filterComparison.getIntent().toString());
        }
        sb.append(':');
        if (this.apps.size() > 0) {
            sb.append(this.apps.toString());
        }
        sb.append('}');
        String string = sb.toString();
        this.stringName = string;
        return string;
    }
}
