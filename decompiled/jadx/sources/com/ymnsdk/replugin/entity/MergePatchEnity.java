package com.ymnsdk.replugin.entity;

import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class MergePatchEnity {
    Map<String, PluginInfo> pluginInfoMap;

    public Map<String, PluginInfo> getPatchInfo() {
        return this.pluginInfoMap;
    }

    public void setPatchInfo(Map<String, PluginInfo> map) {
        this.pluginInfoMap = map;
    }
}
