package com.bytedance.pangle.activity;

public interface IPluginActivity {
    void _requestPermissions(java.lang.String[] r1, int r2);

    void attachBaseContext(android.content.Context r1);

    java.lang.String getPluginPkgName();

    void onCreate(android.os.Bundle r1);

    void setPluginProxyActivity(com.bytedance.pangle.activity.b r1, com.bytedance.pangle.plugin.Plugin r2);

    void setProxyTheme2Plugin(int r1);
}
