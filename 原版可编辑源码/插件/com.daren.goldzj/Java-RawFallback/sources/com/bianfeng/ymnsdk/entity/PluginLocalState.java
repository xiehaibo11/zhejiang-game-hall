package com.bianfeng.ymnsdk.entity;

public class PluginLocalState extends com.bianfeng.ymnsdk.entity.LocalState {
    private com.bianfeng.ymnsdk.entity.PluginConfig pluginConfig;

    public PluginLocalState() {
            r0 = this;
            r0.<init>()
            return
    }

    public PluginLocalState(com.bianfeng.ymnsdk.entity.PluginConfig r1) {
            r0 = this;
            r0.<init>()
            r0.pluginConfig = r1
            return
    }

    public com.bianfeng.ymnsdk.entity.PluginConfig.PluginInfo getInfo(com.bianfeng.ymnsdk.feature.protocol.IPlugin r6) {
            r5 = this;
            com.bianfeng.ymnsdk.entity.PluginConfig r0 = r5.pluginConfig
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.util.List r0 = r0.getPluginInfos()
            if (r0 != 0) goto Ld
            return r1
        Ld:
            java.util.Iterator r0 = r0.iterator()
        L11:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L3b
            java.lang.Object r2 = r0.next()
            com.bianfeng.ymnsdk.entity.PluginConfig$PluginInfo r2 = (com.bianfeng.ymnsdk.entity.PluginConfig.PluginInfo) r2
            java.lang.Class r3 = r6.getClass()
            java.lang.String r3 = r3.getName()
            java.lang.String r4 = r2.name
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L2e
            return r2
        L2e:
            java.lang.String r3 = r6.getPluginName()
            java.lang.String r4 = r2.name
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L11
            return r2
        L3b:
            return r1
    }

    public com.bianfeng.ymnsdk.entity.PluginConfig getPluginConfig() {
            r1 = this;
            com.bianfeng.ymnsdk.entity.PluginConfig r0 = r1.pluginConfig
            return r0
    }

    public int getState(com.bianfeng.ymnsdk.feature.protocol.IPlugin r1) {
            r0 = this;
            com.bianfeng.ymnsdk.entity.PluginConfig$PluginInfo r1 = r0.getInfo(r1)
            if (r1 != 0) goto L8
            r1 = -2
            return r1
        L8:
            int r1 = r1.status
            return r1
    }

    public void setPluginConfig(com.bianfeng.ymnsdk.entity.PluginConfig r1) {
            r0 = this;
            r0.pluginConfig = r1
            return
    }
}
