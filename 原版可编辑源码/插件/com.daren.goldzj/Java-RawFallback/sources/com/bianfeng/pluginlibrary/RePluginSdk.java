package com.bianfeng.pluginlibrary;

public class RePluginSdk {
    private static com.bianfeng.pluginlibrary.RePluginInterface pluginInterface;

    static {
            com.bianfeng.pluginlibrary.RePluginInterface r0 = new com.bianfeng.pluginlibrary.RePluginInterface
            r0.<init>()
            com.bianfeng.pluginlibrary.RePluginSdk.pluginInterface = r0
            return
    }

    public RePluginSdk() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void closePlugin(java.lang.String r1, boolean r2) {
            com.bianfeng.pluginlibrary.RePluginInterface r0 = com.bianfeng.pluginlibrary.RePluginSdk.pluginInterface
            r0.closePlugin(r1, r2)
            return
    }

    public static void invokeFuncNameandParameters(java.lang.String r1, java.lang.String r2) {
            com.bianfeng.pluginlibrary.RePluginInterface r0 = com.bianfeng.pluginlibrary.RePluginSdk.pluginInterface
            r0.invokeFuncNameandParameters(r1, r2)
            return
    }

    public static void mBindService(java.lang.String r1) {
            com.bianfeng.pluginlibrary.RePluginInterface r0 = com.bianfeng.pluginlibrary.RePluginSdk.pluginInterface
            r0.mBindService(r1)
            return
    }

    public static void mUnBindService() {
            com.bianfeng.pluginlibrary.RePluginInterface r0 = com.bianfeng.pluginlibrary.RePluginSdk.pluginInterface
            r0.mUnBindService()
            return
    }

    public static void onCreate(android.content.Context r1) {
            com.bianfeng.pluginlibrary.RePluginInterface r0 = com.bianfeng.pluginlibrary.RePluginSdk.pluginInterface
            r0.onCreate(r1)
            return
    }

    public static void postToSepperllita(java.lang.String r1) {
            com.bianfeng.pluginlibrary.RePluginInterface r0 = com.bianfeng.pluginlibrary.RePluginSdk.pluginInterface
            r0.postToSepperllita(r1)
            return
    }

    public com.bianfeng.pluginlibrary.RePluginInterface getPluginInterface() {
            r1 = this;
            com.bianfeng.pluginlibrary.RePluginInterface r0 = com.bianfeng.pluginlibrary.RePluginSdk.pluginInterface
            return r0
    }

    public void setPluginInterface(com.bianfeng.pluginlibrary.RePluginInterface r1) {
            r0 = this;
            com.bianfeng.pluginlibrary.RePluginSdk.pluginInterface = r1
            return
    }
}
