package com.sigmob.windad.Splash;

public class WindSplashAdRequest extends com.sigmob.windad.WindAdRequest {
    private int c;
    private boolean d;

    public WindSplashAdRequest(java.lang.String r1, java.lang.String r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 5
            r0.c = r1
            r1 = 0
            r0.d = r1
            r1 = 2
            r0.a = r1
            return
    }

    public int getFetchDelay() {
            r2 = this;
            int r0 = r2.c
            r1 = 3
            if (r0 >= r1) goto L6
            return r1
        L6:
            return r0
    }

    public boolean isDisableAutoHideAd() {
            r1 = this;
            boolean r0 = r1.d
            return r0
    }

    public void setDisableAutoHideAd(boolean r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setFetchDelay(int r1) {
            r0 = this;
            r0.c = r1
            return
    }
}
