package com.tkay.network.sigmob;

public class SigmobTYConst {
    public static final java.lang.String IS_USE_REWARDED_VIDEO_AS_INTERSTITIAL = "is_use_rewarded_video_as_interstitial";
    public static final int NETWORK_FIRM_ID = 29;

    public static class DEBUGGER_CONFIG {
        public static final int Sigmob_NETWORK = 29;

        public DEBUGGER_CONFIG() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public SigmobTYConst() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getNetworkVersion() {
            java.lang.String r0 = com.sigmob.windad.WindAds.getVersion()     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = ""
            return r0
    }
}
