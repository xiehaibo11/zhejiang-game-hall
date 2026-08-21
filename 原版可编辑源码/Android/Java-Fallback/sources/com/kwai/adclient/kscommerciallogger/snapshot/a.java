package com.kwai.adclient.kscommerciallogger.snapshot;

public final class a extends com.kwai.adclient.kscommerciallogger.snapshot.c {
    a(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    @Override
    public final synchronized com.kwai.adclient.kscommerciallogger.snapshot.d gb(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            com.kwai.adclient.kscommerciallogger.snapshot.b r2 = new com.kwai.adclient.kscommerciallogger.snapshot.b     // Catch: java.lang.Throwable -> La
            java.lang.String r0 = "empty"
            r2.<init>(r0)     // Catch: java.lang.Throwable -> La
            monitor-exit(r1)
            return r2
        La:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    final org.json.JSONObject gc(java.lang.String r1) {
            r0 = this;
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            return r1
    }
}
