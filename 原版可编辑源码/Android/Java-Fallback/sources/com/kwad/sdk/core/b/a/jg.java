package com.kwad.sdk.core.b.a;

public final class jg implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.VideoPlayerStatus> {
    public jg() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.VideoPlayerStatus r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "mVideoPlayerType"
            int r0 = r3.optInt(r0)
            r2.mVideoPlayerType = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "1"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "mVideoPlayerBehavior"
            int r3 = r3.optInt(r1, r0)
            r2.mVideoPlayerBehavior = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.VideoPlayerStatus r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.mVideoPlayerType
            if (r0 == 0) goto L12
            int r0 = r2.mVideoPlayerType
            java.lang.String r1 = "mVideoPlayerType"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r2 = r2.mVideoPlayerBehavior
            java.lang.String r0 = "mVideoPlayerBehavior"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.VideoPlayerStatus r1 = (com.kwad.sdk.core.response.model.VideoPlayerStatus) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.VideoPlayerStatus r1 = (com.kwad.sdk.core.response.model.VideoPlayerStatus) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
