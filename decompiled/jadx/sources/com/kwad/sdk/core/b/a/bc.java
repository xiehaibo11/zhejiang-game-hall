package com.kwad.sdk.core.b.a;

import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class bc implements com.kwad.sdk.core.d<com.kwad.sdk.crash.online.monitor.a.a> {
    private static void a(com.kwad.sdk.crash.online.monitor.a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.aAT = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("systemFilterList");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                aVar.aAT.add((String) jSONArrayOptJSONArray.opt(i));
            }
        }
        aVar.aAU = new ArrayList();
        JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray("sdkFilterList");
        if (jSONArrayOptJSONArray2 != null) {
            for (int i2 = 0; i2 < jSONArrayOptJSONArray2.length(); i2++) {
                aVar.aAU.add((String) jSONArrayOptJSONArray2.opt(i2));
            }
        }
        aVar.aAV = new ArrayList();
        JSONArray jSONArrayOptJSONArray3 = jSONObject.optJSONArray("matrixPrinterNameList");
        if (jSONArrayOptJSONArray3 != null) {
            for (int i3 = 0; i3 < jSONArrayOptJSONArray3.length(); i3++) {
                aVar.aAV.add((String) jSONArrayOptJSONArray3.opt(i3));
            }
        }
        aVar.aAW = new ArrayList();
        JSONArray jSONArrayOptJSONArray4 = jSONObject.optJSONArray("commonPrinterNameList");
        if (jSONArrayOptJSONArray4 != null) {
            for (int i4 = 0; i4 < jSONArrayOptJSONArray4.length(); i4++) {
                aVar.aAW.add((String) jSONArrayOptJSONArray4.opt(i4));
            }
        }
        aVar.aAX = new ArrayList();
        JSONArray jSONArrayOptJSONArray5 = jSONObject.optJSONArray("featureConfigList");
        if (jSONArrayOptJSONArray5 != null) {
            for (int i5 = 0; i5 < jSONArrayOptJSONArray5.length(); i5++) {
                com.kwad.sdk.crash.online.monitor.a.b bVar = new com.kwad.sdk.crash.online.monitor.a.b();
                bVar.parseJson(jSONArrayOptJSONArray5.optJSONObject(i5));
                aVar.aAX.add(bVar);
            }
        }
        aVar.aAZ = jSONObject.optInt("afterFilterSystemCheckNum", new Integer("5").intValue());
        aVar.aBa = jSONObject.optInt("batchNum", new Integer("10").intValue());
        aVar.aqQ = jSONObject.optDouble(com.sigmob.sdk.base.h.A, new Double("0.01").doubleValue());
        aVar.aBb = jSONObject.optInt("monitorSwitch");
    }

    private static JSONObject b(com.kwad.sdk.crash.online.monitor.a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "systemFilterList", aVar.aAT);
        com.kwad.sdk.utils.t.putValue(jSONObject, "sdkFilterList", aVar.aAU);
        com.kwad.sdk.utils.t.putValue(jSONObject, "matrixPrinterNameList", aVar.aAV);
        com.kwad.sdk.utils.t.putValue(jSONObject, "commonPrinterNameList", aVar.aAW);
        com.kwad.sdk.utils.t.putValue(jSONObject, "featureConfigList", aVar.aAX);
        com.kwad.sdk.utils.t.putValue(jSONObject, "afterFilterSystemCheckNum", aVar.aAZ);
        com.kwad.sdk.utils.t.putValue(jSONObject, "batchNum", aVar.aBa);
        com.kwad.sdk.utils.t.putValue(jSONObject, com.sigmob.sdk.base.h.A, aVar.aqQ);
        if (aVar.aBb != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "monitorSwitch", aVar.aBb);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.crash.online.monitor.a.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.crash.online.monitor.a.a) bVar, jSONObject);
    }
}
