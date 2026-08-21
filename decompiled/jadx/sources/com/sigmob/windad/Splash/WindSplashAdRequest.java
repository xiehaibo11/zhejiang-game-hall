package com.sigmob.windad.Splash;

import com.sigmob.windad.WindAdRequest;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class WindSplashAdRequest extends WindAdRequest {
    private int c;
    private boolean d;

    public WindSplashAdRequest(String str, String str2, Map<String, Object> map) {
        super(str, str2, map);
        this.c = 5;
        this.d = false;
        this.f5280a = 2;
    }

    public int getFetchDelay() {
        int i = this.c;
        if (i < 3) {
            return 3;
        }
        return i;
    }

    public boolean isDisableAutoHideAd() {
        return this.d;
    }

    public void setDisableAutoHideAd(boolean z) {
        this.d = z;
    }

    public void setFetchDelay(int i) {
        this.c = i;
    }
}
