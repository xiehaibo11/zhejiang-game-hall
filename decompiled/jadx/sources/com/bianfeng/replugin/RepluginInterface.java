package com.bianfeng.replugin;

import android.content.Context;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;

/* JADX INFO: loaded from: classes.dex */
@YPlugin(entrance = YPlugin.Entrance.APPLICATION, strategy = YPlugin.Policy.FORCE)
public class RepluginInterface extends YmnPluginWrapper {
    private static final String CHECK_HAS_REPLUGIN = "check_has_replugin";
    private static final int HAS_REPLUGIN = 139000;

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getPluginId() {
        return "139";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getPluginName() {
        return "replugin";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public int getPluginVersion() {
        return 8;
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getSdkVersion() {
        return "2.0.0";
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper, com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void onInit(Context context) {
        super.onInit(context);
    }

    @YFunction(name = CHECK_HAS_REPLUGIN)
    public void checkHasReplugin() {
        sendResult(139000, "存在replugin");
    }
}
