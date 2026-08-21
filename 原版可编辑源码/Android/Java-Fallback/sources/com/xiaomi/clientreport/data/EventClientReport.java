package com.xiaomi.clientreport.data;

public class EventClientReport extends com.xiaomi.clientreport.data.a {
    public java.lang.String eventContent;
    public java.lang.String eventId;
    public long eventTime;
    public int eventType;

    public EventClientReport() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.xiaomi.clientreport.data.EventClientReport getBlankInstance() {
            com.xiaomi.clientreport.data.EventClientReport r0 = new com.xiaomi.clientreport.data.EventClientReport
            r0.<init>()
            return r0
    }

    @Override
    public org.json.JSONObject toJson() {
            r5 = this;
            r0 = 0
            org.json.JSONObject r1 = super.toJson()     // Catch: org.json.JSONException -> L2c
            if (r1 != 0) goto L8
            return r0
        L8:
            java.lang.String r2 = "eventId"
            java.lang.String r3 = r5.eventId     // Catch: org.json.JSONException -> L2c
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L2c
            java.lang.String r2 = "eventType"
            int r3 = r5.eventType     // Catch: org.json.JSONException -> L2c
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L2c
            java.lang.String r2 = "eventTime"
            long r3 = r5.eventTime     // Catch: org.json.JSONException -> L2c
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L2c
            java.lang.String r2 = "eventContent"
            java.lang.String r3 = r5.eventContent     // Catch: org.json.JSONException -> L2c
            if (r3 != 0) goto L26
            java.lang.String r3 = ""
            goto L28
        L26:
            java.lang.String r3 = r5.eventContent     // Catch: org.json.JSONException -> L2c
        L28:
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L2c
            return r1
        L2c:
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
