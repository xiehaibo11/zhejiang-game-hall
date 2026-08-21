package com.kwai.adclient.kscommerciallogger.snapshot;

public final class b extends com.kwai.adclient.kscommerciallogger.snapshot.d {
    b(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    final synchronized org.json.JSONObject Lj() {
            r1 = this;
            monitor-enter(r1)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L8
            r0.<init>()     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return r0
        L8:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }
}
