package com.kwad.sdk.core.b.a;

import com.kwad.sdk.crash.online.monitor.block.BlockEvent;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class ix implements com.kwad.sdk.core.d<BlockEvent.a> {
    private static void a(BlockEvent.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.aAC = jSONObject.optLong("endTimestamp");
        aVar.repeatCount = jSONObject.optInt("repeatCount", new Integer("1").intValue());
        aVar.aAD = jSONObject.optBoolean("runIdle");
        aVar.aAE = jSONObject.optString("stackTraceDetail");
        if (aVar.aAE == JSONObject.NULL) {
            aVar.aAE = "";
        }
        aVar.aAF = jSONObject.optLong("startTimestamp");
    }

    private static JSONObject b(BlockEvent.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.aAC != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "endTimestamp", aVar.aAC);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "repeatCount", aVar.repeatCount);
        if (aVar.aAD) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "runIdle", aVar.aAD);
        }
        if (aVar.aAE != null && !aVar.aAE.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "stackTraceDetail", aVar.aAE);
        }
        if (aVar.aAF != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "startTimestamp", aVar.aAF);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((BlockEvent.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((BlockEvent.a) bVar, jSONObject);
    }
}
