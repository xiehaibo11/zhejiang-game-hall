package com.kwad.components.core.liveEnd;

public class AdLiveEndCommonResultData extends com.kwad.sdk.core.network.BaseResultData {
    private static final long serialVersionUID = 1126369604146892297L;
    public java.lang.String displayLikeUserCount;
    public java.lang.String displayWatchingUserCount;
    public int likeUserCount;
    public long liveDuration;
    public long totalWatchingDuration;
    public int watchingUserCount;

    public AdLiveEndCommonResultData() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "0"
            r1.displayWatchingUserCount = r0
            r1.displayLikeUserCount = r0
            return
    }
}
