package com.kwad.components.ad.reward.model;

public class AdLiveEndResultData extends com.kwad.sdk.core.network.BaseResultData {
    private static final long serialVersionUID = 1126369604146892297L;
    public com.kwad.components.ad.reward.model.AdLiveEndResultData.AdLivePushEndInfo mQLivePushEndInfo;

    public static class AdLivePushEndInfo implements com.kwad.sdk.core.b, java.io.Serializable {
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

        public AdLivePushEndInfo() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "0"
                r1.mDisplayWatchingUserCount = r0
                r1.mDisplayLikeUserCount = r0
                return
        }

        @Override
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

        @Override
        public org.json.JSONObject toJson() {
                r4 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                long r1 = r4.mTotalWatchingDuration
                java.lang.String r3 = "totalWatchingDuration"
                com.kwad.sdk.utils.t.putValue(r0, r3, r1)
                int r1 = r4.mWatchingUserCount
                java.lang.String r2 = "watchingUserCount"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                java.lang.String r1 = r4.mDisplayWatchingUserCount
                java.lang.String r2 = "displayWatchingUserCount"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                long r1 = r4.mLiveDuration
                java.lang.String r3 = "liveDuration"
                com.kwad.sdk.utils.t.putValue(r0, r3, r1)
                int r1 = r4.mLikeUserCount
                java.lang.String r2 = "likeUserCount"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                java.lang.String r1 = r4.mDisplayLikeUserCount
                java.lang.String r2 = "displayLikeUserCount"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                return r0
        }
    }

    public AdLiveEndResultData() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.model.AdLiveEndResultData$AdLivePushEndInfo r0 = new com.kwad.components.ad.reward.model.AdLiveEndResultData$AdLivePushEndInfo
            r0.<init>()
            r1.mQLivePushEndInfo = r0
            return
    }

    @Override
    public void parseJson(org.json.JSONObject r2) {
            r1 = this;
            super.parseJson(r2)
            if (r2 != 0) goto L6
            return
        L6:
            com.kwad.components.ad.reward.model.AdLiveEndResultData$AdLivePushEndInfo r0 = r1.mQLivePushEndInfo
            r0.parseJson(r2)
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r1 = this;
            com.kwad.components.ad.reward.model.AdLiveEndResultData$AdLivePushEndInfo r0 = r1.mQLivePushEndInfo
            org.json.JSONObject r0 = r0.toJson()
            return r0
    }
}
