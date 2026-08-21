package com.kwad.sdk.crash.online.monitor.block;

public final class d {
    private static com.kwad.sdk.crash.online.monitor.a.a aAO;

    public static com.kwad.sdk.crash.online.monitor.a.a EY() {
            com.kwad.sdk.crash.online.monitor.a.a r0 = com.kwad.sdk.crash.online.monitor.block.d.aAO
            return r0
    }

    public static boolean EZ() {
            com.kwad.sdk.crash.online.monitor.a.a r0 = com.kwad.sdk.crash.online.monitor.block.d.aAO
            if (r0 == 0) goto Lc
            boolean r0 = r0.Fc()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public static void d(com.kwad.sdk.crash.online.monitor.a.a r6) {
            if (r6 != 0) goto L3
            return
        L3:
            boolean r0 = r6.Ff()     // Catch: java.lang.Throwable -> L79
            java.lang.String r1 = "perfMonitor.BlockManager"
            if (r0 == 0) goto L11
            java.lang.String r6 = "allFuncDisable"
            com.kwad.sdk.core.e.c.d(r1, r6)     // Catch: java.lang.Throwable -> L79
            return
        L11:
            boolean r0 = com.kwad.sdk.crash.online.monitor.block.a.EW()     // Catch: java.lang.Throwable -> L79
            if (r0 != 0) goto L1d
            java.lang.String r6 = "!hasBlockMonitor"
            com.kwad.sdk.core.e.c.d(r1, r6)     // Catch: java.lang.Throwable -> L79
            return
        L1d:
            com.kwad.sdk.crash.online.monitor.block.a.a(r6)     // Catch: java.lang.Throwable -> L79
            com.kwad.sdk.crash.online.monitor.block.d.aAO = r6     // Catch: java.lang.Throwable -> L79
            r0 = 1
            boolean r0 = com.kwad.sdk.crash.online.monitor.block.a.bq(r0)     // Catch: java.lang.Throwable -> L79
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L79
            java.lang.String r3 = "hasTenBlockHook:"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L79
            r2.append(r0)     // Catch: java.lang.Throwable -> L79
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L79
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Throwable -> L79
            java.util.Random r2 = new java.util.Random     // Catch: java.lang.Throwable -> L79
            r2.<init>()     // Catch: java.lang.Throwable -> L79
            float r2 = r2.nextFloat()     // Catch: java.lang.Throwable -> L79
            double r2 = (double) r2     // Catch: java.lang.Throwable -> L79
            double r4 = r6.aqQ     // Catch: java.lang.Throwable -> L79
            int r2 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r2 >= 0) goto L49
            return
        L49:
            com.kwad.sdk.crash.online.monitor.block.b.a(r6)     // Catch: java.lang.Throwable -> L79
            boolean r2 = r6.Fd()     // Catch: java.lang.Throwable -> L79
            if (r2 == 0) goto L57
            if (r0 == 0) goto L57
            com.kwad.sdk.crash.online.monitor.block.BlockInjector.b(r6)     // Catch: java.lang.Throwable -> L79
        L57:
            boolean r0 = r6.Fe()     // Catch: java.lang.Throwable -> L79
            if (r0 == 0) goto L78
            r0 = 0
            boolean r0 = com.kwad.sdk.crash.online.monitor.block.a.br(r0)     // Catch: java.lang.Throwable -> L79
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L79
            java.lang.String r3 = "hasOtherBlockMonitor:"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L79
            r2.append(r0)     // Catch: java.lang.Throwable -> L79
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L79
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Throwable -> L79
            if (r0 == 0) goto L78
            com.kwad.sdk.crash.online.monitor.block.BlockInjector.tryProxyOtherOutput(r6)     // Catch: java.lang.Throwable -> L79
        L78:
            return
        L79:
            r6 = move-exception
            com.kwad.sdk.crash.b.l(r6)     // Catch: java.lang.Exception -> L7d
        L7d:
            return
    }
}
