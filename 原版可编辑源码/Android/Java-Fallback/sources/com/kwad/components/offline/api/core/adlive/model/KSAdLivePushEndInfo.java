package com.kwad.components.offline.api.core.adlive.model;

public class KSAdLivePushEndInfo implements java.io.Serializable {
    public static final java.lang.String KET_CONFIG_DISPLAY_LIKE_USER_COUNT = "displayLikeUserCount";
    public static final java.lang.String KET_CONFIG_DISPLAY_WATCHING_USER_COUNT = "displayWatchingUserCount";
    public static final java.lang.String KET_CONFIG_LIKE_USER_COUNT = "likeUserCount";
    public static final java.lang.String KET_CONFIG_LIVE_DURATION = "liveDuration";
    public static final java.lang.String KET_CONFIG_TOTAL_WATCHING_DURATION = "totalWatchingDuration";
    public static final java.lang.String KET_CONFIG_WATCHING_USER_COUNT = "watchingUserCount";
    private static final long serialVersionUID = 7611577990274486211L;
    public java.lang.String mDisplayLikeUserCount;
    public java.lang.String mDisplayWatchingUserCount;
    public int mLikeUserCount;
    public long mLiveDuration;
    public long mTotalWatchingDuration;
    public int mWatchingUserCount;

    public KSAdLivePushEndInfo() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "0"
            r1.mDisplayWatchingUserCount = r0
            r1.mDisplayLikeUserCount = r0
            return
    }

    public void parseJson(org.json.JSONObject r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "totalWatchingDuration"
            long r0 = r4.optLong(r0)
            r3.mTotalWatchingDuration = r0
            java.lang.String r0 = "watchingUserCount"
            int r0 = r4.optInt(r0)
            r3.mWatchingUserCount = r0
            java.lang.String r0 = "0"
            java.lang.String r1 = "displayWatchingUserCount"
            java.lang.String r1 = r4.optString(r1, r0)
            r3.mDisplayWatchingUserCount = r1
            java.lang.String r1 = "liveDuration"
            long r1 = r4.optLong(r1)
            r3.mLiveDuration = r1
            java.lang.String r1 = "likeUserCount"
            int r1 = r4.optInt(r1)
            r3.mLikeUserCount = r1
            java.lang.String r1 = "displayLikeUserCount"
            java.lang.String r4 = r4.optString(r1, r0)
            r3.mDisplayLikeUserCount = r4
            return
    }

    public org.json.JSONObject toJson(org.json.JSONObject r4) {
            r3 = this;
            long r0 = r3.mTotalWatchingDuration
            java.lang.String r2 = "totalWatchingDuration"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
            int r0 = r3.mWatchingUserCount
            java.lang.String r1 = "watchingUserCount"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            java.lang.String r0 = r3.mDisplayWatchingUserCount
            java.lang.String r1 = "displayWatchingUserCount"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            long r0 = r3.mLiveDuration
            java.lang.String r2 = "liveDuration"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
            int r0 = r3.mLikeUserCount
            java.lang.String r1 = "likeUserCount"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            java.lang.String r0 = r3.mDisplayLikeUserCount
            java.lang.String r1 = "displayLikeUserCount"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            return r4
    }
}
