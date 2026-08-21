package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.VideoPlayerStatus;
import org.json.JSONObject;

public final class jg implements com.kwad.sdk.core.d<VideoPlayerStatus> {
    private static void a(VideoPlayerStatus videoPlayerStatus, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        videoPlayerStatus.mVideoPlayerType = jSONObject.optInt("mVideoPlayerType");
        videoPlayerStatus.mVideoPlayerBehavior = jSONObject.optInt("mVideoPlayerBehavior", new Integer("1").intValue());
    }

    private static JSONObject b(VideoPlayerStatus videoPlayerStatus, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (videoPlayerStatus.mVideoPlayerType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mVideoPlayerType", videoPlayerStatus.mVideoPlayerType);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "mVideoPlayerBehavior", videoPlayerStatus.mVideoPlayerBehavior);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((VideoPlayerStatus) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((VideoPlayerStatus) bVar, jSONObject);
    }
}
