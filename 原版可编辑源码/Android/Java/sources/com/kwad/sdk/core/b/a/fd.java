package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.an;
import org.json.JSONObject;

public final class fd implements com.kwad.sdk.core.d<an.a> {
    private static void a(an.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.status = jSONObject.optInt("status");
        aVar.totalWatchingDuration = jSONObject.optLong("totalWatchingDuration");
        aVar.watchingUserCount = jSONObject.optInt("watchingUserCount");
        aVar.displayWatchingUserCount = jSONObject.optString("displayWatchingUserCount");
        if (aVar.displayWatchingUserCount == JSONObject.NULL) {
            aVar.displayWatchingUserCount = "";
        }
        aVar.liveDuration = jSONObject.optLong("liveDuration");
        aVar.likeUserCount = jSONObject.optInt("likeUserCount");
        aVar.displayLikeUserCount = jSONObject.optString("displayLikeUserCount");
        if (aVar.displayLikeUserCount == JSONObject.NULL) {
            aVar.displayLikeUserCount = "";
        }
    }

    private static JSONObject b(an.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.status != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "status", aVar.status);
        }
        if (aVar.totalWatchingDuration != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "totalWatchingDuration", aVar.totalWatchingDuration);
        }
        if (aVar.watchingUserCount != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "watchingUserCount", aVar.watchingUserCount);
        }
        if (aVar.displayWatchingUserCount != null && !aVar.displayWatchingUserCount.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "displayWatchingUserCount", aVar.displayWatchingUserCount);
        }
        if (aVar.liveDuration != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "liveDuration", aVar.liveDuration);
        }
        if (aVar.likeUserCount != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "likeUserCount", aVar.likeUserCount);
        }
        if (aVar.displayLikeUserCount != null && !aVar.displayLikeUserCount.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "displayLikeUserCount", aVar.displayLikeUserCount);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((an.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((an.a) bVar, jSONObject);
    }
}
