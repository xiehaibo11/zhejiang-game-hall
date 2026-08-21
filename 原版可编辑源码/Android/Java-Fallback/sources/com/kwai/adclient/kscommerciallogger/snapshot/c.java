package com.kwai.adclient.kscommerciallogger.snapshot;

public class c {
    private final java.lang.String aNH;
    private final java.util.LinkedList<com.kwai.adclient.kscommerciallogger.snapshot.d> aNI;
    private int aNJ;
    private final int aNK;
    private long aNL;

    c(java.lang.String r2) {
            r1 = this;
            r0 = 10
            r1.<init>(r2, r0)
            return
    }

    c(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>()
            if (r1 != 0) goto L7
            java.lang.String r1 = ""
        L7:
            r0.aNH = r1
            java.util.LinkedList r1 = new java.util.LinkedList
            r1.<init>()
            r0.aNI = r1
            r1 = 30
            int r1 = java.lang.Math.min(r2, r1)
            r0.aNK = r1
            long r1 = java.lang.System.currentTimeMillis()
            r0.aNL = r1
            return
    }

    public final synchronized long Lk() {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.aNL     // Catch: java.lang.Throwable -> L5
            monitor-exit(r2)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            if (r2 != r3) goto L4
            r3 = 1
            return r3
        L4:
            if (r3 == 0) goto L1c
            java.lang.Class r0 = r2.getClass()
            java.lang.Class r1 = r3.getClass()
            if (r0 == r1) goto L11
            goto L1c
        L11:
            com.kwai.adclient.kscommerciallogger.snapshot.c r3 = (com.kwai.adclient.kscommerciallogger.snapshot.c) r3
            java.lang.String r0 = r2.aNH
            java.lang.String r3 = r3.aNH
            boolean r3 = r0.equals(r3)
            return r3
        L1c:
            r3 = 0
            return r3
    }

    public synchronized com.kwai.adclient.kscommerciallogger.snapshot.d gb(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            java.util.LinkedList<com.kwai.adclient.kscommerciallogger.snapshot.d> r0 = r3.aNI     // Catch: java.lang.Throwable -> L3c
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L3c
            int r1 = r3.aNK     // Catch: java.lang.Throwable -> L3c
            if (r0 < r1) goto L10
            java.util.LinkedList<com.kwai.adclient.kscommerciallogger.snapshot.d> r0 = r3.aNI     // Catch: java.lang.Throwable -> L3c
            r0.removeFirst()     // Catch: java.lang.Throwable -> L3c
        L10:
            com.kwai.adclient.kscommerciallogger.snapshot.d r0 = new com.kwai.adclient.kscommerciallogger.snapshot.d     // Catch: java.lang.Throwable -> L3c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3c
            r1.<init>()     // Catch: java.lang.Throwable -> L3c
            r1.append(r4)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r4 = "_"
            r1.append(r4)     // Catch: java.lang.Throwable -> L3c
            int r4 = r3.aNJ     // Catch: java.lang.Throwable -> L3c
            int r2 = r4 + 1
            r3.aNJ = r2     // Catch: java.lang.Throwable -> L3c
            r1.append(r4)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L3c
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L3c
            java.util.LinkedList<com.kwai.adclient.kscommerciallogger.snapshot.d> r4 = r3.aNI     // Catch: java.lang.Throwable -> L3c
            r4.addLast(r0)     // Catch: java.lang.Throwable -> L3c
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L3c
            r3.aNL = r1     // Catch: java.lang.Throwable -> L3c
            monitor-exit(r3)
            return r0
        L3c:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    synchronized org.json.JSONObject gc(java.lang.String r5) {
            r4 = this;
            monitor-enter(r4)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L43
            r0.<init>()     // Catch: java.lang.Throwable -> L43
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: org.json.JSONException -> L3d java.lang.Throwable -> L43
            r1.<init>()     // Catch: org.json.JSONException -> L3d java.lang.Throwable -> L43
            java.util.LinkedList<com.kwai.adclient.kscommerciallogger.snapshot.d> r2 = r4.aNI     // Catch: org.json.JSONException -> L3d java.lang.Throwable -> L43
            java.util.Iterator r2 = r2.iterator()     // Catch: org.json.JSONException -> L3d java.lang.Throwable -> L43
        L11:
            boolean r3 = r2.hasNext()     // Catch: org.json.JSONException -> L3d java.lang.Throwable -> L43
            if (r3 == 0) goto L25
            java.lang.Object r3 = r2.next()     // Catch: org.json.JSONException -> L3d java.lang.Throwable -> L43
            com.kwai.adclient.kscommerciallogger.snapshot.d r3 = (com.kwai.adclient.kscommerciallogger.snapshot.d) r3     // Catch: org.json.JSONException -> L3d java.lang.Throwable -> L43
            org.json.JSONObject r3 = r3.Lj()     // Catch: org.json.JSONException -> L3d java.lang.Throwable -> L43
            r1.put(r3)     // Catch: org.json.JSONException -> L3d java.lang.Throwable -> L43
            goto L11
        L25:
            java.lang.String r2 = "session_id"
            r0.put(r2, r5)     // Catch: org.json.JSONException -> L3d java.lang.Throwable -> L43
            java.lang.String r5 = "segment_name"
            java.lang.String r2 = r4.aNH     // Catch: org.json.JSONException -> L3d java.lang.Throwable -> L43
            r0.put(r5, r2)     // Catch: org.json.JSONException -> L3d java.lang.Throwable -> L43
            java.lang.String r5 = "spans"
            r0.put(r5, r1)     // Catch: org.json.JSONException -> L3d java.lang.Throwable -> L43
            long r1 = java.lang.System.currentTimeMillis()     // Catch: org.json.JSONException -> L3d java.lang.Throwable -> L43
            r4.aNL = r1     // Catch: org.json.JSONException -> L3d java.lang.Throwable -> L43
            goto L41
        L3d:
            r5 = move-exception
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L43
        L41:
            monitor-exit(r4)
            return r0
        L43:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    final java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.aNH
            return r0
    }

    public int hashCode() {
            r3 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = r3.aNH
            r2 = 0
            r0[r2] = r1
            int r0 = java.util.Objects.hash(r0)
            return r0
    }
}
