package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.HttpDnsInfo;
import org.json.JSONObject;

public final class es implements com.kwad.sdk.core.d<HttpDnsInfo.IpInfo> {
    private static void a(HttpDnsInfo.IpInfo ipInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        ipInfo.ip = jSONObject.optString("ip");
        if (ipInfo.ip == JSONObject.NULL) {
            ipInfo.ip = "";
        }
        ipInfo.weight = jSONObject.optInt("weight");
    }

    private static JSONObject b(HttpDnsInfo.IpInfo ipInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (ipInfo.ip != null && !ipInfo.ip.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "ip", ipInfo.ip);
        }
        if (ipInfo.weight != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "weight", ipInfo.weight);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((HttpDnsInfo.IpInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((HttpDnsInfo.IpInfo) bVar, jSONObject);
    }
}
