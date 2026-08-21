package com.kwad.sdk.core.network;

import com.kwad.sdk.core.network.g;

public abstract class a<R extends com.kwad.sdk.core.network.g> {
    private static final java.util.concurrent.ExecutorService sExecutors = null;
    private java.util.concurrent.Future<?> mTask;


    static {
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.threads.GlobalThreadPools.CW()
            com.kwad.sdk.core.network.a.sExecutors = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    protected void cancel() {
            r2 = this;
            java.util.concurrent.Future<?> r0 = r2.mTask
            if (r0 == 0) goto L8
            r1 = 1
            r0.cancel(r1)
        L8:
            return
    }

    protected abstract R createRequest();

    protected void fetch() {
            r2 = this;
            java.util.concurrent.ExecutorService r0 = r2.getExecutor()     // Catch: java.lang.Throwable -> L10
            com.kwad.sdk.core.network.a$1 r1 = new com.kwad.sdk.core.network.a$1     // Catch: java.lang.Throwable -> L10
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L10
            java.util.concurrent.Future r0 = r0.submit(r1)     // Catch: java.lang.Throwable -> L10
            r2.mTask = r0     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)
            return
    }

    protected abstract void fetchImpl();

    protected java.util.concurrent.ExecutorService getExecutor() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.network.a.sExecutors
            return r0
    }

    protected abstract void onResponse(R r1, com.kwad.sdk.core.network.c r2);
}
