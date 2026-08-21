package com.qq.e.comm.managers;

public interface IGDTAdManager {
    java.lang.String getBuyerId(java.util.Map<java.lang.String, java.lang.Object> r1);

    com.qq.e.comm.managers.devtool.DevTools getDevTools();

    java.lang.String getSDKInfo(java.lang.String r1);

    int showOpenOrInstallAppDialog(com.qq.e.ads.dfa.GDTAppDialogClickListener r1);
}
