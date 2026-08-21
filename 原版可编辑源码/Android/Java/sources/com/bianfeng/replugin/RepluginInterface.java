package com.bianfeng.replugin;

import android.content.Context;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;

@YPlugin(entrance = YPlugin.Entrance.APPLICATION, strategy = YPlugin.Policy.FORCE)
public class RepluginInterface extends YmnPluginWrapper {
    private static final String CHECK_HAS_REPLUGIN = "check_has_replugin";
    private static final int HAS_REPLUGIN = 139000;

    @Override
    public String getPluginId() {
        return "139";
    }

    @Override
    public String getPluginName() {
        return "replugin";
    }

    @Override
    public int getPluginVersion() {
        return 8;
    }

    @Override
    public String getSdkVersion() {
        return "2.0.0";
    }

    @Override
    public void onInit(Context context) {
        super.onInit(context);
    }

    @YFunction(name = CHECK_HAS_REPLUGIN)
    public void checkHasReplugin() {
        sendResult(139000, "存在replugin");
    }
}
