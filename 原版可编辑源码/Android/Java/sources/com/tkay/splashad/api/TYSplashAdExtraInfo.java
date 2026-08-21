package com.tkay.splashad.api;

public class TYSplashAdExtraInfo {
    private ITYSplashEyeAd atSplashEyeAd;
    private int dismissType;

    public TYSplashAdExtraInfo(int i, ITYSplashEyeAd iTYSplashEyeAd) {
        this.dismissType = i;
        this.atSplashEyeAd = iTYSplashEyeAd;
    }

    public int getDismissType() {
        return this.dismissType;
    }

    public ITYSplashEyeAd getAtSplashEyeAd() {
        return this.atSplashEyeAd;
    }
}
