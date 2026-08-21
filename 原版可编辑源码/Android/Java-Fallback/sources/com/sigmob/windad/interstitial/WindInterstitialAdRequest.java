package com.sigmob.windad.interstitial;

public class WindInterstitialAdRequest extends com.sigmob.windad.WindAdRequest {
    private boolean c;
    private boolean d;

    public WindInterstitialAdRequest(java.lang.String r1, java.lang.String r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 4
            r0.a = r1
            return
    }

    public boolean isEnableKeepOn() {
            r1 = this;
            boolean r0 = r1.d
            return r0
    }

    public boolean isEnableScreenLockDisPlayAd() {
            r1 = this;
            boolean r0 = r1.c
            return r0
    }

    public void setEnableKeepOn(boolean r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setEnableScreenLockDisPlayAd(boolean r1) {
            r0 = this;
            r0.c = r1
            return
    }
}
