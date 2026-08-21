package com.ymnsdk.replugin.entity;

import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginState {
    private List<String> allow_versions;
    private int is_in_maintenance;
    private String maintenance_reason;

    public int getIs_in_maintenance() {
        return this.is_in_maintenance;
    }

    public void setIs_in_maintenance(int i) {
        this.is_in_maintenance = i;
    }

    public String getMaintenance_reason() {
        return this.maintenance_reason;
    }

    public void setMaintenance_reason(String str) {
        this.maintenance_reason = str;
    }

    public List<String> getAllow_versions() {
        return this.allow_versions;
    }

    public void setAllow_versions(List<String> list) {
        this.allow_versions = list;
    }
}
