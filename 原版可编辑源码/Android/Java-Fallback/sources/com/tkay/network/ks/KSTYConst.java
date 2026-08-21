package com.tkay.network.ks;

public class KSTYConst {
    public static final int NETWORK_FIRM_ID = 28;
    public static final java.lang.String REWARDEDVIDEO_SKIP_AFTER_THIRTY_SECOND = "KS_RV_SKIP_AFTER_THIRTY_SECOND";

    public static class DEBUGGER_CONFIG {
        public static final int KS_NATIVE_DRAW = 200;
        public static final int KS_NATIVE_SELF_RENDER = 101;
        public static final int KS_NATIVE_TEMPLATE = 102;
        public static final int KS_NETWORK = 28;

        public DEBUGGER_CONFIG() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public KSTYConst() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getNetworkVersion() {
            java.lang.String r0 = com.kwad.sdk.api.KsAdSDK.getSDKVersion()     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            java.lang.String r0 = ""
            return r0
    }
}
