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

    public com.bianfeng.ymnsdk.entity.PluginConfig.PluginInfo getInfo(com.bianfeng.ymnsdk.feature.protocol.IPlugin r7) {
            r6 = this;
            com.bianfeng.ymnsdk.entity.PluginConfig r0 = r6.pluginConfig
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.util.List r0 = r0.getPluginInfos()
            if (r0 != 0) goto Ld
            return r1
        Ld:
            java.util.Iterator r2 = r0.iterator()
        L11:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L3c
            java.lang.Object r3 = r2.next()
            com.bianfeng.ymnsdk.entity.PluginConfig$PluginInfo r3 = (com.bianfeng.ymnsdk.entity.PluginConfig.PluginInfo) r3
            java.lang.Class r4 = r7.getClass()
            java.lang.String r4 = r4.getName()
            java.lang.String r5 = r3.name
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L2e
            return r3
        L2e:
            java.lang.String r4 = r7.getPluginName()
            java.lang.String r5 = r3.name
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L3b
            return r3
        L3b:
            goto L11
        L3c:
            return r1
    }

    public com.bianfeng.ymnsdk.entity.PluginConfig getPluginConfig() {
            r1 = this;
            com.bianfeng.ymnsdk.entity.PluginConfig r0 = r1.pluginConfig
            return r0
    }

    public int getState(com.bianfeng.ymnsdk.feature.protocol.IPlugin r3) {
            r2 = this;
            com.bianfeng.ymnsdk.entity.PluginConfig$PluginInfo r0 = r2.getInfo(r3)
            if (r0 != 0) goto L8
            r1 = -2
            return r1
        L8:
            int r1 = r0.status
            return r1
    }

    public void setPluginConfig(com.bianfeng.ymnsdk.entity.PluginConfig r1) {
            r0 = this;
            r0.pluginConfig = r1
            return
    }
}
