package com.kwad.sdk.core.b.a;

public final class iu implements com.kwad.sdk.core.d<com.kwad.sdk.core.threads.b> {
    public iu() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.threads.b r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "pool_name"
            java.lang.String r0 = r3.optString(r0)
            r2.avg = r0
            java.lang.String r0 = r2.avg
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L15
            java.lang.String r0 = ""
            r2.avg = r0
        L15:
            java.lang.String r0 = "core_pool_size"
            int r0 = r3.optInt(r0)
            r2.avh = r0
            java.lang.String r0 = "max_pool_size"
            int r0 = r3.optInt(r0)
            r2.avi = r0
            java.lang.String r0 = "current_pool_size"
            int r0 = r3.optInt(r0)
            r2.avj = r0
            java.lang.String r0 = "active_count"
            int r0 = r3.optInt(r0)
            r2.avk = r0
            java.lang.String r0 = "task_wait_avg_ms"
            long r0 = r3.optLong(r0)
            r2.avl = r0
            java.lang.String r0 = "task_succ_count"
            long r0 = r3.optLong(r0)
            r2.avm = r0
            java.lang.String r0 = "interval_ms"
            long r0 = r3.optLong(r0)
            r2.interval = r0
            java.lang.String r0 = "queue_size"
            int r0 = r3.optInt(r0)
            r2.avn = r0
            java.lang.String r0 = "pass_timestamp"
            long r0 = r3.optLong(r0)
            r2.avo = r0
            java.lang.String r0 = "func_ratio_count"
            int r3 = r3.optInt(r0)
            r2.avp = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.threads.b r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            java.lang.String r0 = r5.avg
            if (r0 == 0) goto L1c
            java.lang.String r0 = r5.avg
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r5.avg
            java.lang.String r1 = "pool_name"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L1c:
            int r0 = r5.avh
            if (r0 == 0) goto L27
            int r0 = r5.avh
            java.lang.String r1 = "core_pool_size"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L27:
            int r0 = r5.avi
            if (r0 == 0) goto L32
            int r0 = r5.avi
            java.lang.String r1 = "max_pool_size"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L32:
            int r0 = r5.avj
            if (r0 == 0) goto L3d
            int r0 = r5.avj
            java.lang.String r1 = "current_pool_size"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L3d:
            int r0 = r5.avk
            if (r0 == 0) goto L48
            int r0 = r5.avk
            java.lang.String r1 = "active_count"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L48:
            long r0 = r5.avl
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L57
            long r0 = r5.avl
            java.lang.String r4 = "task_wait_avg_ms"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L57:
            long r0 = r5.avm
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L64
            long r0 = r5.avm
            java.lang.String r4 = "task_succ_count"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L64:
            long r0 = r5.interval
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L71
            long r0 = r5.interval
            java.lang.String r4 = "interval_ms"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L71:
            int r0 = r5.avn
            if (r0 == 0) goto L7c
            int r0 = r5.avn
            java.lang.String r1 = "queue_size"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L7c:
            long r0 = r5.avo
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L89
            long r0 = r5.avo
            java.lang.String r2 = "pass_timestamp"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L89:
            int r0 = r5.avp
            if (r0 == 0) goto L94
            int r5 = r5.avp
            java.lang.String r0 = "func_ratio_count"
            com.kwad.sdk.utils.t.putValue(r6, r0, r5)
        L94:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.threads.b r1 = (com.kwad.sdk.core.threads.b) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.threads.b r1 = (com.kwad.sdk.core.threads.b) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
