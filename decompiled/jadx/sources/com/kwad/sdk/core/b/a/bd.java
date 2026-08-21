package com.kwad.sdk.core.b.a;

import com.kwad.sdk.crash.online.monitor.block.BlockEvent;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class bd implements com.kwad.sdk.core.d<BlockEvent> {
    private static void a(BlockEvent blockEvent, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        blockEvent.blockDuration = jSONObject.optLong("blockDuration");
        blockEvent.blockTimeThreshold = jSONObject.optLong("blockTimeThreshold", new Long("1000").longValue());
        blockEvent.blockLoopInterval = jSONObject.optLong("blockLoopInterval", new Long("100").longValue());
        blockEvent.calcBlockOverhead = jSONObject.optLong("calcBlockOverhead");
        blockEvent.currentActivity = jSONObject.optString("currentActivity");
        if (blockEvent.currentActivity == JSONObject.NULL) {
            blockEvent.currentActivity = "";
        }
        blockEvent.processName = jSONObject.optString("processName");
        if (blockEvent.processName == JSONObject.NULL) {
            blockEvent.processName = "";
        }
        blockEvent.stackTraceSample = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("stackTraceSample");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                BlockEvent.a aVar = new BlockEvent.a();
                aVar.parseJson(jSONArrayOptJSONArray.optJSONObject(i));
                blockEvent.stackTraceSample.add(aVar);
            }
        }
    }

    private static JSONObject b(BlockEvent blockEvent, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (blockEvent.blockDuration != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "blockDuration", blockEvent.blockDuration);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "blockTimeThreshold", blockEvent.blockTimeThreshold);
        com.kwad.sdk.utils.t.putValue(jSONObject, "blockLoopInterval", blockEvent.blockLoopInterval);
        if (blockEvent.calcBlockOverhead != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "calcBlockOverhead", blockEvent.calcBlockOverhead);
        }
        if (blockEvent.currentActivity != null && !blockEvent.currentActivity.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "currentActivity", blockEvent.currentActivity);
        }
        if (blockEvent.processName != null && !blockEvent.processName.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "processName", blockEvent.processName);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "stackTraceSample", blockEvent.stackTraceSample);
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((BlockEvent) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((BlockEvent) bVar, jSONObject);
    }
}
