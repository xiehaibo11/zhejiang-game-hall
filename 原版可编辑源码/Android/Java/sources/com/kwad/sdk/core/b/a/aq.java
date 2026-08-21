package com.kwad.sdk.core.b.a;

import com.kwad.sdk.crash.model.message.AnrReason;
import org.json.JSONObject;

public final class aq implements com.kwad.sdk.core.d<AnrReason> {
    private static void a(AnrReason anrReason, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        anrReason.mTag = jSONObject.optString("mTag");
        if (anrReason.mTag == JSONObject.NULL) {
            anrReason.mTag = "";
        }
        anrReason.mShortMsg = jSONObject.optString("mShortMsg");
        if (anrReason.mShortMsg == JSONObject.NULL) {
            anrReason.mShortMsg = "";
        }
        anrReason.mLongMsg = jSONObject.optString("mLongMsg");
        if (anrReason.mLongMsg == JSONObject.NULL) {
            anrReason.mLongMsg = "";
        }
    }

    private static JSONObject b(AnrReason anrReason, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (anrReason.mTag != null && !anrReason.mTag.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mTag", anrReason.mTag);
        }
        if (anrReason.mShortMsg != null && !anrReason.mShortMsg.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mShortMsg", anrReason.mShortMsg);
        }
        if (anrReason.mLongMsg != null && !anrReason.mLongMsg.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mLongMsg", anrReason.mLongMsg);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AnrReason) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AnrReason) bVar, jSONObject);
    }
}
