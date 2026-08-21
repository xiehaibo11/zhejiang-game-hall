package com.ymnsdk.replugin.entity;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class AppPluginInfo {
    int patch_download_in_nowifi;
    java.util.List<com.ymnsdk.replugin.entity.Plugin> plugins;
    int post_statistics_enabled;
    java.util.List<java.lang.String> update_server_address;

    public AppPluginInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    public int getPatch_download_in_nowifi() {
            r1 = this;
            int r0 = r1.patch_download_in_nowifi
            return r0
    }

    public com.ymnsdk.replugin.entity.Plugin getPlugin(java.lang.String r3) {
            r2 = this;
            java.util.List<com.ymnsdk.replugin.entity.Plugin> r0 = r2.plugins
            if (r0 == 0) goto L31
            int r0 = r0.size()
            if (r0 <= 0) goto L31
            r0 = 0
        Lb:
            java.util.List<com.ymnsdk.replugin.entity.Plugin> r1 = r2.plugins
            int r1 = r1.size()
            if (r0 >= r1) goto L31
            java.util.List<com.ymnsdk.replugin.entity.Plugin> r1 = r2.plugins
            java.lang.Object r1 = r1.get(r0)
            com.ymnsdk.replugin.entity.Plugin r1 = (com.ymnsdk.replugin.entity.Plugin) r1
            java.lang.String r1 = r1.getId()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L2e
            java.util.List<com.ymnsdk.replugin.entity.Plugin> r3 = r2.plugins
            java.lang.Object r3 = r3.get(r0)
            com.ymnsdk.replugin.entity.Plugin r3 = (com.ymnsdk.replugin.entity.Plugin) r3
            return r3
        L2e:
            int r0 = r0 + 1
            goto Lb
        L31:
            com.ymnsdk.replugin.entity.Plugin r3 = new com.ymnsdk.replugin.entity.Plugin
            r3.<init>()
            return r3
    }

    public java.util.List<com.ymnsdk.replugin.entity.Plugin> getPlugins() {
            r1 = this;
            java.util.List<com.ymnsdk.replugin.entity.Plugin> r0 = r1.plugins
            return r0
    }

    public int getPost_statistics_enabled() {
            r1 = this;
            int r0 = r1.post_statistics_enabled
            return r0
    }

    public java.util.List<java.lang.String> getUpdate_server_address() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.update_server_address
            return r0
    }

    public void setPatch_download_in_nowifi(int r1) {
            r0 = this;
            r0.patch_download_in_nowifi = r1
            return
    }

    public void setPlugins(java.util.List<com.ymnsdk.replugin.entity.Plugin> r1) {
            r0 = this;
            r0.plugins = r1
            return
    }

    public void setPost_statistics_enabled(int r1) {
            r0 = this;
            r0.post_statistics_enabled = r1
            return
    }

    public void setUpdate_server_address(java.util.List<java.lang.String> r1) {
            r0 = this;
            r0.update_server_address = r1
            return
    }
}
