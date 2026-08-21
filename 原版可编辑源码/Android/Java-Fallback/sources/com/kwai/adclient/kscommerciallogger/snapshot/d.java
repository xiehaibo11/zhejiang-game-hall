package com.kwai.adclient.kscommerciallogger.snapshot;

public class d {
    private final java.lang.String aNN;
    private final java.util.LinkedHashMap<java.lang.String, java.lang.String> aNO;
    private final long time;

    d(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r2.aNO = r0
            r2.aNN = r3
            long r0 = java.lang.System.nanoTime()
            r2.time = r0
            return
    }

    synchronized org.json.JSONObject Lj() {
            r4 = this;
            monitor-enter(r4)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3f
            r0.<init>()     // Catch: java.lang.Throwable -> L3f
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r1 = r4.aNO     // Catch: org.json.JSONException -> L39 java.lang.Throwable -> L3f
            java.util.Set r1 = r1.entrySet()     // Catch: org.json.JSONException -> L39 java.lang.Throwable -> L3f
            java.util.Iterator r1 = r1.iterator()     // Catch: org.json.JSONException -> L39 java.lang.Throwable -> L3f
        L10:
            boolean r2 = r1.hasNext()     // Catch: org.json.JSONException -> L39 java.lang.Throwable -> L3f
            if (r2 == 0) goto L2a
            java.lang.Object r2 = r1.next()     // Catch: org.json.JSONException -> L39 java.lang.Throwable -> L3f
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: org.json.JSONException -> L39 java.lang.Throwable -> L3f
            java.lang.Object r3 = r2.getKey()     // Catch: org.json.JSONException -> L39 java.lang.Throwable -> L3f
            java.lang.String r3 = (java.lang.String) r3     // Catch: org.json.JSONException -> L39 java.lang.Throwable -> L3f
            java.lang.Object r2 = r2.getValue()     // Catch: org.json.JSONException -> L39 java.lang.Throwable -> L3f
            r0.put(r3, r2)     // Catch: org.json.JSONException -> L39 java.lang.Throwable -> L3f
            goto L10
        L2a:
            java.lang.String r1 = "time"
            long r2 = r4.time     // Catch: org.json.JSONException -> L39 java.lang.Throwable -> L3f
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L39 java.lang.Throwable -> L3f
            java.lang.String r1 = "span_name"
            java.lang.String r2 = r4.aNN     // Catch: org.json.JSONException -> L39 java.lang.Throwable -> L3f
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L39 java.lang.Throwable -> L3f
            goto L3d
        L39:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L3f
        L3d:
            monitor-exit(r4)
            return r0
        L3f:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }
}
