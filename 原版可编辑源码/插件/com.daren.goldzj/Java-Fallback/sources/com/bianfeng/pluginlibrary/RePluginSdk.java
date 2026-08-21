package com.bianfeng.pluginlibrary;

import android.content.Context;

public class RePluginSdk {
    private static RePluginInterface pluginInterface;

    public RePluginSdk() {
    }

    static {
        pluginInterface = new RePluginInterface();
    }

    public void setPluginInterface(RePluginInterface r1) {
        pluginInterface = r1;
    }

    public RePluginInterface getPluginInterface() {
        return pluginInterface;
    }

    public static void onCreate(Context r1) {
        pluginInterface.onCreate(r1);
    }

    public static void closePlugin(String r1, boolean r2) {
        pluginInterface.closePlugin(r1, r2);
    }

    public static void invokeFuncNameandParameters(String r1, String r2) {
        pluginInterface.invokeFuncNameandParameters(r1, r2);
    }

    public static void mBindService(String r1) {
        pluginInterface.mBindService(r1);
    }

    public static void mUnBindService() {
        pluginInterface.mUnBindService();
    }

    public static void postToSepperllita(String r1) {
        pluginInterface.postToSepperllita(r1);
    }
}
