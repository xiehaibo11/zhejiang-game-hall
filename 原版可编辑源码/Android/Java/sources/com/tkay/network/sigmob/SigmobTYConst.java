package com.tkay.network.sigmob;

import com.sigmob.windad.WindAds;

public class SigmobTYConst {
    public static final String IS_USE_REWARDED_VIDEO_AS_INTERSTITIAL = "is_use_rewarded_video_as_interstitial";
    public static final int NETWORK_FIRM_ID = 29;

    public static class DEBUGGER_CONFIG {
        public static final int Sigmob_NETWORK = 29;
    }

    public static String getNetworkVersion() {
        try {
            return WindAds.getVersion();
        } catch (Throwable th) {
            th.printStackTrace();
            return "";
        }
    }
}
