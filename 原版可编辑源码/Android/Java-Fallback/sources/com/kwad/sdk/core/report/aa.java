package com.kwad.sdk.core.report;

import com.kwad.sdk.core.network.g;
import com.kwad.sdk.core.report.g;

public final class aa<T extends com.kwad.sdk.core.report.g, R extends com.kwad.sdk.core.network.g> implements java.lang.Runnable {
    protected final com.kwad.sdk.core.report.o<T> aqE;
    protected final com.kwad.sdk.core.report.c<T, R> atG;
    protected final java.util.concurrent.atomic.AtomicInteger atH;
    protected final android.content.Context mContext;

    public aa(android.content.Context r1, com.kwad.sdk.core.report.o<T> r2, com.kwad.sdk.core.report.c<T, R> r3, java.util.concurrent.atomic.AtomicInteger r4) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            r0.aqE = r2
            r0.atG = r3
            r0.atH = r4
            return
    }

    private void Cq() {
            r2 = this;
            com.kwad.sdk.core.report.o<T extends com.kwad.sdk.core.report.g> r0 = r2.aqE     // Catch: java.lang.Throwable -> L10
            java.util.List r0 = r0.BX()     // Catch: java.lang.Throwable -> L10
            boolean r1 = r0.isEmpty()     // Catch: java.lang.Throwable -> L10
            if (r1 != 0) goto Lf
            r2.w(r0)     // Catch: java.lang.Throwable -> L10
        Lf:
            return
        L10:
            r0 = move-exception
            java.lang.Class<com.kwad.sdk.service.a.d> r1 = com.kwad.sdk.service.a.d.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.d r1 = (com.kwad.sdk.service.a.d) r1
            r1.gatherException(r0)
            return
    }

    private void w(java.util.List<T> r6) {
            r5 = this;
            r0 = 200(0xc8, float:2.8E-43)
            java.util.List r6 = com.kwad.sdk.utils.z.d(r6, r0)
            int r0 = r6.size()
            java.util.concurrent.atomic.AtomicBoolean r1 = new java.util.concurrent.atomic.AtomicBoolean
            r2 = 0
            r1.<init>(r2)
        L10:
            if (r2 >= r0) goto L20
            java.lang.Object r3 = r6.get(r2)
            java.util.List r3 = (java.util.List) r3
            com.kwad.sdk.core.report.c<T extends com.kwad.sdk.core.report.g, R extends com.kwad.sdk.core.network.g> r4 = r5.atG
            r4.a(r3, r1)
            int r2 = r2 + 1
            goto L10
        L20:
            return
    }

    @Override
    public final void run() {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.atH
            int r0 = r0.get()
            if (r0 > 0) goto L13
            android.content.Context r0 = r1.mContext
            boolean r0 = com.kwad.sdk.utils.ag.isNetworkConnected(r0)
            if (r0 == 0) goto L13
            r1.Cq()
        L13:
            return
    }
}
