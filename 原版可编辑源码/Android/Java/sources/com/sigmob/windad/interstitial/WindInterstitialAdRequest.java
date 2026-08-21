package com.sigmob.windad.interstitial;

import com.sigmob.windad.WindAdRequest;
import java.util.Map;

public class WindInterstitialAdRequest extends WindAdRequest {
    private boolean c;
    private boolean d;

    public WindInterstitialAdRequest(String str, String str2, Map<String, Object> map) {
        super(str, str2, map);
        this.a = 4;
    }

    public boolean isEnableKeepOn() {
        return this.d;
    }

    public boolean isEnableScreenLockDisPlayAd() {
        return this.c;
    }

    public void setEnableKeepOn(boolean z) {
        this.d = z;
    }

    public void setEnableScreenLockDisPlayAd(boolean z) {
        this.c = z;
    }
}
