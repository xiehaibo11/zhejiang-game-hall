package com.tkay.splashad.api;

public class TYSplashAdExtraInfo {
    private com.tkay.splashad.api.ITYSplashEyeAd atSplashEyeAd;
    private int dismissType;

    public TYSplashAdExtraInfo(int r1, com.tkay.splashad.api.ITYSplashEyeAd r2) {
            r0 = this;
            r0.<init>()
            r0.dismissType = r1
            r0.atSplashEyeAd = r2
            return
    }

    public com.tkay.splashad.api.ITYSplashEyeAd getAtSplashEyeAd() {
            r1 = this;
            com.tkay.splashad.api.ITYSplashEyeAd r0 = r1.atSplashEyeAd
            return r0
    }

    public int getDismissType() {
            r1 = this;
            int r0 = r1.dismissType
            return r0
    }
}
