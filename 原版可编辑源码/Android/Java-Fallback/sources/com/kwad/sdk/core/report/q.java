package com.kwad.sdk.core.report;

import com.kwad.sdk.core.report.g;

public final class q<T extends com.kwad.sdk.core.report.g> implements com.kwad.sdk.core.report.o<T> {
    private final java.util.Map<java.lang.String, T> arn;

    public q() {
            r1 = this;
            r1.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r1.arn = r0
            return
    }

    private synchronized void b(T r3) {
            r2 = this;
            monitor-enter(r2)
            java.util.Map<java.lang.String, T extends com.kwad.sdk.core.report.g> r0 = r2.arn     // Catch: java.lang.Throwable -> La
            java.lang.String r1 = r3.actionId     // Catch: java.lang.Throwable -> La
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> La
            monitor-exit(r2)
            return
        La:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public final synchronized java.util.List<T> BX() {
            r3 = this;
            monitor-enter(r3)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L2c
            java.util.Map<java.lang.String, T extends com.kwad.sdk.core.report.g> r1 = r3.arn     // Catch: java.lang.Throwable -> L2c
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L2c
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L2c
            java.util.Map<java.lang.String, T extends com.kwad.sdk.core.report.g> r1 = r3.arn     // Catch: java.lang.Throwable -> L2c
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L2c
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L2c
        L16:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L2c
            if (r2 == 0) goto L2a
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L2c
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L2c
            r0.add(r2)     // Catch: java.lang.Throwable -> L2c
            goto L16
        L2a:
            monitor-exit(r3)
            return r0
        L2c:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    @Override
    public final void j(java.lang.Object r1) {
            r0 = this;
            com.kwad.sdk.core.report.g r1 = (com.kwad.sdk.core.report.g) r1
            r0.b(r1)
            return
    }

    @Override
    public final synchronized long size() {
            r4 = this;
            monitor-enter(r4)
            java.util.Map<java.lang.String, T extends com.kwad.sdk.core.report.g> r0 = r4.arn     // Catch: java.lang.Throwable -> L1d
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = "MemReportCache"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1d
            java.lang.String r3 = "size() = "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1d
            r2.append(r0)     // Catch: java.lang.Throwable -> L1d
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1d
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Throwable -> L1d
            long r0 = (long) r0
            monitor-exit(r4)
            return r0
        L1d:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    @Override
    public final synchronized void t(java.util.List<T> r3) {
            r2 = this;
            monitor-enter(r2)
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L1b
        L5:
            boolean r0 = r3.hasNext()     // Catch: java.lang.Throwable -> L1b
            if (r0 == 0) goto L19
            java.lang.Object r0 = r3.next()     // Catch: java.lang.Throwable -> L1b
            com.kwad.sdk.core.report.g r0 = (com.kwad.sdk.core.report.g) r0     // Catch: java.lang.Throwable -> L1b
            java.util.Map<java.lang.String, T extends com.kwad.sdk.core.report.g> r1 = r2.arn     // Catch: java.lang.Throwable -> L1b
            java.lang.String r0 = r0.actionId     // Catch: java.lang.Throwable -> L1b
            r1.remove(r0)     // Catch: java.lang.Throwable -> L1b
            goto L5
        L19:
            monitor-exit(r2)
            return
        L1b:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }
}
