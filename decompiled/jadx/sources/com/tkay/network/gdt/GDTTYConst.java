package com.tkay.network.gdt;

import com.qq.e.comm.managers.status.SDKStatus;

/* JADX INFO: loaded from: classes3.dex */
public class GDTTYConst {
    public static final String AD_HEIGHT = "gdtad_height";
    public static final int NETWORK_FIRM_ID = 8;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected static final String f7550a = "299";

    public static class DEBUGGER_CONFIG {
        public static final int GDT_INTERSTITIAL = 1;
        public static final int GDT_INTERSTITIAL_FULL_SCREEN = 2;
        public static final int GDT_NATIVE_DRAW_SELF_RENDER = 4;
        public static final int GDT_NATIVE_DRAW_TEMPLATE = 3;
        public static final int GDT_NATIVE_SELF_RENDER = 2;
        public static final int GDT_NATIVE_TEMPLATE = 1;
        public static final int GDT_NETWORK = 8;
    }

    public static String getNetworkVersion() {
        try {
            return SDKStatus.getIntegrationSDKVersion();
        } catch (Throwable unused) {
            return "";
        }
    }
}
