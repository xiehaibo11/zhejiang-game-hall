package com.ymnsdk.replugin.entity;

import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class LocalUserDowningPluginsEntity {
    Map<String, PluginInfo> pluginInfoMap;

    public Map<String, PluginInfo> getPluginInfoMap() {
        return this.pluginInfoMap;
    }

    public void setPluginInfoMap(Map<String, PluginInfo> map) {
        this.pluginInfoMap = map;
    }
}
