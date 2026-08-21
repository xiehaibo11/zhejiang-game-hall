package com.ymnsdk.replugin.entity;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginState {
    private java.util.List<java.lang.String> allow_versions;
    private int is_in_maintenance;
    private java.lang.String maintenance_reason;

    public PluginState() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.util.List<java.lang.String> getAllow_versions() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.allow_versions
            return r0
    }

    public int getIs_in_maintenance() {
            r1 = this;
            int r0 = r1.is_in_maintenance
            return r0
    }

    public java.lang.String getMaintenance_reason() {
            r1 = this;
            java.lang.String r0 = r1.maintenance_reason
            return r0
    }

    public void setAllow_versions(java.util.List<java.lang.String> r1) {
            r0 = this;
            r0.allow_versions = r1
            return
    }

    public void setIs_in_maintenance(int r1) {
            r0 = this;
            r0.is_in_maintenance = r1
            return
    }

    public void setMaintenance_reason(java.lang.String r1) {
            r0 = this;
            r0.maintenance_reason = r1
            return
    }
}
