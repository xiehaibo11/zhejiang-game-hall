package com.tkay.network.gdt;

public class GDTTYConst {
    public static final java.lang.String AD_HEIGHT = "gdtad_height";
    public static final int NETWORK_FIRM_ID = 8;
    protected static final java.lang.String a = "299";

    public static class DEBUGGER_CONFIG {
        public static final int GDT_INTERSTITIAL = 1;
        public static final int GDT_INTERSTITIAL_FULL_SCREEN = 2;
        public static final int GDT_NATIVE_DRAW_SELF_RENDER = 4;
        public static final int GDT_NATIVE_DRAW_TEMPLATE = 3;
        public static final int GDT_NATIVE_SELF_RENDER = 2;
        public static final int GDT_NATIVE_TEMPLATE = 1;
        public static final int GDT_NETWORK = 8;

        public DEBUGGER_CONFIG() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public GDTTYConst() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getNetworkVersion() {
            java.lang.String r0 = com.qq.e.comm.managers.status.SDKStatus.getIntegrationSDKVersion()     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            java.lang.String r0 = ""
            return r0
    }
}
