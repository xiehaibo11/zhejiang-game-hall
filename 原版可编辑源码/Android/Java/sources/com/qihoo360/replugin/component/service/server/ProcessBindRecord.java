package com.qihoo360.replugin.component.service.server;

import com.qihoo360.replugin.utils.basic.ArraySet;
import com.xiaomi.mipush.sdk.Constants;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class ProcessBindRecord {
    final ProcessRecord client;
    final ArraySet<ConnectionBindRecord> connections = new ArraySet<>();
    final IntentBindRecord intent;
    final ServiceRecord service;

    ProcessBindRecord(ServiceRecord serviceRecord, IntentBindRecord intentBindRecord, ProcessRecord processRecord) {
        this.service = serviceRecord;
        this.intent = intentBindRecord;
        this.client = processRecord;
    }

    public String toString() {
        return "ProcessBindRecord{" + Integer.toHexString(System.identityHashCode(this)) + " " + this.service.shortName + Constants.COLON_SEPARATOR + this.client.pid + "}";
    }
}
