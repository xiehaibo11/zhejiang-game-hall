package com.xiaomi.clientreport.data;

public class PerfClientReport extends com.xiaomi.clientreport.data.a {
    private static final long DEFAULT_VALUE = -1;
    public int code;
    public long perfCounts;
    public long perfLatencies;

    public PerfClientReport() {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.perfCounts = r0
            r2.perfLatencies = r0
            return
    }

    public static com.xiaomi.clientreport.data.PerfClientReport getBlankInstance() {
            com.xiaomi.clientreport.data.PerfClientReport r0 = new com.xiaomi.clientreport.data.PerfClientReport
            r0.<init>()
            return r0
    }

    @Override
    public org.json.JSONObject toJson() {
            r5 = this;
            r0 = 0
            org.json.JSONObject r1 = super.toJson()     // Catch: org.json.JSONException -> L1e
            if (r1 != 0) goto L8
            return r0
        L8:
            java.lang.String r2 = "code"
            int r3 = r5.code     // Catch: org.json.JSONException -> L1e
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L1e
            java.lang.String r2 = "perfCounts"
            long r3 = r5.perfCounts     // Catch: org.json.JSONException -> L1e
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L1e
            java.lang.String r2 = "perfLatencies"
            long r3 = r5.perfLatencies     // Catch: org.json.JSONException -> L1e
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L1e
            return r1
        L1e:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            return r0
    }

    @Override
    public java.lang.String toJsonString() {
            r1 = this;
            java.lang.String r0 = super.toJsonString()
            return r0
    }
}
