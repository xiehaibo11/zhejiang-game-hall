package com.bianfeng.ymnsdk.entity;

import com.bianfeng.ymnsdk.entity.PluginConfig;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import java.util.Iterator;
import java.util.List;

public class PluginLocalState extends LocalState {
    private PluginConfig pluginConfig;

    public PluginLocalState() {
    }

    public PluginConfig.PluginInfo getInfo(IPlugin r6) {
        PluginConfig r0 = this.pluginConfig;
        if (r0 != null) goto L5;
        return null;
    L5:
        List<PluginConfig.PluginInfo> r02 = r0.getPluginInfos();
        if (r02 != null) goto L8;
        return null;
    L8:
        Iterator<PluginConfig.PluginInfo> r03 = r02.iterator();
    L10:
        if (r03.hasNext() == false) goto L17;
        PluginConfig.PluginInfo r2 = r03.next();
        if (r6.getClass().getName().equals(r2.name) == true) goto L13;
        if (r6.getPluginName().equals(r2.name) == false) goto L10;
        return r2;
    L13:
        return r2;
    L17:
        return null;
    }

    public PluginConfig getPluginConfig() {
        return this.pluginConfig;
    }

    public int getState(IPlugin r1) {
        PluginConfig.PluginInfo r12 = getInfo(r1);
        if (r12 != null) goto L7;
        return -2;
    L7:
        return r12.status;
    }

    public void setPluginConfig(PluginConfig r1) {
        this.pluginConfig = r1;
    }

    public PluginLocalState(PluginConfig r1) {
        this.pluginConfig = r1;
    }
}
