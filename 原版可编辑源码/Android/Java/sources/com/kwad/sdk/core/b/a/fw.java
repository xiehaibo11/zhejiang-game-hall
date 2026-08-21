package com.kwad.sdk.core.b.a;

import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.tkay.core.api.TYAdConst;
import org.json.JSONObject;

public final class fw implements com.kwad.sdk.core.d<com.kwad.sdk.core.network.k> {
    private static void a(com.kwad.sdk.core.network.k kVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        kVar.apj = jSONObject.optLong("request_prepare_cost");
        kVar.apk = jSONObject.optLong("request_add_params_cost");
        kVar.apl = jSONObject.optLong("request_create_cost");
        kVar.apm = jSONObject.optInt("keep_alive");
        kVar.apn = jSONObject.optLong("dns_start");
        kVar.apo = jSONObject.optLong("dns_cost");
        kVar.app = jSONObject.optLong("connect_establish_start");
        kVar.apq = jSONObject.optLong("connect_establish_cost");
        kVar.apr = jSONObject.optLong("request_start");
        kVar.aps = jSONObject.optLong("request_cost");
        kVar.apt = jSONObject.optLong("request_size");
        kVar.apu = jSONObject.optLong("response_start");
        kVar.apv = jSONObject.optLong("response_cost");
        kVar.apw = jSONObject.optLong("response_parse_cost");
        kVar.apx = jSONObject.optLong("response_size");
        kVar.apy = jSONObject.optLong("waiting_response_cost");
        kVar.apz = jSONObject.optLong("total_cost");
        kVar.apA = jSONObject.optInt("proxy_used");
        kVar.apB = jSONObject.optString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID);
        if (kVar.apB == JSONObject.NULL) {
            kVar.apB = "";
        }
        kVar.apC = jSONObject.optInt("has_data_v2");
        kVar.result = jSONObject.optInt("result");
        kVar.apD = jSONObject.optLong("response_done_cost");
        kVar.apE = jSONObject.optString(MonitorConstants.HOST_IP);
        if (kVar.apE == JSONObject.NULL) {
            kVar.apE = "";
        }
        kVar.apF = jSONObject.optInt("ip_type");
        kVar.apG = jSONObject.optInt("recommend_ping_time");
        kVar.apH = jSONObject.optInt("backup_ping_time");
        kVar.apI = jSONObject.optInt("other_ping_time");
    }

    private static JSONObject b(com.kwad.sdk.core.network.k kVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (kVar.apj != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "request_prepare_cost", kVar.apj);
        }
        if (kVar.apk != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "request_add_params_cost", kVar.apk);
        }
        if (kVar.apl != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "request_create_cost", kVar.apl);
        }
        if (kVar.apm != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "keep_alive", kVar.apm);
        }
        if (kVar.apn != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "dns_start", kVar.apn);
        }
        if (kVar.apo != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "dns_cost", kVar.apo);
        }
        if (kVar.app != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "connect_establish_start", kVar.app);
        }
        if (kVar.apq != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "connect_establish_cost", kVar.apq);
        }
        if (kVar.apr != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "request_start", kVar.apr);
        }
        if (kVar.aps != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "request_cost", kVar.aps);
        }
        if (kVar.apt != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "request_size", kVar.apt);
        }
        if (kVar.apu != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "response_start", kVar.apu);
        }
        if (kVar.apv != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "response_cost", kVar.apv);
        }
        if (kVar.apw != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "response_parse_cost", kVar.apw);
        }
        if (kVar.apx != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "response_size", kVar.apx);
        }
        if (kVar.apy != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "waiting_response_cost", kVar.apy);
        }
        if (kVar.apz != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "total_cost", kVar.apz);
        }
        if (kVar.apA != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "proxy_used", kVar.apA);
        }
        if (kVar.apB != null && !kVar.apB.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, kVar.apB);
        }
        if (kVar.apC != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "has_data_v2", kVar.apC);
        }
        if (kVar.result != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "result", kVar.result);
        }
        if (kVar.apD != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "response_done_cost", kVar.apD);
        }
        if (kVar.apE != null && !kVar.apE.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, MonitorConstants.HOST_IP, kVar.apE);
        }
        if (kVar.apF != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "ip_type", kVar.apF);
        }
        if (kVar.apG != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "recommend_ping_time", kVar.apG);
        }
        if (kVar.apH != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "backup_ping_time", kVar.apH);
        }
        if (kVar.apI != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "other_ping_time", kVar.apI);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.core.network.k) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.core.network.k) bVar, jSONObject);
    }
}
