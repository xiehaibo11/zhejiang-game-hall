package com.bianfeng.pluginlibrary;

import android.content.Context;

public class RePluginSdk {
    private static RePluginInterface pluginInterface = new RePluginInterface();

    public void setPluginInterface(RePluginInterface rePluginInterface) {
        pluginInterface = rePluginInterface;
    }

    public RePluginInterface getPluginInterface() {
        return pluginInterface;
    }

    public static void onCreate(Context context) {
        pluginInterface.onCreate(context);
    }

    public static void closePlugin(String str, boolean z) {
        pluginInterface.closePlugin(str, z);
    }

    public static void invokeFuncNameandParameters(String str, String str2) {
        pluginInterface.invokeFuncNameandParameters(str, str2);
    }

    public static void mBindService(String str) {
        pluginInterface.mBindService(str);
    }

    public static void mUnBindService() {
        pluginInterface.mUnBindService();
    }

    public static void postToSepperllita(String str) {
        pluginInterface.postToSepperllita(str);
    }
}
