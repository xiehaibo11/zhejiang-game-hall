package com.kwad.sdk.utils;

public abstract class aw implements java.lang.Runnable {
    public aw() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void doTask();

    @Override
    public final void run() {
            r2 = this;
            r2.doTask()     // Catch: java.lang.Throwable -> L4
            return
        L4:
            r0 = move-exception
            java.lang.Class<com.kwad.sdk.service.a.d> r1 = com.kwad.sdk.service.a.d.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.d r1 = (com.kwad.sdk.service.a.d) r1
            if (r1 == 0) goto L12
            r1.gatherException(r0)
        L12:
            return
    }
}
