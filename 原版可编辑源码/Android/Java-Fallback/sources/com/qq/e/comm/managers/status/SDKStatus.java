package com.qq.e.comm.managers.status;

public class SDKStatus {
    public static final int SDK_CHANNEL = 1;
    public static final java.lang.String SDK_EX1 = "";
    public static final java.lang.String SDK_EX2 = "";
    public static final int STUB_IDENTITY = 1;
    public static final boolean isNoPlugin = false;

    public SDKStatus() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final int getBuildInPluginVersion() {
            r0 = 1381(0x565, float:1.935E-42)
            return r0
    }

    public static final java.lang.String getIntegrationSDKVersion() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "4.511."
            r0.append(r1)
            int r1 = getBuildInPluginVersion()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static final int getPluginVersion() {
            com.qq.e.comm.managers.b r0 = com.qq.e.comm.managers.b.b()
            boolean r0 = r0.d()
            if (r0 != 0) goto Lc
            r0 = 0
            return r0
        Lc:
            com.qq.e.comm.managers.b r0 = com.qq.e.comm.managers.b.b()
            com.qq.e.comm.managers.plugin.PM r0 = r0.c()
            int r0 = r0.getPluginVersion()
            return r0
    }

    public static final java.lang.String getSDKVersion() {
            java.lang.String r0 = "4.511"
            return r0
    }
}
