package com.bianfeng.ymnsdk.entity;

import com.bianfeng.ymnsdk.entity.PluginConfig;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import java.util.Iterator;
import java.util.List;

public class PluginLocalState extends LocalState {
    private PluginConfig pluginConfig;

    public PluginLocalState() {
    }

    public PluginConfig.PluginInfo getInfo(IPlugin iPlugin) {
        List<PluginConfig.PluginInfo> pluginInfos;
        PluginConfig pluginConfig = this.pluginConfig;
        if (pluginConfig == null || (pluginInfos = pluginConfig.getPluginInfos()) == null) {
            return null;
        }
        Iterator<PluginConfig.PluginInfo> it = pluginInfos.iterator();
        while (it.hasNext()) {
            PluginConfig.PluginInfo next = it.next();
            if (iPlugin.getClass().getName().equals(next.name) || iPlugin.getPluginName().equals(next.name)) {
                return next;
            }
        }
        return null;
    }

    public PluginConfig getPluginConfig() {
        return this.pluginConfig;
    }

    public int getState(IPlugin iPlugin) {
        PluginConfig.PluginInfo info = getInfo(iPlugin);
        if (info == null) {
            return -2;
        }
        return info.status;
    }

    public void setPluginConfig(PluginConfig pluginConfig) {
        this.pluginConfig = pluginConfig;
    }

    public PluginLocalState(PluginConfig pluginConfig) {
        this.pluginConfig = pluginConfig;
    }
}
