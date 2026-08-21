package com.kwad.sdk.contentalliance.a.a;

import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.l;
import org.json.JSONException;
import org.json.JSONObject;

public final class a {
    public long adStyle;
    public long clickTime;
    public int contentType;
    public long photoId;

    public a() {
        this.clickTime = -1L;
    }

    public a(AdTemplate adTemplate, long j) {
        this.clickTime = -1L;
        this.photoId = d.cm(adTemplate);
        this.clickTime = j;
        this.adStyle = d.cb(adTemplate);
        this.contentType = d.cc(adTemplate);
    }

    public static a ap(AdTemplate adTemplate) {
        return new a(adTemplate, l.cC(adTemplate));
    }

    public final String yR() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("contentType", this.contentType);
            jSONObject.put("adStyle", this.adStyle);
        } catch (JSONException e) {
            c.printStackTrace(e);
        }
        return jSONObject.toString();
    }
}
