package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class iu implements com.kwad.sdk.core.d<com.kwad.sdk.core.threads.b> {
    private static void a(com.kwad.sdk.core.threads.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.avg = jSONObject.optString("pool_name");
        if (bVar.avg == JSONObject.NULL) {
            bVar.avg = "";
        }
        bVar.avh = jSONObject.optInt("core_pool_size");
        bVar.avi = jSONObject.optInt("max_pool_size");
        bVar.avj = jSONObject.optInt("current_pool_size");
        bVar.avk = jSONObject.optInt("active_count");
        bVar.avl = jSONObject.optLong("task_wait_avg_ms");
        bVar.avm = jSONObject.optLong("task_succ_count");
        bVar.interval = jSONObject.optLong("interval_ms");
        bVar.avn = jSONObject.optInt("queue_size");
        bVar.avo = jSONObject.optLong("pass_timestamp");
        bVar.avp = jSONObject.optInt("func_ratio_count");
    }

    private static JSONObject b(com.kwad.sdk.core.threads.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.avg != null && !bVar.avg.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "pool_name", bVar.avg);
        }
        if (bVar.avh != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "core_pool_size", bVar.avh);
        }
        if (bVar.avi != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "max_pool_size", bVar.avi);
        }
        if (bVar.avj != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "current_pool_size", bVar.avj);
        }
        if (bVar.avk != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "active_count", bVar.avk);
        }
        if (bVar.avl != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "task_wait_avg_ms", bVar.avl);
        }
        if (bVar.avm != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "task_succ_count", bVar.avm);
        }
        if (bVar.interval != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "interval_ms", bVar.interval);
        }
        if (bVar.avn != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "queue_size", bVar.avn);
        }
        if (bVar.avo != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "pass_timestamp", bVar.avo);
        }
        if (bVar.avp != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "func_ratio_count", bVar.avp);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.core.threads.b) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.core.threads.b) bVar, jSONObject);
    }
}
