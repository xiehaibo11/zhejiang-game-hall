package com.sigmob.windad.rewardVideo;

public class WindRewardAdRequest extends com.sigmob.windad.WindAdRequest {
    private boolean c;
    private boolean d;

    public WindRewardAdRequest(java.lang.String r1, java.lang.String r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 1
            r0.a = r1
            return
    }

    public static com.sigmob.windad.rewardVideo.WindRewardAdRequest getWindVideoAdRequest(com.sigmob.windad.WindAdRequest r3) {
            if (r3 == 0) goto L14
            com.sigmob.windad.rewardVideo.WindRewardAdRequest r0 = new com.sigmob.windad.rewardVideo.WindRewardAdRequest
            java.lang.String r1 = r3.getPlacementId()
            java.lang.String r2 = r3.getUserId()
            java.util.Map r3 = r3.getOptions()
            r0.<init>(r1, r2, r3)
            return r0
        L14:
            r3 = 0
            return r3
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
