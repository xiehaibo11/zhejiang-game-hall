package com.bianfeng.replugincore;

import android.content.Context;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;

/* JADX INFO: loaded from: classes.dex */
@YPlugin(entrance = YPlugin.Entrance.APPLICATION, strategy = YPlugin.Policy.FORCE)
public class RepluginCoreInterface extends YmnPluginWrapper {
    private static final String CHECK_HAS_REPLUGIN = "check_has_core_replugin";
    private static final int HAS_REPLUGIN = 139000;

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getPluginId() {
        return "140";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getPluginName() {
        return "replugincore";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public int getPluginVersion() {
        return 29;
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getSdkVersion() {
        return "2.2.6";
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper, com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void onInit(Context context) {
        super.onInit(context);
    }

    @YFunction(name = CHECK_HAS_REPLUGIN)
    public void checkHasReplugin() {
        sendResult(139000, "存在corereplugin");
    }
}
