package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class u implements com.kwad.sdk.core.d<com.kwad.sdk.internal.api.a> {
    private static void a(com.kwad.sdk.internal.api.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.ajr = jSONObject.optInt("thirdAge");
        aVar.ajs = jSONObject.optInt("thirdGender");
        aVar.ajt = jSONObject.optString("thirdInterest");
        if (aVar.ajt == JSONObject.NULL) {
            aVar.ajt = "";
        }
        aVar.aju = jSONObject.optString("prevTitle");
        if (aVar.aju == JSONObject.NULL) {
            aVar.aju = "";
        }
        aVar.ajv = jSONObject.optString("postTitle");
        if (aVar.ajv == JSONObject.NULL) {
            aVar.ajv = "";
        }
        aVar.ajw = jSONObject.optString("historyTitle");
        if (aVar.ajw == JSONObject.NULL) {
            aVar.ajw = "";
        }
        aVar.ajx = jSONObject.optString("channel");
        if (aVar.ajx == JSONObject.NULL) {
            aVar.ajx = "";
        }
        aVar.ajy = jSONObject.optLong("cpmBidFloor");
    }

    private static JSONObject b(com.kwad.sdk.internal.api.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.ajr != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "thirdAge", aVar.ajr);
        }
        if (aVar.ajs != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "thirdGender", aVar.ajs);
        }
        if (aVar.ajt != null && !aVar.ajt.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "thirdInterest", aVar.ajt);
        }
        if (aVar.aju != null && !aVar.aju.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "prevTitle", aVar.aju);
        }
        if (aVar.ajv != null && !aVar.ajv.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "postTitle", aVar.ajv);
        }
        if (aVar.ajw != null && !aVar.ajw.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "historyTitle", aVar.ajw);
        }
        if (aVar.ajx != null && !aVar.ajx.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "channel", aVar.ajx);
        }
        if (aVar.ajy != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "cpmBidFloor", aVar.ajy);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.internal.api.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.internal.api.a) bVar, jSONObject);
    }
}
