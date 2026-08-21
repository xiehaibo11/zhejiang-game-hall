package com.ymnsdk.replugin.entity;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginInfo {
    private java.lang.String description;
    private java.lang.String entrance_activity;
    private java.lang.String file_md5;
    private long file_size;
    private java.util.List<java.lang.String> md5List;
    private java.lang.String package_name;
    private java.util.List<com.ymnsdk.replugin.entity.Patch> patch;
    private java.lang.String plugin_id;
    private java.lang.String plugin_version;
    private java.lang.String release_path;

    public PluginInfo() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.md5List = r0
            return
    }

    public java.lang.String getDescription() {
            r1 = this;
            java.lang.String r0 = r1.description
            return r0
    }

    public java.lang.String getEntrance_activity() {
            r1 = this;
            java.lang.String r0 = r1.entrance_activity
            return r0
    }

    public java.lang.String getFile_md5() {
            r1 = this;
            java.lang.String r0 = r1.file_md5
            return r0
    }

    public long getFile_size() {
            r2 = this;
            long r0 = r2.file_size
            return r0
    }

    public java.util.List<java.lang.String> getMd5List() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.md5List
            return r0
    }

    public java.lang.String getPackage_name() {
            r1 = this;
            java.lang.String r0 = r1.package_name
            return r0
    }

    public com.ymnsdk.replugin.entity.Patch getPatch(java.lang.String r3) {
            r2 = this;
            java.util.List<com.ymnsdk.replugin.entity.Patch> r0 = r2.patch
            if (r0 == 0) goto L31
            int r0 = r0.size()
            if (r0 <= 0) goto L31
            r0 = 0
        Lb:
            java.util.List<com.ymnsdk.replugin.entity.Patch> r1 = r2.patch
            int r1 = r1.size()
            if (r0 >= r1) goto L31
            java.util.List<com.ymnsdk.replugin.entity.Patch> r1 = r2.patch
            java.lang.Object r1 = r1.get(r0)
            com.ymnsdk.replugin.entity.Patch r1 = (com.ymnsdk.replugin.entity.Patch) r1
            java.lang.String r1 = r1.getFrom_version()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L2e
            java.util.List<com.ymnsdk.replugin.entity.Patch> r3 = r2.patch
            java.lang.Object r3 = r3.get(r0)
            com.ymnsdk.replugin.entity.Patch r3 = (com.ymnsdk.replugin.entity.Patch) r3
            return r3
        L2e:
            int r0 = r0 + 1
            goto Lb
        L31:
            com.ymnsdk.replugin.entity.Patch r3 = new com.ymnsdk.replugin.entity.Patch
            r3.<init>()
            return r3
    }

    public java.util.List<com.ymnsdk.replugin.entity.Patch> getPatch() {
            r1 = this;
            java.util.List<com.ymnsdk.replugin.entity.Patch> r0 = r1.patch
            return r0
    }

    public java.lang.String getPlugin_id() {
            r1 = this;
            java.lang.String r0 = r1.plugin_id
            return r0
    }

    public java.lang.String getPlugin_version() {
            r1 = this;
            java.lang.String r0 = r1.plugin_version
            return r0
    }

    public java.lang.String getRelease_path() {
            r1 = this;
            java.lang.String r0 = r1.release_path
            return r0
    }

    public void setDescription(java.lang.String r1) {
            r0 = this;
            r0.description = r1
            return
    }

    public void setEntrance_activity(java.lang.String r1) {
            r0 = this;
            r0.entrance_activity = r1
            return
    }

    public void setFile_md5(java.lang.String r1) {
            r0 = this;
            r0.file_md5 = r1
            return
    }

    public void setFile_size(long r1) {
            r0 = this;
            r0.file_size = r1
            return
    }

    public void setMd5List(java.util.List<java.lang.String> r1) {
            r0 = this;
            r0.md5List = r1
            return
    }

    public void setPackage_name(java.lang.String r1) {
            r0 = this;
            r0.package_name = r1
            return
    }

    public void setPatch(java.util.List<com.ymnsdk.replugin.entity.Patch> r1) {
            r0 = this;
            r0.patch = r1
            return
    }

    public void setPlugin_id(java.lang.String r1) {
            r0 = this;
            r0.plugin_id = r1
            return
    }

    public void setPlugin_version(java.lang.String r1) {
            r0 = this;
            r0.plugin_version = r1
            return
    }

    public void setRelease_path(java.lang.String r1) {
            r0 = this;
            r0.release_path = r1
            return
    }
}
