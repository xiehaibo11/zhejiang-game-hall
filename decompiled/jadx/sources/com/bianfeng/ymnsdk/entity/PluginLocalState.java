package com.bianfeng.ymnsdk.entity;

import com.bianfeng.ymnsdk.entity.PluginConfig;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class PluginLocalState extends LocalState {
    private PluginConfig pluginConfig;

    public PluginConfig getPluginConfig() {
        return this.pluginConfig;
    }

    public void setPluginConfig(PluginConfig pluginConfig) {
        this.pluginConfig = pluginConfig;
    }

    public PluginLocalState() {
    }

    public PluginLocalState(PluginConfig pluginConfig) {
        this.pluginConfig = pluginConfig;
    }

    public int getState(IPlugin plugin) {
        PluginConfig.PluginInfo info = getInfo(plugin);
        if (info == null) {
            return -2;
        }
        return info.status;
    }

    public PluginConfig.PluginInfo getInfo(IPlugin plugin) {
        List<PluginConfig.PluginInfo> infos;
        PluginConfig pluginConfig = this.pluginConfig;
        if (pluginConfig == null || (infos = pluginConfig.getPluginInfos()) == null) {
            return null;
        }
        for (PluginConfig.PluginInfo info : infos) {
            if (plugin.getClass().getName().equals(info.name)) {
                return info;
            }
            if (plugin.getPluginName().equals(info.name)) {
                return info;
            }
        }
        return null;
    }
}
