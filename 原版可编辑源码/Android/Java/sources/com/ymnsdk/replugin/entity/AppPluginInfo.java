package com.ymnsdk.replugin.entity;

import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class AppPluginInfo {
    int patch_download_in_nowifi;
    List<Plugin> plugins;
    int post_statistics_enabled;
    List<String> update_server_address;

    public Plugin getPlugin(String str) {
        List<Plugin> list = this.plugins;
        if (list != null && list.size() > 0) {
            for (int i = 0; i < this.plugins.size(); i++) {
                if (this.plugins.get(i).getId().equals(str)) {
                    return this.plugins.get(i);
                }
            }
        }
        return new Plugin();
    }

    public List<String> getUpdate_server_address() {
        return this.update_server_address;
    }

    public void setUpdate_server_address(List<String> list) {
        this.update_server_address = list;
    }

    public List<Plugin> getPlugins() {
        return this.plugins;
    }

    public void setPlugins(List<Plugin> list) {
        this.plugins = list;
    }

    public int getPost_statistics_enabled() {
        return this.post_statistics_enabled;
    }

    public void setPost_statistics_enabled(int i) {
        this.post_statistics_enabled = i;
    }

    public int getPatch_download_in_nowifi() {
        return this.patch_download_in_nowifi;
    }

    public void setPatch_download_in_nowifi(int i) {
        this.patch_download_in_nowifi = i;
    }
}
