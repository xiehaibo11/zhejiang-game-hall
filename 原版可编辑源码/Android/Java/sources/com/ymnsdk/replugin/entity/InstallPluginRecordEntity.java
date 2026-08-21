package com.ymnsdk.replugin.entity;

import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class InstallPluginRecordEntity {
    Map<String, Boolean> downloadRecord;

    public Map<String, Boolean> getDownloadRecord() {
        return this.downloadRecord;
    }

    public void setDownloadRecord(Map<String, Boolean> map) {
        this.downloadRecord = map;
    }
}
