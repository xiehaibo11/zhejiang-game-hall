package com.bianfeng.replugincore;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.APPLICATION, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class RepluginCoreInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper {
    private static final java.lang.String CHECK_HAS_REPLUGIN = "check_has_core_replugin";
    private static final int HAS_REPLUGIN = 139000;

    public RepluginCoreInterface() {
            r0 = this;
            r0.<init>()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "check_has_core_replugin")
    public void checkHasReplugin() {
            r2 = this;
            r0 = 139000(0x21ef8, float:1.9478E-40)
            java.lang.String r1 = "存在corereplugin"
            r2.sendResult(r0, r1)
            return
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = "140"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "replugincore"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 29
            return r0
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "2.2.6"
            return r0
    }

    @Override
    public void onInit(android.content.Context r1) {
            r0 = this;
            super.onInit(r1)
            return
    }
}
