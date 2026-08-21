package com.kwad.sdk.core.response.model;

public class PhotoInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    private static final long serialVersionUID = -4483350806354759008L;
    public com.kwad.sdk.core.response.model.PhotoInfo.BaseInfo baseInfo;
    public java.lang.String mOriginJString;
    public com.kwad.sdk.core.response.model.PhotoInfo.VideoInfo videoInfo;

    public static class BaseInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 2257669583403371065L;
        public long commentCount;
        public int contentSourceType;
        public long createTime;
        public long likeCount;
        public long photoId;
        public long playTimes;
        public java.lang.String recoExt;
        public java.lang.String sdkExtraData;
        public java.lang.String shareUrl;
        public java.lang.String title;
        public java.lang.String videoDesc;
        public long videoUrlCacheTime;
        public long viewCount;
        public int waterMarkPosition;

        public BaseInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class VideoInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 1395696168725754442L;
        public long duration;
        public java.lang.String firstFrame;
        public int height;
        public double heightRatio;
        public double leftRatio;
        public java.lang.String manifest;
        public int size;
        public double topRatio;
        public java.lang.String videoUrl;
        public int width;
        public double widthRatio;

        public VideoInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public PhotoInfo() {
            r1 = this;
            r1.<init>()
            com.kwad.sdk.core.response.model.PhotoInfo$BaseInfo r0 = new com.kwad.sdk.core.response.model.PhotoInfo$BaseInfo
            r0.<init>()
            r1.baseInfo = r0
            com.kwad.sdk.core.response.model.PhotoInfo$VideoInfo r0 = new com.kwad.sdk.core.response.model.PhotoInfo$VideoInfo
            r0.<init>()
            r1.videoInfo = r0
            return
    }

    @Override
    public void afterParseJson(org.json.JSONObject r2) {
            r1 = this;
            super.afterParseJson(r2)
            if (r2 == 0) goto L13
            java.lang.String r0 = r1.mOriginJString
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L13
            java.lang.String r2 = r2.toString()
            r1.mOriginJString = r2
        L13:
            return
    }

    @Override
    public void beforeToJson(org.json.JSONObject r3) {
            r2 = this;
            super.beforeToJson(r3)
            java.lang.String r0 = r2.mOriginJString
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L16
            java.lang.String r1 = r2.mOriginJString     // Catch: org.json.JSONException -> L16
            r0.<init>(r1)     // Catch: org.json.JSONException -> L16
            com.kwad.sdk.utils.u.merge(r3, r0)     // Catch: org.json.JSONException -> L16
            return
        L16:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
        L1a:
            return
    }
}
